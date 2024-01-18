void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  MyRoomControl_c *v11; // x8

  if ( (byte_4185CD6 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2554/*"BGM_MYROOM_1"*/, v8);
    byte_4185CD6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2554/*"BGM_MYROOM_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2554/*"BGM_MYROOM_1"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = MyRoomControl_TypeInfo;
  MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY = 1;
  v11->static_fields->BUTTON_LIMIT_CHANGE = 2;
  v11->static_fields->BUTTON_DISP_CHANGE = 4;
  v11->static_fields->BUTTON_HELP = 8;
  v11->static_fields->BUTTON_MULTIPLE_VIEW = 16;
  v11->static_fields->BUTTON_PHOTO_CAMPAIGN = 32;
  v11->static_fields->BUTTON_OUT_X = -800.0;
  v11->static_fields->MULTIPLE_VIEW_SELECTED_MAX = 2;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MyRoomStateMaterial_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_int__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_int__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w8
  struct System_Int64_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Int32_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0

  if ( (byte_4185CD5 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&long___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&MyRoomStateMaterial_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v7);
    byte_4185CD5 = 1;
  }
  *(_OWORD *)&this->fields.photoFrameWidth = xmmword_319FE80;
  this->fields.photoFramePosY = 11.0;
  v8 = (MyRoomStateMaterial_o *)sub_B2C42C(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v8, 0LL);
  this->fields.mStateMaterial = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mStateMaterial,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.materialImageIdList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v29 )
    sub_B2C434(0LL, v30);
  v37 = *(_DWORD *)(v29 + 24);
  if ( !v37 || (*(_DWORD *)(v29 + 40) = 0, *(_QWORD *)(v29 + 32) = 0x43900000C4000000LL, v37 == 1) )
  {
    v52 = sub_B2C460(v29);
    sub_B2C400(v52, 0LL);
  }
  *(_DWORD *)(v29 + 52) = 0;
  *(_QWORD *)(v29 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defaultMultipleServantPoses,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.voicePlayButtonDefaultPos = UnityEngine_Vector3__get_zero(0LL);
  this->fields.multipleViewFinishedTime = -1LL;
  v38 = (struct System_Int64_array *)sub_B2C374(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v45;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.photoCampaignFinishedTime = -1LL;
  *(_QWORD *)&this->fields.defaultPhotoServantPos.fields.x = 0x4390000000000000LL;
  this->fields.defaultPhotoServantPos.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__BlockTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomControl_c *v5; // x0
  const MethodInfo *v6; // x1
  UIWidget_o *changeBGBtnImg; // x20
  MyRoomData_o *myRoomData; // x0
  __int64 v9; // x1
  int v10; // s0
  UIWidget_o *helpButtonImg; // x20
  int v15; // s0
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v23; // s0
  MyRoomControl_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4185CA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&MyRoomControl_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4185CA7 = 1;
  }
  v5 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v5->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v6);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_gray(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_28;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v10, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_gray(0LL);
  if ( !helpButtonImg )
    goto LABEL_28;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v15, 0LL);
  myRoomData = this->fields.myRoomData;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !myRoomData )
    goto LABEL_28;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !myRoomData )
    goto LABEL_28;
  usrDeckData = myRoomData[1].fields.usrDeckData;
  mstInfoData = myRoomData[1].fields.mstInfoData;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v28.fields.fakeValue = mstInfoData;
  myRoomData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_28;
    LODWORD(myRoomData) = materialImageIdList->fields._size - 1;
  }
  if ( (int)myRoomData >= 1 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_28;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v23, 0LL);
    v27 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v27 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v27->static_fields->BUTTON_LIMIT_CHANGE;
  }
  myRoomData = (MyRoomData_o *)this->fields.mBlocker;
  if ( !myRoomData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomData, 1, 0LL),
        (myRoomData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_28:
    sub_B2C434(myRoomData, v9);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)myRoomData, 1, 0LL);
  if ( this->fields.type == 10 )
  {
    myRoomData = (MyRoomData_o *)this->fields.soundPlayerComp;
    if ( myRoomData )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)myRoomData, 1, 0LL);
      return;
    }
    goto LABEL_28;
  }
}


float __fastcall MyRoomControl__CalcGameScreenAspectRatio(MyRoomControl_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  int32_t width; // w0

  if ( (byte_4185CCE & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_4185CCE = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v2->static_fields;
  v4 = (float)static_fields[22];
  v5 = v4 / (float)static_fields[20];
  v6 = v4 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  return UnityEngine_Mathf__Clamp((float)height / (float)width, v6, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MyRoomControl__CaptureServant(
        MyRoomControl_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4185CC9 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__CaptureServant_d__350_TypeInfo, *(_QWORD *)&width);
    byte_4185CC9 = 1;
  }
  v7 = sub_B2C42C(MyRoomControl__CaptureServant_d__350_TypeInfo);
  MyRoomControl__CaptureServant_d__350___ctor((MyRoomControl__CaptureServant_d__350_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = width;
  *(_DWORD *)(v7 + 48) = height;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeDisp(MyRoomControl_o *this, bool isSePlay, const MethodInfo *method)
{
  char v3; // vf
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MyRoomControl_c *v11; // x0
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v18; // s0
  float v19; // s9
  float v20; // s1
  float v21; // s8
  const MethodInfo *v22; // x2
  float v23; // s2
  float v24; // s10
  MyRoomControl_o *v25; // x0
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x2
  float v28; // s9
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  int32_t v31; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x3
  MyRoomControl_c *v35; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  StandFigureBack_o *v44; // x20
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1
  UnityEngine_Vector3_o movePos; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185CA4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isSePlay);
    sub_B2C35C(&Method_MyRoomControl__ChangeDisp_b__291_0__, v6);
    sub_B2C35C(&Method_MyRoomControl__ChangeDisp_b__291_1__, v7);
    sub_B2C35C(&MyRoomControl_TypeInfo, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_11389/*"ReleaseTouch"*/, v10);
    byte_4185CA4 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  movePos.fields.z = 0.0;
  *(_QWORD *)&movePos.fields.x = 0LL;
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_60;
  v11 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v11->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v11->static_fields->BUTTON_DISP_CHANGE) == 0) )
  {
LABEL_60:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v12);
    if ( isSePlay )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
    mShowPos = this->fields.mShowPos;
    moveTarget = this->fields.mMainObj;
    moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
    moveHidePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    movePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    switch ( this->fields.type )
    {
      case 1:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v16);
        goto LABEL_16;
      case 6:
        moveTarget = this->fields.noticeObj;
        goto LABEL_16;
      case 0xA:
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.soundPlayerComp;
        if ( !soundPlayerComp )
          goto LABEL_57;
        gameObject = UnityEngine_Component__get_gameObject(soundPlayerComp, 0LL);
        moveTarget = gameObject;
LABEL_16:
        MyRoomControl__setupServantListUIMoveData(
          (MyRoomControl_o *)gameObject,
          this->fields.servantListObj,
          &LocalPosition,
          &movePos,
          v16);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.standFigureBack;
        if ( !soundPlayerComp )
          goto LABEL_57;
        soundPlayerComp = (UnityEngine_Component_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)soundPlayerComp,
                                                       0,
                                                       0LL);
        if ( !soundPlayerComp )
          goto LABEL_57;
        soundPlayerComp = (UnityEngine_Component_o *)soundPlayerComp[1].klass;
        if ( !soundPlayerComp )
          goto LABEL_57;
        soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(soundPlayerComp, 0LL);
        if ( !soundPlayerComp )
          goto LABEL_57;
        v18 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v19 = *(float *)&v18,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v21 = v20,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_57:
          sub_B2C434(soundPlayerComp, v15);
        }
        *(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)soundPlayerComp,
                                                 0LL);
        switch ( this->fields.mState )
        {
          case 0:
            v24 = v23;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v22);
            MyRoomControl__setupSortWindowUIMoveData(
              v25,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v26);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, movePos, v27);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_57;
            v28 = -v19;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v29);
            v58.fields.x = v28;
            v58.fields.y = v21;
            v58.fields.z = v24;
            MyRoomControl__moveControl(this, this->fields.svtObj, v58, (System_String_o *)StringLiteral_11389/*"ReleaseTouch"*/, v30);
            v31 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_57;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v35 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v35 = MyRoomControl_TypeInfo;
            }
            v59.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v59.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v59.fields.x = v35->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v59, 0LL, v34);
            v60.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v60.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v60.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v60, 0LL, v37);
            v61.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v61.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v61.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v61, 0LL, v38);
            v62.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v62.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v62.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v62, 0LL, v39);
            v63.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v63.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v63.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v63, (System_String_o *)StringLiteral_11389/*"ReleaseTouch"*/, v40);
            v64.fields.y = this->fields.helpBtnInitPos.fields.y;
            v64.fields.z = this->fields.helpBtnInitPos.fields.z;
            v64.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v64, 0LL, v41);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v31 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v15);
            standFigureBack = this->fields.standFigureBack;
            v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v33, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__291_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_57;
            StandFigureBack__Fadeout(standFigureBack, v33, 0LL);
            v31 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v22);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v42);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v43);
            v44 = this->fields.standFigureBack;
            v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v45, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__291_1__, 0LL);
            if ( !v44 )
              goto LABEL_57;
            StandFigureBack__Fadein(v44, v45, 0LL);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_57;
            TitleInfoControl__FrameIn((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameIn(0, 0LL);
            MyRoomControl__moveControl(
              this,
              this->fields.multipleViewButton,
              this->fields.multipleViewButtonInitPos,
              0LL,
              v46);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v47);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v48);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v49);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v50);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v51);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0LL);
            v31 = 0;
            break;
          default:
            goto LABEL_52;
        }
        this->fields.mState = v31;
LABEL_52:
        MyRoomControl__SetMultipleViewButtonColor(this, v15);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v52);
        break;
      default:
        goto LABEL_16;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeSetBtnsTouch(MyRoomControl_o *this, bool isSet, const MethodInfo *method)
{
  UIWidget_o *playBtnImg; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0
  MyRoomControl_c *v12; // x0
  int32_t buttonFlag; // w9
  UIWidget_o *changeBtnImg; // x21
  int32_t BUTTON_VOICE_PLAY; // w8
  int v16; // w10
  int v17; // w8
  int v18; // s0
  MyRoomControl_c *v22; // x0
  int32_t v23; // w9
  UIWidget_o *changeBGBtnImg; // x21
  int32_t BUTTON_LIMIT_CHANGE; // w8
  int v26; // w10
  int v27; // w8
  int v28; // s0
  MyRoomControl_c *v32; // x0
  int32_t v33; // w9
  int32_t BUTTON_DISP_CHANGE; // w8
  int v35; // w10
  int v36; // w8

  if ( (byte_4185CAB & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, isSet);
    byte_4185CAB = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v8, 0LL);
  v12 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v12 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
  BUTTON_VOICE_PLAY = v12->static_fields->BUTTON_VOICE_PLAY;
  v16 = buttonFlag & ~BUTTON_VOICE_PLAY;
  v17 = buttonFlag | BUTTON_VOICE_PLAY;
  if ( !isSet )
    v17 = v16;
  this->fields.buttonFlag = v17;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v18, 0LL);
  v22 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v22 = MyRoomControl_TypeInfo;
  }
  v23 = this->fields.buttonFlag;
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  BUTTON_LIMIT_CHANGE = v22->static_fields->BUTTON_LIMIT_CHANGE;
  v26 = v23 & ~BUTTON_LIMIT_CHANGE;
  v27 = v23 | BUTTON_LIMIT_CHANGE;
  if ( !isSet )
    v27 = v26;
  this->fields.buttonFlag = v27;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !changeBGBtnImg )
LABEL_31:
      sub_B2C434(v6, v7);
  }
  else
  {
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBGBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v28, 0LL);
  v32 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v32 = MyRoomControl_TypeInfo;
  }
  v33 = this->fields.buttonFlag;
  BUTTON_DISP_CHANGE = v32->static_fields->BUTTON_DISP_CHANGE;
  v35 = v33 & ~BUTTON_DISP_CHANGE;
  v36 = v33 | BUTTON_DISP_CHANGE;
  if ( !isSet )
    v36 = v35;
  this->fields.buttonFlag = v36;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeSetStandFigureObj(
        MyRoomControl_o *this,
        bool isSet,
        bool isTouch,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  UnityEngine_Object_o *SvtStandFigure; // x22

  if ( (byte_4185CAA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isSet);
    byte_4185CAA = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_13;
  SvtStandFigure = (UnityEngine_Object_o *)StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  standFigureBack = (StandFigureBack_o *)UnityEngine_Object__op_Inequality(SvtStandFigure, 0LL, 0LL);
  if ( ((unsigned __int8)standFigureBack & 1) != 0 )
  {
    if ( SvtStandFigure )
    {
      standFigureBack = (StandFigureBack_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)SvtStandFigure,
                                               0LL);
      if ( standFigureBack )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isSet, 0LL);
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_B2C434(standFigureBack, isSet);
  }
LABEL_11:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v7; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v9; // x9
  System_String_o *v10; // x1

  if ( (byte_4185CB0 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3065/*"CLICK_MATERIAL"*/, v3);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v4);
    byte_4185CB0 = 1;
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v10 = (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(myRoomFsm, method);
  }
  name = sceneJumpInfo->fields.name;
  v7 = MyRoomRootComponent_TypeInfo;
  if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v7 = MyRoomRootComponent_TypeInfo;
  }
  myRoomFsm = (PlayMakerFSM_o *)System_String__op_Equality(name, v7->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_15;
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    v9 = &StringLiteral_3065/*"CLICK_MATERIAL"*/;
  else
    v9 = &StringLiteral_6892/*"GO_NEXT"*/;
  v10 = (System_String_o *)*v9;
  myRoomFsm = this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent(myRoomFsm, v10, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4185CBD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__CloseMultipleView_b__336_0__, v3);
    byte_4185CBD = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__336_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v4; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int max_length; // w9
  il2cpp_array_size_t v9; // w24
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x10
  float y; // s10
  float x; // s11
  float v13; // s1
  struct StandFigureBack_array *v14; // x8
  float v15; // s8
  const MethodInfo *v16; // x3
  struct StandFigureBack_array *v17; // x8
  System_String_o *v18; // x2
  __int64 v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185CBB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6686/*"FinishedCloseMultiServant"*/, method);
    byte_4185CBB = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_B2C434(mBlocker, method);
  }
  v6 = 0LL;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      break;
    defaultMultipleServantPoses = this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_20;
    if ( v9 >= defaultMultipleServantPoses->max_length || v9 >= max_length )
    {
LABEL_22:
      v19 = sub_B2C460(mBlocker);
      sub_B2C400(v19, 0LL);
    }
    mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v7);
    if ( mBlocker )
    {
      y = defaultMultipleServantPoses->m_Items[v6].fields.y;
      x = defaultMultipleServantPoses->m_Items[v6 + 1].fields.x;
      mBlocker = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)mBlocker,
                                               0LL);
      if ( mBlocker )
      {
        *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)mBlocker,
                                                 0LL);
        v14 = this->fields.multipleStandFigureBacks;
        if ( v14 )
        {
          if ( v9 >= v14->max_length )
            goto LABEL_22;
          mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&v14->obj.klass + v7);
          if ( mBlocker )
          {
            v15 = v13;
            mBlocker = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mBlocker, 0LL);
            v17 = this->fields.multipleStandFigureBacks;
            if ( v17 )
            {
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6686/*"FinishedCloseMultiServant"*/ : 0LL;
              v20.fields.y = v15;
              v20.fields.x = flt_319FD90[(_DWORD)v7 == 4] + y;
              v20.fields.z = x + 0.0;
              MyRoomControl__moveControl(this, mBlocker, v20, v18, v16);
              multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
              ++v7;
              ++v6;
              if ( multipleStandFigureBacks )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_20;
  }
}


void __fastcall MyRoomControl__ClosePhotoCampaignPanel(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4185CD1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_0__, v4);
    byte_4185CD1 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v5, 0, v6);
}


void __fastcall MyRoomControl__ClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  float v6; // s8
  float v7; // s9
  float v8; // s10
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v10; // x3
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185CCF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6687/*"FinishedClosePhotoCampaignServant"*/, method);
    byte_4185CCF = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    sub_B2C434(0LL, v4);
  v6 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v7 = this->fields.currentPhotoServantPos.fields.x + -1300.0;
  v8 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v11.fields.x = v7;
  v11.fields.y = v6;
  v11.fields.z = v8;
  MyRoomControl__moveControl(this, gameObject, v11, (System_String_o *)StringLiteral_6687/*"FinishedClosePhotoCampaignServant"*/, v10);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185C99 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_TypeInfo, setEndAction);
    byte_4185C99 = 1;
  }
  v5 = sub_B2C42C(MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__253___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setEndAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)setEndAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


CRIMoviePlayer_o *__fastcall MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4185CAD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_B2C35C(&StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v5);
    byte_4185CAD = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                        (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     UIAtlas,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v7,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__DispDefaultMyRoom(
        MyRoomControl_o *this,
        bool isDispDefault,
        System_Action_o *callback,
        bool isFadein,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  StandFigureBack_o *v29; // x21
  System_Action_o *v30; // x23
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v32; // x23
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4185CBC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDispDefault);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__0__, v9);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__1__, v10);
    sub_B2C35C(&MyRoomControl___c__DisplayClass334_0_TypeInfo, v11);
    byte_4185CBC = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = sub_B2C42C(MyRoomControl___c__DisplayClass334_0_TypeInfo);
  MyRoomControl___c__DisplayClass334_0___ctor((MyRoomControl___c__DisplayClass334_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_29;
  *(_QWORD *)(v12 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  MyRoomControl__stopSvtVoice(this, v27);
  MyRoomControl__BlockTouch(this, v28);
  if ( !isDispDefault )
  {
    standFigureBack = this->fields.standFigureBack;
    v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v12,
      Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__1__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadeout(standFigureBack, v32, 0LL);
      frontObjectManager = this->fields.frontObjectManager;
      if ( frontObjectManager )
      {
        MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
        goto LABEL_13;
      }
    }
LABEL_29:
    sub_B2C434(frontObjectManager, v14);
  }
  if ( isFadein )
  {
    v29 = this->fields.standFigureBack;
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v12,
      Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__0__,
      0LL);
    if ( !v29 )
      goto LABEL_29;
    StandFigureBack__Fadein(v29, v30, 0LL);
  }
  frontObjectManager = this->fields.frontObjectManager;
  if ( !frontObjectManager )
    goto LABEL_29;
  MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
LABEL_13:
  MainMenuBar__setMenuActive(isDispDefault, 0LL, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.voicePlayBtn;
  if ( !frontObjectManager )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.moveBtnObj;
  if ( !frontObjectManager )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeLimitBtn;
  if ( !frontObjectManager )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.helpBtn;
  if ( !frontObjectManager )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.multipleViewButton;
  if ( !frontObjectManager )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  if ( !frontObjectManager )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  mMainObj = this->fields.mMainObj;
  mShowPos = this->fields.mShowPos;
  moveTarget = mMainObj;
  moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
  switch ( this->fields.type )
  {
    case 1:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v36);
      mMainObj = moveTarget;
      goto LABEL_21;
    case 6:
      mMainObj = this->fields.noticeObj;
      moveTarget = mMainObj;
      if ( !isDispDefault )
        goto LABEL_27;
      goto LABEL_22;
    case 0xA:
      frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.soundPlayerComp;
      if ( !frontObjectManager )
        goto LABEL_29;
      mMainObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frontObjectManager, 0LL);
      moveTarget = mMainObj;
      if ( !isDispDefault )
        goto LABEL_27;
      goto LABEL_22;
    default:
LABEL_21:
      if ( isDispDefault )
      {
LABEL_22:
        x = moveShowPos.fields.x;
        y = moveShowPos.fields.y;
        z = moveShowPos.fields.z;
      }
      else
      {
LABEL_27:
        y = LocalPosition.fields.y;
        x = LocalPosition.fields.x;
        z = LocalPosition.fields.z;
      }
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v35);
      return;
  }
}


void __fastcall MyRoomControl__DispPhotoCampaign(
        MyRoomControl_o *this,
        int64_t usrSvtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_4185CC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, usrSvtId);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    byte_4185CC6 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  MissionNotifyManager__StartPause(v8, 0LL);
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *svtCtr; // x0
  const MethodInfo *v9; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__201_0; // x21
  Il2CppObject *v16; // x22
  struct MyRoomControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4185C7D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_MyRoomControl___c__EndLoad_b__201_0__, v5);
    sub_B2C35C(&MyRoomControl___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_8407/*"LOAD_END"*/, v7);
    byte_4185C7D = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_23;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v9);
  if ( SvtVoiceEnt )
  {
    method = (const MethodInfo *)SvtVoiceEnt;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_23;
    MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)svtCtr, (ServantVoiceEntity_o *)method, 0LL);
  }
  if ( !this->fields.sceneJumpInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    svtCtr = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      svtCtr = MyRoomControl___c_TypeInfo;
    }
    static_fields = (struct MyRoomControl___c_StaticFields *)*((_QWORD *)svtCtr + 23);
    _9__201_0 = static_fields->__9__201_0;
    if ( !_9__201_0 )
    {
      if ( (*((_BYTE *)svtCtr + 307) & 4) != 0 && !*((_DWORD *)svtCtr + 56) )
      {
        j_il2cpp_runtime_class_init_0(svtCtr);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__201_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__201_0, v16, Method_MyRoomControl___c__EndLoad_b__201_0__, 0LL);
      v17 = MyRoomControl___c_TypeInfo->static_fields;
      v17->__9__201_0 = _9__201_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v17->__9__201_0,
        (System_Int32_array **)_9__201_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__201_0, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B2C434(svtCtr, method);
  }
LABEL_21:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8407/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  CommonUI_o *v12; // x19

  if ( (byte_4185CB1 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4185CB1 = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.sceneJumpInfo, 0LL, v2, v3, v4, v5, v6, v7);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v12 )
      sub_B2C434(Instance, v11);
    CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
}


void __fastcall MyRoomControl__EndTurorialRequest(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_B2C434(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__FingerGestures_OnGestureEvent(
        MyRoomControl_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  __int64 v5; // x1
  UnityEngine_Object_o *startSelection; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x10

  v4 = this;
  if ( (byte_4185CAF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_B2C35C(&SwipeGesture_TypeInfo, v5);
    byte_4185CAF = 1;
  }
  if ( !gesture )
    sub_B2C434(this, gesture);
  startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startSelection, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
    {
      v8 = *(&SwipeGesture_TypeInfo->_2.bitflags2 + 1);
      if ( *(&gesture->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[v8 - 1] == SwipeGesture_TypeInfo )
      {
        if ( (v4->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(v4, 0, v7);
        if ( v4->fields.multipleViewState == 3 )
        {
          v4->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(v4, 1, v7);
        }
      }
    }
  }
}


void __fastcall MyRoomControl__FinishedCloseFullScreenPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  const MethodInfo *v4; // x2

  photoCampaignProduction = this->fields.photoCampaignProduction;
  if ( !photoCampaignProduction
    || (UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0LL),
        (photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignBackGroundSprite) == 0LL)
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
          photoCampaignProduction,
          photoCampaignProduction->klass[1]._1.declaringType,
          1.0),
        (photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignFadeSprite) == 0LL) )
  {
    sub_B2C434(photoCampaignProduction, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  MyRoomControl__SetBackButtonIgnore(this, 0, v4);
}


void __fastcall MyRoomControl__FinishedCloseMultiServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  const MethodInfo *v4; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  int max_length; // w9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B2C460(multipleViewCloseButton);
      sub_B2C400(v10, 0LL);
    }
    multipleViewCloseButton = (UnityEngine_GameObject_o *)multipleStandFigureBacks->m_Items[v6];
    if ( multipleViewCloseButton )
    {
      StandFigureBack__Init((StandFigureBack_o *)multipleViewCloseButton, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v6;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_8;
  }
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v4);
  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton
    || (UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL),
        (multipleViewCloseButton = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn((TitleInfoControl_o *)multipleViewCloseButton, 1, 0LL),
        (multipleViewCloseButton = (UnityEngine_GameObject_o *)this->fields.multipleViewComponent) == 0LL)
    || (MultipleViewComponent__Open((MultipleViewComponent_o *)multipleViewCloseButton, 0, v8),
        MyRoomControl__SetBackButtonIgnore(this, 0, v9),
        (multipleViewCloseButton = this->fields.mBlocker) == 0LL) )
  {
LABEL_8:
    sub_B2C434(multipleViewCloseButton, method);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  const MethodInfo *v16; // x2

  if ( (byte_4185CD0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_4185CD0 = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_21;
  photoCampaignStandFigureBack = (StandFigureBack_o *)titleInfo->fields.headerBgImg;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  photoCampaignStandFigureBack = (StandFigureBack_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                                        0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignStandFigureBack, 1, 0LL);
  photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL);
  photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoCampaignCameraButton;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignStandFigureBack, 0, 0LL);
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
    0LL,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_31328080(v15, 1.0, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !photoCampaignStandFigureBack
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoCampaignComponent) == 0LL) )
  {
LABEL_21:
    sub_B2C434(photoCampaignStandFigureBack, method);
  }
  PhotoCampaignComponent__Open((PhotoCampaignComponent_o *)photoCampaignStandFigureBack, 0, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v16);
}


