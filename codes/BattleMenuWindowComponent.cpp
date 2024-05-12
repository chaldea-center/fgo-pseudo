void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_3319E00;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_3319E10;
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_3319E20;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_3319E30;
  *(_QWORD *)&this->fields.waveRestartButtonLabelScaleInInterruptionQuest.fields.y = _D0;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Awake(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleMenuWindowComponent__CancelInterruption(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_43876FD & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent__CancelInterruption_b__57_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43876FD = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__57_0__,
    0LL);
  if ( !interruptionWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))interruptionWindow->klass->vtable._12_Close.method)(
    interruptionWindow,
    v4,
    interruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CheckCanOpenWaveRestartOrInterruption(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct System_String_o *Empty; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_43876F8 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_3031/*"CANCEL"*/);
    sub_B775C4(&StringLiteral_9949/*"OPEN_WAVE_RESTART_WINDOW"*/);
    sub_B775C4(&StringLiteral_9937/*"OPEN_INTERRUPTION_WINDOW"*/);
    byte_43876F8 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( data->fields.turnCount > 1 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( BattleData__IsContinueWaveRestart(data, 0LL) )
    {
      method = (const MethodInfo *)StringLiteral_9949/*"OPEN_WAVE_RESTART_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_17;
      if ( BattleData__IsInterruptionQuest(data, 0LL) )
        method = (const MethodInfo *)StringLiteral_9937/*"OPEN_INTERRUPTION_WINDOW"*/;
      else
        method = (const MethodInfo *)Empty;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_16;
LABEL_17:
    sub_B7769C(data, method);
  }
  v5 = Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC();
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_17;
  method = (const MethodInfo *)StringLiteral_3031/*"CANCEL"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)method, 0LL);
}


void __fastcall BattleMenuWindowComponent__Close(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__CloseInterruptionWindowGroup(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *interruptionWindow; // x20
  __int64 v4; // x1
  WaveBattleSelectWaveDialog_o *v5; // x0
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4387700 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4387700 = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0LL, 0LL) )
  {
    v5 = (WaveBattleSelectWaveDialog_o *)this->fields.interruptionWindow;
    if ( !v5 )
      goto LABEL_16;
    ((void (__fastcall *)(WaveBattleSelectWaveDialog_o *, _QWORD, void *))v5->klass[1]._1.parent)(
      v5,
      0LL,
      v5->klass[1]._1.generic_class);
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v5 = this->fields.waveSelectDialog;
    if ( v5 )
    {
      WaveBattleSelectWaveDialog__Close(v5, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(v5, v4);
  }
}


void __fastcall BattleMenuWindowComponent__CloseWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_43876FA & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__54_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43876FA = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__54_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_B7769C(v5, v6);
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
  UnityEngine_GameObject_o *data; // x0

  if ( (byte_43876ED & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_43876ED = 1;
  }
  data = (UnityEngine_GameObject_o *)this->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0LL) )
  {
    data = this->fields.RetireButton;
    if ( data )
    {
      data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           data,
                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( data )
      {
        UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
        data = this->fields.waveRestartButton;
        if ( data )
        {
          data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               data,
                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
            data = this->fields.interruptionButton;
            if ( data )
            {
              data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   data,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( data )
              {
                UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B7769C(data, method);
  }
LABEL_12:
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UISprite_o *classChartSp; // x20
  __int64 v4; // x1
  AssetData_o *data; // x0

  if ( (byte_43876EB & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&StringLiteral_2862/*"Battle/Common"*/);
    sub_B775C4(&StringLiteral_2880/*"BattleAssetUIAtlas"*/);
    sub_B775C4(&StringLiteral_19848/*"img_classchart"*/);
    sub_B775C4(&StringLiteral_17491/*"buttontxt_save"*/);
    byte_43876EB = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_19848/*"img_classchart"*/, 0LL);
  data = (AssetData_o *)this->fields.data;
  if ( !data )
    goto LABEL_18;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0LL) )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2862/*"Battle/Common"*/, 0LL);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              data,
                              (System_String_o *)StringLiteral_2880/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0LL);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_17491/*"buttontxt_save"*/, 0LL);
            data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
            if ( data )
            {
              ((void (__fastcall *)(AssetData_o *, void *))data->klass[2]._1.typeMetadataHandle)(
                data,
                data->klass[2]._1.interopData);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_B7769C(data, v4);
  }
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
  struct BattleWindowInterruptionComponent_o **p_interruptionWindow; // x21
  UnityEngine_Object_o *interruptionWindow; // x22
  UIWidget_o *Component_srcLineSprite; // x21
  int v9; // s0
  bool v13; // w1
  UnityEngine_Object_o *v14; // x21
  UIWidget_o *v15; // x21
  int v16; // s0
  UnityEngine_Transform_o *transform; // x21
  UIWidget_o *itemListBtnSpr; // x21
  int v22; // s0
  UnityEngine_Transform_o *v26; // x21
  UIWidget_o *v27; // x21
  int v28; // s0
  UIWidget_o *v32; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v34; // x22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Object_o *v39; // x23
  struct BattleData_o *v40; // x8
  UIWidget_o *waveRestartButtonLabel; // x21
  float v42; // s0
  float v43; // s1
  float v44; // s2
  float v45; // s3
  UILabel_o *waveRestartExplanationLabel; // x21
  struct BattleData_o *v47; // x8
  UnityEngine_Color_o color; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v52; // 0:x0.8
  UnityEngine_Color32_o v53; // 0:x0.8
  UnityEngine_Color32_o v54; // 0:x0.8
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43876EC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3184/*"CLICK_INTERRUPTION_MENU"*/);
    sub_B775C4(&StringLiteral_363/*"#606060"*/);
    sub_B775C4(&StringLiteral_2561/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    byte_43876EC = 1;
  }
  c.fields.rgba = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_112;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_112;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_112;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_112;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_112;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_112;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_112;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)checkRetireWindow, 0LL) )
  {
    p_interruptionWindow = &this->fields.interruptionWindow;
    interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(interruptionWindow, 0LL, 0LL) )
    {
      checkRetireWindow = (BattleWindowComponent_o *)BaseMonoBehaviour__createObject(
                                                       (BaseMonoBehaviour_o *)this,
                                                       this->fields.interruptionWindowPrefab,
                                                       this->fields.retireWindowRoot,
                                                       0LL,
                                                       0LL);
      if ( !checkRetireWindow )
        goto LABEL_112;
      *p_interruptionWindow = (struct BattleWindowInterruptionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      sub_B77560(&this->fields.interruptionWindow);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_112;
      BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_112;
      ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
        checkRetireWindow,
        checkRetireWindow->klass->vtable._10_Open.methodPtr);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_112;
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)checkRetireWindow,
                                                       0LL);
      if ( !checkRetireWindow )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
    }
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_112;
  if ( BattleData__isTutorial((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_112;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_112;
    UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v9, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_112;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_112;
    v13 = 0;
LABEL_55:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v13, 0LL);
    goto LABEL_56;
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_112;
  if ( !BattleData__IsWarBoard((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_112;
    v27 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)checkRetireWindow,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !v27 )
      goto LABEL_112;
    UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_112;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_112;
    v13 = 1;
    goto LABEL_55;
  }
  p_c = (UnityEngine_Color32_o)&c;
  UnityEngine_Color32___ctor(p_c, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)checkRetireWindow,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_112;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v14, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  v15 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)checkRetireWindow,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color32__op_Implicit_41413804(rgba, 0LL);
    if ( !v15 )
      goto LABEL_112;
    UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v16, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v52 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v57 = UnityEngine_Color32__op_Implicit_41413804(v52, 0LL);
  CommonFunction__SetColorAllChild(transform, 0, v57, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_112;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    v53 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    itemListBtnSpr = (UIWidget_o *)this->fields.itemListBtnSpr;
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color32__op_Implicit_41413804(v53, 0LL);
    if ( !itemListBtnSpr )
      goto LABEL_112;
    UIWidget__set_color(itemListBtnSpr, *(UnityEngine_Color_o *)&v22, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_112;
    v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v54 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    v58 = UnityEngine_Color32__op_Implicit_41413804(v54, 0LL);
    CommonFunction__SetColorAllChild(v26, 0, v58, 0LL);
  }
LABEL_56:
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_112;
  if ( BattleData__IsNeedSaveWaveRestartDataQuest((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( checkRetireWindow )
    {
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v32 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v32, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v55.fields.x = 260.0;
            v55.fields.y = 80.0;
            v55.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v55, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_363/*"#606060"*/, &color, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v34 = (UIWidget_o *)checkRetireWindow;
                  if ( data->fields.turnCount >= 2 )
                  {
                    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
                    if ( !v34 )
                      goto LABEL_112;
                  }
                  else
                  {
                    r = color.fields.r;
                    g = color.fields.g;
                    b = color.fields.b;
                    a = color.fields.a;
                    if ( !checkRetireWindow )
                      goto LABEL_112;
                  }
                  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&r, 0LL);
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                  if ( checkRetireWindow )
                  {
                    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)checkRetireWindow,
                                                                     0LL);
                    if ( checkRetireWindow )
                    {
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)checkRetireWindow,
                        this->fields.classChartPosInWaveRestartQuest,
                        0LL);
                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
                      if ( checkRetireWindow )
                      {
                        checkRetireWindow = (BattleWindowComponent_o *)BattleData__IsInterruptionQuest(
                                                                         (BattleData_o *)checkRetireWindow,
                                                                         0LL);
                        if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                        {
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          v39 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)checkRetireWindow,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           v39,
                                                                           0LL,
                                                                           0LL);
                          if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                          {
                            if ( !v39 )
                              goto LABEL_112;
                            v39[1].monitor = (void *)StringLiteral_3184/*"CLICK_INTERRUPTION_MENU"*/;
                            sub_B77560(&v39[1].monitor);
                          }
                          UIWidget__set_width(v32, 160, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                           0LL);
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            this->fields.retireButtonPosInInterruptionQuest,
                            0LL);
                          UIWidget__set_width(v34, 160, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                           0LL);
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            this->fields.waveRestartButtonPosInInterruptionQuest,
                            0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)checkRetireWindow,
                                                                           0LL);
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            this->fields.classChartPosInInterruptionQuest,
                            0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UIWidget__set_width((UIWidget_o *)checkRetireWindow, 880, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UIWidget__ResizeCollider((UIWidget_o *)checkRetireWindow, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)checkRetireWindow,
                                                                           0LL);
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_Transform__set_localScale(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            this->fields.waveRestartButtonLabelScaleInInterruptionQuest,
                            0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                          if ( !checkRetireWindow )
                            goto LABEL_112;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            this->fields.closeButtonPosInInterruptionQuest,
                            0LL);
                        }
                        v40 = this->fields.data;
                        if ( !v40 )
                          goto LABEL_112;
                        waveRestartButtonLabel = (UIWidget_o *)this->fields.waveRestartButtonLabel;
                        if ( v40->fields.turnCount >= 2 )
                        {
                          *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
                          if ( !waveRestartButtonLabel )
                            goto LABEL_112;
                        }
                        else
                        {
                          v42 = color.fields.r;
                          v43 = color.fields.g;
                          v44 = color.fields.b;
                          v45 = color.fields.a;
                          if ( !waveRestartButtonLabel )
                            goto LABEL_112;
                        }
                        UIWidget__set_color(waveRestartButtonLabel, *(UnityEngine_Color_o *)&v42, 0LL);
                        waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_2561/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                            v47 = this->fields.data;
                            if ( v47 )
                            {
                              if ( checkRetireWindow )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)checkRetireWindow,
                                  v47->fields.turnCount < 2,
                                  0LL);
                                checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                if ( checkRetireWindow )
                                {
                                  v56.fields.x = 144.0;
                                  v56.fields.y = -32.0;
                                  v56.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                    v56,
                                    0LL);
                                  goto LABEL_111;
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
LABEL_112:
    sub_B7769C(checkRetireWindow, call);
  }
