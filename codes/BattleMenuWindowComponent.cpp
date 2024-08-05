void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_BA4530;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_BA4540;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_BA3FF0;
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_BA35B0;
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
  __int64 v3; // x1
  struct BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A012DD & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__, method);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A012DD = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__,
    0LL);
  if ( !interruptionWindow )
    sub_1B64ACC(v6, v7);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))interruptionWindow->klass->vtable._12_Close.method)(
    interruptionWindow,
    v5,
    interruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CheckCanOpenWaveRestartOrInterruption(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct System_String_o *Empty; // x20

  if ( (byte_4A012D8 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__, method);
    sub_1B64870(&string_TypeInfo, v3);
    sub_1B64870(&StringLiteral_3374/*"CANCEL"*/, v4);
    sub_1B64870(&StringLiteral_9607/*"OPEN_WAVE_RESTART_WINDOW"*/, v5);
    sub_1B64870(&StringLiteral_9595/*"OPEN_INTERRUPTION_WINDOW"*/, v6);
    byte_4A012D8 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  if ( data->fields.turnCount > 1 )
  {
LABEL_13:
    Empty = string_TypeInfo->static_fields->Empty;
    if ( BattleData__IsContinueWaveRestart(data, 0LL) )
    {
      method = (const MethodInfo *)StringLiteral_9607/*"OPEN_WAVE_RESTART_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      if ( BattleData__IsInterruptionQuest(data, 0LL) )
        method = (const MethodInfo *)StringLiteral_9595/*"OPEN_INTERRUPTION_WINDOW"*/;
      else
        method = (const MethodInfo *)Empty;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_20;
LABEL_21:
    sub_1B64ACC(data, method);
  }
  if ( BattleData__IsInterruptionQuest(data, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_21;
    if ( BattleData__getDispWaveCount(data, 0LL) > 1 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      goto LABEL_13;
    }
  }
  v8 = Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B64854(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_21;
  method = (const MethodInfo *)StringLiteral_3374/*"CANCEL"*/;
LABEL_20:
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

  if ( (byte_4A012E0 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A012E0 = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0LL, 0LL) )
  {
    v5 = (WaveBattleSelectWaveDialog_o *)this->fields.interruptionWindow;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(WaveBattleSelectWaveDialog_o *, _QWORD, void *))v5->klass[1]._1.parent)(
      v5,
      0LL,
      v5->klass[1]._1.generic_class);
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v5 = this->fields.waveSelectDialog;
    if ( v5 )
    {
      WaveBattleSelectWaveDialog__Close(v5, 0LL);
      return;
    }
LABEL_14:
    sub_1B64ACC(v5, v4);
  }
}


void __fastcall BattleMenuWindowComponent__CloseWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A012DA & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__, method);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A012DA = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_1B64ACC(v6, v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    v5,
    waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CompClose(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__CompOpen(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *data; // x0

  if ( (byte_4A012CD & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    byte_4A012CD = 1;
  }
  data = (UnityEngine_GameObject_o *)this->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0LL) )
  {
    data = this->fields.RetireButton;
    if ( data )
    {
      data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                           data,
                                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( data )
      {
        UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
        data = this->fields.waveRestartButton;
        if ( data )
        {
          data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               data,
                                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
            data = this->fields.interruptionButton;
            if ( data )
            {
              data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   data,
                                                   (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1B64ACC(data, method);
  }
LABEL_12:
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *classChartSp; // x20
  __int64 v11; // x1
  AssetData_o *data; // x0

  if ( (byte_4A012CB & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, method);
    sub_1B64870(&AssetManager_TypeInfo, v3);
    sub_1B64870(&AtlasManager_TypeInfo, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1B64870(&StringLiteral_3188/*"Battle/Common"*/, v6);
    sub_1B64870(&StringLiteral_3206/*"BattleAssetUIAtlas"*/, v7);
    sub_1B64870(&StringLiteral_20198/*"img_classchart"*/, v8);
    sub_1B64870(&StringLiteral_17607/*"buttontxt_save"*/, v9);
    byte_4A012CB = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_20198/*"img_classchart"*/, 0LL);
  data = (AssetData_o *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0LL) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3188/*"Battle/Common"*/, 0LL);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_object__48356600(
                              data,
                              (System_String_o *)StringLiteral_3206/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0LL);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_17607/*"buttontxt_save"*/, 0LL);
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
LABEL_16:
    sub_1B64ACC(data, v11);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleWindowComponent_o *checkRetireWindow; // x0
  struct BattleWindowInterruptionComponent_o **p_interruptionWindow; // x21
  UnityEngine_Object_o *interruptionWindow; // x22
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  bool v19; // w1
  struct UnityEngine_GameObject_o *RetireButton; // x8
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v24; // x0
  UIWidget_o *v25; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v27; // x22
  float a; // s8
  float r; // s0
  float g; // s1
  float b; // s2
  _BOOL4 v32; // w23
  float v33; // s3
  float v34; // s3
  float v35; // s2
  float v36; // s1
  float v37; // s0
  UILabel_o *waveRestartExplanationLabel; // x24
  Il2CppObject *v39; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  int v43; // s0
  int v44; // s2
  int v45; // s1
  UnityEngine_Color_o v46; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A012CC & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___, call);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_Collider___, v5);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v6);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&StringLiteral_3528/*"CLICK_INTERRUPTION_MENU"*/, v10);
    sub_1B64870(&StringLiteral_443/*"#606060"*/, v11);
    sub_1B64870(&StringLiteral_2899/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v12);
    byte_4A012CC = 1;
  }
  *(_QWORD *)&v46.fields.r = 0LL;
  *(_QWORD *)&v46.fields.b = 0LL;
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_141;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_141;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_141;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = this->fields.setVolumeWindow;
  if ( !checkRetireWindow )
    goto LABEL_141;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_141;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !checkRetireWindow )
    goto LABEL_141;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
    checkRetireWindow,
    checkRetireWindow->klass->vtable._10_Open.methodPtr);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)checkRetireWindow, 0LL) )
  {
    p_interruptionWindow = &this->fields.interruptionWindow;
    interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(interruptionWindow, 0LL, 0LL) )
    {
      checkRetireWindow = (BattleWindowComponent_o *)BaseMonoBehaviour__createObject(
                                                       (BaseMonoBehaviour_o *)this,
                                                       this->fields.interruptionWindowPrefab,
                                                       this->fields.retireWindowRoot,
                                                       0LL,
                                                       0LL);
      if ( !checkRetireWindow )
        goto LABEL_141;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)checkRetireWindow,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      *p_interruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.interruptionWindow,
        (int32_t)Component_object,
        v17,
        v18);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_141;
      BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_141;
      ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._9_setClose.method)(
        checkRetireWindow,
        checkRetireWindow->klass->vtable._10_Open.methodPtr);
      checkRetireWindow = (BattleWindowComponent_o *)*p_interruptionWindow;
      if ( !*p_interruptionWindow )
        goto LABEL_141;
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)checkRetireWindow,
                                                       0LL);
      if ( !checkRetireWindow )
        goto LABEL_141;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
    }
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  if ( BattleData__isTutorial((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v61.fields.r = 0.5;
    v61.fields.g = 0.5;
    v61.fields.b = 0.5;
    v61.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v61, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v19 = 0;
LABEL_52:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v19, 0LL);
    goto LABEL_53;
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  checkRetireWindow = (BattleWindowComponent_o *)BattleData__IsWarBoard((BattleData_o *)checkRetireWindow, 0LL);
  RetireButton = this->fields.RetireButton;
  if ( ((unsigned __int8)checkRetireWindow & 1) == 0 )
  {
    if ( !RetireButton )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     this->fields.RetireButton,
                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v66.fields.r = 1.0;
    v66.fields.g = 1.0;
    v66.fields.b = 1.0;
    v66.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v66, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v19 = 1;
    goto LABEL_52;
  }
  if ( !RetireButton )
    goto LABEL_141;
  v21 = UnityEngine_GameObject__GetComponent_object_(
          this->fields.RetireButton,
          (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v21,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_141;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v21, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  v22 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)checkRetireWindow,
          (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v22,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_141;
    v62.fields.r = 0.29804;
    v62.fields.a = 1.0;
    v62.fields.g = 0.29804;
    v62.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)v22, v62, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v63.fields.a = 1.0;
  v63.fields.r = 0.29804;
  v63.fields.g = 0.29804;
  v63.fields.b = 0.29804;
  CommonFunction__SetColorAllChild(transform, 0, v63, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_141;
    v64.fields.a = 1.0;
    v64.fields.r = 0.29804;
    v64.fields.g = 0.29804;
    v64.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v64, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_141;
    v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v65.fields.a = 1.0;
    v65.fields.r = 0.29804;
    v65.fields.g = 0.29804;
    v65.fields.b = 0.29804;
    CommonFunction__SetColorAllChild(v24, 0, v65, 0LL);
  }
LABEL_53:
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 0, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  if ( BattleData__IsNeedSaveWaveRestartDataQuest((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( checkRetireWindow )
    {
      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v25 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v25, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v47.fields.z = 0.0;
            v47.fields.x = 260.0;
            v47.fields.y = 80.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v47, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_443/*"#606060"*/, &v46, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v27 = (UIWidget_o *)checkRetireWindow;
                  a = 1.0;
                  if ( data->fields.turnCount > 1 )
                    goto LABEL_69;
                  checkRetireWindow = (BattleWindowComponent_o *)BattleData__IsInterruptionQuest(this->fields.data, 0LL);
                  if ( ((unsigned __int8)checkRetireWindow & 1) == 0 )
                    goto LABEL_68;
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
                  if ( !checkRetireWindow )
                    goto LABEL_141;
                  checkRetireWindow = (BattleWindowComponent_o *)BattleData__getDispWaveCount(
                                                                   (BattleData_o *)checkRetireWindow,
                                                                   0LL);
                  if ( (int)checkRetireWindow > 1 )
                  {
LABEL_69:
                    v32 = 0;
                    b = 1.0;
                    g = 1.0;
                    r = 1.0;
                  }
                  else
                  {
LABEL_68:
                    g = v46.fields.g;
                    r = v46.fields.r;
                    b = v46.fields.b;
                    a = v46.fields.a;
                    v32 = 1;
                  }
                  if ( v27 )
                  {
                    v33 = a;
                    UIWidget__set_color(v27, *(UnityEngine_Color_o *)&r, 0LL);
                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                    v34 = 1.0;
                    v35 = 1.0;
                    v36 = 1.0;
                    v37 = 1.0;
                    if ( v32 )
                    {
                      v36 = v46.fields.g;
                      v37 = v46.fields.r;
                      v35 = v46.fields.b;
                      v34 = v46.fields.a;
                    }
                    if ( checkRetireWindow )
                    {
                      UIWidget__set_color((UIWidget_o *)checkRetireWindow, *(UnityEngine_Color_o *)&v37, 0LL);
                      waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2899/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                          if ( checkRetireWindow )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, v32, 0LL);
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
                                  if ( !BattleData__IsInterruptionQuest((BattleData_o *)checkRetireWindow, 0LL) )
                                  {
LABEL_104:
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                    if ( !checkRetireWindow )
                                      goto LABEL_141;
                                    v48.fields.z = 0.0;
                                    v48.fields.x = 210.0;
                                    v48.fields.y = -45.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v48,
                                      0LL);
                                    goto LABEL_106;
                                  }
                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
                                  if ( checkRetireWindow )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)checkRetireWindow,
                                      1,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                                    if ( checkRetireWindow )
                                    {
                                      v39 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                                       (UnityEngine_Object_o *)v39,
                                                                                       0LL,
                                                                                       0LL);
                                      if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                                      {
                                        if ( !v39 )
                                          goto LABEL_141;
                                        v42 = StringLiteral_3528/*"CLICK_INTERRUPTION_MENU"*/;
                                        v39[2].monitor = (void *)StringLiteral_3528/*"CLICK_INTERRUPTION_MENU"*/;
                                        sub_1B64814((ServantStatusBattleListViewItem_o *)&v39[2].monitor, v42, v40, v41);
                                      }
                                      UIWidget__set_width(v25, 160, 0LL);
                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                                      if ( checkRetireWindow )
                                      {
                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                         (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                         0LL);
                                        if ( checkRetireWindow )
                                        {
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)checkRetireWindow,
                                            this->fields.retireButtonPosInInterruptionQuest,
                                            0LL);
                                          UIWidget__set_width(v27, 160, 0LL);
                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                                          if ( checkRetireWindow )
                                          {
                                            checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                             (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                             0LL);
                                            if ( checkRetireWindow )
                                            {
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                this->fields.waveRestartButtonPosInInterruptionQuest,
                                                0LL);
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
                                                    this->fields.classChartPosInInterruptionQuest,
                                                    0LL);
                                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
                                                  if ( checkRetireWindow )
                                                  {
                                                    UIWidget__set_width((UIWidget_o *)checkRetireWindow, 950, 0LL);
                                                    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     0LL);
                                                    if ( checkRetireWindow )
                                                    {
                                                      UnityEngine_GameObject__SetActive(
                                                        (UnityEngine_GameObject_o *)checkRetireWindow,
                                                        1,
                                                        0LL);
                                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
                                                      if ( checkRetireWindow )
                                                      {
                                                        UIWidget__ResizeCollider((UIWidget_o *)checkRetireWindow, 0LL);
                                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                                                        if ( checkRetireWindow )
                                                        {
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)checkRetireWindow,
                                                            0,
                                                            0LL);
                                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                                                          if ( checkRetireWindow )
                                                          {
                                                            checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
                                                            if ( checkRetireWindow )
                                                            {
                                                              UnityEngine_Transform__set_localScale(
                                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                                this->fields.waveRestartButtonLabelScaleInInterruptionQuest,
                                                                0LL);
                                                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                                              if ( checkRetireWindow )
                                                              {
                                                                UnityEngine_Transform__set_localPosition(
                                                                  (UnityEngine_Transform_o *)checkRetireWindow,
                                                                  this->fields.closeButtonPosInInterruptionQuest,
                                                                  0LL);
                                                                goto LABEL_104;
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
LABEL_141:
    sub_1B64ACC(checkRetireWindow, call);
  }
LABEL_106:
  if ( !ConstantMaster__IsFLAG20240804(0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.windowBg;
    if ( checkRetireWindow )
    {
      UIWidget__set_height((UIWidget_o *)checkRetireWindow, 370, 0LL);
      checkRetireWindow = (BattleWindowComponent_o *)this->fields.titleSprite;
      if ( checkRetireWindow )
      {
        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)checkRetireWindow,
                                                         0LL);
        if ( checkRetireWindow )
        {
          v49.fields.x = 0.0;
          v49.fields.z = 0.0;
          v49.fields.y = 147.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v49, 0LL);
          checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
          if ( checkRetireWindow )
          {
            UIWidget__set_width((UIWidget_o *)checkRetireWindow, 342, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
            if ( checkRetireWindow )
            {
              UIWidget__set_height((UIWidget_o *)checkRetireWindow, 194, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.noticeLineSprite;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)checkRetireWindow,
                                                                 0LL);
                if ( checkRetireWindow )
                {
                  v50.fields.x = 0.0;
                  v50.fields.z = 0.0;
                  v50.fields.y = -96.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v50, 0LL);
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
                  if ( checkRetireWindow )
                  {
                    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)checkRetireWindow,
                                                                     0LL);
                    if ( checkRetireWindow )
                    {
                      v51.fields.z = 0.0;
                      v51.fields.x = -100.0;
                      v51.fields.y = -139.0;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v51, 0LL);
                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.volumeSettingsButton;
                      if ( checkRetireWindow )
                      {
                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                         0LL);
                        if ( checkRetireWindow )
                        {
                          v52.fields.z = 0.0;
                          v52.fields.x = 100.0;
                          v52.fields.y = -139.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            v52,
                            0LL);
                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
                          if ( checkRetireWindow )
                          {
                            checkRetireWindow = (BattleWindowComponent_o *)BattleData__IsNeedSaveWaveRestartDataQuest(
                                                                             (BattleData_o *)checkRetireWindow,
                                                                             0LL);
                            if ( this->fields.windowBg )
                            {
                              if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                              {
                                UIWidget__set_width((UIWidget_o *)this->fields.windowBg, 880, 0LL);
                                checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
                                if ( checkRetireWindow )
                                {
                                  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                   0LL);
                                  if ( checkRetireWindow )
                                  {
                                    v53.fields.x = -12.0;
                                    v53.fields.z = 0.0;
                                    v53.fields.y = 80.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v53,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
                                    if ( checkRetireWindow )
                                    {
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                       0LL);
                                      if ( checkRetireWindow )
                                      {
                                        v54.fields.z = 0.0;
                                        v54.fields.x = 159.0;
                                        v54.fields.y = 80.0;
                                        UnityEngine_Transform__set_localPosition(
                                          (UnityEngine_Transform_o *)checkRetireWindow,
                                          v54,
                                          0LL);
                                        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                                        if ( checkRetireWindow )
                                        {
                                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                           0LL);
                                          if ( checkRetireWindow )
                                          {
                                            v55.fields.z = 0.0;
                                            v55.fields.x = 330.0;
                                            v55.fields.y = 80.0;
                                            UnityEngine_Transform__set_localPosition(
                                              (UnityEngine_Transform_o *)checkRetireWindow,
                                              v55,
                                              0LL);
                                            checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                            if ( checkRetireWindow )
                                            {
                                              v56.fields.z = 0.0;
                                              v56.fields.x = 144.0;
                                              v56.fields.y = -32.0;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                v56,
                                                0LL);
                                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                              if ( checkRetireWindow )
                                              {
                                                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)checkRetireWindow,
                                                                                                 0LL);
                                                if ( checkRetireWindow )
                                                {
                                                  v57.fields.y = 15.0;
                                                  v57.fields.z = 0.0;
                                                  v57.fields.x = -262.0;
                                                  UnityEngine_Transform__set_localPosition(
                                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                                    v57,
                                                    0LL);
                                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                                  if ( checkRetireWindow )
                                                  {
                                                    v43 = 1137278976;
LABEL_139:
                                                    v44 = 0;
                                                    v45 = 1126039552;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                                      *(UnityEngine_Vector3_o *)&v43,
                                                      0LL);
                                                    goto LABEL_140;
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
                                UIWidget__set_width((UIWidget_o *)this->fields.windowBg, 800, 0LL);
                                checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                                if ( checkRetireWindow )
                                {
                                  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                   0LL);
                                  if ( checkRetireWindow )
                                  {
                                    v58.fields.z = 0.0;
                                    v58.fields.x = 188.0;
                                    v58.fields.y = 73.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v58,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                    if ( checkRetireWindow )
                                    {
                                      v59.fields.y = -23.0;
                                      v59.fields.z = 0.0;
                                      v59.fields.x = 174.0;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)checkRetireWindow,
                                        v59,
                                        0LL);
                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                      if ( checkRetireWindow )
                                      {
                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)checkRetireWindow,
                                                                                         0LL);
                                        if ( checkRetireWindow )
                                        {
                                          v60.fields.y = 21.0;
                                          v60.fields.z = 0.0;
                                          v60.fields.x = -182.0;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)checkRetireWindow,
                                            v60,
                                            0LL);
                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                          if ( checkRetireWindow )
                                          {
                                            v43 = 1136295936;
                                            goto LABEL_139;
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
    goto LABEL_141;
  }
LABEL_140:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionConfirmWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  CommonConfirmDialog_ClickDelegate_o *v20; // x25

  if ( (byte_4A012DF & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__, method);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__, v3);
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_1B64870(&LocalizationManager_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&StringLiteral_2881/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v7);
    sub_1B64870(&StringLiteral_2879/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, v8);
    sub_1B64870(&StringLiteral_3732/*"COMMON_CONFIRM_CANCEL"*/, v9);
    sub_1B64870(&StringLiteral_2878/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, v10);
    byte_4A012DF = 1;
  }
  v11 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B64854(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2878/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__,
    0LL);
  if ( !v15 )
LABEL_10:
    sub_1B64ACC(Instance, v14);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v15, v16, v17, v18, v19, v20, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  System_Action_o *v12; // x21
  System_Action_o *v13; // x22
  System_Action_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleData_o *data; // x8
  struct BattleWindowInterruptionComponent_o *v18; // x20
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_4A012DC & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__, v3);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__, v4);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__, v5);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__, v6);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__, v7);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v8);
    byte_4A012DC = 1;
  }
  v9 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B64854(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  interruptionWindow = this->fields.interruptionWindow;
  v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__,
    0LL);
  v13 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__,
    0LL);
  v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__,
    0LL);
  data = this->fields.data;
  if ( !data
    || !interruptionWindow
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(
          interruptionWindow,
          v12,
          v13,
          v14,
          0LL,
          1,
          data->fields.turnCount > 1,
          0LL),
        v18 = this->fields.interruptionWindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__,
          0LL),
        !v18) )
  {
    sub_1B64ACC(v15, v16);
  }
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
    v18,
    v19,
    v18->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
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
  BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  System_Action_o *v14; // x21
  System_Action_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  System_String_o *v18; // x25
  System_String_o *v19; // x0
  __int64 v20; // x1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  struct BattleWindowContinueWaveRestartComponent_o *v23; // x20
  BattleWindowComponent_EndCall_o *v24; // x21

  if ( (byte_4A012D9 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__, v3);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__, v4);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__, v5);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__, v6);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v7);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&StringLiteral_3861/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v9);
    sub_1B64870(&StringLiteral_3863/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v10);
    sub_1B64870(&StringLiteral_3860/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, v11);
    sub_1B64870(&StringLiteral_3864/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v12);
    byte_4A012D9 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__,
    0LL);
  v15 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__,
    0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3864/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3863/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_10;
  BattleWindowContinueWaveRestartComponent__SetWindow_43724512(waveRestartWindow, v14, v15, v16, v17, v18, v19, 0LL);
  v21 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
  v22 = (System_Reflection_MethodBase_o *)sub_1B64854(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  v23 = this->fields.waveRestartWindow;
  v24 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__,
    0LL);
  if ( !v23 )
