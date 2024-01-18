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

  if ( (byte_418AE3C & 1) == 0 )
  {
    sub_B2C35C(&SummonResultComponent_TypeInfo, v1);
    byte_418AE3C = 1;
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

  if ( (byte_418AE3B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5500/*"END_SUMMON"*/, v3);
    sub_B2C35C(&StringLiteral_8399/*"LIMIT_OVER"*/, v4);
    byte_418AE3B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8399/*"LIMIT_OVER"*/, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v6 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5500/*"END_SUMMON"*/, 0LL);
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

  if ( (byte_418AE33 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AE33 = 1;
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
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_B2C2F8(p_blocker, 0LL, v6, v7, v8, v9, v10, v11);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418AE38 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flg);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SummonResultComponent__DialogCallBack_b__65_0__, v6);
    byte_418AE38 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__65_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v11, v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  __int64 v36; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool result; // w0
  System_String_o *v40; // x22
  _QWORD **v41; // x25
  __int64 v42; // x23
  __int16 v43; // w8
  __int64 v44; // x23
  __int64 v45; // x23
  __int64 v46; // x23
  System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  SummonResultComponent_c *v62; // x0
  int32_t SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX; // s0
  int32_t summonBeforeMana; // w25
  BalanceConfig_c *v65; // x0
  int32_t ManaMax; // w8
  System_String_o *v67; // x23
  _QWORD **v68; // x25
  __int64 v69; // x24
  __int16 v70; // w8
  __int64 v71; // x24
  __int64 v72; // x24
  __int64 v73; // x24
  System_String_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_o *v81; // x21
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  SummonResultComponent_c *v90; // x0
  System_String_o *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_o *v98; // x21
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  SummonResultComponent_c *v107; // x0
  int32_t v108; // w25
  int32_t v109; // w24
  System_String_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_o *v117; // x0
  int32_t v118; // w8
  System_String_o *v119; // x21
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  UILabel_o *extraGiftTitleLb; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v130; // [xsp+18h] [xbp-48h] BYREF
  int32_t v131; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_418AE32 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, title);
    sub_B2C35C(&BalanceConfig_TypeInfo, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&SummonResultComponent_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_12425/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v21);
    sub_B2C35C(&StringLiteral_12429/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, v22);
    sub_B2C35C(&StringLiteral_12427/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v23);
    sub_B2C35C(&StringLiteral_12431/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_12430/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_12426/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    sub_B2C35C(&StringLiteral_12428/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v28);
    byte_418AE32 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)pos_x,
    (System_Boolean_array **)giftEntity,
    (System_Int32_array **)itemEntity,
    *(System_Int32_array **)&giftResultType,
    *(System_Int32_array **)&giftBonusType);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, 0LL);
        v41 = (_QWORD **)Method_System_Array_Empty_object___;
        v42 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
        v43 = *(_WORD *)(v42 + 306);
        if ( (v43 & 1) == 0 )
        {
          sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
          v43 = *(_WORD *)(v42 + 306);
        }
        if ( (v43 & 0x400) != 0 )
        {
          v44 = *v41[6];
          if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
            sub_AC505C(*v41[6]);
          if ( !*(_DWORD *)(v44 + 224) )
          {
            v45 = *v41[6];
            if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
              sub_AC505C(*v41[6]);
            j_il2cpp_runtime_class_init_0(v45);
          }
        }
        v46 = *v41[6];
        if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
          sub_AC505C(*v41[6]);
        v47 = System_String__Format_44384256(v40, **(System_Object_array ***)(v46 + 184), 0LL);
        *title = v47;
        sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12429/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, 0LL);
        v55 = System_String__Format(v54, (Il2CppObject *)itemEntity->fields.name, 0LL);
        *message = v55;
        sub_B2C2F8((BattleServantConfConponent_o *)message, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
        v62 = SummonResultComponent_TypeInfo;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v62 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v62->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
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
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      *title = v91;
      sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12426/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      num = giftEntity->fields.num;
      v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v100 = System_String__Format(v98, v99, 0LL);
      *message = v100;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)message,
        (System_Int32_array **)v100,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      v107 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v107 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v107->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      goto LABEL_58;
    }
    summonBeforeMana = this->fields.summonBeforeMana;
    v65 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v65 = BalanceConfig_TypeInfo;
    }
    ManaMax = v65->static_fields->ManaMax;
    if ( summonBeforeMana == ManaMax )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12428/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v68 = (_QWORD **)Method_System_Array_Empty_object___;
      v69 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v70 = *(_WORD *)(v69 + 306);
      if ( (v70 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v70 = *(_WORD *)(v69 + 306);
      }
      if ( (v70 & 0x400) != 0 )
      {
        v71 = *v68[6];
        if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
          sub_AC505C(*v68[6]);
        if ( !*(_DWORD *)(v71 + 224) )
        {
          v72 = *v68[6];
          if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
            sub_AC505C(*v68[6]);
          j_il2cpp_runtime_class_init_0(v72);
        }
      }
      v73 = *v68[6];
      if ( (*(_BYTE *)(v73 + 306) & 1) == 0 )
        sub_AC505C(*v68[6]);
      v74 = System_String__Format_44384256(v67, **(System_Object_array ***)(v73 + 184), 0LL);
      *title = v74;
      sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      v131 = giftEntity->fields.num;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
      v83 = System_String__Format(v81, v82, 0LL);
      *message = v83;
      sub_B2C2F8((BattleServantConfConponent_o *)message, (System_Int32_array **)v83, v84, v85, v86, v87, v88, v89);
      v90 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v90 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v90->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      goto LABEL_58;
    }
    v108 = this->fields.summonBeforeMana;
    if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = BalanceConfig_TypeInfo;
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    if ( v108 >= ManaMax )
      return 0;
    if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    v109 = ManaMax - this->fields.summonBeforeMana;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
    *title = v110;
    sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)v110, v111, v112, v113, v114, v115, v116);
    v117 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
    v118 = giftEntity->fields.num;
    v119 = v117;
    if ( v118 > v109 )
      v118 = v109;
    v130 = v118;
    v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
    v121 = System_String__Format(v119, v120, 0LL);
    *message = v121;
    sub_B2C2F8((BattleServantConfConponent_o *)message, (System_Int32_array **)v121, v122, v123, v124, v125, v126, v127);
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
    sub_B2C434(extraGiftMsg2Lb, v36);
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
    sub_B2C434(extraGiftTitleLb, method);
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
  System_Action_o *v7; // x21
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_418AE3D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_418AE3D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
LABEL_9:
    sub_B2C434(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  if ( (byte_418AE34 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    this = (SummonResultComponent_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_418AE34 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418AE39 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418AE39 = 1;
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
    sub_B2C434(fstGrid, method);
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
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellHeight; // s10
  struct UIGrid_o *scdGrid; // x9
  int cellWidth_low; // s11
  float v39; // s9
  System_Collections_Generic_List_int__o *v40; // x24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w8
  __int64 v48; // x23
  GachaInfos_o **m_Items; // x21
  GachaInfos_array *v50; // x22
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_o *v52; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v55; // x25
  UnityEngine_Transform_o *v56; // x26
  int v57; // s0
  const MethodInfo *v60; // x2
  int32_t objectId; // w26
  bool v62; // w26
  bool IsCommandCode; // w28
  SummonResultInfoComponent_ClickDelegate_o *v64; // x0
  SummonResultInfoComponent_ClickDelegate_o *v65; // x27
  __int64 *v66; // x8
  const MethodInfo *v67; // x6
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int QpMax; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  float v74; // s12
  float v75; // s11
  float v76; // s8
  float v77; // s1
  float v78; // s1
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v80; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v82; // x8
  GiftEntity_o *DataById; // x22
  ItemEntity_o *v84; // x23
  struct UISprite_o *extraGiftMsgSpr; // x8
  GachaExtraGifts_o *v86; // x8
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t mWidth; // w20
  UIWidget_o *v89; // x21
  struct UIGrid_o *v90; // x8
  int v91; // s9
  int v92; // s10
  float v93; // s8
  float v94; // s9
  float v95; // s10
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL; // s0
  bool v97; // w1
  __int64 v98; // x10
  char v99; // w9
  int32_t v100; // w24
  int32_t v101; // w20
  int32_t gachaExtraGiftResultType; // w23
  GachaExtraGifts_o *v103; // x15
  int32_t gachaExtraGiftBonusType; // w14
  GiftEntity_o *v105; // x21
  ItemEntity_o *v106; // x22
  struct UISprite_o *v107; // x8
  struct UILabel_o *v108; // x8
  struct UILabel_o *v109; // x9
  bool v110; // w21
  char v111; // w20
  UnityEngine_GameObject_o *v112; // x0
  char v113; // w1
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  struct UILabel_o *extraGiftTitleLb; // x8
  struct UILabel_o *v116; // x9
  const MethodInfo *v117; // x2
  __int64 v118; // x0
  const MethodInfo *v119; // [xsp+0h] [xbp-D0h]
  System_Int32_array *v120; // [xsp+10h] [xbp-C0h]
  GachaExtraGifts_array *v121; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+20h] [xbp-B0h]
  char v123; // [xsp+2Ch] [xbp-A4h]
  struct UIGrid_o **p_scdGrid; // [xsp+30h] [xbp-A0h]
  float pos_x; // [xsp+3Ch] [xbp-94h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_418AE30 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, resultList);
    sub_B2C35C(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Collider___, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_SummonResultComponent_showResCcDetail__, v23);
    sub_B2C35C(&Method_SummonResultComponent_showResSvtDetail__, v24);
    sub_B2C35C(&SummonResultComponent_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_12440/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v26);
    sub_B2C35C(&StringLiteral_12462/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v27);
    sub_B2C35C(&StringLiteral_1/*""*/, v28);
    byte_418AE30 = 1;
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
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    v120 = extraGiftIds;
    v121 = gachaExtraGiftList;
    cellWidth_low = LODWORD(fstGrid->fields.cellWidth);
    v39 = scdGrid->fields.cellHeight;
    v40 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v40,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v40;
    p_befSvtList = &this->fields.befSvtList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.befSvtList,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v47 = v9->max_length;
    if ( v47 >= 1 )
    {
      v48 = 0LL;
      m_Items = v9->m_Items;
      v50 = v9;
      v123 = 0;
      while ( (unsigned int)v48 < v47 )
      {
        p_fstGrid = &this->fields.scdGrid;
        if ( (unsigned int)v48 < 6 )
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_211;
        v52 = m_Items[v48];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        v55 = changeSceneBtnInfo;
        v56 = UnityEngine_GameObject__get_transform(changeSceneBtnInfo, 0LL);
        *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_one(0LL);
        if ( !v56 )
          goto LABEL_211;
        UnityEngine_Transform__set_localScale(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
        if ( !v52 )
          goto LABEL_211;
        if ( v52->fields.isNew
          && (objectId = v52->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v60)) )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_211;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
            objectId,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v62 = 0;
        }
        else
        {
          v62 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v52->fields.type, 0LL);
        v64 = (SummonResultInfoComponent_ClickDelegate_o *)sub_B2C42C(SummonResultInfoComponent_ClickDelegate_TypeInfo);
        v65 = v64;
        if ( IsCommandCode )
          v66 = &Method_SummonResultComponent_showResCcDetail__;
        else
          v66 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v64, (Il2CppObject *)this, *v66, 0LL);
        if ( v52->fields.sellMana || v52->fields.sellQp )
        {
          v65 = 0LL;
          v123 = 1;
        }
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v55,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_211;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v52,
          v62,
          v65,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v67);
        sellQp = v52->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v9 = v50;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v9 = v50;
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
          QpMax = this->fields.summonBeforeQp + v52->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v52->fields.sellMana;
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
          UserItemMax = this->fields.summonBeforeMana + v52->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v47 = v9->max_length;
        if ( (int)++v48 >= v47 )
          goto LABEL_63;
      }
LABEL_212:
      v118 = sub_B2C460(changeSceneBtnInfo);
      sub_B2C400(v118, 0LL);
    }
    v123 = 0;
