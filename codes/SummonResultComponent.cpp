void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  SummonResultComponent_c *v8; // x8
  struct UnityEngine_Rect_o v9; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EC942 & 1) == 0 )
  {
    sub_B5D5C4(&SummonResultComponent_TypeInfo, v1, v2, v3);
    byte_42EC942 = 1;
  }
  v10.fields.m_Width = 160.0;
  v10.fields.m_Height = 60.0;
  SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY = 180.0;
  v10.fields.m_XMin = -510.0;
  v10.fields.m_YMin = 225.0;
  v9 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v10, v4, v5, v6, v7, (const MethodInfo *)&v9);
  SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_RECT = v9;
  v8 = SummonResultComponent_TypeInfo;
  SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE = 165;
  v8->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = 159;
  v8->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL = 190;
  v8->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = -38;
  v8->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = -254;
  v8->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = -176;
  v8->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME = -383;
  v8->static_fields->DEFAULT_FONT_SIZE = 25;
  v8->static_fields->SMALL_FONT_SIZE = 23;
  v8->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX = 752;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PlayMakerFSM_o *fsm; // x0
  int32_t v12; // w0

  if ( (byte_42EC941 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5577/*"END_SUMMON"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8483/*"LIMIT_OVER"*/, v8, v9, v10);
    byte_42EC941 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8483/*"LIMIT_OVER"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v12 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5577/*"END_SUMMON"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v12 = 0;
  }
  SoundManager__playSystemSe(v12, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *blocker; // x20
  BattleServantConfConponent_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC939 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC939 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (BattleServantConfConponent_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_B5D560(p_blocker, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC93E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonResultComponent__DialogCallBack_b__65_0__, v11, v12, v13);
    byte_42EC93E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__65_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__GetIsBonusGift(
        SummonResultComponent_o *this,
        System_String_o **title,
        System_String_o **message,
        float *pos_x,
        GiftEntity_o *giftEntity,
        ItemEntity_o *itemEntity,
        int32_t giftResultType,
        int32_t giftBonusType,
        const MethodInfo *method)
{
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
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UILabel_o *extraGiftMsg2Lb; // x0
  __int64 v60; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool result; // w0
  System_String_o *v64; // x22
  _QWORD **v65; // x25
  __int64 v66; // x23
  __int16 v67; // w8
  __int64 v68; // x23
  __int64 v69; // x23
  __int64 v70; // x23
  System_String_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  SummonResultComponent_c *v86; // x0
  int32_t SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX; // s0
  int32_t summonBeforeMana; // w25
  BalanceConfig_c *v89; // x0
  int32_t ManaMax; // w8
  System_String_o *v91; // x23
  _QWORD **v92; // x25
  __int64 v93; // x24
  __int16 v94; // w8
  __int64 v95; // x24
  __int64 v96; // x24
  __int64 v97; // x24
  System_String_o *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_o *v105; // x21
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  SummonResultComponent_c *v114; // x0
  System_String_o *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_o *v122; // x21
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  SummonResultComponent_c *v131; // x0
  int32_t v132; // w25
  int32_t v133; // w24
  System_String_o *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_o *v141; // x0
  int32_t v142; // w8
  System_String_o *v143; // x21
  Il2CppObject *v144; // x0
  System_String_o *v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  UILabel_o *extraGiftTitleLb; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v154; // [xsp+18h] [xbp-48h] BYREF
  int32_t v155; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EC938 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, (_DWORD)title, (_DWORD)message, pos_x);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SummonResultComponent_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12573/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12577/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12575/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12579/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_12578/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12574/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12576/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v50, v51, v52);
    byte_42EC938 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)pos_x,
    (System_Boolean_array **)giftEntity,
    (System_Int32_array **)itemEntity,
    *(System_Int32_array **)&giftResultType,
    *(System_Int32_array **)&giftBonusType);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  *pos_x = 0.0;
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_79;
  gachaParamData = summonCtrl->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_79;
  result = 0;
  if ( itemEntity && giftEntity && gachaParamData->fields.gachaType != 5 )
  {
    if ( giftBonusType != 1 )
    {
      if ( giftBonusType == 2 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12578/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, 0LL);
        v65 = (_QWORD **)Method_System_Array_Empty_object___;
        v66 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
        v67 = *(_WORD *)(v66 + 306);
        if ( (v67 & 1) == 0 )
        {
          sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
          v67 = *(_WORD *)(v66 + 306);
        }
        if ( (v67 & 0x400) != 0 )
        {
          v68 = *v65[6];
          if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
            sub_AF52C4(*v65[6]);
          if ( !*(_DWORD *)(v68 + 224) )
          {
            v69 = *v65[6];
            if ( (*(_BYTE *)(v69 + 306) & 1) == 0 )
              sub_AF52C4(*v65[6]);
            j_il2cpp_runtime_class_init_0(v69);
          }
        }
        v70 = *v65[6];
        if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
          sub_AF52C4(*v65[6]);
        v71 = System_String__Format_44656512(v64, **(System_Object_array ***)(v70 + 184), 0LL);
        *title = v71;
        sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12577/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, 0LL);
        v79 = System_String__Format(v78, (Il2CppObject *)itemEntity->fields.name, 0LL);
        *message = v79;
        sub_B5D560((BattleServantConfConponent_o *)message, (System_Int32_array **)v79, v80, v81, v82, v83, v84, v85);
        v86 = SummonResultComponent_TypeInfo;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v86 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v86->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
        goto LABEL_58;
      }
      return 0;
    }
    if ( giftResultType != 3 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12579/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      *title = v115;
      sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)v115, v116, v117, v118, v119, v120, v121);
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_12574/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      num = giftEntity->fields.num;
      v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v124 = System_String__Format(v122, v123, 0LL);
      *message = v124;
      sub_B5D560(
        (BattleServantConfConponent_o *)message,
        (System_Int32_array **)v124,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v131 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v131 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v131->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      goto LABEL_58;
    }
    summonBeforeMana = this->fields.summonBeforeMana;
    v89 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v89 = BalanceConfig_TypeInfo;
    }
    ManaMax = v89->static_fields->ManaMax;
    if ( summonBeforeMana == ManaMax )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v92 = (_QWORD **)Method_System_Array_Empty_object___;
      v93 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v94 = *(_WORD *)(v93 + 306);
      if ( (v94 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v94 = *(_WORD *)(v93 + 306);
      }
      if ( (v94 & 0x400) != 0 )
      {
        v95 = *v92[6];
        if ( (*(_BYTE *)(v95 + 306) & 1) == 0 )
          sub_AF52C4(*v92[6]);
        if ( !*(_DWORD *)(v95 + 224) )
        {
          v96 = *v92[6];
          if ( (*(_BYTE *)(v96 + 306) & 1) == 0 )
            sub_AF52C4(*v92[6]);
          j_il2cpp_runtime_class_init_0(v96);
        }
      }
      v97 = *v92[6];
      if ( (*(_BYTE *)(v97 + 306) & 1) == 0 )
        sub_AF52C4(*v92[6]);
      v98 = System_String__Format_44656512(v91, **(System_Object_array ***)(v97 + 184), 0LL);
      *title = v98;
      sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      v155 = giftEntity->fields.num;
      v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v155);
      v107 = System_String__Format(v105, v106, 0LL);
      *message = v107;
      sub_B5D560(
        (BattleServantConfConponent_o *)message,
        (System_Int32_array **)v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      v114 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v114 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v114->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      goto LABEL_58;
    }
    v132 = this->fields.summonBeforeMana;
    if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v89 = BalanceConfig_TypeInfo;
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    if ( v132 >= ManaMax )
      return 0;
    if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    v133 = ManaMax - this->fields.summonBeforeMana;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12579/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
    *title = v134;
    sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)v134, v135, v136, v137, v138, v139, v140);
    v141 = LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
    v142 = giftEntity->fields.num;
    v143 = v141;
    if ( v142 > v133 )
      v142 = v133;
    v154 = v142;
    v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v154);
    v145 = System_String__Format(v143, v144, 0LL);
    *message = v145;
    sub_B5D560((BattleServantConfConponent_o *)message, (System_Int32_array **)v145, v146, v147, v148, v149, v150, v151);
    extraGiftTitleLb = this->fields.extraGiftTitleLb;
    extraGiftMsg2Lb = (UILabel_o *)SummonResultComponent_TypeInfo;
    if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonResultComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    }
    if ( extraGiftTitleLb )
    {
      UILabel__set_fontSize(extraGiftTitleLb, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
      extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
      if ( extraGiftMsg2Lb )
      {
        UILabel__set_fontSize(extraGiftMsg2Lb, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME;
LABEL_58:
        result = 1;
        *pos_x = (float)SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
        return result;
      }
    }
LABEL_79:
    sub_B5D69C(extraGiftMsg2Lb, v60);
  }
  return result;
}


void __fastcall SummonResultComponent__SetBonusGiftPos(
        SummonResultComponent_o *this,
        float titleX,
        float msgX,
        float posX,
        const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_7;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, posX, 0LL);
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
  if ( !extraGiftTitleLb )
    goto LABEL_7;
  v11 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, 0.0, 0LL);
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr;
  if ( !extraGiftTitleLb
    || (v12 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL),
        GameObjectExtensions__SetLocalPositionX(v12, 0.0, 0LL),
        (extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr) == 0LL)
    || (v13 = (float)((float)extraGiftTitleLb[6].fields.m_CachedPtr + titleX) + posX,
        v14 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL),
        GameObjectExtensions__SetLocalPositionX(v14, v13 + -1.0, 0LL),
        (extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(extraGiftTitleLb, method);
  }
  v15 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, v13 + msgX, 0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__65_0(SummonResultComponent_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21
  WebViewManager_o *v16; // x0
  __int64 v17; // x1
  CommonUI_o *v18; // x19

  if ( (byte_42EC943 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonResultComponent_EndCloseDialogCallBack__, v11, v12, v13);
    byte_42EC943 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v15, 0LL);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (CommonUI_o *)v16;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v18 )
LABEL_9:
    sub_B5D69C(v16, v17);
  CommonUI__maskFadein(v18, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonResultComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v11; // w22

  v5 = this;
  if ( (byte_42EC93A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, svtId, (_DWORD)method, v3);
    this = (SummonResultComponent_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    byte_42EC93A = 1;
  }
  befSvtList = v5->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( befSvtList->fields._items->m_Items[v11 + 1] == svtId )
      return 1;
    if ( (int)++v11 >= size )
      return 0;
    befSvtList = v5->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int32_t v10; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v12; // w0
  int32_t v13; // w20
  UnityEngine_Object_o *v14; // x21

  if ( (byte_42EC93F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EC93F = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  v10 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)fstGrid, v10, 0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v10 < 0 )
        goto LABEL_13;
    }
LABEL_26:
    sub_B5D69C(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v12 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  v13 = v12 - 1;
  if ( v12 >= 1 )
  {
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)fstGrid, v13, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v14, 0LL);
    }
    while ( --v13 >= 0 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0LL);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)fstGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__initGachaResultList(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        int32_t type,
        System_Int32_array *extraGiftIds,
        GachaExtraGifts_array *gachaExtraGiftList,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x22
  GachaInfos_array *v9; // x27
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
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellHeight; // s10
  struct UIGrid_o *scdGrid; // x9
  int cellWidth_low; // s11
  float v75; // s9
  System_Collections_Generic_List_int__o *v76; // x24
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  int v83; // w8
  __int64 v84; // x23
  GachaInfos_o **m_Items; // x21
  GachaInfos_array *v86; // x22
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_o *v88; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v91; // x25
  UnityEngine_Transform_o *v92; // x26
  int v93; // s0
  const MethodInfo *v96; // x2
  int32_t objectId; // w26
  bool v98; // w26
  bool IsCommandCode; // w28
  SummonResultInfoComponent_ClickDelegate_o *v100; // x0
  SummonResultInfoComponent_ClickDelegate_o *v101; // x27
  __int64 *v102; // x8
  const MethodInfo *v103; // x6
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int QpMax; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  float v110; // s12
  float v111; // s11
  float v112; // s8
  float v113; // s1
  float v114; // s1
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v116; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v118; // x8
  GiftEntity_o *DataById; // x22
  ItemEntity_o *v120; // x23
  struct UISprite_o *extraGiftMsgSpr; // x8
  GachaExtraGifts_o *v122; // x8
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t mWidth; // w20
  UIWidget_o *v125; // x21
  struct UIGrid_o *v126; // x8
  int v127; // s9
  int v128; // s10
  float v129; // s8
  float v130; // s9
  float v131; // s10
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL; // s0
  bool v133; // w1
  __int64 v134; // x10
  char v135; // w9
  int32_t v136; // w24
  int32_t v137; // w20
  int32_t gachaExtraGiftResultType; // w23
  GachaExtraGifts_o *v139; // x15
  int32_t gachaExtraGiftBonusType; // w14
  GiftEntity_o *v141; // x21
  ItemEntity_o *v142; // x22
  struct UISprite_o *v143; // x8
  struct UILabel_o *v144; // x8
  struct UILabel_o *v145; // x9
  bool v146; // w21
  char v147; // w20
  UnityEngine_GameObject_o *v148; // x0
  char v149; // w1
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  struct UILabel_o *extraGiftTitleLb; // x8
  struct UILabel_o *v152; // x9
  const MethodInfo *v153; // x2
  __int64 v154; // x0
  const MethodInfo *v155; // [xsp+0h] [xbp-D0h]
  System_Int32_array *v156; // [xsp+10h] [xbp-C0h]
  GachaExtraGifts_array *v157; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+20h] [xbp-B0h]
  char v159; // [xsp+2Ch] [xbp-A4h]
  struct UIGrid_o **p_scdGrid; // [xsp+30h] [xbp-A0h]
  float pos_x; // [xsp+3Ch] [xbp-94h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4

  v7 = extraGiftIds;
  v9 = resultList;
  if ( (byte_42EC936 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)resultList, type, extraGiftIds);
    sub_B5D5C4(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_SummonResultComponent_showResCcDetail__, v47, v48, v49);
    sub_B5D5C4(&Method_SummonResultComponent_showResSvtDetail__, v50, v51, v52);
    sub_B5D5C4(&SummonResultComponent_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12588/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12610/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1/*""*/, v62, v63, v64);
    byte_42EC936 = 1;
  }
  message = 0LL;
  title = 0LL;
  pos_x = 0.0;
  changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     changeSceneBtnInfo,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v67, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v68, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v69, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_211;
    cellHeight = fstGrid->fields.cellHeight;
    scdGrid = this->fields.scdGrid;
    p_scdGrid = &this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_211;
    v156 = v7;
    v157 = gachaExtraGiftList;
    cellWidth_low = LODWORD(fstGrid->fields.cellWidth);
    v75 = scdGrid->fields.cellHeight;
    v76 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v76,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    this->fields.befSvtList = v76;
    p_befSvtList = &this->fields.befSvtList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.befSvtList,
      (System_Int32_array **)v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    v83 = v9->max_length;
    if ( v83 >= 1 )
    {
      v84 = 0LL;
      m_Items = v9->m_Items;
      v86 = v9;
      v159 = 0;
      while ( (unsigned int)v84 < v83 )
      {
        p_fstGrid = &this->fields.scdGrid;
        if ( (unsigned int)v84 < 6 )
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_211;
        v88 = m_Items[v84];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        v91 = changeSceneBtnInfo;
        v92 = UnityEngine_GameObject__get_transform(changeSceneBtnInfo, 0LL);
        *(UnityEngine_Vector3_o *)&v93 = UnityEngine_Vector3__get_one(0LL);
        if ( !v92 )
          goto LABEL_211;
        UnityEngine_Transform__set_localScale(v92, *(UnityEngine_Vector3_o *)&v93, 0LL);
        if ( !v88 )
          goto LABEL_211;
        if ( v88->fields.isNew
          && (objectId = v88->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v96)) )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_211;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
            objectId,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v98 = 0;
        }
        else
        {
          v98 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v88->fields.type, 0LL);
        v100 = (SummonResultInfoComponent_ClickDelegate_o *)sub_B5D694(SummonResultInfoComponent_ClickDelegate_TypeInfo);
        v101 = v100;
        if ( IsCommandCode )
          v102 = &Method_SummonResultComponent_showResCcDetail__;
        else
          v102 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v100, (Il2CppObject *)this, *v102, 0LL);
        if ( v88->fields.sellMana || v88->fields.sellQp )
        {
          v101 = 0LL;
          v159 = 1;
        }
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v91,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v88,
          v98,
          v101,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v103);
        sellQp = v88->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v9 = v86;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v9 = v86;
        }
        QpMax = *(_DWORD *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr + 4LL);
        if ( summonBeforeQp + sellQp >= QpMax )
        {
          if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
            QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
          }
        }
        else
        {
          QpMax = this->fields.summonBeforeQp + v88->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v88->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
        {
          j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr + 68LL);
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          UserItemMax = this->fields.summonBeforeMana + v88->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v83 = v9->max_length;
        if ( (int)++v84 >= v83 )
          goto LABEL_63;
      }
