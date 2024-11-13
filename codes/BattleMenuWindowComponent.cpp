void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.waveRestartButtonPosInInterruptionQuest.fields.x = xmmword_BD3BD0;
  *(_OWORD *)&this->fields.retireButtonPosInInterruptionQuest.fields.y = xmmword_BD3BE0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_OWORD *)&this->fields.classChartPosInWaveRestartQuest.fields.z = xmmword_BD3640;
  *(_OWORD *)&this->fields.closeButtonPosInInterruptionQuest.fields.x = xmmword_BD2C00;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B190C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B190C3 = 1;
  }
  interruptionWindow = this->fields.interruptionWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CancelInterruption_b__60_0__,
    0LL);
  if ( !interruptionWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))interruptionWindow->klass->vtable._12_Close.method)(
    interruptionWindow,
    v8,
    interruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CheckCanOpenWaveRestartOrInterruption(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattleData_o *data; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct System_String_o *Empty; // x20

  if ( (byte_4B190BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9782/*"OPEN_WAVE_RESTART_WINDOW"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9770/*"OPEN_INTERRUPTION_WINDOW"*/, v10, v11);
    byte_4B190BE = 1;
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
      method = (const MethodInfo *)StringLiteral_9782/*"OPEN_WAVE_RESTART_WINDOW"*/;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_21;
      if ( BattleData__IsInterruptionQuest(data, 0LL) )
        method = (const MethodInfo *)StringLiteral_9770/*"OPEN_INTERRUPTION_WINDOW"*/;
      else
        method = (const MethodInfo *)Empty;
    }
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
      goto LABEL_20;
LABEL_21:
    sub_1BCAA3C(data, method);
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
  v13 = Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_CheckCanOpenWaveRestartOrInterruption__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_21;
  method = (const MethodInfo *)StringLiteral_3423/*"CANCEL"*/;
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *interruptionWindow; // x20
  __int64 v6; // x1
  WaveBattleSelectWaveDialog_o *v7; // x0
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4B190C6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B190C6 = 1;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
  interruptionWindow = (UnityEngine_Object_o *)this->fields.interruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(interruptionWindow, 0LL, 0LL) )
  {
    v7 = (WaveBattleSelectWaveDialog_o *)this->fields.interruptionWindow;
    if ( !v7 )
      goto LABEL_14;
    ((void (__fastcall *)(WaveBattleSelectWaveDialog_o *, _QWORD, void *))v7->klass[1]._1.parent)(
      v7,
      0LL,
      v7->klass[1]._1.generic_class);
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v7 = this->fields.waveSelectDialog;
    if ( v7 )
    {
      WaveBattleSelectWaveDialog__Close(v7, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v7, v6);
  }
}


void __fastcall BattleMenuWindowComponent__CloseWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B190C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B190C0 = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__CloseWaveRestartWindow_b__57_0__,
    0LL);
  if ( !waveRestartWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))waveRestartWindow->klass->vtable._12_Close.method)(
    waveRestartWindow,
    v8,
    waveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__CompClose(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__CompOpen(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *data; // x0

  if ( (byte_4B190B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    byte_4B190B3 = 1;
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
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( data )
      {
        UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
        data = this->fields.waveRestartButton;
        if ( data )
        {
          data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               data,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            UIWidget__ResizeCollider((UIWidget_o *)data, 0LL);
            data = this->fields.interruptionButton;
            if ( data )
            {
              data = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   data,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1BCAA3C(data, method);
  }
LABEL_12:
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Init(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UISprite_o *classChartSp; // x20
  __int64 v19; // x1
  AssetData_o *data; // x0
  __int64 v21; // x1

  if ( (byte_4B190B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20490/*"img_classchart"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17854/*"buttontxt_save"*/, v16, v17);
    byte_4B190B1 = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_20490/*"img_classchart"*/, 0LL);
  data = (AssetData_o *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( BattleData__IsInterruptionQuest((BattleData_o *)data, 0LL) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
    data = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
    if ( data )
    {
      data = (AssetData_o *)AssetData__GetObject_object__49237568(
                              data,
                              (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( data )
      {
        data = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)data,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( this->fields.interruptionButtonLabelSprite )
        {
          UISprite__set_atlas(this->fields.interruptionButtonLabelSprite, (UIAtlas_o *)data, 0LL);
          data = (AssetData_o *)this->fields.interruptionButtonLabelSprite;
          if ( data )
          {
            UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_17854/*"buttontxt_save"*/, 0LL);
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
    sub_1BCAA3C(data, v19);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  BattleWindowComponent_o *checkRetireWindow; // x0
  struct BattleWindowInterruptionComponent_o **p_interruptionWindow; // x21
  UnityEngine_Object_o *interruptionWindow; // x22
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  bool v31; // w1
  struct UnityEngine_GameObject_o *RetireButton; // x8
  __int64 v33; // x1
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  Il2CppObject *v36; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v38; // x0
  UIWidget_o *v39; // x21
  struct BattleData_o *data; // x8
  UIWidget_o *v41; // x22
  float a; // s8
  float r; // s0
  float g; // s1
  float b; // s2
  _BOOL4 v46; // w23
  float v47; // s3
  float v48; // s3
  float v49; // s2
  float v50; // s1
  float v51; // s0
  __int64 v52; // x1
  UILabel_o *waveRestartExplanationLabel; // x24
  __int64 v54; // x1
  Il2CppObject *v55; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  int v63; // s0
  int v64; // s2
  int v65; // s1
  UnityEngine_Color_o v66; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B190B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___, call, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3577/*"CLICK_INTERRUPTION_MENU"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_437/*"#606060"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2941/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v19, v20);
    byte_4B190B2 = 1;
  }
  *(_QWORD *)&v66.fields.r = 0LL;
  *(_QWORD *)&v66.fields.b = 0LL;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, call);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
      *p_interruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.interruptionWindow,
        (int64_t)Component_object,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
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
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v81.fields.r = 0.5;
    v81.fields.g = 0.5;
    v81.fields.b = 0.5;
    v81.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v81, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v31 = 0;
LABEL_52:
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)checkRetireWindow, v31, 0LL);
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
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v86.fields.r = 1.0;
    v86.fields.g = 1.0;
    v86.fields.b = 1.0;
    v86.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v86, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
    if ( !checkRetireWindow )
      goto LABEL_141;
    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)checkRetireWindow,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !checkRetireWindow )
      goto LABEL_141;
    v31 = 1;
    goto LABEL_52;
  }
  if ( !RetireButton )
    goto LABEL_141;
  v34 = UnityEngine_GameObject__GetComponent_object_(
          this->fields.RetireButton,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v34,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_141;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v34, 1, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  v36 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)checkRetireWindow,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v36,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_141;
    v82.fields.r = 0.29804;
    v82.fields.a = 1.0;
    v82.fields.g = 0.29804;
    v82.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)v36, v82, 0LL);
  }
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
  if ( !checkRetireWindow )
    goto LABEL_141;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)checkRetireWindow, 0LL);
  v83.fields.a = 1.0;
  v83.fields.r = 0.29804;
  v83.fields.g = 0.29804;
  v83.fields.b = 0.29804;
  CommonFunction__SetColorAllChild(transform, 0, v83, 0LL);
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.data;
  if ( !checkRetireWindow )
    goto LABEL_141;
  if ( !BattleData__ExistDropItem((BattleData_o *)checkRetireWindow, 0LL) )
  {
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_141;
    v84.fields.a = 1.0;
    v84.fields.r = 0.29804;
    v84.fields.g = 0.29804;
    v84.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)checkRetireWindow, v84, 0LL);
    checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
    if ( !checkRetireWindow )
      goto LABEL_141;
    v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkRetireWindow, 0LL);
    v85.fields.a = 1.0;
    v85.fields.r = 0.29804;
    v85.fields.g = 0.29804;
    v85.fields.b = 0.29804;
    CommonFunction__SetColorAllChild(v38, 0, v85, 0LL);
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
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( checkRetireWindow )
      {
        v39 = (UIWidget_o *)checkRetireWindow;
        ((void (__fastcall *)(BattleWindowComponent_o *, __int64, Il2CppMethodPointer))checkRetireWindow->klass[1].vtable._7_setInitialPos.method)(
          checkRetireWindow,
          1LL,
          checkRetireWindow->klass[1].vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
        UIWidget__set_width(v39, 190, 0LL);
        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
        if ( checkRetireWindow )
        {
          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                           0LL);
          if ( checkRetireWindow )
          {
            v67.fields.z = 0.0;
            v67.fields.x = 260.0;
            v67.fields.y = 80.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v67, 0LL);
            checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
            if ( checkRetireWindow )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, 1, 0LL);
              UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_437/*"#606060"*/, &v66, 0LL);
              checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButton;
              if ( checkRetireWindow )
              {
                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                data = this->fields.data;
                if ( data )
                {
                  v41 = (UIWidget_o *)checkRetireWindow;
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
                    v46 = 0;
                    b = 1.0;
                    g = 1.0;
                    r = 1.0;
                  }
                  else
                  {
LABEL_68:
                    g = v66.fields.g;
                    r = v66.fields.r;
                    b = v66.fields.b;
                    a = v66.fields.a;
                    v46 = 1;
                  }
                  if ( v41 )
                  {
                    v47 = a;
                    UIWidget__set_color(v41, *(UnityEngine_Color_o *)&r, 0LL);
                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.waveRestartButtonLabel;
                    v48 = 1.0;
                    v49 = 1.0;
                    v50 = 1.0;
                    v51 = 1.0;
                    if ( v46 )
                    {
                      v50 = v66.fields.g;
                      v51 = v66.fields.r;
                      v49 = v66.fields.b;
                      v48 = v66.fields.a;
                    }
                    if ( checkRetireWindow )
                    {
                      UIWidget__set_color((UIWidget_o *)checkRetireWindow, *(UnityEngine_Color_o *)&v51, 0LL);
                      waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
                      checkRetireWindow = (BattleWindowComponent_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2941/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/,
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
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkRetireWindow, v46, 0LL);
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
                                    v68.fields.z = 0.0;
                                    v68.fields.x = 210.0;
                                    v68.fields.y = -45.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v68,
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
                                      v55 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)checkRetireWindow,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Object__op_Inequality(
                                                                                       (UnityEngine_Object_o *)v55,
                                                                                       0LL,
                                                                                       0LL);
                                      if ( ((unsigned __int8)checkRetireWindow & 1) != 0 )
                                      {
                                        if ( !v55 )
                                          goto LABEL_141;
                                        v62 = StringLiteral_3577/*"CLICK_INTERRUPTION_MENU"*/;
                                        v55[2].monitor = (void *)StringLiteral_3577/*"CLICK_INTERRUPTION_MENU"*/;
                                        sub_1BCA784(
                                          (PartyOrganizationUtility_o *)&v55[2].monitor,
                                          v62,
                                          v56,
                                          v57,
                                          v58,
                                          v59,
                                          v60,
                                          v61);
                                      }
                                      UIWidget__set_width(v39, 160, 0LL);
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
                                          UIWidget__set_width(v41, 160, 0LL);
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
    sub_1BCAA3C(checkRetireWindow, call);
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
          v69.fields.x = 0.0;
          v69.fields.z = 0.0;
          v69.fields.y = 147.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v69, 0LL);
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
                  v70.fields.x = 0.0;
                  v70.fields.z = 0.0;
                  v70.fields.y = -96.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v70, 0LL);
                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.itemListBtnSpr;
                  if ( checkRetireWindow )
                  {
                    checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)checkRetireWindow,
                                                                     0LL);
                    if ( checkRetireWindow )
                    {
                      v71.fields.z = 0.0;
                      v71.fields.x = -100.0;
                      v71.fields.y = -139.0;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)checkRetireWindow, v71, 0LL);
                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.volumeSettingsButton;
                      if ( checkRetireWindow )
                      {
                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                         0LL);
                        if ( checkRetireWindow )
                        {
                          v72.fields.z = 0.0;
                          v72.fields.x = 100.0;
                          v72.fields.y = -139.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)checkRetireWindow,
                            v72,
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
                                    v73.fields.x = -12.0;
                                    v73.fields.z = 0.0;
                                    v73.fields.y = 80.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v73,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.interruptionButton;
                                    if ( checkRetireWindow )
                                    {
                                      checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                       0LL);
                                      if ( checkRetireWindow )
                                      {
                                        v74.fields.z = 0.0;
                                        v74.fields.x = 159.0;
                                        v74.fields.y = 80.0;
                                        UnityEngine_Transform__set_localPosition(
                                          (UnityEngine_Transform_o *)checkRetireWindow,
                                          v74,
                                          0LL);
                                        checkRetireWindow = (BattleWindowComponent_o *)this->fields.RetireButton;
                                        if ( checkRetireWindow )
                                        {
                                          checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(
                                                                                           (UnityEngine_GameObject_o *)checkRetireWindow,
                                                                                           0LL);
                                          if ( checkRetireWindow )
                                          {
                                            v75.fields.z = 0.0;
                                            v75.fields.x = 330.0;
                                            v75.fields.y = 80.0;
                                            UnityEngine_Transform__set_localPosition(
                                              (UnityEngine_Transform_o *)checkRetireWindow,
                                              v75,
                                              0LL);
                                            checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                            if ( checkRetireWindow )
                                            {
                                              v76.fields.z = 0.0;
                                              v76.fields.x = 144.0;
                                              v76.fields.y = -32.0;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)checkRetireWindow,
                                                v76,
                                                0LL);
                                              checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                              if ( checkRetireWindow )
                                              {
                                                checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)checkRetireWindow,
                                                                                                 0LL);
                                                if ( checkRetireWindow )
                                                {
                                                  v77.fields.y = 15.0;
                                                  v77.fields.z = 0.0;
                                                  v77.fields.x = -262.0;
                                                  UnityEngine_Transform__set_localPosition(
                                                    (UnityEngine_Transform_o *)checkRetireWindow,
                                                    v77,
                                                    0LL);
                                                  checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                                  if ( checkRetireWindow )
                                                  {
                                                    v63 = 1137278976;
LABEL_139:
                                                    v64 = 0;
                                                    v65 = 1126039552;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                                      *(UnityEngine_Vector3_o *)&v63,
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
                                    v78.fields.z = 0.0;
                                    v78.fields.x = 188.0;
                                    v78.fields.y = 73.0;
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)checkRetireWindow,
                                      v78,
                                      0LL);
                                    checkRetireWindow = (BattleWindowComponent_o *)this->fields.toggleButtonsRoot;
                                    if ( checkRetireWindow )
                                    {
                                      v79.fields.y = -23.0;
                                      v79.fields.z = 0.0;
                                      v79.fields.x = 174.0;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)checkRetireWindow,
                                        v79,
                                        0LL);
                                      checkRetireWindow = (BattleWindowComponent_o *)this->fields.classChartSp;
                                      if ( checkRetireWindow )
                                      {
                                        checkRetireWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)checkRetireWindow,
                                                                                         0LL);
                                        if ( checkRetireWindow )
                                        {
                                          v80.fields.y = 21.0;
                                          v80.fields.z = 0.0;
                                          v80.fields.x = -182.0;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)checkRetireWindow,
                                            v80,
                                            0LL);
                                          checkRetireWindow = (BattleWindowComponent_o *)this->fields.closeButton;
                                          if ( checkRetireWindow )
                                          {
                                            v63 = 1136295936;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  Il2CppObject *v25; // x20
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  CommonConfirmDialog_ClickDelegate_o *v33; // x25

  if ( (byte_4B190C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__, v4, v5);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_2923/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2921/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2920/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, v18, v19);
    byte_4B190C5 = 1;
  }
  v20 = Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_OpenInterruptionConfirmWindow__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2920/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v30, v31, v32);
  CommonConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_0__,
    0LL);
  if ( !v25 )
LABEL_10:
    sub_1BCAA3C(Instance, v23);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v25, v26, v27, v28, v29, v33, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattleMenuWindowComponent__OpenInterruptionWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  BattleWindowInterruptionComponent_o *interruptionWindow; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  struct BattleData_o *data; // x8
  struct BattleWindowInterruptionComponent_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  BattleWindowComponent_EndCall_o *v38; // x21

  if ( (byte_4B190C2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_OpenInterruptionWindow__, v4, v5);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__, v6, v7);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__, v8, v9);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__, v10, v11);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__, v12, v13);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v14, v15);
    byte_4B190C2 = 1;
  }
  v16 = Method_BattleMenuWindowComponent_OpenInterruptionWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenInterruptionWindow__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_OpenInterruptionWindow__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  interruptionWindow = this->fields.interruptionWindow;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_0__,
    0LL);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_1__,
    0LL);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_2__,
    0LL);
  data = this->fields.data;
  if ( !data
    || !interruptionWindow
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(
          interruptionWindow,
          v22,
          v26,
          v30,
          0LL,
          1,
          data->fields.turnCount > 1,
          0LL),
        v34 = this->fields.interruptionWindow,
        v38 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v35, v36, v37),
        BattleWindowComponent_EndCall___ctor(
          v38,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent__OpenInterruptionWindow_b__59_3__,
          0LL),
        !v34) )
  {
    sub_1BCAA3C(v31, v32);
  }
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v34->klass->vtable._10_Open.method)(
    v34,
    v38,
    v34->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveRestartWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  BattleWindowContinueWaveRestartComponent_o *waveRestartWindow; // x20
  System_Action_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x22
  __int64 v31; // x1
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  System_String_o *v34; // x25
  System_String_o *v35; // x0
  __int64 v36; // x1
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  struct BattleWindowContinueWaveRestartComponent_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BattleWindowComponent_EndCall_o *v43; // x21

  if ( (byte_4B190BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_OpenWaveRestartWindow__, v5, v6);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__, v7, v8);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__, v9, v10);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__, v11, v12);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_3917/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3919/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3916/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3920/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v23, v24);
    byte_4B190BF = 1;
  }
  waveRestartWindow = this->fields.waveRestartWindow;
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_0__,
    0LL);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_1__,
    0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3920/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3917/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3916/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !waveRestartWindow )
    goto LABEL_10;
  BattleWindowContinueWaveRestartComponent__SetWindow_44961452(waveRestartWindow, v26, v30, v32, v33, v34, v35, 0LL);
  v37 = Method_BattleMenuWindowComponent_OpenWaveRestartWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_OpenWaveRestartWindow__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_OpenWaveRestartWindow__);
  v38 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v37, v37[4]);
  OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0LL);
  v39 = this->fields.waveRestartWindow;
  v43 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v40, v41, v42);
  BattleWindowComponent_EndCall___ctor(
    v43,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveRestartWindow_b__56_2__,
    0LL);
  if ( !v39 )
