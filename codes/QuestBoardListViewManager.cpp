void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4B130DD & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v1, v2);
    byte_4B130DD = 1;
  }
  static_fields = QuestBoardListViewManager_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->INTO_TIME = xmmword_BD3A20;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 0x700000016LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B130DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v5, v6);
    byte_4B130DC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.topItemList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bottomItemList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_GameObject_o *v15; // x0
  struct UnityEngine_GameObject_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B130A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4, v5);
    byte_4B130A3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(gameObject[7].klass);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mBoxCollider,
    (int64_t)Component_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v15, 0LL)) == 0LL)
    || (v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        this->fields.mNoneLabelParent = v16,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mNoneLabelParent,
          (int64_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(gameObject, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Component_o *mFolderBg; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  Il2CppObject *gameObject; // x21
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct ExUITexture_o *v36; // x21
  Il2CppObject *v37; // x0
  System_String_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x0
  __int64 *v43; // x8
  float v44; // s0
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22
  ExUITexture_o *v50; // x0
  System_String_o *v51; // x1
  System_Action_o *v52; // x2
  UnityEngine_Component_o *v53; // x19
  Il2CppObject *v54; // x0
  int32_t v55; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v56; // [xsp+8h] [xbp-38h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B130C1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&bgID, *(_QWORD *)&effectType);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestBoardListViewManager__BGChangeEffect_b__149_0__, v17, v18);
    sub_1BCA7E0(&Method_QuestBoardListViewManager__BGChangeEffect_b__149_1__, v19, v20);
    sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v21, v22);
    byte_4B130C1 = 1;
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
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v24);
        return;
      }
      QuestBoardListViewManager__RemoveTempBG(this, *(const MethodInfo **)&bgID);
      mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( mFolderBg )
      {
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                 gameObject,
                                                 (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v27 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0LL);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0LL);
            GameObjectExtensions__SafeSetParent(v27, parent, 0LL);
            if ( v27 )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v27,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = (struct ExUITexture_o *)Component_object;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.mFolderBgTemp,
                (int64_t)Component_object,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].monitor) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v36 = this->fields.mFolderBg;
                v55 = bgID;
                v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
                v38 = System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v37, 0LL);
                v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
                v43 = &Method_QuestBoardListViewManager__BGChangeEffect_b__149_1__;
                goto LABEL_20;
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
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v54, 0LL);
        if ( v53 )
        {
          v51 = (System_String_o *)mFolderBg;
          v50 = (ExUITexture_o *)v53;
          v52 = 0LL;
          goto LABEL_22;
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
LABEL_31:
    sub_1BCAA3C(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v44 = 0.0;
  if ( effectType )
    v44 = time;
  this->fields.mCrossFadeTime = v44;
  v36 = this->fields.mFolderBg;
  v57 = bgID;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v38 = System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v45, 0LL);
  v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  v43 = &Method_QuestBoardListViewManager__BGChangeEffect_b__149_0__;
LABEL_20:
  v49 = v42;
  System_Action___ctor(v42, (Il2CppObject *)this, *v43, 0LL);
  if ( !v36 )
    goto LABEL_31;
  v50 = v36;
  v51 = v38;
  v52 = v49;
LABEL_22:
  ExUITexture__SetAssetImage(v50, v51, v52, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B130C4 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewManager__CoroutineLoadAsset_d__153_TypeInfo, onCompleteLoad, method);
    byte_4B130C4 = 1;
  }
  v6 = sub_1BCAA2C(QuestBoardListViewManager__CoroutineLoadAsset_d__153_TypeInfo, onCompleteLoad, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = onCompleteLoad;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)onCompleteLoad, v13, v14, v15, v16, v17, v18);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  void *gameObject; // x0
  __int64 v57; // x1
  Il2CppObject *Component_object; // x24
  Il2CppObject *v59; // x0
  QuestBoardListViewItemDraw_c *v60; // x8
  UnityEngine_BoxCollider_o *v61; // x25
  int32_t SCRL_OBJ_DUMMY_NUM; // w21
  struct ListViewItemSeed_o *seed; // x8
  float v64; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v66; // x26
  float v67; // s9
  int32_t v68; // w1
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x8
  __int64 v72; // x8
  bool activeSelf; // w0
  __int64 v74; // x1
  QuestBoardListViewManager_c *v75; // x8
  bool v76; // w24
  float *p_INTO_TIME; // x8
  __int64 v78; // x9
  float v79; // s0
  float v80; // s1
  __int64 v81; // x1
  UILabel_o *mNoneLabel; // x24
  __int64 v83; // x2
  __int64 v84; // x3
  QuestBoardListViewItemDraw_c *v85; // x0
  __int64 v86; // x2
  __int64 v87; // x3
  QuestBoardListViewItemDraw_c *v88; // x0
  int32_t v89; // w21
  int v90; // w28
  int32_t i; // w23
  __int64 v92; // x8
  void *v93; // x25
  int32_t v94; // w24
  __int64 v95; // x2
  __int64 v96; // x3
  MapControl_QuestInfo_o *v97; // x26
  __int64 v98; // x8
  int32_t v99; // w27
  QuestBoardListViewItem_o *v100; // x0
  Il2CppObject *v101; // x25
  int32_t v102; // w2
  struct UnityEngine_GameObject_o *v103; // x24
  struct UnityEngine_GameObject_o *v104; // x26
  int32_t v105; // w1
  MapControl_QuestInfo_o *v106; // x3
  UnityEngine_GameObject_o *v107; // x4
  UnityEngine_GameObject_o *v108; // x5
  int32_t v109; // w6
  int32_t v110; // w7
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x8
  __int64 v114; // x8
  __int64 v115; // x8
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  int32_t size; // w21
  int v127; // w21
  int32_t v128; // w22
  Il2CppObject *Item; // x0
  MapControl_QuestInfo_o *v130; // x24
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  QuestBoardListViewItem_o *v134; // x0
  Il2CppObject *v135; // x25
  int32_t v136; // w2
  struct UnityEngine_GameObject_o *blackMarkPrefab; // x26
  struct UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v139; // w1
  MapControl_QuestInfo_o *v140; // x3
  UnityEngine_GameObject_o *v141; // x4
  UnityEngine_GameObject_o *v142; // x5
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  __int64 v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v153; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  QuestBoardListViewManager___c_c *v157; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v158; // x21
  System_Func_object__bool__o *_9__104_0; // x22
  Il2CppObject *v160; // x23
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  Il2CppObject *v168; // x0
  const MethodInfo *v169; // x1
  int32_t klass_high; // w8
  const MethodInfo *v171; // [xsp+0h] [xbp-90h]
  bool v172; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v174; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B130A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___, *(_QWORD *)&info_kind, qinf_list);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___, v15, v16);
    sub_1BCA7E0(&System_Func_QuestBoardListViewItem__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&QuestBoardListViewItemDraw_TypeInfo, v39, v40);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v41, v42);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__CreateList_b__104_0__, v49, v50);
    sub_1BCA7E0(&QuestBoardListViewManager___c_TypeInfo, v51, v52);
    sub_1BCA7E0(&StringLiteral_11036/*"QUEST_NONE"*/, v53, v54);
    byte_4B130A6 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
  if ( info_kind == 4 || info_kind == 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v55);
    TerminalPramsManager__LoadQuestReleasedFocusState(0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  v59 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v60 = QuestBoardListViewItemDraw_TypeInfo;
  v61 = (UnityEngine_BoxCollider_o *)v59;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v57);
    v60 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_121;
  SCRL_OBJ_DUMMY_NUM = v60->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_121;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_121;
  v64 = *((float *)gameObject + 74);
  mBaseClipRange = this->fields.mBaseClipRange;
  v66 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_object )
    goto LABEL_121;
  v67 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v68 = v67 == INFINITY ? 0x80000000 : (int)v67;
  UIWidget__set_height((UIWidget_o *)Component_object, v68, 0LL);
  if ( !v61 )
    goto LABEL_121;
  LODWORD(v173.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v61, 0LL);
  v173.fields.z = 0.0;
  v173.fields.y = v67;
  UnityEngine_BoxCollider__set_size(v61, v173, 0LL);
  v174.fields.y = (float)(mBaseClipRange - v67) * 0.5;
  v174.fields.z = clip_w;
  v174.fields.w = v67;
  this->fields.clipRange.fields.y = v67 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v174.fields.x = v64;
  UIPanel__set_baseClipRegion(v66, v174, 0LL);
  this->fields.mResetConsumeColor = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v69);
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v57);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v57, v70);
    byte_4B10F83 = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v57);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v71 = **((_QWORD **)gameObject + 23);
  if ( !v71 )
    goto LABEL_121;
  v72 = *(_QWORD *)(v71 + 264);
  if ( !v72 )
    goto LABEL_121;
  gameObject = *(void **)(v72 + 104);
  if ( !gameObject )
    goto LABEL_121;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  v75 = QuestBoardListViewManager_TypeInfo;
  v76 = activeSelf;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v74);
    v75 = QuestBoardListViewManager_TypeInfo;
  }
  p_INTO_TIME = &v75->static_fields->INTO_TIME;
  v78 = 1LL;
  if ( v76 )
    v78 = 3LL;
  v79 = p_INTO_TIME[v78];
  if ( v76 )
    p_INTO_TIME += 2;
  v80 = *p_INTO_TIME;
  this->fields.exitTime = v79;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.infoTime = v80;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0LL);
  if ( !qinf_list )
    goto LABEL_121;
  gameObject = this->fields.mNoneLabelParent;
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, qinf_list->fields._size < 1, 0LL);
  mNoneLabel = this->fields.mNoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"QUEST_NONE"*/, 0LL);
  if ( !mNoneLabel )
    goto LABEL_121;
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0LL);
  v85 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v57);
    v85 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v172 = isAllDisp;
    if ( !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85, v57);
      v85 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v127 = v85->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v127 < 1 )
      goto LABEL_104;
    v128 = 0;
    while ( 1 )
    {
      if ( v128 >= qinf_list->fields._size )
      {
        v130 = 0LL;
LABEL_91:
        blackMarkPrefab = this->fields.blackMarkPrefab;
        whiteMarkPrefab = this->fields.whiteMarkPrefab;
        v134 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v57, v83, v84);
        v135 = (Il2CppObject *)v134;
        v139 = v128;
        v136 = info_kind;
        v140 = v130;
        v141 = blackMarkPrefab;
        v142 = whiteMarkPrefab;
        goto LABEL_98;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)qinf_list,
               v128,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
      v130 = (MapControl_QuestInfo_o *)Item;
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
          v134 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v131, v132, v133);
          v135 = (Il2CppObject *)v134;
          v136 = 4;
          goto LABEL_97;
        }
      }
      else if ( !Item )
      {
        goto LABEL_91;
      }
      if ( !MapControl_QuestInfo__GetMine(v130, 0LL) )
        goto LABEL_91;
      gameObject = MapControl_QuestInfo__GetMine(v130, 0LL);
      if ( !gameObject )
        goto LABEL_121;
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)gameObject, 0LL) != 128 )
        goto LABEL_91;
      v134 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v57, v83, v84);
      v135 = (Il2CppObject *)v134;
      v136 = 5;
LABEL_97:
      v139 = v128;
      v140 = v130;
      v141 = 0LL;
      v142 = 0LL;