LABEL_212:
      v154 = sub_B5D6C8(changeSceneBtnInfo);
      sub_B5D668(v154, 0LL);
    }
    v159 = 0;
LABEL_63:
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.fstGrid;
    v110 = (float)max_length;
    v111 = (float)cellWidth_low;
    v112 = (float)max_length <= v111 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                       0LL);
    v7 = v156;
    gachaExtraGiftList = v157;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    v113 = v110 <= v111 ? v110 : v111;
    v164.fields.x = -(float)((float)(cellHeight * 0.5) * (float)(v113 + -1.0));
    v164.fields.y = v112;
    v164.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v164, 0LL);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.fstGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))changeSceneBtnInfo->klass[1]._1.castClass)(
      changeSceneBtnInfo,
      changeSceneBtnInfo->klass[1]._1.declaringType);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_scdGrid;
    if ( !*p_scdGrid )
      goto LABEL_211;
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                       0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    v114 = (float)(v110 - v111) + -1.0;
    if ( v110 <= v111 )
      v114 = -1.0;
    v165.fields.z = this->fields.center.fields.z;
    v165.fields.x = -(float)((float)(v75 * 0.5) * v114);
    v165.fields.y = -62.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v165, 0LL);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.scdGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))changeSceneBtnInfo->klass[1]._1.castClass)(
      changeSceneBtnInfo,
      changeSceneBtnInfo->klass[1]._1.declaringType);
    changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
    changeSceneBtnInfo = this->fields.autoSaleMsg;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    if ( (v159 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12610/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
                                                         0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_211;
      v116 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_211;
      v116 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v116, 0LL);
  }
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
  if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
  }
  if ( !extraGiftMsgLb )
    goto LABEL_211;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  if ( v7 )
  {
    if ( gachaExtraGiftList )
    {
      v118 = *(_QWORD *)&v7->max_length;
      if ( v118 )
      {
        pos_x = 0.0;
        message = (System_String_o *)StringLiteral_1/*""*/;
        title = (System_String_o *)StringLiteral_1/*""*/;
        if ( (_DWORD)v118 == 1 )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !v7->max_length )
            goto LABEL_212;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          DataById = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, v7->m_Items[1], 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !DataById )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             DataById->fields.objectId,
                                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v120 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v120->fields.id, -1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          extraGiftMsgSpr = this->fields.extraGiftMsgSpr;
          if ( !extraGiftMsgSpr )
            goto LABEL_211;
          GameObjectExtensions__SetLocalPositionX(changeSceneBtnInfo, (float)(extraGiftMsgSpr->fields.mWidth / 2), 0LL);
          if ( !gachaExtraGiftList->max_length )
            goto LABEL_212;
          v122 = gachaExtraGiftList->m_Items[0];
          if ( !v122 )
            goto LABEL_211;
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  DataById,
                  v120,
                  v122->fields.gachaExtraGiftResultType,
                  v122->fields.gachaExtraGiftBonusType,
                  v155) )
          {
            v147 = 0;
LABEL_207:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( changeSceneBtnInfo )
            {
              changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                     0LL);
              if ( changeSceneBtnInfo )
              {
                v133 = v147;
                goto LABEL_210;
              }
            }
