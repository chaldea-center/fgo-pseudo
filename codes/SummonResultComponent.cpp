void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  float v1; // s4
  float v2; // s5
  float v3; // s6
  float v4; // s7
  SummonResultComponent_c *v5; // x8
  struct UnityEngine_Rect_o v6; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4355EA6 & 1) == 0 )
  {
    sub_B70694(&SummonResultComponent_TypeInfo);
    byte_4355EA6 = 1;
  }
  v7.fields.m_Width = 160.0;
  v7.fields.m_Height = 60.0;
  SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY = 180.0;
  v7.fields.m_XMin = -510.0;
  v7.fields.m_YMin = 225.0;
  v6 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v7, v1, v2, v3, v4, (const MethodInfo *)&v6);
  SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_RECT = v6;
  v5 = SummonResultComponent_TypeInfo;
  SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE = 165;
  v5->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = 159;
  v5->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL = 190;
  v5->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = -38;
  v5->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = -254;
  v5->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = -176;
  v5->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME = -383;
  v5->static_fields->DEFAULT_FONT_SIZE = 25;
  v5->static_fields->SMALL_FONT_SIZE = 23;
  v5->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX = 752;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  int32_t v4; // w0

  if ( (byte_4355EA5 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_5588/*"END_SUMMON"*/);
    sub_B70694(&StringLiteral_8498/*"LIMIT_OVER"*/);
    byte_4355EA5 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8498/*"LIMIT_OVER"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v4 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5588/*"END_SUMMON"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v4 = 0;
  }
  SoundManager__playSystemSe(v4, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  BattleServantConfConponent_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4355E9D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355E9D = 1;
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
    UnityEngine_Object__Destroy_36067208(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_B70630(p_blocker, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4355EA2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonResultComponent__DialogCallBack_b__65_0__);
    byte_4355EA2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__65_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v8, v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v7, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UILabel_o *extraGiftMsg2Lb; // x0
  __int64 v24; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool result; // w0
  System_String_o *v28; // x22
  _QWORD **v29; // x25
  __int64 v30; // x23
  __int16 v31; // w8
  __int64 v32; // x23
  __int64 v33; // x23
  __int64 v34; // x23
  System_String_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  SummonResultComponent_c *v50; // x0
  int32_t SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX; // s0
  int32_t summonBeforeMana; // w25
  BalanceConfig_c *v53; // x0
  int32_t ManaMax; // w8
  System_String_o *v55; // x23
  _QWORD **v56; // x25
  __int64 v57; // x24
  __int16 v58; // w8
  __int64 v59; // x24
  __int64 v60; // x24
  __int64 v61; // x24
  System_String_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_o *v69; // x21
  __int64 v70; // x2
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  SummonResultComponent_c *v79; // x0
  System_String_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_o *v87; // x21
  __int64 v88; // x2
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  SummonResultComponent_c *v97; // x0
  int32_t v98; // w25
  int32_t v99; // w24
  System_String_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_o *v107; // x0
  __int64 v108; // x2
  int32_t v109; // w8
  System_String_o *v110; // x21
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  UILabel_o *extraGiftTitleLb; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v121; // [xsp+18h] [xbp-48h] BYREF
  int32_t v122; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4355E9C & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_object___);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&SummonResultComponent_TypeInfo);
    sub_B70694(&StringLiteral_12594/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_B70694(&StringLiteral_12598/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/);
    sub_B70694(&StringLiteral_12596/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_B70694(&StringLiteral_12600/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_B70694(&StringLiteral_12599/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/);
    sub_B70694(&StringLiteral_12595/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_12597/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_4355E9C = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)pos_x,
    (System_Boolean_array **)giftEntity,
    (System_Int32_array **)itemEntity,
    *(System_Int32_array **)&giftResultType,
    *(System_Int32_array **)&giftBonusType);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12599/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, 0LL);
        v29 = (_QWORD **)Method_System_Array_Empty_object___;
        v30 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
        v31 = *(_WORD *)(v30 + 306);
        if ( (v31 & 1) == 0 )
        {
          sub_B08394(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
          v31 = *(_WORD *)(v30 + 306);
        }
        if ( (v31 & 0x400) != 0 )
        {
          v32 = *v29[6];
          if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
            sub_B08394(*v29[6]);
          if ( !*(_DWORD *)(v32 + 224) )
          {
            v33 = *v29[6];
            if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
              sub_B08394(*v29[6]);
            j_il2cpp_runtime_class_init_0(v33);
          }
        }
        v34 = *v29[6];
        if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
          sub_B08394(*v29[6]);
        v35 = System_String__Format_44836892(v28, **(System_Object_array ***)(v34 + 184), 0LL);
        *title = v35;
        sub_B70630((BattleServantConfConponent_o *)title, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, 0LL);
        v43 = System_String__Format(v42, (Il2CppObject *)itemEntity->fields.name, 0LL);
        *message = v43;
        sub_B70630((BattleServantConfConponent_o *)message, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
        v50 = SummonResultComponent_TypeInfo;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v50 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v50->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
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
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12600/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      *title = v80;
      sub_B70630((BattleServantConfConponent_o *)title, (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12595/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      num = giftEntity->fields.num;
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v88);
      v90 = System_String__Format(v87, v89, 0LL);
      *message = v90;
      sub_B70630((BattleServantConfConponent_o *)message, (System_Int32_array **)v90, v91, v92, v93, v94, v95, v96);
      v97 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v97 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v97->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      goto LABEL_58;
    }
    summonBeforeMana = this->fields.summonBeforeMana;
    v53 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    ManaMax = v53->static_fields->ManaMax;
    if ( summonBeforeMana == ManaMax )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12597/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v56 = (_QWORD **)Method_System_Array_Empty_object___;
      v57 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v58 = *(_WORD *)(v57 + 306);
      if ( (v58 & 1) == 0 )
      {
        sub_B08394(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v58 = *(_WORD *)(v57 + 306);
      }
      if ( (v58 & 0x400) != 0 )
      {
        v59 = *v56[6];
        if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
          sub_B08394(*v56[6]);
        if ( !*(_DWORD *)(v59 + 224) )
        {
          v60 = *v56[6];
          if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
            sub_B08394(*v56[6]);
          j_il2cpp_runtime_class_init_0(v60);
        }
      }
      v61 = *v56[6];
      if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
        sub_B08394(*v56[6]);
      v62 = System_String__Format_44836892(v55, **(System_Object_array ***)(v61 + 184), 0LL);
      *title = v62;
      sub_B70630((BattleServantConfConponent_o *)title, (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12594/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      v122 = giftEntity->fields.num;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122, v70);
      v72 = System_String__Format(v69, v71, 0LL);
      *message = v72;
      sub_B70630((BattleServantConfConponent_o *)message, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
      v79 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v79 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v79->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      goto LABEL_58;
    }
    v98 = this->fields.summonBeforeMana;
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = BalanceConfig_TypeInfo;
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    if ( v98 >= ManaMax )
      return 0;
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    v99 = ManaMax - this->fields.summonBeforeMana;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12600/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
    *title = v100;
    sub_B70630((BattleServantConfConponent_o *)title, (System_Int32_array **)v100, v101, v102, v103, v104, v105, v106);
    v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12596/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
    v109 = giftEntity->fields.num;
    v110 = v107;
    if ( v109 > v99 )
      v109 = v99;
    v121 = v109;
    v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121, v108);
    v112 = System_String__Format(v110, v111, 0LL);
    *message = v112;
    sub_B70630((BattleServantConfConponent_o *)message, (System_Int32_array **)v112, v113, v114, v115, v116, v117, v118);
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
    sub_B7076C(extraGiftMsg2Lb, v24);
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
    sub_B7076C(extraGiftTitleLb, method);
  }
  v15 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, v13 + msgX, 0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__65_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  WebViewManager_o *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4355EA7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_4355EA7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v4, 0LL);
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
LABEL_9:
    sub_B7076C(v5, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  SummonResultComponent_o *v4; // x20
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v7; // w22

  v4 = this;
  if ( (byte_4355E9E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (SummonResultComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4355E9E = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B7076C(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( befSvtList->fields._items->m_Items[v7 + 1] == svtId )
      return 1;
    if ( (int)++v7 >= size )
      return 0;
    befSvtList = v4->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w0
  int32_t v8; // w20
  UnityEngine_Object_o *v9; // x21

  if ( (byte_4355EA3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355EA3 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  v5 = childCount - 1;
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
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)fstGrid, v5, 0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_13;
    }
LABEL_26:
    sub_B7076C(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  v8 = v7 - 1;
  if ( v7 >= 1 )
  {
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)fstGrid, v8, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v9, 0LL);
    }
    while ( --v8 >= 0 );
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
  GachaInfos_array *v9; // x27
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellHeight; // s10
  struct UIGrid_o *scdGrid; // x9
  int cellWidth_low; // s11
  float v21; // s9
  System_Collections_Generic_List_int__o *v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int v29; // w8
  __int64 v30; // x23
  GachaInfos_o **m_Items; // x21
  GachaInfos_array *v32; // x22
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_o *v34; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v37; // x25
  UnityEngine_Transform_o *v38; // x26
  int v39; // s0
  const MethodInfo *v42; // x2
  int32_t objectId; // w26
  bool v44; // w26
  bool IsCommandCode; // w28
  SummonResultInfoComponent_ClickDelegate_o *v46; // x0
  SummonResultInfoComponent_ClickDelegate_o *v47; // x27
  __int64 *v48; // x8
  const MethodInfo *v49; // x6
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int QpMax; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  float v56; // s12
  float v57; // s11
  float v58; // s8
  float v59; // s1
  float v60; // s1
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v62; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v64; // x8
  GiftEntity_o *DataById; // x22
  ItemEntity_o *v66; // x23
  struct UISprite_o *extraGiftMsgSpr; // x8
  GachaExtraGifts_o *v68; // x8
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t mWidth; // w20
  UIWidget_o *v71; // x21
  struct UIGrid_o *v72; // x8
  int v73; // s9
  int v74; // s10
  float v75; // s8
  float v76; // s9
  float v77; // s10
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL; // s0
  bool v79; // w1
  __int64 v80; // x10
  char v81; // w9
  int32_t v82; // w24
  int32_t v83; // w20
  int32_t gachaExtraGiftResultType; // w23
  GachaExtraGifts_o *v85; // x15
  int32_t gachaExtraGiftBonusType; // w14
  GiftEntity_o *v87; // x21
  ItemEntity_o *v88; // x22
  struct UISprite_o *v89; // x8
  struct UILabel_o *v90; // x8
  struct UILabel_o *v91; // x9
  bool v92; // w21
  char v93; // w20
  UnityEngine_GameObject_o *v94; // x0
  char v95; // w1
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  struct UILabel_o *extraGiftTitleLb; // x8
  struct UILabel_o *v98; // x9
  const MethodInfo *v99; // x2
  __int64 v100; // x0
  const MethodInfo *v101; // [xsp+0h] [xbp-D0h]
  System_Int32_array *v102; // [xsp+10h] [xbp-C0h]
  GachaExtraGifts_array *v103; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+20h] [xbp-B0h]
  char v105; // [xsp+2Ch] [xbp-A4h]
  struct UIGrid_o **p_scdGrid; // [xsp+30h] [xbp-A0h]
  float pos_x; // [xsp+3Ch] [xbp-94h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_4355E9A & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SummonResultComponent_showResCcDetail__);
    sub_B70694(&Method_SummonResultComponent_showResSvtDetail__);
    sub_B70694(&SummonResultComponent_TypeInfo);
    sub_B70694(&StringLiteral_12609/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_B70694(&StringLiteral_12631/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355E9A = 1;
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
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v13, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v14, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v15, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    v102 = extraGiftIds;
    v103 = gachaExtraGiftList;
    cellWidth_low = LODWORD(fstGrid->fields.cellWidth);
    v21 = scdGrid->fields.cellHeight;
    v22 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v22,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v22;
    p_befSvtList = &this->fields.befSvtList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.befSvtList,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = v9->max_length;
    if ( v29 >= 1 )
    {
      v30 = 0LL;
      m_Items = v9->m_Items;
      v32 = v9;
      v105 = 0;
      while ( (unsigned int)v30 < v29 )
      {
        p_fstGrid = &this->fields.scdGrid;
        if ( (unsigned int)v30 < 6 )
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_211;
        v34 = m_Items[v30];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        v37 = changeSceneBtnInfo;
        v38 = UnityEngine_GameObject__get_transform(changeSceneBtnInfo, 0LL);
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
        if ( !v38 )
          goto LABEL_211;
        UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
        if ( !v34 )
          goto LABEL_211;
        if ( v34->fields.isNew
          && (objectId = v34->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v42)) )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_211;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
            objectId,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          v44 = 0;
        }
        else
        {
          v44 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v34->fields.type, 0LL);
        v46 = (SummonResultInfoComponent_ClickDelegate_o *)sub_B70764(SummonResultInfoComponent_ClickDelegate_TypeInfo);
        v47 = v46;
        if ( IsCommandCode )
          v48 = &Method_SummonResultComponent_showResCcDetail__;
        else
          v48 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v46, (Il2CppObject *)this, *v48, 0LL);
        if ( v34->fields.sellMana || v34->fields.sellQp )
        {
          v47 = 0LL;
          v105 = 1;
        }
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v37,
                                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v34,
          v44,
          v47,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v49);
        sellQp = v34->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v9 = v32;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v9 = v32;
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
          QpMax = this->fields.summonBeforeQp + v34->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v34->fields.sellMana;
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
          UserItemMax = this->fields.summonBeforeMana + v34->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v29 = v9->max_length;
        if ( (int)++v30 >= v29 )
          goto LABEL_63;
      }
LABEL_212:
      v100 = sub_B70798(changeSceneBtnInfo);
      sub_B70738(v100, 0LL);
    }
    v105 = 0;
LABEL_63:
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.fstGrid;
    v56 = (float)max_length;
    v57 = (float)cellWidth_low;
    v58 = (float)max_length <= v57 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                       0LL);
    extraGiftIds = v102;
    gachaExtraGiftList = v103;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    v59 = v56 <= v57 ? v56 : v57;
    v110.fields.x = -(float)((float)(cellHeight * 0.5) * (float)(v59 + -1.0));
    v110.fields.y = v58;
    v110.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v110, 0LL);
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
    v60 = (float)(v56 - v57) + -1.0;
    if ( v56 <= v57 )
      v60 = -1.0;
    v111.fields.z = this->fields.center.fields.z;
    v111.fields.x = -(float)((float)(v21 * 0.5) * v60);
    v111.fields.y = -62.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v111, 0LL);
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
    if ( (v105 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12631/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
                                                         0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_211;
      v62 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_211;
      v62 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v62, 0LL);
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
  if ( extraGiftIds )
  {
    if ( gachaExtraGiftList )
    {
      v64 = *(_QWORD *)&extraGiftIds->max_length;
      if ( v64 )
      {
        pos_x = 0.0;
        message = (System_String_o *)StringLiteral_1/*""*/;
        title = (System_String_o *)StringLiteral_1/*""*/;
        if ( (_DWORD)v64 == 1 )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !extraGiftIds->max_length )
            goto LABEL_212;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          DataById = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, extraGiftIds->m_Items[1], 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !DataById )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             DataById->fields.objectId,
                                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v66 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v66->fields.id, -1, 0LL);
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
          v68 = gachaExtraGiftList->m_Items[0];
          if ( !v68 )
            goto LABEL_211;
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  DataById,
                  v66,
                  v68->fields.gachaExtraGiftResultType,
                  v68->fields.gachaExtraGiftBonusType,
                  v101) )
          {
            v93 = 0;
LABEL_207:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( changeSceneBtnInfo )
            {
              changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                     0LL);
              if ( changeSceneBtnInfo )
              {
                v79 = v93;
                goto LABEL_210;
              }
            }
