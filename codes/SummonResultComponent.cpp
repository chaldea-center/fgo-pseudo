void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  SummonResultComponent_c *v6; // x8
  struct UnityEngine_Rect_o v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42184D9 & 1) == 0 )
  {
    sub_B0D8A4(&SummonResultComponent_TypeInfo, v1);
    byte_42184D9 = 1;
  }
  v8.fields.m_Width = 160.0;
  v8.fields.m_Height = 60.0;
  SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY = 180.0;
  v8.fields.m_XMin = -510.0;
  v8.fields.m_YMin = 225.0;
  v7 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v8, v2, v3, v4, v5, (const MethodInfo *)&v7);
  SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_RECT = v7;
  v6 = SummonResultComponent_TypeInfo;
  SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE = 165;
  v6->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = 159;
  v6->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL = 190;
  v6->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = -38;
  v6->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = -254;
  v6->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = -176;
  v6->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME = -383;
  v6->static_fields->DEFAULT_FONT_SIZE = 25;
  v6->static_fields->SMALL_FONT_SIZE = 23;
  v6->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX = 752;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0
  int32_t v6; // w0

  if ( (byte_42184D8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5516/*"END_SUMMON"*/, v3);
    sub_B0D8A4(&StringLiteral_8420/*"LIMIT_OVER"*/, v4);
    byte_42184D8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8420/*"LIMIT_OVER"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v6 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5516/*"END_SUMMON"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v6 = 0;
  }
  SoundManager__playSystemSe(v6, 0LL);
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

  if ( (byte_42184D0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42184D0 = 1;
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
    UnityEngine_Object__Destroy_34935276(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_B0D840(p_blocker, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_42184D5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SummonResultComponent__DialogCallBack_b__65_0__, v6);
    byte_42184D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__65_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *extraGiftMsg2Lb; // x0
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool result; // w0
  System_String_o *v39; // x22
  _QWORD **v40; // x25
  __int64 v41; // x23
  __int16 v42; // w8
  __int64 v43; // x23
  __int64 v44; // x23
  __int64 v45; // x23
  System_String_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  SummonResultComponent_c *v61; // x0
  int32_t SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX; // s0
  int32_t summonBeforeMana; // w25
  BalanceConfig_c *v64; // x0
  int32_t ManaMax; // w8
  System_String_o *v66; // x23
  _QWORD **v67; // x25
  __int64 v68; // x24
  __int16 v69; // w8
  __int64 v70; // x24
  __int64 v71; // x24
  __int64 v72; // x24
  System_String_o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_o *v80; // x21
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  SummonResultComponent_c *v89; // x0
  System_String_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_o *v97; // x21
  Il2CppObject *v98; // x0
  System_String_o *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  SummonResultComponent_c *v106; // x0
  int32_t v107; // w25
  int32_t v108; // w24
  System_String_o *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_o *v116; // x0
  int32_t v117; // w8
  System_String_o *v118; // x21
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  UILabel_o *extraGiftTitleLb; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v129; // [xsp+18h] [xbp-48h] BYREF
  int32_t v130; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42184CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_object___, title);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&SummonResultComponent_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_12463/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v21);
    sub_B0D8A4(&StringLiteral_12467/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, v22);
    sub_B0D8A4(&StringLiteral_12465/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v23);
    sub_B0D8A4(&StringLiteral_12469/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v24);
    sub_B0D8A4(&StringLiteral_12468/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, v25);
    sub_B0D8A4(&StringLiteral_12464/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    sub_B0D8A4(&StringLiteral_12466/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v28);
    byte_42184CF = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)pos_x,
    (System_Boolean_array **)giftEntity,
    (System_Int32_array **)itemEntity,
    *(System_Int32_array **)&giftResultType,
    *(System_Int32_array **)&giftBonusType);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, 0LL);
        v40 = (_QWORD **)Method_System_Array_Empty_object___;
        v41 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
        v42 = *(_WORD *)(v41 + 306);
        if ( (v42 & 1) == 0 )
        {
          sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
          v42 = *(_WORD *)(v41 + 306);
        }
        if ( (v42 & 0x400) != 0 )
        {
          v43 = *v40[6];
          if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
            sub_AA65A4(*v40[6]);
          if ( !*(_DWORD *)(v43 + 224) )
          {
            v44 = *v40[6];
            if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
              sub_AA65A4(*v40[6]);
            j_il2cpp_runtime_class_init_0(v44);
          }
        }
        v45 = *v40[6];
        if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
          sub_AA65A4(*v40[6]);
        v46 = System_String__Format_43928628(v39, **(System_Object_array ***)(v45 + 184), 0LL);
        *title = v46;
        sub_B0D840((BattleServantConfConponent_o *)title, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12467/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, 0LL);
        v54 = System_String__Format(v53, (Il2CppObject *)itemEntity->fields.name, 0LL);
        *message = v54;
        sub_B0D840((BattleServantConfConponent_o *)message, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
        v61 = SummonResultComponent_TypeInfo;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v61 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v61->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
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
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      *title = v90;
      sub_B0D840((BattleServantConfConponent_o *)title, (System_Int32_array **)v90, v91, v92, v93, v94, v95, v96);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12464/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      num = giftEntity->fields.num;
      v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v99 = System_String__Format(v97, v98, 0LL);
      *message = v99;
      sub_B0D840(
        (BattleServantConfConponent_o *)message,
        (System_Int32_array **)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v106 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v106 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v106->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      goto LABEL_58;
    }
    summonBeforeMana = this->fields.summonBeforeMana;
    v64 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v64 = BalanceConfig_TypeInfo;
    }
    ManaMax = v64->static_fields->ManaMax;
    if ( summonBeforeMana == ManaMax )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v67 = (_QWORD **)Method_System_Array_Empty_object___;
      v68 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v69 = *(_WORD *)(v68 + 306);
      if ( (v69 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v69 = *(_WORD *)(v68 + 306);
      }
      if ( (v69 & 0x400) != 0 )
      {
        v70 = *v67[6];
        if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
          sub_AA65A4(*v67[6]);
        if ( !*(_DWORD *)(v70 + 224) )
        {
          v71 = *v67[6];
          if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
            sub_AA65A4(*v67[6]);
          j_il2cpp_runtime_class_init_0(v71);
        }
      }
      v72 = *v67[6];
      if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
        sub_AA65A4(*v67[6]);
      v73 = System_String__Format_43928628(v66, **(System_Object_array ***)(v72 + 184), 0LL);
      *title = v73;
      sub_B0D840((BattleServantConfConponent_o *)title, (System_Int32_array **)v73, v74, v75, v76, v77, v78, v79);
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      v130 = giftEntity->fields.num;
      v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
      v82 = System_String__Format(v80, v81, 0LL);
      *message = v82;
      sub_B0D840((BattleServantConfConponent_o *)message, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
      v89 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v89 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v89->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      goto LABEL_58;
    }
    v107 = this->fields.summonBeforeMana;
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = BalanceConfig_TypeInfo;
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    if ( v107 >= ManaMax )
      return 0;
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    v108 = ManaMax - this->fields.summonBeforeMana;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
    *title = v109;
    sub_B0D840((BattleServantConfConponent_o *)title, (System_Int32_array **)v109, v110, v111, v112, v113, v114, v115);
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12465/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
    v117 = giftEntity->fields.num;
    v118 = v116;
    if ( v117 > v108 )
      v117 = v108;
    v129 = v117;
    v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129);
    v120 = System_String__Format(v118, v119, 0LL);
    *message = v120;
    sub_B0D840((BattleServantConfConponent_o *)message, (System_Int32_array **)v120, v121, v122, v123, v124, v125, v126);
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
    sub_B0D97C(extraGiftMsg2Lb);
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
    sub_B0D97C(extraGiftTitleLb);
  }
  v15 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, v13 + msgX, 0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__65_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  WebViewManager_o *v10; // x0
  CommonUI_o *v11; // x19

  if ( (byte_42184DA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_42184DA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)v10;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v11 )
LABEL_9:
    sub_B0D97C(v10);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  SummonResultComponent_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v8; // w22

  v4 = this;
  if ( (byte_42184D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    this = (SummonResultComponent_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_42184D1 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B0D97C(this);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( befSvtList->fields._items->m_Items[v8 + 1] == svtId )
      return 1;
    if ( (int)++v8 >= size )
      return 0;
    befSvtList = v4->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w0
  int32_t v9; // w20
  UnityEngine_Object_o *v10; // x21

  if ( (byte_42184D6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_42184D6 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  v6 = childCount - 1;
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
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)fstGrid, v6, 0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_26:
    sub_B0D97C(fstGrid);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  v9 = v8 - 1;
  if ( v8 >= 1 )
  {
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)fstGrid, v9, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v10, 0LL);
    }
    while ( --v9 >= 0 );
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellHeight; // s10
  struct UIGrid_o *scdGrid; // x9
  int cellWidth_low; // s11
  float v42; // s9
  System_Collections_Generic_List_int__o *v43; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // w8
  __int64 v51; // x23
  GachaInfos_o **m_Items; // x21
  GachaInfos_array *v53; // x22
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_o *v55; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v58; // x25
  UnityEngine_Transform_o *v59; // x26
  int v60; // s0
  const MethodInfo *v63; // x2
  int32_t objectId; // w26
  bool v65; // w26
  bool IsCommandCode; // w28
  __int64 v67; // x1
  __int64 v68; // x2
  SummonResultInfoComponent_ClickDelegate_o *v69; // x0
  SummonResultInfoComponent_ClickDelegate_o *v70; // x27
  __int64 *v71; // x8
  const MethodInfo *v72; // x6
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int QpMax; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  float v79; // s12
  float v80; // s11
  float v81; // s8
  float v82; // s1
  float v83; // s1
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v85; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v87; // x8
  GiftEntity_o *DataById; // x22
  ItemEntity_o *v89; // x23
  struct UISprite_o *extraGiftMsgSpr; // x8
  GachaExtraGifts_o *v91; // x8
  const MethodInfo *v92; // x1
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t mWidth; // w20
  UIWidget_o *v95; // x21
  struct UIGrid_o *v96; // x8
  int v97; // s9
  int v98; // s10
  float v99; // s8
  float v100; // s9
  float v101; // s10
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL; // s0
  bool v103; // w1
  __int64 v104; // x10
  char v105; // w9
  int32_t v106; // w24
  int32_t v107; // w20
  int32_t gachaExtraGiftResultType; // w23
  GachaExtraGifts_o *v109; // x15
  int32_t gachaExtraGiftBonusType; // w14
  GiftEntity_o *v111; // x21
  ItemEntity_o *v112; // x22
  struct UISprite_o *v113; // x8
  const MethodInfo *v114; // x1
  struct UILabel_o *v115; // x8
  struct UILabel_o *v116; // x9
  bool v117; // w21
  char v118; // w20
  UnityEngine_GameObject_o *v119; // x0
  char v120; // w1
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  struct UILabel_o *extraGiftTitleLb; // x8
  struct UILabel_o *v123; // x9
  const MethodInfo *v124; // x2
  __int64 v125; // x0
  const MethodInfo *v126; // [xsp+0h] [xbp-D0h]
  System_Int32_array *v127; // [xsp+10h] [xbp-C0h]
  GachaExtraGifts_array *v128; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+20h] [xbp-B0h]
  char v130; // [xsp+2Ch] [xbp-A4h]
  struct UIGrid_o **p_scdGrid; // [xsp+30h] [xbp-A0h]
  float pos_x; // [xsp+3Ch] [xbp-94h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_42184CD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, resultList);
    sub_B0D8A4(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Collider___, v16);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&Method_SummonResultComponent_showResCcDetail__, v23);
    sub_B0D8A4(&Method_SummonResultComponent_showResSvtDetail__, v24);
    sub_B0D8A4(&SummonResultComponent_TypeInfo, v25);
    sub_B0D8A4(&StringLiteral_12478/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v26);
    sub_B0D8A4(&StringLiteral_12500/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v27);
    sub_B0D8A4(&StringLiteral_1/*""*/, v28);
    byte_42184CD = 1;
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
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v31, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v32, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v33, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_211;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, v34);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_211;
    cellHeight = fstGrid->fields.cellHeight;
    scdGrid = this->fields.scdGrid;
    p_scdGrid = &this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_211;
    v127 = extraGiftIds;
    v128 = gachaExtraGiftList;
    cellWidth_low = LODWORD(fstGrid->fields.cellWidth);
    v42 = scdGrid->fields.cellHeight;
    v43 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v35, v36);
    System_Collections_Generic_List_int____ctor(
      v43,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v43;
    p_befSvtList = &this->fields.befSvtList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.befSvtList,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v50 = v9->max_length;
    if ( v50 >= 1 )
    {
      v51 = 0LL;
      m_Items = v9->m_Items;
      v53 = v9;
      v130 = 0;
      while ( (unsigned int)v51 < v50 )
      {
        p_fstGrid = &this->fields.scdGrid;
        if ( (unsigned int)v51 < 6 )
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_211;
        v55 = m_Items[v51];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        v58 = changeSceneBtnInfo;
        v59 = UnityEngine_GameObject__get_transform(changeSceneBtnInfo, 0LL);
        *(UnityEngine_Vector3_o *)&v60 = UnityEngine_Vector3__get_one(0LL);
        if ( !v59 )
          goto LABEL_211;
        UnityEngine_Transform__set_localScale(v59, *(UnityEngine_Vector3_o *)&v60, 0LL);
        if ( !v55 )
          goto LABEL_211;
        if ( v55->fields.isNew
          && (objectId = v55->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v63)) )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_211;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
            objectId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v65 = 0;
        }
        else
        {
          v65 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v55->fields.type, 0LL);
        v69 = (SummonResultInfoComponent_ClickDelegate_o *)sub_B0D974(
                                                             SummonResultInfoComponent_ClickDelegate_TypeInfo,
                                                             v67,
                                                             v68);
        v70 = v69;
        if ( IsCommandCode )
          v71 = &Method_SummonResultComponent_showResCcDetail__;
        else
          v71 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v69, (Il2CppObject *)this, *v71, 0LL);
        if ( v55->fields.sellMana || v55->fields.sellQp )
        {
          v70 = 0LL;
          v130 = 1;
        }
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v58,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v55,
          v65,
          v70,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v72);
        sellQp = v55->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v9 = v53;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v9 = v53;
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
          QpMax = this->fields.summonBeforeQp + v55->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v55->fields.sellMana;
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
          UserItemMax = this->fields.summonBeforeMana + v55->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v50 = v9->max_length;
        if ( (int)++v51 >= v50 )
          goto LABEL_63;
      }
