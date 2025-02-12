void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4BB156A & 1) == 0 )
  {
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v1);
    byte_4BB156A = 1;
  }
  static_fields = QuestBoardListViewManager_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->INTO_TIME = xmmword_BF7790;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 0x700000016LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x432A00000DE021F0LL;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB1569 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_ListViewItem__TypeInfo, v3);
    byte_4BB1569 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.topItemList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bottomItemList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_GameObject_o *v13; // x0
  struct UnityEngine_GameObject_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BB152E & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    byte_4BB152E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(gameObject[7].klass);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mBoxCollider,
    (int64_t)Component_object,
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
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.mNoneLabelParent,
          (int64_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_1C13F80(gameObject, v5);
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *gameObject; // x21
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct ExUITexture_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x20
  System_Action_o *v36; // x0
  __int64 *v37; // x8
  float v38; // s0
  Il2CppObject *v39; // x0
  System_Action_o *v40; // x22
  ExUITexture_o *v41; // x0
  System_String_o *v42; // x1
  System_Action_o *v43; // x2
  UnityEngine_Component_o *v44; // x19
  Il2CppObject *v45; // x0
  int32_t v46; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v47; // [xsp+8h] [xbp-38h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB154D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&bgID);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___, v9);
    sub_1C13D24(&int_TypeInfo, v10);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&Method_QuestBoardListViewManager__BGChangeEffect_b__151_0__, v13);
    sub_1C13D24(&Method_QuestBoardListViewManager__BGChangeEffect_b__151_1__, v14);
    sub_1C13D24(&StringLiteral_3167/*"Back/"*/, v15);
    byte_4BB154D = 1;
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
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v17);
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
                                                 (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v21 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0LL);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0LL);
            GameObjectExtensions__SafeSetParent(v21, parent, 0LL);
            if ( v21 )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v21,
                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = (struct ExUITexture_o *)Component_object;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&this->fields.mFolderBgTemp,
                (int64_t)Component_object,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].monitor) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v30 = this->fields.mFolderBg;
                v46 = bgID;
                v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v31, v32, v33);
                v35 = System_String__Format((System_String_o *)StringLiteral_3167/*"Back/"*/, v34, 0LL);
                v36 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                v37 = &Method_QuestBoardListViewManager__BGChangeEffect_b__151_1__;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
    else
    {
      v44 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v47 = bgID;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v17, v18, v19);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3167/*"Back/"*/, v45, 0LL);
        if ( v44 )
        {
          v42 = (System_String_o *)mFolderBg;
          v41 = (ExUITexture_o *)v44;
          v43 = 0LL;
          goto LABEL_22;
        }
      }
      else if ( v44 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v44, 0LL);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_1C13F80(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v38 = 0.0;
  if ( effectType )
    v38 = time;
  this->fields.mCrossFadeTime = v38;
  v30 = this->fields.mFolderBg;
  v48 = bgID;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v17, v18, v19);
  v35 = System_String__Format((System_String_o *)StringLiteral_3167/*"Back/"*/, v39, 0LL);
  v36 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  v37 = &Method_QuestBoardListViewManager__BGChangeEffect_b__151_0__;
LABEL_20:
  v40 = v36;
  System_Action___ctor(v36, (Il2CppObject *)this, *v37, 0LL);
  if ( !v30 )
    goto LABEL_31;
  v41 = v30;
  v42 = v35;
  v43 = v40;
LABEL_22:
  ExUITexture__SetAssetImage(v41, v42, v43, 0LL);
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

  if ( (byte_4BB1550 & 1) == 0 )
  {
    sub_1C13D24(&QuestBoardListViewManager__CoroutineLoadAsset_d__155_TypeInfo, onCompleteLoad);
    byte_4BB1550 = 1;
  }
  v5 = sub_1C13F70(QuestBoardListViewManager__CoroutineLoadAsset_d__155_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)onCompleteLoad, v12, v13, v14, v15, v16, v17);
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  void *gameObject; // x0
  __int64 v36; // x1
  Il2CppObject *Component_object; // x24
  Il2CppObject *v38; // x0
  QuestBoardListViewItemDraw_c *v39; // x8
  UnityEngine_BoxCollider_o *v40; // x25
  int32_t SCRL_OBJ_DUMMY_NUM; // w21
  struct ListViewItemSeed_o *seed; // x8
  float v43; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v45; // x26
  float v46; // s9
  int32_t v47; // w1
  __int64 v48; // x8
  __int64 v49; // x8
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v51; // x8
  bool v52; // w24
  float *p_INTO_TIME; // x8
  __int64 v54; // x9
  float v55; // s0
  float v56; // s1
  UILabel_o *mNoneLabel; // x24
  QuestBoardListViewItemDraw_c *v58; // x0
  QuestBoardListViewItemDraw_c *v59; // x0
  int32_t v60; // w21
  int v61; // w28
  int32_t i; // w23
  __int64 v63; // x8
  void *v64; // x25
  int32_t v65; // w24
  MapControl_QuestInfo_o *v66; // x26
  __int64 v67; // x8
  int32_t v68; // w27
  QuestBoardListViewItem_o *v69; // x0
  Il2CppObject *v70; // x25
  int32_t v71; // w2
  struct UnityEngine_GameObject_o *v72; // x24
  struct UnityEngine_GameObject_o *v73; // x26
  int32_t v74; // w1
  MapControl_QuestInfo_o *v75; // x3
  UnityEngine_GameObject_o *v76; // x4
  UnityEngine_GameObject_o *v77; // x5
  int32_t v78; // w6
  int32_t v79; // w7
  __int64 v80; // x8
  __int64 v81; // x8
  __int64 v82; // x8
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  __int64 v92; // x8
  int32_t size; // w21
  int v94; // w21
  int32_t v95; // w22
  Il2CppObject *Item; // x0
  MapControl_QuestInfo_o *v97; // x24
  QuestBoardListViewItem_o *v98; // x0
  Il2CppObject *v99; // x25
  int32_t v100; // w2
  struct UnityEngine_GameObject_o *blackMarkPrefab; // x26
  struct UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v103; // w1
  MapControl_QuestInfo_o *v104; // x3
  UnityEngine_GameObject_o *v105; // x4
  UnityEngine_GameObject_o *v106; // x5
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v117; // x0
  QuestBoardListViewManager___c_c *v118; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x21
  System_Func_object__bool__o *_9__105_0; // x22
  Il2CppObject *v121; // x23
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  Il2CppObject *v129; // x0
  const MethodInfo *v130; // x1
  int32_t klass_high; // w8
  const MethodInfo *v132; // [xsp+0h] [xbp-90h]
  bool v133; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB1531 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___, *(_QWORD *)&info_kind);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___, v15);
    sub_1C13D24(&System_Func_QuestBoardListViewItem__bool__TypeInfo, v16);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v17);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v18);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__, v24);
    sub_1C13D24(&LocalizationManager_TypeInfo, v25);
    sub_1C13D24(&NetworkManager_TypeInfo, v26);
    sub_1C13D24(&QuestBoardListViewItemDraw_TypeInfo, v27);
    sub_1C13D24(&QuestBoardListViewItem_TypeInfo, v28);
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v29);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v30);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v31);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__CreateList_b__105_0__, v32);
    sub_1C13D24(&QuestBoardListViewManager___c_TypeInfo, v33);
    sub_1C13D24(&StringLiteral_11092/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_TITLE"*/, v34);
    byte_4BB1531 = 1;
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
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  v38 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v39 = QuestBoardListViewItemDraw_TypeInfo;
  v40 = (UnityEngine_BoxCollider_o *)v38;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v39 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_121;
  SCRL_OBJ_DUMMY_NUM = v39->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_121;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_121;
  v43 = *((float *)gameObject + 74);
  mBaseClipRange = this->fields.mBaseClipRange;
  v45 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_object )
    goto LABEL_121;
  v46 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v47 = v46 == INFINITY ? 0x80000000 : (int)v46;
  UIWidget__set_height((UIWidget_o *)Component_object, v47, 0LL);
  if ( !v40 )
    goto LABEL_121;
  LODWORD(v134.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v40, 0LL);
  v134.fields.z = 0.0;
  v134.fields.y = v46;
  UnityEngine_BoxCollider__set_size(v40, v134, 0LL);
  v135.fields.y = (float)(mBaseClipRange - v46) * 0.5;
  v135.fields.z = clip_w;
  v135.fields.w = v46;
  this->fields.clipRange.fields.y = v46 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v135.fields.x = v43;
  UIPanel__set_baseClipRegion(v45, v135, 0LL);
  this->fields.mResetConsumeColor = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v36);
    byte_4BAF374 = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v48 = **((_QWORD **)gameObject + 23);
  if ( !v48 )
    goto LABEL_121;
  v49 = *(_QWORD *)(v48 + 264);
  if ( !v49 )
    goto LABEL_121;
  gameObject = *(void **)(v49 + 104);
  if ( !gameObject )
    goto LABEL_121;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  v51 = QuestBoardListViewManager_TypeInfo;
  v52 = activeSelf;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v51 = QuestBoardListViewManager_TypeInfo;
  }
  p_INTO_TIME = &v51->static_fields->INTO_TIME;
  v54 = 1LL;
  if ( v52 )
    v54 = 3LL;
  v55 = p_INTO_TIME[v54];
  if ( v52 )
    p_INTO_TIME += 2;
  v56 = *p_INTO_TIME;
  this->fields.exitTime = v55;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.infoTime = v56;
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
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_TITLE"*/, 0LL);
  if ( !mNoneLabel )
    goto LABEL_121;
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0LL);
  v58 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v58 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v133 = isAllDisp;
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v94 = v58->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v94 < 1 )
      goto LABEL_104;
    v95 = 0;
    while ( 1 )
    {
      if ( v95 >= qinf_list->fields._size )
      {
        v97 = 0LL;
LABEL_91:
        blackMarkPrefab = this->fields.blackMarkPrefab;
        whiteMarkPrefab = this->fields.whiteMarkPrefab;
        v98 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
        v99 = (Il2CppObject *)v98;
        v103 = v95;
        v100 = info_kind;
        v104 = v97;
        v105 = blackMarkPrefab;
        v106 = whiteMarkPrefab;
        goto LABEL_98;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)qinf_list,
               v95,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
      v97 = (MapControl_QuestInfo_o *)Item;
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
          v98 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
          v99 = (Il2CppObject *)v98;
          v100 = 4;
          goto LABEL_97;
        }
      }
      else if ( !Item )
      {
        goto LABEL_91;
      }
      if ( !MapControl_QuestInfo__GetMine(v97, 0LL) )
        goto LABEL_91;
      gameObject = MapControl_QuestInfo__GetMine(v97, 0LL);
      if ( !gameObject )
        goto LABEL_121;
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)gameObject, 0LL) != 128 )
        goto LABEL_91;
      v98 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
      v99 = (Il2CppObject *)v98;
      v100 = 5;
LABEL_97:
      v103 = v95;
      v104 = v97;
      v105 = 0LL;
      v106 = 0LL;