LABEL_111:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionConfirmWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  CommonConfirmDialog_ClickDelegate_o *v12; // x25

  if ( (byte_43876FF & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_0__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_2545/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_B775C4(&StringLiteral_2543/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_2542/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_43876FF = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC();
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL);
  v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2543/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2545/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_0__,
    0LL);
  if ( !v7 )
LABEL_11:
    sub_B7769C(Instance, v6);
  CommonUI__OpenConfirmDecideDialog(v7, v8, v9, v10, v11, v12, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  System_Action_o *v6; // x21
  System_Action_o *v7; // x22
  System_Action_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleWindowInterruptionComponent_o *v11; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_43876FC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_0__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_1__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_2__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_3__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43876FC = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC();
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  interruptionWindow = this->fields.interruptionWindow;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_0__,
    0LL);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_1__,
    0LL);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_2__,
    0LL);
  if ( !interruptionWindow
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(interruptionWindow, v6, v7, v8, 0LL, 1, 0LL),
        v11 = this->fields.interruptionWindow,
        v12 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_3__,
          0LL),
        !v11) )
  {
    sub_B7769C(v9, v10);
  }
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v11->klass->vtable._10_Open.method)(
    v11,
    v12,
    v11->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  System_Action_o *v4; // x21
  System_Action_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  System_String_o *v8; // x25
  System_String_o *v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct BattleWindowContinueWaveRestartComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_43876F9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_0__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_1__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_2__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3513/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/);
    sub_B775C4(&StringLiteral_3515/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3512/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/);
    sub_B775C4(&StringLiteral_3516/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/);
    byte_43876F9 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_0__, 0LL);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_1__, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3515/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3513/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3512/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_11;
  BattleWindowContinueWaveRestartComponent__SetWindow_24307208(waveRestartWindow, v4, v5, v6, v7, v8, v9, 0LL);
  v11 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B775CC();
  v12 = (System_Reflection_MethodBase_o *)sub_B775A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  v13 = this->fields.waveRestartWindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_2__,
    0LL);
  if ( !v13 )