LABEL_98:
      QuestBoardListViewItem___ctor_34583812(v134, v139, v136, v140, v141, v142, 0, 0, v171);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v149 = *((_QWORD *)gameObject + 2);
      v150 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v149 )
        goto LABEL_121;
      v151 = *((int *)gameObject + 6);
      if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v135,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
      }
      else
      {
        v152 = v149 + 8 * v151;
        *((_DWORD *)gameObject + 6) = v151 + 1;
        *(_QWORD *)(v152 + 32) = v135;
        sub_1BCA784((PartyOrganizationUtility_o *)(v152 + 32), (int64_t)v135, v143, v144, v145, v146, v147, v148);
      }
      if ( v127 == ++v128 )
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
    sub_1BCAA3C(gameObject, v57);
  }
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, warSelectedQuestList->fields._size < 1, 0LL);
  v88 = QuestBoardListViewItemDraw_TypeInfo;
  v89 = warSelectedQuestList->fields._size;
  v172 = isAllDisp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v57);
    v88 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v90 = v88->static_fields->SCRL_OBJ_DUMMY_NUM + v89;
  if ( v90 >= 1 )
  {
    for ( i = 0; i != v90; ++i )
    {
      if ( i < warSelectedQuestList->fields._size
        && (gameObject = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)warSelectedQuestList,
                           i,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__)) != 0LL )
      {
        v92 = *((_QWORD *)gameObject + 2);
        v93 = gameObject;
        if ( !v92 )
          goto LABEL_121;
        gameObject = (void *)*((_QWORD *)gameObject + 3);
        if ( !gameObject )
          goto LABEL_121;
        v94 = *(_DWORD *)(v92 + 16);
        gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_121;
        gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, 0LL);
        v97 = (MapControl_QuestInfo_o *)*((_QWORD *)v93 + 3);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v98 = *((_QWORD *)v93 + 2);
          if ( !v98 )
            goto LABEL_121;
          v99 = *(_DWORD *)(v98 + 24);
          v100 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v57, v95, v96);
          v101 = (Il2CppObject *)v100;
          v102 = 6;
        }
        else
        {
          if ( !v97 )
            goto LABEL_121;
          gameObject = (void *)MapControl_QuestInfo__GetQuestType(*((MapControl_QuestInfo_o **)v93 + 3), 0LL);
          if ( (_DWORD)gameObject != 3 )
            goto LABEL_67;
          v113 = *((_QWORD *)v93 + 3);
          if ( !v113 )
            goto LABEL_121;
          gameObject = *(void **)(v113 + 104);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL);
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
            v115 = *((_QWORD *)v93 + 2);
            if ( !v115 )
              goto LABEL_121;
            v97 = (MapControl_QuestInfo_o *)*((_QWORD *)v93 + 3);
            v99 = *(_DWORD *)(v115 + 24);
            v100 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v57, v111, v112);
            v101 = (Il2CppObject *)v100;
            v102 = 2;
          }
          else
          {
LABEL_67:
            v114 = *((_QWORD *)v93 + 2);
            if ( !v114 )
              goto LABEL_121;
            v97 = (MapControl_QuestInfo_o *)*((_QWORD *)v93 + 3);
            v99 = *(_DWORD *)(v114 + 24);
            v100 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v57, v111, v112);
            v101 = (Il2CppObject *)v100;
            v102 = 4;
          }
        }
        v105 = i;
        v106 = v97;
        v107 = 0LL;
        v108 = 0LL;
        v109 = v99;
        v110 = v94;
      }
      else
      {
        v103 = this->fields.blackMarkPrefab;
        v104 = this->fields.whiteMarkPrefab;
        v100 = (QuestBoardListViewItem_o *)sub_1BCAA2C(QuestBoardListViewItem_TypeInfo, v57, v86, v87);
        v101 = (Il2CppObject *)v100;
        v102 = 6;
        v105 = i;
        v106 = 0LL;
        v107 = v103;
        v108 = v104;
        v109 = 0;
        v110 = 0;
      }
      QuestBoardListViewItem___ctor_34583812(v100, v105, v102, v106, v107, v108, v109, v110, v171);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v122 = *((_QWORD *)gameObject + 2);
      v123 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v122 )
        goto LABEL_121;
      v124 = *((int *)gameObject + 6);
      if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v101,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
      }
      else
      {
        v125 = v122 + 8 * v124;
        *((_DWORD *)gameObject + 6) = v124 + 1;
        *(_QWORD *)(v125 + 32) = v101;
        sub_1BCA784((PartyOrganizationUtility_o *)(v125 + 32), (int64_t)v101, v116, v117, v118, v119, v120, v121);
      }
    }
  }
LABEL_104:
  gameObject = this->fields.mNoneLabel;
  if ( !gameObject )
    goto LABEL_121;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0LL) )
    this->fields._IsShowingInfo_k__BackingField = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v172, -1, 0LL);
  v153 = System_Linq_Enumerable__Cast_object_(
           (System_Collections_IEnumerable_o *)this->fields.itemList,
           (const MethodInfo_2F20F80 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v157 = QuestBoardListViewManager___c_TypeInfo;
  v158 = (System_Collections_Generic_IEnumerable_TSource__o *)v153;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v154);
    v157 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v157->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v157->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v157, v154);
      v157 = QuestBoardListViewManager___c_TypeInfo;
    }
    v160 = (Il2CppObject *)v157->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_QuestBoardListViewItem__bool__TypeInfo,
                                                 v154,
                                                 v155,
                                                 v156);
    System_Func_object__bool____ctor(_9__104_0, v160, Method_QuestBoardListViewManager___c__CreateList_b__104_0__, 0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__104_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__104_0,
      (int64_t)_9__104_0,
      v162,
      v163,
      v164,
      v165,
      v166,
      v167);
  }
  v168 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
           v158,
           (System_Func_TSource__bool__o *)_9__104_0,
           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v168 )
  {
    klass_high = HIDWORD(v168[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !info_kind && (klass_high & 0x80000000) != 0 )
      goto LABEL_116;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !info_kind )
LABEL_116:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v169);
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
  __int64 v15; // x1
  UnityEngine_Object_o *QuestBoardObjForWarId; // x24
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x6

  if ( (byte_4B130AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isBoardDisp, *(_QWORD *)&warId);
    byte_4B130AC = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    *(const MethodInfo **)&warId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v17 = UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0LL, 0LL);
  if ( !v17 )
  {
    if ( !QuestBoardObjForWarId )
      sub_1BCAA3C(v17, v18);
    QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      v19);
  }
}


void __fastcall QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *itemList; // x20
  QuestBoardListViewManager___c_c *v18; // x0
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v20; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x0
  void *v29; // x1
  __int64 methodPtr_low; // x9
  __int64 v31; // x9
  MethodInfo *v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v35; // x8
  QuestBoardListViewManager_o *v36; // x0
  bool v37; // w1
  bool v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4B130A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___, method, v2);
    sub_1BCA7E0(&System_Func_ListViewItem__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestBoardListViewObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__106_0__, v13, v14);
    sub_1BCA7E0(&QuestBoardListViewManager___c_TypeInfo, v15, v16);
    byte_4B130A7 = 1;
  }
  if ( (this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField & 0x80000000) == 0 )
    return;
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList;
  v18 = QuestBoardListViewManager___c_TypeInfo;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, method);
    v18 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v18->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, method);
      v18 = QuestBoardListViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ListViewItem__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__106_0,
      v20,
      Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__106_0__,
      0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_ListViewItem__bool__o *)_9__106_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          itemList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
  if ( !v28 )
    return;
  v29 = QuestBoardListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v28->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1BCACFC(v28);
LABEL_30:
    sub_1BCACFC(itemList);
    QuestBoardListViewManager__ModifyAllRoadmapButtons(v36, v37, v38, v39);
    return;
  }
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = HIDWORD(v28[1].klass);
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)v28[6].monitor;
  if ( itemList )
  {
    v29 = QuestBoardListViewObject_TypeInfo;
    v31 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable[0].methodPtr) < (unsigned int)v31
      || (QuestBoardListViewObject_c *)itemList->klass->_2.typeHierarchy[v31 - 1] != QuestBoardListViewObject_TypeInfo )
    {
      goto LABEL_30;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v32 = (MethodInfo *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemList, 0LL, 0LL);
  if ( ((unsigned __int8)v32 & 1) == 0 )
  {
    if ( !itemList )
      goto LABEL_28;
    klass = itemList[8].klass;
    if ( !klass )
      goto LABEL_28;
    v32 = (MethodInfo *)klass->vtable[30].method;
    if ( !v32 )
      goto LABEL_28;
    RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)v32, this->fields._RoadmapAssetData_k__BackingField, 0LL);
    if ( !this->fields.initMode || this->fields.mFaded )
    {
      v35 = itemList[8].klass;
      if ( v35 )
      {
        v32 = (MethodInfo *)v35->vtable[30].method;
        if ( v32 )
        {
          RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)v32, 0, 1, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1BCAA3C(v32, v33);
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
    sub_1BCAA3C(0LL, end_act);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x5

  if ( (byte_4B130B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass124_0__EndSlideOut_b__0__, v6, v7);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass124_0_TypeInfo, v8, v9);
    byte_4B130B5 = 1;
  }
  v10 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass124_0_TypeInfo, end_act, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)end_act, v13, v14, v15, v16, v17, v18);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v19);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v10,
    Method_QuestBoardListViewManager___c__DisplayClass124_0__EndSlideOut_b__0__,
    0LL);
  QuestBoardListViewManager__SetMode(this, 0, v23, 0, 0, v24);
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
  __int64 v6; // x2
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B130AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&PartyServantListViewItem_TypeInfo, v5, v6);
    byte_4B130AF = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x26
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  __int64 v22; // x8
  UnityEngine_Object_o *v23; // x20
  __int64 v24; // x1
  void *v25; // x8
  __int64 v26; // x11
  UnityEngine_Object_o *v27; // x20
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B130AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestBoardListViewObject_TypeInfo, v15, v16);
    byte_4B130AD = 1;
  }
  memset(&v30, 0, sizeof(v30));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v30.fields._current;
    if ( v30.fields._current )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestBoardListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
      {
        monitor = v30.fields._current[7].monitor;
        if ( monitor )
        {
          v22 = monitor[14];
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 16) != 1 && *(_DWORD *)(v22 + 20) == warId )
            {
              v23 = (UnityEngine_Object_o *)v30.fields._current[6].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
              if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
              {
                v25 = current[6].monitor;
                if ( v25
                  && (v26 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                      *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)v26) )
                {
                  v27 = *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v26 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[6].monitor
                      : 0LL;
                }
                else
                {
                  v27 = 0LL;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
                if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  v27 = 0LL;
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (QuestBoardListViewObject_o *)v27;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B130B2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__,
      *(_QWORD *)&mode,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v9, v10);
    byte_4B130B2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v13);
    QuestBoardListViewObject__Init_34629928((QuestBoardListViewObject_o *)v15.fields._current, mode, 0LL, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__ModifyAllRoadmapButtons(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        bool isImmediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v14; // x1
  bool v15; // w20
  bool i; // w19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x8
  RoadmapButtonPrefab_o *v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B130A8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__,
      isEnable,
      isImmediate);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v11, v12);
    byte_4B130A8 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isEnable);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v15 = isEnable;
  for ( i = isImmediate; ; RoadmapButtonPrefab__ModifyRoadmapButton(v20, v15, i, 0LL) )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v17 )
      break;
    if ( !v21.fields._current )
      sub_1BCAA3C(v17, v18);
    klass = v21.fields._current[8].klass;
    if ( !klass )
      sub_1BCAA3C(v17, v18);
    v20 = (RoadmapButtonPrefab_o *)klass->vtable[30].method;
    if ( !v20 )
      sub_1BCAA3C(0LL, v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  MoveObject_o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Component_object; // x0
  MoveObject_o **v37; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  float v44; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v48; // x20
  float v49; // s13
  float v50; // s15
  float v51; // s14
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B130DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, *(_QWORD *)&easeType);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v13, v14);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__0__, v15, v16);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__1__, v17, v18);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo, v19, v20);
    byte_4B130DA = 1;
  }
  v21 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo, obj, *(_QWORD *)&easeType, is_force);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_QWORD *)(v21 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 16) = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)obj, v30, v31, v32, v33, v34, v35);
  *(float *)(v21 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v21 + 16), 0LL) + moveY;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v21 + 16),
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v21 + 24) = Component_object;
  v37 = (MoveObject_o **)(v21 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
  if ( is_force
    || (v44 = *(float *)(v21 + 32),
        v44 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v21 + 16), 0LL)) )
  {
    v22 = *v37;
    if ( *v37 )
    {
      MoveObject__Stop(v22, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v21 + 16), *(float *)(v21 + 32), 0LL);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_1BCAA3C(v22, v23);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v21 + 16), 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v61 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v21 + 16), 0LL);
  v48 = *(MoveObject_o **)(v21 + 24);
  v49 = v61.fields.x;
  v50 = v61.fields.y;
  v51 = v61.fields.z;
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v21,
    Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__0__,
    0LL);
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v21,
    Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__1__,
    0LL);
  if ( !v48 )
    goto LABEL_10;
  v63.fields.y = v50 + moveY;
  v62.fields.x = x;
  v62.fields.y = y;
  v62.fields.z = z;
  v63.fields.x = v49;
  v63.fields.z = v51;
  MoveObject__Play(v48, v62, v63, time, v55, v59, 0.0, easeType, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  UnityEngine_Component_o *monitor; // x24
  __int64 v27; // x1
  QuestBoardListViewItemDraw_c *v28; // x0
  uint32_t cctor_finished; // w8
  int POS_Y_ITVL_AREA; // w8
  int v31; // w25
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v33; // x4
  _BOOL8 v34; // x0
  __int64 v35; // x1
  UnityEngine_Component_o *v36; // x24
  __int64 v37; // x1
  QuestBoardListViewItemDraw_c *v38; // x0
  uint32_t v39; // w8
  int v40; // w8
  int v41; // w25
  UnityEngine_GameObject_o *v42; // x1
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x2
  System_Collections_IEnumerator_o *v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4B130AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isClose, isForce);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestBoardListViewItemDraw_TypeInfo, v21, v22);
    byte_4B130AA = 1;
  }
  memset(&v47, 0, sizeof(v47));
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    if ( !v47.fields._current )
      sub_1BCAA3C(v24, v25);
    monitor = (UnityEngine_Component_o *)v47.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v28 = QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v27);
          v28 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v28->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v27);
          v28 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v28->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v31 = POS_Y_ITVL_AREA;
      else
        v31 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_1BCAA3C(v28, v27);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v31 >> 1), moveTime, easeType, isForce, v33);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_48:
    sub_1BCAA3C(topItemList, isClose);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    if ( !v47.fields._current )
      sub_1BCAA3C(v34, v35);
    v36 = (UnityEngine_Component_o *)v47.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
    {
      v38 = QuestBoardListViewItemDraw_TypeInfo;
      v39 = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !v39 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v37);
          v38 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v40 = v38->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !v39 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v37);
          v38 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v40 = -v38->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v40 >= 0 )
        v41 = v40;
      else
        v41 = v40 + 1;
      if ( !v36 )
        sub_1BCAA3C(v38, v37);
      v42 = UnityEngine_Component__get_gameObject(v36, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v42, (float)(v41 >> 1), moveTime, easeType, isForce, v43);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( endAct )
  {
    v45 = QuestBoardListViewManager__WaitFinish(this, endAct, v44);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v45, 0LL);
  }
}