LABEL_98:
      QuestBoardListViewItem___ctor_34967452(v98, v103, v100, v104, v105, v106, 0, 0, v132);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v113 = *((_QWORD *)gameObject + 2);
      v114 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v113 )
        goto LABEL_121;
      v115 = *((int *)gameObject + 6);
      if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v99,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
      }
      else
      {
        v116 = v113 + 8 * v115;
        *((_DWORD *)gameObject + 6) = v115 + 1;
        *(_QWORD *)(v116 + 32) = v99;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v116 + 32), (int64_t)v99, v107, v108, v109, v110, v111, v112);
      }
      if ( v94 == ++v95 )
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
    sub_1C13F80(gameObject, v36);
  }
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, warSelectedQuestList->fields._size < 1, 0LL);
  v59 = QuestBoardListViewItemDraw_TypeInfo;
  v60 = warSelectedQuestList->fields._size;
  v133 = isAllDisp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v59 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v61 = v59->static_fields->SCRL_OBJ_DUMMY_NUM + v60;
  if ( v61 >= 1 )
  {
    for ( i = 0; i != v61; ++i )
    {
      if ( i < warSelectedQuestList->fields._size
        && (gameObject = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)warSelectedQuestList,
                           i,
                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__)) != 0LL )
      {
        v63 = *((_QWORD *)gameObject + 2);
        v64 = gameObject;
        if ( !v63 )
          goto LABEL_121;
        gameObject = (void *)*((_QWORD *)gameObject + 3);
        if ( !gameObject )
          goto LABEL_121;
        v65 = *(_DWORD *)(v63 + 16);
        gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_121;
        gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, 0LL);
        v66 = (MapControl_QuestInfo_o *)*((_QWORD *)v64 + 3);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v67 = *((_QWORD *)v64 + 2);
          if ( !v67 )
            goto LABEL_121;
          v68 = *(_DWORD *)(v67 + 24);
          v69 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
          v70 = (Il2CppObject *)v69;
          v71 = 6;
        }
        else
        {
          if ( !v66 )
            goto LABEL_121;
          gameObject = (void *)MapControl_QuestInfo__GetQuestType(*((MapControl_QuestInfo_o **)v64 + 3), 0LL);
          if ( (_DWORD)gameObject != 3 )
            goto LABEL_67;
          v80 = *((_QWORD *)v64 + 3);
          if ( !v80 )
            goto LABEL_121;
          gameObject = *(void **)(v80 + 104);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL);
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
            v82 = *((_QWORD *)v64 + 2);
            if ( !v82 )
              goto LABEL_121;
            v66 = (MapControl_QuestInfo_o *)*((_QWORD *)v64 + 3);
            v68 = *(_DWORD *)(v82 + 24);
            v69 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
            v70 = (Il2CppObject *)v69;
            v71 = 2;
          }
          else
          {
LABEL_67:
            v81 = *((_QWORD *)v64 + 2);
            if ( !v81 )
              goto LABEL_121;
            v66 = (MapControl_QuestInfo_o *)*((_QWORD *)v64 + 3);
            v68 = *(_DWORD *)(v81 + 24);
            v69 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
            v70 = (Il2CppObject *)v69;
            v71 = 4;
          }
        }
        v74 = i;
        v75 = v66;
        v76 = 0LL;
        v77 = 0LL;
        v78 = v68;
        v79 = v65;
      }
      else
      {
        v72 = this->fields.blackMarkPrefab;
        v73 = this->fields.whiteMarkPrefab;
        v69 = (QuestBoardListViewItem_o *)sub_1C13F70(QuestBoardListViewItem_TypeInfo);
        v70 = (Il2CppObject *)v69;
        v71 = 6;
        v74 = i;
        v75 = 0LL;
        v76 = v72;
        v77 = v73;
        v78 = 0;
        v79 = 0;
      }
      QuestBoardListViewItem___ctor_34967452(v69, v74, v71, v75, v76, v77, v78, v79, v132);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v89 = *((_QWORD *)gameObject + 2);
      v90 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v89 )
        goto LABEL_121;
      v91 = *((int *)gameObject + 6);
      if ( (unsigned int)v91 >= *(_DWORD *)(v89 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v70,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = v89 + 8 * v91;
        *((_DWORD *)gameObject + 6) = v91 + 1;
        *(_QWORD *)(v92 + 32) = v70;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v92 + 32), (int64_t)v70, v83, v84, v85, v86, v87, v88);
      }
    }
  }
LABEL_104:
  gameObject = this->fields.mNoneLabel;
  if ( !gameObject )
    goto LABEL_121;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0LL) )
    this->fields._IsShowingInfo_k__BackingField = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v133, -1, 0LL);
  v117 = System_Linq_Enumerable__Cast_object_(
           (System_Collections_IEnumerable_o *)this->fields.itemList,
           (const MethodInfo_2F9D354 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v118 = QuestBoardListViewManager___c_TypeInfo;
  v119 = (System_Collections_Generic_IEnumerable_TSource__o *)v117;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v118 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v118->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v118->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v118);
      v118 = QuestBoardListViewManager___c_TypeInfo;
    }
    v121 = (Il2CppObject *)v118->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v121, Method_QuestBoardListViewManager___c__CreateList_b__105_0__, 0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__105_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
      (int64_t)_9__105_0,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
  }
  v129 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
           v119,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v129 )
  {
    klass_high = HIDWORD(v129[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !info_kind && (klass_high & 0x80000000) != 0 )
      goto LABEL_116;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !info_kind )
LABEL_116:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v130);
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

  if ( (byte_4BB1537 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isBoardDisp);
    byte_4BB1537 = 1;
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
      sub_1C13F80(v16, v17);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *itemList; // x20
  QuestBoardListViewManager___c_c *v10; // x0
  System_Func_object__bool__o *_9__107_0; // x21
  Il2CppObject *v12; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  __int64 methodPtr_low; // x9
  __int64 v22; // x9
  MethodInfo *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v26; // x8
  QuestBoardListViewManager_o *v27; // x0
  bool v28; // w1
  bool v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4BB1532 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___, method);
    sub_1C13D24(&System_Func_ListViewItem__bool__TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&QuestBoardListViewItem_TypeInfo, v5);
    sub_1C13D24(&QuestBoardListViewObject_TypeInfo, v6);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__107_0__, v7);
    sub_1C13D24(&QuestBoardListViewManager___c_TypeInfo, v8);
    byte_4BB1532 = 1;
  }
  if ( (this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField & 0x80000000) == 0 )
    return;
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList;
  v10 = QuestBoardListViewManager___c_TypeInfo;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v10 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v10->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestBoardListViewManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__107_0,
      v12,
      Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__107_0__,
      0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_ListViewItem__bool__o *)_9__107_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
      (int64_t)_9__107_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
          itemList,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
  if ( !v20 )
    return;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v20->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1C14240(v20);
LABEL_30:
    sub_1C14240(itemList);
    QuestBoardListViewManager__ModifyAllRoadmapButtons(v27, v28, v29, v30);
    return;
  }
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = HIDWORD(v20[1].klass);
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)v20[6].monitor;
  if ( itemList )
  {
    v22 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable[0].methodPtr) < (unsigned int)v22
      || (QuestBoardListViewObject_c *)itemList->klass->_2.typeHierarchy[v22 - 1] != QuestBoardListViewObject_TypeInfo )
    {
      goto LABEL_30;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = (MethodInfo *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemList, 0LL, 0LL);
  if ( ((unsigned __int8)v23 & 1) == 0 )
  {
    if ( !itemList )
      goto LABEL_28;
    klass = itemList[8].klass;
    if ( !klass )
      goto LABEL_28;
    v23 = (MethodInfo *)klass->vtable[30].method;
    if ( !v23 )
      goto LABEL_28;
    RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)v23, this->fields._RoadmapAssetData_k__BackingField, 0LL);
    if ( !this->fields.initMode || this->fields.mFaded )
    {
      v26 = itemList[8].klass;
      if ( v26 )
      {
        v23 = (MethodInfo *)v26->vtable[30].method;
        if ( v23 )
        {
          RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)v23, 0, 1, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1C13F80(v23, v24);
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
    sub_1C13F80(0LL, end_act);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x5

  if ( (byte_4BB1540 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, end_act);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass125_0__EndSlideOut_b__0__, v5);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass125_0_TypeInfo, v6);
    byte_4BB1540 = 1;
  }
  v7 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass125_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C13F80(v8, v9);
  *(_QWORD *)(v7 + 16) = end_act;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)end_act, v10, v11, v12, v13, v14, v15);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v16);
  v17 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass125_0__EndSlideOut_b__0__,
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
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BB153A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C13D24(&PartyServantListViewItem_TypeInfo, v5);
    byte_4BB153A = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x26
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x20
  void *v17; // x8
  __int64 v18; // x11
  UnityEngine_Object_o *v19; // x20
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BB1538 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&warId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&QuestBoardListViewItem_TypeInfo, v9);
    sub_1C13D24(&QuestBoardListViewObject_TypeInfo, v10);
    byte_4BB1538 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C13F80(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v22.fields._current;
    if ( v22.fields._current )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestBoardListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
      {
        monitor = v22.fields._current[7].monitor;
        if ( monitor )
        {
          v15 = monitor[14];
          if ( v15 )
          {
            if ( *(_DWORD *)(v15 + 16) != 1 && *(_DWORD *)(v15 + 20) == warId )
            {
              v16 = (UnityEngine_Object_o *)v22.fields._current[6].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
              {
                v17 = current[6].monitor;
                if ( v17
                  && (v18 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                      *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) >= (unsigned int)v18) )
                {
                  v19 = *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v18 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[6].monitor
                      : 0LL;
                }
                else
                {
                  v19 = 0LL;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  v19 = 0LL;
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (QuestBoardListViewObject_o *)v19;
}


UIScrollView_o *__fastcall QuestBoardListViewManager__GetScrollView(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}


bool __fastcall QuestBoardListViewManager__HasBanner(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v7; // x1
  QuestBoardListViewItem_o *v8; // x0
  const MethodInfo *v9; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  System_Collections_Generic_List_object__c *klass; // x8
  _DWORD *interopData; // x8

  if ( (byte_4BB1542 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_4BB1542 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___) )
    goto LABEL_15;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v5);
  if ( !Item
    || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              0,
                                                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1C13F80(Item, v7);
  }
  v8 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)Item, v7);
  if ( !v8 )
    return (char)v8;
  quest_info_k__BackingField = v8->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField || !quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField )
  {
LABEL_15:
    LOBYTE(v8) = 0;
    return (char)v8;
  }
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v9);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        0,
                                                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                        (QuestBoardListViewObject_o *)Item,
                                                        v7);
  if ( !Item )
    goto LABEL_17;
  klass = Item[3].klass;
  if ( !klass )
    goto LABEL_17;
  interopData = klass->_1.interopData;
  if ( !interopData )
    goto LABEL_17;
  LOBYTE(v8) = interopData[4] == 1;
  return (char)v8;
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB153D & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v7);
    byte_4BB153D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C13F80(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C13F80(0LL, v10);
    QuestBoardListViewObject__Init_35014056((QuestBoardListViewObject_o *)v12.fields._current, mode, 0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__ModifyAllRoadmapButtons(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        bool isImmediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  bool v12; // w20
  bool i; // w19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppClass *klass; // x8
  RoadmapButtonPrefab_o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB1533 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, isEnable);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v9);
    byte_4BB1533 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isEnable);
  if ( !ObjectList )
    sub_1C13F80(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    ObjectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v12 = isEnable;
  for ( i = isImmediate; ; RoadmapButtonPrefab__ModifyRoadmapButton(v17, v12, i, 0LL) )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v14 )
      break;
    if ( !v18.fields._current )
      sub_1C13F80(v14, v15);
    klass = v18.fields._current[8].klass;
    if ( !klass )
      sub_1C13F80(v14, v15);
    v17 = (RoadmapButtonPrefab_o *)klass->vtable[30].method;
    if ( !v17 )
      sub_1C13F80(0LL, v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  __int64 v17; // x21
  MoveObject_o *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Component_object; // x0
  MoveObject_o **v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  float v40; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v44; // x20
  float v45; // s13
  float v46; // s15
  float v47; // s14
  System_Action_o *v48; // x22
  System_Action_o *v49; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BB1567 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, obj);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v13);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__0__, v14);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__1__, v15);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass179_0_TypeInfo, v16);
    byte_4BB1567 = 1;
  }
  v17 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass179_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 40) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 16) = obj;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)obj, v26, v27, v28, v29, v30, v31);
  *(float *)(v17 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), 0LL) + moveY;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v17 + 16),
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v17 + 24) = Component_object;
  v33 = (MoveObject_o **)(v17 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)Component_object, v34, v35, v36, v37, v38, v39);
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
    sub_1C13F80(v18, v19);
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
  v48 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__0__,
    0LL);
  v49 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass179_0__MoveBoard_b__1__,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *monitor; // x24
  __int64 v22; // x1
  QuestBoardListViewItemDraw_c *v23; // x0
  uint32_t cctor_finished; // w8
  int POS_Y_ITVL_AREA; // w8
  int v26; // w25
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v28; // x4
  _BOOL8 v29; // x0
  __int64 v30; // x1
  UnityEngine_Component_o *v31; // x24
  __int64 v32; // x1
  QuestBoardListViewItemDraw_c *v33; // x0
  uint32_t v34; // w8
  int v35; // w8
  int v36; // w25
  UnityEngine_GameObject_o *v37; // x1
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4BB1535 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isClose);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&QuestBoardListViewItemDraw_TypeInfo, v17);
    byte_4BB1535 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
      break;
    if ( !v42.fields._current )
      sub_1C13F80(v19, v20);
    monitor = (UnityEngine_Component_o *)v42.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v23 = QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v23 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v23->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v23 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v23->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v26 = POS_Y_ITVL_AREA;
      else
        v26 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_1C13F80(v23, v22);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v26 >> 1), moveTime, easeType, isForce, v28);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_48:
    sub_1C13F80(topItemList, isClose);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v29 )
      break;
    if ( !v42.fields._current )
      sub_1C13F80(v29, v30);
    v31 = (UnityEngine_Component_o *)v42.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
    {
      v33 = QuestBoardListViewItemDraw_TypeInfo;
      v34 = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !v34 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v33 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v35 = v33->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !v34 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v33 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v35 = -v33->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v35 >= 0 )
        v36 = v35;
      else
        v36 = v35 + 1;
      if ( !v31 )
        sub_1C13F80(v33, v32);
      v37 = UnityEngine_Component__get_gameObject(v31, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v37, (float)(v36 >> 1), moveTime, easeType, isForce, v38);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( endAct )
  {
    v40 = QuestBoardListViewManager__WaitFinish(this, endAct, v39);
    UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
  }
}