LABEL_211:
            sub_B5D69C(changeSceneBtnInfo, resultList);
          }
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, title, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, message, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UILabel__UpdateCondensedScaleComponent((UILabel_o *)changeSceneBtnInfo, 0LL);
          extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
          if ( !extraGiftMsg2Lb )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          mWidth = extraGiftMsg2Lb->fields.mWidth;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          if ( mWidth > *(_DWORD *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr + 56LL) )
          {
            v125 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
            if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
              j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            if ( !v125 )
              goto LABEL_211;
            UIWidget__set_width(v125, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
          }
          if ( !v9 )
            goto LABEL_211;
          v126 = this->fields.fstGrid;
          if ( !v126 )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v127 = v9->max_length;
          v128 = LODWORD(v126->fields.cellWidth);
          v129 = pos_x;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          v130 = (float)v127;
          v131 = (float)v128;
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                      + 32LL);
          if ( v129 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL )
          {
            if ( v130 <= v131 )
            {
              if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0
                && !LODWORD(changeSceneBtnInfo[9].monitor) )
              {
                j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
                changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
              }
            }
            else
            {
              SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = -47.0;
            }
            v129 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
          }
          if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                   + 40LL);
          if ( v129 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX )
          {
            if ( v130 <= v131 )
            {
              if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0
                && !LODWORD(changeSceneBtnInfo[9].monitor) )
              {
                j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
              }
            }
            else
            {
              SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = -185.0;
            }
            v129 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          }
          extraGiftTitleLb = this->fields.extraGiftTitleLb;
          if ( !extraGiftTitleLb )
            goto LABEL_211;
          v152 = this->fields.extraGiftMsg2Lb;
          if ( !v152 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(extraGiftTitleLb->fields.mWidth / 2),
            (float)(v152->fields.mWidth / 2),
            v129,
            (const MethodInfo *)resultList);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgSpr;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v149 = 1;
          v147 = 1;