LABEL_11:
    sub_B7769C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v14,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct BattleData_o *data; // x8
  System_String_o *v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  struct BattleData_o *v10; // x8
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  CommonUI_o *v14; // x22
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25
  int32_t DispWaveCount; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4387702 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__62_0__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_2551/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_2550/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_2549/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_2552/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_989/*"00"*/);
    byte_4387702 = 1;
  }
  DispWaveCount = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2551/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  v6 = (System_String_o *)Instance;
  Instance = (CommonUI_o *)System_Int32__ToString_39547236((int)data + 1032, (System_String_o *)StringLiteral_989/*"00"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_12;
  v7 = (Il2CppObject *)Instance;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString_39547236(
                         (int32_t)&DispWaveCount,
                         (System_String_o *)StringLiteral_989/*"00"*/,
                         0LL);
  v9 = System_String__Format_44897472(v6, v7, v8, 0LL);
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2550/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_12;
  v11 = (System_String_o *)Instance;
  v12 = (Il2CppObject *)System_Int32__ToString_39547236((int)v10 + 1032, (System_String_o *)StringLiteral_989/*"00"*/, 0LL);
  v13 = System_String__Format(v11, v12, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL),
        v14 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2552/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL),
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2549/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL),
        v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo),
        CommonConfirmDialog_ClickDelegate___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__62_0__,
          0LL),
        !v14) )
  {
LABEL_12:
    sub_B7769C(Instance, v4);
  }
  CommonUI__OpenConfirmDecideDialog(v14, v15, v9, v13, v16, v17, 26, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_o **p_waveSelectDialog; // x20
  UnityEngine_Object_o *waveSelectDialog; // x21
  __int64 v5; // x1
  int64_t Object; // x0
  int32_t v7; // w20
  int32_t Phase; // w21
  int32_t EventId; // w24
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x22
  UserEventDeckEntity_o *v11; // x22
  QuestRestrictionInfo_o *v12; // x23
  int32_t v13; // w20
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v15; // x21
  int32_t v16; // w24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v17; // x25
  WaveBattleSelectWaveDialog_o *v18; // x20
  System_Action_int__o *v19; // x21
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *v21; // x20
  System_Action_o *v22; // x21
  __int64 v23; // x0

  if ( (byte_4387701 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_0__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_2__);
    sub_B775C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestRestrictionInfo_TypeInfo);
    byte_4387701 = 1;
  }
  p_waveSelectDialog = &this->fields.waveSelectDialog;
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(waveSelectDialog, 0LL, 0LL) )
  {
    Object = (int64_t)BaseMonoBehaviour__createObject(
                        (BaseMonoBehaviour_o *)this,
                        this->fields.waveSelectDialogPrefab,
                        this->fields.retireWindowRoot,
                        0LL,
                        0LL);
    if ( !Object )
      goto LABEL_30;
    *p_waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)Object,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_B77560(&this->fields.waveSelectDialog);
    Object = (int64_t)*p_waveSelectDialog;
    if ( !*p_waveSelectDialog )
      goto LABEL_30;
    WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)Object, 0LL);
  }
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_30;
  Object = BattleData__getQuestId((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_30;
  v7 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_30;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v7, 0LL);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_30;
  Object = (int64_t)UserEventDeckMaster__getDeckList(Master_WarQuestSelectionMaster, Object, EventId, v7, Phase, 0LL);
  if ( !Object )
    goto LABEL_30;
  if ( !*(_DWORD *)(Object + 24) )
  {
    v23 = sub_B776C8(Object);
    sub_B77668(v23, 0LL);
  }
  v11 = *(UserEventDeckEntity_o **)(Object + 32);
  v12 = (QuestRestrictionInfo_o *)sub_B77694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34440512(v12, EventId, v7, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_30;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_30;
  v13 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v15 = this->fields.waveSelectDialog;
  v16 = DispWaveCount;
  v17 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_B77694(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_0__,
    0LL);
  if ( !v15 )
    goto LABEL_30;
  WaveBattleSelectWaveDialog__SetDialog(v15, v11, v12, v13, v16, 1, v17, 0LL);
  v18 = this->fields.waveSelectDialog;
  v19 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__,
    (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
  if ( !v18
    || (WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v18, v19, 0LL), (data = this->fields.data) == 0LL)
    || (Object = (int64_t)this->fields.waveSelectDialog) == 0
    || (WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
          (WaveBattleSelectWaveDialog_o *)Object,
          data->fields.wavecount,
          0LL),
        v21 = this->fields.waveSelectDialog,
        v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_2__,
          0LL),
        !v21) )
  {
LABEL_30:
    sub_B7769C(Object, v5);
  }
  WaveBattleSelectWaveDialog__Open_21901420(v21, v22, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcSelectWaveRestart(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4387703 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__63_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4387703 = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__63_0__, 0LL);
  if ( !Instance )
    sub_B7769C(v5, v6);
  CommonUI__CloseTripleButtonDlg(Instance, v4, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_43876FB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43876FB = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  waveRestartWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !waveRestartWindow )
    goto LABEL_13;
  ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    0LL,
    waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0LL, 0LL) )
  {
    waveRestartWindow = (BattleWindowComponent_o *)this->fields.interruptionWindow;
    if ( !waveRestartWindow )
      goto LABEL_13;
    if ( BattleWindowComponent__isOpen(waveRestartWindow, 0LL) )
    {
      waveRestartWindow = (BattleWindowComponent_o *)this->fields.interruptionWindow;
      if ( waveRestartWindow )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
          waveRestartWindow,
          0LL,
          waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
        return;
      }
LABEL_13:
      sub_B7769C(waveRestartWindow, v3);
    }
  }
}


