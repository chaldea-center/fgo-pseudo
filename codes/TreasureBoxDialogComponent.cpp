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

  if ( (byte_4216806 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureBoxDialogComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19495/*"img_bg_ep"*/, v8);
    sub_B0D8A4(&StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v9);
    byte_4216806 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxDialogComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19495/*"img_bg_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19495/*"img_bg_ep"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TreasureBoxDialogComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  v12->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->EVENT_POINT_REWARD_AT, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4216805 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4216805 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_B0D8BC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  *(_QWORD *)&this->fields.itemDispTime = 0xC3A83126FLL;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  _BOOL8 v9; // x0

  if ( (byte_4216801 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4216801 = 1;
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v8 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v7];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
          if ( v9 )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34935276(v8, 0LL);
          }
          if ( (__int64)++v7 >= size )
            break;
          fallEffectObjList = this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_B0D97C(v9);
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
  System_Action_o *v13; // x20

  if ( (byte_42167FA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_TreasureBoxDialogComponent_EndClose__, v10);
    byte_42167FA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D840(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_42167F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42167F9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(skipCollider);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *viewChangeButtonLabel; // x0
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v15; // x20
  int size; // w8
  __int64 v17; // x0
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216802 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4216802 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_21:
    sub_B0D97C(viewChangeButtonLabel);
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
    v17 = sub_B0D9A8(viewChangeButtonLabel);
    sub_B0D948(v17, 0LL);
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
  v18.fields.b = *p_a;
  v18.fields.g = *p_b;
  v18.fields.r = *p_g;
  v18.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v18, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_21;
  v15 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v15 >= size )
      break;
    if ( size <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    viewChangeButtonLabel = (UILabel_o *)resultItemObjList->fields._items->m_Items[v15];
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v15;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_21;
  }
}


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
  __int64 viewChangeButton; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Array_o **v53; // x24
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x23
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x26
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x26
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  int32_t dialogType; // w8
  int32_t eventId; // w23
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x24
  GiftEntity_array *GiftListById; // x25
  System_String_o *v97; // x0
  UILabel_o *v98; // x27
  Il2CppObject *v99; // x26
  System_String_o *v100; // x0
  UILabel_o *titleNextItemLabel; // x27
  UILabel_o *titleAtLabel; // x27
  UISprite_o *eventPointBg; // x26
  int64_t v104; // x26
  GiftEntity_o *v105; // x8
  EventRewardEntity_o *v106; // x23
  GiftEntity_o *v107; // x8
  const MethodInfo *v108; // x3
  __int64 v109; // x25
  UILabel_o *titleLabel; // x26
  __int64 v111; // x8
  UISprite_o *totalEventPointIcon; // x26
  int32_t v113; // w27
  __int64 v114; // x8
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  __int64 v117; // x8
  System_String_o *v118; // x27
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v123; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v125; // x27
  Il2CppObject *v126; // x0
  System_Int32_array *v127; // x25
  int32_t maxItemDrawNum; // w9
  int32_t v129; // w8
  UILabel_o *v130; // x23
  int v131; // w21
  UILabel_o *v132; // x23
  System_String_o *v133; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x23
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  int32_t iconId; // w20
  System_Action_o *v143; // x21
  const MethodInfo *v144; // x4
  System_Action_o *v145; // x20
  __int64 v146; // x0
  __int64 v148; // [xsp+10h] [xbp-60h] BYREF
  int v149; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42167F8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, giftIds);
    sub_B0D8A4(&AtlasManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v15);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v19);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v20);
    sub_B0D8A4(&int___TypeInfo, v21);
    sub_B0D8A4(&int_TypeInfo, v22);
    sub_B0D8A4(&long_TypeInfo, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v26);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__, v29);
    sub_B0D8A4(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__, v30);
    sub_B0D8A4(&TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo, v31);
    sub_B0D8A4(&StringLiteral_13506/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v32);
    sub_B0D8A4(&StringLiteral_13485/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v33);
    sub_B0D8A4(&StringLiteral_13483/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v34);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v35);
    sub_B0D8A4(&StringLiteral_13488/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v36);
    sub_B0D8A4(&StringLiteral_22869/*"treasurechest_btn"*/, v37);
    sub_B0D8A4(&StringLiteral_13484/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v38);
    sub_B0D8A4(&StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v39);
    sub_B0D8A4(&StringLiteral_22875/*"treasurechest_img_bg_reward"*/, v40);
    sub_B0D8A4(&StringLiteral_13487/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v41);
    sub_B0D8A4(&StringLiteral_13489/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v42);
    sub_B0D8A4(&StringLiteral_2484/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v43);
    sub_B0D8A4(&StringLiteral_13486/*"TREASURE_BOX_EVENT_POINT"*/, v44);
    byte_42167F8 = 1;
  }
  v45 = sub_B0D974(TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo, giftIds, pointRewards);
  TreasureBoxDialogComponent___c__DisplayClass58_0___ctor(
    (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_109;
  *(_QWORD *)(v45 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
  *(_QWORD *)(v45 + 24) = giftIds;
  v53 = (System_Array_o **)(v45 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)giftIds, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v45 + 32) = pointRewards;
  v60 = v45 + 32;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v45 + 32),
    (System_Int32_array **)pointRewards,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_109;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_WebViewObject,
                       (System_String_o *)StringLiteral_22869/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_109;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v68,
                                                                                                  v69);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v70;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v77,
                                                                                                  v78);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v79;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dialogType = this->fields.dialogType;
  if ( dialogType )
  {
    if ( dialogType == 1 )
    {
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)viewChangeButton,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                        (GiftMaster_o *)viewChangeButton,
                                        treasureBoxEnt->fields.extraGiftId,
                                        0LL);
          if ( this->fields.skipCollider )
          {
            v109 = viewChangeButton;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
            if ( *v53 )
            {
              viewChangeButton = (__int64)this->fields.getPointRoot;
              this->fields.maxPlayCnt = (int32_t)(*v53)[1].monitor;
              if ( viewChangeButton )
              {
                viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)viewChangeButton,
                                              0LL);
                if ( viewChangeButton )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
                  titleLabel = this->fields.titleLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13484/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
                  if ( titleLabel )
                  {
                    UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
                    if ( v109 )
                    {
                      if ( !*(_DWORD *)(v109 + 24) )
                        goto LABEL_110;
                      v111 = *(_QWORD *)(v109 + 32);
                      if ( !v111 )
                        goto LABEL_109;
                      totalEventPointIcon = this->fields.totalEventPointIcon;
                      v113 = *(_DWORD *)(v111 + 24);
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      viewChangeButton = AtlasManager__SetItem(totalEventPointIcon, v113, 0LL);
                      if ( !*(_DWORD *)(v109 + 24) )
                        goto LABEL_110;
                      v114 = *(_QWORD *)(v109 + 32);
                      if ( v114 )
                      {
                        AtlasManager__SetItem(this->fields.getEventPointIcon, *(_DWORD *)(v114 + 24), 0LL);
                        AtlasManager__SetEventUI(
                          this->fields.totalEventPointBg,
                          (System_String_o *)StringLiteral_22875/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        AtlasManager__SetEventUI(
                          this->fields.getEventPointBg,
                          (System_String_o *)StringLiteral_22875/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        getTitleLabel = this->fields.getTitleLabel;
                        viewChangeButton = (__int64)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13483/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/,
                                                      0LL);
                        if ( getTitleLabel )
                        {
                          UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                          getNumLabel = this->fields.getNumLabel;
                          viewChangeButton = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/,
                                                        0LL);
                          if ( !*(_DWORD *)(v109 + 24) )
                            goto LABEL_110;
                          v117 = *(_QWORD *)(v109 + 32);
                          if ( v117 )
                          {
                            v118 = (System_String_o *)viewChangeButton;
                            v149 = this->fields.maxPlayCnt * *(_DWORD *)(v117 + 28);
                            v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149);
                            v120 = System_String__Format(v118, v119, 0LL);
                            viewChangeButton = (__int64)System_String__Concat_43849904(
                                                          (System_String_o *)StringLiteral_697/*"+"*/,
                                                          v120,
                                                          0LL);
                            if ( getNumLabel )
                            {
                              UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
                              EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(
                                                    treasureBoxEnt->fields.eventId,
                                                    0LL);
                              totalTitleLabel = this->fields.totalTitleLabel;
                              v123 = EventPointNoGroup;
                              viewChangeButton = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_13489/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/,
                                                            0LL);
                              if ( totalTitleLabel )
                              {
                                UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                                totalNumLabel = this->fields.totalNumLabel;
                                v125 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                                v148 = v123;
                                v126 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v148);
                                viewChangeButton = (__int64)System_String__Format(v125, v126, 0LL);
                                if ( totalNumLabel )
                                {
                                  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
                                  viewChangeButton = sub_B0D8BC(
                                                       int___TypeInfo,
                                                       (unsigned int)(this->fields.maxPlayCnt + 1));
                                  if ( viewChangeButton )
                                  {
                                    v127 = (System_Int32_array *)viewChangeButton;
                                    if ( !*(_DWORD *)(viewChangeButton + 24) )
                                      goto LABEL_110;
                                    *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
                                    System_Array__Copy_42582752(
                                      *v53,
                                      0,
                                      (System_Array_o *)viewChangeButton,
                                      1,
                                      this->fields.maxPlayCnt,
                                      0LL);
                                    maxItemDrawNum = this->fields.maxItemDrawNum;
                                    v129 = this->fields.maxPlayCnt + 1;
                                    this->fields.maxPlayCnt = v129;
                                    if ( v129 <= maxItemDrawNum )
                                    {
                                      viewChangeButton = (__int64)this->fields.scrollBar;
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)viewChangeButton,
                                                                    0LL);
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)viewChangeButton,
                                        0,
                                        0LL);
                                    }
                                    if ( *(_QWORD *)v60 && *(_QWORD *)(*(_QWORD *)v60 + 24LL) )
                                    {
                                      viewChangeButton = (__int64)this->fields.closeButton;
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)viewChangeButton,
                                                                    0LL);
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      viewChangeButton = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    (UnityEngine_Component_o *)viewChangeButton,
                                                                    1,
                                                                    (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368);
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      if ( !*(_DWORD *)(viewChangeButton + 24) )
                                        goto LABEL_110;
                                      v130 = *(UILabel_o **)(viewChangeButton + 32);
                                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      }
                                      viewChangeButton = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13506/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/,
                                                                    0LL);
                                      if ( !v130 )
                                        goto LABEL_109;
                                      UILabel__set_text(v130, (System_String_o *)viewChangeButton, 0LL);
                                    }
                                    v131 = 1;
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
      sub_B0D97C(viewChangeButton);
    }
    if ( dialogType == 2 )
    {
      eventId = treasureBoxEnt->fields.eventId;
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)viewChangeButton,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardMaster___);
        viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)viewChangeButton,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( viewChangeButton )
          {
            GiftListById = GiftMaster__GetGiftListById(
                             (GiftMaster_o *)viewChangeButton,
                             treasureBoxEnt->fields.extraGiftId,
                             0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v97 = LocalizationManager__Get((System_String_o *)StringLiteral_13486/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
            v98 = this->fields.titleLabel;
            v99 = (Il2CppObject *)v97;
            v100 = LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
            viewChangeButton = (__int64)System_String__Format(v100, v99, 0LL);
            if ( v98 )
            {
              UILabel__set_text(v98, (System_String_o *)viewChangeButton, 0LL);
              titleNextItemLabel = this->fields.titleNextItemLabel;
              viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2484/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
              if ( titleNextItemLabel )
              {
                UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
                titleAtLabel = this->fields.titleAtLabel;
                viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13487/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
                if ( titleAtLabel )
                {
                  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
                  viewChangeButton = (__int64)this->fields.atNameLabel;
                  if ( viewChangeButton )
                  {
                    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v99, 0LL);
                    viewChangeButton = (__int64)this->fields.pointRewardRoot;
                    if ( viewChangeButton )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
                      eventPointBg = this->fields.eventPointBg;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_22875/*"treasurechest_img_bg_reward"*/, 0LL);
                      AtlasManager__SetEventUI(
                        this->fields.eventPointRewardBg,
                        (System_String_o *)StringLiteral_22875/*"treasurechest_img_bg_reward"*/,
                        0LL);
                      viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
                      if ( MasterData_WarQuestSelectionMaster )
                      {
                        v104 = viewChangeButton;
                        viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      eventId,
                                                      viewChangeButton,
                                                      0LL);
                        if ( GiftListById )
                        {
                          if ( GiftListById->max_length )
                          {
                            v105 = GiftListById->m_Items[0];
                            if ( !v105 )
                              goto LABEL_109;
                            v106 = (EventRewardEntity_o *)viewChangeButton;
                            viewChangeButton = AtlasManager__SetItem(
                                                 this->fields.eventPointSprite,
                                                 v105->fields.objectId,
                                                 0LL);
                            if ( GiftListById->max_length )
                            {
                              v107 = GiftListById->m_Items[0];
                              if ( !v107 )
                                goto LABEL_109;
                              AtlasManager__SetItem(this->fields.titleIcon, v107->fields.objectId, 0LL);
                              TreasureBoxDialogComponent__SetNextItemLabel(this, v104, v106, v108);
                              goto LABEL_103;
                            }
                          }
LABEL_110:
                          v146 = sub_B0D9A8(viewChangeButton);
                          sub_B0D948(v146, 0LL);
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
    v132 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v133 = LocalizationManager__Get((System_String_o *)StringLiteral_13485/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v133, (Il2CppObject *)eventItemName, 0LL);
    if ( !v132 )
      goto LABEL_109;
    UILabel__set_text(v132, (System_String_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)this->fields.viewChangeButton;
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    (*(void (__fastcall **)(__int64, _QWORD, float, float, float, float))(*(_QWORD *)viewChangeButton + 600LL))(
      viewChangeButton,
      *(_QWORD *)(*(_QWORD *)viewChangeButton + 608LL),
      0.0,
      0.0,
      (float)this->fields.width,
      (float)this->fields.height);
    viewChangeButton = (__int64)this->fields.listBg;
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_width((UIWidget_o *)viewChangeButton, this->fields.width, 0LL);
    viewChangeButton = (__int64)this->fields.listBg;
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height + 10, 0LL);
    viewChangeButton = (__int64)this->fields.listBg;
    if ( !viewChangeButton )
      goto LABEL_109;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0LL);
    viewChangeButton = (__int64)this->fields.listBg;
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !viewChangeButton )
      goto LABEL_109;
    v150.fields.z = 0.0;
    v150.fields.y = (float)(this->fields.height + 10);
    v150.fields.x = (float)this->fields.width;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v150, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetParent(v135, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    v136 = (UnityEngine_GameObject_o *)viewChangeButton;
    viewChangeButton = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.basePos, 0LL);
    viewChangeButton = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v136,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v137, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.gridPos, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v138, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height - 10, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v139 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v139, 1, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
  }
LABEL_103:
  v127 = 0LL;
  v131 = 0;
LABEL_104:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v131 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v143 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v140, v141);
    System_Action___ctor(
      v143,
      (Il2CppObject *)v45,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__,
      0LL);
    TreasureBoxDialogComponent__SetResultData(this, v127, iconId, v143, v144);
  }
  else
  {
    v145 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v140, v141);
    System_Action___ctor(
      v145,
      (Il2CppObject *)v45,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v145, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDialogComponent__SetIcon(
        TreasureBoxDialogComponent_o *this,
        GiftEntity_o *gift,
        BattleDropItem_o *pointRewards,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *v6; // x19
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
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x21
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *transform; // x23
  int v21; // s0
  int32_t v24; // w3
  ItemIconComponent_o *v25; // x23
  TreasureBoxDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42167FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, gift);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    this = (TreasureBoxDialogComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_42167FF = 1;
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
  prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           prefabResultItem,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_27;
  v19 = (UnityEngine_GameObject_o *)this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v19, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !this )
    goto LABEL_27;
  v28.fields.x = v6->fields.iconScale;
  v28.fields.y = v28.fields.x;
  v28.fields.z = v28.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v28, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v19,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_27;
  v24 = v15 <= 1 ? -1 : v15;
  v25 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v16, v17, v24, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v26, v25, v17, v27);
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__),
        (this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot) == 0LL)
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_27:
    sub_B0D97C(this);
  }
  ((void (__fastcall *)(TreasureBoxDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
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
  __int64 v10; // x8
  GiftMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  const MethodInfo *v13; // x3
  struct UIPanel_o *basePanel; // x8
  TreasureBoxDialogComponent_o *v15; // x22
  unsigned __int64 v16; // x24
  __int64 v17; // x0

  v6 = this;
  if ( (byte_42167FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, giftIds);
    this = (TreasureBoxDialogComponent_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42167FE = 1;
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
        v17 = sub_B0D9A8(this);
        sub_B0D948(v17, 0LL);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_B0D97C(this);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    v10 = *(_QWORD *)&giftIds->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = (GiftMaster_o *)this;
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)v10 )
          goto LABEL_23;
        if ( !v11 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v11, giftIds->m_Items[v12 + 1], 0LL);
        if ( !this )
          goto LABEL_24;
        basePanel = this->fields.basePanel;
        v15 = this;
        if ( (int)basePanel >= 1 )
          break;
LABEL_21:
        LODWORD(v10) = giftIds->max_length;
        if ( (__int64)++v12 >= (int)v10 )
          return;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)basePanel )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v15->fields.basePanelList + v16), 0LL, v13);
        LODWORD(basePanel) = v15->fields.basePanel;
        if ( (__int64)++v16 >= (int)basePanel )
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
  System_String_o *nextItemNameLabel; // x0
  char v16; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v19; // x1
  int64_t v20; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4216800 & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, userEventPoint);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B0D8A4(&StringLiteral_2487/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B0D8A4(&StringLiteral_2485/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4216800 = 1;
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
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2487/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2485/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v19 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B0D97C(nextItemNameLabel);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v20 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  nextItemNameLabel = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_22;
  UILabel__set_text(v12, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v16 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v16 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v19 = nameText;
LABEL_21:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v19, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216803 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4216803 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_B0D97C(Instance);
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
  void *Instance; // x0
  __int64 v14; // x8
  unsigned __int64 v15; // x28
  int v16; // w8
  void *v17; // x24
  unsigned int v18; // w23
  struct UnityEngine_GameObject_o *prefabResultItem; // x25
  int32_t *v20; // x27
  UnityEngine_GameObject_o *v21; // x25
  UnityEngine_Transform_o *transform; // x26
  int v23; // s0
  ItemIconComponent_o *v26; // x26
  int32_t v27; // w3
  TreasureBoxDialogComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  struct UnityEngine_GameObject_o *v30; // x26
  UnityEngine_GameObject_o *v31; // x26
  UnityEngine_Transform_o *v32; // x27
  int v33; // s0
  ItemIconComponent_o *v36; // x25
  __int64 v37; // x0
  void *v38; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42167FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, resultIds);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_42167FB = 1;
  }
  if ( resultIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B0D97C(Instance);
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    v14 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      v38 = Instance;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v14 )
          goto LABEL_47;
        if ( !Instance )
          goto LABEL_46;
        Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v15 + 1], 0LL);
        if ( !Instance )
          goto LABEL_46;
        v16 = *((_DWORD *)Instance + 6);
        v17 = Instance;
        if ( v16 >= 1 )
          break;