void __fastcall QuestBoardListViewManager__OnChangeAlphaAnim(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4BB1549 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_4BB1549 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v6 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v5);
      if ( ++v7 >= v6->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_1C13F80(ObjectList, v5);
  }
LABEL_8:
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
  __int64 v23; // x22
  CommonUI_o *Instance; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  void **v32; // x21
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
  __int64 v45; // x24
  __int64 methodPtr_low; // x10
  MapControl_QuestInfo_o *v47; // x20
  int64_t AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v49; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v53; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  int32_t GroupId; // w23
  QuestEntity_o *v59; // x0
  QuestEntity_o *v60; // x23
  __int64 v61; // x1
  Il2CppObject *current; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  __int64 v65; // x1
  TerminalSceneComponent_c *v66; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v68; // x1
  __int64 v69; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  Il2CppObject *Component_object; // x0
  __int64 v72; // x1
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  __int64 v75; // x1
  int32_t SpotID; // w22
  TerminalPramsManager_c *v77; // x0
  int32_t questId; // w22
  TerminalPramsManager_c *v79; // x0
  int32_t v80; // w22
  TerminalPramsManager_c *v81; // x0
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v85; // x24
  const MethodInfo *v86; // x4
  __int64 v87; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v89; // x20
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  int32_t v94; // w22
  _QWORD *v95; // x0
  System_Reflection_MethodBase_o *v96; // x0
  TerminalSceneComponent_c *v97; // x0
  TerminalSceneComponent_c *v98; // x0
  const MethodInfo *v99; // x1
  ScrTerminalListTop_o *v100; // x19
  _QWORD *v101; // x0
  System_Reflection_MethodBase_o *v102; // x0
  QuestEntity_o *v103; // x22
  TerminalSceneComponent_c *v104; // x0
  int32_t v105; // w23
  bool IsDisplayQuestInformation_35046272; // w0
  const MethodInfo *v107; // x2
  TerminalSceneComponent_c *v108; // x0
  const MethodInfo *v109; // x1
  ScrTerminalListTop_o *v110; // x19
  __int64 v111; // x9
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4BB1544 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, obj);
    sub_1C13D24(&Method_DataManager_GetMaster_EventFortificationMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestGroupMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v10);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v12);
    sub_1C13D24(&QuestBoardListViewItem_TypeInfo, v13);
    sub_1C13D24(&Method_QuestBoardListViewManager_OnClickListView__, v14);
    sub_1C13D24(&QuestBoardListViewObject_TypeInfo, v15);
    sub_1C13D24(&QuestInformationComponent_TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v18);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v20);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass132_0__OnClickListView_b__0__, v21);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass132_0_TypeInfo, v22);
    byte_4BB1544 = 1;
  }
  entities = 0LL;
  memset(&v113, 0, sizeof(v113));
  v23 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass132_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_164;
  *(_QWORD *)(v23 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 32) = obj;
  v32 = (void **)(v23 + 32);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)obj, v33, v34, v35, v36, v37, v38);
  if ( !*(_QWORD *)(v23 + 32) )
    goto LABEL_164;
  v45 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 56LL);
  if ( !v45 )
    goto LABEL_164;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v45 + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_164;
  }
  v47 = *(MapControl_QuestInfo_o **)(v45 + 120);
  if ( !v47 )
    return;
  AreaBoardInfo_k__BackingField = (int64_t)v47->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v23 + 24) = AreaBoardInfo_k__BackingField;
  v49 = (MapControl_AreaBoardInfo_o **)(v23 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 24), AreaBoardInfo_k__BackingField, v39, v40, v41, v42, v43, v44);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_164;
  dispType = v47->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v45 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v82 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v82 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
      v83 = (System_Reflection_MethodBase_o *)sub_1C13D08(v82, v82[4]);
      OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0, 0LL);
      if ( !*v49 )
        goto LABEL_164;
      eventEnt = (*v49)->fields.eventEnt;
      v85 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v85,
        (Il2CppObject *)v23,
        Method_QuestBoardListViewManager___c__DisplayClass132_0__OnClickListView_b__0__,
        0LL);
      v87 = *(_QWORD *)(v23 + 24);
      if ( !v87 )
        goto LABEL_164;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v85, *(_DWORD *)(v87 + 20), v86) )
        return;
      Instance = (CommonUI_o *)*v32;
      if ( !*v32 )
        goto LABEL_164;
      mTerminalList = this->fields.mTerminalList;
      v89 = *v49;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_164;
      ScrTerminalListTop__Click_Area(mTerminalList, v89, (int32_t)Instance, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_92;
      if ( !*v49 )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v49 || !Instance )
        goto LABEL_164;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v49)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_23;
      v53 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v53, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_92;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0LL) )
      {
LABEL_92:
        v90 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v90 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
        v91 = (System_Reflection_MethodBase_o *)sub_1C13D08(v90, v90[4]);
        OverwriteAssetSoundName__PlaySystemSe(v91, 2, 0, 0LL);
        return;
      }
LABEL_23:
      WarInfo_k__BackingField = v47->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_135;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_164;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v47->fields.questId, 18, 0LL);
      v59 = MapControl_QuestInfo__GetMine(v47, 0LL);
      if ( EventId != GroupId )
        goto LABEL_135;
      v60 = v59;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB15BD )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v25);
        byte_4BB15BD = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.connectMark[1].fields.markBase) )
        goto LABEL_135;
      if ( !v60 )
        goto LABEL_164;
      if ( QuestEntity__HasFlag(v60, 2LL, 0LL) )
        goto LABEL_135;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_164;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_135;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_164;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v112,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v113 = v112;
      break;
    case 2:
    case 3:
      v73 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v73 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
      v74 = (System_Reflection_MethodBase_o *)sub_1C13D08(v73, v73[4]);
      OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v47, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1256 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v75);
        byte_4BB1256 = 1;
      }
      v77 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v77 = TerminalPramsManager_TypeInfo;
      }
      v77->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v47, 0LL);
      if ( !Instance )
        goto LABEL_164;
      if ( LODWORD(Instance->fields.topImg) == 3 )
      {
        questId = v47->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB15BB )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v25);
          byte_4BB15BB = 1;
        }
        v79 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v79 = TerminalPramsManager_TypeInfo;
        }
        v79->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v80 = *(_DWORD *)(v45 + 148);
      if ( v80 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB06E2 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v25);
          byte_4BB06E2 = 1;
        }
        v81 = TerminalPramsManager_TypeInfo;
LABEL_105:
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          v81 = TerminalPramsManager_TypeInfo;
        }
        v81->static_fields->_SelectedRecollectionWarId_k__BackingField = v80;
        if ( !byte_4BB15BC )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v25);
          v81 = TerminalPramsManager_TypeInfo;
          byte_4BB15BC = 1;
        }
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          v81 = TerminalPramsManager_TypeInfo;
        }
        v81->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_164;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v47->fields.warId, v47->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_164;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v95 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v95 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
      v96 = (System_Reflection_MethodBase_o *)sub_1C13D08(v95, v95[4]);
      OverwriteAssetSoundName__PlaySystemSe(v96, 0, 0, 0LL);
      MapControl_QuestInfo__GetMine(v47, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v25);
        byte_4BAF374 = 1;
      }
      v97 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v97 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v97->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_164;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v25);
        byte_4BAF374 = 1;
      }
      v98 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v98 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v98->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_164;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v99);
      Instance = (CommonUI_o *)*v32;
      if ( !*v32 )
        goto LABEL_164;
      v100 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v100 )
        goto LABEL_164;
      ScrTerminalListTop__Click_WarBoard(v100, v47, (int32_t)Instance, 0LL);
      return;
    case 6:
      v92 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v92 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
      v93 = (System_Reflection_MethodBase_o *)sub_1C13D08(v92, v92[4]);
      OverwriteAssetSoundName__PlaySystemSe(v93, 0, 0, 0LL);
      v94 = MapControl_QuestInfo__GetSpotID(v47, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1256 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v25);
        byte_4BB1256 = 1;
      }
      v81 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v81 = TerminalPramsManager_TypeInfo;
      }
      v81->static_fields->_SpotId_k__BackingField = v94;
      v80 = *(_DWORD *)(v45 + 148);
      if ( !byte_4BB06E2 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v25);
        v81 = TerminalPramsManager_TypeInfo;
        byte_4BB06E2 = 1;
      }
      goto LABEL_105;
    default:
      return;
  }
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v113,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    current = v113.fields._current;
    if ( !v113.fields._current )
      goto LABEL_166;
    if ( EventFortificationEntity__IsOpenFortificationWarningDialog(
           (EventFortificationEntity_o *)v113.fields._current,
           0LL) )
    {
      v63 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v63 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
      v64 = (System_Reflection_MethodBase_o *)sub_1C13D08(v63, v63[4]);
      OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v65);
        byte_4BAF374 = 1;
      }
      v66 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v66 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v66->static_fields->mInstance;
      if ( !mInstance )
        sub_1C13F80(0LL, v65);
      TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v68);
      fortificationWarningDialog = this->fields.fortificationWarningDialog;
      if ( !fortificationWarningDialog )
        sub_1C13F80(0LL, v69);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           fortificationWarningDialog,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
      if ( !Component_object )
        sub_1C13F80(0LL, v72);
      FortificationWarningDialogComponent__Open((FortificationWarningDialogComponent_o *)Component_object, 0LL);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v113,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v113,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_135:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_164;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
  v101 = Method_QuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v101 = (_QWORD *)sub_1C13D3C(Method_QuestBoardListViewManager_OnClickListView__);
  v102 = (System_Reflection_MethodBase_o *)sub_1C13D08(v101, v101[4]);
  OverwriteAssetSoundName__PlaySystemSe(v102, 0, 0, 0LL);
  v103 = MapControl_QuestInfo__GetMine(v47, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v25);
    byte_4BAF374 = 1;
  }
  v104 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v104 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v104->static_fields->mInstance;
  if ( !Instance )