void __fastcall BattleMenuWindowComponent__SetCancelInterruptionEvent(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_43876FE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    sub_B775C4(&StringLiteral_3032/*"CANCEL_INTERRUPTION"*/);
    byte_43876FE = 1;
  }
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3032/*"CANCEL_INTERRUPTION"*/;
  sub_B77560(&this->fields.cancelInterruptionEvent);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CancelInterruption_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438770D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438770D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CloseWaveRestartWindow_b__54_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387708 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_4387708 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x0
  __int64 *v7; // x8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438770E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_1__);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_2__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438770E = 1;
  }
  if ( isDecide )
  {
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v7 = &Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_1__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v7 = &Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_2__;
  }
  v8 = v6;
  System_Action___ctor(v6, (Il2CppObject *)this, *v7, 0LL);
  if ( !Instance )
    sub_B7769C(v9, v10);
  CommonUI__CloseConfirmDialog_18056328(Instance, v8, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438770F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_4702/*"DECIDE_INTERRUPTION"*/);
    byte_438770F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4702/*"DECIDE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4387710 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4387710 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387709 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3032/*"CANCEL_INTERRUPTION"*/);
    byte_4387709 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3032/*"CANCEL_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438770A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3172/*"CLICK_CURRENT_WAVE_RESTART"*/);
    byte_438770A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3172/*"CLICK_CURRENT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438770B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3196/*"CLICK_SELECT_WAVE_RESTART"*/);
    byte_438770B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3196/*"CLICK_SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438770C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438770C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__53_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387705 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4703/*"DECIDE_WAVE_RESTART"*/);
    byte_4387705 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4703/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__53_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387706 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3035/*"CANCEL_WAVE_RESTART"*/);
    byte_4387706 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3035/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__53_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387707 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_4387707 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BattleMenuWindowComponent___c__DisplayClass62_0_o *v5; // x21
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4387715 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_BattleMenuWindowComponent___c__DisplayClass62_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_B775C4(&BattleMenuWindowComponent___c__DisplayClass62_0_TypeInfo);
    byte_4387715 = 1;
  }
  v5 = (BattleMenuWindowComponent___c__DisplayClass62_0_o *)sub_B77694(BattleMenuWindowComponent___c__DisplayClass62_0_TypeInfo);
  BattleMenuWindowComponent___c__DisplayClass62_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.__4__this = this;
  sub_B77560(&v5->fields.__4__this);
  v5->fields.isDecide = isDecide;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleMenuWindowComponent___c__DisplayClass62_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_18056328(Instance, v9, 0LL);
  if ( v5->fields.isDecide )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0LL);
        return;
      }
