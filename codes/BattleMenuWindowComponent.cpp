void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_329EFC0;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_329EFD0;
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_329EFE0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_329EFF0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E5049 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent__CancelInterruption_b__57_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E5049 = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__57_0__,
    0LL);
  if ( !interruptionWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))interruptionWindow->klass->vtable._12_Close.method)(
    interruptionWindow,
    v9,
    interruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CheckCanOpenWaveRestartOrInterruption(
        BattleMenuWindowComponent_o *this,
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
  BattleData_o *data; // x0
  struct System_String_o *Empty; // x20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_42E5044 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9874/*"OPEN_WAVE_RESTART_WINDOW"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9862/*"OPEN_INTERRUPTION_WINDOW"*/, v14, v15, v16);
    byte_42E5044 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( data->fields.turnCount > 1 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( BattleData__IsContinueWaveRestart(data, 0LL) )
    {
      method = (const MethodInfo *)StringLiteral_9874/*"OPEN_WAVE_RESTART_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_17;
      if ( BattleData__IsInterruptionQuest(data, 0LL) )
        method = (const MethodInfo *)StringLiteral_9862/*"OPEN_INTERRUPTION_WINDOW"*/;
      else
        method = (const MethodInfo *)Empty;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_16;
LABEL_17:
    sub_B5D69C(data, method);
  }
  v19 = Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__ + 75) & 2) != 0 )
    v19 = (_QWORD *)sub_B5D5CC();
  v20 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v19, v19[3]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_17;
  method = (const MethodInfo *)StringLiteral_2976/*"CANCEL"*/;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *interruptionWindow; // x20
  __int64 v6; // x1
  WaveBattleSelectWaveDialog_o *v7; // x0
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_42E504C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E504C = 1;
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
    v7 = (WaveBattleSelectWaveDialog_o *)this->fields.interruptionWindow;
    if ( !v7 )
      goto LABEL_16;
    ((void (__fastcall *)(WaveBattleSelectWaveDialog_o *, _QWORD, void *))v7->klass[1]._1.parent)(
      v7,
      0LL,
      v7->klass[1]._1.generic_class);
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v7 = this->fields.waveSelectDialog;
    if ( v7 )
    {
      WaveBattleSelectWaveDialog__Close(v7, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v7, v6);
  }
}


