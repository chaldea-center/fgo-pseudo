void __fastcall BattleMenuWindowComponent___ctor(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMenuWindowComponent__Close(
        BattleMenuWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
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

  if ( (byte_40FC491 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19380, v3);
    byte_40FC491 = 1;
  }
  classChartSp = this->fields.classChartSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassChart(classChartSp, (System_String_o *)StringLiteral_19380, 0LL);
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
  BattleWindowComponent_o *checkRetireWindow; // x0
  struct BattleRetireWindowComponent_o *v8; // x0
  BattleWindowComponent_o *setVolumeWindow; // x0
  struct BattleWindowComponent_o *v10; // x0
  BattleData_o *data; // x0
  UnityEngine_GameObject_o *RetireButton; // x0
  UIWidget_o *Component_srcLineSprite; // x21
  int v14; // s0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Collider_o *v19; // x0
  bool v20; // w1
  BattleData_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Collider_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  UIWidget_o *v25; // x21
  int v26; // s0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *transform; // x21
  BattleData_o *v32; // x0
  UIWidget_o *itemListBtnSpr; // x21
  int v34; // s0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_Transform_o *v39; // x21
  UnityEngine_GameObject_o *v40; // x0
  UIWidget_o *v41; // x21
  int v42; // s0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v50; // 0:x0.8
  UnityEngine_Color32_o v51; // 0:x0.8
  UnityEngine_Color32_o v52; // 0:x0.8
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC492 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, call);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FC492 = 1;
  }
  c.fields.rgba = 0;
  checkRetireWindow = (BattleWindowComponent_o *)this->fields.checkRetireWindow;
  if ( !checkRetireWindow )
    goto LABEL_43;
  BattleWindowComponent__setInitData(checkRetireWindow, 2, 0.15, 0, 0LL);
  v8 = this->fields.checkRetireWindow;
  if ( !v8 )
    goto LABEL_43;
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, Il2CppMethodPointer))v8->klass->vtable._9_setClose.method)(
    v8,
    v8->klass->vtable._10_Open.methodPtr);
  setVolumeWindow = this->fields.setVolumeWindow;
  if ( !setVolumeWindow )
    goto LABEL_43;
  BattleWindowComponent__setInitData(setVolumeWindow, 2, 0.15, 0, 0LL);
  v10 = this->fields.setVolumeWindow;
  if ( !v10 )
    goto LABEL_43;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v10->klass->vtable._9_setClose.method)(
    v10,
    v10->klass->vtable._10_Open.methodPtr);
  data = this->fields.data;
  if ( !data )
    goto LABEL_43;
  if ( BattleData__isTutorial(data, 0LL) )
  {
    RetireButton = this->fields.RetireButton;
    if ( RetireButton )
    {
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                RetireButton,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
      if ( Component_srcLineSprite )
      {
        UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v14, 0LL);
        v18 = this->fields.RetireButton;
        if ( v18 )
        {
          v19 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v18,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
          if ( v19 )
          {
            v20 = 0;
LABEL_41:
            UnityEngine_Collider__set_enabled(v19, v20, 0LL);
            goto LABEL_42;
          }
        }
      }
    }
    goto LABEL_43;
  }
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_43;
  if ( !BattleData__IsWarBoard(v21, 0LL) )
  {
    v40 = this->fields.RetireButton;
    if ( v40 )
    {
      v41 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v40,
                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
      if ( v41 )
      {
        UIWidget__set_color(v41, *(UnityEngine_Color_o *)&v42, 0LL);
        v46 = this->fields.RetireButton;
        if ( v46 )
        {
          v19 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v46,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
          if ( v19 )
          {
            v20 = 1;
            goto LABEL_41;
          }
        }
      }
    }
    goto LABEL_43;
  }
  p_c = (UnityEngine_Color32_o)&c;
  UnityEngine_Color32___ctor(p_c, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
  v22 = this->fields.RetireButton;
  if ( !v22 )
    goto LABEL_43;
  v23 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v22,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    if ( !v23 )
      goto LABEL_43;
    UnityEngine_Collider__set_enabled(v23, 1, 0LL);
  }
  v24 = this->fields.RetireButton;
  if ( !v24 )
    goto LABEL_43;
  v25 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v24,
                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
  {
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
    if ( !v25 )
      goto LABEL_43;
    UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  }
  v30 = this->fields.RetireButton;
  if ( !v30
    || (transform = UnityEngine_GameObject__get_transform(v30, 0LL),
        v50 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba,
        v53 = UnityEngine_Color32__op_Implicit_40668984(v50, 0LL),
        CommonFunction__SetColorAllChild(transform, 0, v53, 0LL),
        (v32 = this->fields.data) == 0LL) )
  {
LABEL_43:
    sub_B170D4();
  }
  if ( !BattleData__ExistDropItem(v32, 0LL) )
  {
    v51 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    itemListBtnSpr = (UIWidget_o *)this->fields.itemListBtnSpr;
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color32__op_Implicit_40668984(v51, 0LL);
    if ( !itemListBtnSpr )
      goto LABEL_43;
    UIWidget__set_color(itemListBtnSpr, *(UnityEngine_Color_o *)&v34, 0LL);
    v38 = (UnityEngine_Component_o *)this->fields.itemListBtnSpr;
    if ( !v38 )
      goto LABEL_43;
    v39 = UnityEngine_Component__get_transform(v38, 0LL);
    v52 = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    v54 = UnityEngine_Color32__op_Implicit_40668984(v52, 0LL);
    CommonFunction__SetColorAllChild(v39, 0, v54, 0LL);
  }
