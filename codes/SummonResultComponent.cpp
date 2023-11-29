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

  if ( (byte_40FD4B8 & 1) == 0 )
  {
    sub_B16FFC(&SummonResultComponent_TypeInfo, v1);
    byte_40FD4B8 = 1;
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
  v6->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_Y_DEFAULT = -147;
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

  if ( (byte_40FD4B7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5485, v3);
    sub_B16FFC(&StringLiteral_8370, v4);
    byte_40FD4B7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8370, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v6 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5485, 0LL);
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

  if ( (byte_40FD4AF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD4AF = 1;
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
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_B16F98(p_blocker, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_40FD4B4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SummonResultComponent__DialogCallBack_b__62_0__, v6);
    byte_40FD4B4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__62_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool result; // w0
  System_String_o *v36; // x22
  _QWORD **v37; // x25
  __int64 v38; // x24
  __int16 v39; // w8
  __int64 v40; // x24
  __int64 v41; // x24
  __int64 v42; // x24
  System_String_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SummonResultComponent_c *v58; // x0
  int SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  System_String_o *v60; // x23
  _QWORD **v61; // x25
  __int64 v62; // x24
  __int16 v63; // w8
  __int64 v64; // x24
  __int64 v65; // x24
  __int64 v66; // x24
  System_String_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_o *v74; // x21
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  SummonResultComponent_c *v83; // x0
  System_String_o *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_o *v91; // x21
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  SummonResultComponent_c *v100; // x0
  int32_t v101; // [xsp+8h] [xbp-48h] BYREF
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FD4AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_object___, title);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&SummonResultComponent_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_12370, v20);
    sub_B16FFC(&StringLiteral_12373, v21);
    sub_B16FFC(&StringLiteral_12375, v22);
    sub_B16FFC(&StringLiteral_12374, v23);
    sub_B16FFC(&StringLiteral_12371, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    sub_B16FFC(&StringLiteral_12372, v26);
    byte_40FD4AE = 1;
  }
  *title = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1,
    (System_String_array **)message,
    (System_String_array **)pos_x,
    (System_Boolean_array **)giftEntity,
    (System_Int32_array **)itemEntity,
    *(System_Int32_array **)&giftResultType,
    *(System_Int32_array **)&giftBonusType);
  *message = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *pos_x = 0.0;
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl || (gachaParamData = summonCtrl->fields.gachaParamData) == 0LL )
    sub_B170D4();
  result = 0;
  if ( itemEntity && giftEntity && gachaParamData->fields.gachaType != 5 )
  {
    if ( giftBonusType == 1 )
    {
      if ( giftResultType == 3 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12372, 0LL);
        v61 = (_QWORD **)Method_System_Array_Empty_object___;
        v62 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
        v63 = *(_WORD *)(v62 + 306);
        if ( (v63 & 1) == 0 )
        {
          sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
          v63 = *(_WORD *)(v62 + 306);
        }
        if ( (v63 & 0x400) != 0 )
        {
          v64 = *v61[6];
          if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
            sub_AAFCFC(*v61[6]);
          if ( !*(_DWORD *)(v64 + 224) )
          {
            v65 = *v61[6];
            if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
              sub_AAFCFC(*v61[6]);
            j_il2cpp_runtime_class_init_0(v65);
          }
        }
        v66 = *v61[6];
        if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
          sub_AAFCFC(*v61[6]);
        v67 = System_String__Format_43822456(v60, **(System_Object_array ***)(v66 + 184), 0LL);
        *title = v67;
        sub_B16F98((BattleServantConfConponent_o *)title, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12370, 0LL);
        num = giftEntity->fields.num;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        v76 = System_String__Format(v74, v75, 0LL);
        *message = v76;
        sub_B16F98((BattleServantConfConponent_o *)message, (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
        v83 = SummonResultComponent_TypeInfo;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v83 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = v83->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12375, 0LL);
        *title = v84;
        sub_B16F98((BattleServantConfConponent_o *)title, (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12371, 0LL);
        v101 = giftEntity->fields.num;
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
        v93 = System_String__Format(v91, v92, 0LL);
        *message = v93;
        sub_B16F98((BattleServantConfConponent_o *)message, (System_Int32_array **)v93, v94, v95, v96, v97, v98, v99);
        v100 = SummonResultComponent_TypeInfo;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v100 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = v100->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      }
    }
    else
    {
      if ( giftBonusType != 2 )
        return 0;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12374, 0LL);
      v37 = (_QWORD **)Method_System_Array_Empty_object___;
      v38 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v39 = *(_WORD *)(v38 + 306);
      if ( (v39 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v39 = *(_WORD *)(v38 + 306);
      }
      if ( (v39 & 0x400) != 0 )
      {
        v40 = *v37[6];
        if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
          sub_AAFCFC(*v37[6]);
        if ( !*(_DWORD *)(v40 + 224) )
        {
          v41 = *v37[6];
          if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
            sub_AAFCFC(*v37[6]);
          j_il2cpp_runtime_class_init_0(v41);
        }
      }
      v42 = *v37[6];
      if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
        sub_AAFCFC(*v37[6]);
      v43 = System_String__Format_43822456(v36, **(System_Object_array ***)(v42 + 184), 0LL);
      *title = v43;
      sub_B16F98((BattleServantConfConponent_o *)title, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12373, 0LL);
      v51 = System_String__Format(v50, (Il2CppObject *)itemEntity->fields.name, 0LL);
      *message = v51;
      sub_B16F98((BattleServantConfConponent_o *)message, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
      v58 = SummonResultComponent_TypeInfo;
      if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v58 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = v58->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
    }
    result = 1;
    *pos_x = (float)SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
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
  UnityEngine_Component_o *extraGiftMsgIconComp; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *extraGiftMsgSpr; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *v15; // x0
  float v16; // s9
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *extraGiftMsg2Lb; // x0
  UnityEngine_GameObject_o *v19; // x0

  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_7;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, posX, 0LL);
  extraGiftMsgIconComp = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
  if ( !extraGiftMsgIconComp )
    goto LABEL_7;
  v12 = UnityEngine_Component__get_gameObject(extraGiftMsgIconComp, 0LL);
  GameObjectExtensions__SetLocalPositionX(v12, 0.0, 0LL);
  extraGiftMsgSpr = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr;
  if ( !extraGiftMsgSpr
    || (v14 = UnityEngine_Component__get_gameObject(extraGiftMsgSpr, 0LL),
        GameObjectExtensions__SetLocalPositionX(v14, 0.0, 0LL),
        (v15 = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr) == 0LL)
    || (v16 = (float)((float)v15[6].fields.m_CachedPtr + titleX) + posX,
        v17 = UnityEngine_Component__get_gameObject(v15, 0LL),
        GameObjectExtensions__SetLocalPositionX(v17, v16 + -1.0, 0LL),
        (extraGiftMsg2Lb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  v19 = UnityEngine_Component__get_gameObject(extraGiftMsg2Lb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v19, v16 + msgX, 0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__62_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21
  CommonUI_o *v12; // x19

  if ( (byte_40FD4B9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_40FD4B9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
  v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v8; // w22

  if ( (byte_40FD4B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_40FD4B0 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B170D4();
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( befSvtList->fields._items->m_Items[v8 + 1] == svtId )
      return 1;
    if ( (int)++v8 >= size )
      return 0;
    befSvtList = this->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *fstGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_o *scdGrid; // x0
  UnityEngine_Transform_o *v13; // x0
  int32_t v14; // w0
  int32_t v15; // w20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Object_o *v19; // x21
  UnityEngine_GameObject_o *autoSaleMsg; // x0
  UILabel_o *autoSaleMsgLb; // x0

  if ( (byte_40FD4B5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FD4B5 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_26;
  transform = UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !transform )
    goto LABEL_26;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v8 = (UnityEngine_Component_o *)this->fields.fstGrid;
      if ( !v8 )
        break;
      v9 = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !v9 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v7, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_13:
  scdGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_26;
  v13 = UnityEngine_Component__get_transform(scdGrid, 0LL);
  if ( !v13 )
    goto LABEL_26;
  v14 = UnityEngine_Transform__get_childCount(v13, 0LL);
  v15 = v14 - 1;
  if ( v14 >= 1 )
  {
    do
    {
      v16 = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !v16 )
        goto LABEL_26;
      v17 = UnityEngine_Component__get_transform(v16, 0LL);
      if ( !v17 )
        goto LABEL_26;
      v18 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v17, v15, 0LL);
      if ( !v18 )
        goto LABEL_26;
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v19, 0LL);
    }
    while ( --v15 >= 0 );
  }
  autoSaleMsg = this->fields.autoSaleMsg;
  if ( !autoSaleMsg )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(autoSaleMsg, 0, 0LL);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( !autoSaleMsgLb )
    goto LABEL_26;
  UILabel__set_text(autoSaleMsgLb, (System_String_o *)StringLiteral_1, 0LL);
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
  UnityEngine_GameObject_o *closeInfo; // x0
  UnityEngine_GameObject_o *backImg; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *formationBtnLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *combineBtnLabel; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_Collider_o *v40; // x0
  UnityEngine_Component_o *summonBtnLabel; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_Collider_o *v44; // x0
  UnityEngine_Component_o *sellBtnLabel; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *v47; // x0
  UnityEngine_Collider_o *v48; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellHeight; // s10
  struct UIGrid_o *scdGrid; // x9
  int cellWidth_low; // s11
  float v59; // s9
  System_Collections_Generic_List_int__o *v60; // x24
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  int v70; // w8
  __int64 v71; // x20
  GachaInfos_o **m_Items; // x21
  GachaInfos_array *v73; // x22
  UnityEngine_Component_o **p_fstGrid; // x8
  GachaInfos_o *v75; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v79; // x25
  UnityEngine_Transform_o *v80; // x26
  int v81; // s0
  const MethodInfo *v84; // x2
  int32_t objectId; // w26
  bool v86; // w26
  bool IsCommandCode; // w28
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  SummonResultInfoComponent_ClickDelegate_o *v92; // x0
  SummonResultInfoComponent_ClickDelegate_o *v93; // x27
  __int64 *v94; // x8
  SummonResultInfoComponent_o *v95; // x0
  const MethodInfo *v96; // x6
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int klass_high; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  UnityEngine_Component_o *v103; // x0
  float v104; // s12
  float v105; // s11
  float v106; // s8
  UnityEngine_Transform_o *v107; // x0
  float v108; // s1
  struct UIGrid_o *v109; // x0
  UnityEngine_Transform_o *v110; // x0
  float v111; // s1
  struct UIGrid_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_GameObject_o *autoSaleMsg; // x0
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v116; // x0
  System_String_o *v117; // x1
  UILabel_o *v118; // x0
  UnityEngine_Component_o *extraGiftMsgIconComp; // x0
  UnityEngine_GameObject_o *v120; // x0
  UILabel_o *extraGiftMsgLb; // x0
  UILabel_o *extraGiftMsg2Lb; // x0
  UILabel_o *extraGiftTitleLb; // x0
  __int64 v124; // x8
  WebViewManager_o *Instance; // x0
  GiftEntity_o *DataById; // x22
  WebViewManager_o *v127; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v128; // x0
  WarEntity_o *Entity; // x0
  ItemEntity_o *v130; // x23
  ItemIconComponent_o *v131; // x0
  UnityEngine_Component_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x0
  struct UISprite_o *extraGiftMsgSpr; // x8
  GachaExtraGifts_o *v135; // x8
  UILabel_o *v136; // x0
  UILabel_o *v137; // x0
  const MethodInfo *v138; // x1
  struct UIGrid_o *v139; // x8
  int v140; // s9
  int v141; // s10
  float v142; // s8
  SummonResultComponent_c *v143; // x0
  float v144; // s9
  float v145; // s10
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL; // s0
  UnityEngine_Component_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  bool v149; // w1
  __int64 v150; // x10
  char v151; // w9
  int32_t v152; // w24
  int32_t v153; // w20
  int32_t gachaExtraGiftResultType; // w23
  GachaExtraGifts_o *v155; // x15
  int32_t gachaExtraGiftBonusType; // w14
  WebViewManager_o *v157; // x0
  GiftMaster_o *v158; // x0
  GiftEntity_o *v159; // x21
  WebViewManager_o *v160; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v161; // x0
  WarEntity_o *v162; // x0
  ItemEntity_o *v163; // x22
  ItemIconComponent_o *v164; // x0
  UnityEngine_Component_o *v165; // x0
  UnityEngine_GameObject_o *v166; // x0
  struct UISprite_o *v167; // x8
  UILabel_o *v168; // x0
  UILabel_o *v169; // x0
  const MethodInfo *v170; // x1
  struct UILabel_o *v171; // x8
  struct UILabel_o *v172; // x9
  UnityEngine_Component_o *v173; // x0
  UnityEngine_GameObject_o *v174; // x0
  UnityEngine_Component_o *v175; // x0
  UnityEngine_GameObject_o *v176; // x0
  bool v177; // w21
  System_String_o *v178; // x0
  char v179; // w20
  UnityEngine_Component_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  UnityEngine_Component_o *v182; // x0
  UnityEngine_GameObject_o *v183; // x0
  UnityEngine_Component_o *v184; // x0
  UnityEngine_GameObject_o *v185; // x0
  char v186; // w1
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  struct UILabel_o *v188; // x8
  struct UILabel_o *v189; // x9
  UnityEngine_Component_o *v190; // x0
  UnityEngine_GameObject_o *v191; // x0
  UnityEngine_Component_o *v192; // x0
  UnityEngine_GameObject_o *v193; // x0
  UnityEngine_Component_o *v194; // x0
  UnityEngine_Component_o *v195; // x0
  const MethodInfo *v196; // x2
  const MethodInfo *v197; // [xsp+0h] [xbp-D0h]
  System_Int32_array *v198; // [xsp+10h] [xbp-C0h]
  GachaExtraGifts_array *v199; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+20h] [xbp-B0h]
  char v201; // [xsp+2Ch] [xbp-A4h]
  UnityEngine_Component_o **p_scdGrid; // [xsp+30h] [xbp-A0h]
  float pos_x; // [xsp+3Ch] [xbp-94h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v206; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v207; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_40FD4AC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, resultList);
    sub_B16FFC(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_SummonResultComponent_showResCcDetail__, v23);
    sub_B16FFC(&Method_SummonResultComponent_showResSvtDetail__, v24);
    sub_B16FFC(&SummonResultComponent_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_12384, v26);
    sub_B16FFC(&StringLiteral_12406, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    byte_40FD4AC = 1;
  }
  message = 0LL;
  title = 0LL;
  pos_x = 0.0;
  changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_194;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  closeInfo = this->fields.closeInfo;
  if ( !closeInfo )
    goto LABEL_194;
  UnityEngine_GameObject__SetActive(closeInfo, 0, 0LL);
  backImg = this->fields.backImg;
  if ( !backImg )
    goto LABEL_194;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        backImg,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !Component_srcLineSprite )
    goto LABEL_194;
  UnityEngine_Collider__set_enabled(Component_srcLineSprite, 0, 0LL);
  formationBtnLabel = (UnityEngine_Component_o *)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !formationBtnLabel )
    goto LABEL_194;
  gameObject = UnityEngine_Component__get_gameObject(formationBtnLabel, 0LL);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Parent )
    goto LABEL_194;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        Parent,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !Component_WebViewObject )
    goto LABEL_194;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  combineBtnLabel = (UnityEngine_Component_o *)this->fields.combineBtnLabel;
  if ( !combineBtnLabel )
    goto LABEL_194;
  v38 = UnityEngine_Component__get_gameObject(combineBtnLabel, 0LL);
  v39 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v38, 0LL);
  if ( !v39 )
    goto LABEL_194;
  v40 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    v39,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !v40 )
    goto LABEL_194;
  UnityEngine_Collider__set_enabled(v40, 0, 0LL);
  summonBtnLabel = (UnityEngine_Component_o *)this->fields.summonBtnLabel;
  if ( !summonBtnLabel )
    goto LABEL_194;
  v42 = UnityEngine_Component__get_gameObject(summonBtnLabel, 0LL);
  v43 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v42, 0LL);
  if ( !v43 )
    goto LABEL_194;
  v44 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    v43,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !v44 )
    goto LABEL_194;
  UnityEngine_Collider__set_enabled(v44, 0, 0LL);
  sellBtnLabel = (UnityEngine_Component_o *)this->fields.sellBtnLabel;
  if ( !sellBtnLabel )
    goto LABEL_194;
  v46 = UnityEngine_Component__get_gameObject(sellBtnLabel, 0LL);
  v47 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v46, 0LL);
  if ( !v47 )
    goto LABEL_194;
  v48 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    v47,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !v48 )
    goto LABEL_194;
  UnityEngine_Collider__set_enabled(v48, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, v49);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_194;
    cellHeight = fstGrid->fields.cellHeight;
    scdGrid = this->fields.scdGrid;
    p_scdGrid = (UnityEngine_Component_o **)&this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_194;
    v198 = extraGiftIds;
    v199 = gachaExtraGiftList;
    cellWidth_low = LODWORD(fstGrid->fields.cellWidth);
    v59 = scdGrid->fields.cellHeight;
    v60 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v50,
                                                      v51,
                                                      v52,
                                                      v53);
    System_Collections_Generic_List_int____ctor(
      v60,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v60;
    p_befSvtList = &this->fields.befSvtList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.befSvtList,
      (System_Int32_array **)v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v70 = v9->max_length;
    if ( v70 >= 1 )
    {
      v71 = 0LL;
      m_Items = v9->m_Items;
      v73 = v9;
      v201 = 0;
      while ( (unsigned int)v71 < v70 )
      {
        p_fstGrid = (UnityEngine_Component_o **)&this->fields.scdGrid;
        if ( (unsigned int)v71 < 6 )
          p_fstGrid = (UnityEngine_Component_o **)&this->fields.fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_194;
        v75 = m_Items[v71];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform(*p_fstGrid, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
        if ( !Object )
          goto LABEL_194;
        v79 = Object;
        v80 = UnityEngine_GameObject__get_transform(Object, 0LL);
        *(UnityEngine_Vector3_o *)&v81 = UnityEngine_Vector3__get_one(0LL);
        if ( !v80 )
          goto LABEL_194;
        UnityEngine_Transform__set_localScale(v80, *(UnityEngine_Vector3_o *)&v81, 0LL);
        if ( !v75 )
          goto LABEL_194;
        if ( v75->fields.isNew
          && (objectId = v75->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v84)) )
        {
          if ( !*p_befSvtList )
            goto LABEL_194;
          System_Collections_Generic_List_int___Add(
            *p_befSvtList,
            objectId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v86 = 0;
        }
        else
        {
          v86 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v75->fields.type, 0LL);
        v92 = (SummonResultInfoComponent_ClickDelegate_o *)sub_B170CC(
                                                             SummonResultInfoComponent_ClickDelegate_TypeInfo,
                                                             v88,
                                                             v89,
                                                             v90,
                                                             v91);
        v93 = v92;
        if ( IsCommandCode )
          v94 = &Method_SummonResultComponent_showResCcDetail__;
        else
          v94 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v92, (Il2CppObject *)this, *v94, 0LL);
        if ( v75->fields.sellMana || v75->fields.sellQp )
        {
          v93 = 0LL;
          v201 = 1;
        }
        v95 = (SummonResultInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v79,
                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !v95 )
          goto LABEL_194;
        SummonResultInfoComponent__setResultData(
          v95,
          v75,
          v86,
          v93,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v96);
        sellQp = v75->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v9 = v73;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            MasterData_WarQuestSelectionMaster = (GiftMaster_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v9 = v73;
        }
        klass_high = HIDWORD(MasterData_WarQuestSelectionMaster[2].fields._MasterName_k__BackingField->klass);
        if ( summonBeforeQp + sellQp >= klass_high )
        {
          if ( (MasterData_WarQuestSelectionMaster[3].fields.revision & 0x4000000) != 0
            && !MasterData_WarQuestSelectionMaster[2].fields.revision )
          {
            j_il2cpp_runtime_class_init_0(MasterData_WarQuestSelectionMaster);
            MasterData_WarQuestSelectionMaster = (GiftMaster_o *)BalanceConfig_TypeInfo;
            klass_high = BalanceConfig_TypeInfo->static_fields->QpMax;
          }
        }
        else
        {
          klass_high = this->fields.summonBeforeQp + v75->fields.sellQp;
        }
        this->fields.summonBeforeQp = klass_high;
        sellMana = v75->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( (MasterData_WarQuestSelectionMaster[3].fields.revision & 0x4000000) != 0
          && !MasterData_WarQuestSelectionMaster[2].fields.revision )
        {
          j_il2cpp_runtime_class_init_0(MasterData_WarQuestSelectionMaster);
          MasterData_WarQuestSelectionMaster = (GiftMaster_o *)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)&MasterData_WarQuestSelectionMaster[2].fields._MasterName_k__BackingField[2].fields.m_firstChar;
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          if ( (MasterData_WarQuestSelectionMaster[3].fields.revision & 0x4000000) != 0
            && !MasterData_WarQuestSelectionMaster[2].fields.revision )
          {
            j_il2cpp_runtime_class_init_0(MasterData_WarQuestSelectionMaster);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          UserItemMax = this->fields.summonBeforeMana + v75->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v70 = v9->max_length;
        if ( (int)++v71 >= v70 )
          goto LABEL_63;
      }
LABEL_195:
      sub_B17100(MasterData_WarQuestSelectionMaster, v68, v69);
      sub_B170A0();
    }
    v201 = 0;
LABEL_63:
    v103 = (UnityEngine_Component_o *)this->fields.fstGrid;
    v104 = (float)max_length;
    v105 = (float)cellWidth_low;
    v106 = (float)max_length <= v105 ? 22.0 : 106.0;
    if ( !v103 )
      goto LABEL_194;
    v107 = UnityEngine_Component__get_transform(v103, 0LL);
    extraGiftIds = v198;
    gachaExtraGiftList = v199;
    if ( !v107 )
      goto LABEL_194;
    v108 = v104 <= v105 ? v104 : v105;
    v206.fields.x = -(float)((float)(cellHeight * 0.5) * (float)(v108 + -1.0));
    v206.fields.y = v106;
    v206.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition(v107, v206, 0LL);
    v109 = this->fields.fstGrid;
    if ( !v109 )
      goto LABEL_194;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v109->klass->vtable._8_Reposition.method)(
      v109,
      v109->klass->vtable._9_ResetPosition.methodPtr);
    if ( !*p_scdGrid )
      goto LABEL_194;
    v110 = UnityEngine_Component__get_transform(*p_scdGrid, 0LL);
    if ( !v110 )
      goto LABEL_194;
    v111 = (float)(v104 - v105) + -1.0;
    if ( v104 <= v105 )
      v111 = -1.0;
    v207.fields.z = this->fields.center.fields.z;
    v207.fields.x = -(float)((float)(v59 * 0.5) * v111);
    v207.fields.y = -62.0;
    UnityEngine_Transform__set_localPosition(v110, v207, 0LL);
    v112 = this->fields.scdGrid;
    if ( !v112 )
      goto LABEL_194;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v112->klass->vtable._8_Reposition.method)(
      v112,
      v112->klass->vtable._9_ResetPosition.methodPtr);
    v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v113 )
      goto LABEL_194;
    UnityEngine_GameObject__SetActive(v113, 1, 0LL);
    autoSaleMsg = this->fields.autoSaleMsg;
    if ( !autoSaleMsg )
      goto LABEL_194;
    if ( (v201 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(autoSaleMsg, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12406, 0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_194;
      v117 = v116;
      v118 = autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive(autoSaleMsg, 0, 0LL);
      v118 = this->fields.autoSaleMsgLb;
      if ( !v118 )
        goto LABEL_194;
      v117 = (System_String_o *)StringLiteral_1;
    }
    UILabel__set_text(v118, v117, 0LL);
  }
  extraGiftMsgIconComp = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
  if ( !extraGiftMsgIconComp )
    goto LABEL_194;
  v120 = UnityEngine_Component__get_gameObject(extraGiftMsgIconComp, 0LL);
  if ( !v120 )
    goto LABEL_194;
  UnityEngine_GameObject__SetActive(v120, 0, 0LL);
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !extraGiftMsgLb )
    goto LABEL_194;
  UILabel__set_text(extraGiftMsgLb, (System_String_o *)StringLiteral_1, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_194;
  UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)StringLiteral_1, 0LL);
  extraGiftTitleLb = this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_194;
  UILabel__set_text(extraGiftTitleLb, (System_String_o *)StringLiteral_1, 0LL);
  if ( extraGiftIds )
  {
    if ( gachaExtraGiftList )
    {
      v124 = *(_QWORD *)&extraGiftIds->max_length;
      if ( v124 )
      {
        pos_x = 0.0;
        message = (System_String_o *)StringLiteral_1;
        title = (System_String_o *)StringLiteral_1;
        if ( (_DWORD)v124 == 1 )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_194;
          MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !extraGiftIds->max_length )
            goto LABEL_195;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_194;
          DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, extraGiftIds->m_Items[1], 0LL);
          v127 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v127 )
            goto LABEL_194;
          v128 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v127,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !DataById )
            goto LABEL_194;
          if ( !v128 )
            goto LABEL_194;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v128,
                     DataById->fields.objectId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Entity )
            goto LABEL_194;
          v130 = (ItemEntity_o *)Entity;
          v131 = this->fields.extraGiftMsgIconComp;
          if ( !v131 )
            goto LABEL_194;
          ItemIconComponent__SetItem(v131, v130->fields.id, -1, 0LL);
          v132 = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
          if ( !v132 )
            goto LABEL_194;
          v133 = UnityEngine_Component__get_gameObject(v132, 0LL);
          extraGiftMsgSpr = this->fields.extraGiftMsgSpr;
          if ( !extraGiftMsgSpr )
            goto LABEL_194;
          GameObjectExtensions__SetLocalPositionX(v133, (float)(extraGiftMsgSpr->fields.mWidth / 2), 0LL);
          if ( !gachaExtraGiftList->max_length )
            goto LABEL_195;
          v135 = gachaExtraGiftList->m_Items[0];
          if ( !v135 )
            goto LABEL_194;
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  DataById,
                  v130,
                  v135->fields.gachaExtraGiftResultType,
                  v135->fields.gachaExtraGiftBonusType,
                  v197) )
          {
            v179 = 0;
LABEL_190:
            v195 = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
            if ( v195 )
            {
              v148 = UnityEngine_Component__get_gameObject(v195, 0LL);
              if ( v148 )
              {
                v149 = v179;
                goto LABEL_193;
              }
            }
LABEL_194:
            sub_B170D4();
          }
          v136 = this->fields.extraGiftTitleLb;
          if ( !v136 )
            goto LABEL_194;
          UILabel__set_text(v136, title, 0LL);
          v137 = this->fields.extraGiftMsg2Lb;
          if ( !v137 )
            goto LABEL_194;
          UILabel__set_text(v137, message, 0LL);
          if ( !v9 )
            goto LABEL_194;
          v139 = this->fields.fstGrid;
          if ( !v139 )
            goto LABEL_194;
          v140 = v9->max_length;
          v141 = LODWORD(v139->fields.cellWidth);
          v142 = pos_x;
          v143 = SummonResultComponent_TypeInfo;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            v143 = SummonResultComponent_TypeInfo;
          }
          v144 = (float)v140;
          v145 = (float)v141;
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)v143->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
          if ( v142 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL )
          {
            if ( v144 <= v145 )
            {
              if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v143);
                v143 = SummonResultComponent_TypeInfo;
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
              }
            }
            else
            {
              SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = -47.0;
            }
            v142 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
          }
          if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v143);
            v143 = SummonResultComponent_TypeInfo;
          }
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)v143->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          if ( v142 == SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX )
          {
            if ( v144 <= v145 )
            {
              if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v143);
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
              }
            }
            else
            {
              SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = -185.0;
            }
            v142 = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          }
          v188 = this->fields.extraGiftTitleLb;
          if ( !v188 )
            goto LABEL_194;
          v189 = this->fields.extraGiftMsg2Lb;
          if ( !v189 )
            goto LABEL_194;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v188->fields.mWidth / 2),
            (float)(v189->fields.mWidth / 2),
            v142,
            v138);
          v190 = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr;
          if ( !v190 )
            goto LABEL_194;
          v191 = UnityEngine_Component__get_gameObject(v190, 0LL);
          if ( !v191 )
            goto LABEL_194;
          UnityEngine_GameObject__SetActive(v191, 1, 0LL);
          v192 = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
          if ( !v192 )
            goto LABEL_194;
          v193 = UnityEngine_Component__get_gameObject(v192, 0LL);
          if ( !v193 )
            goto LABEL_194;
          UnityEngine_GameObject__SetActive(v193, 1, 0LL);
          v194 = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
          if ( !v194 )
            goto LABEL_194;
          v185 = UnityEngine_Component__get_gameObject(v194, 0LL);
          if ( !v185 )
            goto LABEL_194;
          v186 = 1;
          v179 = 1;