void __fastcall MyRoomControl__FinishedFadeMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v6; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL);
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v6);
}


void __fastcall MyRoomControl__FinishedFadePhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  struct UnityEngine_GameObject_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185CC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185CC8 = 1;
  }
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    goto LABEL_10;
  photoCampaignCameraEffect = this->fields.photoCampaignCameraEffect;
  transform = UnityEngine_GameObject__get_transform(photoCampaignCameraButton, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                            (UILabel_o *)photoCampaignCameraEffect,
                                            transform,
                                            (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  this->fields.photoCampaignInstantiateCameraEffect = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignCameraButton
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignCameraButton, 0LL),
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        photoCampaignCameraButton = this->fields.photoCampaignCameraButton,
        this->fields.currentPhotoServantPos = LocalPosition,
        !photoCampaignCameraButton) )
  {
LABEL_10:
    sub_B2C434(photoCampaignCameraButton, method);
  }
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v15);
}


void __fastcall MyRoomControl__FormChangeCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  ServantVoiceData_o *FirstServantVoiceData; // x0
  ServantVoiceData_o *v6; // x20
  __int64 *v7; // x9
  System_String_o *v8; // x1

  if ( (byte_4185C89 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9325/*"NORMAL_FORM"*/, method);
    sub_B2C35C(&StringLiteral_2950/*"CHANGE_FORM"*/, v3);
    byte_4185C89 = 1;
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 0;
  if ( !svtCtr )
    goto LABEL_17;
  if ( !MyRoomSvtControl__SetVoiceData(svtCtr, 0LL) )
    goto LABEL_12;
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_17;
  FirstServantVoiceData = MyRoomSvtControl__GetFirstServantVoiceData(svtCtr, 0LL);
  if ( !FirstServantVoiceData || (v6 = FirstServantVoiceData, !FirstServantVoiceData->fields.changeEffect) )
  {
LABEL_12:
    svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
    if ( svtCtr )
    {
      v8 = (System_String_o *)StringLiteral_9325/*"NORMAL_FORM"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_B2C434(svtCtr, method);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_17;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_17;
  if ( v6->fields.form == (_DWORD)svtCtr )
    v7 = &StringLiteral_9325/*"NORMAL_FORM"*/;
  else
    v7 = &StringLiteral_2950/*"CHANGE_FORM"*/;
  v8 = (System_String_o *)*v7;
  svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, v8, 0LL);
}


UnityEngine_Camera_o *__fastcall MyRoomControl__GetCamera2DUI(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mCamera2DUI;
}


bool __fastcall MyRoomControl__GetIsListActive(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.IsListActive;
}


bool __fastcall MyRoomControl__GetIsMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.IsMaterialEventBack;
}


MaterialCollectionServantListViewManager_o *__fastcall MyRoomControl__GetMaterialCollectionServantListViewManager(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  return this->fields.materialCollectionServantListViewManager;
}


MaterialEventLogListViewManager_o *__fastcall MyRoomControl__GetMaterialEventLogListViewManager(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mMaterialEventLogListViewManager;
}


MaterialEventLogServantListViewManager_o *__fastcall MyRoomControl__GetMaterialEventLogServantListViewManager(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  return this->fields.materialEventLogServantListViewManager;
}


void __fastcall MyRoomControl__GetMaximTransformValues(
        MyRoomControl_o *this,
        UnityEngine_Vector3_o *localScale,
        UnityEngine_Vector3_o *localEulerAngle,
        const MethodInfo *method)
{
  MyRoomControl_o *v6; // x21
  float v7; // s0
  float photoFrameHeight; // s2
  float photoFrameWidth; // s1
  ManagerConfig_c *v10; // x0
  int *p_WIDTH; // x8
  int v12; // s0
  float v13; // s0

  v6 = this;
  if ( (byte_4185CCD & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B2C35C(&ManagerConfig_TypeInfo, localScale);
    byte_4185CCD = 1;
  }
  v7 = MyRoomControl__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  photoFrameHeight = (float)v6->fields.photoFrameHeight;
  photoFrameWidth = (float)v6->fields.photoFrameWidth;
  v10 = ManagerConfig_TypeInfo;
  if ( v7 >= (float)(photoFrameHeight / photoFrameWidth) )
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
      photoFrameHeight = (float)v6->fields.photoFrameHeight;
    }
    photoFrameWidth = photoFrameHeight;
    p_WIDTH = &v10->static_fields->WIDTH;
  }
  else
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
      photoFrameWidth = (float)v6->fields.photoFrameWidth;
    }
    p_WIDTH = &v10->static_fields->HEIGHT;
  }
  v12 = *p_WIDTH;
  localScale->fields.z = 1.0;
  v13 = (float)v12 / photoFrameWidth;
  localScale->fields.x = v13;
  localScale->fields.y = v13;
  *(_QWORD *)&localEulerAngle->fields.x = 0LL;
  localEulerAngle->fields.z = 90.0;
}


int32_t __fastcall MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x20
  __int64 materialFigureSvtDispIdx; // x19

  v2 = this;
  if ( (byte_4185CAE & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4185CAE = 1;
  }
  materialImageIdList = v2->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_B2C434(this, method);
  materialFigureSvtDispIdx = v2->fields.materialFigureSvtDispIdx;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
}


SceneJumpInfo_o *__fastcall MyRoomControl__GetSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.sceneJumpInfo;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall MyRoomControl__GetSortedCostumeIds(
        MyRoomControl_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  void *Instance; // x0
  __int64 v11; // x1
  int v12; // w8
  void *v13; // x20
  unsigned int v14; // w21
  __int64 v15; // x8
  __int64 v17; // x0

  if ( (byte_4185CB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185CB2 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v17 = sub_B2C460(Instance);
        sub_B2C400(v17, 0LL);
      }
      v15 = *((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 || !v9 )
        break;
      System_Collections_Generic_List_int___Add(
        v9,
        *(_DWORD *)(v15 + 20),
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_12;
    }
LABEL_14:
    sub_B2C434(Instance, v11);
  }
LABEL_12:
  if ( !v9 )
    goto LABEL_14;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4185C76 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B2C35C(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_4185C76 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
  return mFSM->fields.m_state;
}


MyRoomStateMaterial_o *__fastcall MyRoomControl__GetStateMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mStateMaterial;
}


void __fastcall MyRoomControl__GoToTitle(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  CommonUI_o *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v13; // x23
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0

  if ( (byte_4185C9E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_MyRoomControl__GoToTitle_b__281_0__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_8889/*"MYROOM_TITLE_CONFIRM"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4185C9E = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8889/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__281_0__, 0LL);
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    sub_B2C434(v15, v14);
  CommonUI__OpenConfirmDialog(
    Instance,
    v10,
    v11,
    v13,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185C96 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__InitMaterialOnBackground_d__247_TypeInfo, method);
    byte_4185C96 = 1;
  }
  v3 = sub_B2C42C(MyRoomControl__InitMaterialOnBackground_d__247_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__247___ctor((MyRoomControl__InitMaterialOnBackground_d__247_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185C98 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__InitServantMenu_d__250_TypeInfo, method);
    byte_4185C98 = 1;
  }
  v3 = sub_B2C42C(MyRoomControl__InitServantMenu_d__250_TypeInfo);
  MyRoomControl__InitServantMenu_d__250___ctor((MyRoomControl__InitServantMenu_d__250_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall MyRoomControl__IsEnableButton(MyRoomControl_o *this, int32_t button, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.buttonFlag & button) < 0) ^ v3 | ((this->fields.buttonFlag & button) == 0));
}


bool __fastcall MyRoomControl__IsEnableMultipleViewButton(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0

  if ( (byte_4185CBF & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    byte_4185CBF = 1;
  }
  if ( !this->fields.isEnoughServantMultipleView )
    return 0;
  v3 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  return (this->fields.buttonFlag & v3->static_fields->BUTTON_MULTIPLE_VIEW) >= 1
      && !this->fields.type
      && !this->fields.mState
      && (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0;
}


bool __fastcall MyRoomControl__IsEnablePhotoCampaignButton(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0

  if ( (byte_4185CD2 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    byte_4185CD2 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  return (this->fields.buttonFlag & v3->static_fields->BUTTON_PHOTO_CAMPAIGN) >= 1
      && !this->fields.type
      && !this->fields.mState
      && (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__IsFrontMultipleServant(MyRoomControl_o *this, int32_t index, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x20
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v7; // x0

  v4 = this;
  if ( (byte_4185CB8 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_4185CB8 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
  {
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_B2C434(this, *(_QWORD *)&index);
  }
  return SLODWORD(this->fields.moveBtnObjInitPos.fields.z) > 15;
}


bool __fastcall MyRoomControl__IsSceneJumpExist(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.sceneJumpInfo != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__IsScrollviewInShowPosition(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v6; // x0
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s8
  float v12; // s9
  float v13; // s10
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4185C85 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15398/*"Wait_Action"*/, method);
    sub_B2C35C(&StringLiteral_7145/*"Help"*/, v3);
    byte_4185C85 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15398/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7145/*"Help"*/, 0LL) )
      return 0;
  }
  myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomListCtr;
  if ( !myRoomFsm )
    goto LABEL_16;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  myRoomFsm = (PlayMakerFSM_o *)this->fields.mShowPos;
  if ( !myRoomFsm )
    goto LABEL_16;
  v11 = v8;
  v12 = v9;
  v13 = v10;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  v15.fields.x = v11;
  v15.fields.y = v12;
  v15.fields.z = v13;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Vector3__op_Equality(v15, position, 0LL);
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_B2C434(myRoomFsm, method);
  return !mMaterialEventLogListViewManager->fields.mIsDoing_Slide;
}


bool __fastcall MyRoomControl__IsServantMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.isServantMaterial;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185CBA & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__LoadMultipleServant_d__330_TypeInfo, method);
    byte_4185CBA = 1;
  }
  v3 = sub_B2C42C(MyRoomControl__LoadMultipleServant_d__330_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__330___ctor((MyRoomControl__LoadMultipleServant_d__330_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x20

  if ( (byte_4185CC4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__0__, v6);
    sub_B2C35C(&MyRoomControl___c__DisplayClass345_0_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_6202/*"EventUI/Prefabs/"*/, v8);
    byte_4185CC4 = 1;
  }
  v9 = sub_B2C42C(MyRoomControl___c__DisplayClass345_0_TypeInfo);
  MyRoomControl___c__DisplayClass345_0___ctor((MyRoomControl___c__DisplayClass345_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = eventId;
  v18 = System_Int32__ToString((int)v9 + 24, 0LL);
  v19 = System_String__Concat_44305532((System_String_o *)StringLiteral_6202/*"EventUI/Prefabs/"*/, v18, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185CC7 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__LoadPhotoCampaignServant_d__348_TypeInfo, method);
    byte_4185CC7 = 1;
  }
  v3 = sub_B2C42C(MyRoomControl__LoadPhotoCampaignServant_d__348_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__348___ctor((MyRoomControl__LoadPhotoCampaignServant_d__348_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4185C71 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_4185C71 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4185C8D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__LoadServantForm_b__228_0__, v3);
    byte_4185C8D = 1;
  }
  svtCtr = this->fields.svtCtr;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__228_0__, 0LL);
  if ( !svtCtr )
    sub_B2C434(v6, v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v6; // x1
  int v7; // s0
  const MethodInfo *v11; // x1
  MyRoomControl_c *v12; // x0

  if ( (byte_4185C8E & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8407/*"LOAD_END"*/, v3);
    byte_4185C8E = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_9;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v7, 0LL);
  v12 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v12 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v12->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v11);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
LABEL_9:
    sub_B2C434(myRoomFsm, v6);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8407/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__MoveEventButtonDisplay(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *button,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  v4.fields.x = this->fields.eventButtonInitPos.fields.x;
  v4.fields.z = this->fields.eventButtonInitPos.fields.z;
  v4.fields.y = this->fields.eventButtonInitPos.fields.y + 48.0;
  this->fields.eventButtonInitPos.fields.y = v4.fields.y;
  GameObjectExtensions__SetLocalPosition(button, v4, 0LL);
  v5.fields.x = this->fields.voicePlayBtnInitPos.fields.x;
  v5.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
  v5.fields.y = this->fields.voicePlayBtnInitPos.fields.y + 48.0;
  GameObjectExtensions__SetLocalPosition(this->fields.voicePlayBtn, v5, 0LL);
  this->fields.voicePlayBtnInitPos = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
}


void __fastcall MyRoomControl__MyRoomUIAnimationEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.isMyRoomUIAnimation = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__MyRoomlUIAnimationStart(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *target,
        UnityEngine_Vector3_o movePos,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  z = movePos.fields.z;
  y = movePos.fields.y;
  x = movePos.fields.x;
  if ( (byte_4185CA6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9264/*"MyRoomUIAnimationEnd"*/, target);
    byte_4185CA6 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9264/*"MyRoomUIAnimationEnd"*/, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  const MethodInfo *v23; // x1
  int32_t multipleViewState; // w8
  const MethodInfo *v25; // x1
  int32_t photoCampaignState; // w8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  int32_t type; // w9
  int32_t mState; // w8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  char v36; // w8
  const MethodInfo *v37; // x20
  __int64 *v38; // x8
  __int64 *v39; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  System_String_o *ActiveStateName; // x0
  MyRoomControl_o *v43; // x8
  struct SerialCodeComponent_o *serialCodeComp; // x20
  UIWidget_o *changeBtnImg; // x20
  int v46; // s0
  MyRoomControl_c *v50; // x0
  __int64 value; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v2 = this;
  if ( (byte_4185CA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_MyRoomControl_OnClickBack__, method);
    sub_B2C35C(&MyRoomControl_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3101/*"CLOSE_MATERIAL_COLLECTION"*/, v7);
    sub_B2C35C(&StringLiteral_3100/*"CLOSE_MATERIAL"*/, v8);
    sub_B2C35C(&StringLiteral_3112/*"CLOSE_USER_SERVANT_COIN"*/, v9);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v10);
    sub_B2C35C(&StringLiteral_3104/*"CLOSE_NOTICE"*/, v11);
    sub_B2C35C(&StringLiteral_3098/*"CLOSE_GAMEOPTION"*/, v12);
    sub_B2C35C(&StringLiteral_3099/*"CLOSE_ITEMLIST"*/, v13);
    sub_B2C35C(&StringLiteral_3102/*"CLOSE_MATERIAL_COSTUME"*/, v14);
    sub_B2C35C(&StringLiteral_3095/*"CLOSE_CONTINUE_DEVICE"*/, v15);
    sub_B2C35C(&StringLiteral_3090/*"CLOSE_BLACKLIST"*/, v16);
    sub_B2C35C(&StringLiteral_13060/*"State 5"*/, v17);
    sub_B2C35C(&StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, v18);
    sub_B2C35C(&StringLiteral_3092/*"CLOSE_CHANGE_PROFILE"*/, v19);
    sub_B2C35C(&StringLiteral_3108/*"CLOSE_SOUND_PLAYER"*/, v20);
    this = (MyRoomControl_o *)sub_B2C35C(&StringLiteral_3097/*"CLOSE_FAVORITE_CHANGE"*/, v21);
    byte_4185CA3 = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_81;
  if ( !mMaterialEventLogListViewManager->fields.mIsDoing_Slide )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( !NetworkManager__CommunicationIsBusy(0LL)
      && !v2->fields.isMyRoomUIAnimation
      && !v2->fields.isBackBtnIgnore
      && !v2->fields.isSvtLoading )
    {
      multipleViewState = v2->fields.multipleViewState;
      if ( multipleViewState )
      {
        if ( multipleViewState == 2 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(1, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v30);
        }
        else if ( multipleViewState == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(1, 0LL);
          v2->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v2, v25);
        }
        return;
      }
      photoCampaignState = v2->fields.photoCampaignState;
      if ( photoCampaignState )
      {
        if ( photoCampaignState == 2 )
        {
          v33 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
            v33 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickBack__);
          v34 = (System_Reflection_MethodBase_o *)sub_B2C340(v33, v33[3]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0LL);
          v2->fields.photoCampaignState = 1;
          MyRoomControl__ClosePhotoCampaignServant(v2, v35);
        }
        else if ( photoCampaignState == 1 )
        {
          v27 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
            v27 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickBack__);
          v28 = (System_Reflection_MethodBase_o *)sub_B2C340(v27, v27[3]);
          OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0LL);
          v2->fields.photoCampaignState = 0;
          MyRoomControl__ClosePhotoCampaignPanel(v2, v29);
        }
        return;
      }
      this = (MyRoomControl_o *)MyRoomControl__GetState(v2, v23);
      if ( !(_DWORD)this || (type = v2->fields.type, type == 10) )
      {
        mState = v2->fields.mState;
        v2->fields.IsMaterialEventBack = 1;
        if ( mState )
        {
          MyRoomControl__setDefSvtPos(v2, method);
          return;
        }
        this = (MyRoomControl_o *)v2->fields.mStateMaterial;
        if ( !this )
          goto LABEL_81;
        this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        type = v2->fields.type;
      }
      method = (const MethodInfo *)StringLiteral_3043/*"CLICK_BACK"*/;
      v36 = 0;
      switch ( type )
      {
        case 0:
          v37 = (const MethodInfo *)StringLiteral_3043/*"CLICK_BACK"*/;
          MyRoomControl__ReleaseAsset(v2, (const MethodInfo *)StringLiteral_3043/*"CLICK_BACK"*/);
          method = v37;
          goto LABEL_61;
        case 1:
          v38 = &StringLiteral_3100/*"CLOSE_MATERIAL"*/;
          goto LABEL_52;
        case 2:
          v39 = &StringLiteral_3101/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_60;
        case 3:
          v39 = &StringLiteral_3099/*"CLOSE_ITEMLIST"*/;
          goto LABEL_60;
        case 4:
          v39 = &StringLiteral_3092/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_60;
        case 5:
          optionComp = v2->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v36 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              method = (const MethodInfo *)StringLiteral_3090/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v39 = &StringLiteral_3098/*"CLOSE_GAMEOPTION"*/;
LABEL_60:
            method = (const MethodInfo *)*v39;
LABEL_61:
            v36 = 0;
          }
LABEL_62:
          if ( ((unsigned __int8)v36 & (v2->fields.mState != 0)) != 0 )
          {
            MyRoomControl__setDefSvtPos(v2, method);
          }
          else
          {
            this = (MyRoomControl_o *)v2->fields.titleInfo;
            if ( !this )
              break;
            TitleInfoControl__sendEvent((TitleInfoControl_o *)this, (System_String_o *)method, 0LL);
          }
          this = (MyRoomControl_o *)v2->fields.myRoomFsm;
          if ( this )
          {
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13060/*"State 5"*/, 0LL) )
              return;
            this = (MyRoomControl_o *)v2->fields.myRoomData;
            if ( this )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0LL);
              if ( this )
              {
                v43 = this;
                *(_QWORD *)&v52.fields.currentCryptoKey = this->fields.materialCollectionComp;
                serialCodeComp = v43->fields.serialCodeComp;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = *(_QWORD *)&v52.fields.currentCryptoKey;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v52.fields.currentCryptoKey = value;
                }
                *(_QWORD *)&v52.fields.fakeValue = serialCodeComp;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL) < 1
                  || v2->fields.isHeroine && v2->fields.isHeroineReave )
                {
                  return;
                }
                changeBtnImg = (UIWidget_o *)v2->fields.changeBtnImg;
                *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
                if ( changeBtnImg )
                {
                  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v46, 0LL);
                  v50 = MyRoomControl_TypeInfo;
                  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                    v50 = MyRoomControl_TypeInfo;
                  }
                  v2->fields.buttonFlag |= v50->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 6:
          v38 = &StringLiteral_3104/*"CLOSE_NOTICE"*/;
LABEL_52:
          method = (const MethodInfo *)*v38;
          v36 = 1;
          goto LABEL_62;
        case 7:
          v39 = &StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_60;
        case 8:
          v39 = &StringLiteral_3095/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_60;
        case 9:
          v39 = &StringLiteral_3097/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_60;
        case 10:
          v39 = &StringLiteral_3108/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_60;
        case 11:
          v39 = &StringLiteral_3102/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_60;
        case 17:
          v39 = &StringLiteral_3112/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_60;
        default:
          goto LABEL_62;
      }
LABEL_81:
      sub_B2C434(this, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickChangeLimit(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
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
  MyRoomControl_c *v14; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v17; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  ServantEntity_o *Entity; // x21
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t size; // w10
  int32_t v27; // w8
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x20
  __int64 v29; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4185C84 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B2C35C(&MyRoomControl_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_15398/*"Wait_Action"*/, v11);
    sub_B2C35C(&StringLiteral_2954/*"CHANGE_LIMIT"*/, v12);
    sub_B2C35C(&StringLiteral_7145/*"Help"*/, v13);
    byte_4185C84 = 1;
  }
  v14 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v14 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v14->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2 | ((this->fields.buttonFlag & v14->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
    goto LABEL_30;
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_50;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15398/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_50;
    v17 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_7145/*"Help"*/, 0LL) )
      return;
  }
  if ( !this->fields.isServantMaterial )
  {
    if ( !this->fields.isHeroine || !this->fields.isHeroineReave )
    {
      if ( !MyRoomControl__IsScrollviewInShowPosition(this, method) )
        goto LABEL_45;
      myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomData;
      if ( !myRoomFsm )
        goto LABEL_50;
      myRoomFsm = (PlayMakerFSM_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomFsm, this->fields.fvrUsrSvtId, 0LL);
      if ( !myRoomFsm )
        goto LABEL_50;
      v29 = *(_QWORD *)&myRoomFsm[1].fields.eventHandlerComponentsAdded;
      addEventHandlers = myRoomFsm[1].fields.addEventHandlers;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v29;
      *(_QWORD *)&v31.fields.fakeValue = addEventHandlers;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_45;
      return;
    }
LABEL_30:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_50;
  if ( !myRoomFsm )
    goto LABEL_50;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)myRoomFsm,
                       usrData->fields.userId,
                       this->fields.materialServantId,
                       0LL);
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_50;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)myRoomFsm;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v22;
  *(_QWORD *)&v30.fields.fakeValue = v21;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
  if ( !v20 )
    goto LABEL_50;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v20,
                                (int32_t)myRoomFsm,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v24);
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
  {
    if ( EntityDefinitely->fields.maxLimitCount > 0 )
      goto LABEL_25;
    if ( !Entity )
      goto LABEL_50;
    myRoomFsm = (PlayMakerFSM_o *)ServantEntity__checkIsHeroineSvt(Entity, 0LL);
    if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    {
LABEL_25:
      materialImageIdList = this->fields.materialImageIdList;
      if ( !materialImageIdList )
        goto LABEL_50;
      size = materialImageIdList->fields._size;
      v27 = this->fields.materialFigureSvtDispIdx + 1;
      if ( v27 >= size )
        v27 = 0;
      else
        this->fields.materialFigureSvtDispIdx = v27;
      this->fields.materialFigureSvtDispIdx = v27;
LABEL_45:
      MyRoomControl__BlockTouch(this, method);
      this->fields.isSvtLoading = 1;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_2954/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_50:
      sub_B2C434(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185CB5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185CB5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v3);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4185CC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_4185CC3 = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  if ( this->fields.IsListActive )
  {
    materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
    if ( materialCollectionServantListViewManager )
    {
      MaterialCollectionServantListViewManager__EventLogSortKind(
        materialCollectionServantListViewManager,
        this->fields.eventLogServantSortSelectMenu,
        0LL);
      return;
    }
LABEL_10:
    sub_B2C434(materialCollectionServantListViewManager, v5);
  }
  materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !materialCollectionServantListViewManager )
    goto LABEL_10;
  MaterialEventLogListViewManager__EventLogSortKind(
    (MaterialEventLogListViewManager_o *)materialCollectionServantListViewManager,
    this->fields.eventLogServantSortSelectMenu,
    0LL);
}


void __fastcall MyRoomControl__OnClickLeftServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_4185CB6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185CB6 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 0, v4);
  }
}


