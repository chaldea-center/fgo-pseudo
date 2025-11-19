void BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_CED7E0;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_CED7F0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_CED1B0;
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_CEC720;
  *(_QWORD *)&this->fields.waveRestartButtonLabelScaleInInterruptionQuest.fields.y = _D0;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleMenuWindowComponent__Awake(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleMenuWindowComponent__CancelInterruption(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB97EB & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB97EB = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__,
    0);
  if ( !interruptionWindow )
    sub_1C6BC60(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))interruptionWindow->klass->vtable._12_Close.methodPtr)(
    interruptionWindow,
    v4,
    interruptionWindow->klass->vtable._12_Close.method);
}


void BattleMenuWindowComponent__CheckCanOpenWaveRestartOrInterruption(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_String_o *Empty; // x20

  if ( (byte_4CB97E6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_3271/*"CANCEL"*/);
    sub_1C6BA08(&StringLiteral_9651/*"OPEN_WAVE_RESTART_WINDOW"*/);
    sub_1C6BA08(&StringLiteral_9639/*"OPEN_INTERRUPTION_WINDOW"*/);
    byte_4CB97E6 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  if ( data->fields.turnCount > 1 )
  {
LABEL_13:
    Empty = string_TypeInfo->static_fields->Empty;
    if ( BattleData__IsInterruptionQuest(data, 0) )
    {
      method = (const MethodInfo *)StringLiteral_9639/*"OPEN_INTERRUPTION_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      if ( BattleData__IsContinueWaveRestart(data, 0) )
        method = (const MethodInfo *)StringLiteral_9651/*"OPEN_WAVE_RESTART_WINDOW"*/;
      else
        method = (const MethodInfo *)Empty;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_20;
LABEL_21:
    sub_1C6BC60(data, method);
  }
  if ( BattleData__IsInterruptionQuest(data, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_21;
    if ( BattleData__getDispWaveCount(data, 0) > 1 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      goto LABEL_13;
    }
  }
  v4 = Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_21;
  method = (const MethodInfo *)StringLiteral_3271/*"CANCEL"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)method, 0);
}


void BattleMenuWindowComponent__Close(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleMenuWindowComponent__CloseInterruptionWindowGroup(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *interruptionWindow; // x20
  __int64 v4; // x1
  WaveBattleSelectWaveDialog_o *v5; // x0
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4CB97EE & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB97EE = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0, 0);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0, 0) )
  {
    v5 = (WaveBattleSelectWaveDialog_o *)this->fields.interruptionWindow;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(WaveBattleSelectWaveDialog_o *, _QWORD, Il2CppClass *))v5->klass[1]._1.declaringType)(
      v5,
      0,
      v5->klass[1]._1.parent);
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
  {
    v5 = this->fields.waveSelectDialog;
    if ( v5 )
    {
      WaveBattleSelectWaveDialog__Close(v5, 0);
      return;
    }
LABEL_14:
    sub_1C6BC60(v5, v4);
  }
}


void BattleMenuWindowComponent__CloseWaveRestartWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB97E8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB97E8 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__,
    0);
  if ( !waveRestartWindow )
    sub_1C6BC60(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))waveRestartWindow->klass->vtable._12_Close.methodPtr)(
    waveRestartWindow,
    v4,
    waveRestartWindow->klass->vtable._12_Close.method);
}


void BattleMenuWindowComponent__CompClose(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0);
}


void BattleMenuWindowComponent__CompOpen(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *data; // x0

  if ( (byte_4CB97DB & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4CB97DB = 1;
  }
  data = (UnityEngine_GameObject_o *)this->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0) )
  {
    data = this->fields.RetireButton;
    if ( data )
    {
      data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                           data,
                                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( data )
      {
        UIWidget__ResizeCollider((UIWidget_o *)data, 0);
        data = this->fields.waveRestartButton;
        if ( data )
        {
          data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               data,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            UIWidget__ResizeCollider((UIWidget_o *)data, 0);
            data = this->fields.interruptionButton;
            if ( data )
            {
              data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   data,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( data )
              {
                UIWidget__ResizeCollider((UIWidget_o *)data, 0);
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_1C6BC60(data, method);
  }
LABEL_12:
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UISprite_o *classChartSp; // x20
  __int64 v4; // x1
  AssetData_o *data; // x0

  if ( (byte_4CB97D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C6BA08(&StringLiteral_3079/*"Battle/Common"*/);
    sub_1C6BA08(&StringLiteral_3099/*"BattleAssetUIAtlas"*/);
    sub_1C6BA08(&StringLiteral_20411/*"img_classchart"*/);
    sub_1C6BA08(&StringLiteral_17684/*"buttontxt_save"*/);
    byte_4CB97D9 = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_20411/*"img_classchart"*/, 0);
  data = (AssetData_o *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3079/*"Battle/Common"*/, 0);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_object__51495936(
                              data,
                              (System_String_o *)StringLiteral_3099/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_17684/*"buttontxt_save"*/, 0);
            data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
            if ( data )
            {
              ((void (__fastcall *)(AssetData_o *, void *))data->klass[2]._1.parent)(
                data,
                data->klass[2]._1.generic_class);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C6BC60(data, v4);
  }
}


void BattleMenuWindowComponent__Open(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BattleMenuWindowComponent__modeCkRetire(this, (const MethodInfo *)call);
  BattleMenuWindowComponent__OpenImpl(this, call, v5);
}


// local variable allocation has failed, the output may be wrong!
void BattleMenuWindowComponent__OpenImpl(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent_o *checkRetireWindow; // x0
  struct BattleWindowInterruptionComponent_o **p_interruptionWindow; // x21
  UnityEngine_Object_o *interruptionWindow; // x22
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool v11; // w1
  struct UnityEngine_GameObject_o *RetireButton; // x8
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x0
  UIWidget_o *v17; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v19; // x22
  int turnCount; // w23
  int32_t wavecount; // w25
  int v22; // w25
  float a; // s8
  unsigned __int64 v24; // kr00_8
  float b; // s2 OVERLAPPED
  _BOOL4 v26; // w23
  float v27; // s3
  UnityEngine_Color_o v28; // kr10_16
  UILabel_o *waveRestartExplanationLabel; // x24
  Il2CppObject *v30; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  UnityEngine_Color_o v34; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB97DA & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3456/*"CLICK_INTERRUPTION_MENU"*/);
    sub_1C6BA08(&StringLiteral_410/*"#606060"*/);
    sub_1C6BA08(&StringLiteral_2795/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    byte_4CB97DA = 1;
  }
  *(_QWORD *)&v34.fields.r = 0;
  *(_QWORD *)&v34.fields.b = 0;
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_114;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_114;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))checkRetireWindow->klass->vtable._9_setClose.methodPtr)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._9_setClose.method);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_114;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_114;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))checkRetireWindow->klass->vtable._9_setClose.methodPtr)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._9_setClose.method);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_114;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_114;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))checkRetireWindow->klass->vtable._9_setClose.methodPtr)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._9_setClose.method);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)checkRetireWindow, 0) )
  {
    p_interruptionWindow = &this->fields.interruptionWindow;
    interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(interruptionWindow, 0, 0) )
    {
      checkRetireWindow = (BattleWindowComponent_o *)BaseMonoBehaviour__createObject(
                                                       (BaseMonoBehaviour_o *)this,
                                                       this->fields.interruptionWindowPrefab,
                                                       this->fields.retireWindowRoot,
                                                       0,
                                                       0);
      if ( !checkRetireWindow )
        goto LABEL_114;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)checkRetireWindow,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      *p_interruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.interruptionWindow, (int32_t)Component_object, v9, v10);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_114;
      BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_114;
      ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))checkRetireWindow->klass->vtable._9_setClose.methodPtr)(
        checkRetireWindow,
        checkRetireWindow->klass->vtable._9_setClose.method);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_114;
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)checkRetireWindow,
                                                       0);
      if ( !checkRetireWindow )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0);
    }
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  if ( BattleData__isTutorial((BattleData_o *)checkRetireWindow, 0) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v37.fields.r = 0.5;
    v37.fields.g = 0.5;
    v37.fields.b = 0.5;
    v37.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v37, 0);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v11 = 0;
