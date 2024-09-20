void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_BB59E0;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_BB59F0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_BB5470;
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_BB4A30;
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

  if ( (byte_4A5DFA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5DFA0 = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__,
    0LL);
  if ( !interruptionWindow )
    sub_1B8880C(v5, v6);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_String_o *Empty; // x20

  if ( (byte_4A5DF9B & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    sub_1B885B0(&StringLiteral_9649/*"OPEN_WAVE_RESTART_WINDOW"*/);
    sub_1B885B0(&StringLiteral_9637/*"OPEN_INTERRUPTION_WINDOW"*/);
    byte_4A5DF9B = 1;
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
      method = (const MethodInfo *)StringLiteral_9649/*"OPEN_WAVE_RESTART_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      if ( BattleData__IsInterruptionQuest(data, 0LL) )
        method = (const MethodInfo *)StringLiteral_9637/*"OPEN_INTERRUPTION_WINDOW"*/;
      else
        method = (const MethodInfo *)Empty;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_20;
LABEL_21:
    sub_1B8880C(data, method);
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
  v4 = Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_21;
  method = (const MethodInfo *)StringLiteral_3397/*"CANCEL"*/;
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

  if ( (byte_4A5DFA3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DFA3 = 1;
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
    sub_1B8880C(v5, v4);
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

  if ( (byte_4A5DF9D & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5DF9D = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A5DF90 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4A5DF90 = 1;
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
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( data )
      {
        UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
        data = this->fields.waveRestartButton;
        if ( data )
        {
          data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               data,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
            data = this->fields.interruptionButton;
            if ( data )
            {
              data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   data,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1B8880C(data, method);
  }
LABEL_12:
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UISprite_o *classChartSp; // x20
  __int64 v4; // x1
  AssetData_o *data; // x0

  if ( (byte_4A5DF8E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_20275/*"img_classchart"*/);
    sub_1B885B0(&StringLiteral_17675/*"buttontxt_save"*/);
    byte_4A5DF8E = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_20275/*"img_classchart"*/, 0LL);
  data = (AssetData_o *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0LL) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3209/*"Battle/Common"*/, 0LL);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_object__48635516(
                              data,
                              (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0LL);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_17675/*"buttontxt_save"*/, 0LL);
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
    sub_1B8880C(data, v4);
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
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  bool v11; // w1
  struct UnityEngine_GameObject_o *RetireButton; // x8
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x0
  UIWidget_o *v17; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v19; // x22
  float a; // s8
  float r; // s0
  float g; // s1
  float b; // s2
  _BOOL4 v24; // w23
  float v25; // s3
  float v26; // s3
  float v27; // s2
  float v28; // s1
  float v29; // s0
  UILabel_o *waveRestartExplanationLabel; // x24
  Il2CppObject *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int v35; // s0
  int v36; // s2
  int v37; // s1
  UnityEngine_Color_o v38; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DF8F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3551/*"CLICK_INTERRUPTION_MENU"*/);
    sub_1B885B0(&StringLiteral_442/*"#606060"*/);
    sub_1B885B0(&StringLiteral_2920/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    byte_4A5DF8F = 1;
  }
  *(_QWORD *)&v38.fields.r = 0LL;
  *(_QWORD *)&v38.fields.b = 0LL;
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      *p_interruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.interruptionWindow,
        (int32_t)Component_object,
        v9,
        v10);
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
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v53.fields.r = 0.5;
    v53.fields.g = 0.5;
    v53.fields.b = 0.5;
    v53.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v53, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v11 = 0;
LABEL_52:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v11, 0LL);
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
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v58.fields.r = 1.0;
    v58.fields.g = 1.0;
    v58.fields.b = 1.0;
    v58.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v58, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v11 = 1;
    goto LABEL_52;
  }
  if ( !RetireButton )
    goto LABEL_141;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          this->fields.RetireButton,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v13,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_141;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v13, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  v14 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)checkRetireWindow,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v14,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_141;
    v54.fields.r = 0.29804;
    v54.fields.a = 1.0;
    v54.fields.g = 0.29804;
    v54.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)v14, v54, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v55.fields.a = 1.0;
  v55.fields.r = 0.29804;
  v55.fields.g = 0.29804;
  v55.fields.b = 0.29804;
  CommonFunction__SetColorAllChild(transform, 0, v55, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_141;
    v56.fields.a = 1.0;
    v56.fields.r = 0.29804;
    v56.fields.g = 0.29804;
    v56.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v56, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_141;
    v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v57.fields.a = 1.0;
    v57.fields.r = 0.29804;
    v57.fields.g = 0.29804;
    v57.fields.b = 0.29804;
    CommonFunction__SetColorAllChild(v16, 0, v57, 0LL);
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
                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v17 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v17, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v39.fields.z = 0.0;
            v39.fields.x = 260.0;
            v39.fields.y = 80.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v39, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_442/*"#606060"*/, &v38, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v19 = (UIWidget_o *)checkRetireWindow;
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
                    v24 = 0;
                    b = 1.0;
                    g = 1.0;
                    r = 1.0;
                  }
                  else
                  {
LABEL_68:
                    g = v38.fields.g;
                    r = v38.fields.r;
                    b = v38.fields.b;
                    a = v38.fields.a;
                    v24 = 1;
                  }
                  if ( v19 )
                  {
                    v25 = a;
                    UIWidget__set_color(v19, *(UnityEngine_Color_o *)&r, 0LL);
                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                    v26 = 1.0;
                    v27 = 1.0;
                    v28 = 1.0;
                    v29 = 1.0;
                    if ( v24 )
                    {
                      v28 = v38.fields.g;
                      v29 = v38.fields.r;
                      v27 = v38.fields.b;
                      v26 = v38.fields.a;
                    }
                    if ( checkRetireWindow )
                    {
                      UIWidget__set_color((UIWidget_o *)checkRetireWindow, *(UnityEngine_Color_o *)&v29, 0LL);
                      waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2920/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, v24, 0LL);
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
                                    v40.fields.z = 0.0;
                                    v40.fields.x = 210.0;
                                    v40.fields.y = -45.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v40,
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
                                      v31 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                                       (UnityEngine_Object_o *)v31,
                                                                                       0LL,
                                                                                       0LL);
                                      if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                                      {
                                        if ( !v31 )
                                          goto LABEL_141;
                                        v34 = StringLiteral_3551/*"CLICK_INTERRUPTION_MENU"*/;
                                        v31[2].monitor = (void *)StringLiteral_3551/*"CLICK_INTERRUPTION_MENU"*/;
                                        sub_1B88554((ServantStatusBattleListViewItem_o *)&v31[2].monitor, v34, v32, v33);
                                      }
                                      UIWidget__set_width(v17, 160, 0LL);
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
                                          UIWidget__set_width(v19, 160, 0LL);
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
    sub_1B8880C(checkRetireWindow, call);
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
          v41.fields.x = 0.0;
          v41.fields.z = 0.0;
          v41.fields.y = 147.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v41, 0LL);
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
                  v42.fields.x = 0.0;
                  v42.fields.z = 0.0;
                  v42.fields.y = -96.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v42, 0LL);
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
                  if ( checkRetireWindow )
                  {
                    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)checkRetireWindow,
                                                                     0LL);
                    if ( checkRetireWindow )
                    {
                      v43.fields.z = 0.0;
                      v43.fields.x = -100.0;
                      v43.fields.y = -139.0;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v43, 0LL);
                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.volumeSettingsButton;
                      if ( checkRetireWindow )
                      {
                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                         0LL);
                        if ( checkRetireWindow )
                        {
                          v44.fields.z = 0.0;
                          v44.fields.x = 100.0;
                          v44.fields.y = -139.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            v44,
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
                                    v45.fields.x = -12.0;
                                    v45.fields.z = 0.0;
                                    v45.fields.y = 80.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v45,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
                                    if ( checkRetireWindow )
                                    {
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                       0LL);
                                      if ( checkRetireWindow )
                                      {
                                        v46.fields.z = 0.0;
                                        v46.fields.x = 159.0;
                                        v46.fields.y = 80.0;
                                        UnityEngine_Transform__set_localPosition(
                                          (UnityEngine_Transform_o *)checkRetireWindow,
                                          v46,
                                          0LL);
                                        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                                        if ( checkRetireWindow )
                                        {
                                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                           0LL);
                                          if ( checkRetireWindow )
                                          {
                                            v47.fields.z = 0.0;
                                            v47.fields.x = 330.0;
                                            v47.fields.y = 80.0;
                                            UnityEngine_Transform__set_localPosition(
                                              (UnityEngine_Transform_o *)checkRetireWindow,
                                              v47,
                                              0LL);
                                            checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                            if ( checkRetireWindow )
                                            {
                                              v48.fields.z = 0.0;
                                              v48.fields.x = 144.0;
                                              v48.fields.y = -32.0;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                v48,
                                                0LL);
                                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                              if ( checkRetireWindow )
                                              {
                                                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)checkRetireWindow,
                                                                                                 0LL);
                                                if ( checkRetireWindow )
                                                {
                                                  v49.fields.y = 15.0;
                                                  v49.fields.z = 0.0;
                                                  v49.fields.x = -262.0;
                                                  UnityEngine_Transform__set_localPosition(
                                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                                    v49,
                                                    0LL);
                                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                                  if ( checkRetireWindow )
                                                  {
                                                    v35 = 1137278976;
LABEL_139:
                                                    v36 = 0;
                                                    v37 = 1126039552;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                                      *(UnityEngine_Vector3_o *)&v35,
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
                                    v50.fields.z = 0.0;
                                    v50.fields.x = 188.0;
                                    v50.fields.y = 73.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v50,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                    if ( checkRetireWindow )
                                    {
                                      v51.fields.y = -23.0;
                                      v51.fields.z = 0.0;
                                      v51.fields.x = 174.0;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)checkRetireWindow,
                                        v51,
                                        0LL);
                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                      if ( checkRetireWindow )
                                      {
                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)checkRetireWindow,
                                                                                         0LL);
                                        if ( checkRetireWindow )
                                        {
                                          v52.fields.y = 21.0;
                                          v52.fields.z = 0.0;
                                          v52.fields.x = -182.0;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)checkRetireWindow,
                                            v52,
                                            0LL);
                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                          if ( checkRetireWindow )
                                          {
                                            v35 = 1136295936;
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

  if ( (byte_4A5DFA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_1B885B0(&StringLiteral_2900/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2899/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_4A5DFA2 = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2900/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2899/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__,
    0LL);
  if ( !v7 )
LABEL_10:
    sub_1B8880C(Instance, v6);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v7, v8, v9, v10, v11, v12, 23, 280, 13.0, 22, 1, 0LL);
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
  struct BattleData_o *data; // x8
  struct BattleWindowInterruptionComponent_o *v12; // x20
  BattleWindowComponent_EndCall_o *v13; // x21

  if ( (byte_4A5DF9F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5DF9F = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  interruptionWindow = this->fields.interruptionWindow;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__,
    0LL);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__,
    0LL);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__,
    0LL);
  data = this->fields.data;
  if ( !data
    || !interruptionWindow
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(
          interruptionWindow,
          v6,
          v7,
          v8,
          0LL,
          1,
          data->fields.turnCount > 1,
          0LL),
        v12 = this->fields.interruptionWindow,
        v13 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__,
          0LL),
        !v12) )
  {
    sub_1B8880C(v9, v10);
  }
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v12->klass->vtable._10_Open.method)(
    v12,
    v13,
    v12->klass->vtable._11_CompOpen.methodPtr);
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

  if ( (byte_4A5DF9C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3884/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/);
    sub_1B885B0(&StringLiteral_3886/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3883/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/);
    sub_1B885B0(&StringLiteral_3887/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/);
    byte_4A5DF9C = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3887/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3886/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3883/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_10;
  BattleWindowContinueWaveRestartComponent__SetWindow_44084556(waveRestartWindow, v4, v5, v6, v7, v8, v9, 0LL);
  v11 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  v13 = this->fields.waveRestartWindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__,
    0LL);
  if ( !v13 )