void __fastcall QuestBoardListViewManager__OnChangeAlphaAnim(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21

  if ( (byte_4B130BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v4, v5);
    byte_4B130BD = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v8 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v8,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v7);
      if ( ++v9 >= v8->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_1BCAA3C(ObjectList, v7);
  }
LABEL_8:
  this->fields.mResetConsumeColor = 0;
}


void __fastcall QuestBoardListViewManager__OnClickListView(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x22
  CommonUI_o *Instance; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  void **v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x24
  __int64 methodPtr_low; // x10
  MapControl_QuestInfo_o *v66; // x20
  int64_t AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v68; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v72; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  __int64 v76; // x1
  int32_t EventId; // w22
  int32_t GroupId; // w23
  QuestEntity_o *v79; // x0
  __int64 v80; // x2
  QuestEntity_o *v81; // x23
  __int64 v82; // x1
  __int64 v83; // x1
  Il2CppObject *current; // x0
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  TerminalSceneComponent_c *v89; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v91; // x1
  __int64 v92; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  Il2CppObject *Component_object; // x0
  __int64 v95; // x1
  _QWORD *v96; // x0
  System_Reflection_MethodBase_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  int32_t SpotID; // w22
  TerminalPramsManager_c *v101; // x0
  __int64 v102; // x2
  int32_t questId; // w22
  TerminalPramsManager_c *v104; // x0
  int32_t v105; // w22
  TerminalPramsManager_c *v106; // x0
  _QWORD *v107; // x0
  System_Reflection_MethodBase_o *v108; // x0
  __int64 v109; // x2
  __int64 v110; // x3
  EventEntity_o *eventEnt; // x20
  System_Action_o *v112; // x24
  const MethodInfo *v113; // x4
  __int64 v114; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v116; // x20
  _QWORD *v117; // x0
  System_Reflection_MethodBase_o *v118; // x0
  _QWORD *v119; // x0
  System_Reflection_MethodBase_o *v120; // x0
  int32_t v121; // w22
  _QWORD *v122; // x0
  System_Reflection_MethodBase_o *v123; // x0
  __int64 v124; // x2
  TerminalSceneComponent_c *v125; // x0
  __int64 v126; // x2
  TerminalSceneComponent_c *v127; // x0
  const MethodInfo *v128; // x1
  ScrTerminalListTop_o *v129; // x19
  _QWORD *v130; // x0
  System_Reflection_MethodBase_o *v131; // x0
  __int64 v132; // x2
  QuestEntity_o *v133; // x22
  TerminalSceneComponent_c *v134; // x0
  __int64 v135; // x1
  int32_t v136; // w23
  bool IsDisplayQuestInformation_34661772; // w0
  const MethodInfo *v138; // x2
  TerminalSceneComponent_c *v139; // x0
  const MethodInfo *v140; // x1
  ScrTerminalListTop_o *v141; // x19
  __int64 v142; // x9
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B130B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_QuestBoardListViewManager_OnClickListView__, v24, v25);
    sub_1BCA7E0(&QuestBoardListViewObject_TypeInfo, v26, v27);
    sub_1BCA7E0(&QuestInformationComponent_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v32, v33);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass130_0__OnClickListView_b__0__, v38, v39);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass130_0_TypeInfo, v40, v41);
    byte_4B130B8 = 1;
  }
  entities = 0LL;
  memset(&v144, 0, sizeof(v144));
  v42 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass130_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_164;
  *(_QWORD *)(v42 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)this, v45, v46, v47, v48, v49, v50);
  *(_QWORD *)(v42 + 32) = obj;
  v51 = (void **)(v42 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)obj, v52, v53, v54, v55, v56, v57);
  if ( !*(_QWORD *)(v42 + 32) )
    goto LABEL_164;
  v64 = *(_QWORD *)(*(_QWORD *)(v42 + 32) + 56LL);
  if ( !v64 )
    goto LABEL_164;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v64 + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v64 + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_164;
  }
  v66 = *(MapControl_QuestInfo_o **)(v64 + 120);
  if ( !v66 )
    return;
  AreaBoardInfo_k__BackingField = (int64_t)v66->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v42 + 24) = AreaBoardInfo_k__BackingField;
  v68 = (MapControl_AreaBoardInfo_o **)(v42 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 24), AreaBoardInfo_k__BackingField, v58, v59, v60, v61, v62, v63);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_164;
  dispType = v66->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v64 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v107 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v107 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
      v108 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v107, v107[4]);
      OverwriteAssetSoundName__PlaySystemSe(v108, 0, 0LL);
      if ( !*v68 )
        goto LABEL_164;
      eventEnt = (*v68)->fields.eventEnt;
      v112 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v109, v110);
      System_Action___ctor(
        v112,
        (Il2CppObject *)v42,
        Method_QuestBoardListViewManager___c__DisplayClass130_0__OnClickListView_b__0__,
        0LL);
      v114 = *(_QWORD *)(v42 + 24);
      if ( !v114 )
        goto LABEL_164;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v112, *(_DWORD *)(v114 + 20), v113) )
        return;
      Instance = (CommonUI_o *)*v51;
      if ( !*v51 )
        goto LABEL_164;
      mTerminalList = this->fields.mTerminalList;
      v116 = *v68;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_164;
      ScrTerminalListTop__Click_Area(mTerminalList, v116, (int32_t)Instance, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_92;
      if ( !*v68 )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v68 || !Instance )
        goto LABEL_164;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v68)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_23;
      v72 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v72, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_92;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0LL) )
      {
LABEL_92:
        v117 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v117 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
        v118 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v117, v117[4]);
        OverwriteAssetSoundName__PlaySystemSe(v118, 2, 0LL);
        return;
      }
LABEL_23:
      WarInfo_k__BackingField = v66->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_135;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_164;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v66->fields.questId, 18, 0LL);
      v79 = MapControl_QuestInfo__GetMine(v66, 0LL);
      if ( EventId != GroupId )
        goto LABEL_135;
      v81 = v79;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
      if ( !byte_4B13130 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v80);
        byte_4B13130 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.connectMark[1].fields.markBase) )
        goto LABEL_135;
      if ( !v81 )
        goto LABEL_164;
      if ( QuestEntity__HasFlag(v81, 2LL, 0LL) )
        goto LABEL_135;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v82);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_164;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_135;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_164;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v143,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v144 = v143;
      break;
    case 2:
    case 3:
      v96 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v96 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
      v97 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v96, v96[4]);
      OverwriteAssetSoundName__PlaySystemSe(v97, 0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v66, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v98);
      if ( !byte_4B12DCC )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v98, v99);
        byte_4B12DCC = 1;
      }
      v101 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v98);
        v101 = TerminalPramsManager_TypeInfo;
      }
      v101->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v66, 0LL);
      if ( !Instance )
        goto LABEL_164;
      if ( LODWORD(Instance->fields.topImg) == 3 )
      {
        questId = v66->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
        if ( !byte_4B1312E )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v102);
          byte_4B1312E = 1;
        }
        v104 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
          v104 = TerminalPramsManager_TypeInfo;
        }
        v104->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v105 = *(_DWORD *)(v64 + 148);
      if ( v105 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
        if ( !byte_4B12270 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v102);
          byte_4B12270 = 1;
        }
        v106 = TerminalPramsManager_TypeInfo;
LABEL_105:
        if ( !v106->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v106, v44);
          v106 = TerminalPramsManager_TypeInfo;
        }
        v106->static_fields->_SelectedRecollectionWarId_k__BackingField = v105;
        if ( !byte_4B1312F )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v102);
          v106 = TerminalPramsManager_TypeInfo;
          byte_4B1312F = 1;
        }
        if ( !v106->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v106, v44);
          v106 = TerminalPramsManager_TypeInfo;
        }
        v106->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_164;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v66->fields.warId, v66->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v122 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v122 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
      v123 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v122, v122[4]);
      OverwriteAssetSoundName__PlaySystemSe(v123, 0, 0LL);
      MapControl_QuestInfo__GetMine(v66, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v44, v124);
        byte_4B10F83 = 1;
      }
      v125 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
        v125 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v125->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_164;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v44, v126);
        byte_4B10F83 = 1;
      }
      v127 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
        v127 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v127->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_164;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v128);
      Instance = (CommonUI_o *)*v51;
      if ( !*v51 )
        goto LABEL_164;
      v129 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v129 )
        goto LABEL_164;
      ScrTerminalListTop__Click_WarBoard(v129, v66, (int32_t)Instance, 0LL);
      return;
    case 6:
      v119 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v119 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
      v120 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v119, v119[4]);
      OverwriteAssetSoundName__PlaySystemSe(v120, 0, 0LL);
      v121 = MapControl_QuestInfo__GetSpotID(v66, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
      if ( !byte_4B12DCC )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v102);
        byte_4B12DCC = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
        v106 = TerminalPramsManager_TypeInfo;
      }
      v106->static_fields->_SpotId_k__BackingField = v121;
      v105 = *(_DWORD *)(v64 + 148);
      if ( !byte_4B12270 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v102);
        v106 = TerminalPramsManager_TypeInfo;
        byte_4B12270 = 1;
      }
      goto LABEL_105;
    default:
      return;
  }
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v144,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    current = v144.fields._current;
    if ( !v144.fields._current )
      goto LABEL_166;
    if ( EventFortificationEntity__IsOpenFortificationWarningDialog(
           (EventFortificationEntity_o *)v144.fields._current,
           0LL) )
    {
      v85 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v85 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
      v86 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v85, v85[4]);
      OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v87);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v87, v88);
        byte_4B10F83 = 1;
      }
      v89 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v87);
        v89 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v89->static_fields->mInstance;
      if ( !mInstance )
        sub_1BCAA3C(0LL, v87);
      TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v91);
      fortificationWarningDialog = this->fields.fortificationWarningDialog;
      if ( !fortificationWarningDialog )
        sub_1BCAA3C(0LL, v92);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           fortificationWarningDialog,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
      if ( !Component_object )
        sub_1BCAA3C(0LL, v95);
      FortificationWarningDialogComponent__Open((FortificationWarningDialogComponent_o *)Component_object, 0LL);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v144,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v144,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_135:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_164;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
  v130 = Method_QuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v130 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewManager_OnClickListView__);
  v131 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v130, v130[4]);
  OverwriteAssetSoundName__PlaySystemSe(v131, 0, 0LL);
  v133 = MapControl_QuestInfo__GetMine(v66, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v44, v132);
    byte_4B10F83 = 1;
  }
  v134 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
    v134 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v134->static_fields->mInstance;
  if ( !Instance )
LABEL_164:
    sub_1BCAA3C(Instance, v44);
  v136 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v135);
  IsDisplayQuestInformation_34661772 = QuestInformationComponent__IsDisplayQuestInformation_34661772(v133, 0LL);
  if ( v136 < 1 || !IsDisplayQuestInformation_34661772 || v136 == v66->fields.questId )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v44, v138);
      byte_4B10F83 = 1;
    }
    v139 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
      v139 = TerminalSceneComponent_TypeInfo;
    }
    Instance = (CommonUI_o *)v139->static_fields->mInstance;
    if ( Instance )
    {
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v140);
      Instance = (CommonUI_o *)*v51;
      if ( *v51 )
      {
        v141 = this->fields.mTerminalList;
        Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
        if ( v141 )
        {
          ScrTerminalListTop__Click_Quest(v141, v66, (int32_t)Instance, 0LL);
          return;
        }
      }
    }
    goto LABEL_164;
  }
  Instance = (CommonUI_o *)*v51;
  if ( !*v51 )
    goto LABEL_164;
  v142 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v142
    || (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v142 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_1BCACFC(Instance);
LABEL_166:
    sub_1BCAA3C(current, v83);
  }
  QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v138);
}