LABEL_52:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v11, 0);
    goto LABEL_53;
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  checkRetireWindow = (BattleWindowComponent_o *)BattleData__IsWarBoard((BattleData_o *)checkRetireWindow, 0);
  RetireButton = this->fields.RetireButton;
  if ( ((unsigned __int8)checkRetireWindow & 1) == 0 )
  {
    if ( !RetireButton )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     this->fields.RetireButton,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v42.fields.r = 1.0;
    v42.fields.g = 1.0;
    v42.fields.b = 1.0;
    v42.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v42, 0);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v11 = 1;
    goto LABEL_52;
  }
  if ( !RetireButton )
    goto LABEL_114;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          this->fields.RetireButton,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_114;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v13, 1, 0);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_114;
  v14 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)checkRetireWindow,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_114;
    v38.fields.r = 0.29804;
    v38.fields.a = 1.0;
    v38.fields.g = 0.29804;
    v38.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)v14, v38, 0);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_114;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0);
  v39.fields.a = 1.0;
  v39.fields.r = 0.29804;
  v39.fields.g = 0.29804;
  v39.fields.b = 0.29804;
  CommonFunction__SetColorAllChild(transform, 0, v39, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_114;
    v40.fields.a = 1.0;
    v40.fields.r = 0.29804;
    v40.fields.g = 0.29804;
    v40.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v40, 0);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_114;
    v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0);
    v41.fields.a = 1.0;
    v41.fields.r = 0.29804;
    v41.fields.g = 0.29804;
    v41.fields.b = 0.29804;
    CommonFunction__SetColorAllChild(v16, 0, v41, 0);
  }