LABEL_212:
      v125 = sub_B0D9A8(changeSceneBtnInfo);
      sub_B0D948(v125, 0LL);
    }
    v130 = 0;
LABEL_63:
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.fstGrid;
    v79 = (float)max_length;
    v80 = (float)cellWidth_low;
    v81 = (float)max_length <= v80 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                       0LL);
    extraGiftIds = v127;
    gachaExtraGiftList = v128;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    v82 = v79 <= v80 ? v79 : v80;
    v135.fields.x = -(float)((float)(cellHeight * 0.5) * (float)(v82 + -1.0));
    v135.fields.y = v81;
    v135.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v135, 0LL);
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
    v83 = (float)(v79 - v80) + -1.0;
    if ( v79 <= v80 )
      v83 = -1.0;
    v136.fields.z = this->fields.center.fields.z;
    v136.fields.x = -(float)((float)(v42 * 0.5) * v83);
    v136.fields.y = -62.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v136, 0LL);
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
    if ( (v130 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12500/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
                                                         0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_211;
      v85 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_211;
      v85 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v85, 0LL);
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
      v87 = *(_QWORD *)&extraGiftIds->max_length;
      if ( v87 )
      {
        pos_x = 0.0;
        message = (System_String_o *)StringLiteral_1/*""*/;
        title = (System_String_o *)StringLiteral_1/*""*/;
        if ( (_DWORD)v87 == 1 )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !extraGiftIds->max_length )
            goto LABEL_212;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          DataById = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, extraGiftIds->m_Items[1], 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !DataById )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             DataById->fields.objectId,
                                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v89 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v89->fields.id, -1, 0LL);
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
          v91 = gachaExtraGiftList->m_Items[0];
          if ( !v91 )
            goto LABEL_211;
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  DataById,
                  v89,
                  v91->fields.gachaExtraGiftResultType,
                  v91->fields.gachaExtraGiftBonusType,
                  v126) )
          {
            v118 = 0;
LABEL_207:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( changeSceneBtnInfo )
            {
              changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                     0LL);
              if ( changeSceneBtnInfo )
              {
                v103 = v118;
                goto LABEL_210;
              }
            }
