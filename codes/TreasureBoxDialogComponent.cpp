void __fastcall TreasureBoxDialogComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct TreasureBoxDialogComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EAC99 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureBoxDialogComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19678/*"img_bg_ep"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v11, v12, v13);
    byte_42EAC99 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxDialogComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19678/*"img_bg_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19678/*"img_bg_ep"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = TreasureBoxDialogComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  v16->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->EVENT_POINT_REWARD_AT, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UnityEngine_Color_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EAC98 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12, v13);
    byte_42EAC98 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v14 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)&this->fields.itemDispTime = 0xC3A83126FLL;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x20
  signed __int64 size; // x21
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EAC94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EAC94 = 1;
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
        v13 = 0LL;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)fallEffectObjList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v14 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v13];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v15 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
          if ( v15 )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35620236(v14, 0LL);
          }
          if ( (__int64)++v13 >= size )
            break;
          fallEffectObjList = this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_B5D69C(v15, v16);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EAC8D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_TreasureBoxDialogComponent_EndClose__, v10, v11, v12);
    byte_42EAC8D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_42EAC8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAC8C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(skipCollider, v8);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v15; // x1
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v24; // x20
  int size; // w8
  __int64 v26; // x0
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAC95 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EAC95 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_21:
    sub_B5D69C(viewChangeButtonLabel, v15);
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
    v26 = sub_B5D6C8(viewChangeButtonLabel);
    sub_B5D668(v26, 0LL);
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
  v27.fields.b = *p_a;
  v27.fields.g = *p_b;
  v27.fields.r = *p_g;
  v27.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v27, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_21;
  v24 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v24 >= size )
      break;
    if ( size <= (unsigned int)v24 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    viewChangeButtonLabel = (UILabel_o *)resultItemObjList->fields._items->m_Items[v24];
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v24;
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  __int64 v107; // x22
  __int64 viewChangeButton; // x0
  __int64 v109; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Array_o **v116; // x24
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  __int64 v123; // x23
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // x26
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v138; // x26
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  int32_t dialogType; // w8
  int32_t eventId; // w23
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x24
  GiftEntity_array *GiftListById; // x25
  System_String_o *v156; // x0
  UILabel_o *v157; // x27
  Il2CppObject *v158; // x26
  System_String_o *v159; // x0
  UILabel_o *titleNextItemLabel; // x27
  UILabel_o *titleAtLabel; // x27
  UISprite_o *eventPointBg; // x26
  int64_t v163; // x26
  GiftEntity_o *v164; // x8
  EventRewardEntity_o *v165; // x23
  GiftEntity_o *v166; // x8
  const MethodInfo *v167; // x3
  __int64 v168; // x25
  UILabel_o *titleLabel; // x26
  __int64 v170; // x8
  UISprite_o *totalEventPointIcon; // x26
  int32_t v172; // w27
  __int64 v173; // x8
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  __int64 v176; // x8
  System_String_o *v177; // x27
  Il2CppObject *v178; // x0
  System_String_o *v179; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v182; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v184; // x27
  Il2CppObject *v185; // x0
  System_Int32_array *v186; // x25
  int32_t maxItemDrawNum; // w9
  int32_t v188; // w8
  UILabel_o *v189; // x23
  int v190; // w21
  UILabel_o *v191; // x23
  System_String_o *v192; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x23
  UnityEngine_GameObject_o *v196; // x0
  UnityEngine_GameObject_o *v197; // x0
  UnityEngine_GameObject_o *v198; // x0
  int32_t iconId; // w20
  System_Action_o *v200; // x21
  const MethodInfo *v201; // x4
  System_Action_o *v202; // x20
  __int64 v203; // x0
  __int64 v205; // [xsp+10h] [xbp-60h] BYREF
  int v206; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v207; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAC8B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)giftIds, (_DWORD)pointRewards, *(_QWORD *)&type);
    sub_B5D5C4(&AtlasManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v32, v33, v34);
    sub_B5D5C4(&int___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&int_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&long_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56, v57, v58);
    sub_B5D5C4(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__, v59, v60, v61);
    sub_B5D5C4(&Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__1__, v62, v63, v64);
    sub_B5D5C4(&TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_13597/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_13595/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_13600/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_13596/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_23104/*"treasurechest_img_bg_reward"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_13599/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_13601/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_2526/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_13598/*"TREASURE_BOX_EVENT_POINT"*/, v104, v105, v106);
    byte_42EAC8B = 1;
  }
  v107 = sub_B5D694(TreasureBoxDialogComponent___c__DisplayClass58_0_TypeInfo);
  TreasureBoxDialogComponent___c__DisplayClass58_0___ctor(
    (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)v107,
    0LL);
  if ( !v107 )
    goto LABEL_109;
  *(_QWORD *)(v107 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v107 + 16),
    (System_Int32_array **)this,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  *(_QWORD *)(v107 + 24) = giftIds;
  v116 = (System_Array_o **)(v107 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v107 + 24),
    (System_Int32_array **)giftIds,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  *(_QWORD *)(v107 + 32) = pointRewards;
  v123 = v107 + 32;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v107 + 32),
    (System_Int32_array **)pointRewards,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_109;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_WebViewObject,
                       (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_109;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v131,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v131;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v138,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v138;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v138,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dialogType = this->fields.dialogType;
  if ( dialogType )
  {
    if ( dialogType == 1 )
    {
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)viewChangeButton,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                        (GiftMaster_o *)viewChangeButton,
                                        treasureBoxEnt->fields.extraGiftId,
                                        0LL);
          if ( this->fields.skipCollider )
          {
            v168 = viewChangeButton;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
            if ( *v116 )
            {
              viewChangeButton = (__int64)this->fields.getPointRoot;
              this->fields.maxPlayCnt = (int32_t)(*v116)[1].monitor;
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
                  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13596/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
                  if ( titleLabel )
                  {
                    UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
                    if ( v168 )
                    {
                      if ( !*(_DWORD *)(v168 + 24) )
                        goto LABEL_110;
                      v170 = *(_QWORD *)(v168 + 32);
                      if ( !v170 )
                        goto LABEL_109;
                      totalEventPointIcon = this->fields.totalEventPointIcon;
                      v172 = *(_DWORD *)(v170 + 24);
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      viewChangeButton = AtlasManager__SetItem(totalEventPointIcon, v172, 0LL);
                      if ( !*(_DWORD *)(v168 + 24) )
                        goto LABEL_110;
                      v173 = *(_QWORD *)(v168 + 32);
                      if ( v173 )
                      {
                        AtlasManager__SetItem(this->fields.getEventPointIcon, *(_DWORD *)(v173 + 24), 0LL);
                        AtlasManager__SetEventUI(
                          this->fields.totalEventPointBg,
                          (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        AtlasManager__SetEventUI(
                          this->fields.getEventPointBg,
                          (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/,
                          0LL);
                        getTitleLabel = this->fields.getTitleLabel;
                        viewChangeButton = (__int64)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13595/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/,
                                                      0LL);
                        if ( getTitleLabel )
                        {
                          UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                          getNumLabel = this->fields.getNumLabel;
                          viewChangeButton = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/,
                                                        0LL);
                          if ( !*(_DWORD *)(v168 + 24) )
                            goto LABEL_110;
                          v176 = *(_QWORD *)(v168 + 32);
                          if ( v176 )
                          {
                            v177 = (System_String_o *)viewChangeButton;
                            v206 = this->fields.maxPlayCnt * *(_DWORD *)(v176 + 28);
                            v178 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206);
                            v179 = System_String__Format(v177, v178, 0LL);
                            viewChangeButton = (__int64)System_String__Concat_44577788(
                                                          (System_String_o *)StringLiteral_699/*"+"*/,
                                                          v179,
                                                          0LL);
                            if ( getNumLabel )
                            {
                              UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
                              EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(
                                                    treasureBoxEnt->fields.eventId,
                                                    0LL);
                              totalTitleLabel = this->fields.totalTitleLabel;
                              v182 = EventPointNoGroup;
                              viewChangeButton = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_13601/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/,
                                                            0LL);
                              if ( totalTitleLabel )
                              {
                                UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
                                totalNumLabel = this->fields.totalNumLabel;
                                v184 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                                v205 = v182;
                                v185 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v205);
                                viewChangeButton = (__int64)System_String__Format(v184, v185, 0LL);
                                if ( totalNumLabel )
                                {
                                  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
                                  viewChangeButton = sub_B5D5DC(
                                                       int___TypeInfo,
                                                       (unsigned int)(this->fields.maxPlayCnt + 1));
                                  if ( viewChangeButton )
                                  {
                                    v186 = (System_Int32_array *)viewChangeButton;
                                    if ( !*(_DWORD *)(viewChangeButton + 24) )
                                      goto LABEL_110;
                                    *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
                                    System_Array__Copy_43381116(
                                      *v116,
                                      0,
                                      (System_Array_o *)viewChangeButton,
                                      1,
                                      this->fields.maxPlayCnt,
                                      0LL);
                                    maxItemDrawNum = this->fields.maxItemDrawNum;
                                    v188 = this->fields.maxPlayCnt + 1;
                                    this->fields.maxPlayCnt = v188;
                                    if ( v188 <= maxItemDrawNum )
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
                                    if ( *(_QWORD *)v123 && *(_QWORD *)(*(_QWORD *)v123 + 24LL) )
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
                                                                    (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840);
                                      if ( !viewChangeButton )
                                        goto LABEL_109;
                                      if ( !*(_DWORD *)(viewChangeButton + 24) )
                                        goto LABEL_110;
                                      v189 = *(UILabel_o **)(viewChangeButton + 32);
                                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      }
                                      viewChangeButton = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/,
                                                                    0LL);
                                      if ( !v189 )
                                        goto LABEL_109;
                                      UILabel__set_text(v189, (System_String_o *)viewChangeButton, 0LL);
                                    }
                                    v190 = 1;
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
      sub_B5D69C(viewChangeButton, v109);
    }
    if ( dialogType == 2 )
    {
      eventId = treasureBoxEnt->fields.eventId;
      viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( viewChangeButton )
      {
        MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)viewChangeButton,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardMaster___);
        viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( viewChangeButton )
        {
          viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)viewChangeButton,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
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
            v156 = LocalizationManager__Get((System_String_o *)StringLiteral_13598/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
            v157 = this->fields.titleLabel;
            v158 = (Il2CppObject *)v156;
            v159 = LocalizationManager__Get((System_String_o *)StringLiteral_13600/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
            viewChangeButton = (__int64)System_String__Format(v159, v158, 0LL);
            if ( v157 )
            {
              UILabel__set_text(v157, (System_String_o *)viewChangeButton, 0LL);
              titleNextItemLabel = this->fields.titleNextItemLabel;
              viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2526/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
              if ( titleNextItemLabel )
              {
                UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
                titleAtLabel = this->fields.titleAtLabel;
                viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13599/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
                if ( titleAtLabel )
                {
                  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
                  viewChangeButton = (__int64)this->fields.atNameLabel;
                  if ( viewChangeButton )
                  {
                    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v158, 0LL);
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
                      AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
                      AtlasManager__SetEventUI(
                        this->fields.eventPointRewardBg,
                        (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/,
                        0LL);
                      viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
                      if ( MasterData_WarQuestSelectionMaster )
                      {
                        v163 = viewChangeButton;
                        viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      eventId,
                                                      viewChangeButton,
                                                      0LL);
                        if ( GiftListById )
                        {
                          if ( GiftListById->max_length )
                          {
                            v164 = GiftListById->m_Items[0];
                            if ( !v164 )
                              goto LABEL_109;
                            v165 = (EventRewardEntity_o *)viewChangeButton;
                            viewChangeButton = AtlasManager__SetItem(
                                                 this->fields.eventPointSprite,
                                                 v164->fields.objectId,
                                                 0LL);
                            if ( GiftListById->max_length )
                            {
                              v166 = GiftListById->m_Items[0];
                              if ( !v166 )
                                goto LABEL_109;
                              AtlasManager__SetItem(this->fields.titleIcon, v166->fields.objectId, 0LL);
                              TreasureBoxDialogComponent__SetNextItemLabel(this, v163, v165, v167);
                              goto LABEL_103;
                            }
                          }
LABEL_110:
                          v203 = sub_B5D6C8(viewChangeButton);
                          sub_B5D668(v203, 0LL);
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
    v191 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v192 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v192, (Il2CppObject *)eventItemName, 0LL);
    if ( !v191 )
      goto LABEL_109;
    UILabel__set_text(v191, (System_String_o *)viewChangeButton, 0LL);
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
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !viewChangeButton )
      goto LABEL_109;
    v207.fields.z = 0.0;
    v207.fields.y = (float)(this->fields.height + 10);
    v207.fields.x = (float)this->fields.width;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v207, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v194 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetParent(v194, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    v195 = (UnityEngine_GameObject_o *)viewChangeButton;
    viewChangeButton = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.basePos, 0LL);
    viewChangeButton = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v195,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
    viewChangeButton = (__int64)this->fields.scrollView;
    if ( !viewChangeButton )
      goto LABEL_109;
    v196 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v196, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)viewChangeButton, this->fields.gridPos, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v197 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v197, 0, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height - 10, 0LL);
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_109;
    v198 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)GameObjectExtensions__GetChild(v198, 1, 0LL);
    if ( !viewChangeButton )
      goto LABEL_109;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !viewChangeButton )
      goto LABEL_109;
    UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
  }
LABEL_103:
  v186 = 0LL;
  v190 = 0;
LABEL_104:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v190 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v200 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v200,
      (Il2CppObject *)v107,
      Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__0__,
      0LL);
    TreasureBoxDialogComponent__SetResultData(this, v186, iconId, v200, v201);
  }
  else
  {
    v202 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v202,
      (Il2CppObject *)v107,
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
  TreasureBoxDialogComponent_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  _BOOL4 v19; // w8
  int32_t *p_num; // x8
  int32_t *p_type; // x9
  int32_t *p_objectId; // x10
  int v23; // w24
  int32_t v24; // w22
  int32_t v25; // w20
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x21
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_Transform_o *transform; // x23
  int v29; // s0
  int32_t v32; // w3
  ItemIconComponent_o *v33; // x23
  TreasureBoxDialogComponent_o *v34; // x0
  const MethodInfo *v35; // x3
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42EAC92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)gift, (_DWORD)pointRewards, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14, v15);
    this = (TreasureBoxDialogComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42EAC92 = 1;
  }
  if ( pointRewards )
  {
    v19 = pointRewards->fields.originalNum > 0;
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
    v19 = 1;
    if ( gift )
      goto LABEL_5;
  }
  if ( !pointRewards )
    goto LABEL_27;
  p_type = &pointRewards->fields.type;
  if ( v19 )
    p_num = &pointRewards->fields.originalNum;
  else
    p_num = &pointRewards->fields.num;
  p_objectId = &pointRewards->fields.objectId;
LABEL_12:
  v23 = *p_num;
  v24 = *p_type;
  v25 = *p_objectId;
  prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           prefabResultItem,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_27;
  v27 = (UnityEngine_GameObject_o *)this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v27, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !this )
    goto LABEL_27;
  v36.fields.x = v6->fields.iconScale;
  v36.fields.y = v36.fields.x;
  v36.fields.z = v36.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v36, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v27,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_27;
  v32 = v23 <= 1 ? -1 : v23;
  v33 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v24, v25, v32, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v34, v33, v25, v35);
  UnityEngine_GameObject__SetActive(v27, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__),
        (this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot) == 0LL)
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_27:
    sub_B5D69C(this, gift);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  __int64 v12; // x1
  __int64 v13; // x8
  GiftMaster_o *v14; // x21
  unsigned __int64 v15; // x23
  const MethodInfo *v16; // x3
  struct UIPanel_o *basePanel; // x8
  TreasureBoxDialogComponent_o *v18; // x22
  unsigned __int64 v19; // x24
  __int64 v20; // x0

  v6 = this;
  if ( (byte_42EAC91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)giftIds, (_DWORD)pointRewards, method);
    this = (TreasureBoxDialogComponent_o *)sub_B5D5C4(
                                             &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                             v7,
                                             v8,
                                             v9);
    byte_42EAC91 = 1;
  }
  if ( !giftIds )
  {
    if ( pointRewards )
    {
      v10 = *(_QWORD *)&pointRewards->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        while ( v11 < (unsigned int)v10 )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0LL, pointRewards->m_Items[v11], method);
          LODWORD(v10) = pointRewards->max_length;
          if ( (__int64)++v11 >= (int)v10 )
            goto LABEL_9;
        }