LABEL_53:
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
  if ( !checkRetireWindow )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
  if ( !checkRetireWindow )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  if ( BattleData__IsNeedSaveWaveRestartDataQuest((BattleData_o *)checkRetireWindow, 0) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( checkRetireWindow )
    {
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v17 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._6_get_closeBtnPath.method)(
          checkRetireWindow,
          1,
          checkRetireWindow->klass[1].vtable._7_setInitialPos.methodPtr);
        UIWidget__set_width(v17, 190, 0);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0);
          if ( checkRetireWindow )
          {
            v35.fields.z = 0.0;
            v35.fields.x = 260.0;
            v35.fields.y = 80.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v35, 0);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_410/*"#606060"*/, &v34, 0);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v19 = (UIWidget_o *)checkRetireWindow;
                  wavecount = data->fields.wavecount;
                  turnCount = data->fields.turnCount;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v22 = wavecount + 1;
                  if ( !byte_4CB32CD )
                  {
                    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
                    byte_4CB32CD = 1;
                  }
                  checkRetireWindow = (BattleWindowComponent_o *)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    checkRetireWindow = (BattleWindowComponent_o *)TerminalPramsManager_TypeInfo;
                  }
                  a = 1.0;
                  LODWORD(checkRetireWindow[2].fields.m_CancellationTokenSource[9].klass) = v22;
                  if ( turnCount > 1 )
                    goto LABEL_76;
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
                  if ( !checkRetireWindow )
                    goto LABEL_114;
                  checkRetireWindow = (BattleWindowComponent_o *)BattleData__IsInterruptionQuest(
                                                                   (BattleData_o *)checkRetireWindow,
                                                                   0);
                  if ( ((unsigned __int8)checkRetireWindow & 1) == 0 )
                    goto LABEL_75;
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
                  if ( !checkRetireWindow )
                    goto LABEL_114;
                  checkRetireWindow = (BattleWindowComponent_o *)BattleData__getDispWaveCount(
                                                                   (BattleData_o *)checkRetireWindow,
                                                                   0);
                  if ( (int)checkRetireWindow > 1 )
                  {
LABEL_76:
                    v26 = 0;
                    b = 1.0;
                    v24 = __PAIR64__(1.0, 1.0);
                  }
                  else
                  {
LABEL_75:
                    v24 = *(_QWORD *)&v34.fields.r;
                    a = v34.fields.a;
                    b = v34.fields.b;
                    v26 = 1;
                  }
                  if ( v19 )
                  {
                    v27 = a;
                    UIWidget__set_color(v19, *(UnityEngine_Color_o *)(&b - 2), 0);
                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                    *(_QWORD *)&v28.fields.r = __PAIR64__(1.0, 1.0);
                    *(_QWORD *)&v28.fields.b = __PAIR64__(1.0, 1.0);
                    if ( v26 )
                      v28 = v34;
                    if ( checkRetireWindow )
                    {
                      UIWidget__set_color((UIWidget_o *)checkRetireWindow, v28, 0);
                      waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2795/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
                                                                       0);
                      if ( waveRestartExplanationLabel )
                      {
                        UILabel__set_text(waveRestartExplanationLabel, (System_String_o *)checkRetireWindow, 0);
                        checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartExplanationLabel;
                        if ( checkRetireWindow )
                        {
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)checkRetireWindow,
                                                                           0);
                          if ( checkRetireWindow )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, v26, 0);
                            checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                            if ( checkRetireWindow )
                            {
                              checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                               (UnityEngine_Component_o *)checkRetireWindow,
                                                                               0);
                              if ( checkRetireWindow )
                              {
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)checkRetireWindow,
                                  this->fields.classChartPosInWaveRestartQuest,
                                  0);
                                checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
                                if ( checkRetireWindow )
                                {
                                  if ( !BattleData__IsInterruptionQuest((BattleData_o *)checkRetireWindow, 0) )
                                    goto LABEL_111;
                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
                                  if ( checkRetireWindow )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)checkRetireWindow,
                                      1,
                                      0);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                                    if ( checkRetireWindow )
                                    {
                                      v30 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                                       (UnityEngine_Object_o *)v30,
                                                                                       0,
                                                                                       0);
                                      if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                                      {
                                        if ( !v30 )
                                          goto LABEL_114;
                                        v33 = StringLiteral_3456/*"CLICK_INTERRUPTION_MENU"*/;
                                        v30[2].monitor = (void *)StringLiteral_3456/*"CLICK_INTERRUPTION_MENU"*/;
                                        sub_1C6B9AC((CGThumbnailListItem_o *)&v30[2].monitor, v33, v31, v32);
                                      }
                                      UIWidget__set_width(v17, 160, 0);
                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                                      if ( checkRetireWindow )
                                      {
                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                         (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                         0);
                                        if ( checkRetireWindow )
                                        {
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)checkRetireWindow,
                                            this->fields.retireButtonPosInInterruptionQuest,
                                            0);
                                          UIWidget__set_width(v19, 160, 0);
                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                                          if ( checkRetireWindow )
                                          {
                                            checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                             (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                             0);
                                            if ( checkRetireWindow )
                                            {
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                this->fields.waveRestartButtonPosInInterruptionQuest,
                                                0);
                                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                              if ( checkRetireWindow )
                                              {
                                                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)checkRetireWindow,
                                                                                                 0);
                                                if ( checkRetireWindow )
                                                {
                                                  UnityEngine_Transform__set_localPosition(
                                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                                    this->fields.classChartPosInInterruptionQuest,
                                                    0);
                                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
                                                  if ( checkRetireWindow )
                                                  {
                                                    UIWidget__set_width((UIWidget_o *)checkRetireWindow, 950, 0);
                                                    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     0);
                                                    if ( checkRetireWindow )
                                                    {
                                                      UnityEngine_GameObject__SetActive(
                                                        (UnityEngine_GameObject_o *)checkRetireWindow,
                                                        1,
                                                        0);
                                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
                                                      if ( checkRetireWindow )
                                                      {
                                                        UIWidget__ResizeCollider((UIWidget_o *)checkRetireWindow, 0);
                                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                                                        if ( checkRetireWindow )
                                                        {
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)checkRetireWindow,
                                                            0,
                                                            0);
                                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                                                          if ( checkRetireWindow )
                                                          {
                                                            checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0);
                                                            if ( checkRetireWindow )
                                                            {
                                                              UnityEngine_Transform__set_localScale(
                                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                                this->fields.waveRestartButtonLabelScaleInInterruptionQuest,
                                                                0);
                                                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                                              if ( checkRetireWindow )
                                                              {
                                                                UnityEngine_Transform__set_localPosition(
                                                                  (UnityEngine_Transform_o *)checkRetireWindow,
                                                                  this->fields.closeButtonPosInInterruptionQuest,
                                                                  0);
LABEL_111:
                                                                checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                                                if ( checkRetireWindow )
                                                                {
                                                                  v36.fields.z = 0.0;
                                                                  v36.fields.x = 210.0;
                                                                  v36.fields.y = -45.0;
                                                                  UnityEngine_Transform__set_localPosition(
                                                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                                                    v36,
                                                                    0);
                                                                  goto LABEL_113;
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
    }
LABEL_114:
    sub_1C6BC60(checkRetireWindow, call);
  }
LABEL_113:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleMenuWindowComponent__OpenInterruptionConfirmWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  CommonConfirmDialog_ClickDelegate_o *v12; // x25

  if ( (byte_4CB97ED & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_2777/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_2775/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_2774/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_4CB97ED = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2775/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2774/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2777/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__,
    0);
  if ( !v7 )
LABEL_10:
    sub_1C6BC60(Instance, v6);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v7, v8, v9, v10, v11, v12, 23, 280, 13.0, 22, 1, 0);
}


void BattleMenuWindowComponent__OpenInterruptionWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  System_Action_o *v6; // x21
  System_Action_o *v7; // x22
  System_Action_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleData_o *data; // x8
  struct BattleWindowInterruptionComponent_o *v12; // x20
  BattleWindowComponent_EndCall_o *v13; // x21

  if ( (byte_4CB97EA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB97EA = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  interruptionWindow = this->fields.interruptionWindow;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__, 0);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__, 0);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__, 0);
  data = this->fields.data;
  if ( !data
    || !interruptionWindow
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(
          interruptionWindow,
          v6,
          v7,
          v8,
          0,
          1,
          data->fields.turnCount > 1,
          0),
        v12 = this->fields.interruptionWindow,
        v13 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__,
          0),
        !v12) )
  {
    sub_1C6BC60(v9, v10);
  }
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v12->klass->vtable._10_Open.methodPtr)(
    v12,
    v13,
    v12->klass->vtable._10_Open.method);
}


