void __fastcall TreasureBoxDialogComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct TreasureBoxDialogComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FB862 & 1) == 0 )
  {
    sub_B16FFC(&TreasureBoxDialogComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19359/*"img_bg_ep"*/, v8);
    sub_B16FFC(&StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v9);
    byte_40FB862 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxDialogComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19359/*"img_bg_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19359/*"img_bg_ep"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TreasureBoxDialogComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  v12->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->EVENT_POINT_REWARD_AT, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_Color_array *v7; // x0
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

  if ( (byte_40FB861 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40FB861 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v7 = (struct UnityEngine_Color_array *)sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  this->fields.viewChangeButtonLabelEffectColors = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)&this->fields.itemDispTime = 0xC3A83126FLL;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x20
  signed __int64 size; // x21
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20

  if ( (byte_40FB85D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB85D = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    fallEffectObjList = this->fields.fallEffectObjList;
    this->fields.isSkip = 1;
    if ( fallEffectObjList )
    {
      size = fallEffectObjList->fields._size;
      if ( (int)size >= 1 )
      {
        v7 = 0LL;
        while ( 1 )
        {
          if ( v7 >= (unsigned int)fallEffectObjList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v8 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v7];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(v8, 0LL);
          }
          if ( (__int64)++v7 >= size )
            break;
          fallEffectObjList = this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_B170D4();
        }
      }
    }
  }
}


void __fastcall TreasureBoxDialogComponent__Close(
        TreasureBoxDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB856 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_TreasureBoxDialogComponent_EndClose__, v10);
    byte_40FB856 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall TreasureBoxDialogComponent__EndClose(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TreasureBoxDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FB855 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB855 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__CloseTreasureBoxDialog(Instance, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  UILabel_o *viewChangeButtonLabel; // x0
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v17; // x20
  int size; // w8
  UnityEngine_GameObject_o *v19; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB85E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB85E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_21:
    sub_B170D4();
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !isShowPossessionNum )
  {
    if ( max_length > 1 )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
      if ( !viewChangeButtonLabel )
        goto LABEL_21;
      goto LABEL_13;
    }
LABEL_23:
    sub_B17100(viewChangeButtonLabel, v6, v7);
    sub_B170A0();
  }
  if ( !max_length )
    goto LABEL_23;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  if ( !viewChangeButtonLabel )
    goto LABEL_21;
LABEL_13:
  v21.fields.b = *p_a;
  v21.fields.g = *p_b;
  v21.fields.r = *p_g;
  v21.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v21, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_21;
  v17 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v17 >= size )
      break;
    if ( size <= (unsigned int)v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v19 = resultItemObjList->fields._items->m_Items[v17];
    if ( v19 )
    {
      Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v19,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( Component_srcLineSprite )
      {
        ItemIconComponent__ShowPossession(Component_srcLineSprite, this->fields.isShowPossessionNum, 0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v17;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDialogComponent__Open(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        int32_t type,
        TreasureBoxEntity_o *treasureBoxEnt,
        System_Action_o *closeCallback,
        System_String_o *eventItemName,
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Array_o **v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x23
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x27
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x26
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x26
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  int32_t dialogType; // w8
  int32_t eventId; // w23
  WebViewManager_o *v99; // x0
  EventRewardMaster_o *v100; // x24
  WebViewManager_o *v101; // x0
  GiftMaster_o *v102; // x0
  GiftEntity_array *v103; // x25
  System_String_o *v104; // x0
  UILabel_o *v105; // x27
  Il2CppObject *v106; // x26
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  UILabel_o *titleNextItemLabel; // x27
  System_String_o *v110; // x0
  UILabel_o *titleAtLabel; // x27
  System_String_o *v112; // x0
  UILabel_o *atNameLabel; // x0
  UnityEngine_GameObject_o *pointRewardRoot; // x0
  UISprite_o *eventPointBg; // x26
  int64_t v116; // x0
  int64_t v117; // x26
  __int64 ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  GiftEntity_o *v121; // x8
  EventRewardEntity_o *v122; // x23
  GiftEntity_o *v123; // x8
  const MethodInfo *v124; // x3
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v128; // x25
  UnityEngine_GameObject_o *getPointRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x26
  System_String_o *v132; // x0
  GiftEntity_o *v133; // x8
  UISprite_o *totalEventPointIcon; // x26
  int32_t objectId; // w27
  GiftEntity_o *v136; // x8
  UILabel_o *getTitleLabel; // x26
  System_String_o *v138; // x0
  UILabel_o *getNumLabel; // x26
  GiftEntity_o *v140; // x8
  System_String_o *v141; // x27
  Il2CppObject *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v147; // x26
  System_String_o *v148; // x0
  UILabel_o *totalNumLabel; // x25
  System_String_o *v150; // x27
  Il2CppObject *v151; // x0
  System_String_o *v152; // x0
  __int64 v153; // x2
  System_Int32_array *v154; // x25
  int32_t maxItemDrawNum; // w9
  int32_t v156; // w8
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *v158; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_Component_o *transform; // x0
  UILabel_o *v161; // x23
  System_String_o *v162; // x0
  int v163; // w21
  UILabel_o *v164; // x23
  System_String_o *v165; // x0
  System_String_o *v166; // x0
  UnityEngine_Component_o *v167; // x0
  UnityEngine_GameObject_o *v168; // x0
  struct UIPanel_o *scrollView; // x0
  UIWidget_o *listBg; // x0
  UIWidget_o *v171; // x0
  UnityEngine_Component_o *v172; // x0
  UnityEngine_GameObject_o *v173; // x0
  UnityEngine_Component_o *v174; // x0
  UnityEngine_BoxCollider_o *v175; // x0
  UnityEngine_Component_o *v176; // x0
  UnityEngine_GameObject_o *v177; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v179; // x0
  UnityEngine_GameObject_o *v180; // x23
  UnityEngine_Transform_o *v181; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v183; // x0
  UnityEngine_GameObject_o *v184; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *v186; // x0
  UnityEngine_GameObject_o *v187; // x0
  UnityEngine_Component_o *v188; // x0
  WebViewObject_o *v189; // x0
  UnityEngine_Component_o *v190; // x0
  UnityEngine_GameObject_o *v191; // x0
  UnityEngine_Component_o *v192; // x0
  WebViewObject_o *v193; // x0
  UnityEngine_GameObject_o *v194; // x0
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  __int64 v198; // x4
  int32_t iconId; // w20
  System_Action_o *v200; // x21
  const MethodInfo *v201; // x4
  System_Action_o *v202; // x20
  __int64 v204; // [xsp+10h] [xbp-60h] BYREF
  int v205; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v206; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB854 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, giftIds);
    sub_B16FFC(&AtlasManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v15);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v19);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v20);
    sub_B16FFC(&int___TypeInfo, v21);
    sub_B16FFC(&int_TypeInfo, v22);
    sub_B16FFC(&long_TypeInfo, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v26);
    sub_B16FFC(&LocalizationManager_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__, v29);
    sub_B16FFC(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__, v30);
    sub_B16FFC(&TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v32);
    sub_B16FFC(&StringLiteral_13385/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v33);
    sub_B16FFC(&StringLiteral_13383/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v34);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v35);
    sub_B16FFC(&StringLiteral_13388/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v36);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v37);
    sub_B16FFC(&StringLiteral_13384/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v38);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v39);
    sub_B16FFC(&StringLiteral_22706/*"treasurechest_img_bg_reward"*/, v40);
    sub_B16FFC(&StringLiteral_13387/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v41);
    sub_B16FFC(&StringLiteral_13389/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v42);
    sub_B16FFC(&StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v43);
    sub_B16FFC(&StringLiteral_13386/*"TREASURE_BOX_EVENT_POINT"*/, v44);
    byte_40FB854 = 1;
  }
  v45 = sub_B170CC(
          TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo,
          giftIds,
          pointRewards,
          *(_QWORD *)&type,
          treasureBoxEnt);
  TreasureBoxDialogComponent___c__DisplayClass58_0___ctor(
    (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_109;
  *(_QWORD *)(v45 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)this, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v45 + 24) = giftIds;
  v52 = (System_Array_o **)(v45 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)giftIds, v53, v54, v55, v56, v57, v58);
  *(_QWORD *)(v45 + 32) = pointRewards;
  v59 = v45 + 32;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v45 + 32),
    (System_Int32_array **)pointRewards,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_109;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  if ( !treasureBoxEnt )
    goto LABEL_109;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70,
                                                                                                  v71);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v72;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v79,
                                                                                                  v80,
                                                                                                  v81,
                                                                                                  v82);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v83;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dialogType = this->fields.dialogType;
  if ( dialogType )
  {
    if ( dialogType == 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          GiftListById = GiftMaster__GetGiftListById(
                           MasterData_WarQuestSelectionMaster,
                           treasureBoxEnt->fields.extraGiftId,
                           0LL);
          if ( this->fields.skipCollider )
          {
            v128 = GiftListById;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
            if ( *v52 )
            {
              getPointRoot = this->fields.getPointRoot;
              this->fields.maxPlayCnt = (int32_t)(*v52)[1].monitor;
              if ( getPointRoot )
              {
                gameObject = UnityEngine_GameObject__get_gameObject(getPointRoot, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                  titleLabel = this->fields.titleLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v132 = LocalizationManager__Get((System_String_o *)StringLiteral_13384/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
                  if ( titleLabel )
                  {
                    UILabel__set_text(titleLabel, v132, 0LL);
                    if ( v128 )
                    {
                      if ( !v128->max_length )
                        goto LABEL_110;
                      v133 = v128->m_Items[0];
                      if ( !v133 )
                        goto LABEL_109;
                      totalEventPointIcon = this->fields.totalEventPointIcon;
                      objectId = v133->fields.objectId;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = AtlasManager__SetItem(
                                                                                  totalEventPointIcon,
                                                                                  objectId,
                                                                                  0LL);
                      if ( !v128->max_length )
                        goto LABEL_110;
                      v136 = v128->m_Items[0];
                      if ( v136 )
                      {
                        AtlasManager__SetItem(this->fields.getEventPointIcon, v136->fields.objectId, 0LL);
                        AtlasManager__SetEventUI(
                          this->fields.totalEventPointBg,
                          (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        AtlasManager__SetEventUI(
                          this->fields.getEventPointBg,
                          (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        getTitleLabel = this->fields.getTitleLabel;
                        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_13383/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0LL);
                        if ( getTitleLabel )
                        {
                          UILabel__set_text(getTitleLabel, v138, 0LL);
                          getNumLabel = this->fields.getNumLabel;
                          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (__int64)LocalizationManager__Get(
                                                                                               (System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/,
                                                                                               0LL);
                          if ( !v128->max_length )
                            goto LABEL_110;
                          v140 = v128->m_Items[0];
                          if ( v140 )
                          {
                            v141 = (System_String_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
                            v205 = this->fields.maxPlayCnt * v140->fields.num;
                            v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
                            v143 = System_String__Format(v141, v142, 0LL);
                            v144 = System_String__Concat_43743732((System_String_o *)StringLiteral_690/*"+"*/, v143, 0LL);
                            if ( getNumLabel )
                            {
                              UILabel__set_text(getNumLabel, v144, 0LL);
                              EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(
                                                    treasureBoxEnt->fields.eventId,
                                                    0LL);
                              totalTitleLabel = this->fields.totalTitleLabel;
                              v147 = EventPointNoGroup;
                              v148 = LocalizationManager__Get((System_String_o *)StringLiteral_13389/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0LL);
                              if ( totalTitleLabel )
                              {
                                UILabel__set_text(totalTitleLabel, v148, 0LL);
                                totalNumLabel = this->fields.totalNumLabel;
                                v150 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                                v204 = v147;
                                v151 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v204);
                                v152 = System_String__Format(v150, v151, 0LL);
                                if ( totalNumLabel )
                                {
                                  UILabel__set_text(totalNumLabel, v152, 0LL);
                                  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = sub_B17014(
                                                                                              int___TypeInfo,
                                                                                              (unsigned int)(this->fields.maxPlayCnt + 1),
                                                                                              v153);
                                  if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
                                  {
                                    v154 = (System_Int32_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
                                    if ( !*(_DWORD *)(ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 24) )
                                      goto LABEL_110;
                                    *(_DWORD *)(ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 32) = treasureBoxEnt->fields.extraGiftId;
                                    System_Array__Copy_42336008(
                                      *v52,
                                      0,
                                      (System_Array_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                      1,
                                      this->fields.maxPlayCnt,
                                      0LL);
                                    maxItemDrawNum = this->fields.maxItemDrawNum;
                                    v156 = this->fields.maxPlayCnt + 1;
                                    this->fields.maxPlayCnt = v156;
                                    if ( v156 <= maxItemDrawNum )
                                    {
                                      scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
                                      if ( !scrollBar )
                                        goto LABEL_109;
                                      v158 = UnityEngine_Component__get_gameObject(scrollBar, 0LL);
                                      if ( !v158 )
                                        goto LABEL_109;
                                      UnityEngine_GameObject__SetActive(v158, 0, 0LL);
                                    }
                                    if ( *(_QWORD *)v59 && *(_QWORD *)(*(_QWORD *)v59 + 24LL) )
                                    {
                                      closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
                                      if ( !closeButton )
                                        goto LABEL_109;
                                      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                               closeButton,
                                                                               0LL);
                                      if ( !transform )
                                        goto LABEL_109;
                                      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(transform, 1, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928);
                                      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
                                        goto LABEL_109;
                                      if ( !*(_DWORD *)(ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 24) )
                                        goto LABEL_110;
                                      v161 = *(UILabel_o **)(ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 32);
                                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      }
                                      v162 = LocalizationManager__Get((System_String_o *)StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
                                      if ( !v161 )
                                        goto LABEL_109;
                                      UILabel__set_text(v161, v162, 0LL);
                                    }
                                    v163 = 1;
                                    goto LABEL_104;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_109:
      sub_B170D4();
    }
    if ( dialogType == 2 )
    {
      eventId = treasureBoxEnt->fields.eventId;
      v99 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v99 )
      {
        v100 = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v99,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardMaster___);
        v101 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v101 )
        {
          v102 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v101,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( v102 )
          {
            v103 = GiftMaster__GetGiftListById(v102, treasureBoxEnt->fields.extraGiftId, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v104 = LocalizationManager__Get((System_String_o *)StringLiteral_13386/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
            v105 = this->fields.titleLabel;
            v106 = (Il2CppObject *)v104;
            v107 = LocalizationManager__Get((System_String_o *)StringLiteral_13388/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
            v108 = System_String__Format(v107, v106, 0LL);
            if ( v105 )
            {
              UILabel__set_text(v105, v108, 0LL);
              titleNextItemLabel = this->fields.titleNextItemLabel;
              v110 = LocalizationManager__Get((System_String_o *)StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
              if ( titleNextItemLabel )
              {
                UILabel__set_text(titleNextItemLabel, v110, 0LL);
                titleAtLabel = this->fields.titleAtLabel;
                v112 = LocalizationManager__Get((System_String_o *)StringLiteral_13387/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
                if ( titleAtLabel )
                {
                  UILabel__set_text(titleAtLabel, v112, 0LL);
                  atNameLabel = this->fields.atNameLabel;
                  if ( atNameLabel )
                  {
                    UILabel__set_text(atNameLabel, (System_String_o *)v106, 0LL);
                    pointRewardRoot = this->fields.pointRewardRoot;
                    if ( pointRewardRoot )
                    {
                      UnityEngine_GameObject__SetActive(pointRewardRoot, 1, 0LL);
                      eventPointBg = this->fields.eventPointBg;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
                      AtlasManager__SetEventUI(
                        this->fields.eventPointRewardBg,
                        (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/,
                        0LL);
                      v116 = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
                      if ( v100 )
                      {
                        v117 = v116;
                        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                                                                             v100,
                                                                                             eventId,
                                                                                             v116,
                                                                                             0LL);
                        if ( v103 )
                        {
                          if ( v103->max_length )
                          {
                            v121 = v103->m_Items[0];
                            if ( !v121 )
                              goto LABEL_109;
                            v122 = (EventRewardEntity_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
                            ComponentsInChildren_WarBoardControlPlayTalkUiComponent = AtlasManager__SetItem(
                                                                                        this->fields.eventPointSprite,
                                                                                        v121->fields.objectId,
                                                                                        0LL);
                            if ( v103->max_length )
                            {
                              v123 = v103->m_Items[0];
                              if ( !v123 )
                                goto LABEL_109;
                              AtlasManager__SetItem(this->fields.titleIcon, v123->fields.objectId, 0LL);
                              TreasureBoxDialogComponent__SetNextItemLabel(this, v117, v122, v124);
                              goto LABEL_103;
                            }
                          }
LABEL_110:
                          sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v119, v120);
                          sub_B170A0();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_109;
    }
  }
  else
  {
    v164 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v165 = LocalizationManager__Get((System_String_o *)StringLiteral_13385/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    v166 = System_String__Format(v165, (Il2CppObject *)eventItemName, 0LL);
    if ( !v164 )
      goto LABEL_109;
    UILabel__set_text(v164, v166, 0LL);
    v167 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
    if ( !v167 )
      goto LABEL_109;
    v168 = UnityEngine_Component__get_gameObject(v167, 0LL);
    if ( !v168 )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive(v168, 0, 0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_109;
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float, float, float, float))scrollView->klass->vtable._18_SetRect.method)(
      scrollView,
      scrollView->klass->vtable._19_ParentHasChanged.methodPtr,
      0.0,
      0.0,
      (float)this->fields.width,
      (float)this->fields.height);
    listBg = (UIWidget_o *)this->fields.listBg;
    if ( !listBg )
      goto LABEL_109;
    UIWidget__set_width(listBg, this->fields.width, 0LL);
    v171 = (UIWidget_o *)this->fields.listBg;
    if ( !v171 )
      goto LABEL_109;
    UIWidget__set_height(v171, this->fields.height + 10, 0LL);
    v172 = (UnityEngine_Component_o *)this->fields.listBg;
    if ( !v172 )
      goto LABEL_109;
    v173 = UnityEngine_Component__get_gameObject(v172, 0LL);
    GameObjectExtensions__SetLocalPosition(v173, this->fields.basePos, 0LL);
    v174 = (UnityEngine_Component_o *)this->fields.listBg;
    if ( !v174 )
      goto LABEL_109;
    v175 = (UnityEngine_BoxCollider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v174,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !v175 )
      goto LABEL_109;
    v206.fields.z = 0.0;
    v206.fields.y = (float)(this->fields.height + 10);
    v206.fields.x = (float)this->fields.width;
    UnityEngine_BoxCollider__set_size(v175, v206, 0LL);
    v176 = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !v176 )
      goto LABEL_109;
    v177 = UnityEngine_Component__get_gameObject(v176, 0LL);
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v177, 0LL);
    if ( !Parent )
      goto LABEL_109;
    v179 = UnityEngine_Component__get_gameObject(Parent, 0LL);
    if ( !v179 )
      goto LABEL_109;
    v180 = v179;
    v181 = UnityEngine_GameObject__get_transform(v179, 0LL);
    if ( !v181 )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition(v181, this->fields.basePos, 0LL);
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v180,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Component_srcLineSprite )
      goto LABEL_109;
    UIWidget__set_height(Component_srcLineSprite, this->fields.height, 0LL);
    v183 = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !v183 )
      goto LABEL_109;
    v184 = UnityEngine_Component__get_gameObject(v183, 0LL);
    Child = GameObjectExtensions__GetChild(v184, 0, 0LL);
    if ( !Child )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition(Child, this->fields.gridPos, 0LL);
    v186 = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !v186 )
      goto LABEL_109;
    v187 = UnityEngine_Component__get_gameObject(v186, 0LL);
    v188 = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v187, 0, 0LL);
    if ( !v188 )
      goto LABEL_109;
    v189 = UnityEngine_Component__GetComponent_WebViewObject_(
             v188,
             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v189 )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)v189, this->fields.height - 10, 0LL);
    v190 = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !v190 )
      goto LABEL_109;
    v191 = UnityEngine_Component__get_gameObject(v190, 0LL);
    v192 = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v191, 1, 0LL);
    if ( !v192 )
      goto LABEL_109;
    v193 = UnityEngine_Component__GetComponent_WebViewObject_(
             v192,
             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v193 )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)v193, this->fields.height, 0LL);
  }
LABEL_103:
  v154 = 0LL;
  v163 = 0;
LABEL_104:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v194 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v194 )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive(v194, 1, 0LL);
  if ( v163 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v200 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v195, v196, v197, v198);
    System_Action___ctor(
      v200,
      (Il2CppObject *)v45,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__,
      0LL);
    TreasureBoxDialogComponent__SetResultData(this, v154, iconId, v200, v201);
  }
  else
  {
    v202 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v195, v196, v197, v198);
    System_Action___ctor(
      v202,
      (Il2CppObject *)v45,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v202, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDialogComponent__SetIcon(
        TreasureBoxDialogComponent_o *this,
        GiftEntity_o *gift,
        BattleDropItem_o *pointRewards,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL4 v11; // w8
  int32_t *p_num; // x8
  int32_t *p_type; // x9
  int32_t *p_objectId; // x10
  int v15; // w24
  int32_t v16; // w22
  int32_t v17; // w20
  struct UnityEngine_GameObject_o *prefabResultItem; // x21
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v22; // x23
  int v23; // s0
  UnityEngine_Transform_o *v26; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  int32_t v28; // w3
  ItemIconComponent_o *v29; // x23
  TreasureBoxDialogComponent_o *v30; // x0
  const MethodInfo *v31; // x3
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB85B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, gift);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FB85B = 1;
  }
  if ( pointRewards )
  {
    v11 = pointRewards->fields.originalNum > 0;
    if ( gift )
    {
LABEL_5:
      p_num = &gift->fields.num;
      p_type = &gift->fields.type;
      p_objectId = &gift->fields.objectId;
      goto LABEL_12;
    }
  }
  else
  {
    v11 = 1;
    if ( gift )
      goto LABEL_5;
  }
  if ( !pointRewards )
    goto LABEL_27;
  p_type = &pointRewards->fields.type;
  if ( v11 )
    p_num = &pointRewards->fields.originalNum;
  else
    p_num = &pointRewards->fields.num;
  p_objectId = &pointRewards->fields.objectId;
LABEL_12:
  v15 = *p_num;
  v16 = *p_type;
  v17 = *p_objectId;
  prefabResultItem = this->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v19 )
    goto LABEL_27;
  v20 = v19;
  transform = UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_parent(transform, this->fields.listRoot, 0LL);
  v22 = UnityEngine_GameObject__get_transform(v20, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v22 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = UnityEngine_GameObject__get_transform(v20, 0LL);
  if ( !v26 )
    goto LABEL_27;
  v35.fields.x = this->fields.iconScale;
  v35.fields.y = v35.fields.x;
  v35.fields.z = v35.fields.x;
  UnityEngine_Transform__set_localScale(v26, v35, 0LL);
  Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v20,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_27;
  v28 = v15 <= 1 ? -1 : v15;
  v29 = Component_srcLineSprite;
  ItemIconComponent__SetGift(Component_srcLineSprite, v16, v17, v28, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v30, v29, v17, v31);
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resultItemObjList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__),
        (listRoot = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    listRoot,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_27:
    sub_B170D4();
  }
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class);
}


void __fastcall TreasureBoxDialogComponent__SetListData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  WebViewManager_o *Instance; // x0
  __int64 v11; // x8
  GiftMaster_o *v12; // x21
  unsigned __int64 v13; // x23
  const MethodInfo *v14; // x3
  struct UIPanel_o *basePanel; // x8
  TreasureBoxDialogComponent_o *v16; // x22
  unsigned __int64 v17; // x24

  v6 = this;
  if ( (byte_40FB85A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, giftIds);
    this = (TreasureBoxDialogComponent_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FB85A = 1;
  }
  if ( !giftIds )
  {
    if ( pointRewards )
    {
      v8 = *(_QWORD *)&pointRewards->max_length;
      if ( (int)v8 >= 1 )
      {
        v9 = 0LL;
        while ( v9 < (unsigned int)v8 )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0LL, pointRewards->m_Items[v9], method);
          LODWORD(v8) = pointRewards->max_length;
          if ( (__int64)++v9 >= (int)v8 )
            goto LABEL_9;
        }
LABEL_23:
        sub_B17100(this, giftIds, pointRewards);
        sub_B170A0();
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B170D4();
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    v11 = *(_QWORD *)&giftIds->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = (GiftMaster_o *)this;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v11 )
          goto LABEL_23;
        if ( !v12 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v12, giftIds->m_Items[v13 + 1], 0LL);
        if ( !this )
          goto LABEL_24;
        basePanel = this->fields.basePanel;
        v16 = this;
        if ( (int)basePanel >= 1 )
          break;
LABEL_21:
        LODWORD(v11) = giftIds->max_length;
        if ( (__int64)++v13 >= (int)v11 )
          return;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)basePanel )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v16->fields.basePanelList + v17), 0LL, v14);
        LODWORD(basePanel) = v16->fields.basePanel;
        if ( (__int64)++v17 >= (int)basePanel )
          goto LABEL_21;
      }
      goto LABEL_23;
    }
  }
}


void __fastcall TreasureBoxDialogComponent__SetNextItemLabel(
        TreasureBoxDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  bool isQp; // w0
  bool v17; // w20
  UILabel_o *nextItemNameLabel; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v20; // x0
  UILabel_o *nextItemLabel; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  int64_t v24; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FB85C & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, userEventPoint);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B16FFC(&StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B16FFC(&StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FB85C = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v20, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, v22, 0LL);
        nextItemNameLabel = this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v23 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v24 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
  v15 = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_22;
  UILabel__set_text(v12, v15, 0LL);
  isQp = EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v17 = isQp;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = this->fields.nextItemNameLabel;
  if ( v17 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v23 = nameText;
LABEL_21:
  UILabel__set_text(nextItemNameLabel, v23, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB85F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FB85F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, objectId, 0LL) )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_B170D4();
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDialogComponent__SetResultData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *resultIds,
        int32_t treasureIconId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  unsigned __int64 v18; // x28
  int v19; // w8
  void *v20; // x24
  unsigned int v21; // w23
  struct UnityEngine_GameObject_o *prefabResultItem; // x25
  int32_t *v23; // x27
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v27; // x26
  int v28; // s0
  UnityEngine_Transform_o *v31; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  ItemIconComponent_o *v33; // x26
  int32_t v34; // w3
  TreasureBoxDialogComponent_o *v35; // x0
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  struct UnityEngine_GameObject_o *v38; // x26
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x26
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Transform_o *v42; // x27
  UnityEngine_Transform_o *v43; // x0
  int v44; // s0
  UnityEngine_Transform_o *v47; // x0
  ItemIconComponent_o *v48; // x0
  ItemIconComponent_o *v49; // x25
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *iconListRoot; // x0
  WebViewObject_o *v54; // x0
  void *v55; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB857 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, resultIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FB857 = 1;
  }
  if ( resultIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    v17 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      v55 = MasterData_WarQuestSelectionMaster;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v17 )
          goto LABEL_47;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = GiftMaster__GetGiftListById(
                                               (GiftMaster_o *)MasterData_WarQuestSelectionMaster,
                                               resultIds->m_Items[v18 + 1],
                                               0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_46;
        v19 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
        v20 = MasterData_WarQuestSelectionMaster;
        if ( v19 >= 1 )
          break;
LABEL_43:
        MasterData_WarQuestSelectionMaster = v55;
        ++v18;
        LODWORD(v17) = resultIds->max_length;
        if ( (__int64)v18 >= (int)v17 )
          goto LABEL_44;
      }
      v21 = 0;
      while ( v21 < v19 )
      {
        prefabResultItem = this->fields.prefabResultItem;
        v23 = (int32_t *)*((_QWORD *)v20 + (int)v21 + 4);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v24 )
          goto LABEL_46;
        v25 = v24;
        transform = UnityEngine_GameObject__get_transform(v24, 0LL);
        if ( !transform )
          goto LABEL_46;
        UnityEngine_Transform__set_parent(transform, this->fields.listRoot, 0LL);
        v27 = UnityEngine_GameObject__get_transform(v25, 0LL);
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v27 )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
        v31 = UnityEngine_GameObject__get_transform(v25, 0LL);
        if ( !v31 )
          goto LABEL_46;
        v58.fields.x = this->fields.iconScale;
        v58.fields.y = v58.fields.x;
        v58.fields.z = v58.fields.x;
        UnityEngine_Transform__set_localScale(v31, v58, 0LL);
        Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v25,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v23 )
          goto LABEL_46;
        v33 = Component_srcLineSprite;
        if ( v23[7] <= 1 )
          v34 = -1;
        else
          v34 = v23[7];
        if ( !v18 )
          v34 *= resultIds->max_length - 1;
        if ( !Component_srcLineSprite )
          goto LABEL_46;
        ItemIconComponent__SetGift(Component_srcLineSprite, v23[5], v23[6], v34, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v35, v33, v23[6], v36);
        resultItemObjList = this->fields.resultItemObjList;
        if ( !resultItemObjList )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resultItemObjList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        v38 = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)v38,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v39 )
          goto LABEL_46;
        v40 = v39;
        v41 = UnityEngine_GameObject__get_transform(v39, 0LL);
        if ( !v41 )
          goto LABEL_46;
        UnityEngine_Transform__set_parent(v41, this->fields.iconListRoot, 0LL);
        v42 = UnityEngine_GameObject__get_transform(v40, 0LL);
        v43 = UnityEngine_GameObject__get_transform(v25, 0LL);
        if ( !v43 )
          goto LABEL_46;
        *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(v43, 0LL);
        if ( !v42 )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)&v44, 0LL);
        v47 = UnityEngine_GameObject__get_transform(v40, 0LL);
        if ( !v47 )
          goto LABEL_46;
        v59.fields.x = this->fields.iconScale;
        v59.fields.y = v59.fields.x;
        v59.fields.z = v59.fields.x;
        UnityEngine_Transform__set_localScale(v47, v59, 0LL);
        v48 = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v40,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v48 )
          goto LABEL_46;
        v49 = v48;
        ItemIconComponent__SetItem(v48, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v40, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v49, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        resultIconHideObjList = this->fields.resultIconHideObjList;
        if ( !resultIconHideObjList )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resultIconHideObjList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !listRoot )
          goto LABEL_46;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    listRoot,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Component_WebViewObject )
          goto LABEL_46;
        (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
          Component_WebViewObject,
          Component_WebViewObject->klass[1]._1.element_class);
        iconListRoot = (UnityEngine_Component_o *)this->fields.iconListRoot;
        if ( !iconListRoot )
          goto LABEL_46;
        v54 = UnityEngine_Component__GetComponent_WebViewObject_(
                iconListRoot,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !v54 )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = (void *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&v54->klass[1]._1.this_arg.bits)(
                                                       v54,
                                                       v54->klass[1]._1.element_class);
        v19 = *((_DWORD *)v20 + 6);
        if ( (int)++v21 >= v19 )
          goto LABEL_43;
      }