LABEL_23:
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_B5D69C(this, v12);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    v13 = *(_QWORD *)&giftIds->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = (GiftMaster_o *)this;
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v13 )
          goto LABEL_23;
        if ( !v14 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v14, giftIds->m_Items[v15 + 1], 0LL);
        if ( !this )
          goto LABEL_24;
        basePanel = this->fields.basePanel;
        v18 = this;
        if ( (int)basePanel >= 1 )
          break;
LABEL_21:
        LODWORD(v13) = giftIds->max_length;
        if ( (__int64)++v15 >= (int)v13 )
          return;
      }
      v19 = 0LL;
      while ( v19 < (unsigned int)basePanel )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v18->fields.basePanelList + v19), 0LL, v16);
        LODWORD(basePanel) = v18->fields.basePanel;
        if ( (__int64)++v19 >= (int)basePanel )
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UILabel_o *v22; // x22
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v26; // x1
  char v27; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v30; // x1
  int64_t v31; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EAC93 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, userEventPoint, (_DWORD)eventRewardEnt, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2529/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2527/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42EAC93 = 1;
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
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v30 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B5D69C(nextItemNameLabel, v26);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v22 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v31 = eventRewardEnt->fields.point - userEventPoint;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
  nextItemNameLabel = System_String__Format(v23, v24, 0LL);
  if ( !v22 )
    goto LABEL_22;
  UILabel__set_text(v22, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v27 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v27 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v30 = nameText;
LABEL_21:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v30, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Instance; // x0
  __int64 v13; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EAC96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)item, objectId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EAC96 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B5D69C(Instance, v13);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  void *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  unsigned __int64 v28; // x28
  int v29; // w8
  void *v30; // x24
  unsigned int v31; // w23
  struct UnityEngine_GameObject_o *prefabResultItem; // x25
  int32_t *v33; // x27
  UnityEngine_GameObject_o *v34; // x25
  UnityEngine_Transform_o *transform; // x26
  int v36; // s0
  ItemIconComponent_o *v39; // x26
  int32_t v40; // w3
  TreasureBoxDialogComponent_o *v41; // x0
  const MethodInfo *v42; // x3
  struct UnityEngine_GameObject_o *v43; // x26
  UnityEngine_GameObject_o *v44; // x26
  UnityEngine_Transform_o *v45; // x27
  int v46; // s0
  ItemIconComponent_o *v49; // x25
  __int64 v50; // x0
  void *v51; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAC8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)resultIds, treasureIconId, callBack);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EAC8E = 1;
  }
  if ( resultIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B5D69C(Instance, v26);
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    v27 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v27 >= 1 )
    {
      v28 = 0LL;
      v51 = Instance;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)v27 )
          goto LABEL_47;
        if ( !Instance )
          goto LABEL_46;
        Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v28 + 1], 0LL);
        if ( !Instance )
          goto LABEL_46;
        v29 = *((_DWORD *)Instance + 6);
        v30 = Instance;
        if ( v29 >= 1 )
          break;