LABEL_189:
          UnityEngine_GameObject__SetActive(v185, v186, 0LL);
          goto LABEL_190;
        }
        if ( (int)v124 < 1 )
          goto LABEL_198;
        v150 = 0LL;
        v151 = 0;
        v152 = 0;
        v153 = 0;
        gachaExtraGiftResultType = 0;
        do
        {
          if ( (unsigned int)v150 >= gachaExtraGiftList->max_length )
            goto LABEL_195;
          v155 = gachaExtraGiftList->m_Items[v150];
          if ( !v155 )
            goto LABEL_194;
          gachaExtraGiftBonusType = v155->fields.gachaExtraGiftBonusType;
          if ( !v152 && gachaExtraGiftBonusType == 2 )
          {
            v152 = extraGiftIds->m_Items[v150 + 1];
            gachaExtraGiftResultType = v155->fields.gachaExtraGiftResultType;
            v153 = 2;
          }
          ++v150;
          v151 |= gachaExtraGiftBonusType == 1;
        }
        while ( (int)v150 < (int)v124 );
        if ( (v151 & 1) != 0 )
        {
          if ( !v152 )
            goto LABEL_159;
          v157 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v157 )
            goto LABEL_194;
          v158 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v157,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !v158 )
            goto LABEL_194;
          v159 = GiftMaster__getDataById(v158, v152, 0LL);
          v160 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v160 )
            goto LABEL_194;
          v161 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v160,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !v159 )
            goto LABEL_194;
          if ( !v161 )
            goto LABEL_194;
          v162 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v161,
                   v159->fields.objectId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !v162 )
            goto LABEL_194;
          v163 = (ItemEntity_o *)v162;
          v164 = this->fields.extraGiftMsgIconComp;
          if ( !v164 )
            goto LABEL_194;
          ItemIconComponent__SetItem(v164, v163->fields.id, -1, 0LL);
          v165 = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
          if ( !v165 )
            goto LABEL_194;
          v166 = UnityEngine_Component__get_gameObject(v165, 0LL);
          v167 = this->fields.extraGiftMsgSpr;
          if ( !v167 )
            goto LABEL_194;
          GameObjectExtensions__SetLocalPositionX(v166, (float)(v167->fields.mWidth / 2), 0LL);
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  v159,
                  v163,
                  gachaExtraGiftResultType,
                  v153,
                  v197) )
          {
LABEL_159:
            v177 = 0;
            v179 = 0;
LABEL_160:
            v180 = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
            if ( !v180 )
              goto LABEL_194;
            v181 = UnityEngine_Component__get_gameObject(v180, 0LL);
            GameObjectExtensions__SetLocalPositionX(v181, 0.0, 0LL);
            v182 = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr;
            if ( !v182 )
              goto LABEL_194;
            v183 = UnityEngine_Component__get_gameObject(v182, 0LL);
            if ( !v183 )
              goto LABEL_194;
            UnityEngine_GameObject__SetActive(v183, v177, 0LL);
            v184 = (UnityEngine_Component_o *)this->fields.extraGiftMsgLb;
            if ( !v184 )
              goto LABEL_194;
            v185 = UnityEngine_Component__get_gameObject(v184, 0LL);
            if ( !v185 )
              goto LABEL_194;
            v186 = !v177;
            goto LABEL_189;
          }
          v168 = this->fields.extraGiftTitleLb;
          if ( !v168 )
            goto LABEL_194;
          UILabel__set_text(v168, title, 0LL);
          v169 = this->fields.extraGiftMsg2Lb;
          if ( !v169 )
            goto LABEL_194;
          UILabel__set_text(v169, message, 0LL);
          v171 = this->fields.extraGiftTitleLb;
          if ( !v171 )
            goto LABEL_194;
          v172 = this->fields.extraGiftMsg2Lb;
          if ( !v172 )
            goto LABEL_194;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v171->fields.mWidth / 2),
            (float)(v172->fields.mWidth / 2),
            pos_x,
            v170);
          v173 = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
          if ( !v173 )
            goto LABEL_194;
          v174 = UnityEngine_Component__get_gameObject(v173, 0LL);
          if ( !v174 )
            goto LABEL_194;
          UnityEngine_GameObject__SetActive(v174, 1, 0LL);
          v175 = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
          if ( !v175 )
            goto LABEL_194;
          v176 = UnityEngine_Component__get_gameObject(v175, 0LL);
          if ( !v176 )
            goto LABEL_194;
          v177 = 1;
          UnityEngine_GameObject__SetActive(v176, 1, 0LL);
        }
        else
        {
LABEL_198:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v178 = LocalizationManager__Get((System_String_o *)StringLiteral_12384, 0LL);
          if ( !this->fields.extraGiftMsgLb )
            goto LABEL_194;
          UILabel__set_text(this->fields.extraGiftMsgLb, v178, 0LL);
          v177 = 0;
        }
        v179 = 1;
        goto LABEL_160;
      }
    }
  }
  v147 = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
  if ( !v147 )
    goto LABEL_194;
  v148 = UnityEngine_Component__get_gameObject(v147, 0LL);
  if ( !v148 )
    goto LABEL_194;
  v149 = 0;