void BattleMenuWindowComponent__OpenWaveRestartWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CB97E7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3819/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_3821/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_3818/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_3822/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/);
    byte_4CB97E7 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__, 0);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3818/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0);
  if ( !waveRestartWindow )
    goto LABEL_10;
  BattleWindowContinueWaveRestartComponent__SetWindow_47905296(waveRestartWindow, v4, v5, v6, v7, v8, v9, 0);
  v11 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
  v13 = this->fields.waveRestartWindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__,
    0);
  if ( !v13 )
LABEL_10:
    sub_1C6BC60(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v13->klass->vtable._10_Open.methodPtr)(
    v13,
    v14,
    v13->klass->vtable._10_Open.method);
}


void BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w21
  int32_t DispWaveCount; // w20
  struct BattleData_o *v6; // x8
  System_String_o *v7; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  struct BattleData_o *v10; // x8
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  int32_t v15; // w22
  int32_t v16; // w21
  System_String_o *v17; // x0
  struct BattleData_o *v18; // x8
  System_String_o *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  int32_t v22; // w27
  int32_t v23; // w22
  Il2CppObject *Instance; // x23
  System_String_o *v25; // x24
  System_String_o *v26; // x25
  CommonConfirmDialog_ClickDelegate_o *v27; // x26
  int32_t decideTxtSize; // w8
  int32_t v29; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB97F0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2782/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_2781/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_2783/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/);
    sub_1C6BA08(&StringLiteral_2786/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_1122/*"00"*/);
    sub_1C6BA08(&StringLiteral_2785/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/);
    byte_4CB97F0 = 1;
  }
  v29 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2785/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0);
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_28;
    v7 = (System_String_o *)data;
    v8 = (Il2CppObject *)System_Int32__ToString_65475288((int)v6 + 1136, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v9 = System_String__Format(v7, v8, 0);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v10 = this->fields.data;
    if ( !v10 )
      goto LABEL_28;
    v11 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_65475288((int)v10 + 1136, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    if ( !this->fields.data )
      goto LABEL_28;
    v12 = (Il2CppObject *)data;
    v29 = BattleData__getDispWaveCount(this->fields.data, 0);
    v13 = (Il2CppObject *)System_Int32__ToString_65475288((int32_t)&v29, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v9 = System_String__Format_64008100(v11, v12, v13, 0);
  }
  v14 = v9;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v15 = data->fields.selectedInterruptionWave;
  v16 = BattleData__getDispWaveCount(data, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v15 == v16 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2783/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2782/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v18 = this->fields.data;
    if ( !v18 )
      goto LABEL_28;
    v19 = (System_String_o *)data;
    v20 = (Il2CppObject *)System_Int32__ToString_65475288((int)v18 + 1136, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v17 = System_String__Format(v19, v20, 0);
  }
  v21 = v17;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v22 = data->fields.selectedInterruptionWave;
  v23 = BattleData__getDispWaveCount(data, 0);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2786/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2781/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__,
    0);
  if ( !Instance )
LABEL_28:
    sub_1C6BC60(data, method);
  if ( v22 == v23 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)Instance, v25, v14, v21, v26, v27, 26, 270, 13.0, decideTxtSize, 1, 0);
}


