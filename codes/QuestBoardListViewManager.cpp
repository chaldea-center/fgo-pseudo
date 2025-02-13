void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4BD93B4 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    byte_4BD93B4 = 1;
  }
  static_fields = QuestBoardListViewManager_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->INTO_TIME = xmmword_BFF340;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 0x700000016LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x432A00000DE021F0LL;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD93B3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4BD93B3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.topItemList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bottomItemList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_GameObject_o *v12; // x0
  struct UnityEngine_GameObject_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BD9378 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4BD9378 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(gameObject[7].klass);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mBoxCollider,
    (int64_t)Component_object,
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
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.mNoneLabelParent,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_1C22094(gameObject, v4);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ExUITexture_o *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  System_Action_o *v29; // x0
  __int64 *v30; // x8
  float v31; // s0
  Il2CppObject *v32; // x0
  System_Action_o *v33; // x22
  ExUITexture_o *v34; // x0
  System_String_o *v35; // x1
  System_Action_o *v36; // x2
  UnityEngine_Component_o *v37; // x19
  Il2CppObject *v38; // x0
  int32_t v39; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD9397 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager__BGChangeEffect_b__151_0__);
    sub_1C21E38(&Method_QuestBoardListViewManager__BGChangeEffect_b__151_1__);
    sub_1C21E38(&StringLiteral_3179/*"Back/back{0}"*/);
    byte_4BD9397 = 1;
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
                                                 (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = (struct ExUITexture_o *)Component_object;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.mFolderBgTemp,
                (int64_t)Component_object,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].monitor) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v23 = this->fields.mFolderBg;
                v39 = bgID;
                v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v24, v25, v26);
                v28 = System_String__Format((System_String_o *)StringLiteral_3179/*"Back/back{0}"*/, v27, 0LL);
                v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                v30 = &Method_QuestBoardListViewManager__BGChangeEffect_b__151_1__;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
    else
    {
      v37 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v40 = bgID;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v10, v11, v12);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3179/*"Back/back{0}"*/, v38, 0LL);
        if ( v37 )
        {
          v35 = (System_String_o *)mFolderBg;
          v34 = (ExUITexture_o *)v37;
          v36 = 0LL;
          goto LABEL_22;
        }
      }
      else if ( v37 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_1C22094(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v31 = 0.0;
  if ( effectType )
    v31 = time;
  this->fields.mCrossFadeTime = v31;
  v23 = this->fields.mFolderBg;
  v41 = bgID;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v10, v11, v12);
  v28 = System_String__Format((System_String_o *)StringLiteral_3179/*"Back/back{0}"*/, v32, 0LL);
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  v30 = &Method_QuestBoardListViewManager__BGChangeEffect_b__151_0__;
LABEL_20:
  v33 = v29;
  System_Action___ctor(v29, (Il2CppObject *)this, *v30, 0LL);
  if ( !v23 )
    goto LABEL_31;
  v34 = v23;
  v35 = v28;
  v36 = v33;
LABEL_22:
  ExUITexture__SetAssetImage(v34, v35, v36, 0LL);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD939A & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewManager__CoroutineLoadAsset_d__155_TypeInfo);
    byte_4BD939A = 1;
  }
  v5 = sub_1C22084(QuestBoardListViewManager__CoroutineLoadAsset_d__155_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)onCompleteLoad, v12, v13, v14, v15, v16, v17);
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
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  int32_t size; // w21
  int v74; // w21
  int32_t v75; // w22
  Il2CppObject *Item; // x0
  MapControl_QuestInfo_o *v77; // x24
  QuestBoardListViewItem_o *v78; // x0
  Il2CppObject *v79; // x25
  int32_t v80; // w2
  struct UnityEngine_GameObject_o *blackMarkPrefab; // x26
  struct UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v83; // w1
  MapControl_QuestInfo_o *v84; // x3
  UnityEngine_GameObject_o *v85; // x4
  UnityEngine_GameObject_o *v86; // x5
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v97; // x0
  QuestBoardListViewManager___c_c *v98; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x21
  System_Func_object__bool__o *_9__105_0; // x22
  Il2CppObject *v101; // x23
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  Il2CppObject *v109; // x0
  const MethodInfo *v110; // x1
  int32_t klass_high; // w8
  const MethodInfo *v112; // [xsp+0h] [xbp-90h]
  bool v113; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD937B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_1C21E38(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__CreateList_b__105_0__);
    sub_1C21E38(&QuestBoardListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_11111/*"QUEST_NONE"*/);
    byte_4BD937B = 1;
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
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  v18 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  LODWORD(v114.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v20, 0LL);
  v114.fields.z = 0.0;
  v114.fields.y = v26;
  UnityEngine_BoxCollider__set_size(v20, v114, 0LL);
  v115.fields.y = (float)(mBaseClipRange - v26) * 0.5;
  v115.fields.z = clip_w;
  v115.fields.w = v26;
  this->fields.clipRange.fields.y = v26 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v115.fields.x = v23;
  UIPanel__set_baseClipRegion(v25, v115, 0LL);
  this->fields.mResetConsumeColor = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"QUEST_NONE"*/, 0LL);
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
    v113 = isAllDisp;
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v74 = v38->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v74 < 1 )
      goto LABEL_104;
    v75 = 0;
    while ( 1 )
    {
      if ( v75 >= qinf_list->fields._size )
      {
        v77 = 0LL;
LABEL_91:
        blackMarkPrefab = this->fields.blackMarkPrefab;
        whiteMarkPrefab = this->fields.whiteMarkPrefab;
        v78 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
        v79 = (Il2CppObject *)v78;
        v83 = v75;
        v80 = info_kind;
        v84 = v77;
        v85 = blackMarkPrefab;
        v86 = whiteMarkPrefab;
        goto LABEL_98;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)qinf_list,
               v75,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
      v77 = (MapControl_QuestInfo_o *)Item;
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
          v78 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
          v79 = (Il2CppObject *)v78;
          v80 = 4;
          goto LABEL_97;
        }
      }
      else if ( !Item )
      {
        goto LABEL_91;
      }
      if ( !MapControl_QuestInfo__GetMine(v77, 0LL) )
        goto LABEL_91;
      gameObject = MapControl_QuestInfo__GetMine(v77, 0LL);
      if ( !gameObject )
        goto LABEL_121;
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)gameObject, 0LL) != 128 )
        goto LABEL_91;
      v78 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
      v79 = (Il2CppObject *)v78;
      v80 = 5;
LABEL_97:
      v83 = v75;
      v84 = v77;
      v85 = 0LL;
      v86 = 0LL;
LABEL_98:
      QuestBoardListViewItem___ctor_35054636(v78, v83, v80, v84, v85, v86, 0, 0, v112);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v93 = *((_QWORD *)gameObject + 2);
      v94 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v93 )
        goto LABEL_121;
      v95 = *((int *)gameObject + 6);
      if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v79,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = v93 + 8 * v95;
        *((_DWORD *)gameObject + 6) = v95 + 1;
        *(_QWORD *)(v96 + 32) = v79;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v96 + 32), (int64_t)v79, v87, v88, v89, v90, v91, v92);
      }
      if ( v74 == ++v75 )
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
    sub_1C22094(gameObject, v16);
  }
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, warSelectedQuestList->fields._size < 1, 0LL);
  v39 = QuestBoardListViewItemDraw_TypeInfo;
  v40 = warSelectedQuestList->fields._size;
  v113 = isAllDisp;
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
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__)) != 0LL )
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
          v49 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
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
            v49 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
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
            v49 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
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
        v49 = (QuestBoardListViewItem_o *)sub_1C22084(QuestBoardListViewItem_TypeInfo);
        v50 = (Il2CppObject *)v49;
        v51 = 6;
        v54 = i;
        v55 = 0LL;
        v56 = v52;
        v57 = v53;
        v58 = 0;
        v59 = 0;
      }
      QuestBoardListViewItem___ctor_35054636(v49, v54, v51, v55, v56, v57, v58, v59, v112);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v69 = *((_QWORD *)gameObject + 2);
      v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v69 )
        goto LABEL_121;
      v71 = *((int *)gameObject + 6);
      if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v50,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = v69 + 8 * v71;
        *((_DWORD *)gameObject + 6) = v71 + 1;
        *(_QWORD *)(v72 + 32) = v50;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 32), (int64_t)v50, v63, v64, v65, v66, v67, v68);
      }
    }
  }