LABEL_10:
    sub_1B64ACC(v19, v20);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v23->klass->vtable._10_Open.method)(
    v23,
    v24,
    v23->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
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
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w21
  int32_t DispWaveCount; // w20
  struct BattleData_o *v16; // x8
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  struct BattleData_o *v20; // x8
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  int32_t v25; // w22
  int32_t v26; // w21
  System_String_o *v27; // x0
  struct BattleData_o *v28; // x8
  System_String_o *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x21
  int32_t v32; // w27
  int32_t v33; // w22
  Il2CppObject *Instance; // x23
  System_String_o *v35; // x24
  System_String_o *v36; // x25
  CommonConfirmDialog_ClickDelegate_o *v37; // x26
  int32_t decideTxtSize; // w8
  int32_t v39; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A012E2 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__, method);
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&StringLiteral_2888/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v6);
    sub_1B64870(&StringLiteral_2886/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v7);
    sub_1B64870(&StringLiteral_2885/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v8);
    sub_1B64870(&StringLiteral_2887/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, v9);
    sub_1B64870(&StringLiteral_2890/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v10);
    sub_1B64870(&StringLiteral_1222/*"00"*/, v11);
    sub_1B64870(&StringLiteral_2889/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, v12);
    byte_4A012E2 = 1;
  }
  v39 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2889/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0LL);
    v16 = this->fields.data;
    if ( !v16 )
      goto LABEL_28;
    v17 = (System_String_o *)data;
    v18 = (Il2CppObject *)System_Int32__ToString_62188848((int)v16 + 1040, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v19 = System_String__Format(v17, v18, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v20 = this->fields.data;
    if ( !v20 )
      goto LABEL_28;
    v21 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_62188848((int)v20 + 1040, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    if ( !this->fields.data )
      goto LABEL_28;
    v22 = (Il2CppObject *)data;
    v39 = BattleData__getDispWaveCount(this->fields.data, 0LL);
    v23 = (Il2CppObject *)System_Int32__ToString_62188848((int32_t)&v39, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v19 = System_String__Format_61397948(v21, v22, v23, 0LL);
  }
  v24 = v19;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v25 = data->fields.selectedInterruptionWave;
  v26 = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v25 == v26 )
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2886/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_28;
    v29 = (System_String_o *)data;
    v30 = (Il2CppObject *)System_Int32__ToString_62188848((int)v28 + 1040, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v27 = System_String__Format(v29, v30, 0LL);
  }
  v31 = v27;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v32 = data->fields.selectedInterruptionWave;
  v33 = BattleData__getDispWaveCount(data, 0LL);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v37,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__,
    0LL);
  if ( !Instance )
LABEL_28:
    sub_1B64ACC(data, method);
  if ( v32 == v33 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)Instance,
    v35,
    v24,
    v31,
    v36,
    v37,
    26,
    280,
    13.0,
    decideTxtSize,
    1,
    0LL);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *waveSelectDialog; // x21
  struct WaveBattleSelectWaveDialog_o **p_waveSelectDialog; // x20
  __int64 v19; // x1
  int64_t Object; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w21
  int32_t Phase; // w22
  int32_t EventId; // w25
  Il2CppObject *Master_object; // x23
  UserEventDeckEntity_o *v28; // x23
  QuestRestrictionInfo_o *v29; // x24
  struct BattleData_o *data; // x8
  int turnCount; // w27
  int32_t v32; // w21
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v34; // x22
  int32_t v35; // w26
  WaveBattleSelectWaveDialog_CloseDelegate_o *v36; // x25
  WaveBattleSelectWaveDialog_o *v37; // x21
  System_Action_int__o *v38; // x22
  WaveBattleSelectWaveDialog_o *v39; // x20
  int32_t v40; // w21
  WaveBattleSelectWaveDialog_o *v41; // x20
  System_Action_o *v42; // x21

  if ( (byte_4A012E1 & 1) == 0 )
  {
    sub_1B64870(&System_Action_int__TypeInfo, method);
    sub_1B64870(&System_Action_TypeInfo, v3);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__, v4);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__, v5);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, v6);
    sub_1B64870(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v7);
    sub_1B64870(&Method_DataManager_GetMaster_QuestGroupMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMaster_UserEventDeckMaster___, v9);
    sub_1B64870(&DataManager_TypeInfo, v10);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v11);
    sub_1B64870(&LocalizationManager_TypeInfo, v12);
    sub_1B64870(&NetworkManager_TypeInfo, v13);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64870(&QuestRestrictionInfo_TypeInfo, v15);
    sub_1B64870(&StringLiteral_2876/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, v16);
    byte_4A012E1 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_waveSelectDialog = &this->fields.waveSelectDialog;
  if ( UnityEngine_Object__op_Equality(waveSelectDialog, 0LL, 0LL) )
  {
    Object = (int64_t)BaseMonoBehaviour__createObject(
                        (BaseMonoBehaviour_o *)this,
                        this->fields.waveSelectDialogPrefab,
                        this->fields.retireWindowRoot,
                        0LL,
                        0LL);
    if ( !Object )
      goto LABEL_31;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    *p_waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.waveSelectDialog,
      (int32_t)Component_object,
      v22,
      v23);
    Object = (int64_t)*p_waveSelectDialog;
    if ( !*p_waveSelectDialog )
      goto LABEL_31;
    WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)Object, 0LL);
  }
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  Object = BattleData__getQuestId((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_31;
  v24 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_31;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v24, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_31;
  Object = (int64_t)UserEventDeckMaster__getDeckList(
                      (UserEventDeckMaster_o *)Master_object,
                      Object,
                      EventId,
                      v24,
                      Phase,
                      0LL);
  if ( !Object )
    goto LABEL_31;
  if ( !*(_DWORD *)(Object + 24) )
    sub_1B64AD4(Object, v19);
  v28 = *(UserEventDeckEntity_o **)(Object + 32);
  v29 = (QuestRestrictionInfo_o *)sub_1B64ABC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_40086236(v29, EventId, v24, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  turnCount = data->fields.turnCount;
  v32 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v34 = this->fields.waveSelectDialog;
  v35 = DispWaveCount;
  v36 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1B64ABC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__,
    0LL);
  if ( !v34 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__SetDialog(v34, v28, v29, v32, v35 - (turnCount < 2), 1, v36, 0LL);
  v37 = this->fields.waveSelectDialog;
  v38 = (System_Action_int__o *)sub_1B64ABC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__,
    0LL);
  if ( !v37 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v37, v38, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  if ( *(int *)(Object + 200) > 1 )
    goto LABEL_29;
  v39 = *p_waveSelectDialog;
  v40 = BattleData__getDispWaveCount((BattleData_o *)Object, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2876/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, 0LL);
  if ( !v39 )
LABEL_31:
    sub_1B64ACC(Object, v19);
  WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(v39, v40, (System_String_o *)Object, 0LL);
LABEL_29:
  v41 = this->fields.waveSelectDialog;
  v42 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, 0LL);
  if ( !v41 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__Open_32129960(v41, v42, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcSelectWaveRestart(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A012E3 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A012E3 = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__, 0LL);
  if ( !Instance )
    sub_1B64ACC(v7, v8);
  CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_4A012DB & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A012DB = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  waveRestartWindow = (BattleWindowComponent_o *)this->fields.waveRestartWindow;
  if ( !waveRestartWindow )
    goto LABEL_12;
  ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    0LL,
    waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0LL, 0LL) )
  {
    waveRestartWindow = (BattleWindowComponent_o *)this->fields.interruptionWindow;
    if ( !waveRestartWindow )
      goto LABEL_12;
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
LABEL_12:
      sub_1B64ACC(waveRestartWindow, v3);
    }
  }
}