LABEL_211:
            sub_B7076C(changeSceneBtnInfo, resultList);
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
            v71 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
            if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
              j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            if ( !v71 )
              goto LABEL_211;
            UIWidget__set_width(v71, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
          }
          if ( !v9 )
            goto LABEL_211;
          v72 = this->fields.fstGrid;
          if ( !v72 )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v73 = v9->max_length;
          v74 = LODWORD(v72->fields.cellWidth);
          v75 = pos_x;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          v76 = (float)v73;
          v77 = (float)v74;
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                      + 32LL);
          if ( v75 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL )
          {
            if ( v76 <= v77 )
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
            v75 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
          }
          if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                   + 40LL);
          if ( v75 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX )
          {
            if ( v76 <= v77 )
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
            v75 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          }
          extraGiftTitleLb = this->fields.extraGiftTitleLb;
          if ( !extraGiftTitleLb )
            goto LABEL_211;
          v98 = this->fields.extraGiftMsg2Lb;
          if ( !v98 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(extraGiftTitleLb->fields.mWidth / 2),
            (float)(v98->fields.mWidth / 2),
            v75,
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
          v95 = 1;
          v93 = 1;
LABEL_206:
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v95, 0LL);
          goto LABEL_207;
        }
        if ( (int)v64 < 1 )
          goto LABEL_215;
        v80 = 0LL;
        v81 = 0;
        v82 = 0;
        v83 = 0;
        gachaExtraGiftResultType = 0;
        do
        {
          if ( (unsigned int)v80 >= gachaExtraGiftList->max_length )
            goto LABEL_212;
          v85 = gachaExtraGiftList->m_Items[v80];
          if ( !v85 )
            goto LABEL_211;
          gachaExtraGiftBonusType = v85->fields.gachaExtraGiftBonusType;
          if ( !v82 && gachaExtraGiftBonusType == 2 )
          {
            v82 = extraGiftIds->m_Items[v80 + 1];
            gachaExtraGiftResultType = v85->fields.gachaExtraGiftResultType;
            v83 = 2;
          }
          ++v80;
          v81 |= gachaExtraGiftBonusType == 1;
        }
        while ( (int)v80 < (int)v64 );
        if ( (v81 & 1) != 0 )
        {
          if ( !v82 )
            goto LABEL_176;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v87 = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, v82, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !v87 )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             v87->fields.objectId,
                                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v88 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v88->fields.id, -1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          v89 = this->fields.extraGiftMsgSpr;
          if ( !v89 )
            goto LABEL_211;
          GameObjectExtensions__SetLocalPositionX(changeSceneBtnInfo, (float)(v89->fields.mWidth / 2), 0LL);
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  v87,
                  v88,
                  gachaExtraGiftResultType,
                  v83,
                  v101) )
          {
LABEL_176:
            v92 = 0;
            v93 = 0;
LABEL_177:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
            GameObjectExtensions__SetLocalPositionX(v94, 0.0, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgSpr;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v92, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v95 = !v92;
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
          v90 = this->fields.extraGiftTitleLb;
          if ( !v90 )
            goto LABEL_211;
          v91 = this->fields.extraGiftMsg2Lb;
          if ( !v91 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v90->fields.mWidth / 2),
            (float)(v91->fields.mWidth / 2),
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
          v92 = 1;
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
                                                             (System_String_o *)StringLiteral_12609/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                             0LL);
          if ( !this->fields.extraGiftMsgLb )
            goto LABEL_211;
          UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
          v92 = 0;
        }
        v93 = 1;
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
  v79 = 0;
