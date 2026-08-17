void BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V3.2S, #1.0 }
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_E9D060;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_E9BE60;
  *(_QWORD *)&this->fields.waveRestartButtonLabelScaleInInterruptionQuest.fields.y = _D3;
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_E9D3F0;
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_E9CB40;
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

  if ( (byte_5973F6D & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973F6D = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__,
    0);
  if ( !interruptionWindow )
    sub_2213CDC(v5, v6);
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
  const MethodInfo *v6; // x20

  if ( (byte_5973F68 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
    sub_2213A60(&StringLiteral_3410/*"CANCEL"*/);
    sub_2213A60(&StringLiteral_10053/*"OPEN_WAVE_RESTART_WINDOW"*/);
    sub_2213A60(&StringLiteral_10041/*"OPEN_INTERRUPTION_WINDOW"*/);
    byte_5973F68 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  if ( data->fields.turnCount > 1 )
  {
LABEL_13:
    v6 = **(const MethodInfo ***)(qword_5984390 + 184);
    if ( BattleData__IsInterruptionQuest(data, 0) )
    {
      method = (const MethodInfo *)StringLiteral_10041/*"OPEN_INTERRUPTION_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      if ( BattleData__IsContinueWaveRestart(data, 0) )
        method = (const MethodInfo *)StringLiteral_10053/*"OPEN_WAVE_RESTART_WINDOW"*/;
      else
        method = v6;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_20;
LABEL_21:
    sub_2213CDC(data, method);
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
    v4 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_21;
  method = (const MethodInfo *)StringLiteral_3410/*"CANCEL"*/;
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
  __int64 v3; // x1
  UnityEngine_Object_o *interruptionWindow; // x20
  __int64 v5; // x1
  WaveBattleSelectWaveDialog_o *v6; // x0
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_5973F70 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F70 = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0, 0);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0, 0) )
  {
    v6 = (WaveBattleSelectWaveDialog_o *)this->fields.interruptionWindow;
    if ( !v6 )
      goto LABEL_14;
    ((void (__fastcall *)(WaveBattleSelectWaveDialog_o *, _QWORD, Il2CppClass *))v6->klass[1]._1.declaringType)(
      v6,
      0,
      v6->klass[1]._1.parent);
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
  {
    v6 = this->fields.waveSelectDialog;
    if ( v6 )
    {
      WaveBattleSelectWaveDialog__Close(v6, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v6, v5);
  }
}


void BattleMenuWindowComponent__CloseWaveRestartWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973F6A & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973F6A = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__,
    0);
  if ( !waveRestartWindow )
    sub_2213CDC(v5, v6);
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

  if ( (byte_5973F5D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_5973F5D = 1;
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
                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( data )
      {
        UIWidget__ResizeCollider((UIWidget_o *)data, 0);
        data = this->fields.waveRestartButton;
        if ( data )
        {
          data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               data,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            UIWidget__ResizeCollider((UIWidget_o *)data, 0);
            data = this->fields.interruptionButton;
            if ( data )
            {
              data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   data,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_2213CDC(data, method);
  }
LABEL_12:
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UISprite_o *classChartSp; // x20
  __int64 v4; // x1
  AssetData_o *data; // x0
  __int64 v6; // x1

  if ( (byte_5973F5B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_21329/*"img_classchart"*/);
    sub_2213A60(&StringLiteral_18447/*"buttontxt_save"*/);
    byte_5973F5B = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_21329/*"img_classchart"*/, 0);
  data = (AssetData_o *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0) )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3208/*"Battle/Common"*/, 0);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_object__58532980(
                              data,
                              (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_18447/*"buttontxt_save"*/, 0);
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
    sub_2213CDC(data, v4);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool v15; // w1
  bool IsWarBoard; // w8
  __int64 v17; // x1
  Il2CppObject *v18; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v22; // x0
  UIWidget_o *v23; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v25; // x22
  int turnCount; // w23
  int32_t wavecount; // w25
  int v28; // w25
  float a; // s8
  unsigned __int64 v30; // kr00_8
  _BOOL4 v31; // w23
  float b; // s2 OVERLAPPED
  float v33; // s3
  UnityEngine_Color_o v34; // kr10_16
  __int64 v35; // x1
  UILabel_o *waveRestartExplanationLabel; // x24
  __int64 v37; // x1
  Il2CppObject *v38; // x23
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  UnityEngine_Color_o v46; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973F5C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_3605/*"CLICK_INTERRUPTION_MENU"*/);
    sub_2213A60(&StringLiteral_436/*"#606060"*/);
    sub_2213A60(&StringLiteral_2918/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    byte_5973F5C = 1;
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  *(_QWORD *)&v46.fields.r = 0;
  *(_QWORD *)&v46.fields.b = 0;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, call);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      *p_interruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.interruptionWindow,
        (int32_t)Component_object,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
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
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v49.fields.r = 0.5;
    v49.fields.g = 0.5;
    v49.fields.b = 0.5;
    v49.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v49, 0);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v15 = 0;
LABEL_52:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v15, 0);
    goto LABEL_53;
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  IsWarBoard = BattleData__IsWarBoard((BattleData_o *)checkRetireWindow, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !IsWarBoard )
  {
    if ( !checkRetireWindow )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v54.fields.r = 1.0;
    v54.fields.g = 1.0;
    v54.fields.b = 1.0;
    v54.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v54, 0);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_114;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_114;
    v15 = 1;
    goto LABEL_52;
  }
  if ( !checkRetireWindow )
    goto LABEL_114;
  v18 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)checkRetireWindow,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_114;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v18, 1, 0);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_114;
  v20 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)checkRetireWindow,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_114;
    v50.fields.r = 0.29804;
    v50.fields.a = 1.0;
    v50.fields.g = 0.29804;
    v50.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)v20, v50, 0);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_114;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0);
  v51.fields.a = 1.0;
  v51.fields.r = 0.29804;
  v51.fields.g = 0.29804;
  v51.fields.b = 0.29804;
  CommonFunction__SetColorAllChild(transform, 0, v51, 0);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_114;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_114;
    v52.fields.r = 0.29804;
    v52.fields.g = 0.29804;
    v52.fields.b = 0.29804;
    v52.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v52, 0);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_114;
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0);
    v53.fields.r = 0.29804;
    v53.fields.g = 0.29804;
    v53.fields.b = 0.29804;
    v53.fields.a = 1.0;
    CommonFunction__SetColorAllChild(v22, 0, v53, 0);
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
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v23 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._6_get_closeBtnPath.method)(
          checkRetireWindow,
          1,
          checkRetireWindow->klass[1].vtable._7_setInitialPos.methodPtr);
        UIWidget__set_width(v23, 190, 0);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0);
          if ( checkRetireWindow )
          {
            v47.fields.z = 0.0;
            v47.fields.x = 260.0;
            v47.fields.y = 80.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v47, 0);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_436/*"#606060"*/, &v46, 0);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v25 = (UIWidget_o *)checkRetireWindow;
                  wavecount = data->fields.wavecount;
                  turnCount = data->fields.turnCount;
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, call);
                  v28 = wavecount + 1;
                  if ( !byte_596D622 )
                  {
                    sub_2213A60(&TerminalPramsManager_TypeInfo);
                    byte_596D622 = 1;
                  }
                  checkRetireWindow = (BattleWindowComponent_o *)TerminalPramsManager_TypeInfo;
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, call);
                    checkRetireWindow = (BattleWindowComponent_o *)TerminalPramsManager_TypeInfo;
                  }
                  a = 1.0;
                  *(_DWORD *)&checkRetireWindow[2].fields.m_CancellationTokenSource[9].fields._disposed = v28;
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
                    b = 1.0;
                    v31 = 0;
                    v30 = __PAIR64__(1.0, 1.0);
                  }
                  else
                  {
LABEL_75:
                    v30 = *(_QWORD *)&v46.fields.r;
                    v31 = 1;
                    a = v46.fields.a;
                    b = v46.fields.b;
                  }
                  if ( v25 )
                  {
                    v33 = a;
                    UIWidget__set_color(v25, *(UnityEngine_Color_o *)(&b - 2), 0);
                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                    *(_QWORD *)&v34.fields.r = __PAIR64__(1.0, 1.0);
                    *(_QWORD *)&v34.fields.b = __PAIR64__(1.0, 1.0);
                    if ( v31 )
                      v34 = v46;
                    if ( checkRetireWindow )
                    {
                      UIWidget__set_color((UIWidget_o *)checkRetireWindow, v34, 0);
                      waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
                      checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2918/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, v31, 0);
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
                                      v38 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                                       (UnityEngine_Object_o *)v38,
                                                                                       0,
                                                                                       0);
                                      if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                                      {
                                        if ( !v38 )
                                          goto LABEL_114;
                                        v45 = StringLiteral_3605/*"CLICK_INTERRUPTION_MENU"*/;
                                        v38[2].monitor = (void *)StringLiteral_3605/*"CLICK_INTERRUPTION_MENU"*/;
                                        sub_2213A04(
                                          (MissionNaviTransitionBoardItem_o *)&v38[2].monitor,
                                          v45,
                                          v39,
                                          v40,
                                          v41,
                                          v42,
                                          v43,
                                          v44);
                                      }
                                      UIWidget__set_width(v23, 160, 0);
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
                                          UIWidget__set_width(v25, 160, 0);
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
                                                                  v48.fields.z = 0.0;
                                                                  v48.fields.x = 210.0;
                                                                  v48.fields.y = -45.0;
                                                                  UnityEngine_Transform__set_localPosition(
                                                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                                                    v48,
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
    sub_2213CDC(checkRetireWindow, call);
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
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  System_String_o *v11; // x23
  System_String_o *v12; // x24
  CommonConfirmDialog_ClickDelegate_o *v13; // x25

  if ( (byte_5973F6F & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_2898/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_2213A60(&StringLiteral_2896/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2895/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_5973F6F = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2896/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2895/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__,
    0);
  if ( !v8 )
LABEL_10:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v8, v9, v10, v11, v12, v13, 23, 280, 13.0, 22, 1, 0);
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

  if ( (byte_5973F6C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973F6C = 1;
  }
  v3 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  interruptionWindow = this->fields.interruptionWindow;
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__, 0);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__, 0);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
        v13 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__,
          0),
        !v12) )
  {
    sub_2213CDC(v9, v10);
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
  __int64 v6; // x1
  System_String_o *v7; // x23
  System_String_o *v8; // x24
  System_String_o *v9; // x25
  System_String_o *v10; // x0
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct BattleWindowContinueWaveRestartComponent_o *v14; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_5973F69 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3971/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/);
    sub_2213A60(&StringLiteral_3973/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3970/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/);
    sub_2213A60(&StringLiteral_3974/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/);
    byte_5973F69 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3974/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3973/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3971/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3970/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0);
  if ( !waveRestartWindow )
    goto LABEL_10;
  BattleWindowContinueWaveRestartComponent__SetWindow_54895964(waveRestartWindow, v4, v5, v7, v8, v9, v10, 0);
  v12 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
  v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
  v14 = this->fields.waveRestartWindow;
  v15 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__,
    0);
  if ( !v14 )