LABEL_63:
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.fstGrid;
    v74 = (float)max_length;
    v75 = (float)cellWidth_low;
    v76 = (float)max_length <= v75 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                       0LL);
    extraGiftIds = v120;
    gachaExtraGiftList = v121;
    if ( !changeSceneBtnInfo )
      goto LABEL_211;
    v77 = v74 <= v75 ? v74 : v75;
    v128.fields.x = -(float)((float)(cellHeight * 0.5) * (float)(v77 + -1.0));
    v128.fields.y = v76;
    v128.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v128, 0LL);
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
    v78 = (float)(v74 - v75) + -1.0;
    if ( v74 <= v75 )
      v78 = -1.0;
    v129.fields.z = this->fields.center.fields.z;
    v129.fields.x = -(float)((float)(v39 * 0.5) * v78);
    v129.fields.y = -62.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v129, 0LL);
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
    if ( (v123 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12462/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
                                                         0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_211;
      v80 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_211;
      v80 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v80, 0LL);
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
      v82 = *(_QWORD *)&extraGiftIds->max_length;
      if ( v82 )
      {
        pos_x = 0.0;
        message = (System_String_o *)StringLiteral_1/*""*/;
        title = (System_String_o *)StringLiteral_1/*""*/;
        if ( (_DWORD)v82 == 1 )
        {
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !extraGiftIds->max_length )
            goto LABEL_212;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          DataById = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, extraGiftIds->m_Items[1], 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !DataById )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             DataById->fields.objectId,
                                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v84 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v84->fields.id, -1, 0LL);
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
          v86 = gachaExtraGiftList->m_Items[0];
          if ( !v86 )
            goto LABEL_211;
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  DataById,
                  v84,
                  v86->fields.gachaExtraGiftResultType,
                  v86->fields.gachaExtraGiftBonusType,
                  v119) )
          {
            v111 = 0;
LABEL_207:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( changeSceneBtnInfo )
            {
              changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                     0LL);
              if ( changeSceneBtnInfo )
              {
                v97 = v111;
                goto LABEL_210;
              }
            }