LABEL_104:
  gameObject = this->fields.mNoneLabel;
  if ( !gameObject )
    goto LABEL_121;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0LL) )
    this->fields._IsShowingInfo_k__BackingField = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v113, -1, 0LL);
  v97 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.itemList,
          (const MethodInfo_2FBDE04 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v98 = QuestBoardListViewManager___c_TypeInfo;
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)v97;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v98 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v98->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = QuestBoardListViewManager___c_TypeInfo;
    }
    v101 = (Il2CppObject *)v98->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v101, Method_QuestBoardListViewManager___c__CreateList_b__105_0__, 0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__105_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
      (int64_t)_9__105_0,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  v109 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
           v99,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v109 )
  {
    klass_high = HIDWORD(v109[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !info_kind && (klass_high & 0x80000000) != 0 )
      goto LABEL_116;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !info_kind )
LABEL_116:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v110);
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

  if ( (byte_4BD9381 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9381 = 1;
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
      sub_1C22094(v16, v17);
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
  System_Func_object__bool__o *_9__107_0; // x21
  Il2CppObject *v6; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x0
  __int64 methodPtr_low; // x9
  __int64 v16; // x9
  MethodInfo *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v20; // x8
  QuestBoardListViewManager_o *v21; // x0
  bool v22; // w1
  bool v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4BD937C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
    sub_1C21E38(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&QuestBoardListViewObject_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__107_0__);
    sub_1C21E38(&QuestBoardListViewManager___c_TypeInfo);
    byte_4BD937C = 1;
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
    _9__107_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__107_0,
      v6,
      Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__107_0__,
      0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_ListViewItem__bool__o *)_9__107_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
      (int64_t)_9__107_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          itemList,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
  if ( !v14 )
    return;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v14->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1C22354(v14);
LABEL_30:
    sub_1C22354(itemList);
    QuestBoardListViewManager__ModifyAllRoadmapButtons(v21, v22, v23, v24);
    return;
  }
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = HIDWORD(v14[1].klass);
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)v14[6].monitor;
  if ( itemList )
  {
    v16 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable[0].methodPtr) < (unsigned int)v16
      || (QuestBoardListViewObject_c *)itemList->klass->_2.typeHierarchy[v16 - 1] != QuestBoardListViewObject_TypeInfo )
    {
      goto LABEL_30;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = (MethodInfo *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemList, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) == 0 )
  {
    if ( !itemList )
      goto LABEL_28;
    klass = itemList[8].klass;
    if ( !klass )
      goto LABEL_28;
    v17 = (MethodInfo *)klass->vtable[30].method;
    if ( !v17 )
      goto LABEL_28;
    RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)v17, this->fields._RoadmapAssetData_k__BackingField, 0LL);
    if ( !this->fields.initMode || this->fields.mFaded )
    {
      v20 = itemList[8].klass;
      if ( v20 )
      {
        v17 = (MethodInfo *)v20->vtable[30].method;
        if ( v17 )
        {
          RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)v17, 0, 1, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1C22094(v17, v18);
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
    sub_1C22094(0LL, end_act);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x5

  if ( (byte_4BD938A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass125_0__EndSlideOut_b__0__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass125_0_TypeInfo);
    byte_4BD938A = 1;
  }
  v5 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass125_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = end_act;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)end_act, v8, v9, v10, v11, v12, v13);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v14);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass125_0__EndSlideOut_b__0__,
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
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BD9384 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&PartyServantListViewItem_TypeInfo);
    byte_4BD9384 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4BD9382 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&QuestBoardListViewObject_TypeInfo);
    byte_4BD9382 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C22094(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (QuestBoardListViewObject_o *)v13;
}


UIScrollView_o *__fastcall QuestBoardListViewManager__GetScrollView(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}


bool __fastcall QuestBoardListViewManager__HasBanner(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v6; // x1
  QuestBoardListViewItem_o *v7; // x0
  const MethodInfo *v8; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  System_Collections_Generic_List_object__c *klass; // x8
  _DWORD *interopData; // x8

  if ( (byte_4BD938C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4BD938C = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___) )
    goto LABEL_15;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v4);
  if ( !Item
    || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              0,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1C22094(Item, v6);
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
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                        (QuestBoardListViewObject_o *)Item,
                                                        v6);
  if ( !Item )
    goto LABEL_17;
  klass = Item[3].klass;
  if ( !klass )
    goto LABEL_17;
  interopData = klass->_1.interopData;
  if ( !interopData )
    goto LABEL_17;
  LOBYTE(v7) = interopData[4] == 1;
  return (char)v7;
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

  if ( (byte_4BD9387 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4BD9387 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C22094(0LL, v7);
    QuestBoardListViewObject__Init_35101240((QuestBoardListViewObject_o *)v9.fields._current, mode, 0LL, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
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
  RoadmapButtonPrefab_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD937D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4BD937D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isEnable);
  if ( !ObjectList )
    sub_1C22094(0LL, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v9 = isEnable;
  for ( i = isImmediate; ; RoadmapButtonPrefab__ModifyRoadmapButton(v14, v9, i, 0LL) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v11 )
      break;
    if ( !v15.fields._current )
      sub_1C22094(v11, v12);
    klass = v15.fields._current[8].klass;
    if ( !klass )
      sub_1C22094(v11, v12);
    v14 = (RoadmapButtonPrefab_o *)klass->vtable[30].method;
    if ( !v14 )
      sub_1C22094(0LL, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Component_object; // x0
  MoveObject_o **v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  float v36; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v40; // x20
  float v41; // s13
  float v42; // s15
  float v43; // s14
  System_Action_o *v44; // x22
  System_Action_o *v45; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BD93B1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__0__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__1__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass179_0_TypeInfo);
    byte_4BD93B1 = 1;
  }
  v13 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass179_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 16) = obj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)obj, v22, v23, v24, v25, v26, v27);
  *(float *)(v13 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL) + moveY;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v13 + 16),
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v13 + 24) = Component_object;
  v29 = (MoveObject_o **)(v13 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
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
    sub_1C22094(v14, v15);
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
  v44 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__0__,
    0LL);
  v45 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__1__,
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

  if ( (byte_4BD937F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD937F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v37.fields._current )
      sub_1C22094(v14, v15);
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
        sub_1C22094(v18, v17);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v21 >> 1), moveTime, easeType, isForce, v23);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_48:
    sub_1C22094(topItemList, isClose);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    if ( !v37.fields._current )
      sub_1C22094(v24, v25);
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
        sub_1C22094(v28, v27);
      v32 = UnityEngine_Component__get_gameObject(v26, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v32, (float)(v31 >> 1), moveTime, easeType, isForce, v33);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( endAct )
  {
    v35 = QuestBoardListViewManager__WaitFinish(this, endAct, v34);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
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

  if ( (byte_4BD9393 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4BD9393 = 1;
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
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v4);
      if ( ++v6 >= v5->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_1C22094(ObjectList, v4);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  void **v14; // x21
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
  __int64 v27; // x24
  __int64 methodPtr_low; // x10
  MapControl_QuestInfo_o *v29; // x20
  int64_t AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v31; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v35; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  int32_t GroupId; // w23
  QuestEntity_o *v41; // x0
  QuestEntity_o *v42; // x23
  __int64 v43; // x1
  Il2CppObject *current; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  __int64 v47; // x1
  TerminalSceneComponent_c *v48; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  Il2CppObject *Component_object; // x0
  __int64 v54; // x1
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  int32_t SpotID; // w22
  TerminalPramsManager_c *v58; // x0
  int32_t questId; // w22
  TerminalPramsManager_c *v60; // x0
  int32_t v61; // w22
  TerminalPramsManager_c *v62; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v66; // x24
  const MethodInfo *v67; // x4
  __int64 v68; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v70; // x20
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  int32_t v75; // w22
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  TerminalSceneComponent_c *v78; // x0
  TerminalSceneComponent_c *v79; // x0
  const MethodInfo *v80; // x1
  ScrTerminalListTop_o *v81; // x19
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  QuestEntity_o *v84; // x22
  TerminalSceneComponent_c *v85; // x0
  int32_t v86; // w23
  bool IsDisplayQuestInformation_35133456; // w0
  const MethodInfo *v88; // x2
  TerminalSceneComponent_c *v89; // x0
  const MethodInfo *v90; // x1
  ScrTerminalListTop_o *v91; // x19
  __int64 v92; // x9
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4BD938E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager_OnClickListView__);
    sub_1C21E38(&QuestBoardListViewObject_TypeInfo);
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass132_0__OnClickListView_b__0__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass132_0_TypeInfo);
    byte_4BD938E = 1;
  }
  entities = 0LL;
  memset(&v94, 0, sizeof(v94));
  v5 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass132_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_164;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = obj;
  v14 = (void **)(v5 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)obj, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_164;
  v27 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 56LL);
  if ( !v27 )
    goto LABEL_164;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_164;
  }
  v29 = *(MapControl_QuestInfo_o **)(v27 + 120);
  if ( !v29 )
    return;
  AreaBoardInfo_k__BackingField = (int64_t)v29->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v5 + 24) = AreaBoardInfo_k__BackingField;
  v31 = (MapControl_AreaBoardInfo_o **)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), AreaBoardInfo_k__BackingField, v21, v22, v23, v24, v25, v26);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_164;
  dispType = v29->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v27 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v63 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v63 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
      v64 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v63, v63[4]);
      OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0LL);
      if ( !*v31 )
        goto LABEL_164;
      eventEnt = (*v31)->fields.eventEnt;
      v66 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v66,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewManager___c__DisplayClass132_0__OnClickListView_b__0__,
        0LL);
      v68 = *(_QWORD *)(v5 + 24);
      if ( !v68 )
        goto LABEL_164;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v66, *(_DWORD *)(v68 + 20), v67) )
        return;
      Instance = (CommonUI_o *)*v14;
      if ( !*v14 )
        goto LABEL_164;
      mTerminalList = this->fields.mTerminalList;
      v70 = *v31;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_164;
      ScrTerminalListTop__Click_Area(mTerminalList, v70, (int32_t)Instance, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_92;
      if ( !*v31 )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v31 || !Instance )
        goto LABEL_164;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v31)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_23;
      v35 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v35, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_92;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0LL) )
      {
LABEL_92:
        v71 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v71 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
        v72 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v71, v71[4]);
        OverwriteAssetSoundName__PlaySystemSe(v72, 2, 0, 0LL);
        return;
      }