LABEL_10:
    sub_1BCAA3C(v35, v36);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v39->klass->vtable._10_Open.method)(
    v39,
    v43,
    v39->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__OpenWaveSelectConfirmDialog(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w21
  __int64 v26; // x1
  int32_t DispWaveCount; // w20
  struct BattleData_o *v28; // x8
  System_String_o *v29; // x20
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  struct BattleData_o *v32; // x8
  System_String_o *v33; // x20
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  int32_t v37; // w22
  __int64 v38; // x1
  int32_t v39; // w21
  System_String_o *v40; // x0
  struct BattleData_o *v41; // x8
  System_String_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  int32_t v45; // w27
  int32_t v46; // w22
  __int64 v47; // x1
  Il2CppObject *Instance; // x23
  System_String_o *v49; // x24
  System_String_o *v50; // x25
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  CommonConfirmDialog_ClickDelegate_o *v54; // x26
  int32_t decideTxtSize; // w8
  int32_t v56; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B190C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2927/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2929/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2932/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2931/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, v22, v23);
    byte_4B190C8 = 1;
  }
  v56 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0LL);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_28;
    v29 = (System_String_o *)data;
    v30 = (Il2CppObject *)System_Int32__ToString_63206828((int)v28 + 1040, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v31 = System_String__Format(v29, v30, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v32 = this->fields.data;
    if ( !v32 )
      goto LABEL_28;
    v33 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_63206828((int)v32 + 1040, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    if ( !this->fields.data )
      goto LABEL_28;
    v34 = (Il2CppObject *)data;
    v56 = BattleData__getDispWaveCount(this->fields.data, 0LL);
    v35 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v56, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v31 = System_String__Format_62415592(v33, v34, v35, 0LL);
  }
  v36 = v31;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v37 = data->fields.selectedInterruptionWave;
  v39 = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  if ( v37 == v39 )
  {
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2929/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v41 = this->fields.data;
    if ( !v41 )
      goto LABEL_28;
    v42 = (System_String_o *)data;
    v43 = (Il2CppObject *)System_Int32__ToString_63206828((int)v41 + 1040, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v40 = System_String__Format(v42, v43, 0LL);
  }
  v44 = v40;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v45 = data->fields.selectedInterruptionWave;
  v46 = BattleData__getDispWaveCount(data, 0LL);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2932/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2927/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v51, v52, v53);
  CommonConfirmDialog_ClickDelegate___ctor(
    v54,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectConfirmDialog_b__65_0__,
    0LL);
  if ( !Instance )
LABEL_28:
    sub_1BCAA3C(data, method);
  if ( v45 == v46 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)Instance,
    v49,
    v36,
    v44,
    v50,
    v54,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *waveSelectDialog; // x21
  struct WaveBattleSelectWaveDialog_o **p_waveSelectDialog; // x20
  __int64 v34; // x1
  int64_t Object; // x0
  Il2CppObject *Component_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t v43; // w21
  __int64 v44; // x1
  int32_t Phase; // w22
  int32_t EventId; // w25
  __int64 v47; // x1
  Il2CppObject *Master_object; // x23
  __int64 v49; // x2
  __int64 v50; // x3
  UserEventDeckEntity_o *v51; // x23
  QuestRestrictionInfo_o *v52; // x24
  struct BattleData_o *data; // x8
  int turnCount; // w27
  int32_t v55; // w21
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v57; // x22
  int32_t v58; // w26
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  WaveBattleSelectWaveDialog_CloseDelegate_o *v62; // x25
  WaveBattleSelectWaveDialog_o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Action_int__o *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  WaveBattleSelectWaveDialog_o *v70; // x20
  __int64 v71; // x1
  int32_t v72; // w21
  WaveBattleSelectWaveDialog_o *v73; // x20
  System_Action_o *v74; // x21

  if ( (byte_4B190C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__, v6, v7);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__, v8, v9);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, v10, v11);
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDeckMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_2918/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, v30, v31);
    byte_4B190C7 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    *p_waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.waveSelectDialog,
      (int64_t)Component_object,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
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
  v43 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
  Object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_31;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v43, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_31;
  Object = (int64_t)UserEventDeckMaster__getDeckList(
                      (UserEventDeckMaster_o *)Master_object,
                      Object,
                      EventId,
                      v43,
                      Phase,
                      0LL);
  if ( !Object )
    goto LABEL_31;
  if ( !*(_DWORD *)(Object + 24) )
    sub_1BCAA44(Object, v34);
  v51 = *(UserEventDeckEntity_o **)(Object + 32);
  v52 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v34, v49, v50);
  QuestRestrictionInfo___ctor_41151748(v52, EventId, v43, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  turnCount = data->fields.turnCount;
  v55 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v57 = this->fields.waveSelectDialog;
  v58 = DispWaveCount;
  v62 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1BCAA2C(
                                                        WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo,
                                                        v59,
                                                        v60,
                                                        v61);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v62,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_0__,
    0LL);
  if ( !v57 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__SetDialog(v57, v51, v52, v55, v58 - (turnCount < 2), 1, v62, 0LL);
  v63 = this->fields.waveSelectDialog;
  v67 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v64, v65, v66);
  System_Action_int____ctor(
    v67,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__,
    0LL);
  if ( !v63 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v63, v67, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_31;
  if ( *(int *)(Object + 200) > 1 )
    goto LABEL_29;
  v70 = *p_waveSelectDialog;
  v72 = BattleData__getDispWaveCount((BattleData_o *)Object, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
  Object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BATTLE_INTERRUPTION_WAVE_SELECT_EXPLANATION_LABEL"*/, 0LL);
  if ( !v70 )
LABEL_31:
    sub_1BCAA3C(Object, v34);
  WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(v70, v72, (System_String_o *)Object, 0LL);
LABEL_29:
  v73 = this->fields.waveSelectDialog;
  v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v68, v69);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_2__, 0LL);
  if ( !v73 )
    goto LABEL_31;
  WaveBattleSelectWaveDialog__Open_33050148(v73, v74, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcSelectWaveRestart(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B190C9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B190C9 = 1;
  }
  BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent__ProcSelectWaveRestart_b__66_0__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall BattleMenuWindowComponent__ProcWaveRestart(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BattleWindowComponent_o *waveRestartWindow; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *interruptionWindow; // x20

  if ( (byte_4B190C1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B190C1 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
      sub_1BCAA3C(waveRestartWindow, v4);
    }
  }
}


void __fastcall BattleMenuWindowComponent__SetCancelInterruptionEvent(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190C4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3424/*"CANCEL_INTERRUPTION"*/, v9, v10);
    byte_4B190C4 = 1;
  }
  v11 = StringLiteral_3424/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3424/*"CANCEL_INTERRUPTION"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cancelInterruptionEvent, v11, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CancelInterruption_b__60_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190D3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190D3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___CloseWaveRestartWindow_b__57_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190CE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190CE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x0
  intptr_t v16; // w2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4B190D4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__, v5, v6);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B190D4 = 1;
  }
  if ( isDecide )
  {
    BattleMenuWindowComponent__CloseInterruptionWindowGroup(this, (const MethodInfo *)isDecide);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    v16 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_1__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    v16 = Method_BattleMenuWindowComponent__OpenInterruptionConfirmWindow_b__62_2__;
  }
  v20 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, v16, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v21, v22);
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v20, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B190D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_5079/*"DECIDE_INTERRUPTION"*/, v4, v5);
    byte_4B190D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5079/*"DECIDE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionConfirmWindow_b__62_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B190D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B190D6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.cancelInterruptionEvent, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190CF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3424/*"CANCEL_INTERRUPTION"*/, method, v2);
    byte_4B190CF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3424/*"CANCEL_INTERRUPTION"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleMenuWindowComponent_o *v3; // x19
  struct BattleData_o *data; // x8

  v3 = this;
  if ( (byte_4B190D0 & 1) == 0 )
  {
    this = (BattleMenuWindowComponent_o *)sub_1BCA7E0(&StringLiteral_3565/*"CLICK_CURRENT_WAVE_RESTART"*/, method, v2);
    byte_4B190D0 = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( data->fields.turnCount < 2 )
    return;
  this = (BattleMenuWindowComponent_o *)v3->fields.myFsm;
  if ( !this )