LABEL_211:
            sub_B2C434(changeSceneBtnInfo, resultList);
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
            v89 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
            if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
              j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            if ( !v89 )
              goto LABEL_211;
            UIWidget__set_width(v89, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
          }
          if ( !v9 )
            goto LABEL_211;
          v90 = this->fields.fstGrid;
          if ( !v90 )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v91 = v9->max_length;
          v92 = LODWORD(v90->fields.cellWidth);
          v93 = pos_x;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          v94 = (float)v91;
          v95 = (float)v92;
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                      + 32LL);
          if ( v93 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL )
          {
            if ( v94 <= v95 )
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
            v93 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
          }
          if ( (changeSceneBtnInfo[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(changeSceneBtnInfo[9].monitor) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)*(int *)(*(_QWORD *)&changeSceneBtnInfo[7].fields.m_CachedPtr
                                                                   + 40LL);
          if ( v93 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX )
          {
            if ( v94 <= v95 )
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
            v93 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          }
          extraGiftTitleLb = this->fields.extraGiftTitleLb;
          if ( !extraGiftTitleLb )
            goto LABEL_211;
          v116 = this->fields.extraGiftMsg2Lb;
          if ( !v116 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(extraGiftTitleLb->fields.mWidth / 2),
            (float)(v116->fields.mWidth / 2),
            v93,
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
          v113 = 1;
          v111 = 1;
LABEL_206:
          UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v113, 0LL);
          goto LABEL_207;
        }
        if ( (int)v82 < 1 )
          goto LABEL_215;
        v98 = 0LL;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        gachaExtraGiftResultType = 0;
        do
        {
          if ( (unsigned int)v98 >= gachaExtraGiftList->max_length )
            goto LABEL_212;
          v103 = gachaExtraGiftList->m_Items[v98];
          if ( !v103 )
            goto LABEL_211;
          gachaExtraGiftBonusType = v103->fields.gachaExtraGiftBonusType;
          if ( !v100 && gachaExtraGiftBonusType == 2 )
          {
            v100 = extraGiftIds->m_Items[v98 + 1];
            gachaExtraGiftResultType = v103->fields.gachaExtraGiftResultType;
            v101 = 2;
          }
          ++v98;
          v99 |= gachaExtraGiftBonusType == 1;
        }
        while ( (int)v98 < (int)v82 );
        if ( (v99 & 1) != 0 )
        {
          if ( !v100 )
            goto LABEL_176;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v105 = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, v100, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)changeSceneBtnInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !v105 )
            goto LABEL_211;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)changeSceneBtnInfo,
                                                             v105->fields.objectId,
                                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          v106 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v106->fields.id, -1, 0LL);
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_211;
          changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
          v107 = this->fields.extraGiftMsgSpr;
          if ( !v107 )
            goto LABEL_211;
          GameObjectExtensions__SetLocalPositionX(changeSceneBtnInfo, (float)(v107->fields.mWidth / 2), 0LL);
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  v105,
                  v106,
                  gachaExtraGiftResultType,
                  v101,
                  v119) )
          {
LABEL_176:
            v110 = 0;
            v111 = 0;
LABEL_177:
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgIconComp;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
            GameObjectExtensions__SetLocalPositionX(v112, 0.0, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgSpr;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v110, 0LL);
            changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            changeSceneBtnInfo = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)changeSceneBtnInfo,
                                   0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_211;
            v113 = !v110;
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
          v108 = this->fields.extraGiftTitleLb;
          if ( !v108 )
            goto LABEL_211;
          v109 = this->fields.extraGiftMsg2Lb;
          if ( !v109 )
            goto LABEL_211;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v108->fields.mWidth / 2),
            (float)(v109->fields.mWidth / 2),
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
          v110 = 1;
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
                                                             (System_String_o *)StringLiteral_12440/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                             0LL);
          if ( !this->fields.extraGiftMsgLb )
            goto LABEL_211;
          UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
          v110 = 0;
        }
        v111 = 1;
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
  v97 = 0;
