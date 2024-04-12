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
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AC968 & 1) == 0 )
  {
    sub_B52984(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__35_0__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42AC968 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__35_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    v4,
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
  UISprite_o *classChartSp; // x19

  if ( (byte_42AC95B & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_19601/*"img_classchart"*/);
    byte_42AC95B = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_19601/*"img_classchart"*/, 0LL);
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
  BattleWindowComponent_o *checkRetireWindow; // x0
  UIWidget_o *Component_srcLineSprite; // x21
  int v7; // s0
  bool v11; // w1
  UnityEngine_Object_o *v12; // x21
  UIWidget_o *v13; // x21
  int v14; // s0
  UnityEngine_Transform_o *transform; // x21
  UIWidget_o *itemListBtnSpr; // x21
  int v20; // s0
  UnityEngine_Transform_o *v24; // x21
  UIWidget_o *v25; // x21
  int v26; // s0
  UIWidget_o *v30; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v32; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct BattleData_o *v37; // x8
  UIWidget_o *waveRestartButtonLabel; // x21
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s3
  UILabel_o *waveRestartExplanationLabel; // x21
  struct BattleData_o *v44; // x8
  UnityEngine_Color_o v45; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v49; // 0:x0.8
  UnityEngine_Color32_o v50; // 0:x0.8
  UnityEngine_Color32_o v51; // 0:x0.8
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AC95C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_360/*"#606060"*/);
    sub_B52984(&StringLiteral_2487/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    byte_42AC95C = 1;
  }
  c.fields.rgba = 0;
  *(_QWORD *)&v45.fields.r = 0LL;
  *(_QWORD *)&v45.fields.b = 0LL;
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
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_75;
    UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v7, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_75;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_75;
    v11 = 0;
LABEL_43:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v11, 0LL);
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
    v25 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)checkRetireWindow,
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
    if ( !v25 )
      goto LABEL_75;
    UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_75;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_75;
    v11 = 1;
    goto LABEL_43;
  }
  p_c = (UnityEngine_Color32_o)&c;
  UnityEngine_Color32___ctor(p_c, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  v12 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)checkRetireWindow,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_75;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v12, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  v13 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)checkRetireWindow,
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
  {
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color32__op_Implicit_41466640(rgba, 0LL);
    if ( !v13 )
      goto LABEL_75;
    UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_75;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v49 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v55 = UnityEngine_Color32__op_Implicit_41466640(v49, 0LL);
  CommonFunction__SetColorAllChild(transform, 0, v55, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_75;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    v50 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    itemListBtnSpr = (UIWidget_o *)this->fields.itemListBtnSpr;
    *(UnityEngine_Color_o *)&v20 = UnityEngine_Color32__op_Implicit_41466640(v50, 0LL);
    if ( !itemListBtnSpr )
      goto LABEL_75;
    UIWidget__set_color(itemListBtnSpr, *(UnityEngine_Color_o *)&v20, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_75;
    v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v51 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    v56 = UnityEngine_Color32__op_Implicit_41466640(v51, 0LL);
    CommonFunction__SetColorAllChild(v24, 0, v56, 0LL);
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
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v30 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v30, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v52.fields.x = 260.0;
            v52.fields.y = 80.0;
            v52.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v52, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_360/*"#606060"*/, &v45, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v32 = (UIWidget_o *)checkRetireWindow;
                  if ( data->fields.turnCount >= 2 )
                  {
                    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
                    if ( !v32 )
                      goto LABEL_75;
                  }
                  else
                  {
                    g = v45.fields.g;
                    r = v45.fields.r;
                    b = v45.fields.b;
                    a = v45.fields.a;
                    if ( !checkRetireWindow )
                      goto LABEL_75;
                  }
                  UIWidget__set_color(v32, *(UnityEngine_Color_o *)&r, 0LL);
                  v37 = this->fields.data;
                  if ( !v37 )
                    goto LABEL_75;
                  waveRestartButtonLabel = (UIWidget_o *)this->fields.waveRestartButtonLabel;
                  if ( v37->fields.turnCount >= 2 )
                  {
                    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
                    if ( !waveRestartButtonLabel )
                      goto LABEL_75;
                  }
                  else
                  {
                    v40 = v45.fields.g;
                    v39 = v45.fields.r;
                    v41 = v45.fields.b;
                    v42 = v45.fields.a;
                    if ( !waveRestartButtonLabel )
                      goto LABEL_75;
                  }
                  UIWidget__set_color(waveRestartButtonLabel, *(UnityEngine_Color_o *)&v39, 0LL);
                  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_2487/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                      v44 = this->fields.data;
                      if ( v44 )
                      {
                        if ( checkRetireWindow )
                        {
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)checkRetireWindow,
                            v44->fields.turnCount < 2,
                            0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                          if ( checkRetireWindow )
                          {
                            checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)checkRetireWindow,
                                                                             0LL);
                            if ( checkRetireWindow )
                            {
                              v53.fields.x = -212.0;
                              v53.fields.y = 15.0;
                              v53.fields.z = 0.0;
                              UnityEngine_Transform__set_localPosition(
                                (UnityEngine_Transform_o *)checkRetireWindow,
                                v53,
                                0LL);
                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                              if ( checkRetireWindow )
                              {
                                v54.fields.x = 144.0;
                                v54.fields.y = -32.0;
                                v54.fields.z = 0.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)checkRetireWindow,
                                  v54,
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
    sub_B52A5C(checkRetireWindow, call);
  }
LABEL_74:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v2; // x19
  struct BattleData_o *data; // x8
  int turnCount; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  System_Action_o *v8; // x21
  System_Action_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  System_String_o *v12; // x25
  struct BattleWindowContinueWaveRestartComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  v2 = this;
  if ( (byte_42AC967 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
    sub_B52984(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_0__);
    sub_B52984(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_1__);
    sub_B52984(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_2__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2951/*"CANCEL"*/);
    sub_B52984(&StringLiteral_3420/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/);
    sub_B52984(&StringLiteral_3422/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/);
    sub_B52984(&StringLiteral_3419/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/);
    this = (BattleMenuWindowComponent_o *)sub_B52984(&StringLiteral_3423/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/);
    byte_42AC967 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  turnCount = data->fields.turnCount;
  v5 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5298C();
  v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
  if ( turnCount <= 1 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
    this = (BattleMenuWindowComponent_o *)v2->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2951/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B52A5C(this, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  waveRestartWindow = v2->fields.waveRestartWindow;
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v2, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_0__, 0LL);
  v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v2, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_1__, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3423/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3422/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3420/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  this = (BattleMenuWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3419/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_15;
  BattleWindowContinueWaveRestartComponent__SetWindow_24793968(
    waveRestartWindow,
    v8,
    v9,
    v10,
    v11,
    v12,
    (System_String_o *)this,
    0LL);
  v13 = v2->fields.waveRestartWindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__34_2__,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v14,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x0

  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  waveRestartWindow = this->fields.waveRestartWindow;
  if ( !waveRestartWindow )
    sub_B52A5C(0LL, v3);
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

  if ( (byte_42AC96D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC96D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__34_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC96A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4607/*"DECIDE_WAVE_RESTART"*/);
    byte_42AC96A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4607/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__34_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC96B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2952/*"CANCEL_WAVE_RESTART"*/);
    byte_42AC96B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2952/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__34_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC96C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC96C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_42AC965 & 1) == 0 )
  {
    sub_B52984(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42AC965 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_B52A5C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._12_Close.method)(
    setVolumeWindow,
    v5,
    setVolumeWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__endCloseCkRetire(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC95E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC95E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC966 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC966 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC960 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC960 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AC962 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC962 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_42AC964 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42AC964 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC969 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20174/*"itemlist_win/Scroll Bar/close"*/);
    byte_42AC969 = 1;
  }
  return (System_String_o *)StringLiteral_20174/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AC95D & 1) == 0 )
  {
    sub_B52984(&Method_BattleMenuWindowComponent_endCloseCkRetire__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42AC95D = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._12_Close.method)(
    checkRetireWindow,
    v4,
    checkRetireWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__modeItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_42AC961 & 1) == 0 )
  {
    sub_B52984(&Method_BattleMenuWindowComponent_endOpenItemListWindow__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_2951/*"CANCEL"*/);
    byte_42AC961 = 1;
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
    v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v5, 0LL);
      return;
    }
LABEL_17:
    sub_B52A5C(data, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_2951/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *data; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_42AC95F & 1) == 0 )
  {
    sub_B52984(&Method_BattleMenuWindowComponent_endOpenCkRetire__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_2951/*"CANCEL"*/);
    byte_42AC95F = 1;
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
      PlayMakerFSM__SendEvent(data, (System_String_o *)StringLiteral_2951/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B52A5C(data, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_15;
  BattleRetireWindowComponent__Open(checkRetireWindow, v5, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_42AC963 & 1) == 0 )
  {
    sub_B52984(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AC963 = 1;
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
        v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_10:
    sub_B52A5C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._10_Open.method)(
    setVolumeWindow,
    v5,
    setVolumeWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__showConf(
        BattleMenuWindowComponent_o *this,
        BattleDropItem_o *drop,
        const MethodInfo *method)
{
  ;
}