LABEL_210:
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v79, 0LL);
  SummonResultComponent__setListByType(this, this->fields.dispType, v99);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4355EA4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12409/*"SHOW_TALK"*/);
    byte_4355EA4 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B7076C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12409/*"SHOW_TALK"*/, 0LL);
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
    sub_B7076C(mWidget, method);
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
    v19 = sub_B70798(mWidget);
    sub_B70738(v19, 0LL);
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
  int32_t v3; // w19
  int64_t closeInfo; // x0
  System_String_o *v6; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v8; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  UIWidget_o *summonBtnLabel; // x22
  int v12; // s0
  UIWidget_o *formationBtnSpr; // x22
  int v17; // s0
  UIWidget_o *combineBtnSpr; // x22
  int v22; // s0
  UIWidget_o *summonBtnSpr; // x22
  int v27; // s0
  UIWidget_o *sellBtnSpr; // x22
  int v32; // s0
  struct SummonControl_o *summonCtrl; // x8
  __int64 v37; // x2
  struct SummonControl_o *v38; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *v41; // x22
  Il2CppObject *v42; // x0
  UILabel_o *v43; // x22
  int32_t gachaId; // w22
  __int64 v45; // x23
  __int64 v46; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGachaMaster_o *Master_WarQuestSelectionMaster; // x24
  System_String_o *v49; // x22
  __int64 v50; // x2
  UILabel_o *v51; // x23
  Il2CppObject *v52; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v55; // x23
  __int64 v56; // x23
  int v57; // w23
  SummonControl_c *v58; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v60; // w0
  WarEntity_o *Entity; // x0
  WarEntity_o *v62; // x22
  __int64 v63; // x2
  UILabel_o *v64; // x22
  Il2CppObject *v65; // x0
  UserItemMaster_o *v66; // x21
  UserItemEntity_o *v67; // x0
  UIWidget_o *v68; // x21
  float v69; // s4
  float v70; // s5
  float v71; // s6
  float v72; // s7
  UIWidget_o *v73; // x21
  int v74; // s0
  UILabel_o *v78; // x21
  struct UILabel_o *v79; // x21
  System_String_o *v80; // x1
  int v81; // w9
  UIWidget_o *v82; // x21
  int v83; // s0
  UIWidget_o *v87; // x21
  int v88; // s0
  UIWidget_o *v92; // x21
  float v93; // s4
  float v94; // s5
  float v95; // s6
  float v96; // s7
  UIWidget_o *v97; // x21
  int v98; // s0
  UILabel_o *v102; // x21
  UILabel_o *v103; // x21
  UILabel_o *v104; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v106; // x22
  __int64 v107; // x2
  Il2CppObject *v108; // x0
  struct SummonControl_o *v109; // x8
  struct SummonControl_o *v110; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_GameObject_o *v114; // x0
  struct UnityEngine_GameObject_o *touchBlocker; // x21
  struct UnityEngine_GameObject_o *v116; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v125; // x0
  UnityEngine_Component_o *Parent; // x0
  int v127; // s1
  SummonResultComponent_c *v130; // x0
  int methodPointer; // s0
  float x; // s9
  float v133; // s4
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s8
  UnityEngine_Color_o v136; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector2_o v138; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v143; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v3 = type;
  if ( (byte_4355E9B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_B70694(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SummonControl_TypeInfo);
    sub_B70694(&SummonResultComponent_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&UserGachaMaster_TypeInfo);
    sub_B70694(&StringLiteral_12580/*"SUMMON_APPEND_END"*/);
    sub_B70694(&StringLiteral_12396/*"SHORT_SERVANT_FORMATION"*/);
    sub_B70694(&StringLiteral_12611/*"SUMMON_FREE_10_BTN"*/);
    sub_B70694(&StringLiteral_12401/*"SHORT_SERVANT_SELL"*/);
    sub_B70694(&StringLiteral_12615/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_B70694(&StringLiteral_12637/*"SUMMON_TICKET_END"*/);
    sub_B70694(&StringLiteral_12387/*"SHORT_SERVANT_COMBINE"*/);
    sub_B70694(&StringLiteral_3460/*"CONTINUE_SUMMON_BTN"*/);
    byte_4355E9B = 1;
  }
  methoda.genericMethod = 0LL;
  memset(&methoda.klass, 0, 24);
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( v3 == 1 )
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3460/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v8 = v6;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_198;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12387/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_198;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_198;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    summonBtnLabel = (UIWidget_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnLabel )
      goto LABEL_198;
    UIWidget__set_color(summonBtnLabel, *(UnityEngine_Color_o *)&v12, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    formationBtnSpr = (UIWidget_o *)this->fields.formationBtnSpr;
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
    if ( !formationBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(formationBtnSpr, *(UnityEngine_Color_o *)&v17, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    combineBtnSpr = (UIWidget_o *)this->fields.combineBtnSpr;
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
    if ( !combineBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(combineBtnSpr, *(UnityEngine_Color_o *)&v22, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    summonBtnSpr = (UIWidget_o *)this->fields.summonBtnSpr;
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(summonBtnSpr, *(UnityEngine_Color_o *)&v27, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    sellBtnSpr = (UIWidget_o *)this->fields.sellBtnSpr;
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( !sellBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(sellBtnSpr, *(UnityEngine_Color_o *)&v32, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_198;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_198;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v38 = this->fields.summonCtrl;
    if ( !v38 )
      goto LABEL_198;
    gachaParamData = v38->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_198;
    gachaType = gachaParamData->fields.gachaType;
    v41 = this->fields.summonBtnLabel;
    LODWORD(v136.fields.r) = gachaParamData->fields.gachaTime;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v37);
    closeInfo = (int64_t)System_String__Format(v8, v42, 0LL);
    if ( !v41 )
      goto LABEL_198;
    UILabel__set_text(v41, (System_String_o *)closeInfo, 0LL);
    v43 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonResultComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    }
    if ( !v43 )
      goto LABEL_198;
    UILabel__SetCondensedScale(v43, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v45 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
          sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v46 = **(_QWORD **)(v45 + 192);
        if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
          sub_B08394(v46);
        closeInfo = **(_QWORD **)(v46 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)closeInfo,
                                                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserGachaMaster___);
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
          (const MethodInfo_21C049C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12615/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !methoda.return_type )
          goto LABEL_198;
        v49 = (System_String_o *)closeInfo;
        if ( !methoda.return_type[4].bits )
          goto LABEL_57;
        closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !methoda.return_type || !closeInfo )
          goto LABEL_198;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      methoda.return_type[4].bits,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_57;
        v51 = this->fields.summonBtnLabel;
        LODWORD(v136.fields.r) = 2;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v50);
        closeInfo = (int64_t)System_String__Format(v8, v52, 0LL);
        if ( !v51 )
          goto LABEL_198;
        UILabel__set_text(v51, (System_String_o *)closeInfo, 0LL);
LABEL_57:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaAppendMaster___);
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
              v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_129:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_198;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            v140.fields.r = 0.35547;
            v92 = (UIWidget_o *)this->fields.summonBtnSpr;
            v140.fields.a = 1.0;
            v140.fields.g = 0.35547;
            v140.fields.b = 0.35547;
            v136 = (UnityEngine_Color_o)0LL;
            UnityEngine_Color___ctor(v140, v93, v94, v95, v96, (const MethodInfo *)&v136);
            if ( !v92 )
              goto LABEL_198;
            UIWidget__set_color(v92, v136, 0LL);
            v97 = (UIWidget_o *)this->fields.summonBtnLabel;
            *(UnityEngine_Color_o *)&v98 = UnityEngine_Color__get_gray(0LL);
            if ( !v97 )
              goto LABEL_198;
            UIWidget__set_color(v97, *(UnityEngine_Color_o *)&v98, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v102 = this->fields.summonBtnLabel;
            if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonResultComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            }
            if ( !v102 )
              goto LABEL_198;
            UILabel__SetCondensedScale(
              v102,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_198;
            v80 = v49;
LABEL_138:
            UILabel__set_text((UILabel_o *)closeInfo, v80, 0LL);
            goto LABEL_163;
          }
        }
        else if ( methoda.parameters )
        {
          if ( !methoda.return_type )
            goto LABEL_198;
          v81 = *(&methoda.return_type[5].bits + 1);
          if ( v81 >= 1 && *((_DWORD *)methoda.parameters + 7) >= v81 )
            goto LABEL_129;
        }
LABEL_125:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        v82 = (UIWidget_o *)this->fields.summonBtnSpr;
        *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
        if ( !v82 )
          goto LABEL_198;
        UIWidget__set_color(v82, *(UnityEngine_Color_o *)&v83, 0LL);
        v87 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v88 = UnityEngine_Color__get_white(0LL);
        if ( !v87 )
          goto LABEL_198;
        UIWidget__set_color(v87, *(UnityEngine_Color_o *)&v88, 0LL);
LABEL_163:
        v109 = this->fields.summonCtrl;
        if ( v109 )
        {
          closeInfo = (int64_t)v109->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v110 = this->fields.summonCtrl;
            if ( v110 )
            {
              v110->fields.isResult = 1;
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
                                           (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v112, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v113, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v114 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v114, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v116 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)touchBlocker,
                                                            (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = v116;
                sub_B70630(
                  (BattleServantConfConponent_o *)&this->fields.blocker,
                  (System_Int32_array **)v116,
                  v118,
                  v119,
                  v120,
                  v121,
                  v122,
                  v123);
                blocker = this->fields.blocker;
                v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v125, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v130 = SummonResultComponent_TypeInfo;
                if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v130 = SummonResultComponent_TypeInfo;
                }
                *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v130->static_fields->TUTORIAL_BACK_ARROW_RECT;
                methodPointer = (int)methoda.methodPointer;
                x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v127 - 1), &methoda);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v141.fields.m_XMin = x - FSUtility__GetOffsetX(68.0, 0, 0LL);
                UnityEngine_Rect__set_x(v141, v133, &methoda);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    *(_QWORD *)&v142.fields.m_Width = methoda.invoker_method;
                    *(_QWORD *)&v142.fields.m_XMin = methoda.methodPointer;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v142, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        *(_QWORD *)&v143.fields.m_Width = methoda.invoker_method;
                        *(_QWORD *)&v143.fields.m_XMin = methoda.methodPointer;
                        v138.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
                        v138.fields.y = TutorialBackArrowPos.fields.y;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v138,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v143,
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
        v55 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v55 + 306) & 1) == 0 )
          sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v56 = **(_QWORD **)(v55 + 192);
        if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
          sub_B08394(v56);
        closeInfo = **(_QWORD **)(v56 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_198;
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_198;
        v57 = *(_DWORD *)(closeInfo + 24);
        v58 = SummonControl_TypeInfo;
        if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v58 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v58->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        }
        v60 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                (int32_t *)&methoda.genericContainerHandle + 1,
                (int32_t *)&methoda.genericMethod,
                0LL);
        if ( SHIDWORD(methoda.genericContainerHandle) > 0 || v60 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_198;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v103 = this->fields.summonBtnLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12611/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v103 )
            goto LABEL_198;
          UILabel__set_text(v103, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v104 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v104 )
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
            if ( v57 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_198;
              if ( v57 < 400 )
                type = 1;
              else
                type = v57 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_198;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v106 = this->fields.summonBtnLabel;
          LODWORD(v136.fields.r) = gachaParamData->fields.gachaTime;
          v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v107);
          closeInfo = (int64_t)System_String__Format(v8, v108, 0LL);
          if ( !v106 )
            goto LABEL_198;
          UILabel__set_text(v106, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v104 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v104 )