LABEL_7:
    sub_1BCAA3C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3565/*"CLICK_CURRENT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3589/*"CLICK_SELECT_WAVE_RESTART"*/, method, v2);
    byte_4B190D1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3589/*"CLICK_SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenInterruptionWindow_b__59_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190D2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190D2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190CB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5080/*"DECIDE_WAVE_RESTART"*/, method, v2);
    byte_4B190CB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5080/*"DECIDE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_1(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190CC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3427/*"CANCEL_WAVE_RESTART"*/, method, v2);
    byte_4B190CC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3427/*"CANCEL_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveRestartWindow_b__56_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190CD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190CD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectConfirmDialog_b__65_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  WaveBattleSelectWaveDialog_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x22
  __int64 v28; // x1
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4B190DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__, v10, v11);
    sub_1BCA7E0(&BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo, v12, v13);
    byte_4B190DB = 1;
  }
  v14 = sub_1BCAA2C(BattleMenuWindowComponent___c__DisplayClass65_0_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v14 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v14,
    Method_BattleMenuWindowComponent___c__DisplayClass65_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v27, 0LL);
  if ( *(_BYTE *)(v14 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v15 = this->fields.waveSelectDialog;
      if ( v15 )
      {
        WaveBattleSelectWaveDialog__Close(v15, 0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(v15, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_0(
        BattleMenuWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMenuWindowComponent_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleData_o *data; // x8
  int64_t v17; // x1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v19; // x21

  v9 = this;
  if ( (byte_4B190D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, v10, v11);
    sub_1BCA7E0(&StringLiteral_3425/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/, v12, v13);
    this = (BattleMenuWindowComponent_o *)sub_1BCA7E0(&StringLiteral_3576/*"CLICK_INTERRUPTION"*/, v14, v15);
    byte_4B190D7 = 1;
  }
  data = v9->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v17 = StringLiteral_3425/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3425/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v9->fields.cancelInterruptionEvent,
      v17,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (BattleMenuWindowComponent_o *)v9->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3576/*"CLICK_INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(this, isDecide);
  }
  waveSelectDialog = v9->fields.waveSelectDialog;
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_3__, 0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_33048668(waveSelectDialog, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_1(
        BattleMenuWindowComponent_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v10; // x1
  struct BattleData_o *data; // x8

  if ( (byte_4B190D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__, *(_QWORD *)&wave, method);
    sub_1BCA7E0(&StringLiteral_3607/*"CLICK_WAVE_BANNER"*/, v5, v6);
    byte_4B190D9 = 1;
  }
  v7 = Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent__OpenWaveSelectWindow_b__64_1__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_1BCAA3C(myFsm, v10);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3607/*"CLICK_WAVE_BANNER"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_2(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190DA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190DA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___OpenWaveSelectWindow_b__64_3(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *waveSelectDialog; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B190D8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v4, v5);
    byte_4B190D8 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.waveSelectDialog, 0LL, v9, v10, v11, v12, v13, v14);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1BCAA3C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent___ProcSelectWaveRestart_b__66_0(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190DC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190DC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B190BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B190BC = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_1BCAA3C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._12_Close.method)(
    setVolumeWindow,
    v11,
    setVolumeWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__endCloseCkRetire(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190B5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190B5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190BD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190BD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190B7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190B7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B190B9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190B9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0

  if ( (byte_4B190BB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B190BB = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL),
        (setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(setVolumeWindowMask, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)setVolumeWindowMask, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B190CA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21118/*"itemlist_win/Scroll Bar/close"*/, method, v2);
    byte_4B190CA = 1;
  }
  return (System_String_o *)StringLiteral_21118/*"itemlist_win/Scroll Bar/close"*/;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B190B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_endCloseCkRetire__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B190B4 = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._12_Close.method)(
    checkRetireWindow,
    v8,
    checkRetireWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleMenuWindowComponent__modeItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleData_o *data; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  BattleWindowComponent_EndCall_o *v17; // x21
  const MethodInfo *v18; // x3
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4B190B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_endOpenItemListWindow__, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_modeItemListWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v8, v9);
    byte_4B190B8 = 1;
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
    v11 = Method_BattleMenuWindowComponent_modeItemListWindow__;
    if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_modeItemListWindow__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    itemListWindow = this->fields.itemListWindow;
    v17 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v14, v15, v16);
    BattleWindowComponent_EndCall___ctor(
      v17,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v17, v18);
      return;
    }