void __fastcall MyRoomControl__OnClickMoveBg(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ChangeDisp(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OnClickPhotoCampaignBackGround(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t photoCampaignState; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // kr00_8
  float v11; // s11
  UnityEngine_GameObject_o *v12; // x20
  float v13; // s5
  float v14; // s6
  float v15; // s7
  float v16; // s4
  UnityEngine_GameObject_o *v17; // x0
  float x; // s12
  float v19; // s13
  float v20; // s14
  UnityEngine_GameObject_o *v21; // x20
  float v22; // s4
  float v23; // s5
  float v24; // s3
  UnityEngine_GameObject_o *v25; // x20
  float v26; // s5
  float v27; // s6
  float v28; // s7
  float v29; // s4
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x20
  float v32; // s4
  float v33; // s5
  float v34; // s3
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  float photoFramePosY; // s8
  UnityEngine_GameObject_o *gameObject; // x20
  float y; // s5
  float z; // s6
  float w; // s7
  float v42; // s4
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x20
  float v46; // s5
  float v47; // s6
  float v48; // s7
  float v49; // s4
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  TweenAlpha_o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_Vector3_o v68; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v73; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v74; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v75; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v76; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v77; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4185CCC & 1) == 0 )
  {
    sub_B2C35C(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_B2C35C(&StringLiteral_6685/*"FinishedCloseFullScreenPhotoCampaign"*/, v3);
    byte_4185CCC = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v68.fields.z = 0.0;
  *(_QWORD *)&v68.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_28;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  if ( photoCampaignState == 4 )
  {
    v35 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    v36 = (System_Reflection_MethodBase_o *)sub_B2C340(v35, v35[3]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    this->fields.photoCampaignState = 2;
    if ( !maskBoxCollider )
      goto LABEL_28;
    photoFramePosY = this->fields.photoFramePosY;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v80 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
    y = v80.fields.y;
    z = v80.fields.z;
    w = v80.fields.w;
    v80.fields.y = v80.fields.x;
    v80.fields.z = y;
    v80.fields.w = z;
    v42 = w;
    TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v80.fields.y, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v74.fields.x = 1.0;
    v74.fields.y = 1.0;
    v74.fields.z = 1.0;
    TweenScale__Begin(v43, 0.2, v74, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v75.fields.x = 0.0;
    v75.fields.z = 0.0;
    v75.fields.y = photoFramePosY;
    TweenPosition__Begin(v44, 0.2, v75, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v81 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
    v46 = v81.fields.y;
    v47 = v81.fields.z;
    v48 = v81.fields.w;
    v81.fields.y = v81.fields.x;
    v81.fields.z = v46;
    v81.fields.w = v47;
    v49 = v48;
    TweenRotation__Begin(v45, 0.2, *(UnityEngine_Quaternion_o *)&v81.fields.y, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v76.fields.x = 1.0;
    v76.fields.y = 1.0;
    v76.fields.z = 1.0;
    TweenScale__Begin(v50, 0.2, v76, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v77.fields.x = 0.0;
    v77.fields.z = 0.0;
    v77.fields.y = photoFramePosY;
    TweenPosition__Begin(v51, 0.2, v77, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v53 = TweenAlpha__Begin(v52, 0.2, 0.0, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !v53 )
      goto LABEL_28;
    v53->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
    p_eventReceiver = &v53->fields.eventReceiver;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_eventReceiver,
      (System_Int32_array **)maskBoxCollider,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v61 = (System_Int32_array **)StringLiteral_6685/*"FinishedCloseFullScreenPhotoCampaign"*/;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6685/*"FinishedCloseFullScreenPhotoCampaign"*/;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_eventReceiver + 1), v61, v62, v63, v64, v65, v66, v67);
  }
  else if ( photoCampaignState == 3 )
  {
    v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    this->fields.photoCampaignState = 4;
    MyRoomControl__GetMaximTransformValues(this, &localScale, &v68, v8);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    if ( maskBoxCollider )
    {
      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v10 = *(_QWORD *)&v68.fields.x;
      v11 = v68.fields.z;
      v12 = v9;
      v78 = UnityEngine_Quaternion__Euler_35347036(v68, 0LL);
      v13 = v78.fields.y;
      v14 = v78.fields.z;
      v15 = v78.fields.w;
      v78.fields.y = v78.fields.x;
      v78.fields.z = v13;
      v78.fields.w = v14;
      v16 = v15;
      TweenRotation__Begin(v12, 0.2, *(UnityEngine_Quaternion_o *)&v78.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        x = localScale.fields.x;
        v19 = localScale.fields.y;
        v20 = localScale.fields.z;
        TweenScale__Begin(v17, 0.2, localScale, 0LL);
        maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
        if ( maskBoxCollider )
        {
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
          zero = UnityEngine_Vector3__get_zero(0LL);
          v22 = zero.fields.y;
          v23 = zero.fields.z;
          zero.fields.y = zero.fields.x;
          zero.fields.z = v22;
          v24 = v23;
          TweenPosition__Begin(v21, 0.2, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
          maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
          if ( maskBoxCollider )
          {
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
            *(_QWORD *)&v71.fields.x = v10;
            v71.fields.z = v11;
            v79 = UnityEngine_Quaternion__Euler_35347036(v71, 0LL);
            v26 = v79.fields.y;
            v27 = v79.fields.z;
            v28 = v79.fields.w;
            v79.fields.y = v79.fields.x;
            v79.fields.z = v26;
            v79.fields.w = v27;
            v29 = v28;
            TweenRotation__Begin(v25, 0.2, *(UnityEngine_Quaternion_o *)&v79.fields.y, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              v73.fields.x = x;
              v73.fields.y = v19;
              v73.fields.z = v20;
              TweenScale__Begin(v30, 0.2, v73, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v72 = UnityEngine_Vector3__get_zero(0LL);
                v32 = v72.fields.y;
                v33 = v72.fields.z;
                v72.fields.y = v72.fields.x;
                v72.fields.z = v32;
                v34 = v33;
                TweenPosition__Begin(v31, 0.2, *(UnityEngine_Vector3_o *)&v72.fields.y, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
                if ( maskBoxCollider )
                {
                  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B2C434(maskBoxCollider, method);
  }
}


void __fastcall MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  const MethodInfo *v5; // x2
  MyRoomControl_c *klass; // x9
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4185CCA & 1) == 0 )
  {
    sub_B2C35C(&TouchEffectManager_TypeInfo, method);
    byte_4185CCA = 1;
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(1, 0LL);
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 0, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 1, v5);
  klass = this->klass;
  this->fields.photoCampaignState = 3;
  v7 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, _QWORD, _QWORD, void *))klass->vtable._4_CaptureServant.method)(
                                             this,
                                             (unsigned int)this->fields.photoSvtShotWidth,
                                             (unsigned int)this->fields.photoSvtShotHeight,
                                             klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_4185CB7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185CB7 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 1, v4);
  }
}


void __fastcall MyRoomControl__OnClickSelectMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v11; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v13; // x20
  int max_length; // w9
  struct System_Int64_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x4
  __int64 v31; // x0

  if ( (byte_4185CB3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&long___TypeInfo, v4);
    sub_B2C35C(&Method_MyRoomControl__OnClickSelectMultipleServant_b__322_0__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15398/*"Wait_Action"*/, v7);
    sub_B2C35C(&StringLiteral_7145/*"Help"*/, v8);
    byte_4185CB3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_17;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15398/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_17;
    v11 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7145/*"Help"*/, 0LL) )
      return;
  }
  if ( !MyRoomControl__IsEnableMultipleViewButton(this, method) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    return;
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_17:
    sub_B2C434(myRoomFsm, method);
  v13 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( (unsigned int)v13 >= max_length )
    {
      v31 = sub_B2C460(myRoomFsm);
      sub_B2C400(v31, 0LL);
    }
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v13];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v13;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_17;
  }
  v15 = (struct System_Int64_array *)sub_B2C374(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__322_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v29, 1, v30);
}


void __fastcall MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v9; // x0
  bool IsEnablePhotoCampaignButton; // w20
  _QWORD *v11; // x8
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x4

  if ( (byte_4185CC5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v3);
    sub_B2C35C(&Method_MyRoomControl__OnClickSelectPhotoCampaign_b__346_0__, v4);
    sub_B2C35C(&StringLiteral_15398/*"Wait_Action"*/, v5);
    sub_B2C35C(&StringLiteral_7145/*"Help"*/, v6);
    byte_4185CC5 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15398/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_13;
    v9 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_7145/*"Help"*/, 0LL) )
      return;
  }
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v11 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v12 = (System_Reflection_MethodBase_o *)sub_B2C340(v11, v11[3]);
  if ( IsEnablePhotoCampaignButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    myRoomFsm = (PlayMakerFSM_o *)this->fields.photoCampaignStandFigureBack;
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      this->fields.photoCampaignServantUsrId = 0LL;
      this->fields.photoCampaignLimitCount = 0;
      v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectPhotoCampaign_b__346_0__, 0LL);
      MyRoomControl__DispDefaultMyRoom(this, 0, v13, 1, v14);
      return;
    }
LABEL_13:
    sub_B2C434(myRoomFsm, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCollectionServantListViewManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 v7; // x11

  if ( (byte_4185CC2 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4185CC2 = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  dropObjectList = Instance->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_13;
  v7 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&dropObjectList->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v7 - 1] != MyRoomRootComponent_TypeInfo
    || !dropObjectList[1].fields._items )
  {
    goto LABEL_13;
  }
  if ( this->fields.IsListActive )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( Instance )
    {
      MaterialCollectionServantListViewManager__SortAscendingOrder(Instance, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(Instance, v5);
  }
  Instance = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !Instance )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder((MaterialEventLogListViewManager_o *)Instance, 0LL);
}


void __fastcall MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomControl_c *v6; // x0
  __int64 v7; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4185C88 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_10457/*"PLAY_VOICE"*/, v5);
    byte_4185C88 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_25;
  v6 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v6->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2 | ((this->fields.buttonFlag & v6->static_fields->BUTTON_VOICE_PLAY) == 0) )
  {
LABEL_25:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, method) && !this->fields.isVoiceLoading )
  {
    if ( this->fields.isVoicePlaying )
    {
      svtCtr = this->fields.svtCtr;
      this->fields.isVoicePlaying = 0;
      if ( svtCtr )
      {
        MyRoomSvtControl__stopVoice(svtCtr, 0LL);
        MyRoomControl__setNormalFace_21418140(this, 1, v9);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10457/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_B2C434(svtCtr, v7);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185CB4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185CB4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v3);
}


void __fastcall MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v9; // x11
  __int64 v10; // x8
  MyRoomStateMaterial_o *v11; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v15; // x2
  _BOOL4 v16; // w19

  if ( (byte_4185CC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v3);
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4185CC1 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = Instance[1].klass;
  if ( !klass )
    goto LABEL_17;
  v9 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v9 )
    goto LABEL_17;
  if ( *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v9 - 8) != MyRoomRootComponent_TypeInfo )
    goto LABEL_17;
  v10 = *(_QWORD *)&klass->_1.this_arg.bits;
  if ( !v10 )
    goto LABEL_17;
  v11 = *(MyRoomStateMaterial_o **)(v10 + 856);
  v12 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 75) & 2) != 0 )
    v12 = (_QWORD *)sub_B2C364(Method_MyRoomControl_OnClickValentineListChange__);
  v13 = (System_Reflection_MethodBase_o *)sub_B2C340(v12, v12[3]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v11
    || (MyRoomStateMaterial__ValentineListMomentChange(v11, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_17:
    sub_B2C434(Instance, v7);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v15);
  v16 = this->fields.IsListActive;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__SaveIsListActive(v16, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4185C74 & 1) == 0 )
  {
    sub_B2C35C(&Gesture_EventHandler_TypeInfo, method);
    sub_B2C35C(&FingerGestures_TypeInfo, v3);
    sub_B2C35C(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4185C74 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_B2C42C(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v5, 0LL);
}


void __fastcall MyRoomControl__OpenMultipleView(
        MyRoomControl_o *this,
        System_Int64_array *usrSvtIds,
        System_Int32_array *imageLimitCounts,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *MultipleServant; // x1

  this->fields.multipleServantUsrIds = usrSvtIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)usrSvtIds,
    (System_String_array **)imageLimitCounts,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)imageLimitCounts,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OpenSelectImageLimit(
        MyRoomControl_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_Action_bool__int__o *callback,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  SelectImageLimitDialog_o *selectImageLimitDialog; // x24
  System_Action_bool__o *v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4185CBE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, *(_QWORD *)&type);
    sub_B2C35C(&System_Action_bool__TypeInfo, v11);
    sub_B2C35C(&Method_MyRoomControl_SetMaskCollider__, v12);
    byte_4185CBE = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v14 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !selectImageLimitDialog )
    sub_B2C434(v15, v16);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v14, callback, index, 0LL);
}


void __fastcall MyRoomControl__PlayOpening(
        MyRoomControl_o *this,
        System_String_o *fileName,
        System_String_o *assetPath,
        bool isCanSkip,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x24
  MyRoomControl_o *v12; // x0
  const MethodInfo *v13; // x1
  System_Int32_array **CriMoviePlayerObject; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array ***v22; // x22
  __int64 v23; // x1
  CRIMoviePlayer_o *v24; // x23
  BgmManager_c *v25; // x0
  float masterVolume; // s8
  System_Action_o *v27; // x25

  if ( (byte_4185CAC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, fileName);
    sub_B2C35C(&BgmManager_TypeInfo, v8);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass309_0__PlayOpening_b__0__, v9);
    sub_B2C35C(&MyRoomControl___c__DisplayClass309_0_TypeInfo, v10);
    byte_4185CAC = 1;
  }
  v11 = sub_B2C42C(MyRoomControl___c__DisplayClass309_0_TypeInfo);
  MyRoomControl___c__DisplayClass309_0___ctor((MyRoomControl___c__DisplayClass309_0_o *)v11, 0LL);
  CriMoviePlayerObject = (System_Int32_array **)MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = CriMoviePlayerObject;
  v22 = (System_Int32_array ***)(v11 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), CriMoviePlayerObject, v16, v17, v18, v19, v20, v21);
  v24 = *(CRIMoviePlayer_o **)(v11 + 16);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4183DF8 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, v23);
    byte_4183DF8 = 1;
  }
  v25 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v25 = BgmManager_TypeInfo;
  }
  masterVolume = v25->static_fields->masterVolume;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass309_0__PlayOpening_b__0__, 0LL);
  if ( !v24
    || (CRIMoviePlayer__Initialize(v24, fileName, assetPath, masterVolume, isCanSkip, 0LL, v27, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *v22) == 0LL) )
  {
LABEL_15:
    sub_B2C434(CriMoviePlayerObject, v15);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleaseAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  struct UITexture_o *photoCampaignScreenshot; // x0
  AssetData_o *photoCampaignAssetData; // x20
  BattleServantConfConponent_o *p_photoCampaignAssetData; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4185CD4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4185CD4 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.photoCampaignShutterEffect, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.photoCampaignCameraEffect, 0LL, v9, v10, v11, v12, v13, v14);
  photoCampaignScreenshot = this->fields.photoCampaignScreenshot;
  if ( !photoCampaignScreenshot )
    sub_B2C434(0LL, v15);
  ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))photoCampaignScreenshot->klass->vtable._27_set_mainTexture.method)(
    photoCampaignScreenshot,
    0LL,
    photoCampaignScreenshot->klass->vtable._28_get_shader.methodPtr);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    p_photoCampaignAssetData = (BattleServantConfConponent_o *)&this->fields.photoCampaignAssetData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30152684(photoCampaignAssetData, 0LL);
    p_photoCampaignAssetData->klass = 0LL;
    sub_B2C2F8(p_photoCampaignAssetData, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  BattleServantConfConponent_o *p_asstName; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4185C72 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185C72 = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = (BattleServantConfConponent_o *)&this->fields.asstName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    p_asstName->klass = 0LL;
    sub_B2C2F8(p_asstName, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ReleaseTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomControl_c *v6; // x0
  int32_t buttonFlag; // w9
  int32_t BUTTON_MULTIPLE_VIEW; // w8
  int v9; // w11
  int v10; // w8
  const MethodInfo *v11; // x1
  int32_t v12; // w9
  int32_t BUTTON_PHOTO_CAMPAIGN; // w8
  int v14; // w11
  int v15; // w8
  UIWidget_o *playBtnImg; // x20
  MyRoomData_o *myRoomData; // x0
  __int64 v18; // x1
  int v19; // s0
  UIWidget_o *helpButtonImg; // x20
  int v24; // s0
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v31; // w20
  System_String_o *ActiveStateName; // x0
  bool v33; // w0
  UIWidget_o *changeBtnImg; // x20
  int v35; // s0
  MyRoomControl_c *v39; // x0
  UIWidget_o *changeBGBtnImg; // x20
  int v41; // s0
  MyRoomControl_c *v45; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4185CA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&MyRoomControl_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_13060/*"State 5"*/, v5);
    byte_4185CA8 = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  BUTTON_MULTIPLE_VIEW = v6->static_fields->BUTTON_MULTIPLE_VIEW;
  v9 = buttonFlag & ~BUTTON_MULTIPLE_VIEW;
  v10 = buttonFlag | BUTTON_MULTIPLE_VIEW;
  if ( this->fields.type )
    v10 = v9;
  this->fields.buttonFlag = v10;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  v12 = this->fields.buttonFlag;
  BUTTON_PHOTO_CAMPAIGN = MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  v14 = v12 & ~BUTTON_PHOTO_CAMPAIGN;
  v15 = v12 | BUTTON_PHOTO_CAMPAIGN;
  if ( this->fields.type )
    v15 = v14;
  this->fields.buttonFlag = v15;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v11);
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_39;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v19, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
  if ( !helpButtonImg )
    goto LABEL_39;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v24, 0LL);
  myRoomData = this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !myRoomData )
    goto LABEL_39;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !myRoomData )
    goto LABEL_39;
  usrDeckData = myRoomData[1].fields.usrDeckData;
  mstInfoData = myRoomData[1].fields.mstInfoData;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v47.fields.fakeValue = mstInfoData;
  myRoomData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_39;
    v31 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v31 = (int)myRoomData;
  }
  myRoomData = (MyRoomData_o *)this->fields.myRoomFsm;
  if ( !myRoomData )
    goto LABEL_39;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)myRoomData, 0LL);
  v33 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13060/*"State 5"*/, 0LL);
  if ( v31 >= 1 && v33 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_39;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v35, 0LL);
    v39 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v39 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v39->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_39;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v41, 0LL);
  v45 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v45 = MyRoomControl_TypeInfo;
  }
  static_fields = v45->static_fields;
  myRoomData = (MyRoomData_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !myRoomData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomData, 0, 0LL),
        (myRoomData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_39:
    sub_B2C434(myRoomData, v18);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)myRoomData, 0, 0LL);
  if ( this->fields.type == 10 )
  {
    myRoomData = (MyRoomData_o *)this->fields.soundPlayerComp;
    if ( myRoomData )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)myRoomData, 0, 0LL);
      return;
    }
    goto LABEL_39;
  }
}


void __fastcall MyRoomControl__SetBackButtonIgnore(MyRoomControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0
  _BOOL8 v5; // x1

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  v5 = flag;
  this->fields.isBackBtnIgnore = v5;
  if ( !maskBoxCollider )
    sub_B2C434(0LL, v5);
  UnityEngine_Collider__set_enabled(maskBoxCollider, v5, 0LL);
}


void __fastcall MyRoomControl__SetButtonFlag(
        MyRoomControl_o *this,
        int32_t button,
        bool enabled,
        const MethodInfo *method)
{
  int32_t buttonFlag; // w8
  int v5; // w9
  int v6; // w8

  buttonFlag = this->fields.buttonFlag;
  v5 = buttonFlag & ~button;
  v6 = buttonFlag | button;
  if ( !enabled )
    v6 = v5;
  this->fields.buttonFlag = v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetChangeBtn(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v6; // s0
  MyRoomControl_c *v10; // x0
  int v11; // w8
  int v12; // s0
  MyRoomControl_c *v16; // x0

  v2 = this;
  if ( (byte_4185C82 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_B2C35C(&MyRoomControl_TypeInfo, v3);
    byte_4185C82 = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_19:
      sub_B2C434(this, method);
  }
  else
  {
    materialImageIdList = v2->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_19;
  }
  changeBtnImg = (UIWidget_o *)v2->fields.changeBtnImg;
  if ( materialImageIdList->fields._size > 1 )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_19;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v12, 0LL);
    v16 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v16 = MyRoomControl_TypeInfo;
    }
    v11 = v2->fields.buttonFlag | v16->static_fields->BUTTON_LIMIT_CHANGE;
  }
  else
  {
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_19;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v6, 0LL);
    v10 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v10 = MyRoomControl_TypeInfo;
    }
    v11 = v2->fields.buttonFlag & ~v10->static_fields->BUTTON_LIMIT_CHANGE;
  }
  v2->fields.buttonFlag = v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetEnableMultipleViewUi(MyRoomControl_o *this, bool isEnable, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *multipleFaceChangeButtons; // x8
  MyRoomControl_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9
  __int64 v8; // x0

  multipleFaceChangeButtons = this->fields.multipleFaceChangeButtons;
  if ( !multipleFaceChangeButtons )
    goto LABEL_7;
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleFaceChangeButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    this = (MyRoomControl_o *)multipleFaceChangeButtons->m_Items[v6];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL);
      multipleFaceChangeButtons = v4->fields.multipleFaceChangeButtons;
      ++v6;
      if ( multipleFaceChangeButtons )
        continue;
    }
    goto LABEL_7;
  }
  this = (MyRoomControl_o *)v4->fields.multipleViewCloseButton;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isEnable, 0LL),
        (this = (MyRoomControl_o *)v4->fields.multipleViewDisableUiButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL),
        (this = (MyRoomControl_o *)v4->fields.titleInfo) == 0LL) )
  {
LABEL_7:
    sub_B2C434(this, isEnable);
  }
  if ( isEnable )
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0LL);
  else
    TitleInfoControl__FrameOut((TitleInfoControl_o *)this, 0, 0LL);
}


void __fastcall MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  ServantVoiceEntity_o *Instance; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x24
  __int64 figureSvtDispIdx; // x25
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o *asstName; // x22
  System_Action_o *v56; // x23
  const MethodInfo *v57; // x3
  System_Action_o *v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Action_o *v65; // x20
  const MethodInfo *v66; // x2

  if ( (byte_4185C9B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__0__, v9);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__1__, v10);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__2__, v11);
    sub_B2C35C(&MyRoomControl___c__DisplayClass274_0_TypeInfo, v12);
    byte_4185C9B = 1;
  }
  v13 = sub_B2C42C(MyRoomControl___c__DisplayClass274_0_TypeInfo);
  MyRoomControl___c__DisplayClass274_0___ctor((MyRoomControl___c__DisplayClass274_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  MyRoomControl__setupSvtImageIdList(this, v28);
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, 0, v29);
  v31 = (ServantVoiceEntity_o **)(v13 + 24);
  *(_QWORD *)(v13 + 24) = SvtVoiceEnt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), SvtVoiceEnt, v32, v33, v34, v35, v36, v37);
  if ( *(_QWORD *)(v13 + 24) )
  {
    Instance = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v38);
      imageIdList = this->fields.imageIdList;
      if ( imageIdList )
      {
        figureSvtDispIdx = this->fields.figureSvtDispIdx;
        if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( *v31 )
        {
          MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                              *v31,
                              imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                              0LL);
          this->fields.voiceList = MyRoomVoiceList;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.voiceList,
            (System_Int32_array **)MyRoomVoiceList,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          Instance = *v31;
          if ( *v31 )
          {
            VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Instance, 0LL);
            this->fields.asstName = VoiceAssetName;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.asstName,
              (System_Int32_array **)VoiceAssetName,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
            asstName = this->fields.asstName;
            v56 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v56,
              (Il2CppObject *)v13,
              Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v56, v57);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_16:
    sub_B2C434(Instance, v15);
  }
  this->fields.isExistVoiceData = 0;