LABEL_43:
        Instance = v51;
        ++v28;
        LODWORD(v27) = resultIds->max_length;
        if ( (__int64)v28 >= (int)v27 )
          goto LABEL_44;
      }
      v31 = 0;
      while ( v31 < v29 )
      {
        prefabResultItem = this->fields.prefabResultItem;
        v33 = (int32_t *)*((_QWORD *)v30 + (int)v31 + 4);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v34 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v34, 0LL);
        *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v36, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v34, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v54.fields.x = this->fields.iconScale;
        v54.fields.y = v54.fields.x;
        v54.fields.z = v54.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v54, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v34,
                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v33 )
          goto LABEL_46;
        v39 = (ItemIconComponent_o *)Instance;
        if ( v33[7] <= 1 )
          v40 = -1;
        else
          v40 = v33[7];
        if ( !v28 )
          v40 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_46;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v33[5], v33[6], v40, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v41, v39, v33[6], v42);
        Instance = this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        v43 = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)v43,
                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_46;
        v44 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_46;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        v45 = UnityEngine_GameObject__get_transform(v44, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v34, 0LL);
        if ( !Instance )
          goto LABEL_46;
        *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !v45 )
          goto LABEL_46;
        UnityEngine_Transform__set_localPosition(v45, *(UnityEngine_Vector3_o *)&v46, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v44, 0LL);
        if ( !Instance )
          goto LABEL_46;
        v55.fields.x = this->fields.iconScale;
        v55.fields.y = v55.fields.x;
        v55.fields.z = v55.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v55, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v44,
                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_46;
        v49 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v44, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v49, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_46;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_46;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v29 = *((_DWORD *)v30 + 6);
        if ( (int)++v31 >= v29 )
          goto LABEL_43;
      }