LABEL_211:
            sub_B0D97C(changeSceneBtnInfo);
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
            v95 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
            if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
              j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            if ( !v95 )
              goto LABEL_211;
            UIWidget__set_width(v95, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
          }
          if ( !v9 )
            goto LABEL_211;
          v96 = this->fields.fstGrid;
          if ( !v96 )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v97 = v9->max_length;
          v98 = LODWORD(v96->fields.cellWidth);
          v99 = pos_x;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          v100 = (float)v97;
          v101 = (float)v98;
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                      + 32LL);
          if ( v99 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL )
          {
            if ( v100 <= v101 )
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
            v99 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
          }
          if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                   + 40LL);
          if ( v99 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX )
          {
            if ( v100 <= v101 )
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
            v99 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          }
          extraGiftTitleLb = this->fields.extraGiftTitleLb;
          if ( !extraGiftTitleLb )
            goto LABEL_211;
          v123 = this->fields.extraGiftMsg2Lb;
          if ( !v123 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(extraGiftTitleLb->fields.mWidth / 2),
            (float)(v123->fields.mWidth / 2),
            v99,
            v92);
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
          v120 = 1;
          v118 = 1;
LABEL_206:
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v120, 0LL);
          goto LABEL_207;
        }
        if ( (int)v87 < 1 )
          goto LABEL_215;
        v104 = 0LL;
        v105 = 0;
        v106 = 0;
        v107 = 0;
        gachaExtraGiftResultType = 0;
        do
        {
          if ( (unsigned int)v104 >= gachaExtraGiftList->max_length )
            goto LABEL_212;
          v109 = gachaExtraGiftList->m_Items[v104];
          if ( !v109 )
            goto LABEL_211;
          gachaExtraGiftBonusType = v109->fields.gachaExtraGiftBonusType;
          if ( !v106 && gachaExtraGiftBonusType == 2 )
          {
            v106 = extraGiftIds->m_Items[v104 + 1];
            gachaExtraGiftResultType = v109->fields.gachaExtraGiftResultType;
            v107 = 2;
          }
          ++v104;
          v105 |= gachaExtraGiftBonusType == 1;
        }
        while ( (int)v104 < (int)v87 );
        if ( (v105 & 1) != 0 )
        {
          if ( !v106 )
            goto LABEL_176;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v111 = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, v106, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !v111 )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             v111->fields.objectId,
                                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v112 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v112->fields.id, -1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          v113 = this->fields.extraGiftMsgSpr;
          if ( !v113 )
            goto LABEL_211;
          GameObjectExtensions__SetLocalPositionX(changeSceneBtnInfo, (float)(v113->fields.mWidth / 2), 0LL);
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  v111,
                  v112,
                  gachaExtraGiftResultType,
                  v107,
                  v126) )
          {
LABEL_176:
            v117 = 0;
            v118 = 0;
LABEL_177:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
            GameObjectExtensions__SetLocalPositionX(v119, 0.0, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgSpr;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v117, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v120 = !v117;
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
          v115 = this->fields.extraGiftTitleLb;
          if ( !v115 )
            goto LABEL_211;
          v116 = this->fields.extraGiftMsg2Lb;
          if ( !v116 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v115->fields.mWidth / 2),
            (float)(v116->fields.mWidth / 2),
            pos_x,
            v114);
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
          v117 = 1;
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
                                                             (System_String_o *)StringLiteral_12478/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                             0LL);
          if ( !this->fields.extraGiftMsgLb )
            goto LABEL_211;
          UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
          v117 = 0;
        }
        v118 = 1;
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
  v103 = 0;