LABEL_206:
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v149, 0LL);
          goto LABEL_207;
        }
        if ( (int)v118 < 1 )
          goto LABEL_215;
        v134 = 0LL;
        v135 = 0;
        v136 = 0;
        v137 = 0;
        gachaExtraGiftResultType = 0;
        do
        {
          if ( (unsigned int)v134 >= gachaExtraGiftList->max_length )
            goto LABEL_212;
          v139 = gachaExtraGiftList->m_Items[v134];
          if ( !v139 )
            goto LABEL_211;
          gachaExtraGiftBonusType = v139->fields.gachaExtraGiftBonusType;
          if ( !v136 && gachaExtraGiftBonusType == 2 )
          {
            v136 = v7->m_Items[v134 + 1];
            gachaExtraGiftResultType = v139->fields.gachaExtraGiftResultType;
            v137 = 2;
          }
          ++v134;
          v135 |= gachaExtraGiftBonusType == 1;
        }
        while ( (int)v134 < (int)v118 );
        if ( (v135 & 1) != 0 )
        {
          if ( !v136 )
            goto LABEL_176;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v141 = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, v136, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !v141 )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             v141->fields.objectId,
                                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v142 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v142->fields.id, -1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          v143 = this->fields.extraGiftMsgSpr;
          if ( !v143 )
            goto LABEL_211;
          GameObjectExtensions__SetLocalPositionX(changeSceneBtnInfo, (float)(v143->fields.mWidth / 2), 0LL);
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  v141,
                  v142,
                  gachaExtraGiftResultType,
                  v137,
                  v155) )
          {
LABEL_176:
            v146 = 0;
            v147 = 0;
LABEL_177:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
            GameObjectExtensions__SetLocalPositionX(v148, 0.0, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgSpr;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v146, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v149 = !v146;
            goto LABEL_206;
          }
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, title, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, message, 0LL);
          v144 = this->fields.extraGiftTitleLb;
          if ( !v144 )
            goto LABEL_211;
          v145 = this->fields.extraGiftMsg2Lb;
          if ( !v145 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v144->fields.mWidth / 2),
            (float)(v145->fields.mWidth / 2),
            pos_x,
            (const MethodInfo *)resultList);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v146 = 1;
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
        }
        else
        {
LABEL_215:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12588/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                             0LL);
          if ( !this->fields.extraGiftMsgLb )
            goto LABEL_211;
          UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
          v146 = 0;
        }
        v147 = 1;
        goto LABEL_177;
      }
    }
  }
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v133 = 0;
LABEL_210:
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v133, 0LL);
  SummonResultComponent__setListByType(this, this->fields.dispType, v153);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EC940 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12388/*"SHOW_TALK"*/, (_DWORD)method, v2, v3);
    byte_42EC940 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B5D69C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12388/*"SHOW_TALK"*/, 0LL);
  }
}