LABEL_42:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleMenuWindowComponent__closeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  SetVolumeControl_o *setVolumeControl; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_40FC49B & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FC49B = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL),
        (setVolumeControl = this->fields.setVolumeControl) == 0LL)
    || (SetVolumeControl__reflectionVolume(setVolumeControl, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v7, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endCloseSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
    sub_B170D4();
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
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC494 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC494 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattleMenuWindowComponent__endCloseSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC49C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC49C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC496 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC496 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenItemListWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC498 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC498 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattleMenuWindowComponent__endOpenSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC49A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC49A = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask
    || (UnityEngine_GameObject__SetActive(setVolumeWindowMask, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


System_String_o *__fastcall BattleMenuWindowComponent__get_closeBtnPath(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC49D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19941, method);
    byte_40FC49D = 1;
  }
  return (System_String_o *)StringLiteral_19941;
}


void __fastcall BattleMenuWindowComponent__modeCkRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattleRetireWindowComponent_o *checkRetireWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_40FC493 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleMenuWindowComponent_endCloseCkRetire__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v6);
    byte_40FC493 = 1;
  }
  checkRetireWindow = this->fields.checkRetireWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3, v4);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endCloseCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkRetireWindow->klass->vtable._12_Close.method)(
    checkRetireWindow,
    v8,
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
  BattleData_o *v7; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleWindowComponent_EndCall_o *v13; // x21
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC497 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleMenuWindowComponent_endOpenItemListWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_2912, v5);
    byte_40FC497 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_7;
  v7 = this->fields.data;
  if ( !v7 )
    goto LABEL_17;
  if ( BattleData__ExistDropItem(v7, 0LL) )
  {
LABEL_7:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    itemListWindow = this->fields.itemListWindow;
    v13 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v9, v10, v11, v12);
    BattleWindowComponent_EndCall___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleMenuWindowComponent_endOpenItemListWindow__,
      0LL);
    if ( itemListWindow )
    {
      BattleItemListWindowComponent__Open(itemListWindow, 1, v13, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_17;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2912, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeRetire(BattleMenuWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  PlayMakerFSM_o *myFsm; // x0
  BattleRetireWindowComponent_o *checkRetireWindow; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleWindowComponent_EndCall_o *v13; // x21

  if ( (byte_40FC495 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleMenuWindowComponent_endOpenCkRetire__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_2912, v5);
    byte_40FC495 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( BattleData__IsWarBoard(data, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2912, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  checkRetireWindow = this->fields.checkRetireWindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v9, v10, v11, v12);
  BattleWindowComponent_EndCall___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleMenuWindowComponent_endOpenCkRetire__,
    0LL);
  if ( !checkRetireWindow )
    goto LABEL_15;
  BattleRetireWindowComponent__Open(checkRetireWindow, v13, 0LL);
}


void __fastcall BattleMenuWindowComponent__modeSetVolumeWindow(
        BattleMenuWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *setVolumeWindowMask; // x0
  SetVolumeControl_o *setVolumeControl; // x0
  struct BattleWindowComponent_o *setVolumeWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_40FC499 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC499 = 1;
  }
  setVolumeWindowMask = this->fields.setVolumeWindowMask;
  if ( !setVolumeWindowMask )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(setVolumeWindowMask, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  setVolumeControl = this->fields.setVolumeControl;
  if ( !setVolumeControl
    || (SetVolumeControl__initSetVolume(setVolumeControl, 0LL),
        setVolumeWindow = this->fields.setVolumeWindow,
        v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10, v11),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleMenuWindowComponent_endOpenSetVolumeWindow__,
          0LL),
        !setVolumeWindow) )
  {
LABEL_10:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))setVolumeWindow->klass->vtable._10_Open.method)(
    setVolumeWindow,
    v12,
    setVolumeWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleMenuWindowComponent__showConf(
        BattleMenuWindowComponent_o *this,
        BattleDropItem_o *drop,
        const MethodInfo *method)
{
  ;
}