LABEL_23:
      WarInfo_k__BackingField = v29->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_135;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_164;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v29->fields.questId, 18, 0LL);
      v41 = MapControl_QuestInfo__GetMine(v29, 0LL);
      if ( EventId != GroupId )
        goto LABEL_135;
      v42 = v41;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9407 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9407 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.connectMark[1].fields.markBase) )
        goto LABEL_135;
      if ( !v42 )
        goto LABEL_164;
      if ( QuestEntity__HasFlag(v42, 2LL, 0LL) )
        goto LABEL_135;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_164;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_135;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_164;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v94 = v93;
      break;
    case 2:
    case 3:
      v55 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v55 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
      v56 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v55, v55[4]);
      OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v29, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD909F )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909F = 1;
      }
      v58 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v58 = TerminalPramsManager_TypeInfo;
      }
      v58->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v29, 0LL);
      if ( !Instance )
        goto LABEL_164;
      if ( LODWORD(Instance->fields.topImg) == 3 )
      {
        questId = v29->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9405 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9405 = 1;
        }
        v60 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v60 = TerminalPramsManager_TypeInfo;
        }
        v60->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v61 = *(_DWORD *)(v27 + 148);
      if ( v61 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD84F7 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD84F7 = 1;
        }
        v62 = TerminalPramsManager_TypeInfo;
LABEL_105:
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = TerminalPramsManager_TypeInfo;
        }
        v62->static_fields->_SelectedRecollectionWarId_k__BackingField = v61;
        if ( !byte_4BD9406 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          v62 = TerminalPramsManager_TypeInfo;
          byte_4BD9406 = 1;
        }
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = TerminalPramsManager_TypeInfo;
        }
        v62->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_164;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v29->fields.warId, v29->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v76 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v76 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
      v77 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v76, v76[4]);
      OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0, 0LL);
      MapControl_QuestInfo__GetMine(v29, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v78 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v78 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v78->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_164;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v79 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v79 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v79->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_164;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v80);
      Instance = (CommonUI_o *)*v14;
      if ( !*v14 )
        goto LABEL_164;
      v81 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v81 )
        goto LABEL_164;
      ScrTerminalListTop__Click_WarBoard(v81, v29, (int32_t)Instance, 0LL);
      return;
    case 6:
      v73 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v73 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
      v74 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v73, v73[4]);
      OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0, 0LL);
      v75 = MapControl_QuestInfo__GetSpotID(v29, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD909F )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909F = 1;
      }
      v62 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
      }
      v62->static_fields->_SpotId_k__BackingField = v75;
      v61 = *(_DWORD *)(v27 + 148);
      if ( !byte_4BD84F7 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
        byte_4BD84F7 = 1;
      }
      goto LABEL_105;
    default:
      return;
  }
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    current = v94.fields._current;
    if ( !v94.fields._current )
      goto LABEL_166;
    if ( EventFortificationEntity__IsOpenFortificationWarningDialog(
           (EventFortificationEntity_o *)v94.fields._current,
           0LL) )
    {
      v45 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
      v46 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v45, v45[4]);
      OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v48 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v48 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v48->static_fields->mInstance;
      if ( !mInstance )
        sub_1C22094(0LL, v47);
      TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v50);
      fortificationWarningDialog = this->fields.fortificationWarningDialog;
      if ( !fortificationWarningDialog )
        sub_1C22094(0LL, v51);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           fortificationWarningDialog,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
      if ( !Component_object )
        sub_1C22094(0LL, v54);
      FortificationWarningDialogComponent__Open((FortificationWarningDialogComponent_o *)Component_object, 0LL);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v94,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_135:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_164;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
  v82 = Method_QuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v82 = (_QWORD *)sub_1C21E50(Method_QuestBoardListViewManager_OnClickListView__);
  v83 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v82, v82[4]);
  OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0, 0LL);
  v84 = MapControl_QuestInfo__GetMine(v29, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v85 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v85 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v85->static_fields->mInstance;
  if ( !Instance )
LABEL_164:
    sub_1C22094(Instance, v7);
  v86 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  IsDisplayQuestInformation_35133456 = QuestInformationComponent__IsDisplayQuestInformation_35133456(v84, 0LL);
  if ( v86 < 1 || !IsDisplayQuestInformation_35133456 || v86 == v29->fields.questId )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v89 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v89 = TerminalSceneComponent_TypeInfo;
    }
    Instance = (CommonUI_o *)v89->static_fields->mInstance;
    if ( Instance )
    {
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v90);
      Instance = (CommonUI_o *)*v14;
      if ( *v14 )
      {
        v91 = this->fields.mTerminalList;
        Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
        if ( v91 )
        {
          ScrTerminalListTop__Click_Quest(v91, v29, (int32_t)Instance, 0LL);
          return;
        }
      }
    }
    goto LABEL_164;
  }
  Instance = (CommonUI_o *)*v14;
  if ( !*v14 )
    goto LABEL_164;
  v92 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v92
    || (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v92 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_1C22354(Instance);
LABEL_166:
    sub_1C22094(current, v43);
  }
  QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v88);
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
  sub_1C21DDC(
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

  if ( (byte_4BD93A1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A1 = 1;
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

  if ( (byte_4BD93A2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A2 = 1;
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
      sub_1C22094(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_70891020(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4BD93A3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A3 = 1;
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

  if ( (byte_4BD93AD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93AD = 1;
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
              UnityEngine_Transform__SetParent_70891020(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v18 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C22094(gameObject, v10);
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
  UnityEngine_Transform__SetParent_70891020(v15, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4BD93AC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD93AC = 1;
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
              UnityEngine_Transform__SetParent_70891020(v28, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v21 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C22094(gameObject, v10);
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
  UnityEngine_Transform__SetParent_70891020(v18, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4BD93AB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93AB = 1;
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

  if ( (byte_4BD93AA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93AA = 1;
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o **v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o **v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Object_o *v31; // x20
  QuestBoardListEffectComponent_o *v32; // x20
  System_Action_o *v33; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x3

  if ( (byte_4BD93AE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__0__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__1__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo);
    byte_4BD93AE = 1;
  }
  v8 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = playingCallback1;
  v17 = (System_Action_o **)(v8 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)playingCallback1, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = effectComponent;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)effectComponent, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v8 + 32) = endAct;
  v24 = (System_Action_o **)(v8 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)endAct, v25, v26, v27, v28, v29, v30);
  v31 = *(UnityEngine_Object_o **)(v8 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
  {
    v32 = *(QuestBoardListEffectComponent_o **)(v8 + 24);
    v33 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__0__,
      0LL);
    v34 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v32 )
    {
      QuestBoardListEffectComponent__Play(v32, v33, v34, v35);
      return;
    }
LABEL_14:
    sub_1C22094(v9, v10);
  }
  if ( *v17 )
    ActionExtensions__Call(*v17, 0LL);
  if ( *v24 )
    ActionExtensions__Call(*v24, 0LL);
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
  AssetData_o *fortificationAssetData; // x20
  PartyOrganizationUtility_o *p_fortificationAssetData; // x19
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4BD93AF & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD93AF = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fortificationWarningDialog, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab,
    0LL,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  fortificationAssetData = this->fields.fortificationAssetData;
  p_fortificationAssetData = (PartyOrganizationUtility_o *)&this->fields.fortificationAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39034872(fortificationAssetData, 0LL);
  p_fortificationAssetData->klass = 0LL;
  sub_1C21DDC(p_fortificationAssetData, 0LL, v53, v54, v55, v56, v57, v58);
}


void __fastcall QuestBoardListViewManager__ReleaseTerminalAsset(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssetData_o *RoadmapAssetData_k__BackingField; // x20
  PartyOrganizationUtility_o *p_RoadmapAssetData_k__BackingField; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD93B0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD93B0 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39034872(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectAssetData, 0LL, v4, v5, v6, v7, v8, v9);
  }
  RoadmapAssetData_k__BackingField = this->fields._RoadmapAssetData_k__BackingField;
  p_RoadmapAssetData_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._RoadmapAssetData_k__BackingField;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39034872(RoadmapAssetData_k__BackingField, 0LL);
  p_RoadmapAssetData_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_RoadmapAssetData_k__BackingField, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFolderBgTemp; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BD9398 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9398 = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0LL, 0LL) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_1C22094(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_mFolderBgTemp, 0LL, v7, v8, v9, v10, v11, v12);
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
  int64_t v11; // x20
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x0
  __int64 *v29; // x8
  __int64 v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x23
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  float exitTime; // s0
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x5
  const MethodInfo *v46; // x2
  Il2CppObject *v47; // x20
  AvalonSceneManager_c *v48; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v50; // x21
  CommonUI_o *v51; // x0
  float v52; // s0
  System_Action_o *v53; // x2
  Il2CppObject *v54; // x21
  AvalonSceneManager_c *v55; // x8
  float v56; // s8
  System_Action_o *v57; // x22

  if ( (byte_4BD9388 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__0__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__1__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__8__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__9__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_2__RequestListObject_b__7__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass122_2_TypeInfo);
    byte_4BD9388 = 1;
  }
  v11 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_39;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = end_act;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)end_act, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v11 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  *(_BYTE *)(v11 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v28 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v29 = &Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__0__;
      goto LABEL_19;
    case 4:
      v30 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass122_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0LL);
      if ( !v30 )
        goto LABEL_39;
      *(_QWORD *)(v30 + 24) = v11;
      v37 = v30 + 24;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 24), v11, v31, v32, v33, v34, v35, v36);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v30 + 16) = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v38);
      if ( !isWhiteFade )
        goto LABEL_42;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_42:
        if ( *(_QWORD *)v37 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v37 + 24LL) )
          {
            exitTime = *(float *)(v30 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v30 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v39);
          if ( *(_QWORD *)v37 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v30 + 16),
              *(System_Action_o **)(*(_QWORD *)v37 + 32LL),
              v46);
            goto LABEL_37;
          }
        }
LABEL_39:
        sub_1C22094(Instance, v13);
      }
      this->fields.mFaded = 1;
      v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v48 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v48 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v48->static_fields->DEFAULT_FADE_TIME;
      v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v30,
        Method_QuestBoardListViewManager___c__DisplayClass122_2__RequestListObject_b__7__,
        0LL);
      if ( !v47 )
        goto LABEL_39;
      v51 = (CommonUI_o *)v47;
      v52 = DEFAULT_FADE_TIME;
      v53 = v50;