LABEL_15:
    sub_1BCAA3C(data, method);
  }
  v19 = Method_BattleMenuWindowComponent_modeItemListWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeItemListWindow__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_modeItemListWindow__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleData_o *data; // x0
  bool IsWarBoard; // w0
  _QWORD *v12; // x8
  bool v13; // w20
  System_Reflection_MethodBase_o *v14; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_4B190B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_endOpenCkRetire__, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_modeRetire__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v8, v9);
    byte_4B190B6 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  IsWarBoard = BattleData__IsWarBoard(data, 0LL);
  v12 = Method_BattleMenuWindowComponent_modeRetire__;
  v13 = IsWarBoard;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeRetire__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_modeRetire__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  if ( v13 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(data, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v19 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v16, v17, v18);
  BattleWindowComponent_EndCall___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_11;
  BattleRetireWindowComponent__Open(checkRetireWindow, v19, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4B190BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__, method, v2);
    sub_1BCA7E0(&Method_BattleMenuWindowComponent_modeSetVolumeWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B190BA = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL);
  v9 = Method_BattleMenuWindowComponent_modeSetVolumeWindow__;
  if ( (*((_BYTE *)Method_BattleMenuWindowComponent_modeSetVolumeWindow__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_BattleMenuWindowComponent_modeSetVolumeWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  setVolumeWindowMask = (UnityEngine_GameObject_o *)this->fields.setVolumeControl;
  if ( !setVolumeWindowMask
    || (SetVolumeControl__initSetVolume((SetVolumeControl_o *)setVolumeWindowMask, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v12, v13, v14),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_9:
    sub_1BCAA3C(setVolumeWindowMask, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._10_Open.method)(
    setVolumeWindow,
    v15,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct BattleMenuWindowComponent_o *_4__this; // x8
  System_String_o *v11; // x1

  if ( (byte_4B190DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3588/*"CLICK_SELECT_WAVE_DECIDE"*/, v6, v7);
    byte_4B190DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  if ( this->fields.isDecide )
    v11 = (System_String_o *)StringLiteral_3588/*"CLICK_SELECT_WAVE_DECIDE"*/;
  else
    v11 = (System_String_o *)StringLiteral_3423/*"CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v11, 0LL);
}