void __fastcall QuestBoardListViewManager__OnCompleteAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *loadedAssetData,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  this->fields.effectAssetData = loadedAssetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectAssetData,
    (int64_t)loadedAssetData,
    (int64_t)onCompleteLoad,
    (int32_t)method,
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

  if ( (byte_4B130CB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback1, endAct);
    byte_4B130CB = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1);
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

  if ( (byte_4B130CC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback1, endAct);
    byte_4B130CC = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1);
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
      sub_1BCAA3C(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_70175492(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4B130CD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback1, endAct);
    byte_4B130CD = 1;
  }
  effectAppearFadeComponent = (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1);
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
  __int64 v8; // x1
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v10; // x22
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_GameObject_o *v14; // x0
  float v15; // s0
  UnityEngine_Transform_o *v16; // x22
  QuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x4
  QuestBoardListEffectComponent_o *v19; // x1
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_GameObject_o *v21; // x0
  float LocalPositionY; // s0
  UnityEngine_Transform_o *v23; // x22

  if ( (byte_4B130D7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback, endAct);
    byte_4B130D7 = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
    {
      ActionExtensions__Call(playingCallback, 0LL);
      ActionExtensions__Call(endAct, 0LL);
      return;
    }
  }
  v10 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v20 = (UnityEngine_GameObject_o *)gameObject;
        v21 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v21, 0LL);
        GameObjectExtensions__SetLocalPositionY(v20, LocalPositionY, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v23 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0LL);
            if ( v23 )
            {
              UnityEngine_Transform__SetParent_70175492(v23, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v19 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(gameObject, v11);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_26;
  v13 = (UnityEngine_GameObject_o *)gameObject;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v15 = GameObjectExtensions__GetLocalPositionY(v14, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, v15, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_26;
  v16 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v16 )
    goto LABEL_26;
  UnityEngine_Transform__SetParent_70175492(v16, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v19 = this->fields.effectDisappear2Component;
LABEL_25:
  QuestBoardListViewManager__PlayBoardEffect(v17, v19, playingCallback, endAct, v18);
}


void __fastcall QuestBoardListViewManager__PlayBoardDisappear2Effect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *effectDisappear2Component; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v12; // x22
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
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
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v30; // x0
  int POS_Y_ITVL_AREA; // w8
  int v32; // w8
  UnityEngine_Transform_o *v33; // x22

  if ( (byte_4B130D6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback1, endAct);
    sub_1BCA7E0(&QuestBoardListViewItemDraw_TypeInfo, v7, v8);
    byte_4B130D6 = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
    {
      ActionExtensions__Call(playingCallback1, 0LL);
      ActionExtensions__Call(endAct, 0LL);
      return;
    }
  }
  v12 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v26 = (UnityEngine_GameObject_o *)gameObject;
        v27 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v27, 0LL);
        v30 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v28);
          v30 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v30->static_fields->POS_Y_ITVL_AREA;
        v32 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v26, LocalPositionY + (float)(v32 >> 1), 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v33 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0LL);
            if ( v33 )
            {
              UnityEngine_Transform__SetParent_70175492(v33, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v25 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(gameObject, v13);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_36;
  v15 = (UnityEngine_GameObject_o *)gameObject;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v18 = GameObjectExtensions__GetLocalPositionY(v16, 0LL);
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v17);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v20 = v19->static_fields->POS_Y_ITVL_AREA;
  v21 = v20 <= 0 ? -v20 : 1 - v20;
  GameObjectExtensions__SetLocalPositionY(v15, v18 + (float)(v21 >> 1), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_36;
  v22 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v22 )
    goto LABEL_36;
  UnityEngine_Transform__SetParent_70175492(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v25 = this->fields.effectDisappear2Component;
LABEL_35:
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

  if ( (byte_4B130D5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback1, endAct);
    byte_4B130D5 = 1;
  }
  effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1);
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

  if ( (byte_4B130D4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playingCallback1, endAct);
    byte_4B130D4 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o **v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Action_o **v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  QuestBoardListEffectComponent_o *v44; // x20
  System_Action_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x3

  if ( (byte_4B130D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, effectComponent, playingCallback1);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__0__, v10, v11);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__1__, v12, v13);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass174_0_TypeInfo, v14, v15);
    byte_4B130D8 = 1;
  }
  v16 = sub_1BCAA2C(
          QuestBoardListViewManager___c__DisplayClass174_0_TypeInfo,
          effectComponent,
          playingCallback1,
          endAct);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = playingCallback1;
  v25 = (System_Action_o **)(v16 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)playingCallback1, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = effectComponent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)effectComponent, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v16 + 32) = endAct;
  v32 = (System_Action_o **)(v16 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)endAct, v33, v34, v35, v36, v37, v38);
  v40 = *(UnityEngine_Object_o **)(v16 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( !UnityEngine_Object__op_Equality(v40, 0LL, 0LL) )
  {
    v44 = *(QuestBoardListEffectComponent_o **)(v16 + 24);
    v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v16,
      Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__0__,
      0LL);
    v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
    System_Action___ctor(
      v49,
      (Il2CppObject *)v16,
      Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v44 )
    {
      QuestBoardListEffectComponent__Play(v44, v45, v49, v50);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v17, v18);
  }
  if ( *v25 )
    ActionExtensions__Call(*v25, 0LL);
  if ( *v32 )
    ActionExtensions__Call(*v32, 0LL);
}


void __fastcall QuestBoardListViewManager__ReleaseAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  AssetData_o *effectAssetData; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  AssetData_o *fortificationAssetData; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4B130D9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B130D9 = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fortificationWarningDialog, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab,
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
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v51);
    AssetManager__releaseAsset_38505704(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectAssetData, 0LL, v53, v54, v55, v56, v57, v58);
  }
  fortificationAssetData = this->fields.fortificationAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v51);
  AssetManager__releaseAsset_38505704(fortificationAssetData, 0LL);
  this->fields.fortificationAssetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fortificationAssetData, 0LL, v60, v61, v62, v63, v64, v65);
  AssetManager__releaseAsset_38505704(this->fields._RoadmapAssetData_k__BackingField, 0LL);
  this->fields._RoadmapAssetData_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._RoadmapAssetData_k__BackingField,
    0LL,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
}


void __fastcall QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mFolderBgTemp; // x20
  __int64 v5; // x1
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B130C2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B130C2 = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0LL, 0LL) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_1BCAA3C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_mFolderBgTemp, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t v31; // x20
  CommonUI_o *Instance; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  System_Action_o *v50; // x0
  __int64 *v51; // x8
  __int64 v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x23
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x2
  float exitTime; // s0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_o *v66; // x21
  const MethodInfo *v67; // x2
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Action_o *v73; // x21
  const MethodInfo *v74; // x5
  const MethodInfo *v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  Il2CppObject *v79; // x20
  AvalonSceneManager_c *v80; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v82; // x21
  CommonUI_o *v83; // x0
  float v84; // s0
  System_Action_o *v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  Il2CppObject *v89; // x21
  AvalonSceneManager_c *v90; // x8
  float v91; // s8
  System_Action_o *v92; // x22

  if ( (byte_4B130B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, end_act);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__0__, v17, v18);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__1__, v19, v20);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__8__, v21, v22);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__9__, v23, v24);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass121_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_2__RequestListObject_b__7__, v27, v28);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass121_2_TypeInfo, v29, v30);
    byte_4B130B3 = 1;
  }
  v31 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass121_0_TypeInfo, *(_QWORD *)&mode, end_act, isWhiteFade);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_39;
  *(_QWORD *)(v31 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 32) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)end_act, v40, v41, v42, v43, v44, v45);
  *(_BYTE *)(v31 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v46);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  *(_BYTE *)(v31 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
      v51 = &Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__0__;
      goto LABEL_19;
    case 4:
      v52 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass121_2_TypeInfo, v47, v48, v49);
      System_Object___ctor((Il2CppObject *)v52, 0LL);
      if ( !v52 )
        goto LABEL_39;
      *(_QWORD *)(v52 + 24) = v31;
      v59 = v52 + 24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 24), v31, v53, v54, v55, v56, v57, v58);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v52 + 16) = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v60);
      if ( !isWhiteFade )
        goto LABEL_42;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
      Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_42:
        if ( *(_QWORD *)v59 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v59 + 24LL) )
          {
            exitTime = *(float *)(v52 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v52 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v61);
          if ( *(_QWORD *)v59 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v52 + 16),
              *(System_Action_o **)(*(_QWORD *)v59 + 32LL),
              v75);
            goto LABEL_37;
          }
        }
LABEL_39:
        sub_1BCAA3C(Instance, v33);
      }
      this->fields.mFaded = 1;
      v79 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v80 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v76);
        v80 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v80->static_fields->DEFAULT_FADE_TIME;
      v82 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v76, v77, v78);
      System_Action___ctor(
        v82,
        (Il2CppObject *)v52,
        Method_QuestBoardListViewManager___c__DisplayClass121_2__RequestListObject_b__7__,
        0LL);
      if ( !v79 )
        goto LABEL_39;
      v83 = (CommonUI_o *)v79;
      v84 = DEFAULT_FADE_TIME;
      v85 = v82;
LABEL_36:
      CommonUI__maskFadeout(v83, 2, v84, v85, 0LL);
LABEL_37:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v49);
      v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
      v51 = &Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__1__;
LABEL_19:
      v66 = v50;
      System_Action___ctor(v50, (Il2CppObject *)v31, *v51, 0LL);
      QuestBoardListViewManager__changeBG(this, v66, v67);
      return;
    case 6:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v49);
      if ( !isWhiteFade )
        goto LABEL_24;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v68);
      if ( TerminalPramsManager__IsAuto(0LL) )
      {
LABEL_24:
        QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, 0.0, v69);
        v73 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v70, v71, v72);
        System_Action___ctor(
          v73,
          (Il2CppObject *)v31,
          Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v73, 0, 0, v74);
        goto LABEL_37;
      }
      this->fields.mFaded = 1;
      v89 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v90 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v86);
        v90 = AvalonSceneManager_TypeInfo;
      }
      v91 = v90->static_fields->DEFAULT_FADE_TIME;
      v92 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
      System_Action___ctor(
        v92,
        (Il2CppObject *)v31,
        Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__8__,
        0LL);
      if ( !v89 )
        goto LABEL_39;
      v83 = (CommonUI_o *)v89;
      v84 = v91;
      v85 = v92;
      goto LABEL_36;
    default:
      ActionExtensions__Call(*(System_Action_o **)(v31 + 32), 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  Il2CppObject *FlagFromOnEventStart; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  QuestBoardListViewManager_o *v29; // x0
  const MethodInfo *v30; // x3
  int32_t id; // w21
  int32_t v32; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  NetworkManager_ResultCallbackFunc_o *v36; // x19
  __int64 v37; // x1
  int32_t flagType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B130BC & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, eventEntity, clickAreaFunc);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass134_0__RequestToRaiseTutorialFlag_b__0__, v16, v17);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass134_0_TypeInfo, v18, v19);
    byte_4B130BC = 1;
  }
  flagType = 0;
  v20 = sub_1BCAA2C(
          QuestBoardListViewManager___c__DisplayClass134_0_TypeInfo,
          eventEntity,
          clickAreaFunc,
          *(_QWORD *)&warId);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_17;
  *(_QWORD *)(v20 + 16) = clickAreaFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)clickAreaFunc, v23, v24, v25, v26, v27, v28);
  FlagFromOnEventStart = (Il2CppObject *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                           v29,
                                           &flagType,
                                           eventEntity,
                                           v30);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_17;
    id = eventEntity->fields.id;
    v32 = flagType;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22);
    if ( !CondType__IsEventTutorialFlagOn(id, v32, 0LL) )
    {
      FlagFromOnEventStart = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_17;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v36 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
        NetworkManager_ResultCallbackFunc___ctor(
          v36,
          (Il2CppObject *)v20,
          Method_QuestBoardListViewManager___c__DisplayClass134_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
        FlagFromOnEventStart = NetworkManager__getRequest_object_(
                                 v36,
                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)FlagFromOnEventStart, v32, id, 0LL);
          return 1;
        }
LABEL_17:
        sub_1BCAA3C(FlagFromOnEventStart, v22);
      }
    }
  }
  return 0;
}