LABEL_10:
    sub_2213CDC(v10, v11);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v14->klass->vtable._10_Open.methodPtr)(
    v14,
    v15,
    v14->klass->vtable._10_Open.method);
}


void BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w20
  bool v5; // zf
  __int64 v6; // x1
  int v7; // w8
  struct BattleData_o *v8; // x8
  System_String_o *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct BattleData_o *v12; // x8
  System_String_o *v13; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  int32_t v17; // w21
  __int64 v18; // x1
  int v19; // w8
  System_String_o *v20; // x0
  struct BattleData_o *v21; // x8
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x21
  int32_t v25; // w27
  int32_t v26; // w22
  __int64 v27; // x1
  Il2CppObject *Instance; // x23
  System_String_o *v29; // x24
  System_String_o *v30; // x25
  CommonConfirmDialog_ClickDelegate_o *v31; // x26
  int32_t decideTxtSize; // w8
  int32_t DispWaveCount; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_5973F72 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_2905/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_2903/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2904/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/);
    sub_2213A60(&StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    sub_2213A60(&StringLiteral_2906/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/);
    byte_5973F72 = 1;
  }
  data = this->fields.data;
  DispWaveCount = 0;
  if ( !data )
    goto LABEL_34;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  v5 = selectedInterruptionWave == BattleData__getDispWaveCount(data, 0);
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v5 )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2906/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0);
    v8 = this->fields.data;
    if ( !v8 )
      goto LABEL_34;
    v9 = (System_String_o *)data;
    v10 = (Il2CppObject *)System_Int32__ToString_77138656((int)v8 + 1176, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    v11 = System_String__Format(v9, v10, 0);
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2905/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v12 = this->fields.data;
    if ( !v12 )
      goto LABEL_34;
    v13 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_77138656((int)v12 + 1176, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    if ( !this->fields.data )
      goto LABEL_34;
    v14 = (Il2CppObject *)data;
    DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0);
    v15 = (Il2CppObject *)System_Int32__ToString_77138656(
                            (int32_t)&DispWaveCount,
                            (System_String_o *)StringLiteral_1205/*"00"*/,
                            0);
    v11 = System_String__Format_75697880(v13, v14, v15, 0);
  }
  v16 = v11;
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  v17 = data->fields.selectedInterruptionWave;
  v5 = v17 == BattleData__getDispWaveCount(data, 0);
  v19 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !v5 )
  {
    if ( !v19 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2903/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v21 = this->fields.data;
    if ( v21 )
    {
      v22 = (System_String_o *)data;
      v23 = (Il2CppObject *)System_Int32__ToString_77138656((int)v21 + 1176, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
      v20 = System_String__Format(v22, v23, 0);
      goto LABEL_25;
    }
LABEL_34:
    sub_2213CDC(data, method);
  }
  if ( !v19 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2904/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0);
LABEL_25:
  v24 = v20;
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  v25 = data->fields.selectedInterruptionWave;
  v26 = BattleData__getDispWaveCount(data, 0);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_34;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__,
    0);
  if ( !Instance )
    goto LABEL_34;
  if ( v25 == v26 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)Instance, v29, v16, v24, v30, v31, 26, 270, 13.0, decideTxtSize, 1, 0);
}