void __fastcall BattleMenuWindowComponent__SetCancelInterruptionEvent(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  __int64 v7; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012DE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    sub_1B64870(&StringLiteral_3375/*"CANCEL_INTERRUPTION"*/, v5);
    byte_4A012DE = 1;
  }
  v6 = StringLiteral_3375/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3375/*"CANCEL_INTERRUPTION"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.cancelInterruptionEvent, v6, v2, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, v7);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CancelInterruption_b__60_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012ED & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012ED = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CloseWaveRestartWindow_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012E8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012E8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x0
  intptr_t v10; // w2
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A012EE & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__, v5);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A012EE = 1;
  }
  if ( isDecide )
  {
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    v10 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    v10 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__;
  }
  v11 = v9;
  System_Action___ctor(v9, (Il2CppObject *)this, v10, 0LL);
  if ( !Instance )
    sub_1B64ACC(v12, v13);
  CommonUI__CloseConfirmDialog_30347596((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A012EF & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B64870(&StringLiteral_4983/*"DECIDE_INTERRUPTION"*/, v3);
    byte_4A012EF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64ACC(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4983/*"DECIDE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A012F0 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A012F0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64ACC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012E9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3375/*"CANCEL_INTERRUPTION"*/, method);
    byte_4A012E9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3375/*"CANCEL_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v2; // x19
  struct BattleData_o *data; // x8

  v2 = this;
  if ( (byte_4A012EA & 1) == 0 )
  {
    this = (BattleMenuWindowComponent_o *)sub_1B64870(&StringLiteral_3516/*"CLICK_CURRENT_WAVE_RESTART"*/, method);
    byte_4A012EA = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( data->fields.turnCount < 2 )
    return;
  this = (BattleMenuWindowComponent_o *)v2->fields.myFsm;
  if ( !this )