LABEL_13:
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__1__,
    0LL);
  *(_QWORD *)(v13 + 40) = v58;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  if ( IsActSetMyRoomStandFigre )
  {
    v65 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v65, v66);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 40), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetLayerMultipleServant(
        MyRoomControl_o *this,
        int32_t frontIndex,
        const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x21
  int max_length; // w9
  int32_t v8; // w1
  __int64 v9; // x0

  v4 = this;
  if ( (byte_4185CB9 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_4185CB9 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_B2C434(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( this )
      {
        v8 = frontIndex == (_DWORD)v6 ? 16 : 15;
        UIPanel__set_depth((UIPanel_o *)this, v8, 0LL);
        multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
        ++v6;
        if ( multipleStandFigureBacks )
          continue;
      }
    }
    goto LABEL_13;
  }
}


void __fastcall MyRoomControl__SetMaskCollider(MyRoomControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_B2C434(0LL, flag);
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v29; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x23
  __int64 materialFigureSvtDispIdx; // x24
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t v33; // w23
  struct System_Collections_Generic_List_int__o *v34; // x22
  __int64 v35; // x23
  int32_t Id; // w22
  struct System_Collections_Generic_List_int__o *v37; // x23
  __int64 v38; // x24
  int32_t v39; // w22
  StandFigureBack_o *standFigureBack; // x20
  int32_t v41; // w23
  System_Action_o *v42; // x24

  if ( (byte_4185C81 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__0__, v9);
    sub_B2C35C(&MyRoomControl___c__DisplayClass205_0_TypeInfo, v10);
    sub_B2C35C(&UIStandFigureRender_TypeInfo, v11);
    byte_4185C81 = 1;
  }
  v12 = sub_B2C42C(MyRoomControl___c__DisplayClass205_0_TypeInfo);
  MyRoomControl___c__DisplayClass205_0___ctor((MyRoomControl___c__DisplayClass205_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_24;
  *(_QWORD *)(v12 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)end_act, v21, v22, v23, v24, v25, v26);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v27);
    MyRoomControl__SetChangeBtn(this, v29);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_24;
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  mStateMaterial = this->fields.mStateMaterial;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v33 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v33, 0LL);
  if ( !mStateMaterial )
    goto LABEL_24;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, LimitCountByImageLimitCostumeIn, 0LL);
  v34 = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !v34 )
    goto LABEL_24;
  v35 = this->fields.materialFigureSvtDispIdx;
  if ( v34->fields._size <= (unsigned int)v35 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  Id = ServantScriptMaster__getId(servantId, v34->fields._items->m_Items[v35 + 1], 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  v37 = this->fields.materialImageIdList;
  if ( !v37 )
    goto LABEL_24;
  v38 = this->fields.materialFigureSvtDispIdx;
  v39 = LimitCountByImageLimitCostumeIn;
  if ( v37->fields._size <= (unsigned int)v38 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  standFigureBack = this->fields.standFigureBack;
  v41 = v37->fields._items->m_Items[v38 + 1];
  v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_24:
    sub_B2C434(LimitCountByImageLimitCostumeIn, v14);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v41, 1, 0, v39, 10, v42, 0LL);
}


void __fastcall MyRoomControl__SetMultipleViewButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  UIWidget_o *multipleViewButtonSprite; // x0
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  gray = UnityEngine_Color__get_gray(0LL);
  r = gray.fields.r;
  g = gray.fields.g;
  b = gray.fields.b;
  a = gray.fields.a;
  if ( MyRoomControl__IsEnableMultipleViewButton(this, v7) )
  {
    white = UnityEngine_Color__get_white(0LL);
    r = white.fields.r;
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
  }
  multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonSprite;
  if ( !multipleViewButtonSprite
    || (v12.fields.r = r,
        v12.fields.g = g,
        v12.fields.b = b,
        v12.fields.a = a,
        UIWidget__set_color(multipleViewButtonSprite, v12, 0LL),
        (multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonLabel) == 0LL) )
  {
    sub_B2C434(multipleViewButtonSprite, v8);
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color(multipleViewButtonSprite, v13, 0LL);
}


void __fastcall MyRoomControl__SetMyRoomStandFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 _28617756; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 figureSvtDispIdx; // x23
  int32_t v28; // w21
  struct System_Collections_Generic_List_int__o *v29; // x22
  __int64 v30; // x23
  int32_t v31; // w21
  struct System_Int32_array *items; // x8
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w19
  int32_t v35; // w23
  System_Action_o *v36; // x24

  if ( (byte_4185C7F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__0__, v7);
    sub_B2C35C(&MyRoomControl___c__DisplayClass203_0_TypeInfo, v8);
    sub_B2C35C(&UIStandFigureRender_TypeInfo, v9);
    byte_4185C7F = 1;
  }
  v10 = sub_B2C42C(MyRoomControl___c__DisplayClass203_0_TypeInfo);
  MyRoomControl___c__DisplayClass203_0___ctor((MyRoomControl___c__DisplayClass203_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)end_act, v19, v20, v21, v22, v23, v24);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v10 + 24), v25);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _28617756 & 1;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_21;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  _28617756 = ServantScriptMaster__getId(
                this->fields.figureSvtId,
                imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_21;
  v28 = _28617756;
  MyRoomData__getUsrSvtData(this->fields.myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  _28617756 = UIStandFigureRender__GetForm(v28, 1, -1, 0LL);
  v29 = this->fields.imageIdList;
  if ( !v29 )
    goto LABEL_21;
  v30 = this->fields.figureSvtDispIdx;
  v31 = _28617756;
  if ( v29->fields._size <= (unsigned int)v30 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  items = v29->fields._items;
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v35 = items->m_Items[v30 + 1];
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_21:
    sub_B2C434(_28617756, v12);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v35, 1, 0, v31, 10, v36, 0LL);
}


void __fastcall MyRoomControl__SetMySvtFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  int32_t materialServantId; // w21
  int32_t v27; // w22
  const MethodInfo *v28; // x1
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_4185C80 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass204_0__SetMySvtFigure_b__0__, v7);
    sub_B2C35C(&MyRoomControl___c__DisplayClass204_0_TypeInfo, v8);
    byte_4185C80 = 1;
  }
  v9 = sub_B2C42C(MyRoomControl___c__DisplayClass204_0_TypeInfo);
  MyRoomControl___c__DisplayClass204_0___ctor((MyRoomControl___c__DisplayClass204_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)(v9 + 24) = end_act,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v9 + 24),
          (System_Int32_array **)end_act,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_B2C434(v10, v11);
  }
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  materialServantId = this->fields.materialServantId;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v27 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, v27, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v28);
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v9, Method_MyRoomControl___c__DisplayClass204_0__SetMySvtFigure_b__0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v29, v30);
}


void __fastcall MyRoomControl__SetPhotoCampaignButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  UIWidget_o *photoCampaignButtonSprite; // x0
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  gray = UnityEngine_Color__get_gray(0LL);
  r = gray.fields.r;
  g = gray.fields.g;
  b = gray.fields.b;
  a = gray.fields.a;
  if ( MyRoomControl__IsEnablePhotoCampaignButton(this, v7) )
  {
    white = UnityEngine_Color__get_white(0LL);
    r = white.fields.r;
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
  }
  photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonSprite;
  if ( !photoCampaignButtonSprite
    || (v12.fields.r = r,
        v12.fields.g = g,
        v12.fields.b = b,
        v12.fields.a = a,
        UIWidget__set_color(photoCampaignButtonSprite, v12, 0LL),
        (photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonLabel) == 0LL) )
  {
    sub_B2C434(photoCampaignButtonSprite, v8);
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color(photoCampaignButtonSprite, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4185C8A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4185C8A = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(voicePlayEffect, 1, 0LL);
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_20;
    transform = UnityEngine_GameObject__get_transform(voicePlayEffect, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v13 = voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v13)
      || (v14 = voicePlayEffect, UITweener__set_tweenFactor((UITweener_o *)v13, 0.0, 0LL), !v14) )
    {
LABEL_20:
      sub_B2C434(voicePlayEffect, v7);
    }
    UITweener__set_tweenFactor((UITweener_o *)v14, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      HIDWORD(v13[1].klass) = 1;
      HIDWORD(v14[1].klass) = 1;
    }
    else
    {
      HIDWORD(v13[1].klass) = 0;
      HIDWORD(v14[1].klass) = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_45592872((UITweener_o *)v13, 1, 0LL);
    UITweener__Play_45592872((UITweener_o *)v14, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.sceneJumpInfo = info;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sceneJumpInfo,
    (System_Int32_array **)info,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, v3);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B2C434(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_4185C77 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_4185C77 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4185C6B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4185C6B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (DataManager_o *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, v6),
        !this->fields.frontObjectManager) )
  {
    sub_B2C434(Instance, v5);
  }
  v7 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v7 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetupMaterialSvtImageIdList(
        MyRoomControl_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t LimitCount; // w21
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t ServantImageLimitSealAfter; // w21
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v17; // x2
  DataManager_o *v18; // x22
  int32_t v19; // w23
  int32_t v20; // w26
  int32_t ImageLimitCount; // w24
  int32_t v22; // w24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v24; // x20
  unsigned __int64 v25; // x23
  int32_t v26; // w22
  __int64 v27; // x0

  if ( (byte_4185C6D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4185C6D = 1;
  }
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_40;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 servantId,
                                 LimitCount,
                                 0LL);
  Instance = (DataManager_o *)this->fields.materialImageIdList;
  this->fields.materialFigureSvtDispIdx = 0;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)Instance,
                                usrData->fields.userId,
                                servantId,
                                0LL);
  if ( !Instance )
    goto LABEL_40;
  v18 = Instance;
  if ( ((__int64)Instance->fields.saveDataMapList & 0x80000000) == 0 )
  {
    v19 = 0;
    v20 = 0;
    while ( 1 )
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v19, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    (ServantLimitImageMaster_o *)Instance,
                                    servantId,
                                    ImageLimitCount,
                                    0LL);
      if ( !this->fields.materialImageIdList )
        goto LABEL_40;
      v22 = (int)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    this->fields.materialImageIdList,
                                    (int32_t)Instance,
                                    (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v22,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v22 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v20;
        ++v20;
      }
      if ( ++v19 > SLODWORD(v18->fields.saveDataMapList) )
        goto LABEL_29;
    }
  }
  v20 = 0;
LABEL_29:
  Instance = (DataManager_o *)MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)Instance, servantId, v17);
  if ( !Instance )
LABEL_40:
    sub_B2C434(Instance, v14);
  datalist = Instance->fields.datalist;
  v24 = Instance;
  if ( (int)datalist >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)datalist )
      {
        v27 = sub_B2C460(Instance);
        sub_B2C400(v27, 0LL);
      }
      v26 = *((_DWORD *)&v24->fields.lookup + v25);
      if ( v26 >= 1 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v26,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v26 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v20;
        ++v20;
      }
      LODWORD(datalist) = v24->fields.datalist;
      ++v25;
    }
    while ( (__int64)v25 < (int)datalist );
  }
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4185C73 & 1) == 0 )
  {
    sub_B2C35C(&Gesture_EventHandler_TypeInfo, method);
    sub_B2C35C(&FingerGestures_TypeInfo, v3);
    sub_B2C35C(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4185C73 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_B2C42C(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185CCB & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__StartCameraEffect_d__352_TypeInfo, method);
    byte_4185CCB = 1;
  }
  v3 = sub_B2C42C(MyRoomControl__StartCameraEffect_d__352_TypeInfo);
  MyRoomControl__StartCameraEffect_d__352___ctor((MyRoomControl__StartCameraEffect_d__352_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_4185C75 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MyRoomControl__update__, method);
    byte_4185C75 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_MyRoomControl__update__);
  if ( this->fields.isEnableMultipleView )
    MyRoomControl__UpdateMutipleViewRemainTime(this, method);
  if ( this->fields.isEnablePhotoCampaign )
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, method);
}


void __fastcall MyRoomControl__UpdateMutipleViewRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  UILabel_o *multipleViewButtonRemainTimeLabel; // x21
  int64_t multipleViewFinishedTime; // x22
  int64_t v7; // x20
  System_String_o *RestTime6; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4185CC0 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4185CC0 = 1;
  }
  if ( (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    multipleViewButtonRemainTimeLabel = this->fields.multipleViewButtonRemainTimeLabel;
    multipleViewFinishedTime = this->fields.multipleViewFinishedTime;
    v7 = Time;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v7, 0LL);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_B2C434(RestTime6, v9);
    UILabel__set_text(multipleViewButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v7 > this->fields.multipleViewFinishedTime )
    {
      this->fields.multipleViewFinishedTime = -1LL;
      MyRoomControl__SetMultipleViewButtonColor(this, v10);
    }
  }
}


void __fastcall MyRoomControl__UpdatePhotoCampaignRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  UILabel_o *photoCampaignButtonRemainTimeLabel; // x21
  int64_t photoCampaignFinishedTime; // x22
  int64_t v7; // x20
  System_String_o *RestTime6; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4185CD3 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4185CD3 = 1;
  }
  if ( (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    photoCampaignButtonRemainTimeLabel = this->fields.photoCampaignButtonRemainTimeLabel;
    photoCampaignFinishedTime = this->fields.photoCampaignFinishedTime;
    v7 = Time;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v7, 0LL);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_B2C434(RestTime6, v9);
    UILabel__set_text(photoCampaignButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v7 > this->fields.photoCampaignFinishedTime )
    {
      this->fields.photoCampaignFinishedTime = -1LL;
      MyRoomControl__SetPhotoCampaignButtonColor(this, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ValentineListChange(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *MaterialEventLogItemListPanel; // x0
  void (__fastcall *castClass)(float); // x9
  long double v6; // q0
  UnityEngine_GameObject_c *klass; // x8

  MaterialEventLogItemListPanel = (UnityEngine_GameObject_o *)this->fields.MaterialEventLogItemListPanel;
  if ( !MaterialEventLogItemListPanel )
    goto LABEL_11;
  castClass = (void (__fastcall *)(float))MaterialEventLogItemListPanel->klass[1]._1.castClass;
  if ( isActive )
  {
    castClass(0.0);
    MaterialEventLogItemListPanel = (UnityEngine_GameObject_o *)this->fields.valentineListObj;
    if ( !MaterialEventLogItemListPanel )
      goto LABEL_11;
    klass = MaterialEventLogItemListPanel->klass;
    LODWORD(v6) = 1.0;
  }
  else
  {
    castClass(1.0);
    MaterialEventLogItemListPanel = (UnityEngine_GameObject_o *)this->fields.valentineListObj;
    if ( !MaterialEventLogItemListPanel )
      goto LABEL_11;
    klass = MaterialEventLogItemListPanel->klass;
    LODWORD(v6) = 0;
  }
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v6);
  MaterialEventLogItemListPanel = this->fields.servantListBg;
  if ( !MaterialEventLogItemListPanel
    || (UnityEngine_GameObject__SetActive(MaterialEventLogItemListPanel, this->fields.IsListActive, 0LL),
        (MaterialEventLogItemListPanel = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(MaterialEventLogItemListPanel, this->fields.IsListActive, 0LL),
        (MaterialEventLogItemListPanel = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_11:
    sub_B2C434(MaterialEventLogItemListPanel, isActive);
  }
  UnityEngine_GameObject__SetActive(MaterialEventLogItemListPanel, !this->fields.IsListActive, 0LL);
}


void __fastcall MyRoomControl__WaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = MyRoomControl__CoWaitForConstructingRecordWithServant(this, setEndAction, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__336_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4185CDD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__CloseMultipleView_b__336_1__, v3);
    byte_4185CDD = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__336_1__, 0LL);
  if ( !multipleViewComponent )
    sub_B2C434(v6, v7);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v5, v8);
}


void __fastcall MyRoomControl___CloseMultipleView_b__336_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  int max_length; // w9
  const MethodInfo *v8; // x2
  __int64 v9; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 40, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__FrameIn(titleInfo, 1, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4);
  titleInfo = (TitleInfoControl_o *)this->fields.multipleViewCloseButton;
  if ( !titleInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_10;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v9 = sub_B2C460(titleInfo);
      sub_B2C400(v9, 0LL);
    }
    titleInfo = (TitleInfoControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( titleInfo )
    {
      StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v6;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_10;
  }
  titleInfo = (TitleInfoControl_o *)this->fields.mBlocker;
  if ( !titleInfo )
LABEL_10:
    sub_B2C434(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__359_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4185CDE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_1__, v3);
    byte_4185CDE = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_B2C434(v6, v7);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v5, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__359_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_B2C434(titleInfo, method);
  }
  StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v6);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__253_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B2C434(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___GoToTitle_b__281_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  MyRoomControl_o *v10; // x0
  const MethodInfo *v11; // x1
  CommonUI_o *v12; // x19
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__281_1; // x20
  Il2CppObject *v17; // x21
  struct MyRoomControl___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4185CDC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_MyRoomControl___c__GoToTitle_b__281_1__, v6);
    sub_B2C35C(&MyRoomControl___c_TypeInfo, v7);
    byte_4185CDC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v10, v11);
    v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      Instance = MyRoomControl___c_TypeInfo;
    }
    static_fields = (struct MyRoomControl___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__281_1 = static_fields->__9__281_1;
    if ( !_9__281_1 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__281_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__281_1, v17, Method_MyRoomControl___c__GoToTitle_b__281_1__, 0LL);
      v18 = MyRoomControl___c_TypeInfo->static_fields;
      v18->__9__281_1 = _9__281_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v18->__9__281_1,
        (System_Int32_array **)_9__281_1,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    if ( v12 )
    {
      CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, _9__281_1, 0LL);
      return;
    }
LABEL_19:
    sub_B2C434(Instance, v9);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__250_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B2C434(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__228_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t mState; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v8; // x21
  StandFigureBack_o *SvtStandFigure; // x0
  unsigned int localPosition; // s0
  float v11; // s8
  float v12; // s1
  float v13; // s9
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185CDA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__LoadServantForm_b__228_1__, v4);
    sub_B2C35C(&StringLiteral_8562/*"LoadServantFormEnd"*/, v5);
    byte_4185CDA = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__228_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(SvtStandFigure, method);
  }
  if ( (unsigned int)(mState - 1) > 1 )
  {
    MyRoomControl__LoadServantFormEnd(this, method);
    return;
  }
  SvtStandFigure = this->fields.standFigureBack;
  if ( !SvtStandFigure )
    goto LABEL_18;
  StandFigureBack__Fadein(SvtStandFigure, 0LL, 0LL);
  SvtStandFigure = this->fields.standFigureBack;
  if ( !SvtStandFigure )
    goto LABEL_18;
  SvtStandFigure = (StandFigureBack_o *)StandFigureBack__GetSvtStandFigure(SvtStandFigure, 0, 0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  SvtStandFigure = (StandFigureBack_o *)SvtStandFigure->fields.basePanel;
  if ( !SvtStandFigure )
    goto LABEL_18;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0LL);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v11 = *(float *)&localPosition;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)SvtStandFigure,
                                           0LL);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v13 = v12;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0LL);
  v15.fields.x = -v11;
  v15.fields.y = v13;
  MyRoomControl__moveControl(this, this->fields.svtObj, v15, (System_String_o *)StringLiteral_8562/*"LoadServantFormEnd"*/, v14);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__322_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_B2C434(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OnClickSelectPhotoCampaign_b__346_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x0

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_B2C434(0LL, method);
  PhotoCampaignComponent__Open(photoCampaignComponent, 1, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__273_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4185CDB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_4185CDB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__211_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4185CD9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7081/*"HIDE_END"*/, method);
    byte_4185CD9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7081/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__248_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B2C434(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__202_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v5; // x8

  if ( (byte_4185CD8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8407/*"LOAD_END"*/, method);
    sub_B2C35C(&StringLiteral_8408/*"LOAD_END_TO_HELP"*/, v3);
    byte_4185CD8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  if ( this->fields.type == 6 )
    v5 = &StringLiteral_8408/*"LOAD_END_TO_HELP"*/;
  else
    v5 = &StringLiteral_8407/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__184_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4185CD7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, result);
    byte_4185CD7 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8
  struct MstProfileComponent_o *mstPfComp; // x8

  v4 = this;
  if ( (byte_4185C93 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, result);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    this = (MyRoomControl_o *)sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v6);
    byte_4185C93 = 1;
  }
  if ( !result )
    goto LABEL_13;
  this = (MyRoomControl_o *)System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mstPfComp = v4->fields.mstPfComp;
    if ( mstPfComp )
    {
      this = (MyRoomControl_o *)mstPfComp->fields.changeNameWindow;
      if ( this )
      {
        ChangeUserNameWindow__resetInputVal((ChangeUserNameWindow_o *)this, 0LL);
        this = (MyRoomControl_o *)v4->fields.myRoomFsm;
        if ( this )
        {
          v7 = &StringLiteral_11077/*"REQUEST_NG"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_B2C434(this, result);
  }
  this = (MyRoomControl_o *)v4->fields.myRoomData;
  if ( !this )
    goto LABEL_13;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = (MyRoomControl_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_13;
  v7 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4185C9F & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_4185C9F = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_B2C434(0LL, v3);
    MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
  }
}


void __fastcall MyRoomControl__closeMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Collider_o *maskBoxCollider; // x0

  MyRoomControl__SetState(this, 1, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_B2C434(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_B2C434(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  char *svtCtr; // x0

  svtCtr = (char *)this->fields.svtCtr;
  if ( !svtCtr
    || (*((_QWORD *)svtCtr + 10) = 0LL,
        sub_B2C2F8((BattleServantConfConponent_o *)(svtCtr + 80), 0LL, v2, v3, v4, v5, v6, v7),
        (svtCtr = (char *)this->fields.standFigureBack) == 0LL) )
  {
    sub_B2C434(svtCtr, method);
  }
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4185C91 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11576/*"SAVE_END"*/, method);
    byte_4185C91 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11576/*"SAVE_END"*/, 0LL);
}


System_String_o *__fastcall MyRoomControl__getChangeMyRoomBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomControl_c *v6; // x0
  System_String_o *DEFAULT_BGM_NAME; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  int32_t v11; // w20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185C6F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&MyRoomControl_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185C6F = 1;
  }
  entity = 0LL;
  v6 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v6->static_fields->DEFAULT_BGM_NAME;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  v10 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, v9);
  if ( v10 )
  {
    v11 = v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  v11,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.age;
LABEL_15:
      sub_B2C434(Instance, v9);
    }
  }
  return DEFAULT_BGM_NAME;
}