LABEL_164:
    sub_1C13F80(Instance, v25);
  v105 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  IsDisplayQuestInformation_35046272 = QuestInformationComponent__IsDisplayQuestInformation_35046272(v103, 0LL);
  if ( v105 < 1 || !IsDisplayQuestInformation_35046272 || v105 == v47->fields.questId )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v25);
      byte_4BAF374 = 1;
    }
    v108 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v108 = TerminalSceneComponent_TypeInfo;
    }
    Instance = (CommonUI_o *)v108->static_fields->mInstance;
    if ( Instance )
    {
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v109);
      Instance = (CommonUI_o *)*v32;
      if ( *v32 )
      {
        v110 = this->fields.mTerminalList;
        Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
        if ( v110 )
        {
          ScrTerminalListTop__Click_Quest(v110, v47, (int32_t)Instance, 0LL);
          return;
        }
      }
    }
    goto LABEL_164;
  }
  Instance = (CommonUI_o *)*v32;
  if ( !*v32 )
    goto LABEL_164;
  v111 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v111
    || (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v111 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_1C14240(Instance);
LABEL_166:
    sub_1C13F80(current, v61);
  }
  QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v107);
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
  sub_1C13CC8(
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

  if ( (byte_4BB1557 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4BB1557 = 1;
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

  if ( (byte_4BB1558 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4BB1558 = 1;
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
      sub_1C13F80(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_70743396(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4BB1559 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4BB1559 = 1;
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

  if ( (byte_4BB1563 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback);
    byte_4BB1563 = 1;
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
              UnityEngine_Transform__SetParent_70743396(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v18 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C13F80(gameObject, v10);
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
  UnityEngine_Transform__SetParent_70743396(v15, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4BB1562 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback1);
    sub_1C13D24(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_4BB1562 = 1;
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
  v10 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
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
              UnityEngine_Transform__SetParent_70743396(v29, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v22 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C13F80(gameObject, v11);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_36;
  v13 = (UnityEngine_GameObject_o *)gameObject;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v15 = GameObjectExtensions__GetLocalPositionY(v14, 0LL);
  v16 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v16 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v17 = v16->static_fields->POS_Y_ITVL_AREA;
  v18 = v17 <= 0 ? -v17 : 1 - v17;
  GameObjectExtensions__SetLocalPositionY(v13, v15 + (float)(v18 >> 1), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_36;
  v19 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v19 )
    goto LABEL_36;
  UnityEngine_Transform__SetParent_70743396(v19, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v22 = this->fields.effectDisappear2Component;
LABEL_35:
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

  if ( (byte_4BB1561 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4BB1561 = 1;
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

  if ( (byte_4BB1560 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4BB1560 = 1;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Action_o **v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Action_o **v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Object_o *v35; // x20
  QuestBoardListEffectComponent_o *v36; // x20
  System_Action_o *v37; // x21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3

  if ( (byte_4BB1564 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, effectComponent);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__0__, v9);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__1__, v10);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo, v11);
    byte_4BB1564 = 1;
  }
  v12 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = playingCallback1;
  v21 = (System_Action_o **)(v12 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)playingCallback1, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = effectComponent;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)effectComponent, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v12 + 32) = endAct;
  v28 = (System_Action_o **)(v12 + 32);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)endAct, v29, v30, v31, v32, v33, v34);
  v35 = *(UnityEngine_Object_o **)(v12 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
  {
    v36 = *(QuestBoardListEffectComponent_o **)(v12 + 24);
    v37 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v12,
      Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__0__,
      0LL);
    v38 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v12,
      Method_QuestBoardListViewManager___c__DisplayClass176_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v36 )
    {
      QuestBoardListEffectComponent__Play(v36, v37, v38, v39);
      return;
    }
LABEL_14:
    sub_1C13F80(v13, v14);
  }
  if ( *v21 )
    ActionExtensions__Call(*v21, 0LL);
  if ( *v28 )
    ActionExtensions__Call(*v28, 0LL);
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

  if ( (byte_4BB1565 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    byte_4BB1565 = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fortificationWarningDialog, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_1C13CC8(
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
  AssetManager__releaseAsset_38935320(fortificationAssetData, 0LL);
  p_fortificationAssetData->klass = 0LL;
  sub_1C13CC8(p_fortificationAssetData, 0LL, v53, v54, v55, v56, v57, v58);
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

  if ( (byte_4BB1566 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    byte_4BB1566 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38935320(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.effectAssetData, 0LL, v4, v5, v6, v7, v8, v9);
  }
  RoadmapAssetData_k__BackingField = this->fields._RoadmapAssetData_k__BackingField;
  p_RoadmapAssetData_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._RoadmapAssetData_k__BackingField;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38935320(RoadmapAssetData_k__BackingField, 0LL);
  p_RoadmapAssetData_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_RoadmapAssetData_k__BackingField, 0LL, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4BB154E & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB154E = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0LL, 0LL) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_1C13F80(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_mFolderBgTemp, 0LL, v7, v8, v9, v10, v11, v12);
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
  int64_t v21; // x20
  CommonUI_o *Instance; // x0
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
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  System_Action_o *v38; // x0
  __int64 *v39; // x8
  __int64 v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x23
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  float exitTime; // s0
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  System_Action_o *v54; // x21
  const MethodInfo *v55; // x5
  const MethodInfo *v56; // x2
  Il2CppObject *v57; // x20
  AvalonSceneManager_c *v58; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v60; // x21
  CommonUI_o *v61; // x0
  float v62; // s0
  System_Action_o *v63; // x2
  Il2CppObject *v64; // x21
  AvalonSceneManager_c *v65; // x8
  float v66; // s8
  System_Action_o *v67; // x22

  if ( (byte_4BB153E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__0__, v14);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__1__, v15);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__8__, v16);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__9__, v17);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo, v18);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_2__RequestListObject_b__7__, v19);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass122_2_TypeInfo, v20);
    byte_4BB153E = 1;
  }
  v21 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_39;
  *(_QWORD *)(v21 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = end_act;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)end_act, v30, v31, v32, v33, v34, v35);
  *(_BYTE *)(v21 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v36);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  *(_BYTE *)(v21 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v38 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      v39 = &Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__0__;
      goto LABEL_19;
    case 4:
      v40 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass122_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      if ( !v40 )
        goto LABEL_39;
      *(_QWORD *)(v40 + 24) = v21;
      v47 = v40 + 24;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 24), v21, v41, v42, v43, v44, v45, v46);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v40 + 16) = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v48);
      if ( !isWhiteFade )
        goto LABEL_42;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_42:
        if ( *(_QWORD *)v47 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v47 + 24LL) )
          {
            exitTime = *(float *)(v40 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v40 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v49);
          if ( *(_QWORD *)v47 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v40 + 16),
              *(System_Action_o **)(*(_QWORD *)v47 + 32LL),
              v56);
            goto LABEL_37;
          }
        }
LABEL_39:
        sub_1C13F80(Instance, v23);
      }
      this->fields.mFaded = 1;
      v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v58 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v58->static_fields->DEFAULT_FADE_TIME;
      v60 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v40,
        Method_QuestBoardListViewManager___c__DisplayClass122_2__RequestListObject_b__7__,
        0LL);
      if ( !v57 )
        goto LABEL_39;
      v61 = (CommonUI_o *)v57;
      v62 = DEFAULT_FADE_TIME;
      v63 = v60;
LABEL_36:
      CommonUI__maskFadeout(v61, 2, v62, v63, 0LL);
LABEL_37:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v37);
      v38 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      v39 = &Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__1__;
LABEL_19:
      v51 = v38;
      System_Action___ctor(v38, (Il2CppObject *)v21, *v39, 0LL);
      QuestBoardListViewManager__changeBG(this, v51, v52);
      return;
    case 6:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v37);
      if ( !isWhiteFade )
        goto LABEL_24;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( TerminalPramsManager__IsAuto(0LL) )
      {
LABEL_24:
        QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, 0.0, v53);
        v54 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          v54,
          (Il2CppObject *)v21,
          Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v54, 0, 0, v55);
        goto LABEL_37;
      }
      this->fields.mFaded = 1;
      v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v65 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v65 = AvalonSceneManager_TypeInfo;
      }
      v66 = v65->static_fields->DEFAULT_FADE_TIME;
      v67 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v67,
        (Il2CppObject *)v21,
        Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__8__,
        0LL);
      if ( !v64 )
        goto LABEL_39;
      v61 = (CommonUI_o *)v64;
      v62 = v66;
      v63 = v67;
      goto LABEL_36;
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
  __int64 v14; // x20
  Il2CppObject *FlagFromOnEventStart; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  QuestBoardListViewManager_o *v23; // x0
  const MethodInfo *v24; // x3
  int32_t id; // w21
  int32_t v26; // w22
  NetworkManager_ResultCallbackFunc_o *v27; // x19
  int32_t flagType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB1548 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, eventEntity);
    sub_1C13D24(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass136_0__RequestToRaiseTutorialFlag_b__0__, v12);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo, v13);
    byte_4BB1548 = 1;
  }
  flagType = 0;
  v14 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  *(_QWORD *)(v14 + 16) = clickAreaFunc;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)clickAreaFunc, v17, v18, v19, v20, v21, v22);
  FlagFromOnEventStart = (Il2CppObject *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                           v23,
                                           &flagType,
                                           eventEntity,
                                           v24);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_17;
    id = eventEntity->fields.id;
    v26 = flagType;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v26, 0LL) )
    {
      FlagFromOnEventStart = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_17;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v27,
          (Il2CppObject *)v14,
          Method_QuestBoardListViewManager___c__DisplayClass136_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FlagFromOnEventStart = NetworkManager__getRequest_object_(
                                 v27,
                                 (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)FlagFromOnEventStart, v26, id, 0LL);
          return 1;
        }