void BattleMenuWindowComponent__OpenWaveSelectWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v4; // x1
  void *Object; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w20
  __int64 v14; // x1
  int32_t Phase; // w21
  int32_t EventId; // w24
  Il2CppObject *Master_object; // x22
  UserEventDeckEntity_o *v18; // x22
  QuestRestrictionInfo_o *v19; // x23
  struct BattleData_o *data; // x8
  int32_t v21; // w20
  _BOOL4 v22; // w26
  int v23; // w21
  struct BattleData_o *v24; // x8
  WaveBattleSelectWaveDialog_o *v25; // x24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v26; // x25
  WaveBattleSelectWaveDialog_o *v27; // x20
  System_Action_int__o *v28; // x21
  WaveBattleSelectWaveDialog_o *v29; // x20
  __int64 v30; // x1
  int32_t DispWaveCount; // w21
  WaveBattleSelectWaveDialog_o *v32; // x20
  System_Action_o *v33; // x21

  if ( (byte_5973F71 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__);
    sub_2213A60(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_2893/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/);
    byte_5973F71 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.waveSelectDialog,
      (int32_t)Component_object,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    Object = this->fields.waveSelectDialog;
    if ( !Object )
      goto LABEL_40;
    WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)Object, 0);
  }
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__getQuestId((BattleData_o *)Object, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v13 = (int)Object;
  Phase = BattleData__getPhase(this->fields.data, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_40;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v13, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Object = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Object = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_40;
  Object = UserEventDeckMaster__getDeckList(
             (UserEventDeckMaster_o *)Master_object,
             *(_QWORD *)(*((_QWORD *)Object + 23) + 64LL),
             EventId,
             v13,
             Phase,
             0,
             0);
  if ( !Object )
    goto LABEL_40;
  if ( !*((_DWORD *)Object + 6) )
    sub_2213CE4(Object);
  v18 = (UserEventDeckEntity_o *)*((_QWORD *)Object + 4);
  v19 = (QuestRestrictionInfo_o *)sub_2213CCC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_50415132(v19, EventId, v13, Phase, 0);
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__GetMaxWaveCount((BattleData_o *)Object, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_40;
  v21 = (int)Object;
  v22 = data->fields.turnCount < 2;
  Object = (void *)BattleData__getDispWaveCount(this->fields.data, 0);
  if ( !v19 )
    goto LABEL_40;
  v23 = (int)Object;
  if ( QuestRestrictionInfo__IsWaveSetupSwitchParty(v19, 0) )
  {
    Object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v24 = this->fields.data;
    if ( !v24 || !Object )
      goto LABEL_40;
    PartyOrganizationUtility__SetTempWaveInfoList((PartyOrganizationUtility_o *)Object, v24->fields.waveInfoList, 0);
  }
  v25 = this->fields.waveSelectDialog;
  v26 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_2213CCC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__,
    0);
  if ( !v25 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__SetDialog(v25, v18, v19, v21, v23 - v22, 1, v26, 0);
  v27 = this->fields.waveSelectDialog;
  v28 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__,
    0);
  if ( !v27 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v27, v28, 0);
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  if ( *((int *)Object + 52) > 1 )
    goto LABEL_38;
  v29 = this->fields.waveSelectDialog;
  DispWaveCount = BattleData__getDispWaveCount((BattleData_o *)Object, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  Object = LocalizationManager__Get((System_String_o *)StringLiteral_2893/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, 0);
  if ( !v29 )
LABEL_40:
    sub_2213CDC(Object, v4);
  WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(v29, DispWaveCount, (System_String_o *)Object, 0);
LABEL_38:
  v32 = this->fields.waveSelectDialog;
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, 0);
  if ( !v32 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__Open_41497060(v32, v33, 0);
}


void BattleMenuWindowComponent__ProcSelectWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973F73 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973F73 = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v4, 0);
}


void BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_5973F6B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F6B = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
      sub_2213CDC(waveRestartWindow, v3);
    }
  }
}


void BattleMenuWindowComponent__SetCancelInterruptionEvent(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F6E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    sub_2213A60(&StringLiteral_3411/*"CANCEL_INTERRUPTION"*/);
    byte_5973F6E = 1;
  }
  v9 = StringLiteral_3411/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3411/*"CANCEL_INTERRUPTION"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cancelInterruptionEvent, v9, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v10);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___CancelInterruption_b__60_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F7D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F7D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___CloseWaveRestartWindow_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F78 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F78 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  intptr_t *v5; // x23
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_5973F7E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973F7E = 1;
  }
  if ( isDecide )
  {
    v5 = &Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__;
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
  }
  else
  {
    v5 = &Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, *v5, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v7, 0);
}


void BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5973F7F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5160/*"DECIDE_INTERRUPTION"*/);
    byte_5973F7F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5160/*"DECIDE_INTERRUPTION"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5973F80 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973F80 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F79 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3411/*"CANCEL_INTERRUPTION"*/);
    byte_5973F79 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3411/*"CANCEL_INTERRUPTION"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleMenuWindowComponent_o *v2; // x19
  struct BattleData_o *data; // x8

  v2 = this;
  if ( (byte_5973F7A & 1) == 0 )
  {
    this = (BattleMenuWindowComponent_o *)sub_2213A60(&StringLiteral_3588/*"CLICK_CURRENT_WAVE_RESTART"*/);
    byte_5973F7A = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( data->fields.turnCount < 2 )
    return;
  this = (BattleMenuWindowComponent_o *)v2->fields.myFsm;
  if ( !this )