void __fastcall BattleMenuWindowComponent__CloseWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E5046 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__54_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E5046 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__54_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    v9,
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UISprite_o *classChartSp; // x20
  __int64 v27; // x1
  AssetData_o *data; // x0

  if ( (byte_42E5038 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AtlasManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19699/*"img_classchart"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17361/*"buttontxt_save"*/, v23, v24, v25);
    byte_42E5038 = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_19699/*"img_classchart"*/, 0LL);
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
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              data,
                              (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0LL);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_17361/*"buttontxt_save"*/, 0LL);
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
    sub_B5D69C(data, v27);
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
  BattleWindowComponent_o *checkRetireWindow; // x0
  struct BattleWindowInterruptionComponent_o **p_interruptionWindow; // x21
  UnityEngine_Object_o *interruptionWindow; // x22
  UIWidget_o *Component_srcLineSprite; // x21
  int v34; // s0
  bool v38; // w1
  UnityEngine_Object_o *v39; // x21
  UIWidget_o *v40; // x21
  int v41; // s0
  UnityEngine_Transform_o *transform; // x21
  UIWidget_o *itemListBtnSpr; // x21
  int v47; // s0
  UnityEngine_Transform_o *v51; // x21
  UIWidget_o *v52; // x21
  int v53; // s0
  UIWidget_o *v57; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v59; // x22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Object_o *v64; // x23
  struct BattleData_o *v65; // x8
  UIWidget_o *waveRestartButtonLabel; // x21
  float v67; // s0
  float v68; // s1
  float v69; // s2
  float v70; // s3
  UILabel_o *waveRestartExplanationLabel; // x21
  struct BattleData_o *v72; // x8
  UnityEngine_Color_o color; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v77; // 0:x0.8
  UnityEngine_Color32_o v78; // 0:x0.8
  UnityEngine_Color32_o v79; // 0:x0.8
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E5039 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___,
      (_DWORD)call,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3125/*"CLICK_INTERRUPTION_MENU"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_359/*"#606060"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2508/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v27, v28, v29);
    byte_42E5039 = 1;
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
                                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      sub_B5D560(&this->fields.interruptionWindow);
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
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_112;
    UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v34, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_112;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_112;
    v38 = 0;
LABEL_55:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v38, 0LL);
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
    v52 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)checkRetireWindow,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_white(0LL);
    if ( !v52 )
      goto LABEL_112;
    UIWidget__set_color(v52, *(UnityEngine_Color_o *)&v53, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_112;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_112;
    v38 = 1;
    goto LABEL_55;
  }
  p_c = (UnityEngine_Color32_o)&c;
  UnityEngine_Color32___ctor(p_c, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  v39 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)checkRetireWindow,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v39 )
      goto LABEL_112;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v39, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  v40 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)checkRetireWindow,
                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
  {
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
    if ( !v40 )
      goto LABEL_112;
    UIWidget__set_color(v40, *(UnityEngine_Color_o *)&v41, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_112;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v77 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v82 = UnityEngine_Color32__op_Implicit_41570788(v77, 0LL);
  CommonFunction__SetColorAllChild(transform, 0, v82, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_112;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    v78 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    itemListBtnSpr = (UIWidget_o *)this->fields.itemListBtnSpr;
    *(UnityEngine_Color_o *)&v47 = UnityEngine_Color32__op_Implicit_41570788(v78, 0LL);
    if ( !itemListBtnSpr )
      goto LABEL_112;
    UIWidget__set_color(itemListBtnSpr, *(UnityEngine_Color_o *)&v47, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_112;
    v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v79 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    v83 = UnityEngine_Color32__op_Implicit_41570788(v79, 0LL);
    CommonFunction__SetColorAllChild(v51, 0, v83, 0LL);
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
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v57 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v57, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v80.fields.x = 260.0;
            v80.fields.y = 80.0;
            v80.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v80, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_359/*"#606060"*/, &color, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v59 = (UIWidget_o *)checkRetireWindow;
                  if ( data->fields.turnCount >= 2 )
                  {
                    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
                    if ( !v59 )
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
                  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&r, 0LL);
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
                          v64 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)checkRetireWindow,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           v64,
                                                                           0LL,
                                                                           0LL);
                          if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                          {
                            if ( !v64 )
                              goto LABEL_112;
                            v64[1].monitor = (void *)StringLiteral_3125/*"CLICK_INTERRUPTION_MENU"*/;
                            sub_B5D560(&v64[1].monitor);
                          }
                          UIWidget__set_width(v57, 160, 0LL);
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
                          UIWidget__set_width(v59, 160, 0LL);
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
                        v65 = this->fields.data;
                        if ( !v65 )
                          goto LABEL_112;
                        waveRestartButtonLabel = (UIWidget_o *)this->fields.waveRestartButtonLabel;
                        if ( v65->fields.turnCount >= 2 )
                        {
                          *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_white(0LL);
                          if ( !waveRestartButtonLabel )
                            goto LABEL_112;
                        }
                        else
                        {
                          v67 = color.fields.r;
                          v68 = color.fields.g;
                          v69 = color.fields.b;
                          v70 = color.fields.a;
                          if ( !waveRestartButtonLabel )
                            goto LABEL_112;
                        }
                        UIWidget__set_color(waveRestartButtonLabel, *(UnityEngine_Color_o *)&v67, 0LL);
                        waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_2508/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                            v72 = this->fields.data;
                            if ( v72 )
                            {
                              if ( checkRetireWindow )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)checkRetireWindow,
                                  v72->fields.turnCount < 2,
                                  0LL);
                                checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                if ( checkRetireWindow )
                                {
                                  v81.fields.x = 144.0;
                                  v81.fields.y = -32.0;
                                  v81.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                    v81,
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
    sub_B5D69C(checkRetireWindow, call);
  }
LABEL_111:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionConfirmWindow(
        BattleMenuWindowComponent_o *this,
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  CommonUI_o *Instance; // x0
  __int64 v32; // x1
  CommonUI_o *v33; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  System_String_o *v36; // x23
  System_String_o *v37; // x24
  CommonConfirmDialog_ClickDelegate_o *v38; // x25

  if ( (byte_42E504B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_0__, v5, v6, v7);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2492/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2490/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2489/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, v26, v27, v28);
    byte_42E504B = 1;
  }
  v29 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 75) & 2) != 0 )
    v29 = (_QWORD *)sub_B5D5CC();
  v30 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v29, v29[3]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL);
  v33 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2490/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2492/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v38 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v38,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_0__,
    0LL);
  if ( !v33 )