LABEL_17:
        sub_1C13F80(FlagFromOnEventStart, v16);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4BB1546 & 1) == 0 )
  {
    sub_1C13D24(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4BB1546 = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v4 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v4 = QuestBoardListViewManager_TypeInfo;
  }
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(v4->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v6 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v7 = (AlphaTransitionCalculator_o *)sub_1C13F70(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v7, v5, v6, 0LL);
  this->fields.rewardIconAlphaCalculator = v7;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.rewardIconAlphaCalculator,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_1C13F80(0LL, v14);
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
    sub_1C13F80(mFolderBg, method);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  const MethodInfo *v14; // x1
  Il2CppObject *current; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4BB1568 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UITouchPress___, isActive);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v10);
    this = (QuestBoardListViewManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    byte_4BB1568 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
        (this = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(v6, v14)) == 0LL) )
  {
LABEL_31:
    sub_1C13F80(this, isActive);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1C13F80(v16, v17);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)current,
                           (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v19 )
      {
        if ( !Component_object )
          sub_1C13F80(v19, v20);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0LL);
      }
      if ( isActive && QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)current, v20) )
        QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)current, v6->fields.mTerminalList, v21);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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

  if ( (byte_4BB1543 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&item_index);
    byte_4BB1543 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0LL, 0LL);
  if ( v10 )
  {
    v12 = this->fields.effectAppearComponent;
    if ( !v12 )
      sub_1C13F80(v10, v11);
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
    sub_1C13F80(0LL, v12);
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
    sub_1C13F80(0LL, isActive);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 methodPtr_low; // x10
  ListViewSort_c *klass; // x8
  __int64 v14; // x21
  QuestBoardListViewManager_o *v15; // x23
  System_String_o *ActiveStateName; // x22
  Il2CppObject *Component_object; // x19
  const MethodInfo *v18; // x2

  v5 = this;
  if ( (byte_4BB153B & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UITouchPress___, obj);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&QuestBoardListViewObject_TypeInfo, v7);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_9023/*"Maltese (Malta)"*/, v10);
    this = (QuestBoardListViewManager_o *)sub_1C13D24(&StringLiteral_3443/*"CAN_CONTINUE_DEVICE"*/, v11);
    byte_4BB153B = 1;
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
    QuestBoardListViewObject__Init_35014056((QuestBoardListViewObject_o *)obj, 2, 0LL, method);
    return;
  }
  QuestBoardListViewObject__Init_35014056((QuestBoardListViewObject_o *)obj, 3, 0LL, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, obj);
    byte_4BAF374 = 1;
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
  v14 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
  this = (QuestBoardListViewManager_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
  if ( !v14 )
    goto LABEL_45;
  v15 = this;
  this = (QuestBoardListViewManager_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)v14, 0LL);
  if ( !this )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB15BA )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, obj);
    byte_4BB15BA = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.sort[3].fields.expUpDispType) )
  {
    if ( !v15 )
      goto LABEL_45;
    if ( (System_String__IndexOf_62999520((System_String_o *)v15, (System_String_o *)StringLiteral_3443/*"CAN_CONTINUE_DEVICE"*/, 0LL) & 0x80000000) == 0 )
      return;
    this = *(QuestBoardListViewManager_o **)(v14 + 104);
    if ( !this )
LABEL_45:
      sub_1C13F80(this, obj);
    this = (QuestBoardListViewManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    if ( !ActiveStateName )
      goto LABEL_45;
    if ( (System_String__IndexOf_62999520(ActiveStateName, (System_String_o *)StringLiteral_9023/*"Maltese (Malta)"*/, 0LL) & 0x80000000) == 0 )
    {
LABEL_36:
      this = *(QuestBoardListViewManager_o **)(v14 + 104);
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
                               (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
          QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)obj, v5->fields.mTerminalList, v18);
        }
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  SlideFadeObject_o *v7; // x19
  float v8; // s8
  float v9; // s10
  float v10; // s9
  QuestBoardListViewManager_c *v11; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB1541 & 1) == 0 )
  {
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, method);
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4BB1541 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_object )
    sub_1C13F80(0LL, v6);
  v7 = (SlideFadeObject_o *)Component_object;
  v9 = *(float *)&Component_object[4].klass;
  v8 = *((float *)&Component_object[4].klass + 1);
  v10 = *(float *)&Component_object[4].monitor;
  v11 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
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
  UnityEngine_Object_o *blockMask; // x22
  PartyOrganizationUtility_o *p_blockMask; // x20
  UnityEngine_Object_o *klass; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x19

  if ( (byte_4BB152F & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB152F = 1;
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
      UnityEngine_Object__DestroyImmediate_70722176(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1C13CC8(p_blockMask, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v16 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__Instantiate_object_(
              v16,
              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v17;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.blockMask, (int64_t)v17, v18, v19, v20, v21, v22, v23);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.onEffectPanel,
        0LL);
      v25 = this->fields.blockMask;
      if ( !byte_4BAEDA1 )
      {
        sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v24);
        byte_4BAEDA1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  __int64 v8; // x1
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *Component_object; // x21

  DEFAULT_SCROLL_VIEW_DEPTH = depth;
  if ( (byte_4BB154F & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v8);
    byte_4BB154F = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C13F80(scrollView, *(_QWORD *)&depth);
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
  __int64 v8; // x1
  void *itemList; // x0
  UnityEngine_Object_o *v10; // x21
  __int64 methodPtr_low; // x9
  QuestBoardListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  v5 = idx;
  if ( (byte_4BB154B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&idx);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&QuestBoardListViewObject_TypeInfo, v8);
    byte_4BB154B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v5,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemList )
    goto LABEL_14;
  v10 = (UnityEngine_Object_o *)*((_QWORD *)itemList + 13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = (void *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) == 0 )
    goto LABEL_13;
  if ( !v10 )
LABEL_14:
    sub_1C13F80(itemList, *(_QWORD *)&idx);
  *(_QWORD *)&idx = QuestBoardListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewObject_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewObject_TypeInfo )
  {
    itemList = v10[5].monitor;
    if ( itemList )
    {
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)itemList, onOff, 0LL);
LABEL_13:
      this->fields._IsShowingInfo_k__BackingField = onOff;
      return;
    }
    goto LABEL_14;
  }
  sub_1C14240(v10);
  QuestBoardListViewManager__RequestConsumeColorReset(v12, v13);
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4BB154A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_4BB154A = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  v6 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)ObjectList[3].monitor;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0LL);
      if ( ++v7 >= v6->fields._size )
        goto LABEL_9;
    }
LABEL_10:
    sub_1C13F80(ObjectList, v5);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  UnityEngine_GameObject_o *gameObject; // x0
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
  UnityEngine_GameObject_o *v26; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v28; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v30; // x21

  if ( (byte_4BB153F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, end_act);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v8);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass123_0__SetSlideOut_b__0__, v9);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass123_0_TypeInfo, v10);
    byte_4BB153F = 1;
  }
  v11 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass123_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)end_act, v20, v21, v22, v23, v24, v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  v26 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v26,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v28 = (SlideFadeObject_o *)Component_object;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_object);
  v30 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_QuestBoardListViewManager___c__DisplayClass123_0__SetSlideOut_b__0__,
    0LL);
  if ( !v28 )
LABEL_9:
    sub_1C13F80(gameObject, v13);
  SlideFadeObject__SlideOut_34728324(v28, OUT_POS_OFS_X, time, 0.0, v30, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x8
  int32_t size; // w2
  int v15; // w9
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x8
  int32_t v17; // w2
  int v18; // w9
  char v19; // w26
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v28; // x0
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x8
  System_Collections_Generic_List_object__o *v33; // x0
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x8
  _QWORD *monitor; // x8
  __int64 v39; // x8
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4BB1534 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&targetWarId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    this = (QuestBoardListViewManager_o *)sub_1C13D24(&QuestBoardListViewItem_TypeInfo, v12);
    byte_4BB1534 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( targetWarId )
  {
    topItemList = v6->fields.topItemList;
    if ( !topItemList )
      goto LABEL_42;
    size = topItemList->fields._size;
    v15 = topItemList->fields._version + 1;
    topItemList->fields._size = 0;
    topItemList->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)topItemList->fields._items, 0, size, 0LL);
    bottomItemList = v6->fields.bottomItemList;
    if ( !bottomItemList )
      goto LABEL_42;
    v17 = bottomItemList->fields._size;
    v18 = bottomItemList->fields._version + 1;
    bottomItemList->fields._size = 0;
    bottomItemList->fields._version = v18;
    if ( v17 >= 1 )
      System_Array__Clear((System_Array_o *)bottomItemList->fields._items, 0, v17, 0LL);
    this = (QuestBoardListViewManager_o *)v6->fields.itemList;
    if ( !this )