LABEL_43:
        Instance = v38;
        ++v15;
        LODWORD(v14) = resultIds->max_length;
        if ( (__int64)v15 >= (int)v14 )
          goto LABEL_44;
      }
      v18 = 0;
      while ( v18 < v16 )
      {
        prefabResultItem = this->fields.prefabResultItem;
        v20 = (int32_t *)*((_QWORD *)v17 + (int)v18 + 4);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v21 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v21, 0LL);
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v21, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v41.fields.x = this->fields.iconScale;
        v41.fields.y = v41.fields.x;
        v41.fields.z = v41.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v41, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v21,
                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v20 )
          goto LABEL_46;
        v26 = (ItemIconComponent_o *)Instance;
        if ( v20[7] <= 1 )
          v27 = -1;
        else
          v27 = v20[7];
        if ( !v15 )
          v27 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_46;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v20[5], v20[6], v27, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v28, v26, v20[6], v29);
        Instance = this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        v30 = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)v30,
                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v31 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        v32 = UnityEngine_GameObject__get_transform(v31, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v21, 0LL);
        if ( !Instance )
          goto LABEL_46;
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !v32 )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v31, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v42.fields.x = this->fields.iconScale;
        v42.fields.y = v42.fields.x;
        v42.fields.z = v42.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v42, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v31,
                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_46;
        v36 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v31, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v36, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_46;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_46;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        Instance = this->fields.iconListRoot;
        if ( !Instance )
          goto LABEL_46;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v16 = *((_DWORD *)v17 + 6);
        if ( (int)++v18 >= v16 )
          goto LABEL_43;
      }