void __fastcall QuestBoardListViewManager__ResetAlphaAnimTime(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  QuestBoardListViewManager_c *v7; // x0
  float v8; // s8
  System_Func_float__float__float__float__o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  AlphaTransitionCalculator_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4B130BA & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    byte_4B130BA = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v7 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v6);
    v7 = QuestBoardListViewManager_TypeInfo;
  }
  v8 = ChangedFPSUtil__CovertFrameNumToSecond(v7->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v13 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v10, v11, v12);
  AlphaTransitionCalculator___ctor(v13, v8, v9, 0LL);
  this->fields.rewardIconAlphaCalculator = v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rewardIconAlphaCalculator,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_1BCAA3C(0LL, v20);
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
    sub_1BCAA3C(mFolderBg, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  Il2CppObject *current; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B130DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITouchPress___, isActive, isForcedActive);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v13, v14);
    this = (QuestBoardListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B130DB = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
        (this = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(v6, v19)) == 0LL) )
  {
LABEL_31:
    sub_1BCAA3C(this, isActive);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v22 )
    {
      if ( !current )
        sub_1BCAA3C(v22, v23);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)current,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v26 )
      {
        if ( !Component_object )
          sub_1BCAA3C(v26, v27);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0LL);
      }
      if ( isActive && QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)current, v27) )
        QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)current, v6->fields.mTerminalList, v28);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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

  if ( (byte_4B130B7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&item_index, isAnimation);
    byte_4B130B7 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&item_index);
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0LL, 0LL);
  if ( v10 )
  {
    v12 = this->fields.effectAppearComponent;
    if ( !v12 )
      sub_1BCAA3C(v10, v11);
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
    sub_1BCAA3C(0LL, v12);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetNoneLabelActive(
        QuestBoardListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mNoneLabelParent; // x0

  mNoneLabelParent = this->fields.mNoneLabelParent;
  if ( !mNoneLabelParent )
    sub_1BCAA3C(0LL, isActive);
  UnityEngine_GameObject__SetActive(mNoneLabelParent, isActive, 0LL);
}


void __fastcall QuestBoardListViewManager__SetObjectItem(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 methodPtr_low; // x10
  __int64 v19; // x2
  ListViewSort_c *klass; // x8
  __int64 v21; // x21
  QuestBoardListViewManager_o *v22; // x23
  __int64 v23; // x2
  System_String_o *ActiveStateName; // x22
  __int64 v25; // x1
  Il2CppObject *Component_object; // x19
  const MethodInfo *v27; // x2

  v5 = this;
  if ( (byte_4B130B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITouchPress___, obj, item);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&QuestBoardListViewObject_TypeInfo, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_8978/*"Map Touch Disable"*/, v14, v15);
    this = (QuestBoardListViewManager_o *)sub_1BCA7E0(&StringLiteral_3432/*"CAPTER INIT"*/, v16, v17);
    byte_4B130B0 = 1;
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
    QuestBoardListViewObject__Init_34629928((QuestBoardListViewObject_o *)obj, 2, 0LL, method);
    return;
  }
  QuestBoardListViewObject__Init_34629928((QuestBoardListViewObject_o *)obj, 3, 0LL, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, obj);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, obj, v19);
    byte_4B10F83 = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, obj);
    this = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = this->fields.sort->klass;
  if ( !klass )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_45;
  v21 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
  this = (QuestBoardListViewManager_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_45;
  v22 = this;
  this = (QuestBoardListViewManager_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)v21, 0LL);
  if ( !this )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, obj);
  if ( !byte_4B1312D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, obj, v23);
    byte_4B1312D = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, obj);
    this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.sort[3].fields.expUpDispType) )
  {
    if ( !v22 )
      goto LABEL_45;
    if ( (System_String__IndexOf_62432796((System_String_o *)v22, (System_String_o *)StringLiteral_3432/*"CAPTER INIT"*/, 0LL) & 0x80000000) == 0 )
      return;
    this = *(QuestBoardListViewManager_o **)(v21 + 104);
    if ( !this )
LABEL_45:
      sub_1BCAA3C(this, obj);
    this = (QuestBoardListViewManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    if ( !ActiveStateName )
      goto LABEL_45;
    if ( (System_String__IndexOf_62432796(ActiveStateName, (System_String_o *)StringLiteral_8978/*"Map Touch Disable"*/, 0LL) & 0x80000000) == 0 )
    {
LABEL_36:
      this = *(QuestBoardListViewManager_o **)(v21 + 104);
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
                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
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
          QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)obj, v5->fields.mTerminalList, v27);
        }
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  SlideFadeObject_o *v9; // x19
  float v10; // s8
  float v11; // s10
  float v12; // s9
  QuestBoardListViewManager_c *v13; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B130B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, method, v2);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    byte_4B130B6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v8);
  v9 = (SlideFadeObject_o *)Component_object;
  v11 = *(float *)&Component_object[4].klass;
  v10 = *((float *)&Component_object[4].klass + 1);
  v12 = *(float *)&Component_object[4].monitor;
  v13 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v8);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v13);
  v15.fields.y = v10;
  v15.fields.z = v12;
  v15.fields.x = v11 + OUT_POS_OFS_X;
  SlideFadeObject__SetPosition(v9, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetScrollBarEnable(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *blockMask; // x22
  PartyOrganizationUtility_o *p_blockMask; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  UnityEngine_Object_o *blockMaskPrefab; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_GameObject_o *v30; // x19

  if ( (byte_4B130A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B130A4 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
  p_blockMask = (PartyOrganizationUtility_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__DestroyImmediate_70154432(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1BCA784(p_blockMask, 0LL, v11, v12, v13, v14, v15, v16);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v20 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      v21 = UnityEngine_Object__Instantiate_object_(
              v20,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v21;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.blockMask, (int64_t)v21, v22, v23, v24, v25, v26, v27);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.onEffectPanel,
        0LL);
      v30 = this->fields.blockMask;
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
        byte_4B109C1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *scrollView; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x21

  DEFAULT_SCROLL_VIEW_DEPTH = depth;
  if ( (byte_4B130C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth, isDefault);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v9, v10);
    byte_4B130C3 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, *(_QWORD *)&depth);
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
    sub_1BCAA3C(scrollView, *(_QWORD *)&depth);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *itemList; // x0
  UnityEngine_Object_o *v12; // x21
  __int64 methodPtr_low; // x9
  QuestBoardListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  v5 = idx;
  if ( (byte_4B130BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&idx, onOff);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestBoardListViewObject_TypeInfo, v9, v10);
    byte_4B130BF = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v5,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemList )
    goto LABEL_14;
  v12 = (UnityEngine_Object_o *)*((_QWORD *)itemList + 13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  itemList = (void *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) == 0 )
    goto LABEL_13;
  if ( !v12 )
LABEL_14:
    sub_1BCAA3C(itemList, *(_QWORD *)&idx);
  *(_QWORD *)&idx = QuestBoardListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v12->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewObject_c *)v12->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewObject_TypeInfo )
  {
    itemList = v12[5].monitor;
    if ( itemList )
    {
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)itemList, onOff, 0LL);
LABEL_13:
      this->fields._IsShowingInfo_k__BackingField = onOff;
      return;
    }
    goto LABEL_14;
  }
  sub_1BCACFC(v12);
  QuestBoardListViewManager__RequestConsumeColorReset(v14, v15);
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21

  if ( (byte_4B130BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v4, v5);
    byte_4B130BE = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  v8 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v8,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)ObjectList[3].monitor;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0LL);
      if ( ++v9 >= v8->fields._size )
        goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v7);
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
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *v31; // x0
  Il2CppObject *Component_object; // x0
  __int64 v33; // x1
  SlideFadeObject_o *v34; // x20
  float OUT_POS_OFS_X; // s9
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x21

  if ( (byte_4B130B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v8, v9);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass122_0__SetSlideOut_b__0__, v12, v13);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo, v14, v15);
    byte_4B130B4 = 1;
  }
  v16 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo, end_act, method, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)end_act, v25, v26, v27, v28, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  v31 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v31,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v34 = (SlideFadeObject_o *)Component_object;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v33);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_object);
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v16,
    Method_QuestBoardListViewManager___c__DisplayClass122_0__SetSlideOut_b__0__,
    0LL);
  if ( !v34 )
LABEL_9:
    sub_1BCAA3C(gameObject, v18);
  SlideFadeObject__SlideOut_34347584(v34, OUT_POS_OFS_X, time, 0.0, v39, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetTerminalTopEffectPlay(
        QuestBoardListViewManager_o *this,
        int32_t targetWarId,
        bool isClose,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x8
  int32_t size; // w2
  int v21; // w9
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x8
  int32_t v23; // w2
  int v24; // w9
  char v25; // w26
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v34; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x8
  _QWORD *monitor; // x8
  __int64 v45; // x8
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B130A9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&targetWarId,
      isClose);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    this = (QuestBoardListViewManager_o *)sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v17, v18);
    byte_4B130A9 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( targetWarId )
  {
    topItemList = v6->fields.topItemList;
    if ( !topItemList )
      goto LABEL_42;
    size = topItemList->fields._size;
    v21 = topItemList->fields._version + 1;
    topItemList->fields._size = 0;
    topItemList->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)topItemList->fields._items, 0, size, 0LL);
    bottomItemList = v6->fields.bottomItemList;
    if ( !bottomItemList )
      goto LABEL_42;
    v23 = bottomItemList->fields._size;
    v24 = bottomItemList->fields._version + 1;
    bottomItemList->fields._size = 0;
    bottomItemList->fields._version = v24;
    if ( v23 >= 1 )
      System_Array__Clear((System_Array_o *)bottomItemList->fields._items, 0, v23, 0LL);
    this = (QuestBoardListViewManager_o *)v6->fields.itemList;
    if ( !this )
