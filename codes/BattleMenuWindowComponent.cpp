void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Awake(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleMenuWindowComponent__Close(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__CloseWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_421117B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__35_0__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_421117B = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__35_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_B0D97C(v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    v6,
    waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CompClose(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__CompOpen(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *classChartSp; // x19

  if ( (byte_421116E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19516/*"img_classchart"*/, v3);
    byte_421116E = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_19516/*"img_classchart"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__Open(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BattleMenuWindowComponent__modeCkRetire(this, (const MethodInfo *)call);
  BattleMenuWindowComponent__OpenImpl(this, call, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent__OpenImpl(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleWindowComponent_o *checkRetireWindow; // x0
  UIWidget_o *Component_srcLineSprite; // x21
  int v12; // s0
  bool v16; // w1
  UnityEngine_Object_o *v17; // x21
  UIWidget_o *v18; // x21
  int v19; // s0
  UnityEngine_Transform_o *transform; // x21
  UIWidget_o *itemListBtnSpr; // x21
  int v25; // s0
  UnityEngine_Transform_o *v29; // x21
  UIWidget_o *v30; // x21
  int v31; // s0
  UIWidget_o *v35; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v37; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct BattleData_o *v42; // x8
  UIWidget_o *waveRestartButtonLabel; // x21
  float v44; // s0
  float v45; // s1
  float v46; // s2
  float v47; // s3
  UILabel_o *waveRestartExplanationLabel; // x21
  struct BattleData_o *v49; // x8
  UnityEngine_Color_o v50; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v54; // 0:x0.8
  UnityEngine_Color32_o v55; // 0:x0.8
  UnityEngine_Color32_o v56; // 0:x0.8
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421116F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Collider___, call);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_358/*"#606060"*/, v8);
    sub_B0D8A4(&StringLiteral_2466/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v9);
    byte_421116F = 1;
  }
  c.fields.rgba = 0;
  *(_QWORD *)&v50.fields.r = 0LL;
  *(_QWORD *)&v50.fields.b = 0LL;
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_75;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_75;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_75;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_75;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_75;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_75;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_75;
  if ( BattleData__isTutorial((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_75;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_75;
    UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v12, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_75;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_75;
    v16 = 0;
LABEL_43:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v16, 0LL);
    goto LABEL_44;
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_75;
  if ( !BattleData__IsWarBoard((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_75;
    v30 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)checkRetireWindow,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_white(0LL);
    if ( !v30 )
      goto LABEL_75;
    UIWidget__set_color(v30, *(UnityEngine_Color_o *)&v31, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_75;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_75;
    v16 = 1;
    goto LABEL_43;
  }
  p_c = (UnityEngine_Color32_o)&c;
  UnityEngine_Color32___ctor(p_c, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  v17 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)checkRetireWindow,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_75;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v17, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  v18 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)checkRetireWindow,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
  {
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color32__op_Implicit_40760496(rgba, 0LL);
    if ( !v18 )
      goto LABEL_75;
    UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v54 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v60 = UnityEngine_Color32__op_Implicit_40760496(v54, 0LL);
  CommonFunction__SetColorAllChild(transform, 0, v60, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_75;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    v55 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    itemListBtnSpr = (UIWidget_o *)this->fields.itemListBtnSpr;
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color32__op_Implicit_40760496(v55, 0LL);
    if ( !itemListBtnSpr )
      goto LABEL_75;
    UIWidget__set_color(itemListBtnSpr, *(UnityEngine_Color_o *)&v25, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_75;
    v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v56 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    v61 = UnityEngine_Color32__op_Implicit_40760496(v56, 0LL);
    CommonFunction__SetColorAllChild(v29, 0, v61, 0LL);
  }
LABEL_44:
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_75;
  if ( BattleData__IsContinueWaveRestart((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( checkRetireWindow )
    {
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v35 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v35, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v57.fields.x = 260.0;
            v57.fields.y = 80.0;
            v57.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v57, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_358/*"#606060"*/, &v50, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v37 = (UIWidget_o *)checkRetireWindow;
                  if ( data->fields.turnCount >= 2 )
                  {
                    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
                    if ( !v37 )
                      goto LABEL_75;
                  }
                  else
                  {
                    g = v50.fields.g;
                    r = v50.fields.r;
                    b = v50.fields.b;
                    a = v50.fields.a;
                    if ( !checkRetireWindow )
                      goto LABEL_75;
                  }
                  UIWidget__set_color(v37, *(UnityEngine_Color_o *)&r, 0LL);
                  v42 = this->fields.data;
                  if ( !v42 )
                    goto LABEL_75;
                  waveRestartButtonLabel = (UIWidget_o *)this->fields.waveRestartButtonLabel;
                  if ( v42->fields.turnCount >= 2 )
                  {
                    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
                    if ( !waveRestartButtonLabel )
                      goto LABEL_75;
                  }
                  else
                  {
                    v45 = v50.fields.g;
                    v44 = v50.fields.r;
                    v46 = v50.fields.b;
                    v47 = v50.fields.a;
                    if ( !waveRestartButtonLabel )
                      goto LABEL_75;
                  }
                  UIWidget__set_color(waveRestartButtonLabel, *(UnityEngine_Color_o *)&v44, 0LL);
                  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_2466/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
                                                                   0LL);
                  if ( waveRestartExplanationLabel )
                  {
                    UILabel__set_text(waveRestartExplanationLabel, (System_String_o *)checkRetireWindow, 0LL);
                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartExplanationLabel;
                    if ( checkRetireWindow )
                    {
                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)checkRetireWindow,
                                                                       0LL);
                      v49 = this->fields.data;
                      if ( v49 )
                      {
                        if ( checkRetireWindow )
                        {
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)checkRetireWindow,
                            v49->fields.turnCount < 2,
                            0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                          if ( checkRetireWindow )
                          {
                            checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)checkRetireWindow,
                                                                             0LL);
                            if ( checkRetireWindow )
                            {
                              v58.fields.x = -212.0;
                              v58.fields.y = 15.0;
                              v58.fields.z = 0.0;
                              UnityEngine_Transform__set_localPosition(
                                (UnityEngine_Transform_o *)checkRetireWindow,
                                v58,
                                0LL);
                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                              if ( checkRetireWindow )
                              {
                                v59.fields.x = 144.0;
                                v59.fields.y = -32.0;
                                v59.fields.z = 0.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)checkRetireWindow,
                                  v59,
                                  0LL);
                                goto LABEL_74;
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
LABEL_75:
    sub_B0D97C(checkRetireWindow);
  }
LABEL_74:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v2; // x19
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
  struct BattleData_o *data; // x8
  int turnCount; // w20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  System_String_o *v27; // x25
  struct BattleWindowContinueWaveRestartComponent_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  BattleWindowComponent_EndCall_o *v31; // x21

  v2 = this;
  if ( (byte_421117A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__, v3);
    sub_B0D8A4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_0__, v4);
    sub_B0D8A4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_1__, v5);
    sub_B0D8A4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_2__, v6);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, v9);
    sub_B0D8A4(&StringLiteral_3400/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v10);
    sub_B0D8A4(&StringLiteral_3402/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v11);
    sub_B0D8A4(&StringLiteral_3399/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, v12);
    this = (BattleMenuWindowComponent_o *)sub_B0D8A4(&StringLiteral_3403/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v13);
    byte_421117A = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  turnCount = data->fields.turnCount;
  v16 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 75) & 2) != 0 )
    v16 = (_QWORD *)sub_B0D8AC();
  v17 = (System_Reflection_MethodBase_o *)sub_B0D888(v16, v16[3]);
  if ( turnCount <= 1 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
    this = (BattleMenuWindowComponent_o *)v2->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B0D97C(this);
  }
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  waveRestartWindow = v2->fields.waveRestartWindow;
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)v2, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_0__, 0LL);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)v2, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_1__, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3403/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3402/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3400/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  this = (BattleMenuWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_15;
  BattleWindowContinueWaveRestartComponent__SetWindow_23840128(
    waveRestartWindow,
    v21,
    v24,
    v25,
    v26,
    v27,
    (System_String_o *)this,
    0LL);
  v28 = v2->fields.waveRestartWindow;
  v31 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v29, v30);
  BattleWindowComponent_EndCall___ctor(
    v31,
    (Il2CppObject *)v2,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_2__,
    0LL);
  if ( !v28 )
    goto LABEL_15;
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v28->klass->vtable._10_Open.method)(
    v28,
    v31,
    v28->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x0

  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  waveRestartWindow = this->fields.waveRestartWindow;
  if ( !waveRestartWindow )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, _QWORD, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    0LL,
    waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent___CloseWaveRestartWindow_b__35_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4211180 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4211180 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__34_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421117D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4583/*"DECIDE_WAVE_RESTART"*/, method);
    byte_421117D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4583/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__34_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421117E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2933/*"CANCEL_WAVE_RESTART"*/, method);
    byte_421117E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2933/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__34_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421117F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421117F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4211178 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4211178 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_B0D97C(setVolumeWindowMask);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._12_Close.method)(
    setVolumeWindow,
    v8,
    setVolumeWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__endCloseCkRetire(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4211171 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4211171 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4211179 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4211179 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4211173 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4211173 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4211175 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4211175 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_4211177 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4211177 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(setVolumeWindowMask);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_421117C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20086/*"itemlist_win/Scroll Bar/close"*/, method);
    byte_421117C = 1;
  }
  return (System_String_o *)StringLiteral_20086/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4211170 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleMenuWindowComponent_endCloseCkRetire__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4211170 = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_B0D97C(v7);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._12_Close.method)(
    checkRetireWindow,
    v6,
    checkRetireWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__modeItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_4211174 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleMenuWindowComponent_endOpenItemListWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, v5);
    byte_4211174 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_7;
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( BattleData__ExistDropItem(data, 0LL) )
  {
LABEL_7:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    itemListWindow = this->fields.itemListWindow;
    v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v8, v9);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v10, 0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(data);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *data; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_4211172 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleMenuWindowComponent_endOpenCkRetire__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, v5);
    byte_4211172 = 1;
  }
  data = (PlayMakerFSM_o *)this->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    data = this->fields.myFsm;
    if ( data )
    {
      PlayMakerFSM__SendEvent(data, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B0D97C(data);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_15;
  BattleRetireWindowComponent__Open(checkRetireWindow, v10, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4211176 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4211176 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl;
  if ( !setVolumeWindowMask
    || (SetVolumeControl__initSetVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v7, v8),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_10:
    sub_B0D97C(setVolumeWindowMask);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._10_Open.method)(
    setVolumeWindow,
    v9,
    setVolumeWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__showConf(
        BattleMenuWindowComponent_o *this,
        BattleDropItem_o *drop,
        const MethodInfo *method)
{
  ;
}