void BattleMenuWindowComponent__OpenWaveSelectWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *waveSelectDialog; // x21
  struct WaveBattleSelectWaveDialog_o **p_waveSelectDialog; // x20
  __int64 v5; // x1
  void *Object; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w21
  int32_t Phase; // w23
  int32_t EventId; // w25
  Il2CppObject *Master_object; // x22
  UserEventDeckEntity_o *v14; // x22
  QuestRestrictionInfo_o *v15; // x24
  struct BattleData_o *data; // x8
  int32_t v17; // w21
  _BOOL4 v18; // w27
  int v19; // w23
  struct BattleData_o *v20; // x8
  WaveBattleSelectWaveDialog_o *v21; // x25
  WaveBattleSelectWaveDialog_CloseDelegate_o *v22; // x26
  WaveBattleSelectWaveDialog_o *v23; // x21
  System_Action_int__o *v24; // x22
  WaveBattleSelectWaveDialog_o *v25; // x20
  int32_t DispWaveCount; // w21
  WaveBattleSelectWaveDialog_o *v27; // x20
  System_Action_o *v28; // x21

  if ( (byte_4CB97EF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__);
    sub_1C6BA08(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestRestrictionInfo_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&StringLiteral_2772/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/);
    byte_4CB97EF = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_waveSelectDialog = &this->fields.waveSelectDialog;
  if ( UnityEngine_Object__op_Equality(waveSelectDialog, 0, 0) )
  {
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.waveSelectDialogPrefab,
               this->fields.retireWindowRoot,
               0,
               0);
    if ( !Object )
      goto LABEL_40;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    *p_waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.waveSelectDialog, (int32_t)Component_object, v8, v9);
    Object = *p_waveSelectDialog;
    if ( !*p_waveSelectDialog )
      goto LABEL_40;
    WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)Object, 0);
  }
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__getQuestId((BattleData_o *)Object, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v10 = (int)Object;
  Phase = BattleData__getPhase(this->fields.data, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_40;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v10, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Object = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_40;
  Object = UserEventDeckMaster__getDeckList(
             (UserEventDeckMaster_o *)Master_object,
             *(_QWORD *)(*((_QWORD *)Object + 23) + 64LL),
             EventId,
             v10,
             Phase,
             0,
             0);
  if ( !Object )
    goto LABEL_40;
  if ( !*((_DWORD *)Object + 6) )
    sub_1C6BC68(Object);
  v14 = (UserEventDeckEntity_o *)*((_QWORD *)Object + 4);
  v15 = (QuestRestrictionInfo_o *)sub_1C6BC54(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_43646264(v15, EventId, v10, Phase, 0);
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__GetMaxWaveCount((BattleData_o *)Object, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_40;
  v17 = (int)Object;
  v18 = data->fields.turnCount < 2;
  Object = (void *)BattleData__getDispWaveCount(this->fields.data, 0);
  if ( !v15 )
    goto LABEL_40;
  v19 = (int)Object;
  if ( QuestRestrictionInfo__IsWaveSetupSwitchParty(v15, 0) )
  {
    Object = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v20 = this->fields.data;
    if ( !v20 || !Object )
      goto LABEL_40;
    PartyOrganizationUtility__SetTempWaveInfoList((PartyOrganizationUtility_o *)Object, v20->fields.waveInfoList, 0);
  }
  v21 = this->fields.waveSelectDialog;
  v22 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1C6BC54(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__,
    0);
  if ( !v21 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__SetDialog(v21, v14, v15, v17, v19 - v18, 1, v22, 0);
  v23 = this->fields.waveSelectDialog;
  v24 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__,
    0);
  if ( !v23 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v23, v24, 0);
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  if ( *((int *)Object + 50) > 1 )
    goto LABEL_38;
  v25 = *p_waveSelectDialog;
  DispWaveCount = BattleData__getDispWaveCount((BattleData_o *)Object, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_2772/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, 0);
  if ( !v25 )
LABEL_40:
    sub_1C6BC60(Object, v5);
  WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(v25, DispWaveCount, (System_String_o *)Object, 0);
LABEL_38:
  v27 = this->fields.waveSelectDialog;
  v28 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, 0);
  if ( !v27 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__Open_34970844(v27, v28, 0);
}


void BattleMenuWindowComponent__ProcSelectWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB97F1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB97F1 = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__, 0);
  if ( !Instance )
    sub_1C6BC60(v5, v6);
  CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v4, 0);
}


void BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_4CB97E9 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB97E9 = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0, 0);
  waveRestartWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !waveRestartWindow )
    goto LABEL_12;
  ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, const MethodInfo *))waveRestartWindow->klass->vtable._12_Close.methodPtr)(
    waveRestartWindow,
    0,
    waveRestartWindow->klass->vtable._12_Close.method);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0, 0) )
  {
    waveRestartWindow = (BattleWindowComponent_o *)this->fields.interruptionWindow;
    if ( !waveRestartWindow )
      goto LABEL_12;
    if ( BattleWindowComponent__isOpen(waveRestartWindow, 0) )
    {
      waveRestartWindow = (BattleWindowComponent_o *)this->fields.interruptionWindow;
      if ( waveRestartWindow )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, const MethodInfo *))waveRestartWindow->klass->vtable._12_Close.methodPtr)(
          waveRestartWindow,
          0,
          waveRestartWindow->klass->vtable._12_Close.method);
        return;
      }
LABEL_12:
      sub_1C6BC60(waveRestartWindow, v3);
    }
  }
}


void BattleMenuWindowComponent__SetCancelInterruptionEvent(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97EC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    sub_1C6BA08(&StringLiteral_3272/*"CANCEL_INTERRUPTION"*/);
    byte_4CB97EC = 1;
  }
  v5 = StringLiteral_3272/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3272/*"CANCEL_INTERRUPTION"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cancelInterruptionEvent, v5, v2, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___CancelInterruption_b__60_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97FB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97FB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___CloseWaveRestartWindow_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97F6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97F6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x0
  intptr_t v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CB97FC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB97FC = 1;
  }
  if ( isDecide )
  {
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    v7 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    v7 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__;
  }
  v8 = v6;
  System_Action___ctor(v6, (Il2CppObject *)this, v7, 0);
  if ( !Instance )
    sub_1C6BC60(v9, v10);
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v8, 0);
}


void BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB97FD & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_4961/*"DECIDE_INTERRUPTION"*/);
    byte_4CB97FD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
  {
    sub_1C6BC60(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4961/*"DECIDE_INTERRUPTION"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB97FE & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB97FE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
  {
    sub_1C6BC60(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97F7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3272/*"CANCEL_INTERRUPTION"*/);
    byte_4CB97F7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3272/*"CANCEL_INTERRUPTION"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v2; // x19
  struct BattleData_o *data; // x8

  v2 = this;
  if ( (byte_4CB97F8 & 1) == 0 )
  {
    this = (BattleMenuWindowComponent_o *)sub_1C6BA08(&StringLiteral_3440/*"CLICK_CURRENT_WAVE_RESTART"*/);
    byte_4CB97F8 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( data->fields.turnCount < 2 )
    return;
  this = (BattleMenuWindowComponent_o *)v2->fields.myFsm;
  if ( !this )