LABEL_11:
    sub_B5D69C(Instance, v32);
  CommonUI__OpenConfirmDecideDialog(v33, v34, v35, v36, v37, v38, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionWindow(
        BattleMenuWindowComponent_o *this,
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
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  System_Action_o *v26; // x21
  System_Action_o *v27; // x22
  System_Action_o *v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  struct BattleWindowInterruptionComponent_o *v31; // x20
  BattleWindowComponent_EndCall_o *v32; // x21

  if ( (byte_42E5048 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__, v5, v6, v7);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_0__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_1__, v11, v12, v13);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_2__, v14, v15, v16);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_3__, v17, v18, v19);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v20, v21, v22);
    byte_42E5048 = 1;
  }
  v23 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 75) & 2) != 0 )
    v23 = (_QWORD *)sub_B5D5CC();
  v24 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v23, v23[3]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
  interruptionWindow = this->fields.interruptionWindow;
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_0__,
    0LL);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_1__,
    0LL);
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_2__,
    0LL);
  if ( !interruptionWindow
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(interruptionWindow, v26, v27, v28, 0LL, 1, 0LL),
        v31 = this->fields.interruptionWindow,
        v32 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v32,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__56_3__,
          0LL),
        !v31) )
  {
    sub_B5D69C(v29, v30);
  }
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v31->klass->vtable._10_Open.method)(
    v31,
    v32,
    v31->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
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
  BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  System_Action_o *v36; // x21
  System_Action_o *v37; // x22
  System_String_o *v38; // x23
  System_String_o *v39; // x24
  System_String_o *v40; // x25
  System_String_o *v41; // x0
  __int64 v42; // x1
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  struct BattleWindowContinueWaveRestartComponent_o *v45; // x20
  BattleWindowComponent_EndCall_o *v46; // x21

  if ( (byte_42E5045 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__, v5, v6, v7);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_0__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_1__, v11, v12, v13);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_2__, v14, v15, v16);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3453/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3455/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_3452/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3456/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v32, v33, v34);
    byte_42E5045 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_0__,
    0LL);
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_1__,
    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3456/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3455/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3452/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_11;
  BattleWindowContinueWaveRestartComponent__SetWindow_23956200(waveRestartWindow, v36, v37, v38, v39, v40, v41, 0LL);
  v43 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 75) & 2) != 0 )
    v43 = (_QWORD *)sub_B5D5CC();
  v44 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v43, v43[3]);
  OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
  v45 = this->fields.waveRestartWindow;
  v46 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v46,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__53_2__,
    0LL);
  if ( !v45 )