LABEL_47:
      v50 = sub_B5D6C8(Instance);
      sub_B5D668(v50, 0LL);
    }
LABEL_44:
    ActionExtensions__Call(callBack, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartDisp(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EAC8F & 1) == 0 )
  {
    sub_B5D5C4(&TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC8F = 1;
  }
  v5 = sub_B5D694(TreasureBoxDialogComponent__StartDisp_d__62_TypeInfo);
  TreasureBoxDialogComponent__StartDisp_d__62___ctor((TreasureBoxDialogComponent__StartDisp_d__62_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EAC90 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo, (_DWORD)rewardAction, (_DWORD)method, v3);
    byte_42EAC90 = 1;
  }
  v6 = sub_B5D694(TreasureBoxDialogComponent__StartRewardAction_d__63_TypeInfo);
  TreasureBoxDialogComponent__StartRewardAction_d__63___ctor(
    (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = rewardAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)rewardAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EAC97 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC97 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  TreasureBoxDialogComponent__StartDisp_d__62_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v51; // x20
  bool result; // w0
  TreasureBoxDialogComponent__StartDisp_d__62_o **p_listRewardAction_5__2; // x21
  TreasureBoxDialogComponent__StartDisp_d__62_o *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v57; // w21
  UIProgressBar_o *v58; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v61; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x22
  int v63; // w23
  __int64 v64; // x22
  __int64 v65; // x23
  __int64 v66; // x24
  int _2__current; // w8
  __int64 v68; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v70; // w8
  __int64 v71; // x8
  int32_t playCnt; // w8
  TreasureBoxDialogComponent__StartDisp_d__62_o *v73; // x22
  __int64 v74; // x19
  int v75; // w8
  __int64 v76; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v78; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v82; // x20
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_42E6266 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v44, v45, v46);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)sub_B5D5C4(
                                                              &UnityEngine_WaitForSeconds_TypeInfo,
                                                              v47,
                                                              v48,
                                                              v49);
    byte_42E6266 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v51 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v51, 0.3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v51;
      sub_B5D560(&v4->fields.__2__current);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v4->fields._listRewardAction_5__2;
      v4->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v4->fields._listRewardAction_5__2;
      listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v4->fields._listRewardAction_5__2;
      v4->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)_4__this->fields.scrollBar;
      v57 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v58 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v58, (float)(1.0 / (float)((float)((float)v57 * 0.5) + -1.0)) + value, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v61 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o **)&v4->fields._listRewardAction_5__2;
      v4->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    *p_listRewardAction_5__2 = 0LL;
    sub_B5D560(p_listRewardAction_5__2);