LABEL_7:
    sub_1B64ACC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3516/*"CLICK_CURRENT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012EB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3540/*"CLICK_SELECT_WAVE_RESTART"*/, method);
    byte_4A012EB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3540/*"CLICK_SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012EC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012EC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012E5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4984/*"DECIDE_WAVE_RESTART"*/, method);
    byte_4A012E5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4984/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012E6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3378/*"CANCEL_WAVE_RESTART"*/, method);
    byte_4A012E6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3378/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012E7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012E7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__65_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  WaveBattleSelectWaveDialog_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x21
  System_Action_o *v15; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4A012F5 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__, v7);
    sub_1B64870(&BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo, v8);
    byte_4A012F5 = 1;
  }
  v9 = sub_1B64ABC(BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_BYTE *)(v9 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_30347596((CommonUI_o *)Instance, v15, 0LL);
  if ( *(_BYTE *)(v9 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v10 = this->fields.waveSelectDialog;
      if ( v10 )
      {
        WaveBattleSelectWaveDialog__Close(v10, 0LL);
        return;
      }
LABEL_12:
      sub_1B64ACC(v10, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleMenuWindowComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleData_o *data; // x8
  int32_t v10; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v12; // x21

  v5 = this;
  if ( (byte_4A012F1 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, v6);
    sub_1B64870(&StringLiteral_3376/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/, v7);
    this = (BattleMenuWindowComponent_o *)sub_1B64870(&StringLiteral_3527/*"CLICK_INTERRUPTION"*/, v8);
    byte_4A012F1 = 1;
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v10 = StringLiteral_3376/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v5->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3376/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.cancelInterruptionEvent, v10, (int32_t)method, v3);
    this = (BattleMenuWindowComponent_o *)v5->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3527/*"CLICK_INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1B64ACC(this, isDecide);
  }
  waveSelectDialog = v5->fields.waveSelectDialog;
  v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v5, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, 0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_32128480(waveSelectDialog, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_1(
        BattleMenuWindowComponent_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v9; // x1
  struct BattleData_o *data; // x8

  if ( (byte_4A012F3 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__, *(_QWORD *)&wave);
    sub_1B64870(&StringLiteral_3556/*"CLICK_WAVE_BANNER"*/, v5);
    byte_4A012F3 = 1;
  }
  v6 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_1B64ACC(myFsm, v9);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3556/*"CLICK_WAVE_BANNER"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012F4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012F4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A012F2 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&StringLiteral_3374/*"CANCEL"*/, v3);
    byte_4A012F2 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.waveSelectDialog, 0, v6, v7);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1B64ACC(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_3374/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___ProcSelectWaveRestart_b__66_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012F6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012F6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4A012D6 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__, method);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A012D6 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_1B64ACC(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._12_Close.method)(
    setVolumeWindow,
    v6,
    setVolumeWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__endCloseCkRetire(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012CF & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012CF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012D7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012D7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012D1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012D1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A012D3 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012D3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_4A012D5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A012D5 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64ACC(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A012E4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20812/*"itemlist_win/Scroll Bar/close"*/, method);
    byte_4A012E4 = 1;
  }
  return (System_String_o *)StringLiteral_20812/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A012CE & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_endCloseCkRetire__, method);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A012CE = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_1B64ACC(v6, v7);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._12_Close.method)(
    checkRetireWindow,
    v5,
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v10; // x21
  const MethodInfo *v11; // x3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_4A012D2 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_endOpenItemListWindow__, method);
    sub_1B64870(&Method_BattleMenuWindowComponent_modeItemListWindow__, v3);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B64870(&StringLiteral_3374/*"CANCEL"*/, v5);
    byte_4A012D2 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_7;
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( BattleData__ExistDropItem(data, 0LL) )
  {
LABEL_7:
    v7 = Method_BattleMenuWindowComponent_modeItemListWindow__;
    if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_modeItemListWindow__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    itemListWindow = this->fields.itemListWindow;
    v10 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v10, v11);
      return;
    }