LABEL_42:
      sub_1BCAA3C(this, *(_QWORD *)&targetWarId);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v25 = 1;
    v47 = v46;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v47,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v47,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        current = v47.fields._current;
        if ( v47.fields._current )
        {
          methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v47.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestBoardListViewItem_c *)v47.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v47.fields._current[7].monitor;
            if ( monitor )
            {
              v45 = monitor[14];
              if ( v45 )
              {
                if ( *(_DWORD *)(v45 + 16) != 1 && *(_DWORD *)(v45 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v25 & 1) != 0 )
        {
          v34 = (System_Collections_Generic_List_object__o *)v6->fields.topItemList;
          if ( !v34 )
            sub_1BCAA3C(0LL, v47.fields._current);
          items = v34->fields._items;
          v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v34->fields._version;
          if ( !items )
            sub_1BCAA3C(v34, current);
          v37 = v34->fields._size;
          if ( (unsigned int)v37 >= items->max_length )
          {
            v25 = 1;
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              current,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + v37;
            v25 = 1;
            v34->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)current;
            sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)current, v26, v27, v28, v29, v30, v31);
          }
        }
        else
        {
          v39 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
          if ( !v39 )
            sub_1BCAA3C(0LL, v47.fields._current);
          v40 = v39->fields._items;
          v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v39->fields._version;
          if ( !v40 )
            sub_1BCAA3C(v39, current);
          v42 = v39->fields._size;
          if ( (unsigned int)v42 < v40->max_length )
            goto LABEL_24;
LABEL_35:
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          v25 = 0;
        }
      }
      v25 = 0;
      if ( isClose )
      {
        v39 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
        if ( !v39 )
          sub_1BCAA3C(0LL, v47.fields._current);
        v40 = v39->fields._items;
        v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v39->fields._version;
        if ( !v40 )
          sub_1BCAA3C(v39, current);
        v42 = v39->fields._size;
        if ( (unsigned int)v42 >= v40->max_length )
          goto LABEL_35;
LABEL_24:
        v43 = &v40->obj.klass + v42;
        v39->fields._size = v42 + 1;
        v43[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)current, v26, v27, v28, v29, v30, v31);
        v25 = 0;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *v18; // x22
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x21
  __int64 v21; // x2
  UnityEngine_Transform_o *v22; // x21
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x2

  if ( (byte_4B130C9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B130C9 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0LL, 0LL) )
    {
      v14 = (Il2CppObject *)this->fields.boardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v14,
                                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
              v20 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4B109C1 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v19);
                byte_4B109C1 = 1;
              }
              if ( v20 )
              {
                UnityEngine_Transform__set_localPosition(
                  v20,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                v22 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4B109C7 )
                {
                  transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v16, v21);
                  byte_4B109C7 = 1;
                }
                if ( v22 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v22,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                  v24 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4B109C6 )
                  {
                    transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v23);
                    byte_4B109C6 = 1;
                  }
                  if ( v24 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v24,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v17,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&this->fields.effectAppearComponent,
                      (int64_t)Component_object,
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
                        v33);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1BCAA3C(transform, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Transform_o *v18; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2

  if ( (byte_4B130D1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B130D1 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v14 = (Il2CppObject *)this->fields.nt2BoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v14,
                                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v17,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.effectAppearComponent,
                (int64_t)Component_object,
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
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v27);
                return;
              }
            }
          }
        }
      }
      sub_1BCAA3C(transform, v16);
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x21
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x2

  if ( (byte_4B130CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B130CA = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v10 = (Il2CppObject *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v10,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v13 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v14 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v14 )
        {
          UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)transform, 0LL);
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
          v16 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4B109C1 )
          {
            transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v15);
            byte_4B109C1 = 1;
          }
          if ( v16 )
          {
            UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
            v18 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4B109C7 )
            {
              transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v12, v17);
              byte_4B109C7 = 1;
            }
            if ( v18 )
            {
              UnityEngine_Transform__set_localRotation(
                v18,
                UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                0LL);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
              v20 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4B109C6 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v19);
                byte_4B109C6 = 1;
              }
              if ( v20 )
              {
                UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     v13,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.effectAppearFadeComponent,
                  (int64_t)Component_object,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
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
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v29);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1BCAA3C(transform, v12);
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_4B130D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B130D2 = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v10 = (Il2CppObject *)this->fields.nt2BoardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v10,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v13 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v14 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v14 )
        {
          UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)transform, 0LL);
          GameObjectExtensions__ResetTransform(v13, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v13,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.effectAppearFadeComponent,
            (int64_t)Component_object,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearFadeComponent, 0LL, 0LL) )
            return;
          transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
          if ( *p_effectAppearFadeComponent )
          {
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v23);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(transform, v12);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x22
  __int64 v15; // x1
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x21
  __int64 transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_Transform_o *v22; // x23
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x22
  __int64 v25; // x2
  UnityEngine_Transform_o *v26; // x22
  __int64 v27; // x2
  UnityEngine_Transform_o *v28; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2
  float v38; // s1

  if ( (byte_4B130CE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___,
      *(_QWORD *)&warId,
      isNextBoardReleased);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B130CE = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isNextBoardReleased);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( !UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0LL, 0LL) )
    {
      v18 = (Il2CppObject *)this->fields.boardDisappearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v18,
                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_32;
      v21 = (UnityEngine_GameObject_o *)transform;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_32;
      v22 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !transform )
        goto LABEL_32;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !v22 )
        goto LABEL_32;
      UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
      v24 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B109C1 )
      {
        transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v23);
        byte_4B109C1 = 1;
      }
      if ( !v24 )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
      v26 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B109C7 )
      {
        transform = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v20, v25);
        byte_4B109C7 = 1;
      }
      if ( !v26 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(
        v26,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
      v28 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B109C6 )
      {
        transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v27);
        byte_4B109C6 = 1;
      }
      if ( !v28 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v21,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.effectDisappearComponent,
        (int64_t)Component_object,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      transform = UnityEngine_Object__op_Equality(
                    (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                    0LL,
                    0LL);
      if ( (transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v21,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0LL),
            (transform = (__int64)*p_effectDisappearComponent) == 0) )
      {
LABEL_32:
        sub_1BCAA3C(transform, v20);
      }
      if ( isNextBoardReleased )
        v38 = endTime;
      else
        v38 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v38, v37);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x23
  __int64 v23; // x1
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x22
  struct UnityEngine_GameObject_o **p_ntBoardAppearEffectPrefab; // x24
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  __int64 transform; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Transform_o *v31; // x24
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x23
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x23
  __int64 v36; // x2
  UnityEngine_Transform_o *v37; // x23
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  const MethodInfo *v48; // x2
  Il2CppObject *v49; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  UnityEngine_Object_o *effectDisappear2Component; // x21
  __int64 v59; // x1
  UnityEngine_Object_o *effectDisappearComponent; // x21
  const MethodInfo *v61; // x2
  struct QuestBoardListEffectDisappearComponent_o *v62; // x8
  struct QuestBoardListEffectDisappearComponent_o *v63; // x8

  if ( (byte_4B130CF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___,
      *(_QWORD *)&warId,
      isOnlyBoardOpen);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B130CF = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isOnlyBoardOpen);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( !UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v27 = (Il2CppObject *)*p_ntBoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v27,
                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v30 = (UnityEngine_GameObject_o *)transform;
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v31 = (UnityEngine_Transform_o *)transform;
          transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( v31 )
            {
              UnityEngine_Transform__set_parent(v31, (UnityEngine_Transform_o *)transform, 0LL);
              transform = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
              v33 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4B109C1 )
              {
                transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v29, v32);
                byte_4B109C1 = 1;
              }
              if ( v33 )
              {
                UnityEngine_Transform__set_localPosition(
                  v33,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
                v35 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4B109C7 )
                {
                  transform = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v29, v34);
                  byte_4B109C7 = 1;
                }
                if ( v35 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v35,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
                  v37 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4B109C6 )
                  {
                    transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v29, v36);
                    byte_4B109C6 = 1;
                  }
                  if ( v37 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v37,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           v30,
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = (struct QuestBoardListEffectBoardOpenComponent_o *)Component_object;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&this->fields.effectDisappear2BbComponent,
                        (int64_t)Component_object,
                        v40,
                        v41,
                        v42,
                        v43,
                        v44,
                        v45);
                      effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
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
                        v48);
                      if ( *p_effectDisappear2BbComponent )
                      {
                        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
                        return;
                      }
                    }
                    else
                    {
                      v49 = UnityEngine_GameObject__GetComponent_object_(
                              v30,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = (struct QuestBoardListEffectComponent_o *)v49;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&this->fields.effectDisappear2Component,
                        (int64_t)v49,
                        v51,
                        v52,
                        v53,
                        v54,
                        v55,
                        v56);
                      effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
                      if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
                        return;
                      effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
                      transform = UnityEngine_Object__op_Inequality(effectDisappearComponent, 0LL, 0LL);
                      if ( (transform & 1) != 0 )
                      {
                        v62 = this->fields.effectDisappearComponent;
                        if ( !v62 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v30, v62->fields.disappearEffect2ShiftPosX, 0LL);
                        v63 = this->fields.effectDisappearComponent;
                        if ( !v63 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v30, v63->fields.disappearEffect2ShiftPosY, 0LL);
                      }
                      transform = (__int64)*p_effectDisappear2Component;
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(
                          (QuestBoardListEffectComponent_o *)transform,
                          0,
                          0.0,
                          0.0,
                          v61);
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
      sub_1BCAA3C(transform, v29);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x22
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x22
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2

  if ( (byte_4B130D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, isPlayingAct, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B130D0 = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlayingAct);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
  {
    v13 = (Il2CppObject *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v13,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_26;
    v16 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_26;
    v17 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0LL);
    if ( !v17 )
      goto LABEL_26;
    UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
    v19 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v18);
      byte_4B109C1 = 1;
    }
    if ( !v19 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
    v21 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v15, v20);
      byte_4B109C7 = 1;
    }
    if ( !v21 )
      goto LABEL_26;
    UnityEngine_Transform__set_localRotation(
      v21,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v22);
      byte_4B109C6 = 1;
    }
    if ( !v23 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v16,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.effectDisappearFadeComponent,
      (int64_t)Component_object,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0LL, 0LL) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_26;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v32);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_26:
      sub_1BCAA3C(transform, v15);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void __fastcall QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *blackMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Object_array *Entitys_object; // x20
  QuestBoardListViewManager___c_c *v29; // x8
  System_Func_object__bool__o *_9__155_0; // x21
  Il2CppObject *v31; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int v39; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  PartyOrganizationUtility_o *p_blackMarkPrefab; // x19
  Il2CppObject *Object_object__49237568; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B130C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_Any_WarEntity___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_WarEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_WarEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__155_0__, v16, v17);
    sub_1BCA7E0(&QuestBoardListViewManager___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_19000/*"ef_blackpoint"*/, v20, v21);
    byte_4B130C5 = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys_object = DataMasterBase__getEntitys_object_(
                       (DataMasterBase_o *)Instance,
                       (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v29 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v25);
      v29 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__155_0 = (System_Func_object__bool__o *)v29->static_fields->__9__155_0;
    if ( !_9__155_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, v25);
        v29 = QuestBoardListViewManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__155_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarEntity__bool__TypeInfo, v25, v26, v27);
      System_Func_object__bool____ctor(
        _9__155_0,
        v31,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__155_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__155_0 = (struct System_Func_WarEntity__bool__o *)_9__155_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__155_0,
        (int64_t)_9__155_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__49274176(
                                 Entitys_object,
                                 (System_Func_T__bool__o *)_9__155_0,
                                 (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v39 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(Instance, v24);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v39) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (PartyOrganizationUtility_o *)&this->fields.blackMarkPrefab;
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19000/*"ef_blackpoint"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        p_blackMarkPrefab->klass = (PartyOrganizationUtility_c *)Object_object__49237568;
        sub_1BCA784(p_blackMarkPrefab, (int64_t)Object_object__49237568, v44, v45, v46, v47, v48, v49);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  ScrTerminalListTop_o *mTerminalList; // x0
  struct ScrTerminalListTop_o *v31; // x8
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  Il2CppObject *Object_object__49237568; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_Object_o *v48; // x20
  __int64 *v49; // x8
  PartyOrganizationUtility_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v51; // x20
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  UnityEngine_Object_o *v59; // x20
  Il2CppObject *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  Il2CppObject *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v76; // x8
  PartyOrganizationUtility_o *p_nt2BoardAppearEffectFadePrefab; // x19
  Il2CppObject *v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  Il2CppObject *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v94; // x8
  UnityEngine_Object_o *v95; // x20
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  UnityEngine_Object_o *v103; // x20
  Il2CppObject *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  UnityEngine_Object_o *v111; // x20
  Il2CppObject *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  UnityEngine_Object_o *v119; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  Il2CppObject *v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4B130C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_17373/*"bit_board_appear2"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17379/*"bit_board_disappear5"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17407/*"bit_fade_black2"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17378/*"bit_board_disappear4"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17375/*"bit_board_disappear"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17406/*"bit_fade_black"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17372/*"bit_board_appear"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17409/*"bit_fade_black4"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_17408/*"bit_fade_black3"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_17374/*"bit_board_appear3"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_17376/*"bit_board_disappear2"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_17377/*"bit_board_disappear3"*/, v28, v29);
    byte_4B130C8 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_100;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v31 = this->fields.mTerminalList;
  if ( !v31 )
    goto LABEL_100;
  if ( (_DWORD)mTerminalList == v31->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  (AssetData_o *)mTerminalList,
                                  (System_String_o *)StringLiteral_17372/*"bit_board_appear"*/,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)Object_object__49237568;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab,
        (int64_t)Object_object__49237568,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v41 = AssetData__GetObject_object__49237568(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17406/*"bit_fade_black"*/,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v41;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
        (int64_t)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    goto LABEL_17;
  }
  if ( (_DWORD)mTerminalList == v31->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v51 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(v51, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v52 = AssetData__GetObject_object__49237568(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17373/*"bit_board_appear2"*/,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v52;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab,
        (int64_t)v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(v59, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v60 = AssetData__GetObject_object__49237568(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17408/*"bit_fade_black3"*/,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v60;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
        (int64_t)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    goto LABEL_34;
  }
  if ( (_DWORD)mTerminalList == v31->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v86 = AssetData__GetObject_object__49237568(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17375/*"bit_board_disappear"*/,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v86;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab,
        (int64_t)v86,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0LL, 0LL) )
      goto LABEL_71;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v94 = &StringLiteral_17376/*"bit_board_disappear2"*/;
    goto LABEL_70;
  }
  if ( (_DWORD)mTerminalList != v31->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v31->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_17:
      v48 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_100;
        v49 = &StringLiteral_17376/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_39:
        v68 = AssetData__GetObject_object__49237568(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v49,
                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        p_boardDisappear2EffectPrefab->klass = (PartyOrganizationUtility_c *)v68;
        sub_1BCA784(p_boardDisappear2EffectPrefab, (int64_t)v68, v69, v70, v71, v72, v73, v74);
        goto LABEL_40;
      }
      goto LABEL_40;
    }
    if ( (_DWORD)mTerminalList != v31->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( (_DWORD)mTerminalList == v31->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID
        && this->fields.effectAssetData )
      {
        nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( !mTerminalList )
            goto LABEL_100;
          v121 = AssetData__GetObject_object__49237568(
                   (AssetData_o *)mTerminalList,
                   (System_String_o *)StringLiteral_17374/*"bit_board_appear3"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          this->fields.nt2BoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v121;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (int64_t)v121,
            v122,
            v123,
            v124,
            v125,
            v126,
            v127);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v76 = &StringLiteral_17409/*"bit_fade_black4"*/;
            p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.nt2BoardAppearEffectFadePrefab;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v49 = &StringLiteral_17379/*"bit_board_disappear5"*/;
      p_boardDisappear2EffectPrefab = (PartyOrganizationUtility_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_39;
    }
LABEL_40:
    boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( mTerminalList )
      {
        v76 = &StringLiteral_17407/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_45:
        v78 = AssetData__GetObject_object__49237568(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v76,
                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        p_nt2BoardAppearEffectFadePrefab->klass = (PartyOrganizationUtility_c *)v78;
        sub_1BCA784(p_nt2BoardAppearEffectFadePrefab, (int64_t)v78, v79, v80, v81, v82, v83, v84);
        return;
      }
      goto LABEL_100;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v95 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(v95, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v96 = AssetData__GetObject_object__49237568(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17377/*"bit_board_disappear3"*/,
            (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v96;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab,
      (int64_t)v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  v103 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(v103, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v94 = &StringLiteral_17378/*"bit_board_disappear4"*/;
LABEL_70:
    v104 = AssetData__GetObject_object__49237568(
             (AssetData_o *)mTerminalList,
             (System_String_o *)*v94,
             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v104;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab,
      (int64_t)v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
  }
LABEL_71:
  v111 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(v111, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v112 = AssetData__GetObject_object__49237568(
             (AssetData_o *)mTerminalList,
             (System_String_o *)StringLiteral_17407/*"bit_fade_black2"*/,
             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v112;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab,
      (int64_t)v112,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
  }
  v119 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(v119, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v76 = &StringLiteral_17379/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_45;
    }
LABEL_100:
    sub_1BCAA3C(mTerminalList, method);
  }
}


void __fastcall QuestBoardListViewManager__SetupDisp(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v17; // x1
  int size; // w8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  int syncRoot; // w23
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  QuestBoardListViewManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__bool__o *_9__119_0; // x21
  Il2CppObject *v29; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x1
  int32_t klass_high; // w8
  const MethodInfo *v40; // x3

  if ( (byte_4B130B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___, v4, v5);
    sub_1BCA7E0(&System_Func_QuestBoardListViewItem__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__SetupDisp_b__119_0__, v12, v13);
    sub_1BCA7E0(&QuestBoardListViewManager___c_TypeInfo, v14, v15);
    byte_4B130B1 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_23;
  size = ObjectList->fields._size;
  v19 = ObjectList;
  if ( size >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v19,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v17);
      size = v19->fields._size;
      if ( ++v20 >= size )
        goto LABEL_8;
    }
LABEL_23:
    sub_1BCAA3C(ObjectList, v17);
  }
LABEL_8:
  if ( size >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v19,
                                                                0,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    if ( !ObjectList )
      goto LABEL_23;
    ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                                (QuestBoardListViewObject_o *)ObjectList,
                                                                v17);
    if ( !ObjectList )
      goto LABEL_23;
    syncRoot = (int)ObjectList[2].fields._syncRoot;
    v22 = System_Linq_Enumerable__Cast_object_(
            (System_Collections_IEnumerable_o *)this->fields.itemList,
            (const MethodInfo_2F20F80 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    v26 = QuestBoardListViewManager___c_TypeInfo;
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v23);
      v26 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__119_0 = (System_Func_object__bool__o *)v26->static_fields->__9__119_0;
    if ( !_9__119_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26, v23);
        v26 = QuestBoardListViewManager___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__119_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_QuestBoardListViewItem__bool__TypeInfo,
                                                   v23,
                                                   v24,
                                                   v25);
      System_Func_object__bool____ctor(_9__119_0, v29, Method_QuestBoardListViewManager___c__SetupDisp_b__119_0__, 0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__119_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__119_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__119_0,
        (int64_t)_9__119_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            v27,
            (System_Func_TSource__bool__o *)_9__119_0,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    if ( v37 )
    {
      klass_high = HIDWORD(v37[1].klass);
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
        QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v38);
        QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v40);
      }
    }
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x0
  System_String_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AssetLoader_LoadEndDataHandler_o *v34; // x22
  __int64 v35; // x1
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  v36 = eventId;
  if ( (byte_4B130C7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, func);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_QuestBoardListViewManager___c__DisplayClass157_0__SetupFortificationWarningDialog_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6348/*"EventUI/Prefabs/"*/, v12, v13);
    byte_4B130C7 = 1;
  }
  v14 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo, *(_QWORD *)&eventId, func, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = func;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)func, v23, v24, v25, v26, v27, v28);
  v29 = System_Int32__ToString((int32_t)&v36, 0LL);
  v30 = System_String__Concat_62401220((System_String_o *)StringLiteral_6348/*"EventUI/Prefabs/"*/, v29, 0LL);
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)v14,
    Method_QuestBoardListViewManager___c__DisplayClass157_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35);
  if ( !AssetManager__loadAssetStorage(v30, v34, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
}


void __fastcall QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Object_array *Entitys_object; // x20
  QuestBoardListViewManager___c_c *v29; // x8
  System_Func_object__bool__o *_9__156_0; // x21
  Il2CppObject *v31; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int v39; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  PartyOrganizationUtility_o *p_whiteMarkPrefab; // x19
  Il2CppObject *Object_object__49237568; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B130C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_Any_WarEntity___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_WarEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_WarEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__156_0__, v16, v17);
    sub_1BCA7E0(&QuestBoardListViewManager___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_19061/*"ef_whitepoint"*/, v20, v21);
    byte_4B130C6 = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys_object = DataMasterBase__getEntitys_object_(
                       (DataMasterBase_o *)Instance,
                       (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v29 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v25);
      v29 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__156_0 = (System_Func_object__bool__o *)v29->static_fields->__9__156_0;
    if ( !_9__156_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, v25);
        v29 = QuestBoardListViewManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__156_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarEntity__bool__TypeInfo, v25, v26, v27);
      System_Func_object__bool____ctor(
        _9__156_0,
        v31,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__156_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__156_0 = (struct System_Func_WarEntity__bool__o *)_9__156_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__156_0,
        (int64_t)_9__156_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__49274176(
                                 Entitys_object,
                                 (System_Func_T__bool__o *)_9__156_0,
                                 (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v39 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(Instance, v24);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v39) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (PartyOrganizationUtility_o *)&this->fields.whiteMarkPrefab;
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19061/*"ef_whitepoint"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        p_whiteMarkPrefab->klass = (PartyOrganizationUtility_c *)Object_object__49237568;
        sub_1BCA784(p_whiteMarkPrefab, (int64_t)Object_object__49237568, v44, v45, v46, v47, v48, v49);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SkipDisapprarFadeEffect(
        QuestBoardListViewManager_o *this,
        float skipTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *effectDisappearFadeComponent; // x20
  const MethodInfo *v7; // x1
  QuestBoardListEffectComponent_o *v8; // x0

  if ( (byte_4B130D3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B130D3 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v8 = this->fields.effectDisappearFadeComponent;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    QuestBoardListEffectComponent__Skip(v8, skipTime, v7);
  }
}


bool __fastcall QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *EventTutorialEntity; // x0
  __int64 v11; // x1
  int32_t v12; // w8
  bool result; // w0

  if ( (byte_4B130BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, flagType, eventEntity);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B130BB = 1;
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
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( EventTutorialEntity )
      {
        v12 = *((_DWORD *)EventTutorialEntity + 5);
        result = 1;
        *flagType = v12;
        return result;
      }
LABEL_9:
      sub_1BCAA3C(EventTutorialEntity, v11);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v19; // w20
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  MapControl_QuestInfo_o *monitor; // x0
  _BOOL8 IsReleaseFocusQuestBoard; // x0
  __int64 v24; // x1
  _DWORD *v25; // x8
  int32_t v26; // w22
  __int64 QuestReleasedFocusState; // x0
  __int64 v28; // x1
  _DWORD *v29; // x8
  int v30; // w19
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B130AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ListViewItem___, questId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B130AE = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
    {
      v30 = 6;
      goto LABEL_21;
    }
    current = v33.fields._current;
    if ( v33.fields._current )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (QuestBoardListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
      {
        sub_1BCACFC(v33.fields._current);
LABEL_24:
        sub_1BCAA3C(IsReleaseFocusQuestBoard, v24);
      }
      monitor = (MapControl_QuestInfo_o *)v33.fields._current[7].monitor;
      if ( monitor )
      {
        if ( monitor->fields.dispType == 1 )
        {
          IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(monitor, 0LL);
          if ( IsReleaseFocusQuestBoard )
          {
            v25 = current[7].monitor;
            if ( !v25 )
              goto LABEL_24;
            v26 = v25[4];
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
            QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(v26, 0LL);
            if ( !(_DWORD)QuestReleasedFocusState )
              break;
          }
        }
      }
    }
  }
  v29 = current[7].monitor;
  if ( !v29 )
    sub_1BCAA3C(QuestReleasedFocusState, v28);
  *questId = v29[4];
  v30 = 5;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v19 && v30 == 5;
}


void __fastcall QuestBoardListViewManager__Update(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  QuestBoardListViewManager__UpdateAlphaAnim(this, v3);
}


void __fastcall QuestBoardListViewManager__UpdateAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  __int64 v7; // x1
  float v8; // s0
  AlphaTransitionCalculator_o *v9; // x0
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v12; // s8
  QuestBoardListViewManager_c *v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v17; // w21
  QuestBoardListViewManager_c *v18; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v20; // w21

  if ( (byte_4B130B9 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v4, v5);
    byte_4B130B9 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v8 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
    v9 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v8;
    if ( !v9 )
      goto LABEL_22;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v9, 0LL) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v12 = realtimeSinceStartup;
      v13 = QuestBoardListViewManager_TypeInfo;
      if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v7);
        v13 = QuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(v12 - mAlphaAnimTimeOld) >= v13->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v9 = this->fields.rewardIconAlphaCalculator;
        if ( v9 )
        {
          AlphaTransitionCalculator__StartFadeOut(v9, 0LL);
          return;
        }
LABEL_22:
        sub_1BCAA3C(v9, v7);
      }
    }
    else
    {
      v9 = this->fields.rewardIconAlphaCalculator;
      if ( !v9 )
        goto LABEL_22;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v9, 0LL) )
      {
        v9 = this->fields.rewardIconAlphaCalculator;
        if ( !v9 )
          goto LABEL_22;
        AlphaTransitionCalculator__StartFadeIn(v9, 0LL);
        v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v15;
        v17 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v18 = QuestBoardListViewManager_TypeInfo;
        if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v14);
          v18 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v18->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v17 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v20 = this->fields.mAlphaAnimCnt;
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18, v14);
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
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B130AB & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewManager__WaitFinish_d__112_TypeInfo, endAct, method);
    byte_4B130AB = 1;
  }
  v6 = sub_1BCAA2C(QuestBoardListViewManager__WaitFinish_d__112_TypeInfo, endAct, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)endAct, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
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
    sub_1BCAA3C(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].monitor) = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__149_1(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  char *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x1

  if ( (byte_4B130DE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11417/*"RemoveTempBG"*/, method, v2);
    byte_4B130DE = 1;
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
    sub_1BCAA3C(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 8) = 0;
  v12 = StringLiteral_11417/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 11) = StringLiteral_11417/*"RemoveTempBG"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(mFolderBgTemp + 88), v12, v6, v7, v8, v9, v10, v11);
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
    sub_1BCAA3C(mFolderBg, *(_QWORD *)&inOut);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *mFolderBg; // x0
  int32_t mRequestedBGid; // w21
  ExUITexture_o *v11; // x21
  Il2CppObject *v12; // x0
  ExUITexture_o *v13; // x20
  __int64 v14; // x1
  System_String_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B130C0 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, callback, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v7, v8);
    byte_4B130C0 = 1;
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
  v11 = this->fields.mFolderBg;
  v17 = this->fields.mRequestedBGid;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v12, 0LL);
  if ( !v11 )
LABEL_14:
    sub_1BCAA3C(mFolderBg, callback);
  ExUITexture__SetAssetImage(v11, (System_String_o *)mFolderBg, callback, 0LL);
  v13 = this->fields.mFolderBg;
  v15 = System_Int32__ToString((int)this + 576, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v14);
  FSUtility__SetUpBackTextureSize(v13, v15, 0LL);
LABEL_11:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v16);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B130A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B130A5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v21;
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
    sub_1BCAA3C(mFolderBg, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._RoadmapAssetData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._RoadmapAssetData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v37; // x22
  struct QuestBoardListViewManager___c__DisplayClass153_0_o **p__8__1; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  __int64 v59; // x1
  EventEntity_array *EnableEntityList; // x22
  __int64 v61; // x2
  const MethodInfo *v62; // x3
  int max_length; // w8
  EventRewardSceneMaster_o *v64; // x23
  unsigned int v65; // w24
  EventEntity_o *v66; // x25
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *_8__1; // x8
  RoadmapButtonPrefab_c *v68; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x21
  __int64 v70; // x2
  __int64 v71; // x3
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *v72; // x20
  RoadmapButtonPrefab_c *v73; // x0
  System_String_o *v74; // x21
  AssetLoader_LoadEndDataHandler_o *v75; // x22
  __int64 v76; // x1
  Il2CppObject *v77; // x20
  System_Func_bool__o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  UnityEngine_WaitUntil_o *v82; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  bool result; // w0
  Il2CppObject *v91; // x21
  AssetLoader_LoadEndDataHandler_o *v92; // x20
  __int64 v93; // x1
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *v94; // x8
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *v95; // x22
  System_Action_o *_9__4; // x23
  int32_t id; // w21
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  Il2CppObject *v104; // x20
  System_Func_bool__o *v105; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  UnityEngine_WaitUntil_o *v109; // x20
  PartyOrganizationUtility_o *v110; // x19
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7

  v4 = this;
  if ( (byte_4B130EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__0__, v19, v20);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__1__, v21, v22);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__2__, v23, v24);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__3__, v25, v26);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__4__, v27, v28);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass153_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v31, v32);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)sub_1BCA7E0(&StringLiteral_13753/*"Terminal/Effect"*/, v33, v34);
    byte_4B130EA = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_51;
    method = (const MethodInfo *)_4__this->fields.effectAssetData;
    if ( method )
    {
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_51;
      QuestBoardListViewManager__OnCompleteAssetData(_4__this, (AssetData_o *)method, _8__1->fields.onCompleteLoad, v3);
    }
    else
    {
      v91 = (Il2CppObject *)v4->fields.__8__1;
      v92 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, 0LL, v2, v3);
      AssetLoader_LoadEndDataHandler___ctor(
        v92,
        v91,
        Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v93);
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13753/*"Terminal/Effect"*/,
                                                                         v92,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v94 = v4->fields.__8__1;
        if ( !v94 )
          goto LABEL_51;
        ActionExtensions__Call(v94->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    v68 = RoadmapButtonPrefab_TypeInfo;
    if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, method);
      v68 = RoadmapButtonPrefab_TypeInfo;
    }
    ASSET_DATA_PATH_ROADMAP = v68->static_fields->ASSET_DATA_PATH_ROADMAP;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)AssetManager__isExistAssetStorage(
                                                                       ASSET_DATA_PATH_ROADMAP,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_51;
      if ( !_4__this->fields._RoadmapAssetData_k__BackingField )
      {
        v72 = v4->fields.__8__1;
        if ( !v72 )
          goto LABEL_51;
        v72->fields.flag = 0;
        v73 = RoadmapButtonPrefab_TypeInfo;
        if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, method);
          v73 = RoadmapButtonPrefab_TypeInfo;
          v72 = v4->fields.__8__1;
        }
        v74 = v73->static_fields->ASSET_DATA_PATH_ROADMAP;
        v75 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v70, v71);
        AssetLoader_LoadEndDataHandler___ctor(
          v75,
          (Il2CppObject *)v72,
          Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__1__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v76);
        AssetManager__loadAssetStorage(v74, v75, 1, 0LL);
      }
    }
    v77 = (Il2CppObject *)v4->fields.__8__1;
    v78 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v70, v71);
    System_Func_bool____ctor(
      v78,
      v77,
      Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__2__,
      0LL);
    v82 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v79, v80, v81);
    UnityEngine_WaitUntil___ctor(v82, v78, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v82;
    p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
    sub_1BCA784(p__2__current, (int64_t)v82, v84, v85, v86, v87, v88, v89);
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v37 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass153_0_TypeInfo, method, v2, v3);
  System_Object___ctor(v37, 0LL);
  v4->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass153_0_o *)v37;
  p__8__1 = &v4->fields.__8__1;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v37, v39, v40, v41, v42, v43, v44);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  v51 = (Il2CppObject *)v4->fields.__4__this;
  this->fields.__2__current = v51;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v51, v45, v46, v47, v48, v49, v50);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v4->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.__4__this,
    (int64_t)onCompleteLoad,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_51;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_51;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v64 = (EventRewardSceneMaster_o *)this;
    v65 = 0;
    while ( 1 )
    {
      if ( v65 >= max_length )
        sub_1BCAA44(this, method);
      v66 = EnableEntityList->m_Items[v65];
      if ( !v66 || !v64 )
        goto LABEL_51;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v64,
                                                                         v66->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v65 >= max_length )
        goto LABEL_50;
    }
    v95 = *p__8__1;
    if ( *p__8__1 )
    {
      _9__4 = v95->fields.__9__4;
      v95->fields.flag = 0;
      id = v66->fields.id;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v61, v62);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v95,
          Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__4__,
          0LL);
        v95->fields.__9__4 = _9__4;
        sub_1BCA784((PartyOrganizationUtility_o *)&v95->fields.__9__4, (int64_t)_9__4, v98, v99, v100, v101, v102, v103);
      }
      if ( _4__this )
      {
        QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__4, v62);
        goto LABEL_50;
      }
    }