LABEL_11:
    sub_B5D69C(v41, v42);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v45->klass->vtable._10_Open.method)(
    v45,
    v46,
    v45->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
        BattleMenuWindowComponent_o *this,
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  CommonUI_o *Instance; // x0
  __int64 v30; // x1
  struct BattleData_o *data; // x8
  System_String_o *v32; // x20
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x20
  struct BattleData_o *v36; // x8
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  System_String_o *v39; // x21
  CommonUI_o *v40; // x22
  System_String_o *v41; // x23
  System_String_o *v42; // x24
  CommonConfirmDialog_ClickDelegate_o *v43; // x25
  int32_t DispWaveCount; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E504E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__62_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2498/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2497/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2496/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2499/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v26, v27, v28);
    byte_42E504E = 1;
  }
  DispWaveCount = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  v32 = (System_String_o *)Instance;
  Instance = (CommonUI_o *)System_Int32__ToString_39741776((int)data + 1008, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_12;
  v33 = (Il2CppObject *)Instance;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v34 = (Il2CppObject *)System_Int32__ToString_39741776(
                          (int32_t)&DispWaveCount,
                          (System_String_o *)StringLiteral_982/*"00"*/,
                          0LL);
  v35 = System_String__Format_44573324(v32, v33, v34, 0LL);
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2497/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
  v36 = this->fields.data;
  if ( !v36 )
    goto LABEL_12;
  v37 = (System_String_o *)Instance;
  v38 = (Il2CppObject *)System_Int32__ToString_39741776((int)v36 + 1008, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  v39 = System_String__Format(v37, v38, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL),
        v40 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2499/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL),
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2496/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL),
        v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo),
        CommonConfirmDialog_ClickDelegate___ctor(
          v43,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__62_0__,
          0LL),
        !v40) )
  {
LABEL_12:
    sub_B5D69C(Instance, v30);
  }
  CommonUI__OpenConfirmDecideDialog(v40, v41, v35, v39, v42, v43, 26, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectWindow(
        BattleMenuWindowComponent_o *this,
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
  struct WaveBattleSelectWaveDialog_o **p_waveSelectDialog; // x20
  UnityEngine_Object_o *waveSelectDialog; // x21
  __int64 v46; // x1
  int64_t Object; // x0
  int32_t v48; // w20
  int32_t Phase; // w21
  int32_t EventId; // w24
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x22
  UserEventDeckEntity_o *v52; // x22
  QuestRestrictionInfo_o *v53; // x23
  int32_t v54; // w20
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v56; // x21
  int32_t v57; // w24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v58; // x25
  WaveBattleSelectWaveDialog_o *v59; // x20
  System_Action_int__o *v60; // x21
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *v62; // x20
  System_Action_o *v63; // x21
  __int64 v64; // x0

  if ( (byte_42E504D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_0__, v11, v12, v13);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__, v14, v15, v16);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_2__, v17, v18, v19);
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDeckMaster___, v26, v27, v28);
    sub_B5D5C4(&DataManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&QuestRestrictionInfo_TypeInfo, v41, v42, v43);
    byte_42E504D = 1;
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
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_B5D560(&this->fields.waveSelectDialog);
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
  v48 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_30;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v48, 0LL);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_30;
  Object = (int64_t)UserEventDeckMaster__getDeckList(Master_WarQuestSelectionMaster, Object, EventId, v48, Phase, 0LL);
  if ( !Object )
    goto LABEL_30;
  if ( !*(_DWORD *)(Object + 24) )
  {
    v64 = sub_B5D6C8(Object);
    sub_B5D668(v64, 0LL);
  }
  v52 = *(UserEventDeckEntity_o **)(Object + 32);
  v53 = (QuestRestrictionInfo_o *)sub_B5D694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34244212(v53, EventId, v48, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_30;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_30;
  v54 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v56 = this->fields.waveSelectDialog;
  v57 = DispWaveCount;
  v58 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_B5D694(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v58,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_0__,
    0LL);
  if ( !v56 )
    goto LABEL_30;
  WaveBattleSelectWaveDialog__SetDialog(v56, v52, v53, v54, v57, 1, v58, 0LL);
  v59 = this->fields.waveSelectDialog;
  v60 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v60,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  if ( !v59
    || (WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v59, v60, 0LL), (data = this->fields.data) == 0LL)
    || (Object = (int64_t)this->fields.waveSelectDialog) == 0
    || (WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
          (WaveBattleSelectWaveDialog_o *)Object,
          data->fields.wavecount,
          0LL),
        v62 = this->fields.waveSelectDialog,
        v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v63,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_2__,
          0LL),
        !v62) )
  {
LABEL_30:
    sub_B5D69C(Object, v46);
  }
  WaveBattleSelectWaveDialog__Open_22707384(v62, v63, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcSelectWaveRestart(
        BattleMenuWindowComponent_o *this,
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
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E504F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__63_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E504F = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__63_0__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseTripleButtonDlg(Instance, v12, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_42E5047 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5047 = 1;
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
      sub_B5D69C(waveRestartWindow, v5);
    }
  }
}