System_String_o *__fastcall MyRoomControl__getMyRoomBgm(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  System_String_o *v4; // x0
  __int64 v5; // x1
  SoundPlayerComponent_o *soundPlayerComp; // x8
  System_String_o *v7; // x19
  System_String_o *PlaySoundName; // x20

  if ( (byte_4185C70 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    byte_4185C70 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B2C434(v4, v5);
  v7 = v4;
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
    return v7;
  else
    return PlaySoundName;
}


UIStandFigureR_o *__fastcall MyRoomControl__getSvtStandFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B2C434(0LL, method);
  return StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall MyRoomControl__getSvtVoiceEnt(
        MyRoomControl_o *this,
        bool limitCntReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t size; // w10
  int32_t v23; // w8
  struct System_Collections_Generic_List_int__o *v25; // x8
  UIWidget_o *changeBtnImg; // x20
  int v27; // s0
  MyRoomControl_c *v31; // x0
  int v32; // w8
  int v33; // s0
  MyRoomControl_c *v37; // x0
  struct System_Collections_Generic_List_int__o *v38; // x21
  __int64 figureSvtDispIdx; // x19
  int32_t v40; // w20
  int32_t LimitCountByImageLimit; // w19
  StandFigureBack_c *v42; // x0

  if ( (byte_4185C83 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B2C35C(&MyRoomControl_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StandFigureBack_TypeInfo, v10);
    byte_4185C83 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_41;
  favoriteUserSvtId = usrData->fields.favoriteUserSvtId;
  this->fields.fvrUsrSvtId = favoriteUserSvtId;
  if ( favoriteUserSvtId < 1 )
    return 0LL;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_41;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0LL);
  if ( myRoomData )
  {
    if ( limitCntReset )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_41;
      size = imageIdList->fields._size;
      v23 = this->fields.figureSvtDispIdx + 1;
      if ( v23 >= size )
        v23 = 0;
      else
        this->fields.figureSvtDispIdx = v23;
      this->fields.figureSvtDispIdx = v23;
    }
    else
    {
      v25 = this->fields.imageIdList;
      if ( !v25 )
        goto LABEL_41;
      changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
      if ( v25->fields._size <= 1 )
      {
        *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_gray(0LL);
        if ( !changeBtnImg )
          goto LABEL_41;
        UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v33, 0LL);
        v37 = MyRoomControl_TypeInfo;
        if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v37 = MyRoomControl_TypeInfo;
        }
        v32 = this->fields.buttonFlag & ~v37->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
        if ( !changeBtnImg )
          goto LABEL_41;
        UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v27, 0LL);
        v31 = MyRoomControl_TypeInfo;
        if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v31 = MyRoomControl_TypeInfo;
        }
        v32 = this->fields.buttonFlag | v31->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v32;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  v38 = this->fields.imageIdList;
  if ( !v38 )
    goto LABEL_41;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  v40 = (int)myRoomData;
  if ( v38->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  LimitCountByImageLimit = v38->fields._items->m_Items[figureSvtDispIdx + 1];
  v42 = StandFigureBack_TypeInfo;
  if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v42 = StandFigureBack_TypeInfo;
  }
  if ( LimitCountByImageLimit < v42->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(LimitCountByImageLimit, 0LL);
  }
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData
    || (myRoomData = (MyRoomData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)myRoomData,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_41:
    sub_B2C434(myRoomData, favoriteUserSvtId);
  }
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v40, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4185C8C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185C8C = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_B2C434(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
}


void __fastcall MyRoomControl__helpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x20

  if ( (byte_4185CA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v7);
    byte_4185CA2 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(helpListViewManager, v8);
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v10,
                                                         (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !helpListViewManager )
    goto LABEL_14;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)helpListViewManager, 128, 0LL);
  EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall MyRoomControl__hideContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_B2C434(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4185C9A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__hideFavoriteSvt_b__273_0__, v3);
    byte_4185C9A = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__273_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_B2C434(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_B2C434(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_B2C434(0LL, method);
  SetGameOptionComponent__hideGameOption(optionComp, 0LL);
}


void __fastcall MyRoomControl__hideProfile(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp
    || (MstProfileComponent__hideMstProfile(mstPfComp, method),
        (mstPfComp = (MstProfileComponent_o *)this->fields.mstpfObj) == 0LL) )
  {
    sub_B2C434(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B2C434(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4185C9C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_4185C9C = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4185C9D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185C9D = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_B2C434(soundPlayerComp, method);
  }
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
  {
    MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v5);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(MyRoomBgm, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__hideSvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIWidget_o *playBtnImg; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0
  const MethodInfo *v12; // x1
  MyRoomControl_c *v13; // x0
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v15; // x21

  if ( (byte_4185C86 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__hideSvtFigure_b__211_0__, v3);
    sub_B2C35C(&MyRoomControl_TypeInfo, v4);
    byte_4185C86 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
  if ( !playBtnImg )
    goto LABEL_9;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v8, 0LL);
  v13 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v13 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v13->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v12);
  standFigureBack = this->fields.standFigureBack;
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__211_0__, 0LL);
  if ( !standFigureBack )
LABEL_9:
    sub_B2C434(v6, v7);
  StandFigureBack__Fadeout(standFigureBack, v15, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_B2C434(0LL, method);
  UserServantCoinComponent__hideMenu(userServantCoinComp, 0LL);
}


void __fastcall MyRoomControl__hideUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserItemListViewManager_o *usrItemListViewManager; // x0

  usrItemListViewManager = this->fields.usrItemListViewManager;
  if ( !usrItemListViewManager
    || (UserItemListViewManager__DestroyList(usrItemListViewManager, 0LL),
        (usrItemListViewManager = this->fields.usrItemListViewManager) == 0LL)
    || (usrItemListViewManager = (UserItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)usrItemListViewManager,
                                                                0LL)) == 0LL )
  {
    sub_B2C434(usrItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185C97 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__initMaterial_d__248_TypeInfo, method);
    byte_4185C97 = 1;
  }
  v3 = sub_B2C42C(MyRoomControl__initMaterial_d__248_TypeInfo);
  MyRoomControl__initMaterial_d__248___ctor((MyRoomControl__initMaterial_d__248_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__initMyRoom(MyRoomControl_o *this, const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v24; // x2
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct CStateManager_MyRoomControl__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v33; // x21
  struct EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMaster_o **p_eventMaster; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  struct MyRoomControl___c_StaticFields *standFigureCollectList; // x8
  System_Action_o *_9__179_0; // x22
  Il2CppObject *v47; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x4
  MyRoomControl_o *v57; // x0
  const MethodInfo *v58; // x4
  MyRoomParamsManager_c *v59; // x0
  struct MyRoomParamsManager_StaticFields *v60; // x8
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v65; // x22
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x1
  float x; // w8
  float y; // w9
  float z; // w10
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v74; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v78; // x21
  int max_length; // w9
  int basePanel; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x1
  EventEntity_array *EnableEntityList; // x20
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v95; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x20
  UILabel_o *photoCampaignButtonLabel; // x21
  const MethodInfo *v98; // x2
  struct EventEntity_o *photoCampaignEntity; // x8
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  UnityEngine_Vector3_o v104; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185C6A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_CStateManager_MyRoomControl___ctor__, v4);
    sub_B2C35C(&Method_CStateManager_MyRoomControl__add__, v5);
    sub_B2C35C(&CStateManager_MyRoomControl__TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_MyRoomControl_LoadScriptFileListAssetData__, v12);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&MyRoomControl_StateEtc_TypeInfo, v16);
    sub_B2C35C(&Method_MyRoomControl___c__initMyRoom_b__179_0__, v17);
    sub_B2C35C(&MyRoomControl___c_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_10436/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v19);
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, v20);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v21);
    sub_B2C35C(&StringLiteral_8856/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v22);
    byte_4185C6A = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v104.fields.z = 0.0;
  *(_QWORD *)&v104.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( !this->fields.mFSM )
  {
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v25,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2A08354 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v25;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_2A08420 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = this->fields.mFSM;
    v33 = (MyRoomControl_StateEtc_o *)sub_B2C42C(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v33, 0LL);
    if ( !mFSM )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      1,
      (IState_T__o *)v33,
      (const MethodInfo_2A08420 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v24);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (struct EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)standFigureBack,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_59;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)standFigureBack, this->fields.myRoomFsm, 1, 0LL, 40, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)standFigureBack, 30, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomListCtr;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomListControl__Setup((MyRoomListControl_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.voiceClickCollider;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  this->fields.isHeroineReave = 0;
  *(_WORD *)&this->fields.isServantMaterial = 0;
  *(_DWORD *)&this->fields.isVoiceLoading = 0;
  this->fields.isExistVoiceData = 1;
  this->fields.materialServantId = -1;
  MyRoomControl__setUserStInfoView(this, v42);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(mMainObj, LocalPosition, 0LL);
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
  if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
  }
  standFigureCollectList = (struct MyRoomControl___c_StaticFields *)standFigureBack[1].fields.standFigureCollectList;
  _9__179_0 = standFigureCollectList->__9__179_0;
  if ( !_9__179_0 )
  {
    if ( (standFigureBack[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(standFigureBack[2].fields.baseWindow) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureCollectList = MyRoomControl___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)standFigureCollectList->__9;
    _9__179_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__179_0, v47, Method_MyRoomControl___c__initMyRoom_b__179_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__179_0 = _9__179_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->__9__179_0,
      (System_Int32_array **)_9__179_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_59;
  v55 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, _9__179_0, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v55,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v56);
  MyRoomControl__setupSortWindowUIMoveData(v57, this->fields.sortWindowObj, &v, &v104, v58);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_4185CDF )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_4185CDF = 1;
  }
  v59 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v59 = MyRoomParamsManager_TypeInfo;
  }
  v60 = v59->static_fields;
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  this->fields.IsListActive = v60->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_59;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v61);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v62);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v65 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_59;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v65, v66);
  MyRoomControl__setupSvtImageIdList(this, v67);
  standFigureBack = (StandFigureBack_o *)this->fields.helpListViewManager;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomHelpListViewManager__LoadBaseSprite((MyRoomHelpListViewManager_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
  this->fields.mState = 0;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  if ( this->fields.isSetVoicePlayButtonDefaultPos )
  {
    x = this->fields.voicePlayButtonDefaultPos.fields.x;
    y = this->fields.voicePlayButtonDefaultPos.fields.y;
    z = this->fields.voicePlayButtonDefaultPos.fields.z;
  }
  else
  {
    v109 = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    x = v109.fields.x;
    y = v109.fields.y;
    z = v109.fields.z;
    this->fields.voicePlayButtonDefaultPos = v109;
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  this->fields.voicePlayBtnInitPos.fields.x = x;
  this->fields.voicePlayBtnInitPos.fields.y = y;
  this->fields.voicePlayBtnInitPos.fields.z = z;
  v110 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v110;
  v111 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v111;
  v112 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v112;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v74);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_16962/*"btn_bg_12"*/, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_59;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.typeMetadataHandle)(
    standFigureBack,
    standFigureBack->klass[2]._1.interopData);
  v113 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v113;
  if ( !multipleStandFigureBacks )
    goto LABEL_59;
  v78 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v78 >= max_length )
      break;
    if ( (unsigned int)v78 >= max_length )
      goto LABEL_96;
    standFigureBack = multipleStandFigureBacks->m_Items[v78];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v78;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_59;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewCloseButton;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewDisableUiButton;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)*p_eventMaster;
  if ( !*p_eventMaster )
    goto LABEL_59;
  this->fields.isEnableMultipleView = EventMaster__IsEnableMyRoomMultipleView((EventMaster_o *)standFigureBack, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (StandFigureBack_o *)UserServantMaster__getOrganizationList(
                                                 (UserServantMaster_o *)standFigureBack,
                                                 0LL)) == 0LL
    || (basePanel = (int)standFigureBack->fields.basePanel,
        standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = basePanel > 1,
        !standFigureBack) )
  {
LABEL_59:
    sub_B2C434(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8856/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_59;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_59;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v83);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v84);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v85);
  }
  standFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !standFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignCameraButton;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignProduction;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_59;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EnableEntityList,
                                           0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  method = (const MethodInfo *)(((unsigned int)standFigureBack ^ 1) & 1);
  this->fields.isEnablePhotoCampaign = ((unsigned __int8)standFigureBack ^ 1) & 1;
  if ( !photoCampaignButton )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(photoCampaignButton, ((unsigned __int8)standFigureBack ^ 1) & 1, 0LL);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoCampaignState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_59;
    if ( !EnableEntityList->max_length )
    {
LABEL_96:
      v103 = sub_B2C460(standFigureBack);
      sub_B2C400(v103, 0LL);
    }
    v95 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v95;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.photoCampaignEntity,
      (System_Int32_array **)v95,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10436/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_59;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_59;
    MyRoomControl__LoadPhotoCampaignAssets(this, (*p_photoCampaignEntity)->fields.id, v98);
    photoCampaignEntity = this->fields.photoCampaignEntity;
    if ( !photoCampaignEntity )
      goto LABEL_59;
    standFigureBack = (StandFigureBack_o *)this->fields.eventMaster;
    if ( !standFigureBack )
      goto LABEL_59;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               (EventMaster_o *)standFigureBack,
                                               photoCampaignEntity->fields.id,
                                               0LL);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v100);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v101);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v102);
  }
}


bool __fastcall MyRoomControl__isBattleSetup(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mBattleSetupInfo != 0LL;
}


void __fastcall MyRoomControl__materialSvtVoicePlay(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = MyRoomControl__svtVoicePlayAct(this, item, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__moveControl(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *target,
        UnityEngine_Vector3_o movePos,
        System_String_o *callwhenFinished,
        const MethodInfo *method)
{
  float z; // s3
  TweenPosition_o *v8; // x20
  System_Int32_array **gameObject; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  z = movePos.fields.z;
  movePos.fields.z = movePos.fields.y;
  movePos.fields.y = movePos.fields.x;
  v8 = TweenPosition__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&movePos.fields.y, 0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v8 )
    sub_B2C434(gameObject, v10);
  v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.eventReceiver, gameObject, v11, v12, v13, v14, v15, v16);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields.callWhenFinished,
      (System_Int32_array **)callwhenFinished,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v8->fields.style = 3;
}


void __fastcall MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v4; // x1
  MyRoomControl_c *v5; // x0
  __int64 v6; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4185CA0 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185CA0 = 1;
  }
  v5 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v5->static_fields->BUTTON_HELP) < 0) ^ v2 | ((this->fields.buttonFlag & v5->static_fields->BUTTON_HELP) == 0) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isServantMaterial )
    {
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 61, 0LL, 0LL);
    }
    else
    {
      helpListViewManager = this->fields.helpListViewManager;
      if ( !helpListViewManager )
        sub_B2C434(0LL, v6);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  MyRoomHelpListViewManager_CallbackFunc2_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185CA1 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl_helpClose__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185CA1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v6 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_B2C42C(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_B2C434(v7, v8);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v6, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_B2C434(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B2C434(0LL, method);
  SoundPlayerComponent__openMenu(soundPlayerComp, 0LL);
}


void __fastcall MyRoomControl__playSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t VoiceSvtId; // w0
  __int64 v10; // x1
  int32_t v11; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v13; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v15; // w20
  TopMyRoomRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_Int32_array_array *v17; // x22
  int fsm; // w8
  System_Int32_array **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4185C8F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_B2C35C(&int_____TypeInfo, v3);
    sub_B2C35C(&int___TypeInfo, v4);
    sub_B2C35C(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185C8F = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v11 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_23;
    v13 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v13, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v11, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_23;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v11, v13, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v15 = FlagRequestNumber;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TopMyRoomRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    0LL,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v17 = (System_Int32_array_array *)sub_B2C374(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_B2C374(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          fsm = (int)svtCtr->fields.fsm;
          v19 = (System_Int32_array **)svtCtr;
          if ( !fsm )
            goto LABEL_24;
          LODWORD(svtCtr->fields.player) = v11;
          if ( fsm == 1 )
            goto LABEL_24;
          HIDWORD(svtCtr->fields.player) = v15;
          if ( !v17 )
            goto LABEL_23;
          svtCtr = (MyRoomSvtControl_o *)sub_B2C41C(svtCtr, v17->obj.klass->_1.element_class);
          if ( !svtCtr )
          {
            v27 = sub_B2C454();
            sub_B2C400(v27, 0LL);
          }
          if ( !v17->max_length )
          {
LABEL_24:
            v26 = sub_B2C460(svtCtr);
            sub_B2C400(v26, 0LL);
          }
          v17->m_Items[0] = (System_Int32_array *)v19;
          sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v19, v20, v21, v22, v23, v24, v25);
          if ( Request_WarBoardWallAttackRequest )
          {
            TopMyRoomRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, 0LL);
            return;
          }
        }
LABEL_23:
        sub_B2C434(svtCtr, v10);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  SoundPlayerComponent_o *soundPlayerComp; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  int32_t materialServantId; // w20
  int32_t v9; // w21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4185C7A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4185C7A = 1;
  }
  MyRoomControl__shutdown(this, method);
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    v2->fields.isServantMaterial = 0;
    if ( !materialImageIdList )
      goto LABEL_19;
    materialFigureSvtDispIdx = v2->fields.materialFigureSvtDispIdx;
    materialServantId = v2->fields.materialServantId;
    if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v9 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, v9, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  soundPlayerComp = v2->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    goto LABEL_19;
  SoundPlayerComponent__DestroyMenu(soundPlayerComp, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v2, v10);
  MyRoomControl__destroySvtFigure(v2, v11);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.backGroundManager;
  if ( !soundPlayerComp )
    goto LABEL_19;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)soundPlayerComp, v5);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.mMaterialEventLogListViewManager;
  if ( !soundPlayerComp )
    goto LABEL_19;
  MaterialEventLogListViewManager__DestroyList((MaterialEventLogListViewManager_o *)soundPlayerComp, 0LL);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.helpListViewManager;
  if ( !soundPlayerComp
    || (MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)soundPlayerComp, 0LL),
        (soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.helpListViewManager) == 0LL)
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)soundPlayerComp, 0LL),
        (soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)soundPlayerComp, 0LL),
        (soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.MaterialEventLogItemListPanel) == 0LL) )
  {
LABEL_19:
    sub_B2C434(soundPlayerComp, v5);
  }
  ((void (__fastcall *)(SoundPlayerComponent_o *, Il2CppClass *, float))soundPlayerComp->klass[1]._1.castClass)(
    soundPlayerComp,
    soundPlayerComp->klass[1]._1.declaringType,
    1.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4185C90 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl_endReflectionGameOption__, v3);
    byte_4185C90 = 1;
  }
  optionComp = this->fields.optionComp;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_B2C434(v6, v7);
  SetGameOptionComponent__reflectionGameOption(optionComp, v5, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t v9; // w19
  System_String_o *Value; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x20

  if ( (byte_4185C92 & 1) == 0 )
  {
    sub_B2C35C(&Method_MyRoomControl_callbackChangeName__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3914/*"ChangeUserName"*/, v6);
    byte_4185C92 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  if ( !this->fields.myRoomFsm )
    goto LABEL_14;
  v9 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_3914/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v11,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_WarBoardWallAttackRequest )
LABEL_14:
    sub_B2C434(SelfUserGame, v8);
  UserNameChangeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    Value,
    v9,
    *((System_String_o **)SelfUserGame + 29),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_B2C434(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 figureSvtDispIdx; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *asstName; // x21
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x3

  if ( (byte_4185C87 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isReset);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass212_0__resetSvtVoiceData_b__0__, v6);
    sub_B2C35C(&MyRoomControl___c__DisplayClass212_0_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_8407/*"LOAD_END"*/, v8);
    byte_4185C87 = 1;
  }
  v9 = sub_B2C42C(MyRoomControl___c__DisplayClass212_0_TypeInfo);
  MyRoomControl___c__DisplayClass212_0___ctor((MyRoomControl___c__DisplayClass212_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8407/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B2C434(myRoomFsm, v11);
  }
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, isReset, v18);
  *(_QWORD *)(v9 + 24) = SvtVoiceEnt;
  v20 = (ServantVoiceEntity_o **)(v9 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), SvtVoiceEnt, v21, v22, v23, v24, v25, v26);
  if ( !*(_QWORD *)(v9 + 24) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    this->fields.isExistVoiceData = 0;
    if ( myRoomFsm )
      goto LABEL_7;
    goto LABEL_15;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_15;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                      *v20,
                      imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                      0LL);
  this->fields.voiceList = MyRoomVoiceList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceList,
    (System_Int32_array **)MyRoomVoiceList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  myRoomFsm = (PlayMakerFSM_o *)*v20;
  if ( !*v20 )
    goto LABEL_15;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)VoiceAssetName,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  asstName = this->fields.asstName;
  v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass212_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v44, v45);
}


void __fastcall MyRoomControl__setContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 8;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  ContinueDeviceComponent__showMenu((ContinueDeviceComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setDefSvtPos(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  _BOOL4 isServantMaterial; // w23
  UnityEngine_GameObject_o *mMainObj; // x20
  const MethodInfo *v6; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  float v10; // s2
  UnityEngine_GameObject_o *servantListObj; // x22
  UnityEngine_GameObject_o *sortWindowObj; // x21
  float v13; // s10
  float v14; // s2
  float v15; // s11
  float v16; // s12
  float v17; // s13
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int32_t mState; // w8
  float v21; // s1
  float v22; // s11
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185CA9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185CA9 = 1;
  }
  voicePlayBtn = this->fields.voicePlayBtn;
  if ( !voicePlayBtn )
    goto LABEL_35;
  isServantMaterial = this->fields.isServantMaterial;
  UnityEngine_GameObject__SetActive(voicePlayBtn, !this->fields.isServantMaterial, 0LL);
  voicePlayBtn = this->fields.changeLimitBtn;
  if ( !voicePlayBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 1, 0LL);
  voicePlayBtn = this->fields.helpBtn;
  if ( !voicePlayBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 1, 0LL);
  if ( !this->fields.mState )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  switch ( this->fields.type )
  {
    case 1:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      mMainObj = this->fields.materialObj;
      if ( !mMainObj )
        goto LABEL_35;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.materialObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      y = v25.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mMainObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      servantListObj = this->fields.servantListObj;
      if ( !servantListObj )
        goto LABEL_35;
      sortWindowObj = this->fields.sortWindowObj;
      z = v10;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v13 = v26.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      *(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      if ( !sortWindowObj )
        goto LABEL_35;
      v15 = v14;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v16 = v27.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v17 = v28.fields.z;
      v28.fields.x = -7.0;
      v28.fields.y = v13;
      v28.fields.z = v15;
      MyRoomControl__MyRoomlUIAnimationStart(this, servantListObj, v28, v18);
      v29.fields.x = 0.0;
      v29.fields.y = v16;
      v29.fields.z = v17;
      MyRoomControl__MyRoomlUIAnimationStart(this, sortWindowObj, v29, v19);
      x = 250.0;
LABEL_21:
      mState = this->fields.mState;
      if ( (unsigned int)(mState - 1) < 2 )
      {
        voicePlayBtn = this->fields.svtObj;
        if ( voicePlayBtn )
        {
          voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayBtn, 0LL);
          if ( voicePlayBtn )
          {
            *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)voicePlayBtn,
                                                     0LL);
            voicePlayBtn = this->fields.svtObj;
            if ( voicePlayBtn )
            {
              v22 = v21;
              voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayBtn, 0LL);
              if ( voicePlayBtn )
              {
                v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
                v30.fields.x = -512.0;
                v30.fields.y = v22;
                MyRoomControl__moveControl(this, this->fields.svtObj, v30, 0LL, v23);
                goto LABEL_31;
              }
            }
          }
        }
        goto LABEL_35;
      }
      if ( mState == 3 )
      {
        voicePlayBtn = (UnityEngine_GameObject_o *)this->fields.standFigureBack;
        if ( voicePlayBtn )
        {
          StandFigureBack__Fadein((StandFigureBack_o *)voicePlayBtn, 0LL, 0LL);
          voicePlayBtn = this->fields.voicePlayBtn;
          if ( voicePlayBtn )
          {
            UnityEngine_GameObject__SetActive(voicePlayBtn, !isServantMaterial, 0LL);
            goto LABEL_31;
          }
        }
LABEL_35:
        sub_B2C434(voicePlayBtn, method);
      }
LABEL_31:
      v31.fields.x = x;
      v31.fields.y = y;
      v31.fields.z = z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, v31, v6);
      this->fields.mState = 0;
      return;
    case 6:
      mMainObj = this->fields.noticeObj;
      goto LABEL_21;
    case 0xA:
      mMainObj = this->fields.soundPlayerObj;
      goto LABEL_21;
    default:
      goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setDispMyRoomOptionBtn(MyRoomControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *moveBtnObj; // x0
  bool v5; // w21

  moveBtnObj = this->fields.moveBtnObj;
  if ( !moveBtnObj
    || (v5 = isDisp,
        UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0LL),
        (moveBtnObj = this->fields.changeLimitBtn) == 0LL)
    || (UnityEngine_GameObject__SetActive(moveBtnObj, v5, 0LL), (moveBtnObj = this->fields.helpBtn) == 0LL) )
  {
    sub_B2C434(moveBtnObj, isDisp);
  }
  UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setEnalbeTitleBtn(MyRoomControl_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_Collider_o *titleBtnCollider; // x0
  bool v6; // w20

  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.titleBtnCollider;
  if ( !titleBtnCollider )
    goto LABEL_8;
  UnityEngine_Collider__set_enabled(titleBtnCollider, isEnabled, 0LL);
  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !titleBtnCollider )
    goto LABEL_8;
  v6 = !isEnabled;
  UnityEngine_Collider__set_enabled(titleBtnCollider, v6, 0LL);
  if ( this->fields.type != 5 )
    return;
  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.optionComp;
  if ( !titleBtnCollider )
LABEL_8:
    sub_B2C434(titleBtnCollider, isEnabled);
  if ( !LODWORD(titleBtnCollider[10].klass) )
    SetGameOptionComponent__SetMaskEnabled((SetGameOptionComponent_o *)titleBtnCollider, v6, 0LL);
}


// attributes: thunk
void __fastcall MyRoomControl__setFaceType(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl__SetPlayButtonAnimation(this, method);
}


void __fastcall MyRoomControl__setFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 9;
  MyRoomControl__setSvtFigureActive(this, 9, 1, v3);
}


void __fastcall MyRoomControl__setGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 5;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  SetGameOptionComponent__showGameOption((SetGameOptionComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4185C95 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, isPlayDecideSe);
    byte_4185C95 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, v5);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
}


void __fastcall MyRoomControl__setMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  MaterialCollectionComponent__showMenu((MaterialCollectionComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 55, 0, 0LL);
  this->fields.type = 12;
}


void __fastcall MyRoomControl__setMaterialMainQuestPart(
        MyRoomControl_o *this,
        int32_t titleNameParam,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B2C434(this, method);
  mStateMaterial->fields.isServantMenuTop = 0;
  MyRoomControl__SetState(this, 0, v2);
}