LABEL_7:
    sub_2213CDC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3588/*"CLICK_CURRENT_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F7B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3618/*"CLICK_SELECT_WAVE_RESTART"*/);
    byte_5973F7B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3618/*"CLICK_SELECT_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenInterruptionWindow_b__59_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F7C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F7C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F75 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5161/*"DECIDE_WAVE_RESTART"*/);
    byte_5973F75 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5161/*"DECIDE_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F76 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3415/*"CANCEL_WAVE_RESTART"*/);
    byte_5973F76 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3415/*"CANCEL_WAVE_RESTART"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F77 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F77 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__65_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_5973F85 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_2213A60(&BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
    byte_5973F85 = 1;
  }
  v5 = sub_2213CCC(BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_BYTE *)(v5 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance(v14);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__,
    0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v16, 0);
  if ( *(_BYTE *)(v5 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0);
        return;
      }
LABEL_12:
      sub_2213CDC(v6, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleMenuWindowComponent_o *v9; // x19
  struct BattleData_o *data; // x8
  int32_t v11; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v13; // x21

  v9 = this;
  if ( (byte_5973F81 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__);
    sub_2213A60(&StringLiteral_3412/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattleMenuWindowComponent_o *)sub_2213A60(&StringLiteral_3604/*"CLICK_INTERRUPTION"*/);
    byte_5973F81 = 1;
  }
  data = v9->fields.data;
  if ( isDecide )
  {
    if ( data )
    {
      data->fields.selectedInterruptionWave = -1;
      v11 = StringLiteral_3412/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
      v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3412/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v9->fields.cancelInterruptionEvent,
        v11,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      this = (BattleMenuWindowComponent_o *)v9->fields.myFsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3604/*"CLICK_INTERRUPTION"*/, 0);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(this, isDecide);
  }
  if ( !data )
    goto LABEL_10;
  waveSelectDialog = v9->fields.waveSelectDialog;
  data->fields.selectedInterruptionWave = -1;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v9, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, 0);
  if ( !waveSelectDialog )
    goto LABEL_10;
  WaveBattleSelectWaveDialog__Close_41494860(waveSelectDialog, v13, 0);
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

  if ( (byte_5973F83 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
    sub_2213A60(&StringLiteral_3638/*"CLICK_WAVE_BANNER"*/);
    byte_5973F83 = 1;
  }
  v5 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  data = this->fields.data;
  if ( !data || (myFsm = this->fields.myFsm, data->fields.selectedInterruptionWave = wave, !myFsm) )
    sub_2213CDC(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3638/*"CLICK_WAVE_BANNER"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F84 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F84 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973F82 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3410/*"CANCEL"*/);
    byte_5973F82 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  this->fields.waveSelectDialog = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.waveSelectDialog, 0, v6, v7, v8, v9, v10, v11);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_2213CDC(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_3410/*"CANCEL"*/, 0);
}