LABEL_7:
    sub_1C6BC60(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3440/*"CLICK_CURRENT_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97F9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3468/*"CLICK_SELECT_WAVE_RESTART"*/);
    byte_4CB97F9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3468/*"CLICK_SELECT_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97FA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97FA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97F3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4962/*"DECIDE_WAVE_RESTART"*/);
    byte_4CB97F3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4962/*"DECIDE_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97F4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3276/*"CANCEL_WAVE_RESTART"*/);
    byte_4CB97F4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3276/*"CANCEL_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97F5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97F5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__65_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4CB9803 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_1C6BA08(&BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
    byte_4CB9803 = 1;
  }
  v5 = sub_1C6BC54(BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__,
    0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v11, 0);
  if ( *(_BYTE *)(v5 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0);
        return;
      }
LABEL_12:
      sub_1C6BC60(v6, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleMenuWindowComponent_o *v5; // x19
  struct BattleData_o *data; // x8
  int32_t v7; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v9; // x21

  v5 = this;
  if ( (byte_4CB97FF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__);
    sub_1C6BA08(&StringLiteral_3273/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattleMenuWindowComponent_o *)sub_1C6BA08(&StringLiteral_3455/*"CLICK_INTERRUPTION"*/);
    byte_4CB97FF = 1;
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v7 = StringLiteral_3273/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v5->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3273/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.cancelInterruptionEvent, v7, (int32_t)method, v3);
    this = (BattleMenuWindowComponent_o *)v5->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3455/*"CLICK_INTERRUPTION"*/, 0);
      return;
    }
LABEL_9:
    sub_1C6BC60(this, isDecide);
  }
  waveSelectDialog = v5->fields.waveSelectDialog;
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v5, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, 0);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_34966316(waveSelectDialog, v9, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_1(
        BattleMenuWindowComponent_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v8; // x1
  struct BattleData_o *data; // x8

  if ( (byte_4CB9801 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
    sub_1C6BA08(&StringLiteral_3488/*"CLICK_WAVE_BANNER"*/);
    byte_4CB9801 = 1;
  }
  v5 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0) )
    sub_1C6BC60(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3488/*"CLICK_WAVE_BANNER"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB9802 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB9802 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB9800 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3271/*"CANCEL"*/);
    byte_4CB9800 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
  this->fields.waveSelectDialog = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.waveSelectDialog, 0, v5, v6);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1C6BC60(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_3271/*"CANCEL"*/, 0);
}