LABEL_193:
  UnityEngine_GameObject__SetActive(v148, v149, 0LL);
  SummonResultComponent__setListByType(this, this->fields.dispType, v196);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FD4B6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12188, method);
    byte_40FD4B6 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B170D4();
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12188, 0LL);
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
  struct UIWidget_o *mWidget; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int v7; // w8
  float32x2_t *v8; // x20
  float *v9; // x21
  unsigned __int64 v10; // x22
  UnityEngine_Component_o *v11; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_Transform_o *transform; // x0
  int v16; // s0
  int v17; // s1
  int v18; // s2
  float32x2_t v19; // d8
  float v20; // s9
  float32x2_t v21; // d10
  float v22; // s11
  float v23; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = this->fields.mWidget;
  if ( !mWidget
    || (v4 = ((__int64 (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))mWidget->klass->vtable._11_get_worldCorners.method)(
               mWidget,
               mWidget->klass->vtable._12_Invalidate.methodPtr)) == 0 )
  {
LABEL_11:
    sub_B170D4();
  }
  v7 = *(_DWORD *)(v4 + 24);
  v8 = (float32x2_t *)v4;
  v9 = (float *)(v4 + 40);
  v10 = -1LL;
  do
  {
    if ( v10 + 1 >= v7 )
      goto LABEL_12;
    v11 = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !v11 )
      goto LABEL_11;
    v12 = *(v9 - 2);
    v13 = *(v9 - 1);
    v14 = *v9;
    transform = UnityEngine_Component__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_11;
    v24.fields.x = v12;
    v24.fields.y = v13;
    v24.fields.z = v14;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__InverseTransformPoint(transform, v24, 0LL);
    if ( v10 + 1 >= v8[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)v9 - 2) = v16;
    *((_DWORD *)v9 - 1) = v17;
    *(_DWORD *)v9 = v18;
    v9 += 3;
    v7 = v8[3].n64_u32[0];
    ++v10;
  }
  while ( v10 <= 2 );
  if ( v7 < 3 )
  {
LABEL_12:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v19.n64_u64[0] = v8[4].n64_u64[0];
  v20 = v8[5].n64_f32[0];
  v21.n64_u64[0] = v8[7].n64_u64[0];
  v22 = v8[8].n64_f32[0];
  v23 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v19, vmul_n_f32(vsub_f32(v21, v19), v23));
  this->fields.center.fields.z = v20 + (float)((float)(v22 - v20) * v23);
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
  UnityEngine_GameObject_o *closeInfo; // x0
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  System_String_o *v40; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v42; // x21
  System_String_o *v43; // x0
  UILabel_o *combineBtnLabel; // x22
  System_String_o *v45; // x0
  UILabel_o *sellBtnLabel; // x22
  System_String_o *v47; // x0
  UIWidget_o *summonBtnLabel; // x22
  int v49; // s0
  UnityEngine_Behaviour_o *formationBtn; // x0
  UIWidget_o *formationBtnSpr; // x22
  int v55; // s0
  UnityEngine_Behaviour_o *combineBtn; // x0
  UIWidget_o *combineBtnSpr; // x22
  int v61; // s0
  UnityEngine_Behaviour_o *summonBtn; // x0
  UIWidget_o *summonBtnSpr; // x22
  int v67; // s0
  UnityEngine_Behaviour_o *sellBtn; // x0
  UIWidget_o *sellBtnSpr; // x22
  int v73; // s0
  const MethodInfo *v77; // x1
  struct SummonControl_o *summonCtrl; // x8
  SummonInfoControl_o *summonInfoCtr; // x0
  struct SummonControl_o *v80; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *v83; // x22
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *v86; // x22
  int32_t gachaId; // w22
  __int64 v88; // x23
  __int64 v89; // x23
  DataManager_o *v90; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGachaMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  System_String_o *v94; // x0
  System_String_o *v95; // x22
  WebViewManager_o *Instance; // x0
  UserGachaExtraCountMaster_o *v97; // x0
  UILabel_o *v98; // x23
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  GachaAppendMaster_o *v101; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v104; // x23
  __int64 v105; // x23
  DataManager_o *v106; // x0
  TblUserMaster_o *v107; // x0
  TblUserEntity_o *UserData; // x0
  int friendPoint; // w23
  SummonControl_c *v110; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v112; // w0
  int gachaTime; // w1
  SummonControl_o *v114; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v117; // x22
  UserGachaExtraCountMaster_o *v118; // x0
  UILabel_o *v119; // x22
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  UserItemMaster_o *v122; // x21
  int64_t v123; // x0
  UserItemEntity_o *v124; // x0
  UnityEngine_Behaviour_o *v125; // x0
  UIWidget_o *v126; // x21
  float v127; // s4
  float v128; // s5
  float v129; // s6
  float v130; // s7
  UIWidget_o *v131; // x21
  int v132; // s0
  UILabel_o *v136; // x21
  struct UILabel_o *v137; // x21
  System_String_o *v138; // x0
  System_String_o *v139; // x1
  UILabel_o *v140; // x0
  int v141; // w9
  UnityEngine_Behaviour_o *v142; // x0
  UIWidget_o *v143; // x21
  int v144; // s0
  UIWidget_o *v148; // x21
  int v149; // s0
  UnityEngine_Behaviour_o *v153; // x0
  UIWidget_o *v154; // x21
  float v155; // s4
  float v156; // s5
  float v157; // s6
  float v158; // s7
  UIWidget_o *v159; // x21
  int v160; // s0
  UILabel_o *v164; // x21
  SummonControl_o *v165; // x0
  UILabel_o *v166; // x21
  System_String_o *v167; // x0
  UILabel_o *v168; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v170; // x22
  Il2CppObject *v171; // x0
  System_String_o *v172; // x0
  struct SummonControl_o *v173; // x8
  UnityEngine_GameObject_o *currentResourceInfo; // x0
  struct SummonControl_o *v175; // x8
  UnityEngine_Component_o *v176; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  UnityEngine_Component_o *v182; // x0
  UnityEngine_Collider_o *v183; // x0
  UnityEngine_Component_o *v184; // x0
  UnityEngine_GameObject_o *v185; // x0
  UnityEngine_Component_o *v186; // x0
  UnityEngine_Collider_o *v187; // x0
  UnityEngine_Component_o *v188; // x0
  UnityEngine_GameObject_o *v189; // x0
  UnityEngine_Component_o *v190; // x0
  UnityEngine_Collider_o *v191; // x0
  struct UnityEngine_GameObject_o *touchBlocker; // x21
  struct UnityEngine_GameObject_o *v193; // x0
  UnityEngine_GameObject_o **p_blocker; // x21
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v202; // x0
  UnityEngine_Component_o *v203; // x0
  int v204; // s1
  SummonResultComponent_c *v207; // x0
  int methodPointer; // s0
  float x; // s9
  float v210; // s4
  MaskWithOpening_o *Component_srcLineSprite; // x0
  CommonUI_o *v212; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s8
  CommonUI_o *v215; // x0
  UnityEngine_Color_o v216; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector2_o v218; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v219; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v220; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v221; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v222; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v223; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FD4AD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&FSUtility_TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B16FFC(&SummonControl_TypeInfo, v26);
    sub_B16FFC(&SummonResultComponent_TypeInfo, v27);
    sub_B16FFC(&TutorialFlag_TypeInfo, v28);
    sub_B16FFC(&UserGachaMaster_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_12356, v30);
    sub_B16FFC(&StringLiteral_12175, v31);
    sub_B16FFC(&StringLiteral_12386, v32);
    sub_B16FFC(&StringLiteral_12180, v33);
    sub_B16FFC(&StringLiteral_12390, v34);
    sub_B16FFC(&StringLiteral_12412, v35);
    sub_B16FFC(&StringLiteral_12166, v36);
    sub_B16FFC(&StringLiteral_3376, v37);
    byte_40FD4AD = 1;
  }
  methoda.genericMethod = 0LL;
  memset(&methoda.klass, 0, 24);
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( type == 1 )
  {
    closeInfo = this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_198;
    UnityEngine_GameObject__SetActive(closeInfo, 0, 0LL);
    changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
    if ( !changeSceneBtnInfo )
      goto LABEL_198;
    UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3376, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v42 = v40;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12175, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_198;
    UILabel__set_text(formationBtnLabel, v43, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12166, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_198;
    UILabel__set_text(combineBtnLabel, v45, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12180, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_198;
    UILabel__set_text(sellBtnLabel, v47, 0LL);
    summonBtnLabel = (UIWidget_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnLabel )
      goto LABEL_198;
    UIWidget__set_color(summonBtnLabel, *(UnityEngine_Color_o *)&v49, 0LL);
    formationBtn = (UnityEngine_Behaviour_o *)this->fields.formationBtn;
    if ( !formationBtn )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled(formationBtn, 1, 0LL);
    formationBtnSpr = (UIWidget_o *)this->fields.formationBtnSpr;
    *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
    if ( !formationBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(formationBtnSpr, *(UnityEngine_Color_o *)&v55, 0LL);
    combineBtn = (UnityEngine_Behaviour_o *)this->fields.combineBtn;
    if ( !combineBtn )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled(combineBtn, 1, 0LL);
    combineBtnSpr = (UIWidget_o *)this->fields.combineBtnSpr;
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
    if ( !combineBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(combineBtnSpr, *(UnityEngine_Color_o *)&v61, 0LL);
    summonBtn = (UnityEngine_Behaviour_o *)this->fields.summonBtn;
    if ( !summonBtn )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled(summonBtn, 1, 0LL);
    summonBtnSpr = (UIWidget_o *)this->fields.summonBtnSpr;
    *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_white(0LL);
    if ( !summonBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(summonBtnSpr, *(UnityEngine_Color_o *)&v67, 0LL);
    sellBtn = (UnityEngine_Behaviour_o *)this->fields.sellBtn;
    if ( !sellBtn )
      goto LABEL_198;
    UnityEngine_Behaviour__set_enabled(sellBtn, 1, 0LL);
    sellBtnSpr = (UIWidget_o *)this->fields.sellBtnSpr;
    *(UnityEngine_Color_o *)&v73 = UnityEngine_Color__get_white(0LL);
    if ( !sellBtnSpr )
      goto LABEL_198;
    UIWidget__set_color(sellBtnSpr, *(UnityEngine_Color_o *)&v73, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_198;
    summonInfoCtr = summonCtrl->fields.summonInfoCtr;
    if ( !summonInfoCtr )
      goto LABEL_198;
    SummonInfoControl__SetSummonDispInfo(summonInfoCtr, v77);
    v80 = this->fields.summonCtrl;
    if ( !v80 )
      goto LABEL_198;
    gachaParamData = v80->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_198;
    gachaType = gachaParamData->fields.gachaType;
    v83 = this->fields.summonBtnLabel;
    LODWORD(v216.fields.r) = gachaParamData->fields.gachaTime;
    v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v216);
    v85 = System_String__Format(v42, v84, 0LL);
    if ( !v83 )
      goto LABEL_198;
    UILabel__set_text(v83, v85, 0LL);
    v86 = this->fields.summonBtnLabel;
    if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonResultComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    }
    if ( !v86 )
      goto LABEL_198;
    UILabel__SetCondensedScale(v86, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v88 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
          sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v89 = **(_QWORD **)(v88 + 192);
        if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
          sub_AAFCFC(v89);
        v90 = **(DataManager_o ***)(v89 + 184);
        if ( !v90 )
          goto LABEL_198;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              v90,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_198;
        UserGachaMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          (UserGachaEntity_o **)&methoda.parameters,
          UserId,
          gachaId,
          0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_198;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          (WarEntity_o **)&methoda.return_type,
          gachaId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12390, 0LL);
        if ( !methoda.return_type )
          goto LABEL_198;
        v95 = v94;
        if ( !methoda.return_type[4].bits )
          goto LABEL_57;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_198;
        v97 = (UserGachaExtraCountMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !methoda.return_type || !v97 )
          goto LABEL_198;
        if ( UserGachaExtraCountMaster__getExtraCount(v97, methoda.return_type[4].bits, 0LL) != 9
          || gachaParamData->fields.gachaTime != 1
          || gachaParamData->fields.isAppendSummon )
        {
          goto LABEL_57;
        }
        v98 = this->fields.summonBtnLabel;
        LODWORD(v216.fields.r) = 2;
        v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v216);
        v100 = System_String__Format(v42, v99, 0LL);
        if ( !v98 )
          goto LABEL_198;
        UILabel__set_text(v98, v100, 0LL);
LABEL_57:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v101 = (GachaAppendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !v101 )
            goto LABEL_198;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                v101,
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
              v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12356, 0LL);
            }
LABEL_129:
            v153 = (UnityEngine_Behaviour_o *)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !v153 )
              goto LABEL_198;
            UnityEngine_Behaviour__set_enabled(v153, 0, 0LL);
            v220.fields.r = 0.35547;
            v154 = (UIWidget_o *)this->fields.summonBtnSpr;
            v220.fields.a = 1.0;
            v220.fields.g = 0.35547;
            v220.fields.b = 0.35547;
            v216 = (UnityEngine_Color_o)0LL;
            UnityEngine_Color___ctor(v220, v155, v156, v157, v158, (const MethodInfo *)&v216);
            if ( !v154 )
              goto LABEL_198;
            UIWidget__set_color(v154, v216, 0LL);
            v159 = (UIWidget_o *)this->fields.summonBtnLabel;
            *(UnityEngine_Color_o *)&v160 = UnityEngine_Color__get_gray(0LL);
            if ( !v159 )
              goto LABEL_198;
            UIWidget__set_color(v159, *(UnityEngine_Color_o *)&v160, 0LL);
            v164 = this->fields.summonBtnLabel;
            if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonResultComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            }
            if ( !v164 )
              goto LABEL_198;
            UILabel__SetCondensedScale(
              v164,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            v140 = this->fields.summonBtnLabel;
            if ( !v140 )
              goto LABEL_198;
            v139 = v95;
LABEL_138:
            UILabel__set_text(v140, v139, 0LL);
            goto LABEL_163;
          }
        }
        else if ( methoda.parameters )
        {
          if ( !methoda.return_type )
            goto LABEL_198;
          v141 = *(&methoda.return_type[5].bits + 1);
          if ( v141 >= 1 && *((_DWORD *)methoda.parameters + 7) >= v141 )
            goto LABEL_129;
        }