void __fastcall MyRoomControl__setMaterialUIMove(MyRoomControl_o *this, bool isDisp, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Vector3_o *p_moveShowPos; // x8
  UnityEngine_Vector3_o moveHidePos; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v3);
  if ( !this )
    sub_B2C434(v6, v7);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &moveHidePos;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v8);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4185C7E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl__setMySvtFigure_b__202_0__, v3);
    byte_4185C7E = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__202_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v4, v5);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_21418140(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_21418140(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  unsigned int size; // w8
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  int32_t Form; // w0
  int32_t Id; // w20
  int32_t v14; // w2
  UnityEngine_Object_o *playBtnImg; // x20

  v4 = this;
  if ( (byte_4185C8B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    this = (MyRoomControl_o *)sub_B2C35C(&UIStandFigureRender_TypeInfo, v6);
    byte_4185C8B = 1;
  }
  if ( v4->fields.isServantMaterial )
  {
    materialImageIdList = v4->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_32;
    materialFigureSvtDispIdx = v4->fields.materialFigureSvtDispIdx;
    size = materialImageIdList->fields._size;
    materialServantId = v4->fields.materialServantId;
LABEL_16:
    if ( size <= (unsigned int)materialFigureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    Id = ServantScriptMaster__getId(
           materialServantId,
           materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1],
           0LL);
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
LABEL_22:
    v14 = Form;
    goto LABEL_23;
  }
  if ( !isCurrent || !v4->fields.isServantFormKeep )
  {
    materialImageIdList = v4->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_32;
    materialFigureSvtDispIdx = v4->fields.figureSvtDispIdx;
    size = materialImageIdList->fields._size;
    materialServantId = v4->fields.figureSvtId;
    goto LABEL_16;
  }
  svtCtr = (UnityEngine_Object_o *)v4->fields.svtCtr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtCtr, 0LL, 0LL) )
  {
    this = (MyRoomControl_o *)v4->fields.svtCtr;
    if ( !this )
      goto LABEL_32;
    Form = MyRoomSvtControl__GetFormId((MyRoomSvtControl_o *)this, 0LL);
    goto LABEL_22;
  }
  v14 = 0;
LABEL_23:
  this = (MyRoomControl_o *)v4->fields.standFigureBack;
  if ( !this )
    goto LABEL_32;
  StandFigureBack__SetFaceTypeAndForm((StandFigureBack_o *)this, 0, v14, 0LL);
  v4->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)v4->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    this = (MyRoomControl_o *)v4->fields.voicePlayEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_32:
    sub_B2C434(this, isCurrent);
  }
}


void __fastcall MyRoomControl__setNoticeInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 6;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  NoticeInfoComponent__setNoticeInfo((NoticeInfoComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mstpfObj; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3

  mstpfObj = this->fields.mstpfObj;
  if ( !mstpfObj
    || (UnityEngine_GameObject__SetActive(mstpfObj, 1, 0LL),
        MyRoomControl__stopSvtVoice(this, v4),
        mstpfObj = (UnityEngine_GameObject_o *)this->fields.titleInfo,
        this->fields.type = 4,
        !mstpfObj)
    || (TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_B2C434(mstpfObj, method);
  }
  MstProfileComponent__showMstProfile((MstProfileComponent_o *)mstpfObj, method);
}


void __fastcall MyRoomControl__setSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  SerialCodeComponent_o *serialCodeComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 7;
  MyRoomControl__setSvtFigureActive(this, 7, 1, v3);
  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B2C434(0LL, v4);
  SerialCodeComponent__showMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__setSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 10;
  MyRoomControl__setSvtFigureActive(this, 10, 1, v3);
}


void __fastcall MyRoomControl__setSvtFigureActive(
        MyRoomControl_o *this,
        int32_t type,
        bool callFadeIn,
        const MethodInfo *method)
{
  _BOOL8 isEnableMultipleView; // x1
  StandFigureBack_o *standFigureBack; // x0
  int v8; // w20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  switch ( type )
  {
    case 0:
    case 1:
    case 10:
      MainMenuBar__setMenuActive(1, 0LL, 0LL);
      if ( !callFadeIn )
        goto LABEL_14;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_33;
      StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_33;
      MyRoomFrontObjectManager__FrameIn((MyRoomFrontObjectManager_o *)standFigureBack, 0LL);
LABEL_14:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)standFigureBack,
        !this->fields.isServantMaterial,
        0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      if ( this->fields.fvrUsrSvtId >= 1 && this->fields.isHeroine && this->fields.isHeroineReave )
        MyRoomControl__ChangeSetStandFigureObj(this, 0, 1, v9);
      goto LABEL_25;
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 11:
    case 17:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_33;
      StandFigureBack__Fadeout(standFigureBack, 0LL, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_33;
      MyRoomFrontObjectManager__FrameOut((MyRoomFrontObjectManager_o *)standFigureBack, 0LL);
LABEL_5:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      v8 = 0;
      isEnableMultipleView = 0LL;
      goto LABEL_26;
    case 6:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      if ( !callFadeIn )
        goto LABEL_25;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_33;
      StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
LABEL_25:
      v8 = 1;
      isEnableMultipleView = this->fields.isEnableMultipleView;
LABEL_26:
      standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(this, v10);
      standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignButton;
      if ( v8 )
      {
        isEnableMultipleView = this->fields.isEnablePhotoCampaign;
        if ( !standFigureBack )
LABEL_33:
          sub_B2C434(standFigureBack, isEnableMultipleView);
      }
      else
      {
        isEnableMultipleView = 0LL;
        if ( !standFigureBack )
          goto LABEL_33;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(this, v11);
      return;
    case 7:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      goto LABEL_5;
    default:
      goto LABEL_25;
  }
}


int32_t __fastcall MyRoomControl__setSvtFriendShipLv(MyRoomControl_o *this, int32_t hSvtId, const MethodInfo *method)
{
  MyRoomData_o *myRoomData; // x0

  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_B2C434(0LL, hSvtId);
  return MyRoomData__getSvtFriendshipLv(myRoomData, hSvtId, 0LL);
}


void __fastcall MyRoomControl__setSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *myRoomFsm; // x0
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 figureSvtDispIdx; // x22
  ServantVoiceEntity_o *v14; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_o *asstName; // x20
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__200_0; // x21
  Il2CppObject *v38; // x22
  struct MyRoomControl___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_4185C7C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&Method_MyRoomControl_EndLoad__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_MyRoomControl___c__setSvtVoiceData_b__200_0__, v8);
    sub_B2C35C(&MyRoomControl___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_8407/*"LOAD_END"*/, v10);
    byte_4185C7C = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8407/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_27:
    sub_B2C434(myRoomFsm, method);
  }
  myRoomFsm = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( myRoomFsm )
  {
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_27;
    figureSvtDispIdx = this->fields.figureSvtDispIdx;
    v14 = (ServantVoiceEntity_o *)myRoomFsm;
    if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                        (ServantVoiceEntity_o *)myRoomFsm,
                        imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                        0LL);
    this->fields.voiceList = MyRoomVoiceList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)MyRoomVoiceList,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v14, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    asstName = this->fields.asstName;
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v30, v31);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v34 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
      if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      static_fields = (struct MyRoomControl___c_StaticFields *)*((_QWORD *)myRoomFsm + 23);
      _9__200_0 = static_fields->__9__200_0;
      if ( !_9__200_0 )
      {
        if ( (*((_BYTE *)myRoomFsm + 307) & 4) != 0 && !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          static_fields = MyRoomControl___c_TypeInfo->static_fields;
        }
        v38 = (Il2CppObject *)static_fields->__9;
        _9__200_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__200_0, v38, Method_MyRoomControl___c__setSvtVoiceData_b__200_0__, 0LL);
        v39 = MyRoomControl___c_TypeInfo->static_fields;
        v39->__9__200_0 = _9__200_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v39->__9__200_0,
          (System_Int32_array **)_9__200_0,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( !Instance )
        goto LABEL_27;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__200_0, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_27;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8407/*"LOAD_END"*/, 0LL);
    this->fields.isVoicePlaying = 0;
  }
}


void __fastcall MyRoomControl__setUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  UserServantCoinComponent__showMenu((UserServantCoinComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setUserStInfoView(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *multipleViewButton; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4185C94 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl_TypeInfo, method);
    byte_4185C94 = 1;
  }
  multipleViewButton = this->fields.multipleViewButton;
  this->fields.type = 0;
  if ( !multipleViewButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnableMultipleView, 0LL);
  v5 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v5->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, v4);
  multipleViewButton = this->fields.photoCampaignButton;
  if ( !multipleViewButton
    || (UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnablePhotoCampaign, 0LL),
        this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN,
        MyRoomControl__SetPhotoCampaignButtonColor(this, v6),
        (multipleViewButton = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0LL) )
  {
LABEL_10:
    sub_B2C434(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v7);
}


void __fastcall MyRoomControl__setUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 3;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_23993492((UserItemListViewManager_o *)titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl__setupMaterialUIMoveData(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o **moveTarget,
        UnityEngine_Vector3_o *moveShowPos,
        UnityEngine_Vector3_o *moveHidePos,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *materialObj; // x8
  __int64 v12; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  materialObj = this->fields.materialObj;
  *moveTarget = materialObj;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)moveTarget,
    (System_Int32_array **)materialObj,
    (System_String_array **)moveShowPos,
    (System_String_array **)moveHidePos,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_B2C434(transform, v12);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  moveShowPos->fields.y = localPosition.fields.y;
  moveShowPos->fields.z = localPosition.fields.z;
  moveShowPos->fields.x = 250.0;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void __fastcall MyRoomControl__setupServantListUIMoveData(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *moveTarget,
        UnityEngine_Vector3_o *moveShowPos,
        UnityEngine_Vector3_o *moveHidePos,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !moveTarget || (this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform(moveTarget, 0LL)) == 0LL )
    sub_B2C434(this, moveTarget);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  moveShowPos->fields.y = localPosition.fields.y;
  moveShowPos->fields.z = localPosition.fields.z;
  moveShowPos->fields.x = -7.0;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void __fastcall MyRoomControl__setupSortWindowUIMoveData(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *moveTarget,
        UnityEngine_Vector3_o *moveShowPos,
        UnityEngine_Vector3_o *moveHidePos,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !moveTarget || (this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform(moveTarget, 0LL)) == 0LL )
    sub_B2C434(this, moveTarget);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  *moveShowPos = localPosition;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void __fastcall MyRoomControl__setupSvtImageIdList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x8
  System_Collections_Generic_List_int__o *imageIdList; // x0
  UserServantEntity_o *v22; // x20
  void *monitor; // x21
  System_Collections_Generic_List_int__c *klass; // x22
  int32_t v25; // w21
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  int32_t v28; // w22
  __int64 v29; // x22
  __int64 v30; // x23
  __int64 v31; // x21
  __int64 v32; // x22
  MyRoomControl_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x8
  System_Collections_Generic_List_int__o *v36; // x21
  unsigned __int64 v37; // x22
  int32_t FigureImageLimitCount; // w20
  struct System_Collections_Generic_List_int__o *v39; // x22
  __int64 v40; // x21
  int size; // w8
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4185C6C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4185C6C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  usrData = this->fields.usrData;
  if ( !usrData )
    return;
  this->fields.figureSvtDispIdx = 0;
  favoriteUserSvtId = usrData->fields.favoriteUserSvtId;
  this->fields.fvrUsrSvtId = favoriteUserSvtId;
  if ( favoriteUserSvtId < 1 )
    return;
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_48;
  System_Collections_Generic_List_int___Clear(
    imageIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  imageIdList = (System_Collections_Generic_List_int__o *)this->fields.myRoomData;
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)imageIdList,
                                                            this->fields.fvrUsrSvtId,
                                                            0LL);
  if ( !imageIdList )
    goto LABEL_48;
  v22 = (UserServantEntity_o *)imageIdList;
  klass = imageIdList[2].klass;
  monitor = imageIdList[2].monitor;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = klass;
  *(_QWORD *)&v43.fields.fakeValue = monitor;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
  v25 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine(v22, 0LL);
  while ( 1 )
  {
    v30 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v44.fields.currentCryptoKey = v30;
    *(_QWORD *)&v44.fields.fakeValue = v29;
    if ( v25 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v25, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)imageIdList,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                              (ServantLimitImageMaster_o *)imageIdList,
                                                              this->fields.figureSvtId,
                                                              ImageLimitCount,
                                                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v28 = (int)imageIdList;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)imageIdList,
            (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        imageIdList,
        v28,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    ++v25;
  }
  if ( UserServantEntity__IsHeroine(v22, 0LL) || UserServantEntity__isLimitCountMax(v22, 0LL) )
  {
    v32 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
    v31 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v32;
    *(_QWORD *)&v45.fields.fakeValue = v31;
    v33 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)MyRoomControl__GetSortedCostumeIds(v33, (int32_t)v33, v34);
    if ( imageIdList )
    {
      v35 = *(_QWORD *)&imageIdList->fields._size;
      v36 = imageIdList;
      if ( (int)v35 >= 1 )
      {
        v37 = 0LL;
        do
        {
          if ( v37 >= (unsigned int)v35 )
          {
            v42 = sub_B2C460(imageIdList);
            sub_B2C400(v42, 0LL);
          }
          v18 = *((unsigned int *)&v36->fields._syncRoot + v37);
          if ( (int)v18 >= 1 )
          {
            imageIdList = this->fields.imageIdList;
            if ( !imageIdList )
              goto LABEL_48;
            System_Collections_Generic_List_int___Add(
              imageIdList,
              v18,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v35) = v36->fields._size;
          ++v37;
        }
        while ( (__int64)v37 < (int)v35 );
      }
      goto LABEL_39;
    }
LABEL_48:
    sub_B2C434(imageIdList, v18);
  }
LABEL_39:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v22, 0, 0LL);
  imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)imageIdList,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)imageIdList,
                                                            this->fields.figureSvtId,
                                                            FigureImageLimitCount,
                                                            0LL);
  v39 = this->fields.imageIdList;
  if ( !v39 )
    goto LABEL_48;
  v40 = 0LL;
  while ( 1 )
  {
    size = v39->fields._size;
    if ( (int)v40 >= size )
      break;
    if ( size <= (unsigned int)v40 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v39->fields._items->m_Items[v40 + 1] == (_DWORD)imageIdList )
    {
      this->fields.figureSvtDispIdx = v40;
      return;
    }
    v39 = this->fields.imageIdList;
    ++v40;
    if ( !v39 )
      goto LABEL_48;
  }
}


void __fastcall MyRoomControl__setupSvtRand(MyRoomControl_o *this, const MethodInfo *method)
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
  void *limitCountSupport; // x0
  int32_t v15; // w22
  _DWORD *v16; // x19
  __int64 IsLeave; // x0
  unsigned int v18; // w20
  char *v19; // x24
  void **v20; // x24
  void *v21; // t1
  UserServantEntity_o *v22; // x20
  NetworkManager_ResultCallbackFunc_o *v23; // x19
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UserServantCollectionMaster_o *v32; // x19
  int64_t userId; // x21
  __int64 v34; // x23
  __int64 v35; // x24
  __int128 v36; // q1
  _DWORD *v37; // x25
  __int128 v38; // q0
  int32_t v39; // w24
  int32_t v40; // w26
  int32_t v41; // w27
  int32_t v42; // w28
  bool IsLock; // w19
  char v44; // w21
  int32_t commonFlag; // w23
  int32_t battleVoice; // w25
  int32_t randomSettingOwn; // w22
  int32_t v48; // w0
  __int64 v49; // x8
  int32_t randomSettingSupport; // w20
  __int64 v51; // x0
  int64_t v52; // [xsp+48h] [xbp-E8h]
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v54; // [xsp+58h] [xbp-D8h]
  int64_t pushUserSvtId; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_WarBoardWallAttackRequest; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4185C6E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_MyRoomControl__setupSvtRand_b__184_0__, v4);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&OptionManager_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v12);
    byte_4185C6E = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_40:
    sub_B2C434(limitCountSupport, v13);
  }
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_40;
  v15 = *((_DWORD *)limitCountSupport + 6);
  v16 = limitCountSupport;
  while ( 1 )
  {
    do
    {
      IsLeave = UnityEngine_Random__RandomRange(0, v15, 0LL);
      v18 = IsLeave;
      if ( (unsigned int)IsLeave >= v16[6] )
      {
LABEL_39:
        v51 = sub_B2C460(IsLeave);
        sub_B2C400(v51, 0LL);
      }
      v19 = (char *)&v16[2 * (int)IsLeave];
      v21 = (void *)*((_QWORD *)v19 + 4);
      v20 = (void **)(v19 + 32);
      limitCountSupport = v21;
      if ( !v21 )
        goto LABEL_40;
      IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    }
    while ( (IsLeave & 1) != 0 );
    if ( v18 >= v16[6] )
      goto LABEL_39;
    limitCountSupport = *v20;
    if ( !*v20 )
      goto LABEL_40;
    IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
    if ( (IsLeave & 1) == 0 )
    {
      if ( v18 >= v16[6] )
        goto LABEL_39;
      v22 = (UserServantEntity_o *)*v20;
      if ( *v20 )
        break;
    }
  }
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__184_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CardFavoriteRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v23,
                                                                 (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData || !v22 )
    goto LABEL_40;
  v32 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v35 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v35;
  *(_QWORD *)&v60.fields.fakeValue = v34;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v60, 0LL);
  if ( !v32 )
    goto LABEL_40;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v32, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_40;
  v36 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v37 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v36;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v58 = v59;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
  v38 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v38;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                      v22->fields.imageLimitCount,
                      0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22->fields.dispLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22->fields.commandCardLimitCount, 0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22->fields.iconLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v22, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v22, 0LL);
  if ( !v37 )
    goto LABEL_40;
  v44 = (char)limitCountSupport;
  commonFlag = v37[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       v22->fields.randomLimitCount,
                       0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22->fields.randomLimitCountSupport, 0LL);
  v49 = *(_QWORD *)&v22->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v61.fields.fakeValue = *(_QWORD *)&v22->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v48;
  *(_QWORD *)&v61.fields.currentCryptoKey = v49;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_40;
  CardFavoriteRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v54,
    imageLimitCount,
    v39,
    v40,
    v41,
    v42,
    1,
    IsLock,
    v44 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    pushUserSvtId == v52,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4185C79 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_4185C79 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  MissionNotifyManager__RemoveNoDisplayMissionCondType(v3, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4185C78 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_4185C78 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  MissionNotifyManager__AddNoDisplayMissionCondType(v3, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_B2C434(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_21418140(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185CA5 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl__svtVoicePlayAct_d__293_TypeInfo, item);
    byte_4185CA5 = 1;
  }
  v5 = sub_B2C42C(MyRoomControl__svtVoicePlayAct_d__293_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__293___ctor((MyRoomControl__svtVoicePlayAct_d__293_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = item;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  NetworkManager_c *v27; // x0
  SoundManager_o *Instance; // x21
  System_Action_o *v29; // x22

  if ( (byte_4185C7B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetName);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass199_0__voiceLoad_b__0__, v9);
    sub_B2C35C(&MyRoomControl___c__DisplayClass199_0_TypeInfo, v10);
    byte_4185C7B = 1;
  }
  v11 = sub_B2C42C(MyRoomControl___c__DisplayClass199_0_TypeInfo);
  MyRoomControl___c__DisplayClass199_0___ctor((MyRoomControl___c__DisplayClass199_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = endCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)endCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.isVoiceLoading = 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4185CE0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v26);
    byte_4185CE0 = 1;
  }
  v27 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  if ( !v27->static_fields->isRebootBlock )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass199_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage(Instance, assetName, v29, 1, 0LL);
      return;
    }
LABEL_15:
    sub_B2C434(v12, v13);
  }
}