LABEL_18:
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__62_o *)v62;
    sub_B5D560(p_listRewardAction_5__2);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v63 = 0;
      while ( v63 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v64 = sub_B5D694(TreasureBoxDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v64, 0LL);
        if ( !v64 )
          goto LABEL_35;
        *(_DWORD *)(v64 + 16) = v63;
        *(_DWORD *)(v64 + 20) = v63 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
        if ( ++v63 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    v65 = 0LL;
    v66 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v65 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v65 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v68 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v66);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v65 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      started = TreasureBoxDialogComponent__StartRewardAction(
                  _4__this,
                  *(TreasureBoxDialogComponent_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                                + 8 * v65
                                                                + 32),
                  0LL);
      this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                started,
                                                                0LL);
      if ( v68 )
      {
        *(_QWORD *)(v68 + 32) = this;
        sub_B5D560(v68 + 32);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v65;
        v66 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v70 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v70 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v71 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v70 - 1) + 32);
    if ( !v71 )
      goto LABEL_35;
    if ( *(_BYTE *)(v71 + 24) )
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
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v61 = 2;
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
      v82 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v82, scrollWait, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v82;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v61 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v61;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  v73 = *p_listRewardAction_5__2;
  if ( !*p_listRewardAction_5__2 )
    goto LABEL_35;
  v74 = 0LL;
  while ( 1 )
  {
    v75 = (int)v73->fields.__2__current;
    if ( (int)v74 >= v75 )
      break;
    if ( v75 <= (unsigned int)v74 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v76 = *(_QWORD *)(*(_QWORD *)&v73->fields.__1__state + 8 * v74 + 32);
    if ( v76 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_35615756(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v76 + 32),
        0LL);
      v73 = *p_listRewardAction_5__2;
      ++v74;
      if ( *p_listRewardAction_5__2 )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v78 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v78 >= size )
      break;
    if ( size <= (unsigned int)v78 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (TreasureBoxDialogComponent__StartDisp_d__62_o *)resultItemObjList->fields._items->m_Items[v78];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v78;
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
    sub_B5D69C(this, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v83,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v83,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v83.fields.current;
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
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v83,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TreasureBoxDialogComponent__StartDisp_d__62_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  TreasureBoxDialogComponent__StartRewardAction_d__63_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o **p_rewardAction; // x19
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v27; // x8
  struct System_Collections_Generic_List_GameObject__o *v28; // x23
  __int64 v29; // x24
  UnityEngine_Transform_o *v30; // x21
  int v31; // s0
  float v34; // s8
  UnityEngine_WaitForSeconds_o *v35; // x20
  Il2CppObject **v36; // x19
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v38; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v39; // t1
  __int64 v40; // x21
  struct System_Collections_Generic_List_GameObject__o *v41; // x20
  __int64 v42; // x21
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E6267 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v8, v9, v10);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)sub_B5D5C4(&StringLiteral_18447/*"ef_treasure_drop"*/, v11, v12, v13);
    byte_42E6267 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v4->fields._i_5__2;
      v4->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      v4->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__2 = 0;
    }
    rewardAction = v4->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v20 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v20, itemDispWaitTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v20;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)GameObjectExtensions__GetParent(
                                                                          resultItemObjList->fields._items->m_Items[playCnt],
                                                                          0LL);
        if ( this )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                            (System_String_o *)StringLiteral_18447/*"ef_treasure_drop"*/,
                                                                            transform,
                                                                            0LL);
          if ( this )
          {
            v26 = (UnityEngine_GameObject_o *)this;
            this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
            v27 = v4->fields.rewardAction;
            if ( v27 )
            {
              v28 = _4__this->fields.resultItemObjList;
              if ( v28 )
              {
                v29 = v27->fields.playCnt;
                v30 = (UnityEngine_Transform_o *)this;
                if ( v28->fields._size <= (unsigned int)v29 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v28->fields._items->m_Items[v29];
                if ( this )
                {
                  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                  if ( this )
                  {
                    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
                    if ( v30 )
                    {
                      UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
                      this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)UnityEngine_GameObject__get_transform(
                                                                                        v26,
                                                                                        0LL);
                      if ( this )
                      {
                        v43.fields.x = 1.25;
                        v43.fields.y = 1.25;
                        v43.fields.z = 1.25;
                        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v43, 0LL);
                        this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)_4__this->fields.fallEffectObjList;
                        if ( this )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
                          v34 = _4__this->fields.itemDispWaitTime;
                          v35 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
                          UnityEngine_WaitForSeconds___ctor(v35, v34, 0LL);
                          v4->fields.__2__current = (Il2CppObject *)v35;
                          v36 = &v4->fields.__2__current;
                          sub_B5D560(v36);
                          *((_DWORD *)v36 - 2) = 2;
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
    sub_B5D69C(this, method);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_44;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &v4->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v39 = v4->fields.rewardAction;
    p_rewardAction = &v4->fields.rewardAction;
    v38 = v39;
    if ( !v39 || !resultIconHideObjList )
      goto LABEL_44;
    v40 = v38->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v40 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)resultIconHideObjList->fields._items->m_Items[v40];
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_44;
  v41 = _4__this->fields.resultItemObjList;
  if ( !v41 )
    goto LABEL_44;
  v42 = (*p_rewardAction)->fields.playCnt;
  if ( v41->fields._size <= (unsigned int)v42 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__63_o *)v41->fields._items->m_Items[v42];
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TreasureBoxDialogComponent__StartRewardAction_d__63_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6263 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (TreasureBoxDialogComponent___c__DisplayClass58_0_o *)sub_B5D5C4(
                                                                   &Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__,
                                                                   v5,
                                                                   v6,
                                                                   v7);
    byte_42E6263 = 1;
  }
  monitor = (System_Action_o *)v4[2].monitor;
  klass = (BaseDialog_o *)v4[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(monitor, v4, Method_TreasureBoxDialogComponent___c__DisplayClass58_0__Open_b__2__, 0LL);
    v4[2].monitor = monitor;
    sub_B5D560(&v4[2].monitor);
  }
  if ( !klass )
    sub_B5D69C(this, method);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_42E6265 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6265 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, 0LL),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass58_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_42E6264 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13198/*"StartDisp"*/, (_DWORD)method, v2, v3);
    byte_42E6264 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13198/*"StartDisp"*/, 0LL);
}