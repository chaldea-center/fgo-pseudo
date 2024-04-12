void __fastcall TreasureBoxDialogComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TreasureBoxDialogComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B2338 & 1) == 0 )
  {
    sub_B52984(&TreasureBoxDialogComponent_TypeInfo);
    sub_B52984(&StringLiteral_19580/*"img_bg_ep"*/);
    sub_B52984(&StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    byte_42B2338 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxDialogComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19580/*"img_bg_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19580/*"img_bg_ep"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TreasureBoxDialogComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  v9->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->EVENT_POINT_REWARD_AT, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
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

  if ( (byte_42B2337 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_Color___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42B2337 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_B5299C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  *(_QWORD *)&this->fields.itemDispTime = 0xC3A83126FLL;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x20
  signed __int64 size; // x21
  unsigned __int64 v5; // x22
  UnityEngine_Object_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B2333 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2333 = 1;
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
        v5 = 0LL;
        while ( 1 )
        {
          if ( v5 >= (unsigned int)fallEffectObjList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v6 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v5];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
          if ( v7 )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35616956(v6, 0LL);
          }
          if ( (__int64)++v5 >= size )
            break;
          fallEffectObjList = this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_B52A5C(v7, v8);
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
  System_Action_o *v10; // x20

  if ( (byte_42B232C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_TreasureBoxDialogComponent_EndClose__);
    byte_42B232C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_42B232B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B232B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(skipCollider, v3);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v4; // x1
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v13; // x20
  int size; // w8
  __int64 v15; // x0
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B2334 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2334 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_21:
    sub_B52A5C(viewChangeButtonLabel, v4);
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
    v15 = sub_B52A88(viewChangeButtonLabel);
    sub_B52A28(v15, 0LL);
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
  v16.fields.b = *p_a;
  v16.fields.g = *p_b;
  v16.fields.r = *p_g;
  v16.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v16, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_21;
  v13 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v13 >= size )
      break;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    viewChangeButtonLabel = (UILabel_o *)resultItemObjList->fields._items->m_Items[v13];
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v13;
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
  __int64 v14; // x22
  __int64 viewChangeButton; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Array_o **v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x26
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x26
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  int32_t dialogType; // w8
  int32_t eventId; // w23
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x24
  GiftEntity_array *GiftListById; // x25
  System_String_o *v63; // x0
  UILabel_o *v64; // x27
  Il2CppObject *v65; // x26
  System_String_o *v66; // x0
  UILabel_o *titleNextItemLabel; // x27
  UILabel_o *titleAtLabel; // x27
  UISprite_o *eventPointBg; // x26
  int64_t v70; // x26
  GiftEntity_o *v71; // x8
  EventRewardEntity_o *v72; // x23
  GiftEntity_o *v73; // x8
  const MethodInfo *v74; // x3
  __int64 v75; // x25
  UILabel_o *titleLabel; // x26
  __int64 v77; // x8
  UISprite_o *totalEventPointIcon; // x26
  int32_t v79; // w27
  __int64 v80; // x8
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  __int64 v83; // x8
  System_String_o *v84; // x27
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v89; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v91; // x27
  Il2CppObject *v92; // x0
  System_Int32_array *v93; // x25
  int32_t maxItemDrawNum; // w9
  int32_t v95; // w8
  UILabel_o *v96; // x23
  int v97; // w21
  UILabel_o *v98; // x23
  System_String_o *v99; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v101; // x0
  UnityEngine_GameObject_o *v102; // x23
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  int32_t iconId; // w20
  System_Action_o *v107; // x21
  const MethodInfo *v108; // x4
  System_Action_o *v109; // x20
  __int64 v110; // x0
  __int64 v112; // [xsp+10h] [xbp-60h] BYREF
  int v113; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B232A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__);
    sub_B52984(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__);
    sub_B52984(&TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo);
    sub_B52984(&StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_B52984(&StringLiteral_13538/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_13536/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_13541/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_13537/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_22989/*"treasurechest_img_bg_reward"*/);
    sub_B52984(&StringLiteral_13540/*"TREASURE_BOX_EVENT_POINT_REWARD"*/);
    sub_B52984(&StringLiteral_13542/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/);
    sub_B52984(&StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_B52984(&StringLiteral_13539/*"TREASURE_BOX_EVENT_POINT"*/);
    byte_42B232A = 1;
  }
  v14 = sub_B52A54(TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo);
  TreasureBoxDialogComponent___c__DisplayClass58_0___ctor(
    (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_109;
  *(_QWORD *)(v14 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = giftIds;
  v23 = (System_Array_o **)(v14 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)giftIds, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v14 + 32) = pointRewards;
  v30 = v14 + 32;
  sub_B52920(
    (BattleServantConfConponent_o *)(v14 + 32),
    (System_Int32_array **)pointRewards,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_109;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_WebViewObject,
                       (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_109;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v38;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v45;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dialogType = this->fields.dialogType;
  if ( dialogType )
  {
    if ( dialogType == 1 )
    {
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)viewChangeButton,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                        (GiftMaster_o *)viewChangeButton,
                                        treasureBoxEnt->fields.extraGiftId,
                                        0LL);
          if ( this->fields.skipCollider )
          {
            v75 = viewChangeButton;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
            if ( *v23 )
            {
              viewChangeButton = (__int64)this->fields.getPointRoot;
              this->fields.maxPlayCnt = (int32_t)(*v23)[1].monitor;
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
                  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13537/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
                  if ( titleLabel )
                  {
                    UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
                    if ( v75 )
                    {
                      if ( !*(_DWORD *)(v75 + 24) )
                        goto LABEL_110;
                      v77 = *(_QWORD *)(v75 + 32);
                      if ( !v77 )
                        goto LABEL_109;
                      totalEventPointIcon = this->fields.totalEventPointIcon;
                      v79 = *(_DWORD *)(v77 + 24);
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      viewChangeButton = AtlasManager__SetItem(totalEventPointIcon, v79, 0LL);
                      if ( !*(_DWORD *)(v75 + 24) )
                        goto LABEL_110;
                      v80 = *(_QWORD *)(v75 + 32);
                      if ( v80 )
                      {
                        AtlasManager__SetItem(this->fields.getEventPointIcon, *(_DWORD *)(v80 + 24), 0LL);
                        AtlasManager__SetEventUI(
                          this->fields.totalEventPointBg,
                          (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        AtlasManager__SetEventUI(
                          this->fields.getEventPointBg,
                          (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        getTitleLabel = this->fields.getTitleLabel;
                        viewChangeButton = (__int64)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13536/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/,
                                                      0LL);
                        if ( getTitleLabel )
                        {
                          UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                          getNumLabel = this->fields.getNumLabel;
                          viewChangeButton = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/,
                                                        0LL);
                          if ( !*(_DWORD *)(v75 + 24) )
                            goto LABEL_110;
                          v83 = *(_QWORD *)(v75 + 32);
                          if ( v83 )
                          {
                            v84 = (System_String_o *)viewChangeButton;
                            v113 = this->fields.maxPlayCnt * *(_DWORD *)(v83 + 28);
                            v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
                            v86 = System_String__Format(v84, v85, 0LL);
                            viewChangeButton = (__int64)System_String__Concat_44568316(
                                                          (System_String_o *)StringLiteral_701/*"+"*/,
                                                          v86,
                                                          0LL);
                            if ( getNumLabel )
                            {
                              UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
                              EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(
                                                    treasureBoxEnt->fields.eventId,
                                                    0LL);
                              totalTitleLabel = this->fields.totalTitleLabel;
                              v89 = EventPointNoGroup;
                              viewChangeButton = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_13542/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/,
                                                            0LL);
                              if ( totalTitleLabel )
                              {
                                UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                                totalNumLabel = this->fields.totalNumLabel;
                                v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                                v112 = v89;
                                v92 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v112);
                                viewChangeButton = (__int64)System_String__Format(v91, v92, 0LL);
                                if ( totalNumLabel )
                                {
                                  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
                                  viewChangeButton = sub_B5299C(
                                                       int___TypeInfo,
                                                       (unsigned int)(this->fields.maxPlayCnt + 1));
                                  if ( viewChangeButton )
                                  {
                                    v93 = (System_Int32_array *)viewChangeButton;
                                    if ( !*(_DWORD *)(viewChangeButton + 24) )
                                      goto LABEL_110;
                                    *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
                                    System_Array__Copy_43421420(
                                      *v23,
                                      0,
                                      (System_Array_o *)viewChangeButton,
                                      1,
                                      this->fields.maxPlayCnt,
                                      0LL);
                                    maxItemDrawNum = this->fields.maxItemDrawNum;
                                    v95 = this->fields.maxPlayCnt + 1;
                                    this->fields.maxPlayCnt = v95;
                                    if ( v95 <= maxItemDrawNum )
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
                                    if ( *(_QWORD *)v30 && *(_QWORD *)(*(_QWORD *)v30 + 24LL) )
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
                                                                    (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      if ( !*(_DWORD *)(viewChangeButton + 24) )
                                        goto LABEL_110;
                                      v96 = *(UILabel_o **)(viewChangeButton + 32);
                                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      }
                                      viewChangeButton = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/,
                                                                    0LL);
                                      if ( !v96 )
                                        goto LABEL_109;
                                      UILabel__set_text(v96, (System_String_o *)viewChangeButton, 0LL);
                                    }
                                    v97 = 1;
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
      sub_B52A5C(viewChangeButton, v16);
    }
    if ( dialogType == 2 )
    {
      eventId = treasureBoxEnt->fields.eventId;
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)viewChangeButton,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardMaster___);
        viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)viewChangeButton,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
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
            v63 = LocalizationManager__Get((System_String_o *)StringLiteral_13539/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
            v64 = this->fields.titleLabel;
            v65 = (Il2CppObject *)v63;
            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
            viewChangeButton = (__int64)System_String__Format(v66, v65, 0LL);
            if ( v64 )
            {
              UILabel__set_text(v64, (System_String_o *)viewChangeButton, 0LL);
              titleNextItemLabel = this->fields.titleNextItemLabel;
              viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
              if ( titleNextItemLabel )
              {
                UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
                titleAtLabel = this->fields.titleAtLabel;
                viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13540/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
                if ( titleAtLabel )
                {
                  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
                  viewChangeButton = (__int64)this->fields.atNameLabel;
                  if ( viewChangeButton )
                  {
                    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v65, 0LL);
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
                      AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
                      AtlasManager__SetEventUI(
                        this->fields.eventPointRewardBg,
                        (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/,
                        0LL);
                      viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
                      if ( MasterData_WarQuestSelectionMaster )
                      {
                        v70 = viewChangeButton;
                        viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      eventId,
                                                      viewChangeButton,
                                                      0LL);
                        if ( GiftListById )
                        {
                          if ( GiftListById->max_length )
                          {
                            v71 = GiftListById->m_Items[0];
                            if ( !v71 )
                              goto LABEL_109;
                            v72 = (EventRewardEntity_o *)viewChangeButton;
                            viewChangeButton = AtlasManager__SetItem(
                                                 this->fields.eventPointSprite,
                                                 v71->fields.objectId,
                                                 0LL);
                            if ( GiftListById->max_length )
                            {
                              v73 = GiftListById->m_Items[0];
                              if ( !v73 )
                                goto LABEL_109;
                              AtlasManager__SetItem(this->fields.titleIcon, v73->fields.objectId, 0LL);
                              TreasureBoxDialogComponent__SetNextItemLabel(this, v70, v72, v74);
                              goto LABEL_103;
                            }
                          }
LABEL_110:
                          v110 = sub_B52A88(viewChangeButton);
                          sub_B52A28(v110, 0LL);
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
    v98 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_13538/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v99, (Il2CppObject *)eventItemName, 0LL);
    if ( !v98 )
      goto LABEL_109;
    UILabel__set_text(v98, (System_String_o *)viewChangeButton, 0LL);
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
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !viewChangeButton )
      goto LABEL_109;
    v114.fields.z = 0.0;
    v114.fields.y = (float)(this->fields.height + 10);
    v114.fields.x = (float)this->fields.width;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v114, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetParent(v101, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    v102 = (UnityEngine_GameObject_o *)viewChangeButton;
    viewChangeButton = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.basePos, 0LL);
    viewChangeButton = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v102,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v103, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.gridPos, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v104, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height - 10, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v105, 1, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
  }
LABEL_103:
  v93 = 0LL;
  v97 = 0;
LABEL_104:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v97 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v107 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v107,
      (Il2CppObject *)v14,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__,
      0LL);
    TreasureBoxDialogComponent__SetResultData(this, v93, iconId, v107, v108);
  }
  else
  {
    v109 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v109,
      (Il2CppObject *)v14,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v109, 0, 0LL);
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
  _BOOL4 v7; // w8
  int32_t *p_num; // x8
  int32_t *p_type; // x9
  int32_t *p_objectId; // x10
  int v11; // w24
  int32_t v12; // w22
  int32_t v13; // w20
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x23
  int v17; // s0
  int32_t v20; // w3
  ItemIconComponent_o *v21; // x23
  TreasureBoxDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42B2331 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (TreasureBoxDialogComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2331 = 1;
  }
  if ( pointRewards )
  {
    v7 = pointRewards->fields.originalNum > 0;
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
    v7 = 1;
    if ( gift )
      goto LABEL_5;
  }
  if ( !pointRewards )
    goto LABEL_27;
  p_type = &pointRewards->fields.type;
  if ( v7 )
    p_num = &pointRewards->fields.originalNum;
  else
    p_num = &pointRewards->fields.num;
  p_objectId = &pointRewards->fields.objectId;
LABEL_12:
  v11 = *p_num;
  v12 = *p_type;
  v13 = *p_objectId;
  prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           prefabResultItem,
                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_27;
  v15 = (UnityEngine_GameObject_o *)this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !this )
    goto LABEL_27;
  v24.fields.x = v6->fields.iconScale;
  v24.fields.y = v24.fields.x;
  v24.fields.z = v24.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v15,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_27;
  v20 = v11 <= 1 ? -1 : v11;
  v21 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v12, v13, v20, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v22, v21, v13, v23);
  UnityEngine_GameObject__SetActive(v15, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__),
        (this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot) == 0LL)
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_27:
    sub_B52A5C(this, gift);
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
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x1
  __int64 v10; // x8
  GiftMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  const MethodInfo *v13; // x3
  struct UIPanel_o *basePanel; // x8
  TreasureBoxDialogComponent_o *v15; // x22
  unsigned __int64 v16; // x24
  __int64 v17; // x0

  v6 = this;
  if ( (byte_42B2330 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    this = (TreasureBoxDialogComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2330 = 1;
  }
  if ( !giftIds )
  {
    if ( pointRewards )
    {
      v7 = *(_QWORD *)&pointRewards->max_length;
      if ( (int)v7 >= 1 )
      {
        v8 = 0LL;
        while ( v8 < (unsigned int)v7 )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0LL, pointRewards->m_Items[v8], method);
          LODWORD(v7) = pointRewards->max_length;
          if ( (__int64)++v8 >= (int)v7 )
            goto LABEL_9;
        }
LABEL_23:
        v17 = sub_B52A88(this);
        sub_B52A28(v17, 0LL);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_B52A5C(this, v9);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
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
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v11; // x1
  char v12; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v15; // x1
  int64_t v16; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B2332 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_B52984(&StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2332 = 1;
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
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v15 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B52A5C(nextItemNameLabel, v11);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v7 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v16 = eventRewardEnt->fields.point - userEventPoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  nextItemNameLabel = System_String__Format(v8, v9, 0LL);
  if ( !v7 )
    goto LABEL_22;
  UILabel__set_text(v7, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v12 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v12 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v15 = nameText;
LABEL_21:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v15, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2335 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2335 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B52A5C(Instance, v7);
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
  void *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x28
  int v11; // w8
  void *v12; // x24
  unsigned int v13; // w23
  struct UnityEngine_GameObject_o *prefabResultItem; // x25
  int32_t *v15; // x27
  UnityEngine_GameObject_o *v16; // x25
  UnityEngine_Transform_o *transform; // x26
  int v18; // s0
  ItemIconComponent_o *v21; // x26
  int32_t v22; // w3
  TreasureBoxDialogComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  struct UnityEngine_GameObject_o *v25; // x26
  UnityEngine_GameObject_o *v26; // x26
  UnityEngine_Transform_o *v27; // x27
  int v28; // s0
  ItemIconComponent_o *v31; // x25
  __int64 v32; // x0
  void *v33; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B232D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B232D = 1;
  }
  if ( resultIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B52A5C(Instance, v8);
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
    v9 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      v33 = Instance;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v9 )
          goto LABEL_47;
        if ( !Instance )
          goto LABEL_46;
        Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v10 + 1], 0LL);
        if ( !Instance )
          goto LABEL_46;
        v11 = *((_DWORD *)Instance + 6);
        v12 = Instance;
        if ( v11 >= 1 )
          break;
LABEL_43:
        Instance = v33;
        ++v10;
        LODWORD(v9) = resultIds->max_length;
        if ( (__int64)v10 >= (int)v9 )
          goto LABEL_44;
      }
      v13 = 0;
      while ( v13 < v11 )
      {
        prefabResultItem = this->fields.prefabResultItem;
        v15 = (int32_t *)*((_QWORD *)v12 + (int)v13 + 4);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v16 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v16, 0LL);
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v36.fields.x = this->fields.iconScale;
        v36.fields.y = v36.fields.x;
        v36.fields.z = v36.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v36, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v16,
                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v15 )
          goto LABEL_46;
        v21 = (ItemIconComponent_o *)Instance;
        if ( v15[7] <= 1 )
          v22 = -1;
        else
          v22 = v15[7];
        if ( !v10 )
          v22 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_46;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v15[5], v15[6], v22, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v23, v21, v15[6], v24);
        Instance = this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
        v25 = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)v25,
                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v26 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        v27 = UnityEngine_GameObject__get_transform(v26, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !Instance )
          goto LABEL_46;
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !v27 )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v26, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v37.fields.x = this->fields.iconScale;
        v37.fields.y = v37.fields.x;
        v37.fields.z = v37.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v37, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v26,
                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_46;
        v31 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v26, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v31, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_46;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          goto LABEL_43;
      }
LABEL_47:
      v32 = sub_B52A88(Instance);
      sub_B52A28(v32, 0LL);
    }
LABEL_44:
    ActionExtensions__Call(callBack, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartDisp(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B232E & 1) == 0 )
  {
    sub_B52984(&TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo);
    byte_42B232E = 1;
  }
  v3 = sub_B52A54(TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo);
  TreasureBoxDialogComponent__StartDisp_d__62___ctor((TreasureBoxDialogComponent__StartDisp_d__62_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
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

  if ( (byte_42B232F & 1) == 0 )
  {
    sub_B52984(&TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo);
    byte_42B232F = 1;
  }
  v5 = sub_B52A54(TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo);
  TreasureBoxDialogComponent__StartRewardAction_d__63___ctor(
    (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)rewardAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B2336 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2336 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
  TreasureBoxDialogComponent__StartDisp_d__62_o *v2; // x19
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v4; // x20
  bool result; // w0
  TreasureBoxDialogComponent__StartDisp_d__62_o **p_listRewardAction_5__2; // x21
  TreasureBoxDialogComponent__StartDisp_d__62_o *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v10; // w21
  UIProgressBar_o *v11; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v14; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  int v16; // w23
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  int _2__current; // w8
  __int64 v21; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v23; // w8
  __int64 v24; // x8
  int32_t playCnt; // w8
  TreasureBoxDialogComponent__StartDisp_d__62_o *v26; // x22
  __int64 v27; // x19
  int v28; // w8
  __int64 v29; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v31; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v35; // x20
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_42ADA04 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
    sub_B52984(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TreasureBoxDialogComponent_RewardAction_TypeInfo);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42ADA04 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v4, 0.3, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v4;
      sub_B52920(&v2->fields.__2__current);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v2->fields._listRewardAction_5__2;
      listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.scrollBar;
      v10 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v11 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v11, (float)(1.0 / (float)((float)((float)v10 * 0.5) + -1.0)) + value, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      v14 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    *p_listRewardAction_5__2 = 0LL;
    sub_B52920(p_listRewardAction_5__2);
LABEL_18:
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v15;
    sub_B52920(p_listRewardAction_5__2);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v16 = 0;
      while ( v16 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v17 = sub_B52A54(TreasureBoxDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v17, 0LL);
        if ( !v17 )
          goto LABEL_35;
        *(_DWORD *)(v17 + 16) = v16;
        *(_DWORD *)(v17 + 20) = v16 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
        if ( ++v16 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    v18 = 0LL;
    v19 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v18 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v21 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v19);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      started = TreasureBoxDialogComponent__StartRewardAction(
                  _4__this,
                  *(TreasureBoxDialogComponent_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                                + 8 * v18
                                                                + 32),
                  0LL);
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                started,
                                                                0LL);
      if ( v21 )
      {
        *(_QWORD *)(v21 + 32) = this;
        sub_B52920(v21 + 32);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v18;
        v19 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v23 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v24 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v23 - 1) + 32);
    if ( !v24 )
      goto LABEL_35;
    if ( *(_BYTE *)(v24 + 24) )
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
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B52920(p__2__current);
        v14 = 2;
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
      v35 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v35, scrollWait, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      v14 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v14;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  v26 = *p_listRewardAction_5__2;
  if ( !*p_listRewardAction_5__2 )
    goto LABEL_35;
  v27 = 0LL;
  while ( 1 )
  {
    v28 = (int)v26->fields.__2__current;
    if ( (int)v27 >= v28 )
      break;
    if ( v28 <= (unsigned int)v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v29 = *(_QWORD *)(*(_QWORD *)&v26->fields.__1__state + 8 * v27 + 32);
    if ( v29 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_35612476(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v29 + 32),
        0LL);
      v26 = *p_listRewardAction_5__2;
      ++v27;
      if ( *p_listRewardAction_5__2 )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v31 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v31 >= size )
      break;
    if ( size <= (unsigned int)v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)resultItemObjList->fields._items->m_Items[v31];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v31;
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
                                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
    sub_B52A5C(this, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields.current;
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
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TreasureBoxDialogComponent__StartDisp_d__62_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  TreasureBoxDialogComponent__StartRewardAction_d__63_o *v2; // x19
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o **p_rewardAction; // x19
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v16; // x8
  struct System_Collections_Generic_List_GameObject__o *v17; // x23
  __int64 v18; // x24
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  float v23; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  Il2CppObject **v25; // x19
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v27; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v28; // t1
  __int64 v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x20
  __int64 v31; // x21
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_42ADA05 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)sub_B52984(&StringLiteral_18353/*"ef_treasure_drop"*/);
    byte_42ADA05 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v2->fields._i_5__2;
      v2->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      v2->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      v2->fields._i_5__2 = 0;
    }
    rewardAction = v2->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v9 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v9, itemDispWaitTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = &v2->fields.__2__current;
        sub_B52920(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)GameObjectExtensions__GetParent(
                                                                          resultItemObjList->fields._items->m_Items[playCnt],
                                                                          0LL);
        if ( this )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                            (System_String_o *)StringLiteral_18353/*"ef_treasure_drop"*/,
                                                                            transform,
                                                                            0LL);
          if ( this )
          {
            v15 = (UnityEngine_GameObject_o *)this;
            this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
            v16 = v2->fields.rewardAction;
            if ( v16 )
            {
              v17 = _4__this->fields.resultItemObjList;
              if ( v17 )
              {
                v18 = v16->fields.playCnt;
                v19 = (UnityEngine_Transform_o *)this;
                if ( v17->fields._size <= (unsigned int)v18 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v17->fields._items->m_Items[v18];
                if ( this )
                {
                  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                  if ( this )
                  {
                    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
                    if ( v19 )
                    {
                      UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
                      this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                        v15,
                                                                                        0LL);
                      if ( this )
                      {
                        v32.fields.x = 1.25;
                        v32.fields.y = 1.25;
                        v32.fields.z = 1.25;
                        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v32, 0LL);
                        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)_4__this->fields.fallEffectObjList;
                        if ( this )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
                            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
                          v23 = _4__this->fields.itemDispWaitTime;
                          v24 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
                          UnityEngine_WaitForSeconds___ctor(v24, v23, 0LL);
                          v2->fields.__2__current = (Il2CppObject *)v24;
                          v25 = &v2->fields.__2__current;
                          sub_B52920(v25);
                          *((_DWORD *)v25 - 2) = 2;
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
    sub_B52A5C(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_44;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &v2->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v28 = v2->fields.rewardAction;
    p_rewardAction = &v2->fields.rewardAction;
    v27 = v28;
    if ( !v28 || !resultIconHideObjList )
      goto LABEL_44;
    v29 = v27->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)resultIconHideObjList->fields._items->m_Items[v29];
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_44;
  v30 = _4__this->fields.resultItemObjList;
  if ( !v30 )
    goto LABEL_44;
  v31 = (*p_rewardAction)->fields.playCnt;
  if ( v30->fields._size <= (unsigned int)v31 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v30->fields._items->m_Items[v31];
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TreasureBoxDialogComponent__StartRewardAction_d__63_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v2; // x19
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_42ADA01 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)sub_B52984(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__);
    byte_42ADA01 = 1;
  }
  monitor = (System_Action_o *)v2[2].monitor;
  klass = (BaseDialog_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__, 0LL);
    v2[2].monitor = monitor;
    sub_B52920(&v2[2].monitor);
  }
  if ( !klass )
    sub_B52A5C(this, method);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_42ADA03 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_42ADA03 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, 0LL),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_42ADA02 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13139/*"StartDisp"*/);
    byte_42ADA02 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13139/*"StartDisp"*/, 0LL);
}