LABEL_47:
      v37 = sub_B0D9A8(Instance);
      sub_B0D948(v37, 0LL);
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
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42167FC & 1) == 0 )
  {
    sub_B0D8A4(&TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo, method);
    byte_42167FC = 1;
  }
  v4 = sub_B0D974(TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo, method, v2);
  TreasureBoxDialogComponent__StartDisp_d__62___ctor((TreasureBoxDialogComponent__StartDisp_d__62_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
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

  if ( (byte_42167FD & 1) == 0 )
  {
    sub_B0D8A4(&TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo, rewardAction);
    byte_42167FD = 1;
  }
  v5 = sub_B0D974(TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo, rewardAction, method);
  TreasureBoxDialogComponent__StartRewardAction_d__63___ctor(
    (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)rewardAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4216804 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216804 = 1;
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
    sub_B0D97C(0LL);
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
  __int64 v2; // x2
  TreasureBoxDialogComponent__StartDisp_d__62_o *v3; // x19
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
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v20; // x20
  bool result; // w0
  TreasureBoxDialogComponent__StartDisp_d__62_o **p_listRewardAction_5__2; // x21
  TreasureBoxDialogComponent__StartDisp_d__62_o *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v26; // w21
  UIProgressBar_o *v27; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v30; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  int v32; // w23
  __int64 v33; // x22
  __int64 v34; // x23
  __int64 v35; // x24
  int _2__current; // w8
  __int64 v37; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v39; // w8
  __int64 v40; // x8
  int32_t playCnt; // w8
  TreasureBoxDialogComponent__StartDisp_d__62_o *v42; // x22
  __int64 v43; // x19
  int v44; // w8
  __int64 v45; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v47; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_42125C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v17);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v18);
    byte_42125C6 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v20 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v20, 0.3, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v20;
      sub_B0D840(&v3->fields.__2__current, v20);
      result = 1;
      v3->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v3->fields._listRewardAction_5__2;
      v3->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v3->fields._listRewardAction_5__2;
      listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v3->fields._listRewardAction_5__2;
      v3->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.scrollBar;
      v26 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v27 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v27, (float)(1.0 / (float)((float)((float)v26 * 0.5) + -1.0)) + value, 0LL);
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      v30 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v3->fields._listRewardAction_5__2;
      v3->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    *p_listRewardAction_5__2 = 0LL;
    sub_B0D840(p_listRewardAction_5__2, 0LL);