LABEL_51:
    sub_1BCAA3C(this, method);
  }
LABEL_50:
  v104 = (Il2CppObject *)v4->fields.__8__1;
  v105 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v61, v62);
  System_Func_bool____ctor(
    v105,
    v104,
    Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__0__,
    0LL);
  v109 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v106, v107, v108);
  UnityEngine_WaitUntil___ctor(v109, v105, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v109;
  v110 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(v110, (int64_t)v109, v111, v112, v113, v114, v115, v116);
  result = 1;
  *(_DWORD *)&v110[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_QuestBoardListViewManager__CoroutineLoadAsset_d__153_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
      sub_1BCAA3C(this, method);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestBoardListViewManager__WaitFinish_d__112_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B130DF & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewManager___c_TypeInfo, v1, v2);
    byte_4B130DF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestBoardListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___DisplayRoadmapButtonToTopWarBoard_b__106_0(
        QuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 methodPtr_low; // x9
  _QWORD *monitor; // x8
  __int64 v8; // x19
  QuestTree_o *Instance; // x0
  __int64 v10; // x1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v12; // x20
  bool IsClosedWar; // w19

  if ( (byte_4B130E0 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, item, method);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    byte_4B130E0 = 1;
  }
  if ( !item )
    goto LABEL_12;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1BCACFC(item);
    goto LABEL_15;
  }
  monitor = item[1].monitor;
  if ( monitor )
  {
    v8 = monitor[14];
    if ( v8 )
    {
      Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, *(_DWORD *)(v8 + 20), 0LL);
      if ( WarInfoByWarID )
      {
        v12 = WarInfoByWarID;
        IsClosedWar = MapControl_WarInfo__IsClosedWar(WarInfoByWarID, 0LL);
        Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v12, 0LL);
        if ( Instance )
        {
          LOBYTE(monitor) = WarEntity__HasFlag((WarEntity_o *)Instance, 128, 0LL) && !IsClosedWar;
          return (unsigned __int8)monitor & 1;
        }
LABEL_15:
        sub_1BCAA3C(Instance, v10);
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
  __int64 v4; // x1
  int32_t lastQuestId; // w19

  if ( (byte_4B130E1 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1BCA7E0(&CondType_TypeInfo, entity, method);
    byte_4B130E1 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
  return CondType__IsQuestClear_38310172(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupDisp_b__119_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__156_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t lastQuestId; // w20

  if ( (byte_4B130E2 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1BCA7E0(&CondType_TypeInfo, entity, method);
    byte_4B130E2 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
  return CondType__IsQuestClear_38310172(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  float infoTime; // s8
  __int64 v32; // x1
  QuestBoardListViewManager_c *v33; // x0
  SlideFadeObject_o *v34; // x21
  float OUT_POS_OFS_X; // s9
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x3

  if ( (byte_4B130E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5, v6);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_1__RequestListObject_b__2__, v9, v10);
    sub_1BCA7E0(&QuestBoardListViewManager___c__DisplayClass121_1_TypeInfo, v11, v12);
    byte_4B130E3 = 1;
  }
  v13 = sub_1BCAA2C(QuestBoardListViewManager___c__DisplayClass121_1_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)Component_object, v24, v25, v26, v27, v28, v29);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, v30);
  v33 = QuestBoardListViewManager_TypeInfo;
  v34 = *(SlideFadeObject_o **)(v13 + 16);
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v32);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v33);
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass121_1__RequestListObject_b__2__,
    0LL);
  if ( !v34
    || (SlideFadeObject__SlideIn_34346640(v34, OUT_POS_OFS_X, infoTime, 0.0, v39, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, v15), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(_4__this, v15);
  }
  QuestBoardListViewManager__ModifyAllRoadmapButtons(_4__this, 1, 1, v40);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  struct QuestBoardListViewManager_o *v17; // x8
  SlideFadeObject_o *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  const MethodInfo *v21; // x5
  struct QuestBoardListViewManager_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Action_o *_9__5; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B130E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__4__, v10, v11);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__5__, v12, v13);
    byte_4B130E4 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                          gameObject,
                                          (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_19;
  v18 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v17->fields.initMode, 0.0, v16);
  if ( !v18 )
    goto LABEL_19;
  SlideFadeObject__ResetPosition(v18, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_19;
  if ( v22->fields.mFaded )
  {
    v22->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    v26 = (CommonUI_o *)_4__this;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v23, v24);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v29, v30, v31, v32, v33, v34);
    }
    if ( v26 )
    {
      CommonUI__maskFadein(v26, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v19, v20);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v36, v37, v38, v39, v40, v41);
  }
  QuestBoardListViewManager__SetMode(v22, 2, _9__5, 0, 0, v21);
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
    sub_1BCAA3C(this, method);
  QuestBoardListViewManager__EndSlideIn(this->fields.__4__this, this->fields.end_act, this->fields.isNotInit, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  QuestBoardListViewManager___c__DisplayClass121_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v5 = this;
  if ( (byte_4B130E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (QuestBoardListViewManager___c__DisplayClass121_0_o *)sub_1BCA7E0(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__6__,
                                                                   v6,
                                                                   v7);
    byte_4B130E5 = 1;
  }
  _9__6 = v5->fields.__9__6;
  _4__this = v5->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v5,
      Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__6__,
      0LL);
    v5->fields.__9__6 = _9__6;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__6, (int64_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, v4);
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
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  QuestBoardListViewManager___c__DisplayClass121_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v5 = this;
  if ( (byte_4B130E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (QuestBoardListViewManager___c__DisplayClass121_0_o *)sub_1BCA7E0(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__10__,
                                                                   v6,
                                                                   v7);
    byte_4B130E6 = 1;
  }
  _9__10 = v5->fields.__9__10;
  _4__this = v5->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v5,
      Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__10__,
      0LL);
    v5->fields.__9__10 = _9__10;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__10, (int64_t)_9__10, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SlideFadeObject_o *sfo; // x0
  const MethodInfo *v11; // x3
  struct QuestBoardListViewManager___c__DisplayClass121_0_o *CS___8__locals1; // x8
  __int64 v13; // x2
  __int64 v14; // x3
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  struct QuestBoardListViewManager___c__DisplayClass121_0_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B130E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__3__, v8, v9);
    byte_4B130E7 = 1;
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
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    v16 = (CommonUI_o *)sfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v15 = AvalonSceneManager_TypeInfo;
    }
    v17 = this->fields.CS___8__locals1;
    if ( v17 )
    {
      DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
      _9__3 = v17->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v17,
          Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__3__,
          0LL);
        v17->fields.__9__3 = _9__3;
        sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.__9__3, (int64_t)_9__3, v20, v21, v22, v23, v24, v25);
      }
      if ( v16 )
      {
        CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    v11);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, result);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct QuestBoardListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, data);
  _4__this->fields._RoadmapAssetData_k__BackingField = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields._RoadmapAssetData_k__BackingField,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BCAA3C(this, data);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *_4__this; // x8
  Il2CppObject *v20; // x21
  struct QuestBoardListViewManager_o *v21; // x20
  __int64 v22; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct QuestBoardListViewManager_o *v31; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  struct QuestBoardListViewManager_o *v35; // x8

  v4 = this;
  if ( (byte_4B130E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)sub_1BCA7E0(&StringLiteral_6926/*"FortificationWarningDialog"*/, v11, v12);
    byte_4B130E8 = 1;
  }
  if ( !assetData )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)AssetData__GetObject_object__49237568(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6926/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  _4__this = (PartyOrganizationUtility_o *)v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v20 = (Il2CppObject *)this;
  _4__this[3].klass = (PartyOrganizationUtility_c *)assetData;
  sub_1BCA784(_4__this + 3, (int64_t)assetData, v13, v14, v15, v16, v17, v18);
  v21 = v4->fields.__4__this;
  if ( !v21 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  v24 = UnityEngine_Object__Instantiate_object__49903816(
          v20,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  v21->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v21->fields.fortificationWarningDialog,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = v4->fields.__4__this;
  if ( !v31 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)v31->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v33 = v4->fields.__4__this;
  if ( !v33
    || (this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)v33->fields.fortificationWarningDialog) == 0LL
    || (v34 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v34, 0LL),
        (v35 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)v35->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(this, assetData);
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
  __int64 v2; // x2
  UnityEngine_Component_o *effectComponent; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Action_o *endAct; // x0

  if ( (byte_4B130E9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B130E9 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_1BCAA3C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectComponent, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(v3, v4);
  --_4__this->fields.waitCount;
}