LABEL_210:
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, v97, 0LL);
  SummonResultComponent__setListByType(this, this->fields.dispType, v117);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_418AE3A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12241/*"SHOW_TALK"*/, method);
    byte_418AE3A = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B2C434(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12241/*"SHOW_TALK"*/, 0LL);
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
    sub_B2C434(mWidget, method);
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
    v19 = sub_B2C460(mWidget);
    sub_B2C400(v19, 0LL);
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
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v70; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *v73; // x22
  Il2CppObject *v74; // x0
  UILabel_o *v75; // x22
  int32_t gachaId; // w22
  __int64 v77; // x23
  __int64 v78; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGachaMaster_o *Master_WarQuestSelectionMaster; // x24
  System_String_o *v81; // x22
  UILabel_o *v82; // x23
  Il2CppObject *v83; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v86; // x23
  __int64 v87; // x23
  int v88; // w23
  SummonControl_c *v89; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v91; // w0
  WarEntity_o *Entity; // x0
  WarEntity_o *v93; // x22
  UILabel_o *v94; // x22
  Il2CppObject *v95; // x0
  UserItemMaster_o *v96; // x21
  UserItemEntity_o *v97; // x0
  UIWidget_o *v98; // x21
  float v99; // s4
  float v100; // s5
  float v101; // s6
  float v102; // s7
  UIWidget_o *v103; // x21
  int v104; // s0
  UILabel_o *v108; // x21
  struct UILabel_o *v109; // x21
  System_String_o *v110; // x1
  int v111; // w9
  UIWidget_o *v112; // x21
  int v113; // s0
  UIWidget_o *v117; // x21
  int v118; // s0
  UIWidget_o *v122; // x21
  float v123; // s4
  float v124; // s5
  float v125; // s6
  float v126; // s7
  UIWidget_o *v127; // x21
  int v128; // s0
  UILabel_o *v132; // x21
  UILabel_o *v133; // x21
  UILabel_o *v134; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v136; // x22
  Il2CppObject *v137; // x0
  struct SummonControl_o *v138; // x8
  struct SummonControl_o *v139; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x0
  struct UnityEngine_GameObject_o *touchBlocker; // x21
  struct UnityEngine_GameObject_o *v145; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v154; // x0
  UnityEngine_Component_o *Parent; // x0
  int v156; // s1
  SummonResultComponent_c *v159; // x0
  int methodPointer; // s0
  float x; // s9
  float v162; // s4
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s8
  UnityEngine_Color_o v165; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector2_o v167; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v168; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v169; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v171; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v172; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v3 = type;
  if ( (byte_418AE31 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&FSUtility_TypeInfo, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B2C35C(&SummonControl_TypeInfo, v26);
    sub_B2C35C(&SummonResultComponent_TypeInfo, v27);
    sub_B2C35C(&TutorialFlag_TypeInfo, v28);
    sub_B2C35C(&UserGachaMaster_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_12411/*"SUMMON_APPEND_END"*/, v30);
    sub_B2C35C(&StringLiteral_12228/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_B2C35C(&StringLiteral_12442/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_B2C35C(&StringLiteral_12233/*"SHORT_SERVANT_SELL"*/, v33);
    sub_B2C35C(&StringLiteral_12446/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_B2C35C(&StringLiteral_12468/*"SUMMON_TICKET_END"*/, v35);
    sub_B2C35C(&StringLiteral_12219/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_B2C35C(&StringLiteral_3385/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_418AE31 = 1;
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
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3385/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v41 = v39;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12228/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_198;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_198;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SHORT_SERVANT_SELL"*/, 0LL);
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
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v70 = this->fields.summonCtrl;
    if ( !v70 )
      goto LABEL_198;
    gachaParamData = v70->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_198;
    gachaType = gachaParamData->fields.gachaType;
    v73 = this->fields.summonBtnLabel;
    LODWORD(v165.fields.r) = gachaParamData->fields.gachaTime;
    v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165);
    closeInfo = (int64_t)System_String__Format(v41, v74, 0LL);
    if ( !v73 )
      goto LABEL_198;
    UILabel__set_text(v73, (System_String_o *)closeInfo, 0LL);
    v75 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonResultComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    }
    if ( !v75 )
      goto LABEL_198;
    UILabel__SetCondensedScale(v75, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v77 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
          sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v78 = **(_QWORD **)(v77 + 192);
        if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
          sub_AC505C(v78);
        closeInfo = **(_QWORD **)(v78 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)closeInfo,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGachaMaster___);
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
          (const MethodInfo_24E412C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !methoda.return_type )
          goto LABEL_198;
        v81 = (System_String_o *)closeInfo;
        if ( !methoda.return_type[4].bits )
          goto LABEL_57;
        closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !methoda.return_type || !closeInfo )
          goto LABEL_198;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      methoda.return_type[4].bits,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_57;
        v82 = this->fields.summonBtnLabel;
        LODWORD(v165.fields.r) = 2;
        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165);
        closeInfo = (int64_t)System_String__Format(v41, v83, 0LL);
        if ( !v82 )
          goto LABEL_198;
        UILabel__set_text(v82, (System_String_o *)closeInfo, 0LL);
LABEL_57:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaAppendMaster___);
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
              v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_129:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_198;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            v169.fields.r = 0.35547;
            v122 = (UIWidget_o *)this->fields.summonBtnSpr;
            v169.fields.a = 1.0;
            v169.fields.g = 0.35547;
            v169.fields.b = 0.35547;
            v165 = (UnityEngine_Color_o)0LL;
            UnityEngine_Color___ctor(v169, v123, v124, v125, v126, (const MethodInfo *)&v165);
            if ( !v122 )
              goto LABEL_198;
            UIWidget__set_color(v122, v165, 0LL);
            v127 = (UIWidget_o *)this->fields.summonBtnLabel;
            *(UnityEngine_Color_o *)&v128 = UnityEngine_Color__get_gray(0LL);
            if ( !v127 )
              goto LABEL_198;
            UIWidget__set_color(v127, *(UnityEngine_Color_o *)&v128, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v132 = this->fields.summonBtnLabel;
            if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonResultComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            }
            if ( !v132 )
              goto LABEL_198;
            UILabel__SetCondensedScale(
              v132,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_198;
            v110 = v81;
LABEL_138:
            UILabel__set_text((UILabel_o *)closeInfo, v110, 0LL);
            goto LABEL_163;
          }
        }
        else if ( methoda.parameters )
        {
          if ( !methoda.return_type )
            goto LABEL_198;
          v111 = *(&methoda.return_type[5].bits + 1);
          if ( v111 >= 1 && *((_DWORD *)methoda.parameters + 7) >= v111 )
            goto LABEL_129;
        }
LABEL_125:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        v112 = (UIWidget_o *)this->fields.summonBtnSpr;
        *(UnityEngine_Color_o *)&v113 = UnityEngine_Color__get_white(0LL);
        if ( !v112 )
          goto LABEL_198;
        UIWidget__set_color(v112, *(UnityEngine_Color_o *)&v113, 0LL);
        v117 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v118 = UnityEngine_Color__get_white(0LL);
        if ( !v117 )
          goto LABEL_198;
        UIWidget__set_color(v117, *(UnityEngine_Color_o *)&v118, 0LL);
LABEL_163:
        v138 = this->fields.summonCtrl;
        if ( v138 )
        {
          closeInfo = (int64_t)v138->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v139 = this->fields.summonCtrl;
            if ( v139 )
            {
              v139->fields.isResult = 1;
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
                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v141, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v142, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v143 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v143, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v145 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)touchBlocker,
                                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = v145;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&this->fields.blocker,
                  (System_Int32_array **)v145,
                  v147,
                  v148,
                  v149,
                  v150,
                  v151,
                  v152);
                blocker = this->fields.blocker;
                v154 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v154, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v159 = SummonResultComponent_TypeInfo;
                if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v159 = SummonResultComponent_TypeInfo;
                }
                *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v159->static_fields->TUTORIAL_BACK_ARROW_RECT;
                methodPointer = (int)methoda.methodPointer;
                x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v156 - 1), &methoda);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v170.fields.m_XMin = x - FSUtility__GetOffsetX(68.0, 0, 0LL);
                UnityEngine_Rect__set_x(v170, v162, &methoda);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    *(_QWORD *)&v171.fields.m_Width = methoda.invoker_method;
                    *(_QWORD *)&v171.fields.m_XMin = methoda.methodPointer;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v171, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        *(_QWORD *)&v172.fields.m_Width = methoda.invoker_method;
                        *(_QWORD *)&v172.fields.m_XMin = methoda.methodPointer;
                        v167.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
                        v167.fields.y = TutorialBackArrowPos.fields.y;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v167,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v172,
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
        v86 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v86 + 306) & 1) == 0 )
          sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v87 = **(_QWORD **)(v86 + 192);
        if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
          sub_AC505C(v87);
        closeInfo = **(_QWORD **)(v87 + 184);
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_198;
        if ( !closeInfo )
          goto LABEL_198;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_198;
        v88 = *(_DWORD *)(closeInfo + 24);
        v89 = SummonControl_TypeInfo;
        if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v89 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v89->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        }
        v91 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                (int32_t *)&methoda.genericContainerHandle + 1,
                (int32_t *)&methoda.genericMethod,
                0LL);
        if ( SHIDWORD(methoda.genericContainerHandle) > 0 || v91 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_198;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v133 = this->fields.summonBtnLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v133 )
            goto LABEL_198;
          UILabel__set_text(v133, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v134 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v134 )
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
            if ( v88 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_198;
              if ( v88 < 400 )
                type = 1;
              else
                type = v88 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_198;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v136 = this->fields.summonBtnLabel;
          LODWORD(v165.fields.r) = gachaParamData->fields.gachaTime;
          v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165);
          closeInfo = (int64_t)System_String__Format(v41, v137, 0LL);
          if ( !v136 )
            goto LABEL_198;
          UILabel__set_text(v136, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v134 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v134 )