LABEL_13:
      sub_B7769C(v6, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v4; // x19
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_4387711 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_3__);
    sub_B775C4(&StringLiteral_3033/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattleMenuWindowComponent_o *)sub_B775C4(&StringLiteral_3183/*"CLICK_INTERRUPTION"*/);
    byte_4387711 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v4->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3033/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_B77560(&v4->fields.cancelInterruptionEvent);
    this = (BattleMenuWindowComponent_o *)v4->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3183/*"CLICK_INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_B7769C(this, isDecide);
  }
  waveSelectDialog = v4->fields.waveSelectDialog;
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_3__, 0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_21901880(waveSelectDialog, v7, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_1(
        BattleMenuWindowComponent_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v8; // x1
  struct BattleData_o *data; // x8

  if ( (byte_4387713 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__);
    sub_B775C4(&StringLiteral_3212/*"CLICK_WAVE_BANNER"*/);
    byte_4387713 = 1;
  }
  v5 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC();
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_B7769C(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3212/*"CLICK_WAVE_BANNER"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387714 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_4387714 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4387712 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3031/*"CANCEL"*/);
    byte_4387712 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_9;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_B77560(&this->fields.waveSelectDialog);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_9:
    sub_B7769C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_3031/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___ProcSelectWaveRestart_b__63_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4387716 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_4387716 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_43876F6 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43876F6 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_B7769C(setVolumeWindowMask, method);
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

  if ( (byte_43876EF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_43876EF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_43876F7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_43876F7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_43876F1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_43876F1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_43876F3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_43876F3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_43876F5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_43876F5 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387704 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20432/*"itemlist_win/Scroll Bar/close"*/);
    byte_4387704 = 1;
  }
  return (System_String_o *)StringLiteral_20432/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_43876EE & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_endCloseCkRetire__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43876EE = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_B7769C(v5, v6);
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

  if ( (byte_43876F2 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_endOpenItemListWindow__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_3031/*"CANCEL"*/);
    byte_43876F2 = 1;
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
    v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
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
    sub_B7769C(data, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3031/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *data; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_43876F0 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_endOpenCkRetire__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_3031/*"CANCEL"*/);
    byte_43876F0 = 1;
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
      PlayMakerFSM__SendEvent(data, (System_String_o *)StringLiteral_3031/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B7769C(data, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
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

  if ( (byte_43876F4 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43876F4 = 1;
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
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_10:
    sub_B7769C(setVolumeWindowMask, method);
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


void __fastcall BattleMenuWindowComponent___c__DisplayClass62_0___ctor(
        BattleMenuWindowComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent___c__DisplayClass62_0___OpenWaveSelectConfirmDialog_b__1(
        BattleMenuWindowComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct BattleMenuWindowComponent_o *_4__this; // x9
  System_String_o **v6; // x8

  if ( (byte_438A856 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_3031/*"CANCEL"*/);
    sub_B775C4(&StringLiteral_3195/*"CLICK_SELECT_WAVE_DECIDE"*/);
    byte_438A856 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
         _4__this = this->fields.__4__this,
         this->fields.isDecide)
      ? (v6 = (System_String_o **)&StringLiteral_3195/*"CLICK_SELECT_WAVE_DECIDE"*/)
      : (v6 = (System_String_o **)&StringLiteral_3031/*"CANCEL"*/),
        !_4__this || (Instance = (CommonUI_o *)_4__this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, *v6, 0LL);
}