LABEL_210:
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v103, 0LL);
  SummonResultComponent__setListByType(this, this->fields.dispType, v124);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42184D7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12279/*"SHOW_TALK"*/, method);
    byte_42184D7 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12279/*"SHOW_TALK"*/, 0LL);
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
    sub_B0D97C(mWidget);
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
    v19 = sub_B0D9A8(mWidget);
    sub_B0D948(v19, 0LL);
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
  int64_t closeInfo; // x0
  System_String_o *v39; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v41; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  UIWidget_o *summonBtnLabel; // x22
  int v45; // s0
  UIWidget_o *formationBtnSpr; // x22
  int v50; // s0
  UIWidget_o *combineBtnSpr; // x22
  int v55; // s0
  UIWidget_o *summonBtnSpr; // x22
  int v60; // s0
  UIWidget_o *sellBtnSpr; // x22
  int v65; // s0
  const MethodInfo *v69; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v71; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *v74; // x22
  Il2CppObject *v75; // x0
  UILabel_o *v76; // x22
  int32_t gachaId; // w22
  __int64 v78; // x23
  __int64 v79; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGachaMaster_o *Master_WarQuestSelectionMaster; // x24
  System_String_o *v82; // x22
  UILabel_o *v83; // x23
  Il2CppObject *v84; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v87; // x23
  __int64 v88; // x23
  int v89; // w23
  SummonControl_c *v90; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v92; // w0
  int gachaTime; // w1
  WarEntity_o *Entity; // x0
  WarEntity_o *v95; // x22
  UILabel_o *v96; // x22
  Il2CppObject *v97; // x0
  UserItemMaster_o *v98; // x21
  UserItemEntity_o *v99; // x0
  UIWidget_o *v100; // x21
  float v101; // s4
  float v102; // s5
  float v103; // s6
  float v104; // s7
  UIWidget_o *v105; // x21
  int v106; // s0
  UILabel_o *v110; // x21
  struct UILabel_o *v111; // x21
  System_String_o *v112; // x1
  int v113; // w9
  UIWidget_o *v114; // x21
  int v115; // s0
  UIWidget_o *v119; // x21
  int v120; // s0
  UIWidget_o *v124; // x21
  float v125; // s4
  float v126; // s5
  float v127; // s6
  float v128; // s7
  UIWidget_o *v129; // x21
  int v130; // s0
  UILabel_o *v134; // x21
  UILabel_o *v135; // x21
  UILabel_o *v136; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v138; // x22
  Il2CppObject *v139; // x0
  struct SummonControl_o *v140; // x8
  struct SummonControl_o *v141; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x0
  UnityEngine_GameObject_o *v145; // x0
  struct UnityEngine_GameObject_o *touchBlocker; // x21
  struct UnityEngine_GameObject_o *v147; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v156; // x0
  UnityEngine_Component_o *Parent; // x0
  int v158; // s1
  SummonResultComponent_c *v161; // x0
  int methodPointer; // s0
  float x; // s9
  float v164; // s4
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s8
  UnityEngine_Color_o v167; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector2_o v169; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v171; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v172; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v173; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v174; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42184CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_B0D8A4(&FSUtility_TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B0D8A4(&SummonControl_TypeInfo, v26);
    sub_B0D8A4(&SummonResultComponent_TypeInfo, v27);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v28);
    sub_B0D8A4(&UserGachaMaster_TypeInfo, v29);
    sub_B0D8A4(&StringLiteral_12449/*"SUMMON_APPEND_END"*/, v30);
    sub_B0D8A4(&StringLiteral_12266/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_B0D8A4(&StringLiteral_12480/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_B0D8A4(&StringLiteral_12271/*"SHORT_SERVANT_SELL"*/, v33);
    sub_B0D8A4(&StringLiteral_12484/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_B0D8A4(&StringLiteral_12506/*"SUMMON_TICKET_END"*/, v35);
    sub_B0D8A4(&StringLiteral_12257/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_B0D8A4(&StringLiteral_3398/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_42184CE = 1;
  }
  methoda.genericMethod = 0LL;
  memset(&methoda.klass, 0, 24);
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( type == 1 )
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
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3398/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v41 = v39;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12266/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_198;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12257/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_198;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_198;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    summonBtnLabel = (UIWidget_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnLabel )
      goto LABEL_198;
    UIWidget__set_color(summonBtnLabel, *(UnityEngine_Color_o *)&v45, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    formationBtnSpr = (UIWidget_o *)this->fields.formationBtnSpr;
    *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_white(0LL);
    if ( !formationBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(formationBtnSpr, *(UnityEngine_Color_o *)&v50, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    combineBtnSpr = (UIWidget_o *)this->fields.combineBtnSpr;
    *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
    if ( !combineBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(combineBtnSpr, *(UnityEngine_Color_o *)&v55, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    summonBtnSpr = (UIWidget_o *)this->fields.summonBtnSpr;
    *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(summonBtnSpr, *(UnityEngine_Color_o *)&v60, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    sellBtnSpr = (UIWidget_o *)this->fields.sellBtnSpr;
    *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
    if ( !sellBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(sellBtnSpr, *(UnityEngine_Color_o *)&v65, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_198;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_198;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, v69);
    v71 = this->fields.summonCtrl;
    if ( !v71 )
      goto LABEL_198;
    gachaParamData = v71->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_198;
    gachaType = gachaParamData->fields.gachaType;
    v74 = this->fields.summonBtnLabel;
    LODWORD(v167.fields.r) = gachaParamData->fields.gachaTime;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
    closeInfo = (int64_t)System_String__Format(v41, v75, 0LL);
    if ( !v74 )
      goto LABEL_198;
    UILabel__set_text(v74, (System_String_o *)closeInfo, 0LL);
    v76 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonResultComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    }
    if ( !v76 )
      goto LABEL_198;
    UILabel__SetCondensedScale(v76, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v78 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
          sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v79 = **(_QWORD **)(v78 + 192);
        if ( (*(_BYTE *)(v79 + 306) & 1) == 0 )
          sub_AA65A4(v79);
        closeInfo = **(_QWORD **)(v79 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)closeInfo,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserGachaMaster___);
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
          (const MethodInfo_2669C30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !methoda.return_type )
          goto LABEL_198;
        v82 = (System_String_o *)closeInfo;
        if ( !methoda.return_type[4].bits )
          goto LABEL_57;
        closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !methoda.return_type || !closeInfo )
          goto LABEL_198;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      methoda.return_type[4].bits,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_57;
        v83 = this->fields.summonBtnLabel;
        LODWORD(v167.fields.r) = 2;
        v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
        closeInfo = (int64_t)System_String__Format(v41, v84, 0LL);
        if ( !v83 )
          goto LABEL_198;
        UILabel__set_text(v83, (System_String_o *)closeInfo, 0LL);
LABEL_57:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaAppendMaster___);
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
              v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_129:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_198;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            v171.fields.r = 0.35547;
            v124 = (UIWidget_o *)this->fields.summonBtnSpr;
            v171.fields.a = 1.0;
            v171.fields.g = 0.35547;
            v171.fields.b = 0.35547;
            v167 = (UnityEngine_Color_o)0LL;
            UnityEngine_Color___ctor(v171, v125, v126, v127, v128, (const MethodInfo *)&v167);
            if ( !v124 )
              goto LABEL_198;
            UIWidget__set_color(v124, v167, 0LL);
            v129 = (UIWidget_o *)this->fields.summonBtnLabel;
            *(UnityEngine_Color_o *)&v130 = UnityEngine_Color__get_gray(0LL);
            if ( !v129 )
              goto LABEL_198;
            UIWidget__set_color(v129, *(UnityEngine_Color_o *)&v130, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v134 = this->fields.summonBtnLabel;
            if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonResultComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            }
            if ( !v134 )
              goto LABEL_198;
            UILabel__SetCondensedScale(
              v134,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_198;
            v112 = v82;
LABEL_138:
            UILabel__set_text((UILabel_o *)closeInfo, v112, 0LL);
            goto LABEL_163;
          }
        }
        else if ( methoda.parameters )
        {
          if ( !methoda.return_type )
            goto LABEL_198;
          v113 = *(&methoda.return_type[5].bits + 1);
          if ( v113 >= 1 && *((_DWORD *)methoda.parameters + 7) >= v113 )
            goto LABEL_129;
        }
LABEL_125:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        v114 = (UIWidget_o *)this->fields.summonBtnSpr;
        *(UnityEngine_Color_o *)&v115 = UnityEngine_Color__get_white(0LL);
        if ( !v114 )
          goto LABEL_198;
        UIWidget__set_color(v114, *(UnityEngine_Color_o *)&v115, 0LL);
        v119 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v120 = UnityEngine_Color__get_white(0LL);
        if ( !v119 )
          goto LABEL_198;
        UIWidget__set_color(v119, *(UnityEngine_Color_o *)&v120, 0LL);
LABEL_163:
        v140 = this->fields.summonCtrl;
        if ( v140 )
        {
          closeInfo = (int64_t)v140->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v141 = this->fields.summonCtrl;
            if ( v141 )
            {
              v141->fields.isResult = 1;
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
                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v143, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v144 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v144, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v145 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v145, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v147 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)touchBlocker,
                                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = v147;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&this->fields.blocker,
                  (System_Int32_array **)v147,
                  v149,
                  v150,
                  v151,
                  v152,
                  v153,
                  v154);
                blocker = this->fields.blocker;
                v156 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v156, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v161 = SummonResultComponent_TypeInfo;
                if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v161 = SummonResultComponent_TypeInfo;
                }
                *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v161->static_fields->TUTORIAL_BACK_ARROW_RECT;
                methodPointer = (int)methoda.methodPointer;
                x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v158 - 1), &methoda);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v172.fields.m_XMin = x - FSUtility__GetOffsetX(68.0, 0, 0LL);
                UnityEngine_Rect__set_x(v172, v164, &methoda);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    *(_QWORD *)&v173.fields.m_Width = methoda.invoker_method;
                    *(_QWORD *)&v173.fields.m_XMin = methoda.methodPointer;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v173, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        *(_QWORD *)&v174.fields.m_Width = methoda.invoker_method;
                        *(_QWORD *)&v174.fields.m_XMin = methoda.methodPointer;
                        v169.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
                        v169.fields.y = TutorialBackArrowPos.fields.y;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v169,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v174,
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
        v87 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
          sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v88 = **(_QWORD **)(v87 + 192);
        if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
          sub_AA65A4(v88);
        closeInfo = **(_QWORD **)(v88 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_198;
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_198;
        v89 = *(_DWORD *)(closeInfo + 24);
        v90 = SummonControl_TypeInfo;
        if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v90 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v90->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        }
        v92 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                (int32_t *)&methoda.genericContainerHandle + 1,
                (int32_t *)&methoda.genericMethod,
                0LL);
        if ( SHIDWORD(methoda.genericContainerHandle) > 0 || v92 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_198;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v135 = this->fields.summonBtnLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12480/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v135 )
            goto LABEL_198;
          UILabel__set_text(v135, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v136 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v136 )
            goto LABEL_198;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          gachaTime = gachaParamData->fields.gachaTime;
          if ( gachaTime == 1 )
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_198;
            gachaTime = 1;
          }
          else
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( v89 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_198;
              if ( v89 < 400 )
                gachaTime = 1;
              else
                gachaTime = v89 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_198;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaTime, 3, 0LL);
          v138 = this->fields.summonBtnLabel;
          LODWORD(v167.fields.r) = gachaParamData->fields.gachaTime;
          v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
          closeInfo = (int64_t)System_String__Format(v41, v139, 0LL);
          if ( !v138 )
            goto LABEL_198;
          UILabel__set_text(v138, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v136 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v136 )
LABEL_198:
            sub_B0D97C(closeInfo);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v136, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_163;
      case 5:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)closeInfo,
                   gachaParamData->fields.gachaId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_100;
        v95 = Entity;
        if ( !LODWORD(Entity->fields.emptyMessage) )
          goto LABEL_100;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v95->fields.emptyMessage,
               0LL) != 9 )
          goto LABEL_100;
        v96 = this->fields.summonBtnLabel;
        LODWORD(v167.fields.r) = gachaParamData->fields.gachaTime + 1;
        v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
        closeInfo = (int64_t)System_String__Format(v41, v97, 0LL);
        if ( !v96 )
          goto LABEL_198;
        UILabel__set_text(v96, (System_String_o *)closeInfo, 0LL);