LABEL_10:
    sub_1B8880C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v14,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
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

  if ( (byte_4A5DFA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_2909/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_2906/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2908/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/);
    sub_1B885B0(&StringLiteral_2911/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_1221/*"00"*/);
    sub_1B885B0(&StringLiteral_2910/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/);
    byte_4A5DFA5 = 1;
  }
  v29 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2910/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0LL);
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_28;
    v7 = (System_String_o *)data;
    v8 = (Il2CppObject *)System_Int32__ToString_62512312((int)v6 + 1040, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v9 = System_String__Format(v7, v8, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2909/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v10 = this->fields.data;
    if ( !v10 )
      goto LABEL_28;
    v11 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_62512312((int)v10 + 1040, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    if ( !this->fields.data )
      goto LABEL_28;
    v12 = (Il2CppObject *)data;
    v29 = BattleData__getDispWaveCount(this->fields.data, 0LL);
    v13 = (Il2CppObject *)System_Int32__ToString_62512312((int32_t)&v29, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v9 = System_String__Format_61721404(v11, v12, v13, 0LL);
  }
  v14 = v9;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v15 = data->fields.selectedInterruptionWave;
  v16 = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v15 == v16 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2908/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v18 = this->fields.data;
    if ( !v18 )
      goto LABEL_28;
    v19 = (System_String_o *)data;
    v20 = (Il2CppObject *)System_Int32__ToString_62512312((int)v18 + 1040, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v17 = System_String__Format(v19, v20, 0LL);
  }
  v21 = v17;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v22 = data->fields.selectedInterruptionWave;
  v23 = BattleData__getDispWaveCount(data, 0LL);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2911/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2906/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__,
    0LL);
  if ( !Instance )
LABEL_28:
    sub_1B8880C(data, method);
  if ( v22 == v23 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)Instance,
    v25,
    v14,
    v21,
    v26,
    v27,
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
  UnityEngine_Object_o *waveSelectDialog; // x21
  struct WaveBattleSelectWaveDialog_o **p_waveSelectDialog; // x20
  __int64 v5; // x1
  int64_t Object; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w21
  int32_t Phase; // w22
  int32_t EventId; // w25
  Il2CppObject *Master_object; // x23
  UserEventDeckEntity_o *v14; // x23
  QuestRestrictionInfo_o *v15; // x24
  struct BattleData_o *data; // x8
  int turnCount; // w27
  int32_t v18; // w21
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v20; // x22
  int32_t v21; // w26
  WaveBattleSelectWaveDialog_CloseDelegate_o *v22; // x25
  WaveBattleSelectWaveDialog_o *v23; // x21
  System_Action_int__o *v24; // x22
  WaveBattleSelectWaveDialog_o *v25; // x20
  int32_t v26; // w21
  WaveBattleSelectWaveDialog_o *v27; // x20
  System_Action_o *v28; // x21

  if ( (byte_4A5DFA4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__);
    sub_1B885B0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestRestrictionInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_2897/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/);
    byte_4A5DFA4 = 1;
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
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    *p_waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.waveSelectDialog, (int32_t)Component_object, v8, v9);
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
  v10 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_31;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v10, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_31;
  Object = (int64_t)UserEventDeckMaster__getDeckList(
                      (UserEventDeckMaster_o *)Master_object,
                      Object,
                      EventId,
                      v10,
                      Phase,
                      0LL);
  if ( !Object )
    goto LABEL_31;
  if ( !*(_DWORD *)(Object + 24) )
    sub_1B88814(Object, v5);
  v14 = *(UserEventDeckEntity_o **)(Object + 32);
  v15 = (QuestRestrictionInfo_o *)sub_1B887FC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_40416380(v15, EventId, v10, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  turnCount = data->fields.turnCount;
  v18 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v20 = this->fields.waveSelectDialog;
  v21 = DispWaveCount;
  v22 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1B887FC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__,
    0LL);
  if ( !v20 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__SetDialog(v20, v14, v15, v18, v21 - (turnCount < 2), 1, v22, 0LL);
  v23 = this->fields.waveSelectDialog;
  v24 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__,
    0LL);
  if ( !v23 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v23, v24, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  if ( *(int *)(Object + 200) > 1 )
    goto LABEL_29;
  v25 = *p_waveSelectDialog;
  v26 = BattleData__getDispWaveCount((BattleData_o *)Object, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, 0LL);
  if ( !v25 )
LABEL_31:
    sub_1B8880C(Object, v5);
  WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(v25, v26, (System_String_o *)Object, 0LL);
LABEL_29:
  v27 = this->fields.waveSelectDialog;
  v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, 0LL);
  if ( !v27 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__Open_32391952(v27, v28, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcSelectWaveRestart(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5DFA6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5DFA6 = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__, 0LL);
  if ( !Instance )
    sub_1B8880C(v5, v6);
  CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v4, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_4A5DF9E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF9E = 1;
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
      sub_1B8880C(waveRestartWindow, v3);
    }
  }
}