LABEL_198:
            sub_B2C434(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v134, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_163;
      case 5:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)closeInfo,
                   gachaParamData->fields.gachaId,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_100;
        v93 = Entity;
        if ( !LODWORD(Entity->fields.emptyMessage) )
          goto LABEL_100;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        closeInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_198;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v93->fields.emptyMessage,
               0LL) != 9 )
          goto LABEL_100;
        v94 = this->fields.summonBtnLabel;
        LODWORD(v165.fields.r) = gachaParamData->fields.gachaTime + 1;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165);
        closeInfo = (int64_t)System_String__Format(v41, v95, 0LL);
        if ( !v94 )
          goto LABEL_198;
        UILabel__set_text(v94, (System_String_o *)closeInfo, 0LL);
LABEL_100:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v96 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v96 )
          goto LABEL_198;
        v97 = UserItemMaster__GetEntity(v96, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v97 && v97->fields.num > 0 )
          goto LABEL_125;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        v168.fields.r = 0.35547;
        v98 = (UIWidget_o *)this->fields.summonBtnSpr;
        v168.fields.a = 1.0;
        v168.fields.g = 0.35547;
        v168.fields.b = 0.35547;
        *(_QWORD *)&v165.fields.r = 0LL;
        *(_QWORD *)&v165.fields.b = 0LL;
        UnityEngine_Color___ctor(v168, v99, v100, v101, v102, (const MethodInfo *)&v165);
        if ( !v98 )
          goto LABEL_198;
        UIWidget__set_color(v98, v165, 0LL);
        v103 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v104 = UnityEngine_Color__get_gray(0LL);
        if ( !v103 )
          goto LABEL_198;
        UIWidget__set_color(v103, *(UnityEngine_Color_o *)&v104, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v108 = this->fields.summonBtnLabel;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        }
        if ( !v108 )
          goto LABEL_198;
        UILabel__SetCondensedScale(
          v108,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v109 = this->fields.summonBtnLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v109 )
          goto LABEL_198;
        v110 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v109;
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

  if ( (byte_418AE35 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_7026/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_B2C35C(&StringLiteral_7025/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_418AE35 = 1;
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
  if ( !byte_4183CB7 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v9);
    byte_4183CB7 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  HIDWORD(servantSum) = v10->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, (int32_t *)&servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    SelfUserGame,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_25;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7026/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
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
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7025/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
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
    sub_B2C434(SelfUserGame, v9);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_418AE37 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrSvtId);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__, v7);
    sub_B2C35C(&SummonResultComponent___c__DisplayClass64_0_TypeInfo, v8);
    byte_418AE37 = 1;
  }
  v9 = sub_B2C42C(SummonResultComponent___c__DisplayClass64_0_TypeInfo);
  SummonResultComponent___c__DisplayClass64_0___ctor((SummonResultComponent___c__DisplayClass64_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_418AE36 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrSvtId);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__, v7);
    sub_B2C35C(&SummonResultComponent___c__DisplayClass63_0_TypeInfo, v8);
    byte_418AE36 = 1;
  }
  v9 = sub_B2C42C(SummonResultComponent___c__DisplayClass63_0_TypeInfo);
  SummonResultComponent___c__DisplayClass63_0___ctor((SummonResultComponent___c__DisplayClass63_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v10; // x21
  WebViewManager_o *v11; // x0
  __int64 v12; // x1
  CommonUI_o *v13; // x19

  if ( (byte_41847C6 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_41847C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v10, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_9;
  CommonUI__OpenServantStatusDialog_17980832(v9, 8, usrSvtId, v10, 0LL, 0LL);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)v11;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v13 )
LABEL_9:
    sub_B2C434(v11, v12);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v10; // x1
  UserServantEntity_o *Entity; // x20
  WebViewManager_o *v12; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v14; // x19
  ServantStatusDialog_EndDelegate_o *v15; // x21
  CommonUI_o *v16; // x19

  if ( (byte_41847C7 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_41847C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v14 = (CommonUI_o *)v12;
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v15, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v14 )
    goto LABEL_11;
  CommonUI__OpenServantStatusDialog_17984316(v14, 0, (UserCommandCodeEntity_o *)Entity, v15, 0LL, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v16 )
LABEL_11:
    sub_B2C434(Instance, v10);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}