LABEL_100:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v98 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v98 )
          goto LABEL_198;
        v99 = UserItemMaster__GetEntity(v98, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v99 && v99->fields.num > 0 )
          goto LABEL_125;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        v170.fields.r = 0.35547;
        v100 = (UIWidget_o *)this->fields.summonBtnSpr;
        v170.fields.a = 1.0;
        v170.fields.g = 0.35547;
        v170.fields.b = 0.35547;
        *(_QWORD *)&v167.fields.r = 0LL;
        *(_QWORD *)&v167.fields.b = 0LL;
        UnityEngine_Color___ctor(v170, v101, v102, v103, v104, (const MethodInfo *)&v167);
        if ( !v100 )
          goto LABEL_198;
        UIWidget__set_color(v100, v167, 0LL);
        v105 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v106 = UnityEngine_Color__get_gray(0LL);
        if ( !v105 )
          goto LABEL_198;
        UIWidget__set_color(v105, *(UnityEngine_Color_o *)&v106, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v110 = this->fields.summonBtnLabel;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        }
        if ( !v110 )
          goto LABEL_198;
        UILabel__SetCondensedScale(
          v110,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v111 = this->fields.summonBtnLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12506/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v111 )
          goto LABEL_198;
        v112 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v111;
        goto LABEL_138;
      default:
        goto LABEL_163;
    }
  }
  this->fields.dispType = type;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void __fastcall SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *SelfUserGame; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
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

  if ( (byte_42184D2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_7046/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_B0D8A4(&StringLiteral_7045/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_42184D2 = 1;
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
  if ( !byte_421088F )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v9);
    byte_421088F = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  HIDWORD(servantSum) = v10->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, (int32_t *)&servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7046/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
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
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7045/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
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
    sub_B0D97C(SelfUserGame);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_42184D4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, usrSvtId);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__, v7);
    sub_B0D8A4(&SummonResultComponent___c__DisplayClass64_0_TypeInfo, v8);
    byte_42184D4 = 1;
  }
  v9 = sub_B0D974(SummonResultComponent___c__DisplayClass64_0_TypeInfo, usrSvtId, method);
  SummonResultComponent___c__DisplayClass64_0___ctor((SummonResultComponent___c__DisplayClass64_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(v10);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_42184D3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, usrSvtId);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__, v7);
    sub_B0D8A4(&SummonResultComponent___c__DisplayClass63_0_TypeInfo, v8);
    byte_42184D3 = 1;
  }
  v9 = sub_B0D974(SummonResultComponent___c__DisplayClass63_0_TypeInfo, usrSvtId, method);
  SummonResultComponent___c__DisplayClass63_0___ctor((SummonResultComponent___c__DisplayClass63_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(v10);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x21
  WebViewManager_o *v13; // x0
  CommonUI_o *v14; // x19

  if ( (byte_421175B & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_421175B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(v12, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_9;
  CommonUI__OpenServantStatusDialog_17026436(v9, 8, usrSvtId, v12, 0LL, 0LL);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)v13;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v14 )
LABEL_9:
    sub_B0D97C(v13);
  CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  WebViewManager_o *v11; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusDialog_EndDelegate_o *v16; // x21
  CommonUI_o *v17; // x19

  if ( (byte_421175C & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_421175C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v13 = (CommonUI_o *)v11;
  v16 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15);
  ServantStatusDialog_EndDelegate___ctor(v16, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v13 )
    goto LABEL_11;
  CommonUI__OpenServantStatusDialog_17030008(v13, 0, (UserCommandCodeEntity_o *)Entity, v16, 0LL, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v17 )
LABEL_11:
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}