void __fastcall BattleMenuWindowComponent__SetCancelInterruptionEvent(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFA1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    sub_1B885B0(&StringLiteral_3398/*"CANCEL_INTERRUPTION"*/);
    byte_4A5DFA1 = 1;
  }
  v5 = StringLiteral_3398/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3398/*"CANCEL_INTERRUPTION"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cancelInterruptionEvent, v5, v2, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CancelInterruption_b__60_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFB0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DFB0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CloseWaveRestartWindow_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFAB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DFAB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x0
  intptr_t v7; // w2
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5DFB1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5DFB1 = 1;
  }
  if ( isDecide )
  {
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v7 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v7 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__;
  }
  v8 = v6;
  System_Action___ctor(v6, (Il2CppObject *)this, v7, 0LL);
  if ( !Instance )
    sub_1B8880C(v9, v10);
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5DFB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_5006/*"DECIDE_INTERRUPTION"*/);
    byte_4A5DFB2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5006/*"DECIDE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5DFB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5DFB3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFAC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3398/*"CANCEL_INTERRUPTION"*/);
    byte_4A5DFAC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3398/*"CANCEL_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v2; // x19
  struct BattleData_o *data; // x8

  v2 = this;
  if ( (byte_4A5DFAD & 1) == 0 )
  {
    this = (BattleMenuWindowComponent_o *)sub_1B885B0(&StringLiteral_3539/*"CLICK_CURRENT_WAVE_RESTART"*/);
    byte_4A5DFAD = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( data->fields.turnCount < 2 )
    return;
  this = (BattleMenuWindowComponent_o *)v2->fields.myFsm;
  if ( !this )