LABEL_36:
      CommonUI__maskFadeout(v51, 2, v52, v53, 0LL);
LABEL_37:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v27);
      v28 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v29 = &Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__1__;
LABEL_19:
      v41 = v28;
      System_Action___ctor(v28, (Il2CppObject *)v11, *v29, 0LL);
      QuestBoardListViewManager__changeBG(this, v41, v42);
      return;
    case 6:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v27);
      if ( !isWhiteFade )
        goto LABEL_24;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( TerminalPramsManager__IsAuto(0LL) )
      {
LABEL_24:
        QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, 0.0, v43);
        v44 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v11,
          Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v44, 0, 0, v45);
        goto LABEL_37;
      }
      this->fields.mFaded = 1;
      v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v55 = AvalonSceneManager_TypeInfo;
      }
      v56 = v55->static_fields->DEFAULT_FADE_TIME;
      v57 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v57,
        (Il2CppObject *)v11,
        Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__8__,
        0LL);
      if ( !v54 )
        goto LABEL_39;
      v51 = (CommonUI_o *)v54;
      v52 = v56;
      v53 = v57;
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  QuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t id; // w21
  int32_t v20; // w22
  NetworkManager_ResultCallbackFunc_o *v21; // x19
  int32_t flagType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD9392 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass136_0__RequestToRaiseTutorialFlag_b__0__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
    byte_4BD9392 = 1;
  }
  flagType = 0;
  v8 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_17;
  *(_QWORD *)(v8 + 16) = clickAreaFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)clickAreaFunc, v11, v12, v13, v14, v15, v16);
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
    v20 = flagType;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v20, 0LL) )
    {
      FlagFromOnEventStart = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_17;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v21,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass136_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FlagFromOnEventStart = NetworkManager__getRequest_object_(
                                 v21,
                                 (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)FlagFromOnEventStart, v20, id, 0LL);
          return 1;
        }
LABEL_17:
        sub_1C22094(FlagFromOnEventStart, v10);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4BD9390 & 1) == 0 )
  {
    sub_1C21E38(&AlphaTransitionCalculator_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    byte_4BD9390 = 1;
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
  v6 = (AlphaTransitionCalculator_o *)sub_1C22084(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  this->fields.rewardIconAlphaCalculator = v6;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.rewardIconAlphaCalculator,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_1C22094(0LL, v13);
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
    sub_1C22094(mFolderBg, method);
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
  if ( (byte_4BD93B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93B2 = 1;
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
    sub_1C22094(this, isActive);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_1C22094(v11, v12);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)current,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v14 )
      {
        if ( !Component_object )
          sub_1C22094(v14, v15);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0LL);
      }
      if ( isActive && QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)current, v15) )
        QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)current, v6->fields.mTerminalList, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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

  if ( (byte_4BD938D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD938D = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0LL, 0LL);
  if ( v10 )
  {
    v12 = this->fields.effectAppearComponent;
    if ( !v12 )
      sub_1C22094(v10, v11);
    forceShiftY = v12->fields.targetBoardForceShiftPosY;
  }
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, item_index, isAnimation, 0, forceShiftY, 0LL);
}