void __fastcall SummonResultComponent__setBeforeQpMana(
        SummonResultComponent_o *this,
        int32_t qp,
        int32_t mana,
        const MethodInfo *method)
{
  this->fields.summonBeforeQp = qp;
  this->fields.summonBeforeMana = mana;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setCenter(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mWidget; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  float *p_m_CachedPtr; // x21
  unsigned __int64 v7; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float32x2_t v14; // d8
  float v15; // s9
  float32x2_t v16; // d10
  float v17; // s11
  float v18; // s0
  __int64 v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mWidget->klass[1]._1.klass)(
                                               mWidget,
                                               mWidget->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_B5D69C(mWidget, method);
  }
  klass = (unsigned int)mWidget[1].klass;
  v5 = (float32x2_t *)mWidget;
  p_m_CachedPtr = (float *)&mWidget[1].fields.m_CachedPtr;
  v7 = -1LL;
  do
  {
    if ( v7 + 1 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v8 = *(p_m_CachedPtr - 2);
    v9 = *(p_m_CachedPtr - 1);
    v10 = *p_m_CachedPtr;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0LL);
    if ( !mWidget )
      goto LABEL_11;
    v20.fields.x = v8;
    v20.fields.y = v9;
    v20.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mWidget,
                                       v20,
                                       0LL);
    if ( v7 + 1 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v7;
  }
  while ( v7 <= 2 );
  if ( klass < 3 )
  {
LABEL_12:
    v19 = sub_B5D6C8(mWidget);
    sub_B5D668(v19, 0LL);
  }
  v14.n64_u64[0] = v5[4].n64_u64[0];
  v15 = v5[5].n64_f32[0];
  v16.n64_u64[0] = v5[7].n64_u64[0];
  v17 = v5[8].n64_f32[0];
  v18 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v18));
  this->fields.center.fields.z = v15 + (float)((float)(v17 - v15) * v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setListByType(
        SummonResultComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int64_t closeInfo; // x0
  System_String_o *v106; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v108; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  UIWidget_o *summonBtnLabel; // x22
  int v112; // s0
  UIWidget_o *formationBtnSpr; // x22
  int v117; // s0
  UIWidget_o *combineBtnSpr; // x22
  int v122; // s0
  UIWidget_o *summonBtnSpr; // x22
  int v127; // s0
  UIWidget_o *sellBtnSpr; // x22
  int v132; // s0
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v137; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *v140; // x22
  Il2CppObject *v141; // x0
  UILabel_o *v142; // x22
  int32_t gachaId; // w22
  __int64 v144; // x23
  __int64 v145; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGachaMaster_o *Master_WarQuestSelectionMaster; // x24
  System_String_o *v148; // x22
  UILabel_o *v149; // x23
  Il2CppObject *v150; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v153; // x23
  __int64 v154; // x23
  int v155; // w23
  SummonControl_c *v156; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v158; // w0
  WarEntity_o *Entity; // x0
  WarEntity_o *v160; // x22
  UILabel_o *v161; // x22
  Il2CppObject *v162; // x0
  UserItemMaster_o *v163; // x21
  UserItemEntity_o *v164; // x0
  UIWidget_o *v165; // x21
  float v166; // s4
  float v167; // s5
  float v168; // s6
  float v169; // s7
  UIWidget_o *v170; // x21
  int v171; // s0
  UILabel_o *v175; // x21
  struct UILabel_o *v176; // x21
  System_String_o *v177; // x1
  int v178; // w9
  UIWidget_o *v179; // x21
  int v180; // s0
  UIWidget_o *v184; // x21
  int v185; // s0
  UIWidget_o *v189; // x21
  float v190; // s4
  float v191; // s5
  float v192; // s6
  float v193; // s7
  UIWidget_o *v194; // x21
  int v195; // s0
  UILabel_o *v199; // x21
  UILabel_o *v200; // x21
  UILabel_o *v201; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v203; // x22
  Il2CppObject *v204; // x0
  struct SummonControl_o *v205; // x8
  struct SummonControl_o *v206; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v208; // x0
  UnityEngine_GameObject_o *v209; // x0
  UnityEngine_GameObject_o *v210; // x0
  struct UnityEngine_GameObject_o *touchBlocker; // x21
  struct UnityEngine_GameObject_o *v212; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v221; // x0
  UnityEngine_Component_o *Parent; // x0
  int v223; // s1
  SummonResultComponent_c *v226; // x0
  int methodPointer; // s0
  float x; // s9
  float v229; // s4
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s8
  UnityEngine_Color_o v232; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector2_o v234; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v235; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v236; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v237; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v238; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v239; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v4 = type;
  if ( (byte_42EC937 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblUserMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaAppendMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGachaMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v27, v28, v29);
    sub_B5D5C4(&DataManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v33, v34, v35);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v36, v37, v38);
    sub_B5D5C4(&FSUtility_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v42, v43, v44);
    sub_B5D5C4(&int_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&NetworkManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v54, v55, v56);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v60, v61, v62);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v66, v67, v68);
    sub_B5D5C4(&SummonControl_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&SummonResultComponent_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&UserGachaMaster_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_12559/*"SUMMON_APPEND_END"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_12375/*"SHORT_SERVANT_FORMATION"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_12590/*"SUMMON_FREE_10_BTN"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_12380/*"SHORT_SERVANT_SELL"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_12594/*"SUMMON_LIMIT_OVER_BTN"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_12616/*"SUMMON_TICKET_END"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_12366/*"SHORT_SERVANT_COMBINE"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_3451/*"CONTINUE_SUMMON_BTN"*/, v102, v103, v104);
    byte_42EC937 = 1;
  }
  methoda.genericMethod = 0LL;
  memset(&methoda.klass, 0, 24);
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( v4 == 1 )
  {
    closeInfo = (int64_t)this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 0, 0LL);
    closeInfo = (int64_t)this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_3451/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v108 = v106;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12375/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_198;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12366/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_198;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12380/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_198;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    summonBtnLabel = (UIWidget_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    *(UnityEngine_Color_o *)&v112 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnLabel )
      goto LABEL_198;
    UIWidget__set_color(summonBtnLabel, *(UnityEngine_Color_o *)&v112, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    formationBtnSpr = (UIWidget_o *)this->fields.formationBtnSpr;
    *(UnityEngine_Color_o *)&v117 = UnityEngine_Color__get_white(0LL);
    if ( !formationBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(formationBtnSpr, *(UnityEngine_Color_o *)&v117, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    combineBtnSpr = (UIWidget_o *)this->fields.combineBtnSpr;
    *(UnityEngine_Color_o *)&v122 = UnityEngine_Color__get_white(0LL);
    if ( !combineBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(combineBtnSpr, *(UnityEngine_Color_o *)&v122, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    summonBtnSpr = (UIWidget_o *)this->fields.summonBtnSpr;
    *(UnityEngine_Color_o *)&v127 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(summonBtnSpr, *(UnityEngine_Color_o *)&v127, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    sellBtnSpr = (UIWidget_o *)this->fields.sellBtnSpr;
    *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_white(0LL);
    if ( !sellBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(sellBtnSpr, *(UnityEngine_Color_o *)&v132, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_198;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_198;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v137 = this->fields.summonCtrl;
    if ( !v137 )
      goto LABEL_198;
    gachaParamData = v137->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_198;
    gachaType = gachaParamData->fields.gachaType;
    v140 = this->fields.summonBtnLabel;
    LODWORD(v232.fields.r) = gachaParamData->fields.gachaTime;
    v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
    closeInfo = (int64_t)System_String__Format(v108, v141, 0LL);
    if ( !v140 )
      goto LABEL_198;
    UILabel__set_text(v140, (System_String_o *)closeInfo, 0LL);
    v142 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonResultComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    }
    if ( !v142 )
      goto LABEL_198;
    UILabel__SetCondensedScale(
      v142,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v144 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v144 + 306) & 1) == 0 )
          sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v145 = **(_QWORD **)(v144 + 192);
        if ( (*(_BYTE *)(v145 + 306) & 1) == 0 )
          sub_AF52C4(v145);
        closeInfo = **(_QWORD **)(v145 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)closeInfo,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_198;
        closeInfo = UserGachaMaster__TryGetEntity(
                      Master_WarQuestSelectionMaster,
                      (UserGachaEntity_o **)&methoda.parameters,
                      closeInfo,
                      gachaId,
                      0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_198;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          (WarEntity_o **)&methoda.return_type,
          gachaId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12594/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !methoda.return_type )
          goto LABEL_198;
        v148 = (System_String_o *)closeInfo;
        if ( !methoda.return_type[4].bits )
          goto LABEL_57;
        closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !methoda.return_type || !closeInfo )
          goto LABEL_198;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      methoda.return_type[4].bits,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_57;
        v149 = this->fields.summonBtnLabel;
        LODWORD(v232.fields.r) = 2;
        v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
        closeInfo = (int64_t)System_String__Format(v108, v150, 0LL);
        if ( !v149 )
          goto LABEL_198;
        UILabel__set_text(v149, (System_String_o *)closeInfo, 0LL);
LABEL_57:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_198;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)methoda.return_type,
                                (GachaAppendEntity_o **)&methoda.klass,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v148 = LocalizationManager__Get((System_String_o *)StringLiteral_12559/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_129:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_198;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            v236.fields.r = 0.35547;
            v189 = (UIWidget_o *)this->fields.summonBtnSpr;
            v236.fields.a = 1.0;
            v236.fields.g = 0.35547;
            v236.fields.b = 0.35547;
            v232 = (UnityEngine_Color_o)0LL;
            UnityEngine_Color___ctor(v236, v190, v191, v192, v193, (const MethodInfo *)&v232);
            if ( !v189 )
              goto LABEL_198;
            UIWidget__set_color(v189, v232, 0LL);
            v194 = (UIWidget_o *)this->fields.summonBtnLabel;
            *(UnityEngine_Color_o *)&v195 = UnityEngine_Color__get_gray(0LL);
            if ( !v194 )
              goto LABEL_198;
            UIWidget__set_color(v194, *(UnityEngine_Color_o *)&v195, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v199 = this->fields.summonBtnLabel;
            if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonResultComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            }
            if ( !v199 )
              goto LABEL_198;
            UILabel__SetCondensedScale(
              v199,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_198;
            v177 = v148;
LABEL_138:
            UILabel__set_text((UILabel_o *)closeInfo, v177, 0LL);
            goto LABEL_163;
          }
        }
        else if ( methoda.parameters )
        {
          if ( !methoda.return_type )
            goto LABEL_198;
          v178 = *(&methoda.return_type[5].bits + 1);
          if ( v178 >= 1 && *((_DWORD *)methoda.parameters + 7) >= v178 )
            goto LABEL_129;
        }
LABEL_125:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        v179 = (UIWidget_o *)this->fields.summonBtnSpr;
        *(UnityEngine_Color_o *)&v180 = UnityEngine_Color__get_white(0LL);
        if ( !v179 )
          goto LABEL_198;
        UIWidget__set_color(v179, *(UnityEngine_Color_o *)&v180, 0LL);
        v184 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v185 = UnityEngine_Color__get_white(0LL);
        if ( !v184 )
          goto LABEL_198;
        UIWidget__set_color(v184, *(UnityEngine_Color_o *)&v185, 0LL);
LABEL_163:
        v205 = this->fields.summonCtrl;
        if ( v205 )
        {
          closeInfo = (int64_t)v205->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v206 = this->fields.summonCtrl;
            if ( v206 )
            {
              v206->fields.isResult = 1;
              if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TutorialFlag_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              }
              if ( TutorialFlag__IsProgressDone(2, 0LL) )
              {
                closeInfo = (int64_t)this->fields.formationBtnLabel;
                if ( closeInfo )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                  closeInfo = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
                  if ( closeInfo )
                  {
                    closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)closeInfo,
                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v208 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v208, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v209 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v209, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v210 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v210, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                      if ( closeInfo )
                                      {
                                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                        break;
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
              else
              {
                touchBlocker = this->fields.touchBlocker;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v212 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)touchBlocker,
                                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = v212;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.blocker,
                  (System_Int32_array **)v212,
                  v214,
                  v215,
                  v216,
                  v217,
                  v218,
                  v219);
                blocker = this->fields.blocker;
                v221 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v221, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v226 = SummonResultComponent_TypeInfo;
                if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v226 = SummonResultComponent_TypeInfo;
                }
                *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v226->static_fields->TUTORIAL_BACK_ARROW_RECT;
                methodPointer = (int)methoda.methodPointer;
                x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v223 - 1), &methoda);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v237.fields.m_XMin = x - FSUtility__GetOffsetX(68.0, 0, 0LL);
                UnityEngine_Rect__set_x(v237, v229, &methoda);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    *(_QWORD *)&v238.fields.m_Width = methoda.invoker_method;
                    *(_QWORD *)&v238.fields.m_XMin = methoda.methodPointer;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v238, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        *(_QWORD *)&v239.fields.m_Width = methoda.invoker_method;
                        *(_QWORD *)&v239.fields.m_XMin = methoda.methodPointer;
                        v234.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
                        v234.fields.y = TutorialBackArrowPos.fields.y;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v234,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v239,
                          0LL,
                          0LL);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_198;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v153 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v153 + 306) & 1) == 0 )
          sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v154 = **(_QWORD **)(v153 + 192);
        if ( (*(_BYTE *)(v154 + 306) & 1) == 0 )
          sub_AF52C4(v154);
        closeInfo = **(_QWORD **)(v154 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_198;
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_198;
        v155 = *(_DWORD *)(closeInfo + 24);
        v156 = SummonControl_TypeInfo;
        if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v156 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v156->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        }
        v158 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                 FRIEND_POINT_SUMMON_ID,
                 (int32_t *)&methoda.genericContainerHandle + 1,
                 (int32_t *)&methoda.genericMethod,
                 0LL);
        if ( SHIDWORD(methoda.genericContainerHandle) > 0 || v158 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_198;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v200 = this->fields.summonBtnLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v200 )
            goto LABEL_198;
          UILabel__set_text(v200, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v201 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v201 )
            goto LABEL_198;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          *(_QWORD *)&type = (unsigned int)gachaParamData->fields.gachaTime;
          if ( type == 1 )
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_198;
            type = 1;
          }
          else
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( v155 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_198;
              if ( v155 < 400 )
                type = 1;
              else
                type = v155 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_198;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v203 = this->fields.summonBtnLabel;
          LODWORD(v232.fields.r) = gachaParamData->fields.gachaTime;
          v204 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
          closeInfo = (int64_t)System_String__Format(v108, v204, 0LL);
          if ( !v203 )
            goto LABEL_198;
          UILabel__set_text(v203, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v201 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v201 )
LABEL_198:
            sub_B5D69C(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v201, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_163;
      case 5:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)closeInfo,
                   gachaParamData->fields.gachaId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_100;
        v160 = Entity;
        if ( !LODWORD(Entity->fields.emptyMessage) )
          goto LABEL_100;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v160->fields.emptyMessage,
               0LL) != 9 )
          goto LABEL_100;
        v161 = this->fields.summonBtnLabel;
        LODWORD(v232.fields.r) = gachaParamData->fields.gachaTime + 1;
        v162 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
        closeInfo = (int64_t)System_String__Format(v108, v162, 0LL);
        if ( !v161 )
          goto LABEL_198;
        UILabel__set_text(v161, (System_String_o *)closeInfo, 0LL);