LABEL_18:
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v31;
    sub_B0D840(p_listRewardAction_5__2, v31);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v32 = 0;
      while ( v32 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v33 = sub_B0D974(TreasureBoxDialogComponent_RewardAction_TypeInfo, method, v2);
        System_Object___ctor((Il2CppObject *)v33, 0LL);
        if ( !v33 )
          goto LABEL_35;
        *(_DWORD *)(v33 + 16) = v32;
        *(_DWORD *)(v33 + 20) = v32 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
        if ( ++v32 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    v34 = 0LL;
    v35 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v34 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v37 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v35);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      started = TreasureBoxDialogComponent__StartRewardAction(
                  _4__this,
                  *(TreasureBoxDialogComponent_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                                + 8 * v34
                                                                + 32),
                  0LL);
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                                                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                started,
                                                                0LL);
      if ( v37 )
      {
        *(_QWORD *)(v37 + 32) = this;
        sub_B0D840(v37 + 32, this);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v34;
        v35 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v39 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v40 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v39 - 1) + 32);
    if ( !v40 )
      goto LABEL_35;
    if ( *(_BYTE *)(v40 + 24) )
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
        v3->fields.__2__current = 0LL;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        v30 = 2;
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
      v51 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v51, scrollWait, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v51;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v51);
      v30 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v30;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  v42 = *p_listRewardAction_5__2;
  if ( !*p_listRewardAction_5__2 )
    goto LABEL_35;
  v43 = 0LL;
  while ( 1 )
  {
    v44 = (int)v42->fields.__2__current;
    if ( (int)v43 >= v44 )
      break;
    if ( v44 <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v45 = *(_QWORD *)(*(_QWORD *)&v42->fields.__1__state + 8 * v43 + 32);
    if ( v45 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_34930796(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v45 + 32),
        0LL);
      v42 = *p_listRewardAction_5__2;
      ++v43;
      if ( *p_listRewardAction_5__2 )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v47 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v47 >= size )
      break;
    if ( size <= (unsigned int)v47 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)resultItemObjList->fields._items->m_Items[v47];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v47;
      if ( resultItemObjList )
        continue;
    }
    goto LABEL_35;
  }
  this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.scrollBar;
  _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
  if ( !this )
    goto LABEL_35;
  this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !this )
    goto LABEL_35;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