void __fastcall BattleMenuWindowComponent__SetCancelInterruptionEvent(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E504A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2977/*"CANCEL_INTERRUPTION"*/, v5, v6, v7);
    byte_42E504A = 1;
  }
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_2977/*"CANCEL_INTERRUPTION"*/;
  sub_B5D560(&this->fields.cancelInterruptionEvent);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CancelInterruption_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5059 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5059 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CloseWaveRestartWindow_b__54_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5054 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5054 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
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
  CommonUI_o *Instance; // x20
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  System_Action_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42E505A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_1__, v6, v7, v8);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_2__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42E505A = 1;
  }
  if ( isDecide )
  {
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_1__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__59_2__;
  }
  v18 = v16;
  System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
  if ( !Instance )
    sub_B5D69C(v19, v20);
  CommonUI__CloseConfirmDialog_18202348(Instance, v18, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E505B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4640/*"DECIDE_INTERRUPTION"*/, v5, v6, v7);
    byte_42E505B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4640/*"DECIDE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E505C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E505C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5055 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2977/*"CANCEL_INTERRUPTION"*/, (_DWORD)method, v2, v3);
    byte_42E5055 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2977/*"CANCEL_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5056 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3113/*"CLICK_CURRENT_WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E5056 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3113/*"CLICK_CURRENT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5057 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3137/*"CLICK_SELECT_WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E5057 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3137/*"CLICK_SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__56_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5058 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5058 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__53_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5051 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4641/*"DECIDE_WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E5051 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4641/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__53_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5052 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2979/*"CANCEL_WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E5052 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2979/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__53_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5053 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5053 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleMenuWindowComponent___c__DisplayClass62_0_o *v18; // x21
  WaveBattleSelectWaveDialog_o *v19; // x0
  __int64 v20; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v22; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_42E5061 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_BattleMenuWindowComponent___c__DisplayClass62_0__OpenWaveSelectConfirmDialog_b__1__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&BattleMenuWindowComponent___c__DisplayClass62_0_TypeInfo, v15, v16, v17);
    byte_42E5061 = 1;
  }
  v18 = (BattleMenuWindowComponent___c__DisplayClass62_0_o *)sub_B5D694(BattleMenuWindowComponent___c__DisplayClass62_0_TypeInfo);
  BattleMenuWindowComponent___c__DisplayClass62_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  v18->fields.__4__this = this;
  sub_B5D560(&v18->fields.__4__this);
  v18->fields.isDecide = isDecide;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v18,
    Method_BattleMenuWindowComponent___c__DisplayClass62_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_18202348(Instance, v22, 0LL);
  if ( v18->fields.isDecide )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v19 = this->fields.waveSelectDialog;
      if ( v19 )
      {
        WaveBattleSelectWaveDialog__Close(v19, 0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(v19, v20);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleMenuWindowComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v17; // x21

  v5 = this;
  if ( (byte_42E505D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_3__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2978/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/, v9, v10, v11);
    this = (BattleMenuWindowComponent_o *)sub_B5D5C4(&StringLiteral_3124/*"CLICK_INTERRUPTION"*/, v12, v13, v14);
    byte_42E505D = 1;
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v5->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_2978/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_B5D560(&v5->fields.cancelInterruptionEvent);
    this = (BattleMenuWindowComponent_o *)v5->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3124/*"CLICK_INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(this, isDecide);
  }
  waveSelectDialog = v5->fields.waveSelectDialog;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v5, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_3__, 0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_22707844(waveSelectDialog, v17, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_1(
        BattleMenuWindowComponent_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v12; // x1
  struct BattleData_o *data; // x8

  if ( (byte_42E505F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__, wave, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3153/*"CLICK_WAVE_BANNER"*/, v6, v7, v8);
    byte_42E505F = 1;
  }
  v9 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__61_1__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B5D5CC();
  v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_B5D69C(myFsm, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3153/*"CLICK_WAVE_BANNER"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5060 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5060 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__61_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42E505E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v5, v6, v7);
    byte_42E505E = 1;
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
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_B5D560(&this->fields.waveSelectDialog);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_9:
    sub_B5D69C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___ProcSelectWaveRestart_b__63_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5062 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5062 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E5042 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E5042 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_B5D69C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._12_Close.method)(
    setVolumeWindow,
    v10,
    setVolumeWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__endCloseCkRetire(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E503B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E503B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E5043 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5043 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E503D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E503D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E503F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E503F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_42E5041 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E5041 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5050 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20277/*"itemlist_win/Scroll Bar/close"*/, (_DWORD)method, v2, v3);
    byte_42E5050 = 1;
  }
  return (System_String_o *)StringLiteral_20277/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E503A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_endCloseCkRetire__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E503A = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._12_Close.method)(
    checkRetireWindow,
    v9,
    checkRetireWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__modeItemListWindow(
        BattleMenuWindowComponent_o *this,
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
  BattleData_o *data; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_42E503E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_endOpenItemListWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v11, v12, v13);
    byte_42E503E = 1;
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
    v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v16, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(data, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
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
  PlayMakerFSM_o *data; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_42E503C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_endOpenCkRetire__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v11, v12, v13);
    byte_42E503C = 1;
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
      PlayMakerFSM__SendEvent(data, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(data, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_15;
  BattleRetireWindowComponent__Open(checkRetireWindow, v16, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
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
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v13; // x21

  if ( (byte_42E5040 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E5040 = 1;
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
        v13 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_10:
    sub_B5D69C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._10_Open.method)(
    setVolumeWindow,
    v13,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  struct BattleMenuWindowComponent_o *_4__this; // x9
  System_String_o **v14; // x8

  if ( (byte_42E7CB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3136/*"CLICK_SELECT_WAVE_DECIDE"*/, v8, v9, v10);
    byte_42E7CB7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
         _4__this = this->fields.__4__this,
         this->fields.isDecide)
      ? (v14 = (System_String_o **)&StringLiteral_3136/*"CLICK_SELECT_WAVE_DECIDE"*/)
      : (v14 = (System_String_o **)&StringLiteral_2976/*"CANCEL"*/),
        !_4__this || (Instance = (CommonUI_o *)_4__this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, *v14, 0LL);
}