LABEL_42:
      sub_1C13F80(this, *(_QWORD *)&targetWarId);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = 1;
    v41 = v40;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v41,
            (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        current = v41.fields._current;
        if ( v41.fields._current )
        {
          methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestBoardListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v41.fields._current[7].monitor;
            if ( monitor )
            {
              v39 = monitor[14];
              if ( v39 )
              {
                if ( *(_DWORD *)(v39 + 16) != 1 && *(_DWORD *)(v39 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v19 & 1) != 0 )
        {
          v28 = (System_Collections_Generic_List_object__o *)v6->fields.topItemList;
          if ( !v28 )
            sub_1C13F80(0LL, v41.fields._current);
          items = v28->fields._items;
          v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v28->fields._version;
          if ( !items )
            sub_1C13F80(v28, current);
          v31 = v28->fields._size;
          if ( (unsigned int)v31 >= items->max_length )
          {
            v19 = 1;
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              current,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + v31;
            v19 = 1;
            v28->fields._size = v31 + 1;
            v32[4] = (Il2CppClass *)current;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)current, v20, v21, v22, v23, v24, v25);
          }
        }
        else
        {
          v33 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
          if ( !v33 )
            sub_1C13F80(0LL, v41.fields._current);
          v34 = v33->fields._items;
          v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v33->fields._version;
          if ( !v34 )
            sub_1C13F80(v33, current);
          v36 = v33->fields._size;
          if ( (unsigned int)v36 < v34->max_length )
            goto LABEL_24;
LABEL_35:
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            current,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          v19 = 0;
        }
      }
      v19 = 0;
      if ( isClose )
      {
        v33 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
        if ( !v33 )
          sub_1C13F80(0LL, v41.fields._current);
        v34 = v33->fields._items;
        v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v33->fields._version;
        if ( !v34 )
          sub_1C13F80(v33, current);
        v36 = v33->fields._size;
        if ( (unsigned int)v36 >= v34->max_length )
          goto LABEL_35;
LABEL_24:
        v37 = &v34->obj.klass + v36;
        v33->fields._size = v36 + 1;
        v37[4] = (Il2CppClass *)current;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)current, v20, v21, v22, v23, v24, v25);
        v19 = 0;
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
  Il2CppObject *v9; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4BB1555 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___, *(_QWORD *)&warId);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    byte_4BB1555 = 1;
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
      v9 = (Il2CppObject *)this->fields.boardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v9,
                                                (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
              v14 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4BAEDA1 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v11);
                byte_4BAEDA1 = 1;
              }
              if ( v14 )
              {
                UnityEngine_Transform__set_localPosition(
                  v14,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
                v15 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4BAEDA7 )
                {
                  transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v11);
                  byte_4BAEDA7 = 1;
                }
                if ( v15 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v15,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
                  v16 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4BAEDA6 )
                  {
                    transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v11);
                    byte_4BAEDA6 = 1;
                  }
                  if ( v16 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v16,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v12,
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
                    sub_1C13CC8(
                      (PartyOrganizationUtility_o *)&this->fields.effectAppearComponent,
                      (int64_t)Component_object,
                      v19,
                      v20,
                      v21,
                      v22,
                      v23,
                      v24);
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
                        v25);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1C13F80(transform, v11);
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
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Transform_o *v13; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_4BB155D & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___, *(_QWORD *)&warId);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    byte_4BB155D = 1;
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
      v9 = (Il2CppObject *)this->fields.nt2BoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v9,
                                                (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v12,
                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&this->fields.effectAppearComponent,
                (int64_t)Component_object,
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
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v22);
                return;
              }
            }
          }
        }
      }
      sub_1C13F80(transform, v11);
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v6; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_4BB1556 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    byte_4BB1556 = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v6 = (Il2CppObject *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v6,
                                              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
          v11 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4BAEDA1 )
          {
            transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v8);
            byte_4BAEDA1 = 1;
          }
          if ( v11 )
          {
            UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
            v12 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4BAEDA7 )
            {
              transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v8);
              byte_4BAEDA7 = 1;
            }
            if ( v12 )
            {
              UnityEngine_Transform__set_localRotation(
                v12,
                UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                0LL);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
              v13 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4BAEDA6 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v8);
                byte_4BAEDA6 = 1;
              }
              if ( v13 )
              {
                UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     v9,
                                     (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&this->fields.effectAppearFadeComponent,
                  (int64_t)Component_object,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21);
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
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v22);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1C13F80(transform, v8);
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  Il2CppObject *v6; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4BB155E & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    byte_4BB155E = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v6 = (Il2CppObject *)this->fields.nt2BoardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v6,
                                              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v9,
                               (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.effectAppearFadeComponent,
            (int64_t)Component_object,
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
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v19);
            return;
          }
        }
      }
    }
    sub_1C13F80(transform, v8);
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
  Il2CppObject *v13; // x21
  __int64 transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x23
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Transform_o *v20; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x2
  float v30; // s1

  if ( (byte_4BB155A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___,
      *(_QWORD *)&warId);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BB155A = 1;
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
      v13 = (Il2CppObject *)this->fields.boardDisappearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v13,
                             (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_32;
      v16 = (UnityEngine_GameObject_o *)transform;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_32;
      v17 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !transform )
        goto LABEL_32;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !v17 )
        goto LABEL_32;
      UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v16, 0LL);
      v18 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BAEDA1 )
      {
        transform = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4BAEDA1 = 1;
      }
      if ( !v18 )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v16, 0LL);
      v19 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BAEDA7 )
      {
        transform = sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v15);
        byte_4BAEDA7 = 1;
      }
      if ( !v19 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(
        v19,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v16, 0LL);
      v20 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BAEDA6 )
      {
        transform = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4BAEDA6 = 1;
      }
      if ( !v20 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v16,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.effectDisappearComponent,
        (int64_t)Component_object,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      transform = UnityEngine_Object__op_Equality(
                    (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                    0LL,
                    0LL);
      if ( (transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v16,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0LL),
            (transform = (__int64)*p_effectDisappearComponent) == 0) )
      {
LABEL_32:
        sub_1C13F80(transform, v15);
      }
      if ( isNextBoardReleased )
        v30 = endTime;
      else
        v30 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v30, v29);
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
  Il2CppObject *v21; // x22
  __int64 transform; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_Transform_o *v26; // x23
  UnityEngine_Transform_o *v27; // x23
  UnityEngine_Transform_o *v28; // x23
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  const MethodInfo *v38; // x2
  Il2CppObject *v39; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  const MethodInfo *v49; // x2
  struct QuestBoardListEffectDisappearComponent_o *v50; // x8
  struct QuestBoardListEffectDisappearComponent_o *v51; // x8

  if ( (byte_4BB155B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___,
      *(_QWORD *)&warId);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, v15);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v17);
    byte_4BB155B = 1;
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
      v21 = (Il2CppObject *)*p_ntBoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v21,
                             (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v24 = (UnityEngine_GameObject_o *)transform;
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v25 = (UnityEngine_Transform_o *)transform;
          transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( v25 )
            {
              UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0LL);
              transform = (__int64)UnityEngine_GameObject__get_transform(v24, 0LL);
              v26 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4BAEDA1 )
              {
                transform = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v23);
                byte_4BAEDA1 = 1;
              }
              if ( v26 )
              {
                UnityEngine_Transform__set_localPosition(
                  v26,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v24, 0LL);
                v27 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4BAEDA7 )
                {
                  transform = sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v23);
                  byte_4BAEDA7 = 1;
                }
                if ( v27 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v27,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (__int64)UnityEngine_GameObject__get_transform(v24, 0LL);
                  v28 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4BAEDA6 )
                  {
                    transform = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v23);
                    byte_4BAEDA6 = 1;
                  }
                  if ( v28 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v28,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           v24,
                                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = (struct QuestBoardListEffectBoardOpenComponent_o *)Component_object;
                      sub_1C13CC8(
                        (PartyOrganizationUtility_o *)&this->fields.effectDisappear2BbComponent,
                        (int64_t)Component_object,
                        v31,
                        v32,
                        v33,
                        v34,
                        v35,
                        v36);
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
                        v38);
                      if ( *p_effectDisappear2BbComponent )
                      {
                        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
                        return;
                      }
                    }
                    else
                    {
                      v39 = UnityEngine_GameObject__GetComponent_object_(
                              v24,
                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = (struct QuestBoardListEffectComponent_o *)v39;
                      sub_1C13CC8(
                        (PartyOrganizationUtility_o *)&this->fields.effectDisappear2Component,
                        (int64_t)v39,
                        v41,
                        v42,
                        v43,
                        v44,
                        v45,
                        v46);
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
                        v50 = this->fields.effectDisappearComponent;
                        if ( !v50 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v24, v50->fields.disappearEffect2ShiftPosX, 0LL);
                        v51 = this->fields.effectDisappearComponent;
                        if ( !v51 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v24, v51->fields.disappearEffect2ShiftPosY, 0LL);
                      }
                      transform = (__int64)*p_effectDisappear2Component;
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(
                          (QuestBoardListEffectComponent_o *)transform,
                          0,
                          0.0,
                          0.0,
                          v49);
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
      sub_1C13F80(transform, v23);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2

  if ( (byte_4BB155C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, isPlayingAct);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    byte_4BB155C = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
  {
    v10 = (Il2CppObject *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v10,
                                              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_26;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_26;
    v14 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0LL);
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BAEDA1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4BAEDA1 = 1;
    }
    if ( !v15 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v16 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BAEDA7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v12);
      byte_4BAEDA7 = 1;
    }
    if ( !v16 )
      goto LABEL_26;
    UnityEngine_Transform__set_localRotation(
      v16,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BAEDA6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4BAEDA6 = 1;
    }
    if ( !v17 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v13,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.effectDisappearFadeComponent,
      (int64_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0LL, 0LL) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_26;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v26);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_26:
      sub_1C13F80(transform, v12);
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
  UnityEngine_Object_o *blackMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  __int64 v16; // x0
  System_Object_array *v17; // x20
  QuestBoardListViewManager___c_c *v18; // x8
  System_Func_object__bool__o *_9__157_0; // x21
  Il2CppObject *v20; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  PartyOrganizationUtility_o *p_blackMarkPrefab; // x19
  Il2CppObject *Object_object__49747248; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BB1551 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, method);
    sub_1C13D24(&Method_BasicHelper_Any_WarEntity___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___, v5);
    sub_1C13D24(&System_Func_WarEntity__bool__TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__157_0__, v9);
    sub_1C13D24(&QuestBoardListViewManager___c_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_19100/*"edit"*/, v11);
    byte_4BB1551 = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    v15 = Instance;
    v16 = sub_1C13E58(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___
                                              + 40)
                                            + 1].methodPtr);
    v17 = (System_Object_array *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v16 + 8))(v15, v16);
    v18 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v18 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__157_0 = (System_Func_object__bool__o *)v18->static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = QuestBoardListViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__157_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__157_0,
        v20,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__157_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__157_0 = (struct System_Func_WarEntity__bool__o *)_9__157_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__157_0,
        (int64_t)_9__157_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__49783940(
                                 v17,
                                 (System_Func_T__bool__o *)_9__157_0,
                                 (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v28 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1C13F80(Instance, v14);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v28) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (PartyOrganizationUtility_o *)&this->fields.blackMarkPrefab;
        Object_object__49747248 = AssetData__GetObject_object__49747248(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19100/*"edit"*/,
                                    (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
        p_blackMarkPrefab->klass = (PartyOrganizationUtility_c *)Object_object__49747248;
        sub_1C13CC8(p_blackMarkPrefab, (int64_t)Object_object__49747248, v33, v34, v35, v36, v37, v38);
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
  Il2CppObject *Object_object__49747248; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *v34; // x20
  __int64 *v35; // x8
  PartyOrganizationUtility_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v37; // x20
  Il2CppObject *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Object_o *v45; // x20
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v62; // x8
  PartyOrganizationUtility_o *p_nt2BoardAppearEffectFadePrefab; // x19
  Il2CppObject *v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  Il2CppObject *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v80; // x8
  UnityEngine_Object_o *v81; // x20
  Il2CppObject *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  UnityEngine_Object_o *v89; // x20
  Il2CppObject *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  UnityEngine_Object_o *v97; // x20
  Il2CppObject *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  UnityEngine_Object_o *v105; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  Il2CppObject *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4BB1554 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_17463/*"binaryType"*/, v4);
    sub_1C13D24(&StringLiteral_17469/*"bitNum out of range"*/, v5);
    sub_1C13D24(&StringLiteral_17497/*"bit_dedicate_left_item_flash_2"*/, v6);
    sub_1C13D24(&StringLiteral_17468/*"bisque"*/, v7);
    sub_1C13D24(&StringLiteral_17465/*"binding-path"*/, v8);
    sub_1C13D24(&StringLiteral_17496/*"bit_dedicate_left_item_flash_1"*/, v9);
    sub_1C13D24(&StringLiteral_17462/*"bin.hex"*/, v10);
    sub_1C13D24(&StringLiteral_17499/*"bit_dedicate_reward"*/, v11);
    sub_1C13D24(&StringLiteral_17498/*"bit_dedicate_left_item_flash_3"*/, v12);
    sub_1C13D24(&StringLiteral_17464/*"binder"*/, v13);
    sub_1C13D24(&StringLiteral_17466/*"bindingFlags"*/, v14);
    sub_1C13D24(&StringLiteral_17467/*"birthDay"*/, v15);
    byte_4BB1554 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_100;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v17 = this->fields.mTerminalList;
  if ( !v17 )
    goto LABEL_100;
  if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
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
      Object_object__49747248 = AssetData__GetObject_object__49747248(
                                  (AssetData_o *)mTerminalList,
                                  (System_String_o *)StringLiteral_17462/*"bin.hex"*/,
                                  (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)Object_object__49747248;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab,
        (int64_t)Object_object__49747248,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v27 = AssetData__GetObject_object__49747248(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17496/*"bit_dedicate_left_item_flash_1"*/,
              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v27;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
        (int64_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    goto LABEL_17;
  }
  if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v37 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v38 = AssetData__GetObject_object__49747248(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17463/*"binaryType"*/,
              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v38;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectPrefab,
        (int64_t)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v45, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v46 = AssetData__GetObject_object__49747248(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17498/*"bit_dedicate_left_item_flash_3"*/,
              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v46;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.boardAppearEffectFadePrefab,
        (int64_t)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    goto LABEL_34;
  }
  if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
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
      v72 = AssetData__GetObject_object__49747248(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17465/*"binding-path"*/,
              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v72;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab,
        (int64_t)v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0LL, 0LL) )
      goto LABEL_71;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v80 = &StringLiteral_17466/*"bindingFlags"*/;
    goto LABEL_70;
  }
  if ( (_DWORD)mTerminalList != v17->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_17:
      v34 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_100;
        v35 = &StringLiteral_17466/*"bindingFlags"*/;
        p_boardDisappear2EffectPrefab = (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_39:
        v54 = AssetData__GetObject_object__49747248(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v35,
                (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
        p_boardDisappear2EffectPrefab->klass = (PartyOrganizationUtility_c *)v54;
        sub_1C13CC8(p_boardDisappear2EffectPrefab, (int64_t)v54, v55, v56, v57, v58, v59, v60);
        goto LABEL_40;
      }
      goto LABEL_40;
    }
    if ( (_DWORD)mTerminalList != v17->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID
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
          v107 = AssetData__GetObject_object__49747248(
                   (AssetData_o *)mTerminalList,
                   (System_String_o *)StringLiteral_17464/*"binder"*/,
                   (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
          this->fields.nt2BoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v107;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (int64_t)v107,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v62 = &StringLiteral_17499/*"bit_dedicate_reward"*/;
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
      v35 = &StringLiteral_17469/*"bitNum out of range"*/;
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
        v62 = &StringLiteral_17497/*"bit_dedicate_left_item_flash_2"*/;
        p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_45:
        v64 = AssetData__GetObject_object__49747248(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v62,
                (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
        p_nt2BoardAppearEffectFadePrefab->klass = (PartyOrganizationUtility_c *)v64;
        sub_1C13CC8(p_nt2BoardAppearEffectFadePrefab, (int64_t)v64, v65, v66, v67, v68, v69, v70);
        return;
      }
      goto LABEL_100;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v81 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v81, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v82 = AssetData__GetObject_object__49747248(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17467/*"birthDay"*/,
            (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
    this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v82;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectPrefab,
      (int64_t)v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  v89 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v89, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v80 = &StringLiteral_17468/*"bisque"*/;
LABEL_70:
    v90 = AssetData__GetObject_object__49747248(
            (AssetData_o *)mTerminalList,
            (System_String_o *)*v80,
            (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
    this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v90;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappear2EffectPrefab,
      (int64_t)v90,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
LABEL_71:
  v97 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v97, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v98 = AssetData__GetObject_object__49747248(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17497/*"bit_dedicate_left_item_flash_2"*/,
            (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
    this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v98;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.boardDisappearEffectFadePrefab,
      (int64_t)v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  v105 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v105, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v62 = &StringLiteral_17469/*"bitNum out of range"*/;
      p_nt2BoardAppearEffectFadePrefab = (PartyOrganizationUtility_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_45;
    }
LABEL_100:
    sub_1C13F80(mTerminalList, method);
  }
}


void __fastcall QuestBoardListViewManager__SetupDisp(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v10; // x1
  int size; // w8
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w21
  int syncRoot; // w23
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  QuestBoardListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__bool__o *_9__120_0; // x21
  Il2CppObject *v19; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x1
  int32_t klass_high; // w8
  const MethodInfo *v30; // x3

  if ( (byte_4BB153C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___, v3);
    sub_1C13D24(&System_Func_QuestBoardListViewItem__bool__TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v6);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__SetupDisp_b__120_0__, v7);
    sub_1C13D24(&QuestBoardListViewManager___c_TypeInfo, v8);
    byte_4BB153C = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_23;
  size = ObjectList->fields._size;
  v12 = ObjectList;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v12,
                                                                  v13,
                                                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v10);
      size = v12->fields._size;
      if ( ++v13 >= size )
        goto LABEL_8;
    }
LABEL_23:
    sub_1C13F80(ObjectList, v10);
  }
LABEL_8:
  if ( size >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v12,
                                                                0,
                                                                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    if ( !ObjectList )
      goto LABEL_23;
    ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                                (QuestBoardListViewObject_o *)ObjectList,
                                                                v10);
    if ( !ObjectList )
      goto LABEL_23;
    syncRoot = (int)ObjectList[2].fields._syncRoot;
    v15 = System_Linq_Enumerable__Cast_object_(
            (System_Collections_IEnumerable_o *)this->fields.itemList,
            (const MethodInfo_2F9D354 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    v16 = QuestBoardListViewManager___c_TypeInfo;
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v16 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__120_0 = (System_Func_object__bool__o *)v16->static_fields->__9__120_0;
    if ( !_9__120_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = QuestBoardListViewManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__120_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_QuestBoardListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__120_0, v19, Method_QuestBoardListViewManager___c__SetupDisp_b__120_0__, 0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__120_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__120_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__120_0,
        (int64_t)_9__120_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
            v17,
            (System_Func_TSource__bool__o *)_9__120_0,
            (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    if ( v27 )
    {
      klass_high = HIDWORD(v27[1].klass);
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
        QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v28);
        QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v30);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  v28 = eventId;
  if ( (byte_4BB1553 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass159_0__SetupFortificationWarningDialog_b__0__, v7);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_6382/*"EventTradeSweetsSelectConfirmDialog"*/, v9);
    byte_4BB1553 = 1;
  }
  v10 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C13F80(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = func;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)func, v19, v20, v21, v22, v23, v24);
  v25 = System_Int32__ToString((int32_t)&v28, 0LL);
  v26 = System_String__Concat_62967944((System_String_o *)StringLiteral_6382/*"EventTradeSweetsSelectConfirmDialog"*/, v25, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_QuestBoardListViewManager___c__DisplayClass159_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  __int64 v16; // x0
  System_Object_array *v17; // x20
  QuestBoardListViewManager___c_c *v18; // x8
  System_Func_object__bool__o *_9__158_0; // x21
  Il2CppObject *v20; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  PartyOrganizationUtility_o *p_whiteMarkPrefab; // x19
  Il2CppObject *Object_object__49747248; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BB1552 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, method);
    sub_1C13D24(&Method_BasicHelper_Any_WarEntity___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___, v5);
    sub_1C13D24(&System_Func_WarEntity__bool__TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__158_0__, v9);
    sub_1C13D24(&QuestBoardListViewManager___c_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_19162/*"ef_soundchoice"*/, v11);
    byte_4BB1552 = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    v15 = Instance;
    v16 = sub_1C13E58(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys_WarEntity___
                                              + 40)
                                            + 1].methodPtr);
    v17 = (System_Object_array *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v16 + 8))(v15, v16);
    v18 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v18 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__158_0 = (System_Func_object__bool__o *)v18->static_fields->__9__158_0;
    if ( !_9__158_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = QuestBoardListViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__158_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__158_0,
        v20,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__158_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__158_0 = (struct System_Func_WarEntity__bool__o *)_9__158_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__158_0,
        (int64_t)_9__158_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__49783940(
                                 v17,
                                 (System_Func_T__bool__o *)_9__158_0,
                                 (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v28 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1C13F80(Instance, v14);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v28) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (PartyOrganizationUtility_o *)&this->fields.whiteMarkPrefab;
        Object_object__49747248 = AssetData__GetObject_object__49747248(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19162/*"ef_soundchoice"*/,
                                    (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
        p_whiteMarkPrefab->klass = (PartyOrganizationUtility_c *)Object_object__49747248;
        sub_1C13CC8(p_whiteMarkPrefab, (int64_t)Object_object__49747248, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_4BB155F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB155F = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v7 = this->fields.effectDisappearFadeComponent;
    if ( !v7 )
      sub_1C13F80(0LL, v6);
    QuestBoardListEffectComponent__Skip(v7, skipTime, v6);
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
  void *EventTutorialEntity; // x0
  __int64 v9; // x1
  int32_t v10; // w8
  bool result; // w0

  if ( (byte_4BB1547 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, flagType);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6);
    sub_1C13D24(&StringLiteral_1/*""*/, v7);
    byte_4BB1547 = 1;
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
                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( EventTutorialEntity )
      {
        v10 = *((_DWORD *)EventTutorialEntity + 5);
        result = 1;
        *flagType = v10;
        return result;
      }
LABEL_9:
      sub_1C13F80(EventTutorialEntity, v9);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v13; // w20
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  MapControl_QuestInfo_o *monitor; // x0
  _BOOL8 IsReleaseFocusQuestBoard; // x0
  __int64 v18; // x1
  _DWORD *v19; // x8
  int32_t v20; // w22
  __int64 QuestReleasedFocusState; // x0
  __int64 v22; // x1
  _DWORD *v23; // x8
  int v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB1539 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_ListViewItem___, questId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1C13D24(&QuestBoardListViewItem_TypeInfo, v9);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB1539 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C13F80(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
    {
      v24 = 6;
      goto LABEL_21;
    }
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (QuestBoardListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
      {
        sub_1C14240(v27.fields._current);
LABEL_24:
        sub_1C13F80(IsReleaseFocusQuestBoard, v18);
      }
      monitor = (MapControl_QuestInfo_o *)v27.fields._current[7].monitor;
      if ( monitor )
      {
        if ( monitor->fields.dispType == 1 )
        {
          IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(monitor, 0LL);
          if ( IsReleaseFocusQuestBoard )
          {
            v19 = current[7].monitor;
            if ( !v19 )
              goto LABEL_24;
            v20 = v19[4];
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(v20, 0LL);
            if ( !(_DWORD)QuestReleasedFocusState )
              break;
          }
        }
      }
    }
  }
  v23 = current[7].monitor;
  if ( !v23 )
    sub_1C13F80(QuestReleasedFocusState, v22);
  *questId = v23[4];
  v24 = 5;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v13 && v24 == 5;
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

  if ( (byte_4BB1545 & 1) == 0 )
  {
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, method);
    sub_1C13D24(&Method_TransitionCalculator_float__Update__, v3);
    byte_4BB1545 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v6 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_38EBDBC *)Method_TransitionCalculator_float__Update__);
    v7 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v6;
    if ( !v7 )
      goto LABEL_22;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v7, 0LL) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v10 = realtimeSinceStartup;
      v11 = QuestBoardListViewManager_TypeInfo;
      if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
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
LABEL_22:
        sub_1C13F80(v7, v5);
      }
    }
    else
    {
      v7 = this->fields.rewardIconAlphaCalculator;
      if ( !v7 )
        goto LABEL_22;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v7, 0LL) )
      {
        v7 = this->fields.rewardIconAlphaCalculator;
        if ( !v7 )
          goto LABEL_22;
        AlphaTransitionCalculator__StartFadeIn(v7, 0LL);
        v13 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v13;
        v15 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v16 = QuestBoardListViewManager_TypeInfo;
        if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
          v16 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v16->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v15 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v18 = this->fields.mAlphaAnimCnt;
          if ( !v16->_2.cctor_finished )
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

  if ( (byte_4BB1536 & 1) == 0 )
  {
    sub_1C13D24(&QuestBoardListViewManager__WaitFinish_d__113_TypeInfo, endAct);
    byte_4BB1536 = 1;
  }
  v5 = sub_1C13F70(QuestBoardListViewManager__WaitFinish_d__113_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)endAct, v12, v13, v14, v15, v16, v17);
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
    sub_1C13F80(mFolderBg, method);
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

  if ( (byte_4BB156B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_11475/*"Reload"*/, method);
    byte_4BB156B = 1;
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
    sub_1C13F80(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 8) = 0;
  v11 = StringLiteral_11475/*"Reload"*/;
  *((_QWORD *)mFolderBgTemp + 11) = StringLiteral_11475/*"Reload"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(mFolderBgTemp + 88), v11, v5, v6, v7, v8, v9, v10);
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
    sub_1C13F80(mFolderBg, *(_QWORD *)&inOut);
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
  __int64 v6; // x1
  UnityEngine_Component_o *mFolderBg; // x0
  int32_t mRequestedBGid; // w21
  ExUITexture_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  ExUITexture_o *v14; // x20
  System_String_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB154C & 1) == 0 )
  {
    sub_1C13D24(&FSUtility_TypeInfo, callback);
    sub_1C13D24(&int_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_3167/*"Back/"*/, v6);
    byte_4BB154C = 1;
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
  v9 = this->fields.mFolderBg;
  v17 = this->fields.mRequestedBGid;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3167/*"Back/"*/, v13, 0LL);
  if ( !v9 )
LABEL_14:
    sub_1C13F80(mFolderBg, callback);
  ExUITexture__SetAssetImage(v9, (System_String_o *)mFolderBg, callback, 0LL);
  v14 = this->fields.mFolderBg;
  v15 = System_Int32__ToString((int)this + 576, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v14, v15, 0LL);
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
    sub_1C13F80(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB1530 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BB1530 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C13F80(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C13F80(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C13F80(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C13F80(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v11;
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
    sub_1C13F80(mFolderBg, method);
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
  sub_1C13CC8(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v21; // x22
  struct QuestBoardListViewManager___c__DisplayClass155_0_o **p__8__1; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v45; // x23
  unsigned int v46; // w24
  EventEntity_o *v47; // x25
  const MethodInfo *v48; // x3
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *_8__1; // x8
  RoadmapButtonPrefab_c *v50; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x21
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *v52; // x20
  RoadmapButtonPrefab_c *v53; // x0
  System_String_o *v54; // x21
  AssetLoader_LoadEndDataHandler_o *v55; // x22
  Il2CppObject *v56; // x20
  System_Func_bool__o *v57; // x21
  UnityEngine_WaitUntil_o *v58; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  bool result; // w0
  Il2CppObject *v67; // x21
  AssetLoader_LoadEndDataHandler_o *v68; // x20
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *v69; // x8
  struct QuestBoardListViewManager___c__DisplayClass155_0_o *v70; // x22
  System_Action_o *_9__4; // x23
  int32_t id; // w21
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  Il2CppObject *v79; // x20
  System_Func_bool__o *v80; // x21
  UnityEngine_WaitUntil_o *v81; // x20
  PartyOrganizationUtility_o *v82; // x19
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7

  v3 = this;
  if ( (byte_4BB1577 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AssetManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&System_Func_bool__TypeInfo, v8);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1C13D24(&RoadmapButtonPrefab_TypeInfo, v10);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__0__, v11);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__1__, v12);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__2__, v13);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__3__, v14);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__4__, v15);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass155_0_TypeInfo, v16);
    sub_1C13D24(&UnityEngine_WaitUntil_TypeInfo, v17);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)sub_1C13D24(&StringLiteral_13823/*"Teal"*/, v18);
    byte_4BB1577 = 1;
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
      v67 = (Il2CppObject *)v3->fields.__8__1;
      v68 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v68,
        v67,
        Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13823/*"Teal"*/,
                                                                         v68,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v69 = v3->fields.__8__1;
        if ( !v69 )
          goto LABEL_51;
        ActionExtensions__Call(v69->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    v50 = RoadmapButtonPrefab_TypeInfo;
    if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
      v50 = RoadmapButtonPrefab_TypeInfo;
    }
    ASSET_DATA_PATH_ROADMAP = v50->static_fields->ASSET_DATA_PATH_ROADMAP;
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
        v52 = v3->fields.__8__1;
        if ( !v52 )
          goto LABEL_51;
        v52->fields.flag = 0;
        v53 = RoadmapButtonPrefab_TypeInfo;
        if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
          v53 = RoadmapButtonPrefab_TypeInfo;
          v52 = v3->fields.__8__1;
        }
        v54 = v53->static_fields->ASSET_DATA_PATH_ROADMAP;
        v55 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v55,
          (Il2CppObject *)v52,
          Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__1__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v54, v55, 1, 0LL);
      }
    }
    v56 = (Il2CppObject *)v3->fields.__8__1;
    v57 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v57,
      v56,
      Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__2__,
      0LL);
    v58 = (UnityEngine_WaitUntil_o *)sub_1C13F70(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v58, v57, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v58;
    p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
    sub_1C13CC8(p__2__current, (int64_t)v58, v60, v61, v62, v63, v64, v65);
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v21 = (Il2CppObject *)sub_1C13F70(QuestBoardListViewManager___c__DisplayClass155_0_TypeInfo);
  System_Object___ctor(v21, 0LL);
  v3->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass155_0_o *)v21;
  p__8__1 = &v3->fields.__8__1;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields.__8__1, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  v35 = (Il2CppObject *)v3->fields.__4__this;
  this->fields.__2__current = v35;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v35, v29, v30, v31, v32, v33, v34);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v3->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.__4__this,
    (int64_t)onCompleteLoad,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_51;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_51;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v45 = (EventRewardSceneMaster_o *)this;
    v46 = 0;
    while ( 1 )
    {
      if ( v46 >= max_length )
        sub_1C13F88(this, method);
      v47 = EnableEntityList->m_Items[v46];
      if ( !v47 || !v45 )
        goto LABEL_51;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__155_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v45,
                                                                         v47->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v46 >= max_length )
        goto LABEL_50;
    }
    v70 = *p__8__1;
    if ( *p__8__1 )
    {
      _9__4 = v70->fields.__9__4;
      v70->fields.flag = 0;
      id = v47->fields.id;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v70,
          Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__4__,
          0LL);
        v70->fields.__9__4 = _9__4;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v70->fields.__9__4, (int64_t)_9__4, v73, v74, v75, v76, v77, v78);
      }
      if ( _4__this )
      {
        QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__4, v48);
        goto LABEL_50;
      }
    }