LABEL_68:
  this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.skipCollider;
  if ( !this
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL),
        (this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.resultIconHideObjList) == 0LL) )
  {
LABEL_35:
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v52.fields.current;
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
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_TreasureBoxDialogComponent__StartDisp_d__62_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  TreasureBoxDialogComponent__StartRewardAction_d__63_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o **p_rewardAction; // x19
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v19; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v20; // x8
  struct System_Collections_Generic_List_GameObject__o *v21; // x23
  __int64 v22; // x24
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  float v27; // s8
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_WaitForSeconds_o *v30; // x20
  Il2CppObject **v31; // x19
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v33; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v34; // t1
  __int64 v35; // x21
  struct System_Collections_Generic_List_GameObject__o *v36; // x20
  __int64 v37; // x21
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_42125C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)sub_B0D8A4(&StringLiteral_18275/*"ef_treasure_drop"*/, v6);
    byte_42125C7 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v3->fields._i_5__2;
      v3->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      v3->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      v3->fields.__1__state = -1;
      v3->fields._i_5__2 = 0;
    }
    rewardAction = v3->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v13 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
        UnityEngine_WaitForSeconds___ctor(v13, itemDispWaitTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v13;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v13);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)GameObjectExtensions__GetParent(
                                                                          resultItemObjList->fields._items->m_Items[playCnt],
                                                                          0LL);
        if ( this )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                            (System_String_o *)StringLiteral_18275/*"ef_treasure_drop"*/,
                                                                            transform,
                                                                            0LL);
          if ( this )
          {
            v19 = (UnityEngine_GameObject_o *)this;
            this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
            v20 = v3->fields.rewardAction;
            if ( v20 )
            {
              v21 = _4__this->fields.resultItemObjList;
              if ( v21 )
              {
                v22 = v20->fields.playCnt;
                v23 = (UnityEngine_Transform_o *)this;
                if ( v21->fields._size <= (unsigned int)v22 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v21->fields._items->m_Items[v22];
                if ( this )
                {
                  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                  if ( this )
                  {
                    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
                    if ( v23 )
                    {
                      UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
                      this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                        v19,
                                                                                        0LL);
                      if ( this )
                      {
                        v38.fields.x = 1.25;
                        v38.fields.y = 1.25;
                        v38.fields.z = 1.25;
                        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v38, 0LL);
                        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)_4__this->fields.fallEffectObjList;
                        if ( this )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
                            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                          v27 = _4__this->fields.itemDispWaitTime;
                          v30 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(
                                                                  UnityEngine_WaitForSeconds_TypeInfo,
                                                                  v28,
                                                                  v29);
                          UnityEngine_WaitForSeconds___ctor(v30, v27, 0LL);
                          v3->fields.__2__current = (Il2CppObject *)v30;
                          v31 = &v3->fields.__2__current;
                          sub_B0D840(v31, v30);
                          *((_DWORD *)v31 - 2) = 2;
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
    sub_B0D97C(this);
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_44;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &v3->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v34 = v3->fields.rewardAction;
    p_rewardAction = &v3->fields.rewardAction;
    v33 = v34;
    if ( !v34 || !resultIconHideObjList )
      goto LABEL_44;
    v35 = v33->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)resultIconHideObjList->fields._items->m_Items[v35];
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_44;
  v36 = _4__this->fields.resultItemObjList;
  if ( !v36 )
    goto LABEL_44;
  v37 = (*p_rewardAction)->fields.playCnt;
  if ( v36->fields._size <= (unsigned int)v37 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v36->fields._items->m_Items[v37];
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_TreasureBoxDialogComponent__StartRewardAction_d__63_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_42125C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)sub_B0D8A4(
                                                                   &Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__,
                                                                   v4);
    byte_42125C3 = 1;
  }
  monitor = (System_Action_o *)v3[2].monitor;
  klass = (BaseDialog_o *)v3[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(monitor, v3, Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__, 0LL);
    v3[2].monitor = monitor;
    sub_B0D840(&v3[2].monitor, monitor);
  }
  if ( !klass )
    sub_B0D97C(this);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_42125C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_42125C5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, 0LL),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(_4__this);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_42125C4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13086/*"StartDisp"*/, method);
    byte_42125C4 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13086/*"StartDisp"*/, 0LL);
}