void __fastcall QuestBoardListViewManager__SetFocusItem(
        QuestBoardListViewManager_o *this,
        int32_t itemIndex,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager__MoveTopItem((ListViewManager_o *)this, itemIndex, isAnimation, 0.0, 0LL);
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
    sub_1C22094(0LL, v12);
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
    sub_1C22094(0LL, isActive);
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
  if ( (byte_4BD9385 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewObject_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_9039/*"Map Touch Disable"*/);
    this = (QuestBoardListViewManager_o *)sub_1C21E38(&StringLiteral_3455/*"CAPTER INIT"*/);
    byte_4BD9385 = 1;
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
    QuestBoardListViewObject__Init_35101240((QuestBoardListViewObject_o *)obj, 2, 0LL, method);
    return;
  }
  QuestBoardListViewObject__Init_35101240((QuestBoardListViewObject_o *)obj, 3, 0LL, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
  if ( !byte_4BD9404 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9404 = 1;
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
    if ( (System_String__IndexOf_63147052((System_String_o *)v9, (System_String_o *)StringLiteral_3455/*"CAPTER INIT"*/, 0LL) & 0x80000000) == 0 )
      return;
    this = *(QuestBoardListViewManager_o **)(v8 + 104);
    if ( !this )
LABEL_45:
      sub_1C22094(this, obj);
    this = (QuestBoardListViewManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    if ( !ActiveStateName )
      goto LABEL_45;
    if ( (System_String__IndexOf_63147052(ActiveStateName, (System_String_o *)StringLiteral_9039/*"Map Touch Disable"*/, 0LL) & 0x80000000) == 0 )
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
                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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

  if ( (byte_4BD938B & 1) == 0 )
  {
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    byte_4BD938B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_object )
    sub_1C22094(0LL, v5);
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
  PartyOrganizationUtility_o *p_blockMask; // x20
  UnityEngine_Object_o *klass; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *v23; // x19

  if ( (byte_4BD9379 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9379 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_blockMask = (PartyOrganizationUtility_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1C21DDC(p_blockMask, 0LL, v8, v9, v10, v11, v12, v13);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v15 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              v15,
              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v16;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.blockMask, (int64_t)v16, v17, v18, v19, v20, v21, v22);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.onEffectPanel,
        0LL);
      v23 = this->fields.blockMask;
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  if ( (byte_4BD9399 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    byte_4BD9399 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C22094(scrollView, *(_QWORD *)&depth);
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
  if ( (byte_4BD9395 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewObject_TypeInfo);
    byte_4BD9395 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v5,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C22094(itemList, *(_QWORD *)&idx);
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
  sub_1C22354(v8);
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

  if ( (byte_4BD9394 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4BD9394 = 1;
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
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
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
    sub_1C22094(ObjectList, v4);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v24; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v26; // x21

  if ( (byte_4BD9389 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass123_0__SetSlideOut_b__0__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass123_0_TypeInfo);
    byte_4BD9389 = 1;
  }
  v7 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass123_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)end_act, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  v22 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v22,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v24 = (SlideFadeObject_o *)Component_object;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_object);
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass123_0__SetSlideOut_b__0__,
    0LL);
  if ( !v24 )
LABEL_9:
    sub_1C22094(gameObject, v9);
  SlideFadeObject__SlideOut_34814208(v24, OUT_POS_OFS_X, time, 0.0, v26, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
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
  _QWORD *monitor; // x8
  __int64 v33; // x8
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4BD937E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    byte_4BD937E = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
      sub_1C22094(this, *(_QWORD *)&targetWarId);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = 1;
    v35 = v34;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        current = v35.fields._current;
        if ( v35.fields._current )
        {
          methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v35.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestBoardListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v35.fields._current[7].monitor;
            if ( monitor )
            {
              v33 = monitor[14];
              if ( v33 )
              {
                if ( *(_DWORD *)(v33 + 16) != 1 && *(_DWORD *)(v33 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v13 & 1) != 0 )
        {
          v22 = (System_Collections_Generic_List_object__o *)v6->fields.topItemList;
          if ( !v22 )
            sub_1C22094(0LL, v35.fields._current);
          items = v22->fields._items;
          v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v22->fields._version;
          if ( !items )
            sub_1C22094(v22, current);
          v25 = v22->fields._size;
          if ( (unsigned int)v25 >= items->max_length )
          {
            v13 = 1;
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              current,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + v25;
            v13 = 1;
            v22->fields._size = v25 + 1;
            v26[4] = (Il2CppClass *)current;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)current, v14, v15, v16, v17, v18, v19);
          }
        }
        else
        {
          v27 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
          if ( !v27 )
            sub_1C22094(0LL, v35.fields._current);
          v28 = v27->fields._items;
          v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v27->fields._version;
          if ( !v28 )
            sub_1C22094(v27, current);
          v30 = v27->fields._size;
          if ( (unsigned int)v30 < v28->max_length )
            goto LABEL_24;
LABEL_35:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            current,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          v13 = 0;
        }
      }
      v13 = 0;
      if ( isClose )
      {
        v27 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
        if ( !v27 )
          sub_1C22094(0LL, v35.fields._current);
        v28 = v27->fields._items;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v27->fields._version;
        if ( !v28 )
          sub_1C22094(v27, current);
        v30 = v27->fields._size;
        if ( (unsigned int)v30 >= v28->max_length )
          goto LABEL_35;
LABEL_24:
        v31 = &v28->obj.klass + v30;
        v27->fields._size = v30 + 1;
        v31[4] = (Il2CppClass *)current;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)current, v14, v15, v16, v17, v18, v19);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_4BD939F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD939F = 1;
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
                                                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              if ( !byte_4BD6BB1 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                byte_4BD6BB1 = 1;
              }
              if ( v12 )
              {
                UnityEngine_Transform__set_localPosition(
                  v12,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
                v13 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4BD6BB7 )
                {
                  transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
                  byte_4BD6BB7 = 1;
                }
                if ( v13 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v13,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
                  v14 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4BD6BB6 )
                  {
                    transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB6 = 1;
                  }
                  if ( v14 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v14,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v10,
                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&this->fields.effectAppearComponent,
                      (int64_t)Component_object,
                      v17,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
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
                        v23);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1C22094(transform, v9);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_4BD93A7 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A7 = 1;
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
                                                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.effectAppearComponent,
                (int64_t)Component_object,
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
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v20);
                return;
              }
            }
          }
        }
      }
      sub_1C22094(transform, v9);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_4BD93A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A0 = 1;
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
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          if ( !byte_4BD6BB1 )
          {
            transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB1 = 1;
          }
          if ( v9 )
          {
            UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
            v10 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4BD6BB7 )
            {
              transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
              byte_4BD6BB7 = 1;
            }
            if ( v10 )
            {
              UnityEngine_Transform__set_localRotation(
                v10,
                UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                0LL);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
              v11 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4BD6BB6 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                byte_4BD6BB6 = 1;
              }
              if ( v11 )
              {
                UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     v7,
                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&this->fields.effectAppearFadeComponent,
                  (int64_t)Component_object,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19);
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
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v20);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1C22094(transform, v6);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4BD93A8 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A8 = 1;
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
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.effectAppearFadeComponent,
            (int64_t)Component_object,
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
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v17);
            return;
          }
        }
      }
    }
    sub_1C22094(transform, v6);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  float v28; // s1

  if ( (byte_4BD93A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A4 = 1;
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
                             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
      if ( !byte_4BD6BB1 )
      {
        transform = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v16 )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
      v17 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BD6BB7 )
      {
        transform = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
        byte_4BD6BB7 = 1;
      }
      if ( !v17 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(
        v17,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
      v18 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BD6BB6 )
      {
        transform = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v18 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v14,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.effectDisappearComponent,
        (int64_t)Component_object,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
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
        sub_1C22094(transform, v13);
      }
      if ( isNextBoardReleased )
        v28 = endTime;
      else
        v28 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v28, v27);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  const MethodInfo *v35; // x2
  Il2CppObject *v36; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  const MethodInfo *v46; // x2
  struct QuestBoardListEffectDisappearComponent_o *v47; // x8
  struct QuestBoardListEffectDisappearComponent_o *v48; // x8

  if ( (byte_4BD93A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A5 = 1;
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
                             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              if ( !byte_4BD6BB1 )
              {
                transform = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                byte_4BD6BB1 = 1;
              }
              if ( v23 )
              {
                UnityEngine_Transform__set_localPosition(
                  v23,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
                v24 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4BD6BB7 )
                {
                  transform = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
                  byte_4BD6BB7 = 1;
                }
                if ( v24 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v24,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
                  v25 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4BD6BB6 )
                  {
                    transform = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB6 = 1;
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
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = (struct QuestBoardListEffectBoardOpenComponent_o *)Component_object;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&this->fields.effectDisappear2BbComponent,
                        (int64_t)Component_object,
                        v28,
                        v29,
                        v30,
                        v31,
                        v32,
                        v33);
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
                        v35);
                      if ( *p_effectDisappear2BbComponent )
                      {
                        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
                        return;
                      }
                    }
                    else
                    {
                      v36 = UnityEngine_GameObject__GetComponent_object_(
                              v21,
                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = (struct QuestBoardListEffectComponent_o *)v36;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&this->fields.effectDisappear2Component,
                        (int64_t)v36,
                        v38,
                        v39,
                        v40,
                        v41,
                        v42,
                        v43);
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
                        v47 = this->fields.effectDisappearComponent;
                        if ( !v47 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v21, v47->fields.disappearEffect2ShiftPosX, 0LL);
                        v48 = this->fields.effectDisappearComponent;
                        if ( !v48 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v21, v48->fields.disappearEffect2ShiftPosY, 0LL);
                      }
                      transform = (__int64)*p_effectDisappear2Component;
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(
                          (QuestBoardListEffectComponent_o *)transform,
                          0,
                          0.0,
                          0.0,
                          v46);
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
      sub_1C22094(transform, v20);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_4BD93A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A6 = 1;
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
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    if ( !byte_4BD6BB1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v13 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BD6BB7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
      byte_4BD6BB7 = 1;
    }
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_Transform__set_localRotation(
      v14,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BD6BB6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v15 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v11,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.effectDisappearFadeComponent,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0LL, 0LL) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_26;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v24);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_26:
      sub_1C22094(transform, v10);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void __fastcall QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blackMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  __int64 v7; // x0
  System_Object_array *v8; // x20
  QuestBoardListViewManager___c_c *v9; // x8
  System_Func_object__bool__o *_9__157_0; // x21
  Il2CppObject *v11; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  PartyOrganizationUtility_o *p_blackMarkPrefab; // x19
  Il2CppObject *Object_object__49880776; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BD939B & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_BasicHelper_Any_WarEntity___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___);
    sub_1C21E38(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__157_0__);
    sub_1C21E38(&QuestBoardListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_19129/*"ef_blackpoint"*/);
    byte_4BD939B = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    v6 = Instance;
    v7 = sub_1C21F6C(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___
                                             + 40)
                                           + 1].methodPtr);
    v8 = (System_Object_array *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v7 + 8))(v6, v7);
    v9 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v9 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__157_0 = (System_Func_object__bool__o *)v9->static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = QuestBoardListViewManager___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__157_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__157_0,
        v11,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__157_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__157_0 = (struct System_Func_WarEntity__bool__o *)_9__157_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__157_0,
        (int64_t)_9__157_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__49917468(
                                 v8,
                                 (System_Func_T__bool__o *)_9__157_0,
                                 (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v19 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1C22094(Instance, v5);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v19) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (PartyOrganizationUtility_o *)&this->fields.blackMarkPrefab;
        Object_object__49880776 = AssetData__GetObject_object__49880776(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19129/*"ef_blackpoint"*/,
                                    (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
        p_blackMarkPrefab->klass = (PartyOrganizationUtility_c *)Object_object__49880776;
        sub_1C21DDC(p_blackMarkPrefab, (int64_t)Object_object__49880776, v24, v25, v26, v27, v28, v29);
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
  Il2CppObject *Object_object__49880776; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *v21; // x20
  __int64 *v22; // x8
  PartyOrganizationUtility_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v24; // x20
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Object_o *v32; // x20
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v49; // x8
  PartyOrganizationUtility_o *p_nt2BoardAppearEffectFadePrefab; // x19
  Il2CppObject *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v67; // x8
  UnityEngine_Object_o *v68; // x20
  Il2CppObject *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  UnityEngine_Object_o *v76; // x20
  Il2CppObject *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  UnityEngine_Object_o *v84; // x20
  Il2CppObject *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  UnityEngine_Object_o *v92; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  Il2CppObject *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4BD939E & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17490/*"bit_board_appear2"*/);
    sub_1C21E38(&StringLiteral_17496/*"bit_board_disappear5"*/);
    sub_1C21E38(&StringLiteral_17524/*"bit_fade_black2"*/);
    sub_1C21E38(&StringLiteral_17495/*"bit_board_disappear4"*/);
    sub_1C21E38(&StringLiteral_17492/*"bit_board_disappear"*/);
    sub_1C21E38(&StringLiteral_17523/*"bit_fade_black"*/);
    sub_1C21E38(&StringLiteral_17489/*"bit_board_appear"*/);
    sub_1C21E38(&StringLiteral_17526/*"bit_fade_black4"*/);
    sub_1C21E38(&StringLiteral_17525/*"bit_fade_black3"*/);
    sub_1C21E38(&StringLiteral_17491/*"bit_board_appear3"*/);
    sub_1C21E38(&StringLiteral_17493/*"bit_board_disappear2"*/);
    sub_1C21E38(&StringLiteral_17494/*"bit_board_disappear3"*/);
    byte_4BD939E = 1;
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
      Object_object__49880776 = AssetData__GetObject_object__49880776(
                                  (AssetData_o *)mTerminalList,
                                  (System_String_o *)StringLiteral_17489/*"bit_board_appear"*/,
                                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)Object_object__49880776;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab,
        (int64_t)Object_object__49880776,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v14 = AssetData__GetObject_object__49880776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17523/*"bit_fade_black"*/,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v14;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
        (int64_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    goto LABEL_17;
  }
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v24 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v24, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v25 = AssetData__GetObject_object__49880776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17490/*"bit_board_appear2"*/,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v25;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab,
        (int64_t)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v32, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v33 = AssetData__GetObject_object__49880776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17525/*"bit_fade_black3"*/,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v33;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
        (int64_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
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
      v59 = AssetData__GetObject_object__49880776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17492/*"bit_board_disappear"*/,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v59;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab,
        (int64_t)v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0LL, 0LL) )
      goto LABEL_71;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v67 = &StringLiteral_17493/*"bit_board_disappear2"*/;
    goto LABEL_70;
  }
  if ( (_DWORD)mTerminalList != v4->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_17:
      v21 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_100;
        v22 = &StringLiteral_17493/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_39:
        v41 = AssetData__GetObject_object__49880776(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v22,
                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
        p_boardDisappear2EffectPrefab->klass = (PartyOrganizationUtility_c *)v41;
        sub_1C21DDC(p_boardDisappear2EffectPrefab, (int64_t)v41, v42, v43, v44, v45, v46, v47);
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
          v94 = AssetData__GetObject_object__49880776(
                  (AssetData_o *)mTerminalList,
                  (System_String_o *)StringLiteral_17491/*"bit_board_appear3"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          this->fields.nt2BoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v94;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (int64_t)v94,
            v95,
            v96,
            v97,
            v98,
            v99,
            v100);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v49 = &StringLiteral_17526/*"bit_fade_black4"*/;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v22 = &StringLiteral_17496/*"bit_board_disappear5"*/;
      p_boardDisappear2EffectPrefab = (PartyOrganizationUtility_o *)&this->fields.ntBoardAppearEffectPrefab;
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
        v49 = &StringLiteral_17524/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_45:
        v51 = AssetData__GetObject_object__49880776(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v49,
                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
        p_nt2BoardAppearEffectFadePrefab->klass = (PartyOrganizationUtility_c *)v51;
        sub_1C21DDC(p_nt2BoardAppearEffectFadePrefab, (int64_t)v51, v52, v53, v54, v55, v56, v57);
        return;
      }
      goto LABEL_100;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v68 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v68, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v69 = AssetData__GetObject_object__49880776(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17494/*"bit_board_disappear3"*/,
            (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v69;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab,
      (int64_t)v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  v76 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v76, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v67 = &StringLiteral_17495/*"bit_board_disappear4"*/;
LABEL_70:
    v77 = AssetData__GetObject_object__49880776(
            (AssetData_o *)mTerminalList,
            (System_String_o *)*v67,
            (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v77;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab,
      (int64_t)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
LABEL_71:
  v84 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v84, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v85 = AssetData__GetObject_object__49880776(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17524/*"bit_fade_black2"*/,
            (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v85;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab,
      (int64_t)v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v92 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v92, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v49 = &StringLiteral_17496/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_45;
    }
LABEL_100:
    sub_1C22094(mTerminalList, method);
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
  System_Func_object__bool__o *_9__120_0; // x21
  Il2CppObject *v13; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x1
  int32_t klass_high; // w8
  const MethodInfo *v24; // x3

  if ( (byte_4BD9386 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_1C21E38(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__SetupDisp_b__120_0__);
    sub_1C21E38(&QuestBoardListViewManager___c_TypeInfo);
    byte_4BD9386 = 1;
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
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v4);
      size = v6->fields._size;
      if ( ++v7 >= size )
        goto LABEL_8;
    }
LABEL_23:
    sub_1C22094(ObjectList, v4);
  }
LABEL_8:
  if ( size >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v6,
                                                                0,
                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
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
           (const MethodInfo_2FBDE04 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    v10 = QuestBoardListViewManager___c_TypeInfo;
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v10 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__120_0 = (System_Func_object__bool__o *)v10->static_fields->__9__120_0;
    if ( !_9__120_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = QuestBoardListViewManager___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__120_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestBoardListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__120_0, v13, Method_QuestBoardListViewManager___c__SetupDisp_b__120_0__, 0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__120_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__120_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__120_0,
        (int64_t)_9__120_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            v11,
            (System_Func_TSource__bool__o *)_9__120_0,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    if ( v21 )
    {
      klass_high = HIDWORD(v21[1].klass);
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
        QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v22);
        QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v24);
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
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  v24 = eventId;
  if ( (byte_4BD939D & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass159_0__SetupFortificationWarningDialog_b__0__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo);
    sub_1C21E38(&StringLiteral_6396/*"EventUI/Prefabs/"*/);
    byte_4BD939D = 1;
  }
  v6 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1C22094(v7, v8);
  *(_QWORD *)(v6 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = func;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)func, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString((int32_t)&v24, 0LL);
  v22 = System_String__Concat_63115476((System_String_o *)StringLiteral_6396/*"EventUI/Prefabs/"*/, v21, 0LL);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v6,
    Method_QuestBoardListViewManager___c__DisplayClass159_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0LL);
}


void __fastcall QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  __int64 v7; // x0
  System_Object_array *v8; // x20
  QuestBoardListViewManager___c_c *v9; // x8
  System_Func_object__bool__o *_9__158_0; // x21
  Il2CppObject *v11; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  PartyOrganizationUtility_o *p_whiteMarkPrefab; // x19
  Il2CppObject *Object_object__49880776; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BD939C & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_BasicHelper_Any_WarEntity___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___);
    sub_1C21E38(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__158_0__);
    sub_1C21E38(&QuestBoardListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_19191/*"ef_whitepoint"*/);
    byte_4BD939C = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    v6 = Instance;
    v7 = sub_1C21F6C(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___
                                             + 40)
                                           + 1].methodPtr);
    v8 = (System_Object_array *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v7 + 8))(v6, v7);
    v9 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v9 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__158_0 = (System_Func_object__bool__o *)v9->static_fields->__9__158_0;
    if ( !_9__158_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = QuestBoardListViewManager___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__158_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__158_0,
        v11,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__158_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__158_0 = (struct System_Func_WarEntity__bool__o *)_9__158_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__158_0,
        (int64_t)_9__158_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__49917468(
                                 v8,
                                 (System_Func_T__bool__o *)_9__158_0,
                                 (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v19 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1C22094(Instance, v5);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v19) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (PartyOrganizationUtility_o *)&this->fields.whiteMarkPrefab;
        Object_object__49880776 = AssetData__GetObject_object__49880776(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19191/*"ef_whitepoint"*/,
                                    (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
        p_whiteMarkPrefab->klass = (PartyOrganizationUtility_c *)Object_object__49880776;
        sub_1C21DDC(p_whiteMarkPrefab, (int64_t)Object_object__49880776, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_4BD93A9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93A9 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v7 = this->fields.effectDisappearFadeComponent;
    if ( !v7 )
      sub_1C22094(0LL, v6);
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

  if ( (byte_4BD9391 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9391 = 1;
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
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( EventTutorialEntity )
      {
        v8 = *((_DWORD *)EventTutorialEntity + 5);
        result = 1;
        *flagType = v8;
        return result;
      }
LABEL_9:
      sub_1C22094(EventTutorialEntity, v7);
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

  if ( (byte_4BD9383 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ListViewItem___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9383 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C22094(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
        sub_1C22354(v21.fields._current);
LABEL_24:
        sub_1C22094(IsReleaseFocusQuestBoard, v12);
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
    sub_1C22094(QuestReleasedFocusState, v16);
  *questId = v17[4];
  v18 = 5;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4BD938F & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_TransitionCalculator_float__Update__);
    byte_4BD938F = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v5 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_390F058 *)Method_TransitionCalculator_float__Update__);
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
        sub_1C22094(v6, v4);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD9380 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewManager__WaitFinish_d__113_TypeInfo);
    byte_4BD9380 = 1;
  }
  v5 = sub_1C22084(QuestBoardListViewManager__WaitFinish_d__113_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)endAct, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__151_0(
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
    sub_1C22094(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].monitor) = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__151_1(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  char *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x1

  if ( (byte_4BD93B5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11496/*"RemoveTempBG"*/);
    byte_4BD93B5 = 1;
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
    sub_1C22094(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 8) = 0;
  v11 = StringLiteral_11496/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 11) = StringLiteral_11496/*"RemoveTempBG"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(mFolderBgTemp + 88), v11, v5, v6, v7, v8, v9, v10);
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
    sub_1C22094(mFolderBg, *(_QWORD *)&inOut);
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

  if ( (byte_4BD9396 & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_3179/*"Back/back{0}"*/);
    byte_4BD9396 = 1;
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
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3179/*"Back/back{0}"*/, v11, 0LL);
  if ( !v7 )
LABEL_14:
    sub_1C22094(mFolderBg, callback);
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
    sub_1C22094(0LL, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD937A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD937A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      v16 = (int64_t)Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1C22094(mFolderBg, method);
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
  sub_1C21DDC(
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


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__155___ctor(
        QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__155__MoveNext(
        QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *v3; // x19
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct QuestBoardListViewManager___c__DisplayClass155_0_o **p__8__1; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v30; // x23
  unsigned int v31; // w24
  EventEntity_o *v32; // x25
  const MethodInfo *v33; // x3
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *_8__1; // x8
  RoadmapButtonPrefab_c *v35; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x21
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *v37; // x20
  RoadmapButtonPrefab_c *v38; // x0
  System_String_o *v39; // x21
  AssetLoader_LoadEndDataHandler_o *v40; // x22
  Il2CppObject *v41; // x20
  System_Func_bool__o *v42; // x21
  UnityEngine_WaitUntil_o *v43; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  bool result; // w0
  Il2CppObject *v52; // x21
  AssetLoader_LoadEndDataHandler_o *v53; // x20
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *v54; // x8
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *v55; // x22
  System_Action_o *_9__4; // x23
  int32_t id; // w21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *v64; // x20
  System_Func_bool__o *v65; // x21
  UnityEngine_WaitUntil_o *v66; // x20
  PartyOrganizationUtility_o *v67; // x19
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7

  v3 = this;
  if ( (byte_4BD93C1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&RoadmapButtonPrefab_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__0__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__1__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__2__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__3__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__4__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass155_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)sub_1C21E38(&StringLiteral_13846/*"Terminal/Effect"*/);
    byte_4BD93C1 = 1;
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
      v52 = (Il2CppObject *)v3->fields.__8__1;
      v53 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v53,
        v52,
        Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13846/*"Terminal/Effect"*/,
                                                                         v53,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v54 = v3->fields.__8__1;
        if ( !v54 )
          goto LABEL_51;
        ActionExtensions__Call(v54->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    v35 = RoadmapButtonPrefab_TypeInfo;
    if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
      v35 = RoadmapButtonPrefab_TypeInfo;
    }
    ASSET_DATA_PATH_ROADMAP = v35->static_fields->ASSET_DATA_PATH_ROADMAP;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)AssetManager__isExistAssetStorage(
                                                                       ASSET_DATA_PATH_ROADMAP,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_51;
      if ( !_4__this->fields._RoadmapAssetData_k__BackingField )
      {
        v37 = v3->fields.__8__1;
        if ( !v37 )
          goto LABEL_51;
        v37->fields.flag = 0;
        v38 = RoadmapButtonPrefab_TypeInfo;
        if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
          v38 = RoadmapButtonPrefab_TypeInfo;
          v37 = v3->fields.__8__1;
        }
        v39 = v38->static_fields->ASSET_DATA_PATH_ROADMAP;
        v40 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v40,
          (Il2CppObject *)v37,
          Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__1__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v39, v40, 1, 0LL);
      }
    }
    v41 = (Il2CppObject *)v3->fields.__8__1;
    v42 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v42,
      v41,
      Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__2__,
      0LL);
    v43 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v43, v42, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v43;
    p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
    sub_1C21DDC(p__2__current, (int64_t)v43, v45, v46, v47, v48, v49, v50);
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v6 = (Il2CppObject *)sub_1C22084(QuestBoardListViewManager___c__DisplayClass155_0_TypeInfo);
  System_Object___ctor(v6, 0LL);
  v3->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass155_0_o *)v6;
  p__8__1 = &v3->fields.__8__1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__8__1, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  v20 = (Il2CppObject *)v3->fields.__4__this;
  this->fields.__2__current = v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v20, v14, v15, v16, v17, v18, v19);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v3->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.__4__this,
    (int64_t)onCompleteLoad,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_51;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_51;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v30 = (EventRewardSceneMaster_o *)this;
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        sub_1C2209C(this, method);
      v32 = EnableEntityList->m_Items[v31];
      if ( !v32 || !v30 )
        goto LABEL_51;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v30,
                                                                         v32->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_50;
    }
    v55 = *p__8__1;
    if ( *p__8__1 )
    {
      _9__4 = v55->fields.__9__4;
      v55->fields.flag = 0;
      id = v32->fields.id;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v55,
          Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__4__,
          0LL);
        v55->fields.__9__4 = _9__4;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v55->fields.__9__4, (int64_t)_9__4, v58, v59, v60, v61, v62, v63);
      }
      if ( _4__this )
      {
        QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__4, v33);
        goto LABEL_50;
      }
    }
LABEL_51:
    sub_1C22094(this, method);
  }