LABEL_125:
        v142 = (UnityEngine_Behaviour_o *)this->fields.summonBtn;
        if ( !v142 )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled(v142, 1, 0LL);
        v143 = (UIWidget_o *)this->fields.summonBtnSpr;
        *(UnityEngine_Color_o *)&v144 = UnityEngine_Color__get_white(0LL);
        if ( !v143 )
          goto LABEL_198;
        UIWidget__set_color(v143, *(UnityEngine_Color_o *)&v144, 0LL);
        v148 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v149 = UnityEngine_Color__get_white(0LL);
        if ( !v148 )
          goto LABEL_198;
        UIWidget__set_color(v148, *(UnityEngine_Color_o *)&v149, 0LL);
LABEL_163:
        v173 = this->fields.summonCtrl;
        if ( v173 )
        {
          currentResourceInfo = v173->fields.currentResourceInfo;
          if ( currentResourceInfo )
          {
            UnityEngine_GameObject__SetActive(currentResourceInfo, 1, 0LL);
            v175 = this->fields.summonCtrl;
            if ( v175 )
            {
              v175->fields.isResult = 1;
              if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TutorialFlag_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              }
              if ( TutorialFlag__IsProgressDone(2, 0LL) )
              {
                v176 = (UnityEngine_Component_o *)this->fields.formationBtnLabel;
                if ( v176 )
                {
                  gameObject = UnityEngine_Component__get_gameObject(v176, 0LL);
                  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
                  if ( Parent )
                  {
                    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          Parent,
                                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( Component_WebViewObject )
                    {
                      UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
                      v180 = (UnityEngine_Component_o *)this->fields.combineBtnLabel;
                      if ( v180 )
                      {
                        v181 = UnityEngine_Component__get_gameObject(v180, 0LL);
                        v182 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v181, 0LL);
                        if ( v182 )
                        {
                          v183 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             v182,
                                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( v183 )
                          {
                            UnityEngine_Collider__set_enabled(v183, 1, 0LL);
                            v184 = (UnityEngine_Component_o *)this->fields.summonBtnLabel;
                            if ( v184 )
                            {
                              v185 = UnityEngine_Component__get_gameObject(v184, 0LL);
                              v186 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v185, 0LL);
                              if ( v186 )
                              {
                                v187 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   v186,
                                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( v187 )
                                {
                                  UnityEngine_Collider__set_enabled(v187, 1, 0LL);
                                  v188 = (UnityEngine_Component_o *)this->fields.sellBtnLabel;
                                  if ( v188 )
                                  {
                                    v189 = UnityEngine_Component__get_gameObject(v188, 0LL);
                                    v190 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v189, 0LL);
                                    if ( v190 )
                                    {
                                      v191 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                         v190,
                                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                      if ( v191 )
                                      {
                                        UnityEngine_Collider__set_enabled(v191, 1, 0LL);
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
                v193 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)touchBlocker,
                                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = v193;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.blocker,
                  (System_Int32_array **)v193,
                  v195,
                  v196,
                  v197,
                  v198,
                  v199,
                  v200);
                blocker = this->fields.blocker;
                v202 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                v203 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v202, 0LL);
                GameObjectExtensions__SetParent(blocker, v203, 0LL);
                v207 = SummonResultComponent_TypeInfo;
                if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v207 = SummonResultComponent_TypeInfo;
                }
                *(struct UnityEngine_Rect_o *)&methoda.methodPointer = v207->static_fields->TUTORIAL_BACK_ARROW_RECT;
                methodPointer = (int)methoda.methodPointer;
                x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v204 - 1), &methoda);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v221.fields.m_XMin = x - FSUtility__GetOffsetX(68.0, 0, 0LL);
                UnityEngine_Rect__set_x(v221, v210, &methoda);
                if ( *p_blocker )
                {
                  Component_srcLineSprite = (MaskWithOpening_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   *p_blocker,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( Component_srcLineSprite )
                  {
                    *(_QWORD *)&v222.fields.m_Width = methoda.invoker_method;
                    *(_QWORD *)&v222.fields.m_XMin = methoda.methodPointer;
                    MaskWithOpening__SetOpening(Component_srcLineSprite, v222, 30, 0LL);
                    v212 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( v212 )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos(v212, 0LL);
                      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      v215 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( v215 )
                      {
                        *(_QWORD *)&v223.fields.m_Width = methoda.invoker_method;
                        *(_QWORD *)&v223.fields.m_XMin = methoda.methodPointer;
                        v218.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
                        v218.fields.y = TutorialBackArrowPos.fields.y;
                        CommonUI__OpenTutorialArrowMark(
                          v215,
                          v218,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v223,
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
        v104 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v104 + 306) & 1) == 0 )
          sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v105 = **(_QWORD **)(v104 + 192);
        if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
          sub_AAFCFC(v105);
        v106 = **(DataManager_o ***)(v105 + 184);
        if ( !v106 )
          goto LABEL_198;
        v107 = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    v106,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_198;
        if ( !v107 )
          goto LABEL_198;
        UserData = TblUserMaster__getUserData(v107, SelfUserGame->fields.userId, 0LL);
        if ( !UserData )
          goto LABEL_198;
        friendPoint = UserData->fields.friendPoint;
        v110 = SummonControl_TypeInfo;
        if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v110 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v110->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        }
        v112 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                 FRIEND_POINT_SUMMON_ID,
                 (int32_t *)&methoda.genericContainerHandle + 1,
                 (int32_t *)&methoda.genericMethod,
                 0LL);
        if ( SHIDWORD(methoda.genericContainerHandle) > 0 || v112 )
        {
          v165 = this->fields.summonCtrl;
          if ( !v165 )
            goto LABEL_198;
          SummonControl__SetGachaTime(v165, gachaParamData->fields.gachaTime, 3, 0LL);
          v166 = this->fields.summonBtnLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v167 = LocalizationManager__Get((System_String_o *)StringLiteral_12386, 0LL);
          if ( !v166 )
            goto LABEL_198;
          UILabel__set_text(v166, v167, 0LL);
          v168 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v168 )
            goto LABEL_198;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          gachaTime = gachaParamData->fields.gachaTime;
          if ( gachaTime == 1 )
          {
            v114 = this->fields.summonCtrl;
            if ( !v114 )
              goto LABEL_198;
            gachaTime = 1;
          }
          else
          {
            v114 = this->fields.summonCtrl;
            if ( friendPoint <= 1999 )
            {
              if ( !v114 )
                goto LABEL_198;
              if ( friendPoint < 400 )
                gachaTime = 1;
              else
                gachaTime = friendPoint / 200;
            }
            else if ( !v114 )
            {
              goto LABEL_198;
            }
          }
          SummonControl__SetGachaTime(v114, gachaTime, 3, 0LL);
          v170 = this->fields.summonBtnLabel;
          LODWORD(v216.fields.r) = gachaParamData->fields.gachaTime;
          v171 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v216);
          v172 = System_String__Format(v42, v171, 0LL);
          if ( !v170 )
            goto LABEL_198;
          UILabel__set_text(v170, v172, 0LL);
          v168 = this->fields.summonBtnLabel;
          if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          }
          if ( !v168 )
LABEL_198:
            sub_B170D4();
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v168, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_163;
      case 5:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !v115 )
          goto LABEL_198;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v115,
                   gachaParamData->fields.gachaId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_100;
        v117 = Entity;
        if ( !LODWORD(Entity->fields.emptyMessage) )
          goto LABEL_100;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v118 = (UserGachaExtraCountMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !v118 )
          goto LABEL_198;
        if ( UserGachaExtraCountMaster__getExtraCount(v118, (int32_t)v117->fields.emptyMessage, 0LL) != 9 )
          goto LABEL_100;
        v119 = this->fields.summonBtnLabel;
        LODWORD(v216.fields.r) = gachaParamData->fields.gachaTime + 1;
        v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v216);
        v121 = System_String__Format(v42, v120, 0LL);
        if ( !v119 )
          goto LABEL_198;
        UILabel__set_text(v119, v121, 0LL);
LABEL_100:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v122 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v123 = NetworkManager__get_UserId(0LL);
        if ( !v122 )
          goto LABEL_198;
        v124 = UserItemMaster__GetEntity(v122, v123, gachaParamData->fields.ticketItemId, 0LL);
        if ( v124 && v124->fields.num > 0 )
          goto LABEL_125;
        v125 = (UnityEngine_Behaviour_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !v125 )
          goto LABEL_198;
        UnityEngine_Behaviour__set_enabled(v125, 0, 0LL);
        v219.fields.r = 0.35547;
        v126 = (UIWidget_o *)this->fields.summonBtnSpr;
        v219.fields.a = 1.0;
        v219.fields.g = 0.35547;
        v219.fields.b = 0.35547;
        *(_QWORD *)&v216.fields.r = 0LL;
        *(_QWORD *)&v216.fields.b = 0LL;
        UnityEngine_Color___ctor(v219, v127, v128, v129, v130, (const MethodInfo *)&v216);
        if ( !v126 )
          goto LABEL_198;
        UIWidget__set_color(v126, v216, 0LL);
        v131 = (UIWidget_o *)this->fields.summonBtnLabel;
        *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_gray(0LL);
        if ( !v131 )
          goto LABEL_198;
        UIWidget__set_color(v131, *(UnityEngine_Color_o *)&v132, 0LL);
        v136 = this->fields.summonBtnLabel;
        if ( (BYTE3(SummonResultComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        }
        if ( !v136 )
          goto LABEL_198;
        UILabel__SetCondensedScale(
          v136,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v137 = this->fields.summonBtnLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_12412, 0LL);
        if ( !v137 )
          goto LABEL_198;
        v139 = v138;
        v140 = v137;
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
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v13; // x0
  UserCommandCodeMaster_o *v14; // x0
  UILabel_o *svtTitleLb; // x20
  System_String_o *v16; // x0
  UILabel_o *svtNumLb; // x20
  System_String_o *v18; // x0
  UILabel_o *svtMaxLb; // x20
  System_String_o *v20; // x0
  UILabel_o *svtEqTitleLb; // x20
  System_String_o *v22; // x0
  UILabel_o *svtEqNumLb; // x20
  System_String_o *v24; // x0
  UILabel_o *svtEqMaxLb; // x20
  System_String_o *v26; // x0
  UILabel_o *CcNumLb; // x20
  System_String_o *v28; // x0
  UILabel_o *CcMaxLb; // x19
  System_String_o *v30; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF
  __int64 servantSum; // [xsp+10h] [xbp-20h] BYREF
  int32_t svtEquipKeep; // [xsp+18h] [xbp-18h] BYREF
  int32_t svtKeep; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40FD4B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_6998, v6);
    sub_B16FFC(&StringLiteral_6997, v7);
    byte_40FD4B1 = 1;
  }
  svtKeep = 0;
  svtEquipKeep = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  servantSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_25;
  svtKeep = SelfUserGame->fields.svtKeep;
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  if ( !byte_40F6094 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    byte_40F6094 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  HIDWORD(servantSum) = v10->static_fields->CommandCodeFrameMax;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, (int32_t *)&servantSum, &servantEquipSum[1], 1, 0LL);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  v14 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v13,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !v14 )
    goto LABEL_25;
  servantEquipSum[0] = UserCommandCodeMaster__getCount(v14, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6998, 0LL);
  if ( !svtTitleLb )
    goto LABEL_25;
  UILabel__set_text(svtTitleLb, v16, 0LL);
  svtNumLb = this->fields.svtNumLb;
  v18 = System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_25;
  UILabel__set_text(svtNumLb, v18, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  v20 = System_Int32__ToString((int32_t)&svtKeep, 0LL);
  if ( !svtMaxLb )
    goto LABEL_25;
  UILabel__set_text(svtMaxLb, v20, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6997, 0LL);
  if ( !svtEqTitleLb )
    goto LABEL_25;
  UILabel__set_text(svtEqTitleLb, v22, 0LL);
  svtEqNumLb = this->fields.svtEqNumLb;
  v24 = System_Int32__ToString((int32_t)&servantEquipSum[1], 0LL);
  if ( !svtEqNumLb )
    goto LABEL_25;
  UILabel__set_text(svtEqNumLb, v24, 0LL);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  v26 = System_Int32__ToString((int32_t)&svtEquipKeep, 0LL);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, v26, 0LL),
        CcNumLb = this->fields.CcNumLb,
        v28 = System_Int32__ToString((int32_t)servantEquipSum, 0LL),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, v28, 0LL),
        CcMaxLb = this->fields.CcMaxLb,
        v30 = System_Int32__ToString((int32_t)&servantSum + 4, 0LL),
        !CcMaxLb) )
  {
LABEL_25:
    sub_B170D4();
  }
  UILabel__set_text(CcMaxLb, v30, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_40FD4B3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrSvtId);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_SummonResultComponent___c__DisplayClass61_0__showResCcDetail_b__0__, v9);
    sub_B16FFC(&SummonResultComponent___c__DisplayClass61_0_TypeInfo, v10);
    byte_40FD4B3 = 1;
  }
  v11 = sub_B170CC(SummonResultComponent___c__DisplayClass61_0_TypeInfo, usrSvtId, method, v3, v4);
  SummonResultComponent___c__DisplayClass61_0___ctor((SummonResultComponent___c__DisplayClass61_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 16) = usrSvtId;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_SummonResultComponent___c__DisplayClass61_0__showResCcDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_40FD4B2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrSvtId);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_SummonResultComponent___c__DisplayClass60_0__showResSvtDetail_b__0__, v9);
    sub_B16FFC(&SummonResultComponent___c__DisplayClass60_0_TypeInfo, v10);
    byte_40FD4B2 = 1;
  }
  v11 = sub_B170CC(SummonResultComponent___c__DisplayClass60_0_TypeInfo, usrSvtId, method, v3, v4);
  SummonResultComponent___c__DisplayClass60_0___ctor((SummonResultComponent___c__DisplayClass60_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 16) = usrSvtId;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_SummonResultComponent___c__DisplayClass60_0__showResSvtDetail_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass60_0___ctor(
        SummonResultComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass60_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass60_0_o *this,
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantStatusDialog_EndDelegate_o *v14; // x21
  CommonUI_o *v15; // x19

  if ( (byte_40F7A95 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_40F7A95 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
  ServantStatusDialog_EndDelegate___ctor(v14, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_9;
  CommonUI__OpenServantStatusDialog_18247068(v9, 8, usrSvtId, v14, 0LL, 0LL);
  v15 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v15 )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass61_0___ctor(
        SummonResultComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass61_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  WebViewManager_o *v12; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantStatusDialog_EndDelegate_o *v19; // x21
  CommonUI_o *v20; // x19

  if ( (byte_40F7A96 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_40F7A96 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.usrSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v14 = (CommonUI_o *)v12;
  v19 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16, v17, v18);
  ServantStatusDialog_EndDelegate___ctor(v19, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v14 )
    goto LABEL_11;
  CommonUI__OpenServantStatusDialog_18250552(v14, 0, (UserCommandCodeEntity_o *)Entity, v19, 0LL, 0LL);
  v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v20 )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}