LABEL_7:
    sub_1B8880C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3539/*"CLICK_CURRENT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFAE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3563/*"CLICK_SELECT_WAVE_RESTART"*/);
    byte_4A5DFAE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3563/*"CLICK_SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFAF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DFAF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFA8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5007/*"DECIDE_WAVE_RESTART"*/);
    byte_4A5DFA8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5007/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFA9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3401/*"CANCEL_WAVE_RESTART"*/);
    byte_4A5DFA9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3401/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFAA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DFAA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__65_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4A5DFB8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_1B885B0(&BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
    byte_4A5DFB8 = 1;
  }
  v5 = sub_1B887FC(BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
  if ( *(_BYTE *)(v5 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0LL);
        return;
      }
LABEL_12:
      sub_1B8880C(v6, v7);
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
  struct BattleData_o *data; // x8
  int32_t v7; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v9; // x21

  v5 = this;
  if ( (byte_4A5DFB4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__);
    sub_1B885B0(&StringLiteral_3399/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattleMenuWindowComponent_o *)sub_1B885B0(&StringLiteral_3550/*"CLICK_INTERRUPTION"*/);
    byte_4A5DFB4 = 1;
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v7 = StringLiteral_3399/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v5->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3399/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.cancelInterruptionEvent, v7, (int32_t)method, v3);
    this = (BattleMenuWindowComponent_o *)v5->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3550/*"CLICK_INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1B8880C(this, isDecide);
  }
  waveSelectDialog = v5->fields.waveSelectDialog;
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v5, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, 0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_32390472(waveSelectDialog, v9, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_1(
        BattleMenuWindowComponent_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v8; // x1
  struct BattleData_o *data; // x8

  if ( (byte_4A5DFB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
    sub_1B885B0(&StringLiteral_3579/*"CLICK_WAVE_BANNER"*/);
    byte_4A5DFB6 = 1;
  }
  v5 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_1B8880C(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3579/*"CLICK_WAVE_BANNER"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFB7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DFB7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5DFB5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    byte_4A5DFB5 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.waveSelectDialog, 0, v5, v6);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1B8880C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_3397/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___ProcSelectWaveRestart_b__66_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DFB9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DFB9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4A5DF99 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5DF99 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_1B8880C(setVolumeWindowMask, method);
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

  if ( (byte_4A5DF92 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DF92 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DF9A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DF9A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DF94 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DF94 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5DF96 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DF96 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_4A5DF98 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5DF98 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5DFA7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20891/*"itemlist_win/Scroll Bar/close"*/);
    byte_4A5DFA7 = 1;
  }
  return (System_String_o *)StringLiteral_20891/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5DF91 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_endCloseCkRetire__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5DF91 = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_1B8880C(v5, v6);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4A5DF95 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_endOpenItemListWindow__);
    sub_1B885B0(&Method_BattleMenuWindowComponent_modeItemListWindow__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    byte_4A5DF95 = 1;
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
    v4 = Method_BattleMenuWindowComponent_modeItemListWindow__;
    if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_modeItemListWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    itemListWindow = this->fields.itemListWindow;
    v7 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v7, v8);
      return;
    }