LABEL_50:
  v64 = (Il2CppObject *)v3->fields.__8__1;
  v65 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v65,
    v64,
    Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__0__,
    0LL);
  v66 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v66, v65, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v66;
  v67 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C21DDC(v67, (int64_t)v66, v68, v69, v70, v71, v72, v73);
  result = 1;
  *(_DWORD *)&v67[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__155__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__CoroutineLoadAsset_d__155__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__155_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__155__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__155__System_IDisposable_Dispose(
        QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewManager__WaitFinish_d__113___ctor(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__WaitFinish_d__113__MoveNext(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
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
      sub_1C22094(this, method);
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall QuestBoardListViewManager__WaitFinish_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__WaitFinish_d__113__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestBoardListViewManager__WaitFinish_d__113_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall QuestBoardListViewManager__WaitFinish_d__113__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__WaitFinish_d__113__System_IDisposable_Dispose(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD93B6 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewManager___c_TypeInfo);
    byte_4BD93B6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestBoardListViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestBoardListViewManager___c___ctor(QuestBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___CreateList_b__105_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C22094(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___DisplayRoadmapButtonToTopWarBoard_b__107_0(
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

  if ( (byte_4BD93B7 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BD93B7 = 1;
  }
  if ( !item )
    goto LABEL_12;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1C22354(item);
    goto LABEL_15;
  }
  monitor = item[1].monitor;
  if ( monitor )
  {
    v6 = monitor[14];
    if ( v6 )
    {
      Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        sub_1C22094(Instance, v8);
      }
    }
LABEL_12:
    LOBYTE(monitor) = 0;
  }
  return (unsigned __int8)monitor & 1;
}


bool __fastcall QuestBoardListViewManager___c___SetupBlackMark_b__157_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w19

  if ( (byte_4BD93B8 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1C21E38(&CondType_TypeInfo);
    byte_4BD93B8 = 1;
  }
  if ( !entity )
    sub_1C22094(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupDisp_b__120_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C22094(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__158_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_4BD93B9 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1C21E38(&CondType_TypeInfo);
    byte_4BD93B9 = 1;
  }
  if ( !entity )
    sub_1C22094(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___ctor(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__0(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  float infoTime; // s8
  QuestBoardListViewManager_c *v22; // x0
  SlideFadeObject_o *v23; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_4BD93BA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_1__RequestListObject_b__2__);
    sub_1C21E38(&QuestBoardListViewManager___c__DisplayClass122_1_TypeInfo);
    byte_4BD93BA = 1;
  }
  v3 = sub_1C22084(QuestBoardListViewManager___c__DisplayClass122_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)Component_object, v14, v15, v16, v17, v18, v19);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, v20);
  v22 = QuestBoardListViewManager_TypeInfo;
  v23 = *(SlideFadeObject_o **)(v3 + 16);
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v22);
  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_QuestBoardListViewManager___c__DisplayClass122_1__RequestListObject_b__2__,
    0LL);
  if ( !v23
    || (SlideFadeObject__SlideIn_34813264(v23, OUT_POS_OFS_X, infoTime, 0.0, v25, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, v5), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1C22094(_4__this, v5);
  }
  QuestBoardListViewManager__ModifyAllRoadmapButtons(_4__this, 1, 1, v26);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *_9__5; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BD93BB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__4__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__5__);
    byte_4BD93BB = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                          gameObject,
                                          (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
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
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v14, v15, v16, v17, v18, v19);
    }
    if ( v11 )
    {
      CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v21, v22, v23, v24, v25, v26);
  }
  QuestBoardListViewManager__SetMode(v9, 2, _9__5, 0, 0, v8);
LABEL_17:
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  QuestBoardListViewManager__ResetAlphaAnimTime((QuestBoardListViewManager_o *)_4__this, method);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__10(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__3(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  QuestBoardListViewManager__EndSlideIn(this->fields.__4__this, this->fields.end_act, this->fields.isNotInit, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  QuestBoardListViewManager___c__DisplayClass122_0_o *v3; // x19
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v3 = this;
  if ( (byte_4BD93BC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass122_0_o *)sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__6__);
    byte_4BD93BC = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__6__,
      0LL);
    v3->fields.__9__6 = _9__6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__6, (int64_t)_9__6, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__5(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__6(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__8(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  QuestBoardListViewManager___c__DisplayClass122_0_o *v3; // x19
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v3 = this;
  if ( (byte_4BD93BD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass122_0_o *)sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__10__);
    byte_4BD93BD = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__10__,
      0LL);
    v3->fields.__9__10 = _9__10;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__10, (int64_t)_9__10, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__9(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_1___ctor(
        QuestBoardListViewManager___c__DisplayClass122_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_1___RequestListObject_b__2(
        QuestBoardListViewManager___c__DisplayClass122_1_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  const MethodInfo *v4; // x3
  struct QuestBoardListViewManager___c__DisplayClass122_0_o *CS___8__locals1; // x8
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  struct QuestBoardListViewManager___c__DisplayClass122_0_o *v8; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD93BE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__3__);
    byte_4BD93BE = 1;
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
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__3__,
          0LL);
        v8->fields.__9__3 = _9__3;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__9__3, (int64_t)_9__3, v11, v12, v13, v14, v15, v16);
      }
      if ( v7 )
      {
        CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C22094(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    v4);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_2___ctor(
        QuestBoardListViewManager___c__DisplayClass122_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_2___RequestListObject_b__7(
        QuestBoardListViewManager___c__DisplayClass122_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestBoardListViewManager___c__DisplayClass122_0_o *CS___8__locals2; // x9

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || !CS___8__locals2->fields.__4__this )
    sub_1C22094(this, method);
  QuestBoardListViewManager__SetSlideOut(
    CS___8__locals2->fields.__4__this,
    this->fields.time,
    CS___8__locals2->fields.end_act,
    v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass123_0___ctor(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass123_0___SetSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  QuestBoardListViewManager__EndSlideOut(this->fields.__4__this, this->fields.end_act, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass125_0___ctor(
        QuestBoardListViewManager___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass125_0___EndSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass132_0___ctor(
        QuestBoardListViewManager___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass132_0___OnClickListView_b__0(
        QuestBoardListViewManager___c__DisplayClass132_0_o *this,
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
        this = (QuestBoardListViewManager___c__DisplayClass132_0_o *)ListViewObject__get_Index(this->fields.obj, 0LL),
        !mTerminalList) )
  {
    sub_1C22094(this, method);
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, (int32_t)this, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass136_0___ctor(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass136_0___RequestToRaiseTutorialFlag_b__0(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o *clickAreaFunc; // x8

  clickAreaFunc = this->fields.clickAreaFunc;
  if ( !clickAreaFunc )
    sub_1C22094(this, result);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickAreaFunc->fields.m_target)(
    clickAreaFunc->fields.original_method_info,
    *(_QWORD *)&clickAreaFunc->fields.extra_arg);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass155_0___ctor(
        QuestBoardListViewManager___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c__DisplayClass155_0___CoroutineLoadAsset_b__0(
        QuestBoardListViewManager___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass155_0___CoroutineLoadAsset_b__1(
        QuestBoardListViewManager___c__DisplayClass155_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *_4__this; // x8

  _4__this = (PartyOrganizationUtility_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, data);
  _4__this[3].klass = (PartyOrganizationUtility_c *)data;
  sub_1C21DDC(_4__this + 3, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.flag = 1;
}


bool __fastcall QuestBoardListViewManager___c__DisplayClass155_0___CoroutineLoadAsset_b__2(
        QuestBoardListViewManager___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass155_0___CoroutineLoadAsset_b__3(
        QuestBoardListViewManager___c__DisplayClass155_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, data);
  QuestBoardListViewManager__OnCompleteAssetData(this->fields.__4__this, data, this->fields.onCompleteLoad, v3);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass155_0___CoroutineLoadAsset_b__4(
        QuestBoardListViewManager___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass159_0___ctor(
        QuestBoardListViewManager___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass159_0___SetupFortificationWarningDialog_b__0(
        QuestBoardListViewManager___c__DisplayClass159_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass159_0_o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct QuestBoardListViewManager_o *_4__this; // x8
  Il2CppObject *v12; // x21
  struct QuestBoardListViewManager_o *v13; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct QuestBoardListViewManager_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  struct QuestBoardListViewManager_o *v26; // x8

  v4 = this;
  if ( (byte_4BD93BF & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)sub_1C21E38(&StringLiteral_6977/*"FortificationWarningDialog"*/);
    byte_4BD93BF = 1;
  }
  if ( !assetData )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)AssetData__GetObject_object__49880776(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6977/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v12 = (Il2CppObject *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.fortificationAssetData,
    (int64_t)assetData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object__50551272(
          v12,
          transform,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  v13->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v15;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields.fortificationWarningDialog,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = v4->fields.__4__this;
  if ( !v22 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)v22->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v24 = v4->fields.__4__this;
  if ( !v24
    || (this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)v24->fields.fortificationWarningDialog) == 0LL
    || (v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v25, 0LL),
        (v26 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)v26->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_17:
    sub_1C22094(this, assetData);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.func, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass176_0___ctor(
        QuestBoardListViewManager___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass176_0___PlayBoardEffect_b__0(
        QuestBoardListViewManager___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *playingCallback1; // x0

  playingCallback1 = this->fields.playingCallback1;
  if ( playingCallback1 )
    ActionExtensions__Call(playingCallback1, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass176_0___PlayBoardEffect_b__1(
        QuestBoardListViewManager___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectComponent; // x0
  UnityEngine_Object_o *gameObject; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Action_o *endAct; // x0

  if ( (byte_4BD93C0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD93C0 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_1C22094(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectComponent, 0LL, v5, v6, v7, v8, v9, v10);
  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass179_0___ctor(
        QuestBoardListViewManager___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass179_0___MoveBoard_b__0(
        QuestBoardListViewManager___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C22094(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass179_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(v3, v4);
  --_4__this->fields.waitCount;
}