LABEL_51:
    sub_1C13F80(this, method);
  }
LABEL_50:
  v79 = (Il2CppObject *)v3->fields.__8__1;
  v80 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v80,
    v79,
    Method_QuestBoardListViewManager___c__DisplayClass155_0__CoroutineLoadAsset_b__0__,
    0LL);
  v81 = (UnityEngine_WaitUntil_o *)sub_1C13F70(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v81, v80, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v81;
  v82 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C13CC8(v82, (int64_t)v81, v83, v84, v85, v86, v87, v88);
  result = 1;
  *(_DWORD *)&v82[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__155_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
      sub_1C13F80(this, method);
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
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_QuestBoardListViewManager__WaitFinish_d__113_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB156C & 1) == 0 )
  {
    sub_1C13D24(&QuestBoardListViewManager___c_TypeInfo, v1);
    byte_4BB156C = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)QuestBoardListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___DisplayRoadmapButtonToTopWarBoard_b__107_0(
        QuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 methodPtr_low; // x9
  _QWORD *monitor; // x8
  __int64 v7; // x19
  QuestTree_o *Instance; // x0
  __int64 v9; // x1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v11; // x20
  bool IsClosedWar; // w19

  if ( (byte_4BB156D & 1) == 0 )
  {
    sub_1C13D24(&QuestBoardListViewItem_TypeInfo, item);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    byte_4BB156D = 1;
  }
  if ( !item )
    goto LABEL_12;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1C14240(item);
    goto LABEL_15;
  }
  monitor = item[1].monitor;
  if ( monitor )
  {
    v7 = monitor[14];
    if ( v7 )
    {
      Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, *(_DWORD *)(v7 + 20), 0LL);
      if ( WarInfoByWarID )
      {
        v11 = WarInfoByWarID;
        IsClosedWar = MapControl_WarInfo__IsClosedWar(WarInfoByWarID, 0LL);
        Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v11, 0LL);
        if ( Instance )
        {
          LOBYTE(monitor) = WarEntity__HasFlag((WarEntity_o *)Instance, 128, 0LL) && !IsClosedWar;
          return (unsigned __int8)monitor & 1;
        }
LABEL_15:
        sub_1C13F80(Instance, v9);
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

  if ( (byte_4BB156E & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1C13D24(&CondType_TypeInfo, entity);
    byte_4BB156E = 1;
  }
  if ( !entity )
    sub_1C13F80(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38735352(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupDisp_b__120_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C13F80(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__158_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_4BB156F & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1C13D24(&CondType_TypeInfo, entity);
    byte_4BB156F = 1;
  }
  if ( !entity )
    sub_1C13F80(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38735352(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  float infoTime; // s8
  QuestBoardListViewManager_c *v26; // x0
  SlideFadeObject_o *v27; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3

  if ( (byte_4BB1570 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v3);
    sub_1C13D24(&QuestBoardListViewManager_TypeInfo, v4);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_1__RequestListObject_b__2__, v5);
    sub_1C13D24(&QuestBoardListViewManager___c__DisplayClass122_1_TypeInfo, v6);
    byte_4BB1570 = 1;
  }
  v7 = sub_1C13F70(QuestBoardListViewManager___c__DisplayClass122_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)Component_object, v18, v19, v20, v21, v22, v23);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, v24);
  v26 = QuestBoardListViewManager_TypeInfo;
  v27 = *(SlideFadeObject_o **)(v7 + 16);
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v26);
  v29 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass122_1__RequestListObject_b__2__,
    0LL);
  if ( !v27
    || (SlideFadeObject__SlideIn_34727380(v27, OUT_POS_OFS_X, infoTime, 0.0, v29, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, v9), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1C13F80(_4__this, v9);
  }
  QuestBoardListViewManager__ModifyAllRoadmapButtons(_4__this, 1, 1, v30);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x2
  struct QuestBoardListViewManager_o *v11; // x8
  SlideFadeObject_o *v12; // x20
  const MethodInfo *v13; // x5
  struct QuestBoardListViewManager_o *v14; // x20
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o *_9__5; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BB1571 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__4__, v6);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__5__, v7);
    byte_4BB1571 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                          gameObject,
                                          (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_19;
  v12 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v11->fields.initMode, 0.0, v10);
  if ( !v12 )
    goto LABEL_19;
  SlideFadeObject__ResetPosition(v12, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_19;
  if ( v14->fields.mFaded )
  {
    v14->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    v16 = (CommonUI_o *)_4__this;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v19, v20, v21, v22, v23, v24);
    }
    if ( v16 )
    {
      CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C13F80(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v26, v27, v28, v29, v30, v31);
  }
  QuestBoardListViewManager__SetMode(v14, 2, _9__5, 0, 0, v13);
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
    sub_1C13F80(this, method);
  QuestBoardListViewManager__EndSlideIn(this->fields.__4__this, this->fields.end_act, this->fields.isNotInit, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  QuestBoardListViewManager___c__DisplayClass122_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4BB1572 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (QuestBoardListViewManager___c__DisplayClass122_0_o *)sub_1C13D24(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__6__,
                                                                   v4);
    byte_4BB1572 = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__6__,
      0LL);
    v3->fields.__9__6 = _9__6;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields.__9__6, (int64_t)_9__6, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C13F80(this, method);
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
  __int64 v4; // x1
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4BB1573 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (QuestBoardListViewManager___c__DisplayClass122_0_o *)sub_1C13D24(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__10__,
                                                                   v4);
    byte_4BB1573 = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__10__,
      0LL);
    v3->fields.__9__10 = _9__10;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields.__9__10, (int64_t)_9__10, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C13F80(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SlideFadeObject_o *sfo; // x0
  const MethodInfo *v7; // x3
  struct QuestBoardListViewManager___c__DisplayClass122_0_o *CS___8__locals1; // x8
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  struct QuestBoardListViewManager___c__DisplayClass122_0_o *v11; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BB1574 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__3__, v5);
    byte_4BB1574 = 1;
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
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = AvalonSceneManager_TypeInfo;
    v10 = (CommonUI_o *)sfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    v11 = this->fields.CS___8__locals1;
    if ( v11 )
    {
      DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
      _9__3 = v11->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v11,
          Method_QuestBoardListViewManager___c__DisplayClass122_0__RequestListObject_b__3__,
          0LL);
        v11->fields.__9__3 = _9__3;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v11->fields.__9__3, (int64_t)_9__3, v14, v15, v16, v17, v18, v19);
      }
      if ( v10 )
      {
        CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C13F80(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    v7);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, result);
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
  struct QuestBoardListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(this, data);
  _4__this->fields._RoadmapAssetData_k__BackingField = data;
  sub_1C13CC8(
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
    sub_1C13F80(this, data);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct QuestBoardListViewManager_o *_4__this; // x8
  Il2CppObject *v16; // x21
  struct QuestBoardListViewManager_o *v17; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct QuestBoardListViewManager_o *v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  struct QuestBoardListViewManager_o *v30; // x8

  v4 = this;
  if ( (byte_4BB1575 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, assetData);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject____77555680, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)sub_1C13D24(&StringLiteral_6964/*"FortificationConfirmDialog"*/, v8);
    byte_4BB1575 = 1;
  }
  if ( !assetData )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)AssetData__GetObject_object__49747248(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6964/*"FortificationConfirmDialog"*/,
                                                                 (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v16 = (Il2CppObject *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&_4__this->fields.fortificationAssetData,
    (int64_t)assetData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__Instantiate_object__50417328(
          v16,
          transform,
          (const MethodInfo_3014EB0 *)Method_UnityEngine_Object_Instantiate_GameObject____77555680);
  v17->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v19;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v17->fields.fortificationWarningDialog,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  if ( !v26 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)v26->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v28 = v4->fields.__4__this;
  if ( !v28
    || (this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)v28->fields.fortificationWarningDialog) == 0LL
    || (v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v29, 0LL),
        (v30 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)v30->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass159_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_17:
    sub_1C13F80(this, assetData);
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

  if ( (byte_4BB1576 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB1576 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_1C13F80(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.effectComponent, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(v3, v4);
  --_4__this->fields.waitCount;
}