LABEL_47:
      sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
      sub_B170A0();
    }
LABEL_44:
    ActionExtensions__Call(callBack, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartDisp(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB858 & 1) == 0 )
  {
    sub_B16FFC(&TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo, method);
    byte_40FB858 = 1;
  }
  v6 = sub_B170CC(TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo, method, v2, v3, v4);
  TreasureBoxDialogComponent__StartDisp_d__62___ctor((TreasureBoxDialogComponent__StartDisp_d__62_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
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

  if ( (byte_40FB859 & 1) == 0 )
  {
    sub_B16FFC(&TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo, rewardAction);
    byte_40FB859 = 1;
  }
  v7 = sub_B170CC(TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo, rewardAction, method, v3, v4);
  TreasureBoxDialogComponent__StartRewardAction_d__63___ctor(
    (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = rewardAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)rewardAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FB860 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB860 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall TreasureBoxDialogComponent_RewardAction___ctor(
        TreasureBoxDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__StartDisp_d__62___ctor(
        TreasureBoxDialogComponent__StartDisp_d__62_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TreasureBoxDialogComponent__StartDisp_d__62__MoveNext(
        TreasureBoxDialogComponent__StartDisp_d__62_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool result; // w0
  BattleServantConfConponent_o *p_listRewardAction_5__2; // x21
  struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *listRewardAction_5__2; // x25
  UnityEngine_Component_o *iconListRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  int onError_high; // w8
  int32_t maxPlayCnt; // w9
  UnityEngine_Component_o *scrollBar; // x0
  int v40; // w21
  WebViewObject_o *v41; // x0
  UIProgressBar_o *v42; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int v59; // w23
  __int64 v60; // x22
  __int64 v61; // x23
  __int64 v62; // x24
  int size; // w8
  __int64 v64; // x22
  System_Collections_IEnumerator_o *started; // x0
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t v73; // w8
  TreasureBoxDialogComponent_RewardAction_o *v74; // x8
  int32_t playCnt; // w8
  BattleServantConfConponent_c *klass; // x22
  __int64 v77; // x19
  int namespaze; // w8
  __int64 v79; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v81; // x19
  int v82; // w8
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Component_o *v84; // x0
  WebViewObject_o *v85; // x0
  UnityEngine_Collider_o *skipCollider; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *resultIconHideObjList; // x0
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F7929 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v23);
    byte_40F7929 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v25 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v25, 0.3, 0LL);
      this->fields.__2__current = (Il2CppObject *)v25;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
      listRewardAction_5__2 = this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      iconListRoot = (UnityEngine_Component_o *)_4__this->fields.iconListRoot;
      if ( !iconListRoot )
        goto LABEL_35;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  iconListRoot,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !Component_WebViewObject )
        goto LABEL_35;
      onError_high = HIDWORD(Component_WebViewObject->fields.onError);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      scrollBar = (UnityEngine_Component_o *)_4__this->fields.scrollBar;
      v40 = maxPlayCnt % onError_high ? maxPlayCnt / onError_high + 1 : maxPlayCnt / onError_high;
      if ( !scrollBar )
        goto LABEL_35;
      v41 = UnityEngine_Component__GetComponent_WebViewObject_(
              scrollBar,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !v41 )
        goto LABEL_35;
      v42 = (UIProgressBar_o *)v41;
      value = UIProgressBar__get_value((UIProgressBar_o *)v41, 0LL);
      UIProgressBar__set_value(v42, (float)(1.0 / (float)((float)((float)v40 * 0.5) + -1.0)) + value, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v45, v46, v47, v48, v49, v50);
      v51 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    p_listRewardAction_5__2->klass = 0LL;
    sub_B16F98(p_listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_18:
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v52,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    p_listRewardAction_5__2->klass = (BattleServantConfConponent_c *)v52;
    sub_B16F98(p_listRewardAction_5__2, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v59 = 0;
      while ( v59 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v60 = sub_B170CC(TreasureBoxDialogComponent_RewardAction_TypeInfo, method, v2, v3, v4);
        System_Object___ctor((Il2CppObject *)v60, 0LL);
        if ( !v60 )
          goto LABEL_35;
        *(_DWORD *)(v60 + 16) = v59;
        *(_DWORD *)(v60 + 20) = v59 + _4__this->fields.playCnt;
        if ( !p_listRewardAction_5__2->klass )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listRewardAction_5__2->klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
        if ( ++v59 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD(p_listRewardAction_5__2->klass->_1.namespaze);
    listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)p_listRewardAction_5__2->klass;
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    v61 = 0LL;
    v62 = 32LL;
    while ( 1 )
    {
      size = listRewardAction_5__2->fields._size;
      if ( (int)v61 >= size )
        break;
      if ( size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v64 = *(__int64 *)((char *)&listRewardAction_5__2->fields._items->obj.klass + v62);
      if ( listRewardAction_5__2->fields._size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      started = TreasureBoxDialogComponent__StartRewardAction(
                  _4__this,
                  listRewardAction_5__2->fields._items->m_Items[v61],
                  0LL);
      v66 = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                     started,
                                     0LL);
      if ( v64 )
      {
        *(_QWORD *)(v64 + 32) = v66;
        sub_B16F98((BattleServantConfConponent_o *)(v64 + 32), v66, v67, v68, v69, v70, v71, v72);
        listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)p_listRewardAction_5__2->klass;
        ++v61;
        v62 += 8LL;
        if ( p_listRewardAction_5__2->klass )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v73 = listRewardAction_5__2->fields._size;
    if ( !v73 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v74 = listRewardAction_5__2->fields._items->m_Items[v73 - 1];
    if ( !v74 )
      goto LABEL_35;
    if ( v74->fields.isEnd )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_35;
      if ( !_4__this->fields.isSkip )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v51 = 2;
        goto LABEL_84;
      }
    }
    if ( _4__this->fields.isSkip )
      break;
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_68;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v90 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v90, scrollWait, 0LL);
      this->fields.__2__current = (Il2CppObject *)v90;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v90,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      v51 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v51;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  klass = p_listRewardAction_5__2->klass;
  if ( !p_listRewardAction_5__2->klass )
    goto LABEL_35;
  v77 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v77 >= namespaze )
      break;
    if ( namespaze <= (unsigned int)v77 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v79 = *(_QWORD *)&klass->_1.name[8 * v77 + 32];
    if ( v79 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_34804984(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v79 + 32),
        0LL);
      klass = p_listRewardAction_5__2->klass;
      ++v77;
      if ( p_listRewardAction_5__2->klass )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v81 = 0LL;
  while ( 1 )
  {
    v82 = resultItemObjList->fields._size;
    if ( (int)v81 >= v82 )
      break;
    if ( v82 <= (unsigned int)v81 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v83 = resultItemObjList->fields._items->m_Items[v81];
    if ( v83 )
    {
      UnityEngine_GameObject__SetActive(v83, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v81;
      if ( resultItemObjList )
        continue;
    }
    goto LABEL_35;
  }
  v84 = (UnityEngine_Component_o *)_4__this->fields.scrollBar;
  _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
  if ( !v84 )
    goto LABEL_35;
  v85 = UnityEngine_Component__GetComponent_WebViewObject_(
          v84,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !v85 )
    goto LABEL_35;
  UIProgressBar__set_value((UIProgressBar_o *)v85, 1.0, 0LL);
LABEL_68:
  skipCollider = (UnityEngine_Collider_o *)_4__this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL),
        (resultIconHideObjList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.resultIconHideObjList) == 0LL) )
  {
LABEL_35:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v97,
    resultIconHideObjList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v97,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v97.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v97,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 0;
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartDisp_d__62__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TreasureBoxDialogComponent__StartDisp_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TreasureBoxDialogComponent__StartDisp_d__62__System_Collections_IEnumerator_Reset(
        TreasureBoxDialogComponent__StartDisp_d__62_o *this,
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
  sub_B17000(&Method_TreasureBoxDialogComponent__StartDisp_d__62_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartDisp_d__62__System_Collections_IEnumerator_get_Current(
        TreasureBoxDialogComponent__StartDisp_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TreasureBoxDialogComponent__StartDisp_d__62__System_IDisposable_Dispose(
        TreasureBoxDialogComponent__StartDisp_d__62_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TreasureBoxDialogComponent__StartRewardAction_d__63___ctor(
        TreasureBoxDialogComponent__StartRewardAction_d__63_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxDialogComponent__StartRewardAction_d__63__MoveNext(
        TreasureBoxDialogComponent__StartRewardAction_d__63_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o **p_rewardAction; // x19
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_Transform_o *v30; // x0
  struct TreasureBoxDialogComponent_RewardAction_o *v31; // x8
  struct System_Collections_Generic_List_GameObject__o *v32; // x23
  __int64 v33; // x24
  UnityEngine_Transform_o *v34; // x21
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  int v37; // s0
  UnityEngine_Transform_o *v40; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fallEffectObjList; // x0
  float v42; // s8
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  UnityEngine_WaitForSeconds_o *v47; // x20
  Il2CppObject **v48; // x19
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v56; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v57; // t1
  __int64 v58; // x21
  UnityEngine_GameObject_o *v59; // x0
  struct System_Collections_Generic_List_GameObject__o *v60; // x20
  __int64 v61; // x21
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F792A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_18150/*"ef_treasure_drop"*/, v8);
    byte_40F792A = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = this->fields._i_5__2;
      this->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      this->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      this->fields._i_5__2 = 0;
    }
    rewardAction = this->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v15 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForSeconds___ctor(v15, itemDispWaitTime, 0LL);
        this->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v15,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(
                                              resultItemObjList->fields._items->m_Items[playCnt],
                                              0LL);
        if ( Parent )
        {
          transform = UnityEngine_Component__get_transform(Parent, 0LL);
          Effect = EventTreasureBoxPanelComponent__getEffect((System_String_o *)StringLiteral_18150/*"ef_treasure_drop"*/, transform, 0LL);
          if ( Effect )
          {
            v29 = Effect;
            v30 = UnityEngine_GameObject__get_transform(Effect, 0LL);
            v31 = this->fields.rewardAction;
            if ( v31 )
            {
              v32 = _4__this->fields.resultItemObjList;
              if ( v32 )
              {
                v33 = v31->fields.playCnt;
                v34 = v30;
                if ( v32->fields._size <= (unsigned int)v33 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v35 = v32->fields._items->m_Items[v33];
                if ( v35 )
                {
                  v36 = UnityEngine_GameObject__get_transform(v35, 0LL);
                  if ( v36 )
                  {
                    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(v36, 0LL);
                    if ( v34 )
                    {
                      UnityEngine_Transform__set_localPosition(v34, *(UnityEngine_Vector3_o *)&v37, 0LL);
                      v40 = UnityEngine_GameObject__get_transform(v29, 0LL);
                      if ( v40 )
                      {
                        v63.fields.x = 1.25;
                        v63.fields.y = 1.25;
                        v63.fields.z = 1.25;
                        UnityEngine_Transform__set_localScale(v40, v63, 0LL);
                        fallEffectObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.fallEffectObjList;
                        if ( fallEffectObjList )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            fallEffectObjList,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
                            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                          v42 = _4__this->fields.itemDispWaitTime;
                          v47 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(
                                                                  UnityEngine_WaitForSeconds_TypeInfo,
                                                                  v43,
                                                                  v44,
                                                                  v45,
                                                                  v46);
                          UnityEngine_WaitForSeconds___ctor(v47, v42, 0LL);
                          this->fields.__2__current = (Il2CppObject *)v47;
                          v48 = &this->fields.__2__current;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)v48,
                            (System_Int32_array **)v47,
                            v49,
                            v50,
                            v51,
                            v52,
                            v53,
                            v54);
                          *((_DWORD *)v48 - 2) = 2;
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_B170D4();
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_44;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &this->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v57 = this->fields.rewardAction;
    p_rewardAction = &this->fields.rewardAction;
    v56 = v57;
    if ( !v57 || !resultIconHideObjList )
      goto LABEL_44;
    v58 = v56->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v58 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v59 = resultIconHideObjList->fields._items->m_Items[v58];
    if ( !v59 )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive(v59, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_44;
  v60 = _4__this->fields.resultItemObjList;
  if ( !v60 )
    goto LABEL_44;
  v61 = (*p_rewardAction)->fields.playCnt;
  if ( v60->fields._size <= (unsigned int)v61 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v62 = v60->fields._items->m_Items[v61];
  if ( !v62 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v62, 1, 0LL);
  if ( !*p_rewardAction )
    goto LABEL_44;
  result = 0;
  (*p_rewardAction)->fields.isEnd = 1;
  return result;
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartRewardAction_d__63__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TreasureBoxDialogComponent__StartRewardAction_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TreasureBoxDialogComponent__StartRewardAction_d__63__System_Collections_IEnumerator_Reset(
        TreasureBoxDialogComponent__StartRewardAction_d__63_o *this,
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
  sub_B17000(&Method_TreasureBoxDialogComponent__StartRewardAction_d__63_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartRewardAction_d__63__System_Collections_IEnumerator_get_Current(
        TreasureBoxDialogComponent__StartRewardAction_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TreasureBoxDialogComponent__StartRewardAction_d__63__System_IDisposable_Dispose(
        TreasureBoxDialogComponent__StartRewardAction_d__63_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___ctor(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__0(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__2; // x21
  BaseDialog_o *_4__this; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7926 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__, v6);
    byte_40F7926 = 1;
  }
  _9__2 = this->fields.__9__2;
  _4__this = (BaseDialog_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !_4__this )
    sub_B170D4();
  BaseDialog__Open(_4__this, _9__2, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *_4__this; // x0
  AutomatedAction_o *Instance; // x0

  if ( (byte_40F7928 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_40F7928 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, 0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AutomatedAction__SetBackGroundUntouchable(Instance, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_40F7927 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12986/*"StartDisp"*/, method);
    byte_40F7927 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_12986/*"StartDisp"*/, 0LL);
}