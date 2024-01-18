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

  if ( (byte_418999A & 1) == 0 )
  {
    sub_B2C35C(&TreasureBoxDialogComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19433/*"img_bg_ep"*/, v8);
    sub_B2C35C(&StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v9);
    byte_418999A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxDialogComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19433/*"img_bg_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19433/*"img_bg_ep"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TreasureBoxDialogComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  v12->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->EVENT_POINT_REWARD_AT, v13, v14, v15, v16, v17, v18, v19);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4189999 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4189999 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_B2C2F8(
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
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v10; // x1

  if ( (byte_4189995 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4189995 = 1;
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
            UnityEngine_Object__Destroy_35314896(v8, 0LL);
          }
          if ( (__int64)++v7 >= size )
            break;
          fallEffectObjList = this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_B2C434(v9, v10);
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
  System_Action_o *v11; // x20

  if ( (byte_418998E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_TreasureBoxDialogComponent_EndClose__, v10);
    byte_418998E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_418998D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418998D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(skipCollider, v4);
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
  __int64 v7; // x1
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v16; // x20
  int size; // w8
  __int64 v18; // x0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189996 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4189996 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_21:
    sub_B2C434(viewChangeButtonLabel, v7);
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
    v18 = sub_B2C460(viewChangeButtonLabel);
    sub_B2C400(v18, 0LL);
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
  v19.fields.b = *p_a;
  v19.fields.g = *p_b;
  v19.fields.r = *p_g;
  v19.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v19, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_21;
  v16 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v16 >= size )
      break;
    if ( size <= (unsigned int)v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    viewChangeButtonLabel = (UILabel_o *)resultItemObjList->fields._items->m_Items[v16];
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v16;
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
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Array_o **v54; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x26
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  int32_t dialogType; // w8
  int32_t eventId; // w23
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x24
  GiftEntity_array *GiftListById; // x25
  System_String_o *v94; // x0
  UILabel_o *v95; // x27
  Il2CppObject *v96; // x26
  System_String_o *v97; // x0
  UILabel_o *titleNextItemLabel; // x27
  UILabel_o *titleAtLabel; // x27
  UISprite_o *eventPointBg; // x26
  int64_t v101; // x26
  GiftEntity_o *v102; // x8
  EventRewardEntity_o *v103; // x23
  GiftEntity_o *v104; // x8
  const MethodInfo *v105; // x3
  __int64 v106; // x25
  UILabel_o *titleLabel; // x26
  __int64 v108; // x8
  UISprite_o *totalEventPointIcon; // x26
  int32_t v110; // w27
  __int64 v111; // x8
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  __int64 v114; // x8
  System_String_o *v115; // x27
  Il2CppObject *v116; // x0
  System_String_o *v117; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v120; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v122; // x27
  Il2CppObject *v123; // x0
  System_Int32_array *v124; // x25
  int32_t maxItemDrawNum; // w9
  int32_t v126; // w8
  UILabel_o *v127; // x23
  int v128; // w21
  UILabel_o *v129; // x23
  System_String_o *v130; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x23
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x0
  int32_t iconId; // w20
  System_Action_o *v138; // x21
  const MethodInfo *v139; // x4
  System_Action_o *v140; // x20
  __int64 v141; // x0
  __int64 v143; // [xsp+10h] [xbp-60h] BYREF
  int v144; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418998C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, giftIds);
    sub_B2C35C(&AtlasManager_TypeInfo, v14);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v15);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v19);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v20);
    sub_B2C35C(&int___TypeInfo, v21);
    sub_B2C35C(&int_TypeInfo, v22);
    sub_B2C35C(&long_TypeInfo, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v26);
    sub_B2C35C(&LocalizationManager_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__, v29);
    sub_B2C35C(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__, v30);
    sub_B2C35C(&TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo, v31);
    sub_B2C35C(&StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v32);
    sub_B2C35C(&StringLiteral_13441/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v33);
    sub_B2C35C(&StringLiteral_13439/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v34);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v35);
    sub_B2C35C(&StringLiteral_13444/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v36);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v37);
    sub_B2C35C(&StringLiteral_13440/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v38);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v39);
    sub_B2C35C(&StringLiteral_22799/*"treasurechest_img_bg_reward"*/, v40);
    sub_B2C35C(&StringLiteral_13443/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v41);
    sub_B2C35C(&StringLiteral_13445/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v42);
    sub_B2C35C(&StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v43);
    sub_B2C35C(&StringLiteral_13442/*"TREASURE_BOX_EVENT_POINT"*/, v44);
    byte_418998C = 1;
  }
  v45 = sub_B2C42C(TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo);
  TreasureBoxDialogComponent___c__DisplayClass58_0___ctor(
    (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_109;
  *(_QWORD *)(v45 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v45 + 24) = giftIds;
  v54 = (System_Array_o **)(v45 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)giftIds, v55, v56, v57, v58, v59, v60);
  *(_QWORD *)(v45 + 32) = pointRewards;
  v61 = v45 + 32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v45 + 32),
    (System_Int32_array **)pointRewards,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_109;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_WebViewObject,
                       (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_109;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v69;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v76;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dialogType = this->fields.dialogType;
  if ( dialogType )
  {
    if ( dialogType == 1 )
    {
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)viewChangeButton,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                        (GiftMaster_o *)viewChangeButton,
                                        treasureBoxEnt->fields.extraGiftId,
                                        0LL);
          if ( this->fields.skipCollider )
          {
            v106 = viewChangeButton;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
            if ( *v54 )
            {
              viewChangeButton = (__int64)this->fields.getPointRoot;
              this->fields.maxPlayCnt = (int32_t)(*v54)[1].monitor;
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
                  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13440/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
                  if ( titleLabel )
                  {
                    UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
                    if ( v106 )
                    {
                      if ( !*(_DWORD *)(v106 + 24) )
                        goto LABEL_110;
                      v108 = *(_QWORD *)(v106 + 32);
                      if ( !v108 )
                        goto LABEL_109;
                      totalEventPointIcon = this->fields.totalEventPointIcon;
                      v110 = *(_DWORD *)(v108 + 24);
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      viewChangeButton = AtlasManager__SetItem(totalEventPointIcon, v110, 0LL);
                      if ( !*(_DWORD *)(v106 + 24) )
                        goto LABEL_110;
                      v111 = *(_QWORD *)(v106 + 32);
                      if ( v111 )
                      {
                        AtlasManager__SetItem(this->fields.getEventPointIcon, *(_DWORD *)(v111 + 24), 0LL);
                        AtlasManager__SetEventUI(
                          this->fields.totalEventPointBg,
                          (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        AtlasManager__SetEventUI(
                          this->fields.getEventPointBg,
                          (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        getTitleLabel = this->fields.getTitleLabel;
                        viewChangeButton = (__int64)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13439/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/,
                                                      0LL);
                        if ( getTitleLabel )
                        {
                          UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                          getNumLabel = this->fields.getNumLabel;
                          viewChangeButton = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/,
                                                        0LL);
                          if ( !*(_DWORD *)(v106 + 24) )
                            goto LABEL_110;
                          v114 = *(_QWORD *)(v106 + 32);
                          if ( v114 )
                          {
                            v115 = (System_String_o *)viewChangeButton;
                            v144 = this->fields.maxPlayCnt * *(_DWORD *)(v114 + 28);
                            v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144);
                            v117 = System_String__Format(v115, v116, 0LL);
                            viewChangeButton = (__int64)System_String__Concat_44305532(
                                                          (System_String_o *)StringLiteral_691/*"+"*/,
                                                          v117,
                                                          0LL);
                            if ( getNumLabel )
                            {
                              UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
                              EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(
                                                    treasureBoxEnt->fields.eventId,
                                                    0LL);
                              totalTitleLabel = this->fields.totalTitleLabel;
                              v120 = EventPointNoGroup;
                              viewChangeButton = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_13445/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/,
                                                            0LL);
                              if ( totalTitleLabel )
                              {
                                UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                                totalNumLabel = this->fields.totalNumLabel;
                                v122 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                                v143 = v120;
                                v123 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v143);
                                viewChangeButton = (__int64)System_String__Format(v122, v123, 0LL);
                                if ( totalNumLabel )
                                {
                                  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
                                  viewChangeButton = sub_B2C374(
                                                       int___TypeInfo,
                                                       (unsigned int)(this->fields.maxPlayCnt + 1));
                                  if ( viewChangeButton )
                                  {
                                    v124 = (System_Int32_array *)viewChangeButton;
                                    if ( !*(_DWORD *)(viewChangeButton + 24) )
                                      goto LABEL_110;
                                    *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
                                    System_Array__Copy_42671224(
                                      *v54,
                                      0,
                                      (System_Array_o *)viewChangeButton,
                                      1,
                                      this->fields.maxPlayCnt,
                                      0LL);
                                    maxItemDrawNum = this->fields.maxItemDrawNum;
                                    v126 = this->fields.maxPlayCnt + 1;
                                    this->fields.maxPlayCnt = v126;
                                    if ( v126 <= maxItemDrawNum )
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
                                    if ( *(_QWORD *)v61 && *(_QWORD *)(*(_QWORD *)v61 + 24LL) )
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
                                                                    (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032);
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      if ( !*(_DWORD *)(viewChangeButton + 24) )
                                        goto LABEL_110;
                                      v127 = *(UILabel_o **)(viewChangeButton + 32);
                                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      }
                                      viewChangeButton = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/,
                                                                    0LL);
                                      if ( !v127 )
                                        goto LABEL_109;
                                      UILabel__set_text(v127, (System_String_o *)viewChangeButton, 0LL);
                                    }
                                    v128 = 1;
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
      sub_B2C434(viewChangeButton, v47);
    }
    if ( dialogType == 2 )
    {
      eventId = treasureBoxEnt->fields.eventId;
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)viewChangeButton,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
        viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)viewChangeButton,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
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
            v94 = LocalizationManager__Get((System_String_o *)StringLiteral_13442/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
            v95 = this->fields.titleLabel;
            v96 = (Il2CppObject *)v94;
            v97 = LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
            viewChangeButton = (__int64)System_String__Format(v97, v96, 0LL);
            if ( v95 )
            {
              UILabel__set_text(v95, (System_String_o *)viewChangeButton, 0LL);
              titleNextItemLabel = this->fields.titleNextItemLabel;
              viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
              if ( titleNextItemLabel )
              {
                UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
                titleAtLabel = this->fields.titleAtLabel;
                viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13443/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
                if ( titleAtLabel )
                {
                  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
                  viewChangeButton = (__int64)this->fields.atNameLabel;
                  if ( viewChangeButton )
                  {
                    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v96, 0LL);
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
                      AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
                      AtlasManager__SetEventUI(
                        this->fields.eventPointRewardBg,
                        (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/,
                        0LL);
                      viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
                      if ( MasterData_WarQuestSelectionMaster )
                      {
                        v101 = viewChangeButton;
                        viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      eventId,
                                                      viewChangeButton,
                                                      0LL);
                        if ( GiftListById )
                        {
                          if ( GiftListById->max_length )
                          {
                            v102 = GiftListById->m_Items[0];
                            if ( !v102 )
                              goto LABEL_109;
                            v103 = (EventRewardEntity_o *)viewChangeButton;
                            viewChangeButton = AtlasManager__SetItem(
                                                 this->fields.eventPointSprite,
                                                 v102->fields.objectId,
                                                 0LL);
                            if ( GiftListById->max_length )
                            {
                              v104 = GiftListById->m_Items[0];
                              if ( !v104 )
                                goto LABEL_109;
                              AtlasManager__SetItem(this->fields.titleIcon, v104->fields.objectId, 0LL);
                              TreasureBoxDialogComponent__SetNextItemLabel(this, v101, v103, v105);
                              goto LABEL_103;
                            }
                          }
LABEL_110:
                          v141 = sub_B2C460(viewChangeButton);
                          sub_B2C400(v141, 0LL);
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
    v129 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v130 = LocalizationManager__Get((System_String_o *)StringLiteral_13441/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v130, (Il2CppObject *)eventItemName, 0LL);
    if ( !v129 )
      goto LABEL_109;
    UILabel__set_text(v129, (System_String_o *)viewChangeButton, 0LL);
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
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !viewChangeButton )
      goto LABEL_109;
    v145.fields.z = 0.0;
    v145.fields.y = (float)(this->fields.height + 10);
    v145.fields.x = (float)this->fields.width;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v145, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v132 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetParent(v132, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    v133 = (UnityEngine_GameObject_o *)viewChangeButton;
    viewChangeButton = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.basePos, 0LL);
    viewChangeButton = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v133,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v134, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.gridPos, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v135, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height - 10, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v136 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v136, 1, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
  }
LABEL_103:
  v124 = 0LL;
  v128 = 0;
LABEL_104:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v128 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v138 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v138,
      (Il2CppObject *)v45,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__,
      0LL);
    TreasureBoxDialogComponent__SetResultData(this, v124, iconId, v138, v139);
  }
  else
  {
    v140 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v140,
      (Il2CppObject *)v45,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v140, 0, 0LL);
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
  if ( (byte_4189993 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, gift);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    this = (TreasureBoxDialogComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4189993 = 1;
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
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__),
        (this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot) == 0LL)
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_27:
    sub_B2C434(this, gift);
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
  __int64 v10; // x1
  __int64 v11; // x8
  GiftMaster_o *v12; // x21
  unsigned __int64 v13; // x23
  const MethodInfo *v14; // x3
  struct UIPanel_o *basePanel; // x8
  TreasureBoxDialogComponent_o *v16; // x22
  unsigned __int64 v17; // x24
  __int64 v18; // x0

  v6 = this;
  if ( (byte_4189992 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, giftIds);
    this = (TreasureBoxDialogComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189992 = 1;
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
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_B2C434(this, v10);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
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
  System_String_o *nextItemNameLabel; // x0
  __int64 v16; // x1
  char v17; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v20; // x1
  int64_t v21; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4189994 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, userEventPoint);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B2C35C(&StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B2C35C(&StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4189994 = 1;
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
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v20 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B2C434(nextItemNameLabel, v16);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v21 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  nextItemNameLabel = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_22;
  UILabel__set_text(v12, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v17 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v17 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v20 = nameText;
LABEL_21:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v20, 0LL);
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
  __int64 v9; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189997 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189997 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B2C434(Instance, v9);
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
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x28
  int v17; // w8
  void *v18; // x24
  unsigned int v19; // w23
  struct UnityEngine_GameObject_o *prefabResultItem; // x25
  int32_t *v21; // x27
  UnityEngine_GameObject_o *v22; // x25
  UnityEngine_Transform_o *transform; // x26
  int v24; // s0
  ItemIconComponent_o *v27; // x26
  int32_t v28; // w3
  TreasureBoxDialogComponent_o *v29; // x0
  const MethodInfo *v30; // x3
  struct UnityEngine_GameObject_o *v31; // x26
  UnityEngine_GameObject_o *v32; // x26
  UnityEngine_Transform_o *v33; // x27
  int v34; // s0
  ItemIconComponent_o *v37; // x25
  __int64 v38; // x0
  void *v39; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418998F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, resultIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418998F = 1;
  }
  if ( resultIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B2C434(Instance, v14);
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v15 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = 0LL;
      v39 = Instance;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)v15 )
          goto LABEL_47;
        if ( !Instance )
          goto LABEL_46;
        Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v16 + 1], 0LL);
        if ( !Instance )
          goto LABEL_46;
        v17 = *((_DWORD *)Instance + 6);
        v18 = Instance;
        if ( v17 >= 1 )
          break;
LABEL_43:
        Instance = v39;
        ++v16;
        LODWORD(v15) = resultIds->max_length;
        if ( (__int64)v16 >= (int)v15 )
          goto LABEL_44;
      }
      v19 = 0;
      while ( v19 < v17 )
      {
        prefabResultItem = this->fields.prefabResultItem;
        v21 = (int32_t *)*((_QWORD *)v18 + (int)v19 + 4);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v22 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v22, 0LL);
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v42.fields.x = this->fields.iconScale;
        v42.fields.y = v42.fields.x;
        v42.fields.z = v42.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v42, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v22,
                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v21 )
          goto LABEL_46;
        v27 = (ItemIconComponent_o *)Instance;
        if ( v21[7] <= 1 )
          v28 = -1;
        else
          v28 = v21[7];
        if ( !v16 )
          v28 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_46;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v21[5], v21[6], v28, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v29, v27, v21[6], v30);
        Instance = this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        v31 = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)v31,
                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v32 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        v33 = UnityEngine_GameObject__get_transform(v32, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( !Instance )
          goto LABEL_46;
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !v33 )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v32, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v43.fields.x = this->fields.iconScale;
        v43.fields.y = v43.fields.x;
        v43.fields.z = v43.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v43, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v32,
                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_46;
        v37 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v32, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v37, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_46;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v17 = *((_DWORD *)v18 + 6);
        if ( (int)++v19 >= v17 )
          goto LABEL_43;
      }
LABEL_47:
      v38 = sub_B2C460(Instance);
      sub_B2C400(v38, 0LL);
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

  if ( (byte_4189990 & 1) == 0 )
  {
    sub_B2C35C(&TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo, method);
    byte_4189990 = 1;
  }
  v3 = sub_B2C42C(TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo);
  TreasureBoxDialogComponent__StartDisp_d__62___ctor((TreasureBoxDialogComponent__StartDisp_d__62_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4189991 & 1) == 0 )
  {
    sub_B2C35C(&TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo, rewardAction);
    byte_4189991 = 1;
  }
  v5 = sub_B2C42C(TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo);
  TreasureBoxDialogComponent__StartRewardAction_d__63___ctor(
    (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B2C2F8(
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

  if ( (byte_4189998 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189998 = 1;
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
    sub_B2C434(0LL, v4);
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
  __int64 v16; // x1
  __int64 v17; // x1
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v19; // x20
  bool result; // w0
  TreasureBoxDialogComponent__StartDisp_d__62_o **p_listRewardAction_5__2; // x21
  TreasureBoxDialogComponent__StartDisp_d__62_o *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v25; // w21
  UIProgressBar_o *v26; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v29; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  int v31; // w23
  __int64 v32; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  int _2__current; // w8
  __int64 v36; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v38; // w8
  __int64 v39; // x8
  int32_t playCnt; // w8
  TreasureBoxDialogComponent__StartDisp_d__62_o *v41; // x22
  __int64 v42; // x19
  int v43; // w8
  __int64 v44; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v46; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v50; // x20
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_418535E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v16);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    byte_418535E = 1;
  }
  memset(&v51, 0, sizeof(v51));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v19 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      sub_B2C2F8(&v2->fields.__2__current, v19);
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
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.scrollBar;
      v25 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v26 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v26, (float)(1.0 / (float)((float)((float)v25 * 0.5) + -1.0)) + value, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      v29 = 4;
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
    sub_B2C2F8(p_listRewardAction_5__2, 0LL);
LABEL_18:
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v30;
    sub_B2C2F8(p_listRewardAction_5__2, v30);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v31 = 0;
      while ( v31 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v32 = sub_B2C42C(TreasureBoxDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v32, 0LL);
        if ( !v32 )
          goto LABEL_35;
        *(_DWORD *)(v32 + 16) = v31;
        *(_DWORD *)(v32 + 20) = v31 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
        if ( ++v31 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    v33 = 0LL;
    v34 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v33 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v36 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v34);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      started = TreasureBoxDialogComponent__StartRewardAction(
                  _4__this,
                  *(TreasureBoxDialogComponent_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                                + 8 * v33
                                                                + 32),
                  0LL);
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                                                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                started,
                                                                0LL);
      if ( v36 )
      {
        *(_QWORD *)(v36 + 32) = this;
        sub_B2C2F8(v36 + 32, this);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v33;
        v34 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v38 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v38 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v39 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v38 - 1) + 32);
    if ( !v39 )
      goto LABEL_35;
    if ( *(_BYTE *)(v39 + 24) )
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
        sub_B2C2F8(p__2__current, 0LL);
        v29 = 2;
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
      v50 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v50, scrollWait, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v50;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v50);
      v29 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v29;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  v41 = *p_listRewardAction_5__2;
  if ( !*p_listRewardAction_5__2 )
    goto LABEL_35;
  v42 = 0LL;
  while ( 1 )
  {
    v43 = (int)v41->fields.__2__current;
    if ( (int)v42 >= v43 )
      break;
    if ( v43 <= (unsigned int)v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v44 = *(_QWORD *)(*(_QWORD *)&v41->fields.__1__state + 8 * v42 + 32);
    if ( v44 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_35310416(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v44 + 32),
        0LL);
      v41 = *p_listRewardAction_5__2;
      ++v42;
      if ( *p_listRewardAction_5__2 )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v46 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v46 >= size )
      break;
    if ( size <= (unsigned int)v46 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)resultItemObjList->fields._items->m_Items[v46];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v46;
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
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
    sub_B2C434(this, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v51.fields.current;
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
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TreasureBoxDialogComponent__StartDisp_d__62_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o **p_rewardAction; // x19
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v19; // x8
  struct System_Collections_Generic_List_GameObject__o *v20; // x23
  __int64 v21; // x24
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  float v26; // s8
  UnityEngine_WaitForSeconds_o *v27; // x20
  Il2CppObject **v28; // x19
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v30; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v31; // t1
  __int64 v32; // x21
  struct System_Collections_Generic_List_GameObject__o *v33; // x20
  __int64 v34; // x21
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_418535F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)sub_B2C35C(&StringLiteral_18218/*"ef_treasure_drop"*/, v5);
    byte_418535F = 1;
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
        v12 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v12, itemDispWaitTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v12;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v12);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)GameObjectExtensions__GetParent(
                                                                          resultItemObjList->fields._items->m_Items[playCnt],
                                                                          0LL);
        if ( this )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                            (System_String_o *)StringLiteral_18218/*"ef_treasure_drop"*/,
                                                                            transform,
                                                                            0LL);
          if ( this )
          {
            v18 = (UnityEngine_GameObject_o *)this;
            this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
            v19 = v2->fields.rewardAction;
            if ( v19 )
            {
              v20 = _4__this->fields.resultItemObjList;
              if ( v20 )
              {
                v21 = v19->fields.playCnt;
                v22 = (UnityEngine_Transform_o *)this;
                if ( v20->fields._size <= (unsigned int)v21 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v20->fields._items->m_Items[v21];
                if ( this )
                {
                  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                  if ( this )
                  {
                    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
                    if ( v22 )
                    {
                      UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
                      this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                        v18,
                                                                                        0LL);
                      if ( this )
                      {
                        v35.fields.x = 1.25;
                        v35.fields.y = 1.25;
                        v35.fields.z = 1.25;
                        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0LL);
                        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)_4__this->fields.fallEffectObjList;
                        if ( this )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
                          v26 = _4__this->fields.itemDispWaitTime;
                          v27 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
                          UnityEngine_WaitForSeconds___ctor(v27, v26, 0LL);
                          v2->fields.__2__current = (Il2CppObject *)v27;
                          v28 = &v2->fields.__2__current;
                          sub_B2C2F8(v28, v27);
                          *((_DWORD *)v28 - 2) = 2;
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
    sub_B2C434(this, method);
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
    v31 = v2->fields.rewardAction;
    p_rewardAction = &v2->fields.rewardAction;
    v30 = v31;
    if ( !v31 || !resultIconHideObjList )
      goto LABEL_44;
    v32 = v30->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v32 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)resultIconHideObjList->fields._items->m_Items[v32];
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_44;
  v33 = _4__this->fields.resultItemObjList;
  if ( !v33 )
    goto LABEL_44;
  v34 = (*p_rewardAction)->fields.playCnt;
  if ( v33->fields._size <= (unsigned int)v34 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v33->fields._items->m_Items[v34];
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TreasureBoxDialogComponent__StartRewardAction_d__63_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_418535B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)sub_B2C35C(
                                                                   &Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__,
                                                                   v3);
    byte_418535B = 1;
  }
  monitor = (System_Action_o *)v2[2].monitor;
  klass = (BaseDialog_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__, 0LL);
    v2[2].monitor = monitor;
    sub_B2C2F8(&v2[2].monitor, monitor);
  }
  if ( !klass )
    sub_B2C434(this, method);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_418535D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_418535D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, 0LL),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_418535C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13042/*"StartDisp"*/, method);
    byte_418535C = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13042/*"StartDisp"*/, 0LL);
}