void __fastcall MyRoomControl_StateEtc___ctor(MyRoomControl_StateEtc_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl_StateEtc__begin(
        MyRoomControl_StateEtc_o *this,
        MyRoomControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl_StateEtc__end(
        MyRoomControl_StateEtc_o *this,
        MyRoomControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl_StateEtc__update(
        MyRoomControl_StateEtc_o *this,
        MyRoomControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CaptureServant_d__350___ctor(
        MyRoomControl__CaptureServant_d__350_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__350__MoveNext(
        MyRoomControl__CaptureServant_d__350_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  UnityEngine_Texture2D_o *v15; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v17; // x20
  UIRect_o *height; // x0
  __int64 v19; // x1
  int v20; // w23
  int32_t activeHeight; // w0
  int32_t v22; // w26
  int32_t v23; // w21
  int v24; // w22
  int v25; // w24
  int v26; // w21
  int v27; // w8
  int v28; // w27
  int v29; // w0
  float photoFramePosY; // s8
  int v31; // w25
  int v32; // w23
  int v33; // w24
  int32_t v34; // w0
  double v35; // d0
  UnityEngine_Color_array *Pixels_35416740; // x22
  UnityEngine_Texture2D_o *v37; // x20
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4185D69 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, method);
    sub_B2C35C(&TouchEffectManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_4185D69 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v15 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v17 = v15;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_27;
    v20 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_27;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_27;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v22 = this->fields.height;
    v23 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_27;
    v24 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_27;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v17 )
      goto LABEL_27;
    v25 = (int)height;
    v26 = v20 * width / v23;
    v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v17->klass->vtable._4_get_width.method)(
            v17,
            v17->klass->vtable._5_set_width.methodPtr)
        - v26;
    v28 = v27 >= 0 ? v27 : v27 + 1;
    v29 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v17->klass->vtable._6_get_height.method)(
            v17,
            v17->klass->vtable._7_set_height.methodPtr);
    photoFramePosY = _4__this->fields.photoFramePosY;
    v31 = v29;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_27;
    v32 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_27;
    v33 = v24 * v22 / v25;
    v34 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v35 = photoFramePosY == INFINITY ? -photoFramePosY : photoFramePosY;
    Pixels_35416740 = UnityEngine_Texture2D__GetPixels_35416740(
                        v17,
                        v28 >> 1,
                        v32 * (int)v35 / v34 + (v31 - v33) / 2,
                        v26,
                        v33,
                        0LL);
    v37 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35417420(v37, v26, v33, 3, 0, 0LL);
    if ( !v37
      || (UnityEngine_Texture2D__SetPixels_35418468(v37, Pixels_35416740, 0LL),
          UnityEngine_Texture2D__Apply_35419296(v37, 0LL),
          (height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot) == 0LL) )
    {
LABEL_27:
      sub_B2C434(height, v19);
    }
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v37,
      height->klass[1]._1.generic_class);
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__350__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__350_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__350__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__350_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__CaptureServant_d__350_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__350__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__350_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__350__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__350_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__253___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__253__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  bool v11; // w20
  System_Func_bool__o *v12; // x22
  UnityEngine_WaitUntil_o *v13; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4185D6A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__253_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4185D6A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_B2C434(Instance, v10);
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v11 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    _4__this,
    Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__253_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v13 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  *((_DWORD *)p__2__current - 2) = 1;
  return v11;
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__253__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__253__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__253__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__253__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__247___ctor(
        MyRoomControl__InitMaterialOnBackground_d__247_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitMaterialOnBackground_d__247__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__247_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitMaterialOnBackground_d__247_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  System_Int32_array **v8; // x0
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  __int64 v18; // x1
  TerminalSceneComponent_c *v19; // x0
  struct TerminalSceneComponent_o *mInstance; // x20
  BackTaskAmountAdjuster_o *v21; // x20
  System_Collections_IEnumerator_o *v22; // x0

  v2 = this;
  if ( (byte_4185D6B & 1) == 0 )
  {
    sub_B2C35C(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    byte_4185D6B = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_31;
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_31;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v18);
      byte_4183C65 = 1;
    }
    v19 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v19->static_fields->mInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)UnityEngine_Object__op_Inequality(
                                                                 (UnityEngine_Object_o *)mInstance,
                                                                 0LL,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !mInstance )
        goto LABEL_31;
      this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)mInstance->fields.mTerminalMap;
      if ( !this )
        goto LABEL_31;
      ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)this, 0LL);
    }
    v21 = (BackTaskAmountAdjuster_o *)sub_B2C42C(BackTaskAmountAdjuster_TypeInfo);
    BackTaskAmountAdjuster___ctor(v21, 0LL);
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_31;
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                                 (MyRoomStateMaterial_o *)this,
                                                                 0LL);
    if ( !v21 )
      goto LABEL_31;
    v22 = BackTaskAmountAdjuster__Execute(v21, (System_Collections_IEnumerator_o *)this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v22, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( this )
    {
      v8 = (System_Int32_array **)QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v8, v10, v11, v12, v13, v14, v15);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_31:
    sub_B2C434(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__247__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__247_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitMaterialOnBackground_d__247__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__247_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__InitMaterialOnBackground_d__247_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__247__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__247_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__247__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__247_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitServantMenu_d__250___ctor(
        MyRoomControl__InitServantMenu_d__250_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitServantMenu_d__250__MoveNext(
        MyRoomControl__InitServantMenu_d__250_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  bool v13; // w21
  System_Func_bool__o *v14; // x22
  UnityEngine_WaitUntil_o *v15; // x19
  Il2CppObject **p__2__current; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BackTaskAmountAdjuster_o *v23; // x20
  System_Collections_IEnumerator_o *v24; // x0

  if ( (byte_4185D6C & 1) == 0 )
  {
    sub_B2C35C(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_MyRoomControl__InitServantMenu_b__250_0__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v8);
    byte_4185D6C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v23 = (BackTaskAmountAdjuster_o *)sub_B2C42C(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v23, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, 0LL);
          if ( !v23 )
            goto LABEL_17;
          v24 = BackTaskAmountAdjuster__Execute(v23, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v24, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_B2C434(Instance, v12);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v13 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v14 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)_4__this,
    Method_MyRoomControl__InitServantMenu_b__250_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v15 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p__2__current - 2) = 1;
  return v13;
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__250__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__250_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitServantMenu_d__250__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__250_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__InitServantMenu_d__250_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__250__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__250_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitServantMenu_d__250__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__250_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__330___ctor(
        MyRoomControl__LoadMultipleServant_d__330_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__LoadMultipleServant_d__330__MoveNext(
        MyRoomControl__LoadMultipleServant_d__330_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadMultipleServant_d__330_o *v2; // x26
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  Il2CppObject *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  Il2CppObject *v32; // x1
  struct StandFigureBack_array *v33; // x8
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct StandFigureBack_array *v41; // x8
  __int64 v42; // x27
  __int64 v43; // x21
  __int64 v44; // x25
  int v45; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v47; // x8
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v50; // w24
  int32_t v51; // w20
  MyRoomControl__LoadMultipleServant_d__330_o *v52; // x19
  int32_t Id; // w26
  int32_t Form; // w23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct ServantScriptMultipleEntity_array *v61; // x22
  System_Int32_array **v62; // x26
  struct StandFigureBack_array *v63; // x8
  struct MyRoomControl_o *v64; // x25
  struct MyRoomControl___c__DisplayClass330_0_o *v65; // x28
  StandFigureBack_o *v66; // x26
  System_Action_o *_9__3; // x27
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v76; // x19
  int max_length; // w9
  unsigned int v78; // w23
  struct StandFigureBack_array *v79; // x8
  UnityEngine_Component_o *v80; // x8
  Il2CppObject *_2__current; // x21
  float v82; // s1
  float v83; // s2
  float v84; // s8
  float v85; // s9
  float v86; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v88; // x8
  float v89; // s10
  struct StandFigureBack_array *v90; // x9
  int v91; // s14
  int v92; // s15
  float v93; // s0
  float v94; // s2
  struct StandFigureBack_array *v95; // x8
  float v96; // s11
  float v97; // s12
  struct StandFigureBack_array *v98; // x8
  struct StandFigureBack_array *v99; // x8
  System_String_o *v100; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass330_0_o *_8__1; // x8
  MultipleViewComponent_o *multipleViewComponent; // x20
  Il2CppObject *v104; // x22
  System_Action_o *v105; // x21
  Il2CppObject *v106; // x20
  System_Func_bool__o *v107; // x21
  UnityEngine_WaitWhile_o *v108; // x20
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct ServantScriptMultipleEntity_array *v115; // x8
  ServantScriptMultipleEntity_o *v116; // x9
  ServantScriptMultipleEntity_o *v117; // x8
  Il2CppObject *v118; // x20
  System_Func_bool__o *v119; // x21
  UnityEngine_WaitWhile_o *v120; // x20
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  __int64 v127; // x0
  __int64 v128; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+8h] [xbp-B8h]
  struct MyRoomControl___c__DisplayClass330_0_o **p__8__1; // [xsp+10h] [xbp-B0h]
  __int64 v131; // [xsp+18h] [xbp-A8h]
  __int64 v132; // [xsp+20h] [xbp-A0h]
  ServantScriptMultipleEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4185D6D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v5);
    sub_B2C35C(&System_Func_bool__TypeInfo, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&ServantScriptMultipleEntity___TypeInfo, v8);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__0__, v9);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__1__, v10);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__2__, v11);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__3__, v12);
    sub_B2C35C(&MyRoomControl___c__DisplayClass330_0_TypeInfo, v13);
    sub_B2C35C(&UIStandFigureRender_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v15);
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B2C35C(&StringLiteral_6688/*"FinishedFadeMultipleServant"*/, v16);
    byte_4185D6D = 1;
  }
  entity = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_84;
    TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)titleInfo->fields.titleImg;
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.multipleViewCloseButton;
    _4__this->fields.multipleViewState = 2;
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
    if ( !multipleStandFigureBacks )
      goto LABEL_84;
    v76 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v78 = v76 - 4;
      if ( (int)v76 - 4 >= max_length )
        return 0;
      if ( v78 >= max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v76);
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)StandFigureBack__GetSvtStandFigure(
                                                              (StandFigureBack_o *)this,
                                                              0,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      v79 = _4__this->fields.multipleStandFigureBacks;
      if ( !v79 )
        goto LABEL_84;
      if ( v78 >= v79->max_length )
        goto LABEL_104;
      v80 = (UnityEngine_Component_o *)*((_QWORD *)&v79->obj.klass + v76);
      if ( !v80 )
        goto LABEL_84;
      _2__current = this->fields.__2__current;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(v80, 0LL);
      if ( !this )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v82 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !_2__current )
        goto LABEL_84;
      v84 = v82;
      v85 = v83;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_2__current,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      LODWORD(v86) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      multipleEntities_5__2 = v2->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_84;
      if ( v78 >= multipleEntities_5__2->max_length )
        goto LABEL_104;
      v88 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v76);
      v89 = flt_319FEE4[(_DWORD)v76 == 4] - v86;
      if ( v88 )
      {
        v90 = _4__this->fields.multipleStandFigureBacks;
        if ( !v90 )
          goto LABEL_84;
        if ( v78 >= v90->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&v90->obj.klass + v76);
        if ( !this )
          goto LABEL_84;
        v91 = *(_DWORD *)(v88 + 28);
        v92 = *(_DWORD *)(v88 + 32);
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        *(UnityEngine_Vector3_o *)&v93 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v95 = _4__this->fields.multipleStandFigureBacks;
        if ( !v95 )
          goto LABEL_84;
        if ( v78 >= v95->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&v95->obj.klass + v76);
        if ( !this )
          goto LABEL_84;
        v96 = v93;
        v97 = v94;
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        v84 = v84 + (float)v92;
        v89 = v89 + (float)v91;
        v135.fields.x = v96;
        v135.fields.y = v84;
        v135.fields.z = v97;
        v85 = v85 + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v135, 0LL);
      }
      v98 = _4__this->fields.multipleStandFigureBacks;
      if ( !v98 )
        goto LABEL_84;
      if ( v78 >= v98->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&v98->obj.klass + v76);
      if ( this )
      {
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v99 = _4__this->fields.multipleStandFigureBacks;
        if ( v99 )
        {
          v100 = v78 == v99->max_length - 1 ? (System_String_o *)StringLiteral_6688/*"FinishedFadeMultipleServant"*/ : 0LL;
          v136.fields.x = v89;
          v136.fields.y = v84;
          v136.fields.z = v85;
          MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v136, v100, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v76;
          if ( multipleStandFigureBacks )
            continue;
        }
      }
      goto LABEL_84;
    }
  }
  if ( _1__state == 1 )
  {
    _8__1 = v2->fields.__8__1;
    v2->fields.__1__state = -1;
    if ( _8__1 )
    {
      _8__1->fields.wait = 1;
      if ( _4__this )
      {
        multipleViewComponent = _4__this->fields.multipleViewComponent;
        v104 = (Il2CppObject *)v2->fields.__8__1;
        v105 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v105, v104, Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__1__, 0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v105, 0LL);
          v106 = (Il2CppObject *)v2->fields.__8__1;
          v107 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v107,
            v106,
            Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__2__,
            (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
          v108 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v108, v107, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v108;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v2->fields.__2__current,
            (System_Int32_array **)v108,
            v109,
            v110,
            v111,
            v112,
            v113,
            v114);
          v2->fields.__1__state = 2;
          return 1;
        }
      }
    }
    goto LABEL_84;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v19 = (Il2CppObject *)sub_B2C42C(MyRoomControl___c__DisplayClass330_0_TypeInfo);
  System_Object___ctor(v19, 0LL);
  v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass330_0_o *)v19;
  p__8__1 = &v2->fields.__8__1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.__8__1,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this = (MyRoomControl__LoadMultipleServant_d__330_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_84;
  v32 = (Il2CppObject *)v2->fields.__4__this;
  this->fields.__2__current = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !_4__this )
    goto LABEL_84;
  this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.mBlocker;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_84;
  (*p__8__1)->fields.loadedCount = 0;
  v33 = _4__this->fields.multipleStandFigureBacks;
  if ( !v33 )
    goto LABEL_84;
  v34 = (System_Int32_array **)sub_B2C374(ServantScriptMultipleEntity___TypeInfo, v33->max_length);
  v2->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v34;
  p_multipleEntities_5__2 = &v2->fields._multipleEntities_5__2;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._multipleEntities_5__2, v34, v35, v36, v37, v38, v39, v40);
  v41 = _4__this->fields.multipleStandFigureBacks;
  if ( !v41 )
    goto LABEL_84;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 32LL;
  while ( 1 )
  {
    v45 = v41->max_length;
    if ( (int)v43 >= v45 )
      break;
    if ( (unsigned int)v43 >= v45 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)v41->m_Items[v43];
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_84;
    if ( (unsigned int)v43 >= defaultMultipleServantPoses->max_length )
      goto LABEL_104;
    if ( !this )
      goto LABEL_84;
    v47 = (float *)((char *)defaultMultipleServantPoses + v42);
    v134.fields.x = flt_319FEEC[(_DWORD)v43 == 0] + v47[8];
    v134.fields.y = v47[9] + 0.0;
    v134.fields.z = v47[10] + 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v134, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_84;
    if ( (unsigned int)v43 >= multipleServantUsrIds->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.myRoomData;
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            multipleServantUsrIds->m_Items[v43],
                                                            0LL);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_84;
    if ( (unsigned int)v43 >= multipleLimitCounts->max_length )
      goto LABEL_104;
    v50 = multipleLimitCounts->m_Items[v43 + 1];
    v51 = (int)this;
    v52 = v2;
    Id = ServantScriptMaster__getId((int32_t)this, v50, 0LL);
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                            (ServantScriptMultipleMaster_o *)this,
                                                            &entity,
                                                            Id,
                                                            Form,
                                                            v43 + 1,
                                                            0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v61 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_84;
      v62 = (System_Int32_array **)entity;
      if ( entity )
      {
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B2C41C(entity, v61->obj.klass->_1.element_class);
        if ( !this )
        {
          v128 = sub_B2C454();
          sub_B2C400(v128, 0LL);
        }
      }
      if ( (unsigned int)v43 >= v61->max_length )
        goto LABEL_104;
      v61->m_Items[v43] = (ServantScriptMultipleEntity_o *)v62;
      sub_B2C2F8((BattleServantConfConponent_o *)((char *)v61 + v44), v62, v55, v56, v57, v58, v59, v60);
    }
    v131 = v44;
    v132 = v42;
    v63 = _4__this->fields.multipleStandFigureBacks;
    if ( !v63 )
      goto LABEL_84;
    if ( (unsigned int)v43 >= v63->max_length )
      goto LABEL_104;
    v64 = _4__this;
    v65 = *p__8__1;
    if ( *p__8__1 )
    {
      v66 = v63->m_Items[v43];
      _9__3 = v65->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v65,
          Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__3__,
          0LL);
        v65->fields.__9__3 = _9__3;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v65->fields.__9__3,
          (System_Int32_array **)_9__3,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      if ( v66 )
      {
        StandFigureBack__SetMyRoomStandFigure(v66, v51, v50, 1, 0, Form, 10, _9__3, 0LL);
        _4__this = v64;
        v41 = v64->fields.multipleStandFigureBacks;
        ++v43;
        v2 = v52;
        v44 = v131 + 8;
        v42 = v132 + 12;
        if ( v41 )
          continue;
      }
    }
    goto LABEL_84;
  }
  this = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B2C374(int___TypeInfo, 2LL);
  v115 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_84;
  if ( !v115->max_length )
    goto LABEL_104;
  v116 = v115->m_Items[0];
  if ( v116 )
  {
    if ( !this )
      goto LABEL_84;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_104;
    LODWORD(this->fields.__4__this) = v116->fields.depth;
    v115 = *p_multipleEntities_5__2;
    if ( !*p_multipleEntities_5__2 )
      goto LABEL_84;
  }
  if ( v115->max_length <= 1 )
    goto LABEL_104;
  v117 = v115->m_Items[1];
  if ( !v117 )
  {
    if ( this )
      goto LABEL_102;
LABEL_84:
    sub_B2C434(this, method);
  }
  if ( !this )
    goto LABEL_84;
  if ( LODWORD(this->fields.__2__current) <= 1 )
    goto LABEL_104;
  HIDWORD(this->fields.__4__this) = v117->fields.depth;