void BattleMenuWindowComponent___ProcSelectWaveRestart_b__66_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F86 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F86 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__closeSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_5973F66 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973F66 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0),
        setVolumeWindow = this->fields.setVolumeWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0),
        !setVolumeWindow) )
  {
    sub_2213CDC(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))setVolumeWindow->klass->vtable._12_Close.methodPtr)(
    setVolumeWindow,
    v5,
    setVolumeWindow->klass->vtable._12_Close.method);
}


void BattleMenuWindowComponent__endCloseCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F5F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F5F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endCloseSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F67 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F67 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F61 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F61 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endOpenItemListWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973F63 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F63 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleMenuWindowComponent__endOpenSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_5973F65 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973F65 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


System_String_o *BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5973F74 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22078/*"itemlist_win/Scroll Bar/close"*/);
    byte_5973F74 = 1;
  }
  return (System_String_o *)StringLiteral_22078/*"itemlist_win/Scroll Bar/close"*/;
}


void BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973F5E & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_endCloseCkRetire__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973F5E = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleMenuWindowComponent_endCloseCkRetire__, 0);
  if ( !checkRetireWindow )
    sub_2213CDC(v5, v6);
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

  if ( (byte_5973F62 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_endOpenItemListWindow__);
    sub_2213A60(&Method_BattleMenuWindowComponent_modeItemListWindow__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&StringLiteral_3410/*"CANCEL"*/);
    byte_5973F62 = 1;
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
      v4 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_modeItemListWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    itemListWindow = this->fields.itemListWindow;
    v7 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
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
    sub_2213CDC(data, method);
  }
  v9 = Method_BattleMenuWindowComponent_modeItemListWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_modeItemListWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3410/*"CANCEL"*/, 0);
}


void BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  bool IsWarBoard; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_5973F60 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_endOpenCkRetire__);
    sub_2213A60(&Method_BattleMenuWindowComponent_modeRetire__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&StringLiteral_3410/*"CANCEL"*/);
    byte_5973F60 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  IsWarBoard = BattleData__IsWarBoard(data, 0);
  v5 = Method_BattleMenuWindowComponent_modeRetire__;
  if ( IsWarBoard )
  {
    if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeRetire__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_modeRetire__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3410/*"CANCEL"*/, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(data, method);
  }
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeRetire__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_modeRetire__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  checkRetireWindow = this->fields.checkRetireWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)this, Method_BattleMenuWindowComponent_endOpenCkRetire__, 0);
  if ( !checkRetireWindow )
    goto LABEL_13;
  BattleRetireWindowComponent__Open(checkRetireWindow, v9, 0);
}


void BattleMenuWindowComponent__modeSetVolumeWindow(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_5973F64 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__);
    sub_2213A60(&Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973F64 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0);
  v4 = Method_BattleMenuWindowComponent_modeSetVolumeWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeSetVolumeWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl;
  if ( !setVolumeWindowMask
    || (SetVolumeControl__initSetVolume((SetVolumeControl_o *)setVolumeWindowMask, 0),
        setVolumeWindow = this->fields.setVolumeWindow,
        v7 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0),
        !setVolumeWindow) )
  {
LABEL_9:
    sub_2213CDC(setVolumeWindowMask, method);
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

  if ( (byte_5973F87 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3410/*"CANCEL"*/);
    sub_2213A60(&StringLiteral_3617/*"CLICK_SELECT_WAVE_DECIDE"*/);
    byte_5973F87 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  if ( this->fields.isDecide )
    v6 = (System_String_o *)StringLiteral_3617/*"CLICK_SELECT_WAVE_DECIDE"*/;
  else
    v6 = (System_String_o *)StringLiteral_3410/*"CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v6, 0);
}