LABEL_100:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v163 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v163 )
          goto LABEL_198;
        v164 = UserItemMaster__GetEntity(v163, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v164 && v164->fields.num > 0 )
          goto LABEL_125;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        v235.fields.r = 0.35547;
        v165 = (UIWidget_o *)this->fields.summonBtnSpr;
        v235.fields.a = 1.0;
        v235.fields.g = 0.35547;
        v235.fields.b = 0.35547;
        *(_QWORD *)&v232.fields.r = 0LL;
        *(_QWORD *)&v232.fields.b = 0LL;
        UnityEngine_Color___ctor(v235, v166, v167, v168, v169, (const MethodInfo *)&v232);
        if ( !v165 )
          goto LABEL_198;
        UIWidget__set_color(v165, v232, 0LL);
        v170 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v171 = UnityEngine_Color__get_gray(0LL);
        if ( !v170 )
          goto LABEL_198;
        UIWidget__set_color(v170, *(UnityEngine_Color_o *)&v171, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v175 = this->fields.summonBtnLabel;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        }
        if ( !v175 )
          goto LABEL_198;
        UILabel__SetCondensedScale(
          v175,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v176 = this->fields.summonBtnLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12616/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v176 )
          goto LABEL_198;
        v177 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v176;
        goto LABEL_138;
      default:
        goto LABEL_163;
    }
  }
  this->fields.dispType = v4;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void __fastcall SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *SelfUserGame; // x0
  __int64 v21; // x1
  int v22; // w2
  __int64 v23; // x3
  BalanceConfig_c *v24; // x0
  UILabel_o *svtTitleLb; // x20
  UILabel_o *svtNumLb; // x20
  UILabel_o *svtMaxLb; // x20
  UILabel_o *svtEqTitleLb; // x20
  UILabel_o *svtEqNumLb; // x20
  UILabel_o *svtEqMaxLb; // x20
  UILabel_o *CcNumLb; // x20
  UILabel_o *CcMaxLb; // x19
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF
  __int64 servantSum; // [xsp+10h] [xbp-20h] BYREF
  int monitor_high; // [xsp+18h] [xbp-18h] BYREF
  int monitor; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42EC93B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_7109/*"HAVE_SVT_NUM_TITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_7108/*"HAVE_SVTEQ_NUM_TITLE"*/, v17, v18, v19);
    byte_42EC93B = 1;
  }
  monitor = 0;
  monitor_high = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  servantSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_25;
  monitor = (int)SelfUserGame[1].monitor;
  monitor_high = HIDWORD(SelfUserGame[1].monitor);
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v21, v22, v23);
    byte_42E4B73 = 1;
  }
  v24 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  HIDWORD(servantSum) = v24->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, (int32_t *)&servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7109/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
  if ( !svtTitleLb )
    goto LABEL_25;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_25;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&monitor, 0LL);
  if ( !svtMaxLb )
    goto LABEL_25;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7108/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
  if ( !svtEqTitleLb )
    goto LABEL_25;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0LL);
  if ( !svtEqNumLb )
    goto LABEL_25;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&monitor_high, 0LL);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, (System_String_o *)SelfUserGame, 0LL),
        CcNumLb = this->fields.CcNumLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)servantEquipSum, 0LL),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, (System_String_o *)SelfUserGame, 0LL),
        CcMaxLb = this->fields.CcMaxLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum + 4, 0LL),
        !CcMaxLb) )
  {
LABEL_25:
    sub_B5D69C(SelfUserGame, v21);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_42EC93D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__, v12, v13, v14);
    sub_B5D5C4(&SummonResultComponent___c__DisplayClass64_0_TypeInfo, v15, v16, v17);
    byte_42EC93D = 1;
  }
  v18 = sub_B5D694(SummonResultComponent___c__DisplayClass64_0_TypeInfo);
  SummonResultComponent___c__DisplayClass64_0___ctor((SummonResultComponent___c__DisplayClass64_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 24) = this;
  *(_QWORD *)(v18 + 16) = usrSvtId;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v18,
    Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_42EC93C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__, v12, v13, v14);
    sub_B5D5C4(&SummonResultComponent___c__DisplayClass63_0_TypeInfo, v15, v16, v17);
    byte_42EC93C = 1;
  }
  v18 = sub_B5D694(SummonResultComponent___c__DisplayClass63_0_TypeInfo);
  SummonResultComponent___c__DisplayClass63_0___ctor((SummonResultComponent___c__DisplayClass63_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 24) = this;
  *(_QWORD *)(v18 + 16) = usrSvtId;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v18,
    Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass63_0___ctor(
        SummonResultComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass63_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass63_0_o *this,
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
  WebViewManager_o *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v17; // x19
  ServantStatusDialog_EndDelegate_o *v18; // x21
  WebViewManager_o *v19; // x0
  __int64 v20; // x1
  CommonUI_o *v21; // x19

  if ( (byte_42E647C & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonResultComponent_DialogCallBack__, v11, v12, v13);
    byte_42E647C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v17 = (CommonUI_o *)Instance;
  v18 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v18, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v17 )
    goto LABEL_9;
  CommonUI__OpenServantStatusDialog_18211624(v17, 8, usrSvtId, v18, 0LL, 0LL);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (CommonUI_o *)v19;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v21 )
LABEL_9:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass64_0___ctor(
        SummonResultComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass64_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass64_0_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  UserServantEntity_o *Entity; // x20
  WebViewManager_o *v26; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v28; // x19
  ServantStatusDialog_EndDelegate_o *v29; // x21
  CommonUI_o *v30; // x19

  if ( (byte_42E647D & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonResultComponent_DialogCallBack__, v20, v21, v22);
    byte_42E647D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v28 = (CommonUI_o *)v26;
  v29 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v29, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v28 )
    goto LABEL_11;
  CommonUI__OpenServantStatusDialog_18215196(v28, 0, (UserCommandCodeEntity_o *)Entity, v29, 0LL, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v30 )
LABEL_11:
    sub_B5D69C(Instance, v24);
  CommonUI__maskFadein(v30, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}