LABEL_15:
    sub_1B64ACC(data, method);
  }
  v12 = Method_BattleMenuWindowComponent_modeItemListWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_modeItemListWindow__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B64854(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3374/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  bool IsWarBoard; // w0
  _QWORD *v8; // x8
  bool v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_4A012D0 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_endOpenCkRetire__, method);
    sub_1B64870(&Method_BattleMenuWindowComponent_modeRetire__, v3);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B64870(&StringLiteral_3374/*"CANCEL"*/, v5);
    byte_4A012D0 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  IsWarBoard = BattleData__IsWarBoard(data, 0LL);
  v8 = Method_BattleMenuWindowComponent_modeRetire__;
  v9 = IsWarBoard;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeRetire__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_modeRetire__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B64854(v8, v8[4]);
  if ( v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3374/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B64ACC(data, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_11;
  BattleRetireWindowComponent__Open(checkRetireWindow, v12, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4A012D4 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__, method);
    sub_1B64870(&Method_BattleMenuWindowComponent_modeSetVolumeWindow__, v3);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4A012D4 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL);
  v6 = Method_BattleMenuWindowComponent_modeSetVolumeWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeSetVolumeWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64888(Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl;
  if ( !setVolumeWindowMask
    || (SetVolumeControl__initSetVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_9:
    sub_1B64ACC(setVolumeWindowMask, method);
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


void __fastcall BattleMenuWindowComponent___c__DisplayClass65_0___ctor(
        BattleMenuWindowComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent___c__DisplayClass65_0___OpenWaveSelectConfirmDialog_b__1(
        BattleMenuWindowComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct BattleMenuWindowComponent_o *_4__this; // x8
  System_String_o *v8; // x1

  if ( (byte_4A012F7 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B64870(&StringLiteral_3374/*"CANCEL"*/, v3);
    sub_1B64870(&StringLiteral_3539/*"CLICK_SELECT_WAVE_DECIDE"*/, v4);
    byte_4A012F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1B64ACC(Instance, v6);
  }
  if ( this->fields.isDecide )
    v8 = (System_String_o *)StringLiteral_3539/*"CLICK_SELECT_WAVE_DECIDE"*/;
  else
    v8 = (System_String_o *)StringLiteral_3374/*"CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v8, 0LL);
}