LABEL_102:
  if ( LODWORD(this->fields.__2__current) < 2 )
  {
LABEL_104:
    v127 = sub_B2C460(this);
    sub_B2C400(v127, 0LL);
  }
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
    0LL);
  v118 = (Il2CppObject *)v2->fields.__8__1;
  v119 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v119,
    v118,
    Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v120 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v120, v119, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v120;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.__2__current,
    (System_Int32_array **)v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__330__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__330_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadMultipleServant_d__330__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__330_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__LoadMultipleServant_d__330_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__330__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__330_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__330__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__330_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__348___ctor(
        MyRoomControl__LoadPhotoCampaignServant_d__348_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoCampaignServant_d__348__MoveNext(
        MyRoomControl__LoadPhotoCampaignServant_d__348_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__348_o *v2; // x19
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v17; // x22
  struct MyRoomControl___c__DisplayClass348_0_o **p__8__1; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v27; // w23
  int32_t Id; // w0
  int32_t v29; // w24
  bool v30; // w21
  int32_t Form; // w0
  Il2CppObject *v32; // x26
  int32_t v33; // w24
  StandFigureBack_o *photoCampaignStandFigureBack; // x20
  System_Action_o *v35; // x25
  Il2CppObject *v36; // x20
  System_Func_bool__o *v37; // x22
  UnityEngine_WaitWhile_o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x21
  float PhotoSvtScale; // s0
  struct MyRoomControl___c__DisplayClass348_0_o *_8__1; // x8
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  Il2CppObject *v50; // x22
  System_Action_o *v51; // x21
  Il2CppObject *v52; // x20
  System_Func_bool__o *v53; // x21
  UnityEngine_WaitWhile_o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v62; // x8
  float svtPosX_5__4; // s8
  float svtPosY_5__5; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s0
  float v67; // s10
  UnityEngine_GameObject_o *v68; // x0
  __int64 v70; // x0
  ServantScriptEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4185D6E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantScriptMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v5);
    sub_B2C35C(&System_Func_bool__TypeInfo, v6);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__0__, v7);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__1__, v8);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__2__, v9);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__3__, v10);
    sub_B2C35C(&MyRoomControl___c__DisplayClass348_0_TypeInfo, v11);
    sub_B2C35C(&UIStandFigureRender_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v13);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)sub_B2C35C(&StringLiteral_6689/*"FinishedFadePhotoServant"*/, v14);
    byte_4185D6E = 1;
  }
  entity = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)titleInfo->fields.titleImg;
    if ( !this )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v62 = _4__this->fields.titleInfo;
    if ( !v62 )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)v62->fields.headerBgImg;
    if ( !this )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)this, 0, 0LL);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
    _4__this->fields.photoCampaignState = 2;
    if ( !this )
      goto LABEL_53;
    svtPosX_5__4 = v2->fields._svtPosX_5__4;
    svtPosY_5__5 = v2->fields._svtPosY_5__5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
    if ( !this )
      goto LABEL_53;
    v67 = LocalPositionZ;
    v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v73.fields.x = svtPosX_5__4;
    v73.fields.y = svtPosY_5__5;
    v73.fields.z = v67;
    MyRoomControl__moveControl(_4__this, v68, v73, (System_String_o *)StringLiteral_6689/*"FinishedFadePhotoServant"*/, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( this )
      {
        this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)StandFigureBack__GetSvtStandFigure(
                                                                     (StandFigureBack_o *)this,
                                                                     0,
                                                                     0LL);
        if ( this )
        {
          this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)this->fields.__2__current;
          if ( this )
          {
            v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v2->fields._svtPosX_5__4 = -GameObjectExtensions__GetLocalPositionX(v45, 0LL);
            v2->fields._svtPosY_5__5 = _4__this->fields.defaultPhotoServantPos.fields.y;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantScriptMaster___);
            if ( this )
            {
              this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)ServantScriptMaster__TryGetEntity(
                                                                           (ServantScriptMaster_o *)this,
                                                                           &entity,
                                                                           v2->fields._imageId_5__2,
                                                                           v2->fields._formId_5__3,
                                                                           0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)entity;
                if ( !entity )
                  goto LABEL_53;
                if ( ServantScriptEntity__IsPhotoSvtPosition(entity, 0LL) )
                {
                  this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)entity;
                  if ( !entity )
                    goto LABEL_53;
                  this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)ServantScriptEntity__GetPhotoSvtPosition(
                                                                               entity,
                                                                               0LL);
                  if ( !this )
                    goto LABEL_53;
                  if ( !LODWORD(this->fields.__2__current)
                    || (v2->fields._svtPosX_5__4 = (float)SLODWORD(this->fields.__4__this),
                        LODWORD(this->fields.__2__current) <= 1) )
                  {
                    v70 = sub_B2C460(this);
                    sub_B2C400(v70, 0LL);
                  }
                  v2->fields._svtPosY_5__5 = (float)SHIDWORD(this->fields.__4__this);
                }
                this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
                if ( !this )
                  goto LABEL_53;
                this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
                if ( !entity )
                  goto LABEL_53;
                v46 = (UnityEngine_GameObject_o *)this;
                PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 0LL);
                GameObjectExtensions__SetLocalScale_31328080(v46, PhotoSvtScale, 0LL);
              }
              _8__1 = v2->fields.__8__1;
              if ( _8__1 )
              {
                _8__1->fields.wait = 1;
                photoCampaignComponent = _4__this->fields.photoCampaignComponent;
                v50 = (Il2CppObject *)v2->fields.__8__1;
                v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  v51,
                  v50,
                  Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__2__,
                  0LL);
                if ( photoCampaignComponent )
                {
                  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v51, 0LL);
                  v52 = (Il2CppObject *)v2->fields.__8__1;
                  v53 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
                  System_Func_bool____ctor(
                    v53,
                    v52,
                    Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__3__,
                    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
                  v54 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
                  UnityEngine_WaitWhile___ctor(v54, v53, 0LL);
                  v2->fields.__2__current = (Il2CppObject *)v54;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v2->fields.__2__current,
                    (System_Int32_array **)v54,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60);
                  v2->fields.__1__state = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_B2C434(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v17 = (Il2CppObject *)sub_B2C42C(MyRoomControl___c__DisplayClass348_0_TypeInfo);
  System_Object___ctor(v17, 0LL);
  p__8__1 = &v2->fields.__8__1;
  v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass348_0_o *)v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.__8__1,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !_4__this )
    goto LABEL_53;
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_53;
  (*p__8__1)->fields.flag = 1;
  this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_53;
  this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_53;
  v72.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
  v72.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x + -1300.0;
  v72.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v72, 0LL);
  this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.myRoomData;
  if ( !this )
    goto LABEL_53;
  this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)MyRoomData__getUsrSvtData(
                                                               (MyRoomData_o *)this,
                                                               _4__this->fields.photoCampaignServantUsrId,
                                                               0LL);
  if ( !this )
    goto LABEL_53;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
  photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
  v27 = SvtId;
  Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
  v2->fields._imageId_5__2 = Id;
  v29 = Id;
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  v30 = 1;
  Form = UIStandFigureRender__GetForm(v29, 1, -1, 0LL);
  v2->fields._formId_5__3 = Form;
  v32 = (Il2CppObject *)v2->fields.__8__1;
  v33 = Form;
  photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
  v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v35, v32, Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__0__, 0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_53;
  StandFigureBack__SetMyRoomStandFigure(
    photoCampaignStandFigureBack,
    v27,
    photoCampaignLimitCount,
    1,
    0,
    v33,
    10,
    v35,
    0LL);
  v36 = (Il2CppObject *)v2->fields.__8__1;
  v37 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v37,
    v36,
    Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__1__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v38 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v38, v37, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.__2__current,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v2->fields.__1__state = 1;
  return v30;
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__348__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__348_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoCampaignServant_d__348__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoCampaignServant_d__348_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__LoadPhotoCampaignServant_d__348_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__348__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__348_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__348__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoCampaignServant_d__348_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__352___ctor(
        MyRoomControl__StartCameraEffect_d__352_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__352__MoveNext(
        MyRoomControl__StartCameraEffect_d__352_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl__StartCameraEffect_d__352_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  UILabel_o *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v15; // x22
  bool v16; // w21
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_WaitForSeconds_o *v18; // x19
  BattleServantConfConponent_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleServantConfConponent_o *p__2__current; // x20
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4185D6F & 1) == 0 )
  {
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    this = (MyRoomControl__StartCameraEffect_d__352_o *)sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    byte_4185D6F = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    zero = UnityEngine_Vector3__get_zero(0LL);
    GameObjectExtensions__SetLocalPosition(photoCampaignProduction, zero, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignCameraButton;
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignCameraButton;
    if ( !this )
      goto LABEL_25;
    photoCampaignCameraEffect = (UILabel_o *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v31 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                   photoCampaignCameraEffect,
                                   transform,
                                   (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v31;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignInstantiateCameraEffect,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = -1;
    sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_25;
  photoCampaignShutterEffect = (UILabel_o *)_4__this->fields.photoCampaignShutterEffect;
  v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    photoCampaignShutterEffect,
    v15,
    (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignProduction;
  if ( !this
    || (v16 = 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignFadeSprite) == 0LL) )
  {
LABEL_25:
    sub_B2C434(this, method);
  }
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_UIWidget_(
    v17,
    (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v18 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v18, 0.066, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v18;
  v19 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B2C2F8(v19, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)&v19[-1].fields.isOpenAfter = 1;
  return v16;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__352__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__352_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__352__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__352_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__StartCameraEffect_d__352_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__352__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__352_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__352__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__352_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D5E & 1) == 0 )
  {
    sub_B2C35C(&MyRoomControl___c_TypeInfo, v1);
    byte_4185D5E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__201_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185D60 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D60 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__281_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185D61 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4185D61 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___initMyRoom_b__179_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__200_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185D5F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D5F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass199_0___ctor(
        MyRoomControl___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass199_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass203_0___ctor(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass203_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl___c__DisplayClass203_0_o *v8; // x19
  __int64 v9; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct MyRoomControl_o *v15; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v8 = this;
  if ( (byte_4185D62 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass203_0_o *)sub_B2C35C(
                                                       &Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__1__,
                                                       v9);
    byte_4185D62 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass203_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  standFigureCollectList = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  this[1].fields.__9__2 = standFigureCollectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[1].fields.__9__2,
    (System_Int32_array **)standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (MyRoomControl___c__DisplayClass203_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[18].fields.__9__2, 0, 0LL);
  v13 = v8->fields.__4__this;
  if ( !v13 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass203_0_o *)v13->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v13->fields.isExistVoiceData, 0LL);
  v14 = v8->fields.__4__this;
  if ( !v14 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass203_0_o *)v14->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v14->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass203_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].klass) )
    MyRoomControl__setNormalFace_21418140((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v15 = v8->fields.__4__this;
  if ( !v15 )
    goto LABEL_20;
  favoriteChangeComp = v15->fields.favoriteChangeComp;
  _9__1 = v8->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v8,
      Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v8->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields.__9__1,
      (System_Int32_array **)_9__1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_B2C434(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass203_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  struct MyRoomControl_o *v7; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct MyRoomControl_o *v16; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v18; // x8
  float v19; // s8
  int v20; // s1
  struct MyRoomControl_o *v21; // x8
  int v22; // s9
  int v23; // s2
  float v24; // s0
  int v25; // s1
  struct MyRoomControl_o *v26; // x8

  if ( (byte_4185D63 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__2__, v3);
    sub_B2C35C(&StringLiteral_11389/*"ReleaseTouch"*/, v4);
    byte_4185D63 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  mState = _4__this->fields.mState;
  if ( mState == 1 )
  {
    _4__this = (MyRoomControl_o *)_4__this->fields.standFigureBack;
    if ( !_4__this )
      goto LABEL_30;
    StandFigureBack__Fadein((StandFigureBack_o *)_4__this, 0LL, 0LL);
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v16->fields.standFigureBack;
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)_4__this, 0, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)_4__this->fields.myRoomData;
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)_4__this, 0LL);
    v18 = this->fields.__4__this;
    if ( !v18 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v18->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v19 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v21->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v22 = v20;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v24 = -v19;
    v25 = v22;
    MyRoomControl__moveControl(
      _4__this,
      _4__this->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v23 - 2),
      (System_String_o *)StringLiteral_11389/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !mState )
  {
    if ( !_4__this->fields.isHeroineReave
      || (MyRoomControl__ChangeSetStandFigureObj(_4__this, !_4__this->fields.isHeroine, 1, 0LL),
          (_4__this = this->fields.__4__this) != 0LL) )
    {
      _4__this = (MyRoomControl_o *)_4__this->fields.frontObjectManager;
      if ( _4__this )
      {
        MyRoomFrontObjectManager__FrameIn((MyRoomFrontObjectManager_o *)_4__this, 0LL);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          standFigureBack = v7->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.__9__2,
              (System_Int32_array **)_9__2,
              v10,
              v11,
              v12,
              v13,
              v14,
              v15);
          }
          if ( standFigureBack )
          {
            StandFigureBack__Fadein(standFigureBack, _9__2, 0LL);
            return;
          }
        }
      }
    }
LABEL_30:
    sub_B2C434(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_30;
  v26->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass203_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL)
    || (v5->fields.isSvtLoading = 0, (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, v3);
  }
  if ( _4__this->fields.isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass204_0___ctor(
        MyRoomControl___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass204_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass204_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass204_0_o *)_4__this->fields.svtClickCollider) == 0LL)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass204_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0LL),
        !voicePlayBtn) )
  {
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass205_0___ctor(
        MyRoomControl___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass205_0___SetMaterialSvtFigure_b__0(
        MyRoomControl___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl___c__DisplayClass205_0_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  MyRoomControl___c__DisplayClass205_0_c *standFigureCollectList; // x1
  struct MyRoomControl_o *v14; // x8
  struct MyRoomControl_o *v15; // x8
  struct MyRoomControl_o *v16; // x8
  struct MyRoomControl_o *v17; // x8
  struct MyRoomControl_o *v18; // x8
  struct MyRoomControl_o *v19; // x8
  int klass_high; // w8
  struct MyRoomControl_o *v21; // x8
  StandFigureBack_o *v22; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct MyRoomControl_o *v30; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v32; // x8
  float v33; // s8
  int v34; // s1
  struct MyRoomControl_o *v35; // x8
  int v36; // s9
  int v37; // s2
  float v38; // s0
  int v39; // s1
  struct MyRoomControl_o *v40; // x8

  v8 = this;
  if ( (byte_4185D64 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__1__, v9);
    this = (MyRoomControl___c__DisplayClass205_0_o *)sub_B2C35C(&StringLiteral_11389/*"ReleaseTouch"*/, v10);
    byte_4185D64 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_46;
  standFigureCollectList = (MyRoomControl___c__DisplayClass205_0_c *)standFigureBack->fields.standFigureCollectList;
  this[2].klass = standFigureCollectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[2],
    (System_Int32_array **)standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v14 = v8->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v14->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = v8->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v15->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v16 = v8->fields.__4__this;
  if ( !v16 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v16->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v17 = v8->fields.__4__this;
  if ( !v17 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v17->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v18 = v8->fields.__4__this;
  if ( !v18 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v18->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v19 = v8->fields.__4__this;
  if ( !v19 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v19->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass205_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[21].fields.end_act) )
    MyRoomControl__setNormalFace_21418140((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass205_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  klass_high = HIDWORD(this[21].klass);
  if ( klass_high == 1 )
  {
    this = (MyRoomControl___c__DisplayClass205_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v30 = v8->fields.__4__this;
    if ( !v30 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)v30->fields.standFigureBack;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)this->fields.end_act;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v32 = v8->fields.__4__this;
    if ( !v32 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)v32->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v33 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass205_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v34 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v35 = v8->fields.__4__this;
    if ( !v35 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)v35->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v36 = v34;
    this = (MyRoomControl___c__DisplayClass205_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v37 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass205_0_o *)v8->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v38 = -v33;
    v39 = v36;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].fields.__4__this,
      *(UnityEngine_Vector3_o *)(&v37 - 2),
      (System_String_o *)StringLiteral_11389/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !klass_high )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v21 = v8->fields.__4__this;
    if ( v21 )
    {
      v22 = v21->fields.standFigureBack;
      _9__1 = v8->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v8,
          Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v8->fields.__9__1 = _9__1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v8->fields.__9__1,
          (System_Int32_array **)_9__1,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( v22 )
      {
        StandFigureBack__Fadein(v22, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_B2C434(this, method);
  }
  ActionExtensions__Call(v8->fields.end_act, 0LL);
  v40 = v8->fields.__4__this;
  if ( !v40 )
    goto LABEL_46;
  v40->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass205_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_B2C434(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass212_0___ctor(
        MyRoomControl___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass212_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass212_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  v2 = this;
  if ( (byte_4185D65 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass212_0_o *)sub_B2C35C(&StringLiteral_8407/*"LOAD_END"*/, method);
    byte_4185D65 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass212_0_o *)_4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass212_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v2->fields.svtVoiceEnt, 0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass212_0_o *)v5->fields.myRoomFsm) == 0LL )
  {
    sub_B2C434(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8407/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass274_0___ctor(
        MyRoomControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass274_0___SetFavoriteSvt_b__0(
        MyRoomControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass274_0_o *v3; // x19
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass274_0_o *)_4__this->fields.svtCtr) == 0LL)
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v3->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass274_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v3->fields.svtVoiceEnt, 0LL),
        (v5 = v3->fields.__4__this) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  v5->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass274_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *callback; // x0

  if ( (byte_4185D66 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D66 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass274_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass293_0___ctor(
        MyRoomControl___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass293_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass293_0_o *v10; // x19
  MyRoomControl___c__DisplayClass293_0_c *standFigureCollectList; // x1
  float v12; // s1
  float v13; // s2
  struct MyRoomControl_o *v14; // x8
  float v15; // s8
  float v16; // s9
  struct MyRoomControl_o *v17; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
  if ( !bondsStandFigureBack )
    goto LABEL_14;
  v10 = this;
  this = (MyRoomControl___c__DisplayClass293_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = (MyRoomControl___c__DisplayClass293_0_c *)bondsStandFigureBack->fields.standFigureCollectList;
  this[2].klass = standFigureCollectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[2],
    (System_Int32_array **)standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (MyRoomControl___c__DisplayClass293_0_o *)v10->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass293_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v14 = v10->fields.__4__this;
  if ( !v14 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass293_0_o *)v14->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v15 = v12;
  v16 = v13;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v17 = v10->fields.__4__this;
  if ( !v17
    || (this = (MyRoomControl___c__DisplayClass293_0_o *)v17->fields.bondsStandFigureBack) == 0LL
    || (this = (MyRoomControl___c__DisplayClass293_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0LL)) == 0LL
    || (this = (MyRoomControl___c__DisplayClass293_0_o *)this->fields.bondsSvtObj) == 0LL
    || (this = (MyRoomControl___c__DisplayClass293_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_B2C434(this, method);
  }
  v18.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v18.fields.y = v15;
  v18.fields.z = v16;
  GameObjectExtensions__SetLocalPosition(v10->fields.bondsSvtObj, v18, 0LL);
  v10->fields.createStandEnd = 1;
}


void __fastcall MyRoomControl___c__DisplayClass309_0___ctor(
        MyRoomControl___c__DisplayClass309_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass309_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass309_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_B2C434(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass330_0___ctor(
        MyRoomControl___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass330_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0LL )
    sub_B2C434(this, method);
  return this->fields.loadedCount < (signed int)multipleStandFigureBacks->max_length;
}


void __fastcall MyRoomControl___c__DisplayClass330_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass330_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass330_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void __fastcall MyRoomControl___c__DisplayClass334_0___ctor(
        MyRoomControl___c__DisplayClass334_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass334_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass334_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass334_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass334_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass345_0___ctor(
        MyRoomControl___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass345_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass345_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl___c__DisplayClass345_0_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MyRoomControl_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  v9 = this;
  if ( (byte_4185D67 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v10);
    sub_B2C35C(&AtlasManager_TypeInfo, v11);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__1__, v12);
    sub_B2C35C(&StringLiteral_16740/*"bit_camera_shutter"*/, v13);
    this = (MyRoomControl___c__DisplayClass345_0_o *)sub_B2C35C(&StringLiteral_16739/*"bit_camera_iconblink"*/, v14);
    byte_4185D67 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.photoCampaignAssetData = assetData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignAssetData,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !assetData
    || (v16 = v9->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass345_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                           assetData,
                                                           (System_String_o *)StringLiteral_16739/*"bit_camera_iconblink"*/,
                                                           (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !v16)
    || (v16->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v16->fields.photoCampaignCameraEffect,
          (System_Int32_array **)this,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        v23 = v9->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass345_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                           assetData,
                                                           (System_String_o *)StringLiteral_16740/*"bit_camera_shutter"*/,
                                                           (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !v23) )
  {
LABEL_13:
    sub_B2C434(this, assetData);
  }
  v23->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->fields.photoCampaignShutterEffect,
    (System_Int32_array **)this,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  _9__1 = v9->fields.__9__1;
  eventId = v9->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v9,
      Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__1__,
      0LL);
    v9->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v9->fields.__9__1,
      (System_Int32_array **)_9__1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(eventId, _9__1, 1, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass345_0___LoadPhotoCampaignAssets_b__1(
        MyRoomControl___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass345_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *photoCampaignFrameSprite; // x21
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8

  v2 = this;
  if ( (byte_4185D68 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_19444/*"img_bg_shutter"*/, v3);
    sub_B2C35C(&StringLiteral_10711/*"Polaroid_btn_shutter"*/, v4);
    this = (MyRoomControl___c__DisplayClass345_0_o *)sub_B2C35C(&StringLiteral_10712/*"Polaroid_img_frame"*/, v5);
    byte_4185D68 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = v2->fields.eventId;
  photoCampaignFrameSprite = _4__this->fields.photoCampaignFrameSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (MyRoomControl___c__DisplayClass345_0_o *)AtlasManager__SetEventUI_28451336(
                                                     eventId,
                                                     photoCampaignFrameSprite,
                                                     (System_String_o *)StringLiteral_10712/*"Polaroid_img_frame"*/,
                                                     0LL);
  v9 = v2->fields.__4__this;
  if ( !v9
    || (this = (MyRoomControl___c__DisplayClass345_0_o *)AtlasManager__SetEventUI_28451336(
                                                           v2->fields.eventId,
                                                           v9->fields.photoCampaignCameraButtonSprite,
                                                           (System_String_o *)StringLiteral_10711/*"Polaroid_btn_shutter"*/,
                                                           0LL),
        (v10 = v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  AtlasManager__SetEventUI_28451336(
    v2->fields.eventId,
    v10->fields.photoCampaignCameraButtonBgSprite,
    (System_String_o *)StringLiteral_19444/*"img_bg_shutter"*/,
    0LL);
}


void __fastcall MyRoomControl___c__DisplayClass348_0___ctor(
        MyRoomControl___c__DisplayClass348_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass348_0___LoadPhotoCampaignServant_b__0(
        MyRoomControl___c__DisplayClass348_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass348_0___LoadPhotoCampaignServant_b__1(
        MyRoomControl___c__DisplayClass348_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass348_0___LoadPhotoCampaignServant_b__2(
        MyRoomControl___c__DisplayClass348_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass348_0___LoadPhotoCampaignServant_b__3(
        MyRoomControl___c__DisplayClass348_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl__initMaterial_d__248___ctor(
        MyRoomControl__initMaterial_d__248_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__initMaterial_d__248__MoveNext(
        MyRoomControl__initMaterial_d__248_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  bool v12; // w21
  System_Func_bool__o *v13; // x22
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4185D70 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_MyRoomControl__initMaterial_b__248_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v7);
    byte_4185D70 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), !_4__this)
      || (Instance = (CommonUI_o *)_4__this[2].klass) == 0LL )
    {
LABEL_13:
      sub_B2C434(Instance, v11);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    _4__this,
    Method_MyRoomControl__initMaterial_b__248_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v14 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  *((_DWORD *)p__2__current - 2) = 1;
  return v12;
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__248__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__248_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__initMaterial_d__248__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__248_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__initMaterial_d__248_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__248__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__248_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__initMaterial_d__248__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__248_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__293___ctor(
        MyRoomControl__svtVoicePlayAct_d__293_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__svtVoicePlayAct_d__293__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__293_o *this,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__293_o *v2; // x19
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
  __int64 v17; // x1
  __int64 v18; // x1
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  CommonUI_o *v34; // x21
  Il2CppObject **p__8__1; // x27
  System_Int32_array **v36; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  bool result; // w0
  System_Collections_Generic_List_VoiceCondType_Type__o *v45; // x21
  int32_t *item; // x8
  ServantVoiceEntity_o *v47; // x22
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  Il2CppObject *v55; // x23
  struct MaterialEventLogListViewItem_Info_o *v56; // x8
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct MaterialEventLogListViewItem_Info_o *v64; // x8
  System_Int32_array **VoiceList_31408724; // x0
  __int64 *p_svtVoiceDataList_5__4; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *svtVoiceDataList_5__4; // x8
  struct MaterialEventLogListViewItem_Info_o *v74; // x8
  System_Int32_array **VoiceList_31408140; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct MyRoomControl___c__DisplayClass293_0_o *_8__1; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  struct MaterialEventLogListViewItem_Info_o *v91; // x8
  int32_t v92; // w22
  struct MaterialEventLogListViewItem_Info_o *v93; // x8
  int32_t v94; // w23
  int32_t voiceCondValue; // w24
  __int64 v96; // x24
  int32_t v97; // w23
  __int64 v98; // x8
  __int64 v99; // x8
  __int64 v100; // x21
  __int64 v101; // x8
  __int64 v102; // x8
  struct MaterialEventLogListViewItem_Info_o *v103; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  Il2CppObject *v106; // x26
  System_Action_o *v107; // x25
  System_Int32_array **v108; // x0
  BattleServantConfConponent_o *v109; // x19
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  int v116; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *v117; // x21
  int size; // w8
  MyRoomControl__svtVoicePlayAct_d__293_o **p_bondsSvtCtr; // x22
  System_Int32_array **v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  unsigned int v127; // w22
  ServantVoiceData_array *v128; // x21
  ServantVoiceData_o *v129; // x8
  CommonUI_o *v130; // x21
  System_Int32_array **v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  CommonUI_o *v138; // x21
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct MyRoomControl___c__DisplayClass293_0_o *v146; // x8
  CommonUI_o *v147; // x20
  System_Int32_array **v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  __int64 v162; // x0
  int v163; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4185D71 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&char_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&Method_MyRoomControl___c__DisplayClass293_0__svtVoicePlayAct_b__0__, v16);
    sub_B2C35C(&MyRoomControl___c__DisplayClass293_0_TypeInfo, v17);
    this = (MyRoomControl__svtVoicePlayAct_d__293_o *)sub_B2C35C(&UIStandFigureRender_TypeInfo, v18);
    byte_4185D71 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v20 = (Il2CppObject *)sub_B2C42C(MyRoomControl___c__DisplayClass293_0_TypeInfo);
      System_Object___ctor(v20, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass293_0_o *)v20;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields.__8__1,
        (System_Int32_array **)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_138;
      v33 = (System_Int32_array **)v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v33;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, v33, v27, v28, v29, v30, v31, v32);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v34 )
        goto LABEL_138;
      CommonUI__maskFadeout(v34, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_13:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v163 = 0;
        v36 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
        v2->fields.__2__current = (Il2CppObject *)v36;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v36, v38, v39, v40, v41, v42, v43);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_138;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v45 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_VoiceCondType_Type____ctor(
        v45,
        (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v45 )
        goto LABEL_138;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v45,
        81,
        (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v2->fields.item;
      if ( !item )
        goto LABEL_138;
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_138;
      v47 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v2->fields._voiceAssetName_5__2 = (struct System_String_o *)VoiceAssetName;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._voiceAssetName_5__2,
        VoiceAssetName,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v55 = (Il2CppObject *)System_Int32__ToString((int)v47 + 20, 0LL);
      LOWORD(v163) = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)j_il2cpp_value_box_0(char_TypeInfo, &v163);
      v56 = v2->fields.item;
      if ( !v56 )
        goto LABEL_138;
      v57 = (System_Int32_array **)System_String__Concat_44385236(
                                     v55,
                                     (Il2CppObject *)this,
                                     (Il2CppObject *)v56->fields.voiceId,
                                     0LL);
      v2->fields._playSvtVoiceId_5__3 = (struct System_String_o *)v57;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._playSvtVoiceId_5__3, v57, v58, v59, v60, v61, v62, v63);
      v64 = v2->fields.item;
      if ( !v64 )
        goto LABEL_138;
      VoiceList_31408724 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_31408724(
                                                    v47,
                                                    v64->fields.svtVoiceType,
                                                    v2->fields._playSvtVoiceId_5__3,
                                                    (System_Collections_Generic_List_CondType_Kind__o *)v45,
                                                    0,
                                                    0LL);
      p_svtVoiceDataList_5__4 = (__int64 *)&v2->fields._svtVoiceDataList_5__4;
      v2->fields._svtVoiceDataList_5__4 = (struct System_Collections_Generic_List_ServantVoiceData____o *)VoiceList_31408724;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._svtVoiceDataList_5__4,
        VoiceList_31408724,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      svtVoiceDataList_5__4 = v2->fields._svtVoiceDataList_5__4;
      if ( svtVoiceDataList_5__4 && svtVoiceDataList_5__4->fields._size )
        goto LABEL_39;
      v74 = v2->fields.item;
      if ( !v74 )
        goto LABEL_138;
      VoiceList_31408140 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_31408140(
                                                    v47,
                                                    v74->fields.svtVoiceType,
                                                    3,
                                                    v74->fields.voiceCondValue,
                                                    0LL,
                                                    -1,
                                                    0LL);
      *p_svtVoiceDataList_5__4 = (__int64)VoiceList_31408140;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._svtVoiceDataList_5__4,
        VoiceList_31408140,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
LABEL_39:
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      _8__1 = v2->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_138;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_8__1->fields.bondsSvtObj,
        (System_Int32_array **)this,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      if ( !*p__8__1 )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)(*p__8__1)[1].monitor;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_138;
      LOBYTE((*p__8__1)[2].klass) = 0;
      materialImageIdList = _4__this->fields.materialImageIdList;
      if ( !materialImageIdList )
        goto LABEL_138;
      materialFigureSvtDispIdx = _4__this->fields.materialFigureSvtDispIdx;
      if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v91 = v2->fields.item;
      if ( !v91 )
        goto LABEL_138;
      v92 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)ServantScriptMaster__getId(v91->fields.svt_id, v92, 0LL);
      v93 = v2->fields.item;
      if ( !v93 )
        goto LABEL_138;
      v94 = (int)this;
      voiceCondValue = v93->fields.voiceCondValue;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UIStandFigureRender__GetForm(v94, 1, voiceCondValue, 0LL);
      v96 = *p_svtVoiceDataList_5__4;
      v97 = (int)this;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_66;
      if ( !*(_DWORD *)(v96 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v98 = *(_QWORD *)(*(_QWORD *)(v96 + 16) + 32LL);
      if ( !v98 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v98 + 24) )
        goto LABEL_139;
      v99 = *(_QWORD *)(v98 + 32);
      if ( !v99 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v99 + 60) )
        goto LABEL_66;
      v100 = *p_svtVoiceDataList_5__4;
      if ( !v100 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v100 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v101 = *(_QWORD *)(*(_QWORD *)(v100 + 16) + 32LL);
      if ( !v101 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v101 + 24) )
      {
LABEL_139:
        v162 = sub_B2C460(this);
        sub_B2C400(v162, 0LL);
      }
      v102 = *(_QWORD *)(v101 + 32);
      if ( !v102 )
        goto LABEL_138;
      v97 = *(_DWORD *)(v102 + 56);
LABEL_66:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v103 = v2->fields.item;
      if ( !v103 )
        goto LABEL_138;
      svt_id = v103->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v106 = *p__8__1;
      v107 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v107, v106, Method_MyRoomControl___c__DisplayClass293_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_138;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v92, 1, 0, v97, 10, v107, 0LL);
LABEL_70:
      if ( !*p__8__1 )
        goto LABEL_138;
      if ( !LOBYTE((*p__8__1)[2].klass) )
      {
        v163 = 0;
        v120 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
        v2->fields.__2__current = (Il2CppObject *)v120;
        v109 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v109, v120, v121, v122, v123, v124, v125, v126);
        v116 = 2;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__voiceLoad(_4__this, v2->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_74:
      if ( _4__this->fields.isVoiceLoading )
      {
        v163 = 0;
        v108 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
        v2->fields.__2__current = (Il2CppObject *)v108;
        v109 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v109, v108, v110, v111, v112, v113, v114, v115);
        v116 = 3;
        goto LABEL_137;
      }
      v117 = v2->fields._svtVoiceDataList_5__4;
      if ( !v117 )
        goto LABEL_138;
      size = v117->fields._size;
      if ( size >= 2 )
      {
        v127 = 0;
        while ( 1 )
        {
          if ( size <= v127 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v128 = v117->fields._items->m_Items[v127];
          if ( !v128 )
            goto LABEL_138;
          if ( !v128->max_length )
            goto LABEL_139;
          v129 = v128->m_Items[0];
          if ( !v129 )
            goto LABEL_138;
          this = (MyRoomControl__svtVoicePlayAct_d__293_o *)System_String__op_Equality(
                                                              v129->fields.id,
                                                              v2->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          v117 = v2->fields._svtVoiceDataList_5__4;
          if ( !v117 )
            goto LABEL_138;
          size = v117->fields._size;
          if ( (int)++v127 >= size )
          {
            p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__293_o **)&_4__this->fields.bondsSvtCtr;
            goto LABEL_93;
          }
        }
        this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsSvtCtr;
        if ( this )
        {
          p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__293_o **)&_4__this->fields.bondsSvtCtr;
          MyRoomSvtControl__setSvtVoice_24670984((MyRoomSvtControl_o *)this, v128, v2->fields._voiceAssetName_5__2, 0LL);
          goto LABEL_93;
        }
        goto LABEL_138;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__293_o **)&_4__this->fields.bondsSvtCtr;
      MyRoomSvtControl__setSvtVoice(
        (MyRoomSvtControl_o *)this,
        v2->fields._svtVoiceDataList_5__4,
        v2->fields._voiceAssetName_5__2,
        0LL);
LABEL_93:
      this = *p_bondsSvtCtr;
      if ( !*p_bondsSvtCtr )
        goto LABEL_138;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = *p_bondsSvtCtr;
      if ( !*p_bondsSvtCtr )
        goto LABEL_138;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v130 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v130 )
        goto LABEL_138;
      CommonUI__maskFadein(v130, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_100:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v163 = 0;
        v131 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
        v2->fields.__2__current = (Il2CppObject *)v131;
        v109 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v109, v131, v132, v133, v134, v135, v136, v137);
        v116 = 4;
        goto LABEL_137;
      }
LABEL_103:
      if ( !_4__this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v163 = 0;
        v155 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
        v2->fields.__2__current = (Il2CppObject *)v155;
        v109 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v109, v155, v156, v157, v158, v159, v160, v161);
        v116 = 5;
        goto LABEL_137;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v138 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v138 )
        goto LABEL_138;
      CommonUI__maskFadeout(v138, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_112:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v163 = 0;
        v139 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
        v2->fields.__2__current = (Il2CppObject *)v139;
        v109 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v109, v139, v140, v141, v142, v143, v144, v145);
        v116 = 6;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v2->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v146 = v2->fields.__8__1;
      if ( !v146 )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)v146->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_138;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v147 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v147 )
        goto LABEL_138;
      CommonUI__maskFadein(v147, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_132:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_138:
        sub_B2C434(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v163 = 0;
      v148 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v163);
      v2->fields.__2__current = (Il2CppObject *)v148;
      v109 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v109, v148, v149, v150, v151, v152, v153, v154);
      v116 = 7;
LABEL_137:
      *(_DWORD *)&v109[-1].fields.isOpenAfter = v116;
      return 1;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_13;
    case 2:
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_70;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_138;
      goto LABEL_74;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_100;
    case 5:
      v2->fields.__1__state = -1;
      goto LABEL_103;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_112;
    case 7:
      v2->fields.__1__state = -1;
      goto LABEL_132;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__293__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__293_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__svtVoicePlayAct_d__293__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__293_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomControl__svtVoicePlayAct_d__293_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__293__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__293_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__293__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__293_o *this,
        const MethodInfo *method)
{
  ;
}