LABEL_198:
            sub_B7076C(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v104, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_163;
      case 5:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)closeInfo,
                   gachaParamData->fields.gachaId,
                   (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_100;
        v62 = Entity;
        if ( !LODWORD(Entity->fields.emptyMessage) )
          goto LABEL_100;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v62->fields.emptyMessage,
               0LL) != 9 )
          goto LABEL_100;
        v64 = this->fields.summonBtnLabel;
        LODWORD(v136.fields.r) = gachaParamData->fields.gachaTime + 1;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v63);
        closeInfo = (int64_t)System_String__Format(v8, v65, 0LL);
        if ( !v64 )
          goto LABEL_198;
        UILabel__set_text(v64, (System_String_o *)closeInfo, 0LL);
LABEL_100:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v66 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v66 )
          goto LABEL_198;
        v67 = UserItemMaster__GetEntity(v66, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v67 && v67->fields.num > 0 )
          goto LABEL_125;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        v139.fields.r = 0.35547;
        v68 = (UIWidget_o *)this->fields.summonBtnSpr;
        v139.fields.a = 1.0;
        v139.fields.g = 0.35547;
        v139.fields.b = 0.35547;
        *(_QWORD *)&v136.fields.r = 0LL;
        *(_QWORD *)&v136.fields.b = 0LL;
        UnityEngine_Color___ctor(v139, v69, v70, v71, v72, (const MethodInfo *)&v136);
        if ( !v68 )
          goto LABEL_198;
        UIWidget__set_color(v68, v136, 0LL);
        v73 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_gray(0LL);
        if ( !v73 )
          goto LABEL_198;
        UIWidget__set_color(v73, *(UnityEngine_Color_o *)&v74, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v78 = this->fields.summonBtnLabel;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        }
        if ( !v78 )
          goto LABEL_198;
        UILabel__SetCondensedScale(
          v78,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v79 = this->fields.summonBtnLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12637/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v79 )
          goto LABEL_198;
        v80 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v79;
        goto LABEL_138;
      default:
        goto LABEL_163;
    }
  }
  this->fields.dispType = v3;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void __fastcall SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  DataManager_o *SelfUserGame; // x0
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
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

  if ( (byte_4355E9F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_7124/*"HAVE_SVT_NUM_TITLE"*/);
    sub_B70694(&StringLiteral_7123/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_4355E9F = 1;
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
  if ( !byte_434DEF6 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_434DEF6 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  HIDWORD(servantSum) = v5->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, (int32_t *)&servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7124/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
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
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7123/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
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
    sub_B7076C(SelfUserGame, v4);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4355EA1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__);
    sub_B70694(&SummonResultComponent___c__DisplayClass64_0_TypeInfo);
    byte_4355EA1 = 1;
  }
  v5 = sub_B70764(SummonResultComponent___c__DisplayClass64_0_TypeInfo);
  SummonResultComponent___c__DisplayClass64_0___ctor((SummonResultComponent___c__DisplayClass64_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7076C(v6, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4355EA0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__);
    sub_B70694(&SummonResultComponent___c__DisplayClass63_0_TypeInfo);
    byte_4355EA0 = 1;
  }
  v5 = sub_B70764(SummonResultComponent___c__DisplayClass63_0_TypeInfo);
  SummonResultComponent___c__DisplayClass63_0___ctor((SummonResultComponent___c__DisplayClass63_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7076C(v6, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
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
  WebViewManager_o *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v6; // x19
  ServantStatusDialog_EndDelegate_o *v7; // x21
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_434F0EB & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonResultComponent_DialogCallBack__);
    byte_434F0EB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v6 )
    goto LABEL_9;
  CommonUI__OpenServantStatusDialog_17913800(v6, 8, usrSvtId, v7, 0LL, 0LL);
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
LABEL_9:
    sub_B7076C(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o *Entity; // x20
  WebViewManager_o *v6; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v8; // x19
  ServantStatusDialog_EndDelegate_o *v9; // x21
  CommonUI_o *v10; // x19

  if ( (byte_434F0EC & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonResultComponent_DialogCallBack__);
    byte_434F0EC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v6 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v8 = (CommonUI_o *)v6;
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v9, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v8 )
    goto LABEL_11;
  CommonUI__OpenServantStatusDialog_17917372(v8, 0, (UserCommandCodeEntity_o *)Entity, v9, 0LL, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
LABEL_11:
    sub_B7076C(Instance, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}