void BattleMenuWindowComponent___ProcSelectWaveRestart_b__66_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB9804 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB9804 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__closeSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4CB97E4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB97E4 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0),
        setVolumeWindow = this->fields.setVolumeWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0),
        !setVolumeWindow) )
  {
    sub_1C6BC60(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))setVolumeWindow->klass->vtable._12_Close.methodPtr)(
    setVolumeWindow,
    v5,
    setVolumeWindow->klass->vtable._12_Close.method);
}


void BattleMenuWindowComponent__endCloseCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97DD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97DD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endCloseSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97E5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97E5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97DF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97DF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endOpenItemListWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB97E1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97E1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endOpenSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_4CB97E3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB97E3 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C6BC60(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


System_String_o *BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB97F2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21108/*"itemlist_win/Scroll Bar/close"*/);
    byte_4CB97F2 = 1;
  }
  return (System_String_o *)StringLiteral_21108/*"itemlist_win/Scroll Bar/close"*/;
}


void BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB97DC & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_endCloseCkRetire__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB97DC = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent_endCloseCkRetire__, 0);
  if ( !checkRetireWindow )
    sub_1C6BC60(v5, v6);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))checkRetireWindow->klass->vtable._12_Close.methodPtr)(
    checkRetireWindow,
    v4,
    checkRetireWindow->klass->vtable._12_Close.method);
}


void BattleMenuWindowComponent__modeItemListWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4CB97E0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_endOpenItemListWindow__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent_modeItemListWindow__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&StringLiteral_3271/*"CANCEL"*/);
    byte_4CB97E0 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( !BattleData__IsWarBoard(data, 0) )
    goto LABEL_7;
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( BattleData__ExistDropItem(data, 0) )
  {
LABEL_7:
    v4 = Method_BattleMenuWindowComponent_modeItemListWindow__;
    if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_modeItemListWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    itemListWindow = this->fields.itemListWindow;
    v7 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v7, v8);
      return;
    }
LABEL_15:
    sub_1C6BC60(data, method);
  }
  v9 = Method_BattleMenuWindowComponent_modeItemListWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_modeItemListWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3271/*"CANCEL"*/, 0);
}


void BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  bool IsWarBoard; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4CB97DE & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_endOpenCkRetire__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent_modeRetire__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&StringLiteral_3271/*"CANCEL"*/);
    byte_4CB97DE = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  IsWarBoard = BattleData__IsWarBoard(data, 0);
  v5 = Method_BattleMenuWindowComponent_modeRetire__;
  v6 = IsWarBoard;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeRetire__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_modeRetire__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3271/*"CANCEL"*/, 0);
      return;
    }
LABEL_11:
    sub_1C6BC60(data, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  checkRetireWindow = this->fields.checkRetireWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)this, Method_BattleMenuWindowComponent_endOpenCkRetire__, 0);
  if ( !checkRetireWindow )
    goto LABEL_11;
  BattleRetireWindowComponent__Open(checkRetireWindow, v9, 0);
}


void BattleMenuWindowComponent__modeSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4CB97E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__);
    sub_1C6BA08(&Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB97E2 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0);
  v4 = Method_BattleMenuWindowComponent_modeSetVolumeWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeSetVolumeWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C6BA20(Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl;
  if ( !setVolumeWindowMask
    || (SetVolumeControl__initSetVolume((SetVolumeControl_o *)setVolumeWindowMask, 0),
        setVolumeWindow = this->fields.setVolumeWindow,
        v7 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0),
        !setVolumeWindow) )
  {
LABEL_9:
    sub_1C6BC60(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))setVolumeWindow->klass->vtable._10_Open.methodPtr)(
    setVolumeWindow,
    v7,
    setVolumeWindow->klass->vtable._10_Open.method);
}


void BattleMenuWindowComponent__showConf(
        BattleMenuWindowComponent_o *this,
        BattleDropItem_o *drop,
        const MethodInfo *method)
{
  ;
}


void BattleMenuWindowComponent___c__DisplayClass65_0___ctor(
        BattleMenuWindowComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleMenuWindowComponent___c__DisplayClass65_0___OpenWaveSelectConfirmDialog_b__1(
        BattleMenuWindowComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct BattleMenuWindowComponent_o *_4__this; // x8
  System_String_o *v6; // x1

  if ( (byte_4CB9805 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_3271/*"CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3467/*"CLICK_SELECT_WAVE_DECIDE"*/);
    byte_4CB9805 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  if ( this->fields.isDecide )
    v6 = (System_String_o *)StringLiteral_3467/*"CLICK_SELECT_WAVE_DECIDE"*/;
  else
    v6 = (System_String_o *)StringLiteral_3271/*"CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v6, 0);
}