LABEL_15:
    sub_1B8880C(data, method);
  }
  v9 = Method_BattleMenuWindowComponent_modeItemListWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_modeItemListWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3397/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  bool IsWarBoard; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4A5DF93 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_endOpenCkRetire__);
    sub_1B885B0(&Method_BattleMenuWindowComponent_modeRetire__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    byte_4A5DF93 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  IsWarBoard = BattleData__IsWarBoard(data, 0LL);
  v5 = Method_BattleMenuWindowComponent_modeRetire__;
  v6 = IsWarBoard;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeRetire__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_modeRetire__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3397/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(data, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_11;
  BattleRetireWindowComponent__Open(checkRetireWindow, v9, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4A5DF97 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__);
    sub_1B885B0(&Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5DF97 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL);
  v4 = Method_BattleMenuWindowComponent_modeSetVolumeWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeSetVolumeWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl;
  if ( !setVolumeWindowMask
    || (SetVolumeControl__initSetVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v7 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_9:
    sub_1B8880C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._10_Open.method)(
    setVolumeWindow,
    v7,
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct BattleMenuWindowComponent_o *_4__this; // x8
  System_String_o *v6; // x1

  if ( (byte_4A5DFBA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    sub_1B885B0(&StringLiteral_3562/*"CLICK_SELECT_WAVE_DECIDE"*/);
    byte_4A5DFBA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  if ( this->fields.isDecide )
    v6 = (System_String_o *)StringLiteral_3562/*"CLICK_SELECT_WAVE_DECIDE"*/;
  else
    v6 = (System_String_o *)StringLiteral_3397/*"CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v6, 0LL);
}