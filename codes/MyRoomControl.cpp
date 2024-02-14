void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct MyRoomControl_StaticFields *static_fields; // x0
  __int64 v4; // x1
  MyRoomControl_c *v5; // x8

  if ( (byte_42124BF & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_2565/*"BGM_MYROOM_1"*/, v2);
    byte_42124BF = 1;
  }
  static_fields = MyRoomControl_TypeInfo->static_fields;
  v4 = StringLiteral_2565/*"BGM_MYROOM_1"*/;
  static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_2565/*"BGM_MYROOM_1"*/;
  sub_B0D840(static_fields, v4);
  v5 = MyRoomControl_TypeInfo;
  MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY = 1;
  v5->static_fields->BUTTON_LIMIT_CHANGE = 2;
  v5->static_fields->BUTTON_DISP_CHANGE = 4;
  v5->static_fields->BUTTON_HELP = 8;
  v5->static_fields->BUTTON_MULTIPLE_VIEW = 16;
  v5->static_fields->BUTTON_PHOTO_CAMPAIGN = 32;
  v5->static_fields->BUTTON_OUT_X = -800.0;
  v5->static_fields->MULTIPLE_VIEW_SELECTED_MAX = 2;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomStateMaterial_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x20
  __int64 v16; // x0
  int v17; // w8
  struct System_Int64_array *v18; // x0
  struct System_Int32_array *v19; // x0
  __int64 v20; // x0

  if ( (byte_42124BE & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&long___TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&MyRoomStateMaterial_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Vector3___TypeInfo, v8);
    byte_42124BE = 1;
  }
  *(_OWORD *)&this->fields.photoFrameWidth = xmmword_3201720;
  this->fields.photoFramePosY = 11.0;
  v9 = (MyRoomStateMaterial_o *)sub_B0D974(MyRoomStateMaterial_TypeInfo, method, v2);
  MyRoomStateMaterial___ctor(v9, 0LL);
  this->fields.mStateMaterial = v9;
  sub_B0D840(&this->fields.mStateMaterial, v9);
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v12;
  sub_B0D840(&this->fields.imageIdList, v12);
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v15;
  sub_B0D840(&this->fields.materialImageIdList, v15);
  v16 = sub_B0D8BC(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v16 )
    sub_B0D97C(0LL);
  v17 = *(_DWORD *)(v16 + 24);
  if ( !v17 || (*(_DWORD *)(v16 + 40) = 0, *(_QWORD *)(v16 + 32) = 0x43900000C4000000LL, v17 == 1) )
  {
    v20 = sub_B0D9A8(v16);
    sub_B0D948(v20, 0LL);
  }
  *(_DWORD *)(v16 + 52) = 0;
  *(_QWORD *)(v16 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v16;
  sub_B0D840(&this->fields.defaultMultipleServantPoses, v16);
  this->fields.voicePlayButtonDefaultPos = UnityEngine_Vector3__get_zero(0LL);
  this->fields.multipleViewFinishedTime = -1LL;
  v18 = (struct System_Int64_array *)sub_B0D8BC(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v18;
  sub_B0D840(&this->fields.multipleServantUsrIds, v18);
  v19 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v19;
  sub_B0D840(&this->fields.multipleLimitCounts, v19);
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
  int v9; // s0
  UIWidget_o *helpButtonImg; // x20
  int v14; // s0
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v22; // s0
  MyRoomControl_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4212490 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4212490 = 1;
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
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_gray(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_28;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v9, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
  if ( !helpButtonImg )
    goto LABEL_28;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v14, 0LL);
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
  *(_QWORD *)&v27.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v27.fields.fakeValue = mstInfoData;
  myRoomData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
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
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_28;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v22, 0LL);
    v26 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v26 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v26->static_fields->BUTTON_LIMIT_CHANGE;
  }
  myRoomData = (MyRoomData_o *)this->fields.mBlocker;
  if ( !myRoomData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomData, 1, 0LL),
        (myRoomData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_28:
    sub_B0D97C(myRoomData);
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

  if ( (byte_42124B7 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_42124B7 = 1;
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
  MyRoomControl__CaptureServant_d__350_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_42124B2 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__CaptureServant_d__350_TypeInfo, *(_QWORD *)&width);
    byte_42124B2 = 1;
  }
  v7 = (MyRoomControl__CaptureServant_d__350_o *)sub_B0D974(
                                                   MyRoomControl__CaptureServant_d__350_TypeInfo,
                                                   *(_QWORD *)&width,
                                                   *(_QWORD *)&height);
  MyRoomControl__CaptureServant_d__350___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  v7->fields.__4__this = this;
  sub_B0D840(&v7->fields.__4__this, this);
  v7->fields.width = width;
  v7->fields.height = height;
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
  const MethodInfo *v15; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v17; // s0
  float v18; // s9
  float v19; // s1
  float v20; // s8
  const MethodInfo *v21; // x1
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
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x3
  MyRoomControl_c *v37; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  StandFigureBack_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1
  UnityEngine_Vector3_o movePos; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421248D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isSePlay);
    sub_B0D8A4(&Method_MyRoomControl__ChangeDisp_b__291_0__, v6);
    sub_B0D8A4(&Method_MyRoomControl__ChangeDisp_b__291_1__, v7);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_11416/*"ReleaseTouch"*/, v10);
    byte_421248D = 1;
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
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v15);
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
          v15);
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
        v17 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v18 = *(float *)&v17,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v20 = v19,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_57:
          sub_B0D97C(soundPlayerComp);
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
            v28 = -v18;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v29);
            v62.fields.x = v28;
            v62.fields.y = v20;
            v62.fields.z = v24;
            MyRoomControl__moveControl(this, this->fields.svtObj, v62, (System_String_o *)StringLiteral_11416/*"ReleaseTouch"*/, v30);
            v31 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_57;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v37 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v37 = MyRoomControl_TypeInfo;
            }
            v63.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v63.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v63.fields.x = v37->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v63, 0LL, v36);
            v64.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v64.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v64.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v64, 0LL, v39);
            v65.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v65.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v65.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v65, 0LL, v40);
            v66.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v66.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v66.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v66, 0LL, v41);
            v67.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v67.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v67.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v67, (System_String_o *)StringLiteral_11416/*"ReleaseTouch"*/, v42);
            v68.fields.y = this->fields.helpBtnInitPos.fields.y;
            v68.fields.z = this->fields.helpBtnInitPos.fields.z;
            v68.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v68, 0LL, v43);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v31 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v21);
            standFigureBack = this->fields.standFigureBack;
            v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
            System_Action___ctor(v35, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__291_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_57;
            StandFigureBack__Fadeout(standFigureBack, v35, 0LL);
            v31 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v22);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v44);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v45);
            v46 = this->fields.standFigureBack;
            v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
            System_Action___ctor(v49, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__291_1__, 0LL);
            if ( !v46 )
              goto LABEL_57;
            StandFigureBack__Fadein(v46, v49, 0LL);
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
              v50);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v51);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v52);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v53);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v54);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v55);
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
        MyRoomControl__SetMultipleViewButtonColor(this, v21);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v56);
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
  int v7; // s0
  MyRoomControl_c *v11; // x0
  int32_t buttonFlag; // w9
  UIWidget_o *changeBtnImg; // x21
  int32_t BUTTON_VOICE_PLAY; // w8
  int v15; // w10
  int v16; // w8
  int v17; // s0
  MyRoomControl_c *v21; // x0
  int32_t v22; // w9
  UIWidget_o *changeBGBtnImg; // x21
  int32_t BUTTON_LIMIT_CHANGE; // w8
  int v25; // w10
  int v26; // w8
  int v27; // s0
  MyRoomControl_c *v31; // x0
  int32_t v32; // w9
  int32_t BUTTON_DISP_CHANGE; // w8
  int v34; // w10
  int v35; // w8

  if ( (byte_4212494 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, isSet);
    byte_4212494 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v7, 0LL);
  v11 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
  BUTTON_VOICE_PLAY = v11->static_fields->BUTTON_VOICE_PLAY;
  v15 = buttonFlag & ~BUTTON_VOICE_PLAY;
  v16 = buttonFlag | BUTTON_VOICE_PLAY;
  if ( !isSet )
    v16 = v15;
  this->fields.buttonFlag = v16;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v17, 0LL);
  v21 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v21 = MyRoomControl_TypeInfo;
  }
  v22 = this->fields.buttonFlag;
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  BUTTON_LIMIT_CHANGE = v21->static_fields->BUTTON_LIMIT_CHANGE;
  v25 = v22 & ~BUTTON_LIMIT_CHANGE;
  v26 = v22 | BUTTON_LIMIT_CHANGE;
  if ( !isSet )
    v26 = v25;
  this->fields.buttonFlag = v26;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
    if ( !changeBGBtnImg )
LABEL_31:
      sub_B0D97C(v6);
  }
  else
  {
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBGBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v27, 0LL);
  v31 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v31 = MyRoomControl_TypeInfo;
  }
  v32 = this->fields.buttonFlag;
  BUTTON_DISP_CHANGE = v31->static_fields->BUTTON_DISP_CHANGE;
  v34 = v32 & ~BUTTON_DISP_CHANGE;
  v35 = v32 | BUTTON_DISP_CHANGE;
  if ( !isSet )
    v35 = v34;
  this->fields.buttonFlag = v35;
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

  if ( (byte_4212493 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isSet);
    byte_4212493 = 1;
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
    sub_B0D97C(standFigureBack);
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

  if ( (byte_4212499 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3077/*"CLICK_MATERIAL"*/, v3);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v4);
    byte_4212499 = 1;
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v10 = (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_B0D97C(myRoomFsm);
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
    v9 = &StringLiteral_3077/*"CLICK_MATERIAL"*/;
  else
    v9 = &StringLiteral_6912/*"GO_NEXT"*/;
  v10 = (System_String_o *)*v9;
  myRoomFsm = this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent(myRoomFsm, v10, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_42124A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__CloseMultipleView_b__336_0__, v3);
    byte_42124A6 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__336_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v7, 0, v8);
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

  if ( (byte_42124A4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6703/*"FinishedCloseMultiServant"*/, method);
    byte_42124A4 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(mBlocker);
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
      v19 = sub_B0D9A8(mBlocker);
      sub_B0D948(v19, 0LL);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6703/*"FinishedCloseMultiServant"*/ : 0LL;
              v20.fields.y = v15;
              v20.fields.x = flt_3201638[(_DWORD)v7 == 4] + y;
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_42124BA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_0__, v4);
    byte_42124BA = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v7, 0, v8);
}


void __fastcall MyRoomControl__ClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  float v5; // s8
  float v6; // s9
  float v7; // s10
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42124B8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6704/*"FinishedClosePhotoCampaignServant"*/, method);
    byte_42124B8 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    sub_B0D97C(0LL);
  v5 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v6 = this->fields.currentPhotoServantPos.fields.x + -1300.0;
  v7 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v10.fields.x = v6;
  v10.fields.y = v5;
  v10.fields.z = v7;
  MyRoomControl__moveControl(this, gameObject, v10, (System_String_o *)StringLiteral_6704/*"FinishedClosePhotoCampaignServant"*/, v9);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4212482 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_TypeInfo, setEndAction);
    byte_4212482 = 1;
  }
  v5 = (MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *)sub_B0D974(
                                                                           MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_TypeInfo,
                                                                           setEndAction,
                                                                           method);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__253___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.setEndAction = setEndAction;
  sub_B0D840(&v5->fields.setEndAction, setEndAction);
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

  if ( (byte_4212496 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_B0D8A4(&StringLiteral_3449/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v5);
    byte_4212496 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_3449/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                        (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     UIAtlas,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_B0D97C(0LL);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v7,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
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
  MyRoomControl___c__DisplayClass334_0_o *v12; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  StandFigureBack_o *v18; // x21
  System_Action_o *v19; // x23
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v21; // x23
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x4
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42124A5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDispDefault);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__0__, v9);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__1__, v10);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass334_0_TypeInfo, v11);
    byte_42124A5 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = (MyRoomControl___c__DisplayClass334_0_o *)sub_B0D974(
                                                    MyRoomControl___c__DisplayClass334_0_TypeInfo,
                                                    isDispDefault,
                                                    callback);
  MyRoomControl___c__DisplayClass334_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_29;
  v12->fields.callback = callback;
  sub_B0D840(&v12->fields, callback);
  v12->fields.__4__this = this;
  sub_B0D840(&v12->fields.__4__this, this);
  MyRoomControl__stopSvtVoice(this, v14);
  MyRoomControl__BlockTouch(this, v15);
  if ( !isDispDefault )
  {
    standFigureBack = this->fields.standFigureBack;
    v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v12,
      Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__1__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadeout(standFigureBack, v21, 0LL);
      frontObjectManager = this->fields.frontObjectManager;
      if ( frontObjectManager )
      {
        MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
        goto LABEL_13;
      }
    }
LABEL_29:
    sub_B0D97C(frontObjectManager);
  }
  if ( isFadein )
  {
    v18 = this->fields.standFigureBack;
    v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v12,
      Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__0__,
      0LL);
    if ( !v18 )
      goto LABEL_29;
    StandFigureBack__Fadein(v18, v19, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v25);
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
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v24);
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
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_42124AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, usrSvtId);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    byte_42124AF = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B0D97C(0LL);
  MissionNotifyManager__StartPause(v8, 0LL);
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
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
  ServantVoiceEntity_o *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__201_0; // x21
  Il2CppObject *v19; // x22
  struct MyRoomControl___c_StaticFields *v20; // x0

  if ( (byte_4212466 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_MyRoomControl___c__EndLoad_b__201_0__, v5);
    sub_B0D8A4(&MyRoomControl___c_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_8428/*"LOAD_END"*/, v7);
    byte_4212466 = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_23;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v9);
  if ( SvtVoiceEnt )
  {
    v11 = SvtVoiceEnt;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_23;
    MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)svtCtr, v11, 0LL);
  }
  if ( !this->fields.sceneJumpInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    svtCtr = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
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
      v19 = (Il2CppObject *)static_fields->__9;
      _9__201_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(_9__201_0, v19, Method_MyRoomControl___c__EndLoad_b__201_0__, 0LL);
      v20 = MyRoomControl___c_TypeInfo->static_fields;
      v20->__9__201_0 = _9__201_0;
      sub_B0D840(&v20->__9__201_0, _9__201_0);
    }
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__201_0, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B0D97C(svtCtr);
  }
LABEL_21:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8428/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v5; // x19

  if ( (byte_421249A & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_421249A = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_B0D840(&this->fields.sceneJumpInfo, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v5 )
      sub_B0D97C(Instance);
    CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_B0D97C(0LL);
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
  if ( (byte_4212498 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_B0D8A4(&SwipeGesture_TypeInfo, v5);
    byte_4212498 = 1;
  }
  if ( !gesture )
    sub_B0D97C(this);
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
    sub_B0D97C(photoCampaignProduction);
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
      v10 = sub_B0D9A8(multipleViewCloseButton);
      sub_B0D948(v10, 0LL);
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
    sub_B0D97C(multipleViewCloseButton);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_42124B9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_42124B9 = 1;
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
  UnityEngine_Object__Destroy_34935276(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_B0D840(&this->fields.photoCampaignInstantiateCameraEffect, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_31180844(v9, 1.0, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !photoCampaignStandFigureBack
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoCampaignComponent) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(photoCampaignStandFigureBack);
  }
  PhotoCampaignComponent__Open((PhotoCampaignComponent_o *)photoCampaignStandFigureBack, 0, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v10);
}


void __fastcall MyRoomControl__FinishedFadeMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v5; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL);
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
}


void __fastcall MyRoomControl__FinishedFadePhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  struct UnityEngine_GameObject_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42124B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42124B1 = 1;
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
                                            (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  this->fields.photoCampaignInstantiateCameraEffect = v7;
  sub_B0D840(&this->fields.photoCampaignInstantiateCameraEffect, v7);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignCameraButton
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignCameraButton, 0LL),
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        photoCampaignCameraButton = this->fields.photoCampaignCameraButton,
        this->fields.currentPhotoServantPos = LocalPosition,
        !photoCampaignCameraButton) )
  {
LABEL_10:
    sub_B0D97C(photoCampaignCameraButton);
  }
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v9);
}


void __fastcall MyRoomControl__FormChangeCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  ServantVoiceData_o *FirstServantVoiceData; // x0
  ServantVoiceData_o *v6; // x20
  __int64 *v7; // x9
  System_String_o *v8; // x1

  if ( (byte_4212472 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9348/*"NORMAL_FORM"*/, method);
    sub_B0D8A4(&StringLiteral_2962/*"CHANGE_FORM"*/, v3);
    byte_4212472 = 1;
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
      v8 = (System_String_o *)StringLiteral_9348/*"NORMAL_FORM"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_B0D97C(svtCtr);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_17;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_17;
  if ( v6->fields.form == (_DWORD)svtCtr )
    v7 = &StringLiteral_9348/*"NORMAL_FORM"*/;
  else
    v7 = &StringLiteral_2962/*"CHANGE_FORM"*/;
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
  if ( (byte_42124B6 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B0D8A4(&ManagerConfig_TypeInfo, localScale);
    byte_42124B6 = 1;
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
  if ( (byte_4212497 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4212497 = 1;
  }
  materialImageIdList = v2->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_B0D97C(this);
  materialFigureSvtDispIdx = v2->fields.materialFigureSvtDispIdx;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x8
  __int64 v16; // x0

  if ( (byte_421249B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421249B = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&servantId,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v16 = sub_B0D9A8(Instance);
        sub_B0D948(v16, 0LL);
      }
      v14 = *((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 || !v9 )
        break;
      System_Collections_Generic_List_int___Add(
        v9,
        *(_DWORD *)(v14 + 20),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_12;
    }
LABEL_14:
    sub_B0D97C(Instance);
  }
LABEL_12:
  if ( !v9 )
    goto LABEL_14;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_421245F & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B0D8A4(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_421245F = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
  __int64 v13; // x1
  __int64 v14; // x2
  CommonConfirmDialog_ClickDelegate_o *v15; // x23
  BalanceConfig_c *v16; // x0

  if ( (byte_4212487 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_MyRoomControl__GoToTitle_b__281_0__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8912/*"MYROOM_TITLE_CONFIRM"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4212487 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8912/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14);
  CommonConfirmDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__281_0__, 0LL);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    sub_B0D97C(v16);
  CommonUI__OpenConfirmDialog(
    Instance,
    v10,
    v11,
    v15,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__InitMaterialOnBackground_d__247_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_421247F & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__InitMaterialOnBackground_d__247_TypeInfo, method);
    byte_421247F = 1;
  }
  v4 = (MyRoomControl__InitMaterialOnBackground_d__247_o *)sub_B0D974(
                                                             MyRoomControl__InitMaterialOnBackground_d__247_TypeInfo,
                                                             method,
                                                             v2);
  MyRoomControl__InitMaterialOnBackground_d__247___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__InitServantMenu_d__250_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4212481 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__InitServantMenu_d__250_TypeInfo, method);
    byte_4212481 = 1;
  }
  v4 = (MyRoomControl__InitServantMenu_d__250_o *)sub_B0D974(MyRoomControl__InitServantMenu_d__250_TypeInfo, method, v2);
  MyRoomControl__InitServantMenu_d__250___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


bool __fastcall MyRoomControl__IsEnableButton(MyRoomControl_o *this, int32_t button, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.buttonFlag & button) < 0) ^ v3 | ((this->fields.buttonFlag & button) == 0));
}


bool __fastcall MyRoomControl__IsEnableMultipleViewButton(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0

  if ( (byte_42124A8 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    byte_42124A8 = 1;
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

  if ( (byte_42124BB & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    byte_42124BB = 1;
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
  if ( (byte_42124A1 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_42124A1 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_B0D97C(this);
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

  if ( (byte_421246E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15445/*"Wait_Action"*/, method);
    sub_B0D8A4(&StringLiteral_7165/*"Help"*/, v3);
    byte_421246E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15445/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7165/*"Help"*/, 0LL) )
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
    sub_B0D97C(myRoomFsm);
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
  __int64 v2; // x2
  MyRoomControl__LoadMultipleServant_d__330_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_42124A3 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__LoadMultipleServant_d__330_TypeInfo, method);
    byte_42124A3 = 1;
  }
  v4 = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B0D974(
                                                        MyRoomControl__LoadMultipleServant_d__330_TypeInfo,
                                                        method,
                                                        v2);
  MyRoomControl__LoadMultipleServant_d__330___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
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
  MyRoomControl___c__DisplayClass345_0_o *v9; // x21
  __int64 v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_42124AD & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__0__, v6);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass345_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_6219/*"EventUI/Prefabs/"*/, v8);
    byte_42124AD = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass345_0_o *)sub_B0D974(
                                                   MyRoomControl___c__DisplayClass345_0_TypeInfo,
                                                   *(_QWORD *)&eventId,
                                                   method);
  MyRoomControl___c__DisplayClass345_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields, this);
  v9->fields.eventId = eventId;
  v11 = System_Int32__ToString((int)v9 + 24, 0LL);
  v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_6219/*"EventUI/Prefabs/"*/, v11, 0LL);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, v15, 1, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__LoadPhotoCampaignServant_d__348_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_42124B0 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__LoadPhotoCampaignServant_d__348_TypeInfo, method);
    byte_42124B0 = 1;
  }
  v4 = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)sub_B0D974(
                                                             MyRoomControl__LoadPhotoCampaignServant_d__348_TypeInfo,
                                                             method,
                                                             v2);
  MyRoomControl__LoadPhotoCampaignServant_d__348___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_421245A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, method);
    byte_421245A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212476 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__LoadServantForm_b__228_0__, v4);
    byte_4212476 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__228_0__, 0LL);
  if ( !svtCtr )
    sub_B0D97C(v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  int v6; // s0
  const MethodInfo *v10; // x1
  MyRoomControl_c *v11; // x0

  if ( (byte_4212477 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8428/*"LOAD_END"*/, v3);
    byte_4212477 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_9;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v6, 0LL);
  v11 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v11->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v10);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
LABEL_9:
    sub_B0D97C(myRoomFsm);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8428/*"LOAD_END"*/, 0LL);
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
  if ( (byte_421248F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9287/*"MyRoomUIAnimationEnd"*/, target);
    byte_421248F = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9287/*"MyRoomUIAnimationEnd"*/, v4);
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
  const MethodInfo *v31; // x1
  int32_t type; // w9
  int32_t mState; // w8
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x1
  MethodInfo *v37; // x1
  char v38; // w8
  __int64 v39; // x20
  __int64 *v40; // x8
  __int64 *v41; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  System_String_o *ActiveStateName; // x0
  MyRoomControl_o *v45; // x8
  struct SerialCodeComponent_o *serialCodeComp; // x20
  UIWidget_o *changeBtnImg; // x20
  int v48; // s0
  MyRoomControl_c *v52; // x0
  __int64 value; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v2 = this;
  if ( (byte_421248C & 1) == 0 )
  {
    sub_B0D8A4(&Method_MyRoomControl_OnClickBack__, method);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_3113/*"CLOSE_MATERIAL_COLLECTION"*/, v7);
    sub_B0D8A4(&StringLiteral_3112/*"CLOSE_MATERIAL"*/, v8);
    sub_B0D8A4(&StringLiteral_3124/*"CLOSE_USER_SERVANT_COIN"*/, v9);
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v10);
    sub_B0D8A4(&StringLiteral_3116/*"CLOSE_NOTICE"*/, v11);
    sub_B0D8A4(&StringLiteral_3110/*"CLOSE_GAMEOPTION"*/, v12);
    sub_B0D8A4(&StringLiteral_3111/*"CLOSE_ITEMLIST"*/, v13);
    sub_B0D8A4(&StringLiteral_3114/*"CLOSE_MATERIAL_COSTUME"*/, v14);
    sub_B0D8A4(&StringLiteral_3107/*"CLOSE_CONTINUE_DEVICE"*/, v15);
    sub_B0D8A4(&StringLiteral_3102/*"CLOSE_BLACKLIST"*/, v16);
    sub_B0D8A4(&StringLiteral_13104/*"State 5"*/, v17);
    sub_B0D8A4(&StringLiteral_3119/*"CLOSE_SERIAL_CODE"*/, v18);
    sub_B0D8A4(&StringLiteral_3104/*"CLOSE_CHANGE_PROFILE"*/, v19);
    sub_B0D8A4(&StringLiteral_3120/*"CLOSE_SOUND_PLAYER"*/, v20);
    this = (MyRoomControl_o *)sub_B0D8A4(&StringLiteral_3109/*"CLOSE_FAVORITE_CHANGE"*/, v21);
    byte_421248C = 1;
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
          v34 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
            v34 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickBack__);
          v35 = (System_Reflection_MethodBase_o *)sub_B0D888(v34, v34[3]);
          OverwriteAssetSoundName__PlaySystemSe(v35, 1, 0LL);
          v2->fields.photoCampaignState = 1;
          MyRoomControl__ClosePhotoCampaignServant(v2, v36);
        }
        else if ( photoCampaignState == 1 )
        {
          v27 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
            v27 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickBack__);
          v28 = (System_Reflection_MethodBase_o *)sub_B0D888(v27, v27[3]);
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
          MyRoomControl__setDefSvtPos(v2, v31);
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
      v37 = (MethodInfo *)StringLiteral_3055/*"CLICK_BACK"*/;
      v38 = 0;
      switch ( type )
      {
        case 0:
          v39 = StringLiteral_3055/*"CLICK_BACK"*/;
          MyRoomControl__ReleaseAsset(v2, (const MethodInfo *)StringLiteral_3055/*"CLICK_BACK"*/);
          v37 = (MethodInfo *)v39;
          goto LABEL_61;
        case 1:
          v40 = &StringLiteral_3112/*"CLOSE_MATERIAL"*/;
          goto LABEL_52;
        case 2:
          v41 = &StringLiteral_3113/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_60;
        case 3:
          v41 = &StringLiteral_3111/*"CLOSE_ITEMLIST"*/;
          goto LABEL_60;
        case 4:
          v41 = &StringLiteral_3104/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_60;
        case 5:
          optionComp = v2->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v38 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              v37 = (MethodInfo *)StringLiteral_3102/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v41 = &StringLiteral_3110/*"CLOSE_GAMEOPTION"*/;
LABEL_60:
            v37 = (MethodInfo *)*v41;
LABEL_61:
            v38 = 0;
          }
LABEL_62:
          if ( ((unsigned __int8)v38 & (v2->fields.mState != 0)) != 0 )
          {
            MyRoomControl__setDefSvtPos(v2, v37);
          }
          else
          {
            this = (MyRoomControl_o *)v2->fields.titleInfo;
            if ( !this )
              break;
            TitleInfoControl__sendEvent((TitleInfoControl_o *)this, (System_String_o *)v37, 0LL);
          }
          this = (MyRoomControl_o *)v2->fields.myRoomFsm;
          if ( this )
          {
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13104/*"State 5"*/, 0LL) )
              return;
            this = (MyRoomControl_o *)v2->fields.myRoomData;
            if ( this )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0LL);
              if ( this )
              {
                v45 = this;
                *(_QWORD *)&v54.fields.currentCryptoKey = this->fields.materialCollectionComp;
                serialCodeComp = v45->fields.serialCodeComp;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = *(_QWORD *)&v54.fields.currentCryptoKey;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v54.fields.currentCryptoKey = value;
                }
                *(_QWORD *)&v54.fields.fakeValue = serialCodeComp;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL) < 1
                  || v2->fields.isHeroine && v2->fields.isHeroineReave )
                {
                  return;
                }
                changeBtnImg = (UIWidget_o *)v2->fields.changeBtnImg;
                *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
                if ( changeBtnImg )
                {
                  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v48, 0LL);
                  v52 = MyRoomControl_TypeInfo;
                  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                    v52 = MyRoomControl_TypeInfo;
                  }
                  v2->fields.buttonFlag |= v52->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 6:
          v40 = &StringLiteral_3116/*"CLOSE_NOTICE"*/;
LABEL_52:
          v37 = (MethodInfo *)*v40;
          v38 = 1;
          goto LABEL_62;
        case 7:
          v41 = &StringLiteral_3119/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_60;
        case 8:
          v41 = &StringLiteral_3107/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_60;
        case 9:
          v41 = &StringLiteral_3109/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_60;
        case 10:
          v41 = &StringLiteral_3120/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_60;
        case 11:
          v41 = &StringLiteral_3114/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_60;
        case 17:
          v41 = &StringLiteral_3124/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_60;
        default:
          goto LABEL_62;
      }
LABEL_81:
      sub_B0D97C(this);
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
  const MethodInfo *v17; // x1
  System_String_o *v18; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  ServantEntity_o *Entity; // x21
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t size; // w10
  int32_t v29; // w8
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x20
  __int64 v31; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_421246D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_15445/*"Wait_Action"*/, v11);
    sub_B0D8A4(&StringLiteral_2966/*"CHANGE_LIMIT"*/, v12);
    sub_B0D8A4(&StringLiteral_7165/*"Help"*/, v13);
    byte_421246D = 1;
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
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15445/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_50;
    v18 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v18, (System_String_o *)StringLiteral_7165/*"Help"*/, 0LL) )
      return;
  }
  if ( !this->fields.isServantMaterial )
  {
    if ( !this->fields.isHeroine || !this->fields.isHeroineReave )
    {
      if ( !MyRoomControl__IsScrollviewInShowPosition(this, v17) )
        goto LABEL_45;
      myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomData;
      if ( !myRoomFsm )
        goto LABEL_50;
      myRoomFsm = (PlayMakerFSM_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomFsm, this->fields.fvrUsrSvtId, 0LL);
      if ( !myRoomFsm )
        goto LABEL_50;
      v31 = *(_QWORD *)&myRoomFsm[1].fields.eventHandlerComponentsAdded;
      addEventHandlers = myRoomFsm[1].fields.addEventHandlers;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v33.fields.currentCryptoKey = v31;
      *(_QWORD *)&v33.fields.fakeValue = addEventHandlers;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v33, 0LL) > 0 || this->fields.isHeroine )
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_50;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)myRoomFsm;
  v23 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v23;
  *(_QWORD *)&v32.fields.fakeValue = v22;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32, 0LL);
  if ( !v21 )
    goto LABEL_50;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v21,
                                (int32_t)myRoomFsm,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v25);
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
      v29 = this->fields.materialFigureSvtDispIdx + 1;
      if ( v29 >= size )
        v29 = 0;
      else
        this->fields.materialFigureSvtDispIdx = v29;
      this->fields.materialFigureSvtDispIdx = v29;
LABEL_45:
      MyRoomControl__BlockTouch(this, v26);
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
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_2966/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_50:
      sub_B0D97C(myRoomFsm);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_421249E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421249E = 1;
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
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_42124AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_42124AC = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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
    sub_B0D97C(materialCollectionServantListViewManager);
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

  if ( (byte_421249F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421249F = 1;
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
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  __int64 v55; // x1
  UnityEngine_Vector3_o v56; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v61; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v62; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v63; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v64; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v65; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42124B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_B0D8A4(&StringLiteral_6702/*"FinishedCloseFullScreenPhotoCampaign"*/, v3);
    byte_42124B5 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v56.fields.z = 0.0;
  *(_QWORD *)&v56.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_28;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  if ( photoCampaignState == 4 )
  {
    v35 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    v36 = (System_Reflection_MethodBase_o *)sub_B0D888(v35, v35[3]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    this->fields.photoCampaignState = 2;
    if ( !maskBoxCollider )
      goto LABEL_28;
    photoFramePosY = this->fields.photoFramePosY;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v68 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
    y = v68.fields.y;
    z = v68.fields.z;
    w = v68.fields.w;
    v68.fields.y = v68.fields.x;
    v68.fields.z = y;
    v68.fields.w = z;
    v42 = w;
    TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v68.fields.y, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v62.fields.x = 1.0;
    v62.fields.y = 1.0;
    v62.fields.z = 1.0;
    TweenScale__Begin(v43, 0.2, v62, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v63.fields.x = 0.0;
    v63.fields.z = 0.0;
    v63.fields.y = photoFramePosY;
    TweenPosition__Begin(v44, 0.2, v63, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v69 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
    v46 = v69.fields.y;
    v47 = v69.fields.z;
    v48 = v69.fields.w;
    v69.fields.y = v69.fields.x;
    v69.fields.z = v46;
    v69.fields.w = v47;
    v49 = v48;
    TweenRotation__Begin(v45, 0.2, *(UnityEngine_Quaternion_o *)&v69.fields.y, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v64.fields.x = 1.0;
    v64.fields.y = 1.0;
    v64.fields.z = 1.0;
    TweenScale__Begin(v50, 0.2, v64, 0LL);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
    if ( !maskBoxCollider )
      goto LABEL_28;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
    v65.fields.x = 0.0;
    v65.fields.z = 0.0;
    v65.fields.y = photoFramePosY;
    TweenPosition__Begin(v51, 0.2, v65, 0LL);
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
    sub_B0D840(p_eventReceiver, maskBoxCollider);
    v55 = StringLiteral_6702/*"FinishedCloseFullScreenPhotoCampaign"*/;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6702/*"FinishedCloseFullScreenPhotoCampaign"*/;
    sub_B0D840(p_eventReceiver + 1, v55);
  }
  else if ( photoCampaignState == 3 )
  {
    v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    this->fields.photoCampaignState = 4;
    MyRoomControl__GetMaximTransformValues(this, &localScale, &v56, v8);
    maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
    if ( maskBoxCollider )
    {
      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v10 = *(_QWORD *)&v56.fields.x;
      v11 = v56.fields.z;
      v12 = v9;
      v66 = UnityEngine_Quaternion__Euler_34967416(v56, 0LL);
      v13 = v66.fields.y;
      v14 = v66.fields.z;
      v15 = v66.fields.w;
      v66.fields.y = v66.fields.x;
      v66.fields.z = v13;
      v66.fields.w = v14;
      v16 = v15;
      TweenRotation__Begin(v12, 0.2, *(UnityEngine_Quaternion_o *)&v66.fields.y, 0LL);
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
            *(_QWORD *)&v59.fields.x = v10;
            v59.fields.z = v11;
            v67 = UnityEngine_Quaternion__Euler_34967416(v59, 0LL);
            v26 = v67.fields.y;
            v27 = v67.fields.z;
            v28 = v67.fields.w;
            v67.fields.y = v67.fields.x;
            v67.fields.z = v26;
            v67.fields.w = v27;
            v29 = v28;
            TweenRotation__Begin(v25, 0.2, *(UnityEngine_Quaternion_o *)&v67.fields.y, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              v61.fields.x = x;
              v61.fields.y = v19;
              v61.fields.z = v20;
              TweenScale__Begin(v30, 0.2, v61, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v60 = UnityEngine_Vector3__get_zero(0LL);
                v32 = v60.fields.y;
                v33 = v60.fields.z;
                v60.fields.y = v60.fields.x;
                v60.fields.z = v32;
                v34 = v33;
                TweenPosition__Begin(v31, 0.2, *(UnityEngine_Vector3_o *)&v60.fields.y, 0LL);
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
    sub_B0D97C(maskBoxCollider);
  }
}


void __fastcall MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  const MethodInfo *v4; // x2
  MyRoomControl_c *klass; // x9
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_42124B3 & 1) == 0 )
  {
    sub_B0D8A4(&TouchEffectManager_TypeInfo, method);
    byte_42124B3 = 1;
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(1, 0LL);
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 0, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 1, v4);
  klass = this->klass;
  this->fields.photoCampaignState = 3;
  v6 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, _QWORD, _QWORD, void *))klass->vtable._4_CaptureServant.method)(
                                             this,
                                             (unsigned int)this->fields.photoSvtShotWidth,
                                             (unsigned int)this->fields.photoSvtShotHeight,
                                             klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_42124A0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42124A0 = 1;
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
  const MethodInfo *v11; // x1
  System_String_o *v12; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v14; // x20
  int max_length; // w9
  struct System_Int64_array *v16; // x0
  struct System_Int32_array *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x4
  __int64 v22; // x0

  if ( (byte_421249C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&long___TypeInfo, v4);
    sub_B0D8A4(&Method_MyRoomControl__OnClickSelectMultipleServant_b__322_0__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_15445/*"Wait_Action"*/, v7);
    sub_B0D8A4(&StringLiteral_7165/*"Help"*/, v8);
    byte_421249C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_17;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15445/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_17;
    v12 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v12, (System_String_o *)StringLiteral_7165/*"Help"*/, 0LL) )
      return;
  }
  if ( !MyRoomControl__IsEnableMultipleViewButton(this, v11) )
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
    sub_B0D97C(myRoomFsm);
  v14 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v14 >= max_length )
      break;
    if ( (unsigned int)v14 >= max_length )
    {
      v22 = sub_B0D9A8(myRoomFsm);
      sub_B0D948(v22, 0LL);
    }
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v14];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v14;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_17;
  }
  v16 = (struct System_Int64_array *)sub_B0D8BC(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v16;
  sub_B0D840(&this->fields.multipleServantUsrIds, v16);
  v17 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v17;
  sub_B0D840(&this->fields.multipleLimitCounts, v17);
  v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__322_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v20, 1, v21);
}


void __fastcall MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x0
  bool IsEnablePhotoCampaignButton; // w20
  _QWORD *v12; // x8
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x4

  if ( (byte_42124AE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v3);
    sub_B0D8A4(&Method_MyRoomControl__OnClickSelectPhotoCampaign_b__346_0__, v4);
    sub_B0D8A4(&StringLiteral_15445/*"Wait_Action"*/, v5);
    sub_B0D8A4(&StringLiteral_7165/*"Help"*/, v6);
    byte_42124AE = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15445/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_13;
    v10 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_7165/*"Help"*/, 0LL) )
      return;
  }
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, v9);
  v12 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 75) & 2) != 0 )
    v12 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v13 = (System_Reflection_MethodBase_o *)sub_B0D888(v12, v12[3]);
  if ( IsEnablePhotoCampaignButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    myRoomFsm = (PlayMakerFSM_o *)this->fields.photoCampaignStandFigureBack;
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      this->fields.photoCampaignServantUsrId = 0LL;
      this->fields.photoCampaignLimitCount = 0;
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectPhotoCampaign_b__346_0__, 0LL);
      MyRoomControl__DispDefaultMyRoom(this, 0, v16, 1, v17);
      return;
    }
LABEL_13:
    sub_B0D97C(myRoomFsm);
  }
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCollectionServantListViewManager_o *Instance; // x0
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 v6; // x11

  if ( (byte_42124AB & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_42124AB = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  dropObjectList = Instance->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_13;
  v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&dropObjectList->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v6 - 1] != MyRoomRootComponent_TypeInfo
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
    sub_B0D97C(Instance);
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
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4212471 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_10482/*"PLAY_VOICE"*/, v5);
    byte_4212471 = 1;
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
        MyRoomControl__setNormalFace_20299944(this, 1, v8);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10482/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_B0D97C(svtCtr);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_421249D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421249D = 1;
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
  UnityEngine_GameObject_c *klass; // x8
  __int64 v8; // x11
  __int64 v9; // x8
  MyRoomStateMaterial_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v14; // x2
  _BOOL4 v15; // w19

  if ( (byte_42124AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v3);
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_42124AA = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = Instance[1].klass;
  if ( !klass )
    goto LABEL_17;
  v8 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v8 )
    goto LABEL_17;
  if ( *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v8 - 8) != MyRoomRootComponent_TypeInfo )
    goto LABEL_17;
  v9 = *(_QWORD *)&klass->_1.this_arg.bits;
  if ( !v9 )
    goto LABEL_17;
  v10 = *(MyRoomStateMaterial_o **)(v9 + 856);
  v11 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B0D8AC(Method_MyRoomControl_OnClickValentineListChange__);
  v12 = (System_Reflection_MethodBase_o *)sub_B0D888(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v10
    || (MyRoomStateMaterial__ValentineListMomentChange(v10, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(Instance);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v14);
  v15 = this->fields.IsListActive;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__SaveIsListActive(v15, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Gesture_EventHandler_o *v6; // x20

  if ( (byte_421245D & 1) == 0 )
  {
    sub_B0D8A4(&Gesture_EventHandler_TypeInfo, method);
    sub_B0D8A4(&FingerGestures_TypeInfo, v4);
    sub_B0D8A4(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v5);
    byte_421245D = 1;
  }
  v6 = (Gesture_EventHandler_o *)sub_B0D974(Gesture_EventHandler_TypeInfo, method, v2);
  Gesture_EventHandler___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v6, 0LL);
}


void __fastcall MyRoomControl__OpenMultipleView(
        MyRoomControl_o *this,
        System_Int64_array *usrSvtIds,
        System_Int32_array *imageLimitCounts,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *MultipleServant; // x1

  this->fields.multipleServantUsrIds = usrSvtIds;
  sub_B0D840(&this->fields.multipleServantUsrIds, usrSvtIds);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_B0D840(&this->fields.multipleLimitCounts, imageLimitCounts);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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

  if ( (byte_42124A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, *(_QWORD *)&type);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v11);
    sub_B0D8A4(&Method_MyRoomControl_SetMaskCollider__, v12);
    byte_42124A7 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v14 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, *(_QWORD *)&type, usrSvtId);
  System_Action_bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !selectImageLimitDialog )
    sub_B0D97C(v15);
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
  MyRoomControl___c__DisplayClass309_0_o *v11; // x24
  MyRoomControl_o *v12; // x0
  const MethodInfo *v13; // x1
  CRIMoviePlayer_o *CriMoviePlayerObject; // x0
  CRIMoviePlayer_o **p_player; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  CRIMoviePlayer_o *player; // x23
  BgmManager_c *v19; // x0
  float masterVolume; // s8
  System_Action_o *v21; // x25

  if ( (byte_4212495 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, fileName);
    sub_B0D8A4(&BgmManager_TypeInfo, v8);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass309_0__PlayOpening_b__0__, v9);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass309_0_TypeInfo, v10);
    byte_4212495 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass309_0_o *)sub_B0D974(
                                                    MyRoomControl___c__DisplayClass309_0_TypeInfo,
                                                    fileName,
                                                    assetPath);
  MyRoomControl___c__DisplayClass309_0___ctor(v11, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_15;
  v11->fields.player = CriMoviePlayerObject;
  p_player = &v11->fields.player;
  sub_B0D840(&v11->fields, CriMoviePlayerObject);
  player = v11->fields.player;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4210BC3 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, v16);
    byte_4210BC3 = 1;
  }
  v19 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v19 = BgmManager_TypeInfo;
  }
  masterVolume = v19->static_fields->masterVolume;
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v21, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass309_0__PlayOpening_b__0__, 0LL);
  if ( !player
    || (CRIMoviePlayer__Initialize(player, fileName, assetPath, masterVolume, isCanSkip, 0LL, v21, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *p_player) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(CriMoviePlayerObject);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleaseAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  long double v3; // q0
  struct UITexture_o *photoCampaignScreenshot; // x0
  AssetData_o *photoCampaignAssetData; // x20
  struct AssetData_o **p_photoCampaignAssetData; // x19

  if ( (byte_42124BD & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_42124BD = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_B0D840(&this->fields.photoCampaignShutterEffect, 0LL);
  this->fields.photoCampaignCameraEffect = 0LL;
  *(__n128 *)&v3 = sub_B0D840(&this->fields.photoCampaignCameraEffect, 0LL);
  photoCampaignScreenshot = this->fields.photoCampaignScreenshot;
  if ( !photoCampaignScreenshot )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer, long double))photoCampaignScreenshot->klass->vtable._27_set_mainTexture.method)(
    photoCampaignScreenshot,
    0LL,
    photoCampaignScreenshot->klass->vtable._28_get_shader.methodPtr,
    v3);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    p_photoCampaignAssetData = &this->fields.photoCampaignAssetData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(photoCampaignAssetData, 0LL);
    *p_photoCampaignAssetData = 0LL;
    sub_B0D840(p_photoCampaignAssetData, 0LL);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  struct System_String_o **p_asstName; // x20

  if ( (byte_421245B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421245B = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = &this->fields.asstName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    *p_asstName = 0LL;
    sub_B0D840(p_asstName, 0LL);
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
  int v18; // s0
  UIWidget_o *helpButtonImg; // x20
  int v23; // s0
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v30; // w20
  System_String_o *ActiveStateName; // x0
  bool v32; // w0
  UIWidget_o *changeBtnImg; // x20
  int v34; // s0
  MyRoomControl_c *v38; // x0
  UIWidget_o *changeBGBtnImg; // x20
  int v40; // s0
  MyRoomControl_c *v44; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4212491 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_13104/*"State 5"*/, v5);
    byte_4212491 = 1;
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
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_39;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v18, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !helpButtonImg )
    goto LABEL_39;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v23, 0LL);
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
  *(_QWORD *)&v46.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v46.fields.fakeValue = mstInfoData;
  myRoomData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v46, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_39;
    v30 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v30 = (int)myRoomData;
  }
  myRoomData = (MyRoomData_o *)this->fields.myRoomFsm;
  if ( !myRoomData )
    goto LABEL_39;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)myRoomData, 0LL);
  v32 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13104/*"State 5"*/, 0LL);
  if ( v30 >= 1 && v32 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_39;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v34, 0LL);
    v38 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v38 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v38->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_39;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v40, 0LL);
  v44 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v44 = MyRoomControl_TypeInfo;
  }
  static_fields = v44->static_fields;
  myRoomData = (MyRoomData_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !myRoomData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomData, 0, 0LL),
        (myRoomData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_39:
    sub_B0D97C(myRoomData);
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
  bool v5; // w1

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  v5 = flag;
  this->fields.isBackBtnIgnore = v5;
  if ( !maskBoxCollider )
    sub_B0D97C(0LL);
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
  if ( (byte_421246B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_B0D8A4(&MyRoomControl_TypeInfo, v3);
    byte_421246B = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_19:
      sub_B0D97C(this);
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
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  }
  if ( isEnable )
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0LL);
  else
    TitleInfoControl__FrameOut((TitleInfoControl_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  MyRoomControl___c__DisplayClass274_0_o *v13; // x21
  ServantVoiceEntity_o *Instance; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **p_svtVoiceEnt; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x24
  __int64 figureSvtDispIdx; // x25
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x23
  const MethodInfo *v30; // x3
  System_Action_o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x2

  if ( (byte_4212484 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__0__, v9);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__1__, v10);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__2__, v11);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass274_0_TypeInfo, v12);
    byte_4212484 = 1;
  }
  v13 = (MyRoomControl___c__DisplayClass274_0_o *)sub_B0D974(
                                                    MyRoomControl___c__DisplayClass274_0_TypeInfo,
                                                    callback,
                                                    IsActSetMyRoomStandFigre);
  MyRoomControl___c__DisplayClass274_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v13->fields.__4__this = this;
  sub_B0D840(&v13->fields, this);
  v13->fields.callback = callback;
  sub_B0D840(&v13->fields.callback, callback);
  MyRoomControl__setupSvtImageIdList(this, v15);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v16);
  p_svtVoiceEnt = &v13->fields.svtVoiceEnt;
  v13->fields.svtVoiceEnt = SvtVoiceEnt;
  sub_B0D840(&v13->fields.svtVoiceEnt, SvtVoiceEnt);
  if ( v13->fields.svtVoiceEnt )
  {
    Instance = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v21);
      imageIdList = this->fields.imageIdList;
      if ( imageIdList )
      {
        figureSvtDispIdx = this->fields.figureSvtDispIdx;
        if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( *p_svtVoiceEnt )
        {
          MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                              *p_svtVoiceEnt,
                              imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                              0LL);
          this->fields.voiceList = MyRoomVoiceList;
          sub_B0D840(&this->fields.voiceList, MyRoomVoiceList);
          Instance = *p_svtVoiceEnt;
          if ( *p_svtVoiceEnt )
          {
            VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Instance, 0LL);
            this->fields.asstName = VoiceAssetName;
            sub_B0D840(&this->fields.asstName, VoiceAssetName);
            asstName = this->fields.asstName;
            v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
            System_Action___ctor(
              v29,
              (Il2CppObject *)v13,
              Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v29, v30);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_16:
    sub_B0D97C(Instance);
  }
  this->fields.isExistVoiceData = 0;
LABEL_13:
  v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__1__,
    0LL);
  v13->fields.action = v31;
  sub_B0D840(&v13->fields.action, v31);
  if ( IsActSetMyRoomStandFigre )
  {
    v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v34, v35);
  }
  else
  {
    ActionExtensions__Call(v13->fields.action, 0LL);
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
  if ( (byte_42124A2 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_42124A2 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_B0D97C(this);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
    }
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B0D97C(0LL);
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
  MyRoomControl___c__DisplayClass205_0_o *v12; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v14; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x23
  __int64 materialFigureSvtDispIdx; // x24
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t v20; // w23
  struct System_Collections_Generic_List_int__o *v21; // x22
  __int64 v22; // x23
  int32_t Id; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_Collections_Generic_List_int__o *v26; // x23
  __int64 v27; // x24
  int32_t v28; // w22
  StandFigureBack_o *standFigureBack; // x20
  int32_t v30; // w23
  System_Action_o *v31; // x24

  if ( (byte_421246A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__0__, v9);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass205_0_TypeInfo, v10);
    sub_B0D8A4(&UIStandFigureRender_TypeInfo, v11);
    byte_421246A = 1;
  }
  v12 = (MyRoomControl___c__DisplayClass205_0_o *)sub_B0D974(
                                                    MyRoomControl___c__DisplayClass205_0_TypeInfo,
                                                    *(_QWORD *)&servantId,
                                                    end_act);
  MyRoomControl___c__DisplayClass205_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_24;
  v12->fields.__4__this = this;
  sub_B0D840(&v12->fields, this);
  v12->fields.end_act = end_act;
  sub_B0D840(&v12->fields.end_act, end_act);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v14);
    MyRoomControl__SetChangeBtn(this, v16);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_24;
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  mStateMaterial = this->fields.mStateMaterial;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v20 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v20, 0LL);
  if ( !mStateMaterial )
    goto LABEL_24;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, LimitCountByImageLimitCostumeIn, 0LL);
  v21 = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !v21 )
    goto LABEL_24;
  v22 = this->fields.materialFigureSvtDispIdx;
  if ( v21->fields._size <= (unsigned int)v22 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  Id = ServantScriptMaster__getId(servantId, v21->fields._items->m_Items[v22 + 1], 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  v26 = this->fields.materialImageIdList;
  if ( !v26 )
    goto LABEL_24;
  v27 = this->fields.materialFigureSvtDispIdx;
  v28 = LimitCountByImageLimitCostumeIn;
  if ( v26->fields._size <= (unsigned int)v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  standFigureBack = this->fields.standFigureBack;
  v30 = v26->fields._items->m_Items[v27 + 1];
  v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_24:
    sub_B0D97C(LimitCountByImageLimitCostumeIn);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v30, 1, 0, v28, 10, v31, 0LL);
}


void __fastcall MyRoomControl__SetMultipleViewButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v7; // x1
  UIWidget_o *multipleViewButtonSprite; // x0
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
    || (v11.fields.r = r,
        v11.fields.g = g,
        v11.fields.b = b,
        v11.fields.a = a,
        UIWidget__set_color(multipleViewButtonSprite, v11, 0LL),
        (multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonLabel) == 0LL) )
  {
    sub_B0D97C(multipleViewButtonSprite);
  }
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UIWidget__set_color(multipleViewButtonSprite, v12, 0LL);
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
  MyRoomControl___c__DisplayClass203_0_o *v10; // x20
  __int64 _28088484; // x0
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 figureSvtDispIdx; // x23
  int32_t v15; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_int__o *v18; // x22
  __int64 v19; // x23
  int32_t v20; // w21
  struct System_Int32_array *items; // x8
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w19
  int32_t v24; // w23
  System_Action_o *v25; // x24

  if ( (byte_4212468 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__0__, v7);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass203_0_TypeInfo, v8);
    sub_B0D8A4(&UIStandFigureRender_TypeInfo, v9);
    byte_4212468 = 1;
  }
  v10 = (MyRoomControl___c__DisplayClass203_0_o *)sub_B0D974(
                                                    MyRoomControl___c__DisplayClass203_0_TypeInfo,
                                                    end_act,
                                                    method);
  MyRoomControl___c__DisplayClass203_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.__4__this = this;
  sub_B0D840(&v10->fields, this);
  v10->fields.end_act = end_act;
  sub_B0D840(&v10->fields.end_act, end_act);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, v10->fields.end_act, v12);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = TutorialFlag__Get_28088484(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _28088484 & 1;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_21;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  _28088484 = ServantScriptMaster__getId(
                this->fields.figureSvtId,
                imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_21;
  v15 = _28088484;
  MyRoomData__getUsrSvtData(this->fields.myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  _28088484 = UIStandFigureRender__GetForm(v15, 1, -1, 0LL);
  v18 = this->fields.imageIdList;
  if ( !v18 )
    goto LABEL_21;
  v19 = this->fields.figureSvtDispIdx;
  v20 = _28088484;
  if ( v18->fields._size <= (unsigned int)v19 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  items = v18->fields._items;
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v24 = items->m_Items[v19 + 1];
  v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_21:
    sub_B0D97C(_28088484);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v24, 1, 0, v20, 10, v25, 0LL);
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
  MyRoomControl___c__DisplayClass204_0_o *v9; // x20
  __int64 v10; // x0
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  int32_t materialServantId; // w21
  int32_t v14; // w22
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4212469 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass204_0__SetMySvtFigure_b__0__, v7);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass204_0_TypeInfo, v8);
    byte_4212469 = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass204_0_o *)sub_B0D974(
                                                   MyRoomControl___c__DisplayClass204_0_TypeInfo,
                                                   end_act,
                                                   method);
  MyRoomControl___c__DisplayClass204_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.__4__this = this,
        sub_B0D840(&v9->fields, this),
        v9->fields.end_act = end_act,
        sub_B0D840(&v9->fields.end_act, end_act),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_B0D97C(v10);
  }
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  materialServantId = this->fields.materialServantId;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v14 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, v14, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v15);
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)v9, Method_MyRoomControl___c__DisplayClass204_0__SetMySvtFigure_b__0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v18, v19);
}


void __fastcall MyRoomControl__SetPhotoCampaignButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v7; // x1
  UIWidget_o *photoCampaignButtonSprite; // x0
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
    || (v11.fields.r = r,
        v11.fields.g = g,
        v11.fields.b = b,
        v11.fields.a = a,
        UIWidget__set_color(photoCampaignButtonSprite, v11, 0LL),
        (photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonLabel) == 0LL) )
  {
    sub_B0D97C(photoCampaignButtonSprite);
  }
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UIWidget__set_color(photoCampaignButtonSprite, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4212473 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4212473 = 1;
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
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v12 = voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v12)
      || (v13 = voicePlayEffect, UITweener__set_tweenFactor((UITweener_o *)v12, 0.0, 0LL), !v13) )
    {
LABEL_20:
      sub_B0D97C(voicePlayEffect);
    }
    UITweener__set_tweenFactor((UITweener_o *)v13, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      HIDWORD(v12[1].klass) = 1;
      HIDWORD(v13[1].klass) = 1;
    }
    else
    {
      HIDWORD(v12[1].klass) = 0;
      HIDWORD(v13[1].klass) = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_45237584((UITweener_o *)v12, 1, 0LL);
    UITweener__Play_45237584((UITweener_o *)v13, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  this->fields.sceneJumpInfo = info;
  sub_B0D840(&this->fields.sceneJumpInfo, info);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v4);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B0D97C(this);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_4212460 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_4212460 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4212454 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4212454 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (DataManager_o *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, v5),
        !this->fields.frontObjectManager) )
  {
    sub_B0D97C(Instance);
  }
  v6 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v6 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v6, 0LL);
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
  int32_t ServantImageLimitSealAfter; // w21
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v16; // x2
  DataManager_o *v17; // x22
  int32_t v18; // w23
  int32_t v19; // w26
  int32_t ImageLimitCount; // w24
  int32_t v21; // w24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v23; // x20
  unsigned __int64 v24; // x23
  int32_t v25; // w22
  __int64 v26; // x0

  if ( (byte_4212456 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4212456 = 1;
  }
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v17 = Instance;
  if ( ((__int64)Instance->fields.saveDataMapList & 0x80000000) == 0 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v18, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    (ServantLimitImageMaster_o *)Instance,
                                    servantId,
                                    ImageLimitCount,
                                    0LL);
      if ( !this->fields.materialImageIdList )
        goto LABEL_40;
      v21 = (int)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    this->fields.materialImageIdList,
                                    (int32_t)Instance,
                                    (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v21,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v21 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v19;
        ++v19;
      }
      if ( ++v18 > SLODWORD(v17->fields.saveDataMapList) )
        goto LABEL_29;
    }
  }
  v19 = 0;
LABEL_29:
  Instance = (DataManager_o *)MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)Instance, servantId, v16);
  if ( !Instance )
LABEL_40:
    sub_B0D97C(Instance);
  datalist = Instance->fields.datalist;
  v23 = Instance;
  if ( (int)datalist >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)datalist )
      {
        v26 = sub_B0D9A8(Instance);
        sub_B0D948(v26, 0LL);
      }
      v25 = *((_DWORD *)&v23->fields.lookup + v24);
      if ( v25 >= 1 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v25,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v25 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v19;
        ++v19;
      }
      LODWORD(datalist) = v23->fields.datalist;
      ++v24;
    }
    while ( (__int64)v24 < (int)datalist );
  }
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Gesture_EventHandler_o *v6; // x20

  if ( (byte_421245C & 1) == 0 )
  {
    sub_B0D8A4(&Gesture_EventHandler_TypeInfo, method);
    sub_B0D8A4(&FingerGestures_TypeInfo, v4);
    sub_B0D8A4(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v5);
    byte_421245C = 1;
  }
  v6 = (Gesture_EventHandler_o *)sub_B0D974(Gesture_EventHandler_TypeInfo, method, v2);
  Gesture_EventHandler___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v6, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__StartCameraEffect_d__352_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_42124B4 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__StartCameraEffect_d__352_TypeInfo, method);
    byte_42124B4 = 1;
  }
  v4 = (MyRoomControl__StartCameraEffect_d__352_o *)sub_B0D974(
                                                      MyRoomControl__StartCameraEffect_d__352_TypeInfo,
                                                      method,
                                                      v2);
  MyRoomControl__StartCameraEffect_d__352___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_421245E & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_MyRoomControl__update__, method);
    byte_421245E = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_MyRoomControl__update__);
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
  const MethodInfo *v9; // x1

  if ( (byte_42124A9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_42124A9 = 1;
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
      sub_B0D97C(RestTime6);
    UILabel__set_text(multipleViewButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v7 > this->fields.multipleViewFinishedTime )
    {
      this->fields.multipleViewFinishedTime = -1LL;
      MyRoomControl__SetMultipleViewButtonColor(this, v9);
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
  const MethodInfo *v9; // x1

  if ( (byte_42124BC & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_42124BC = 1;
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
      sub_B0D97C(RestTime6);
    UILabel__set_text(photoCampaignButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v7 > this->fields.photoCampaignFinishedTime )
    {
      this->fields.photoCampaignFinishedTime = -1LL;
      MyRoomControl__SetPhotoCampaignButtonColor(this, v9);
    }
  }
}


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
    sub_B0D97C(MaterialEventLogItemListPanel);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__336_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_42124C6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__CloseMultipleView_b__336_1__, v4);
    byte_42124C6 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__336_1__, 0LL);
  if ( !multipleViewComponent )
    sub_B0D97C(v7);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v6, v8);
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
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 40, 0, 0LL);
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
      v9 = sub_B0D9A8(titleInfo);
      sub_B0D948(v9, 0LL);
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
    sub_B0D97C(titleInfo);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__359_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42124C7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_1__, v4);
    byte_42124C7 = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_B0D97C(v7);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v6, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__359_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_B0D97C(titleInfo);
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
    sub_B0D97C(this);
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
  MyRoomControl_o *v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  CommonUI_o *v13; // x19
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__281_1; // x20
  Il2CppObject *v18; // x21
  struct MyRoomControl___c_StaticFields *v19; // x0

  if ( (byte_42124C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_MyRoomControl___c__GoToTitle_b__281_1__, v6);
    sub_B0D8A4(&MyRoomControl___c_TypeInfo, v7);
    byte_42124C5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v9, v10);
    v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
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
      v18 = (Il2CppObject *)static_fields->__9;
      _9__281_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
      System_Action___ctor(_9__281_1, v18, Method_MyRoomControl___c__GoToTitle_b__281_1__, 0LL);
      v19 = MyRoomControl___c_TypeInfo->static_fields;
      v19->__9__281_1 = _9__281_1;
      sub_B0D840(&v19->__9__281_1, _9__281_1);
    }
    if ( v13 )
    {
      CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, _9__281_1, 0LL);
      return;
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__250_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B0D97C(this);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  StandFigureBack_o *SvtStandFigure; // x0
  unsigned int localPosition; // s0
  float v13; // s8
  float v14; // s1
  float v15; // s9
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42124C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__LoadServantForm_b__228_1__, v4);
    sub_B0D8A4(&StringLiteral_8584/*"LoadServantFormEnd"*/, v5);
    byte_42124C3 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__228_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v10, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(SvtStandFigure);
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
  v13 = *(float *)&localPosition;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)SvtStandFigure,
                                           0LL);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v15 = v14;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0LL);
  v17.fields.x = -v13;
  v17.fields.y = v15;
  MyRoomControl__moveControl(this, this->fields.svtObj, v17, (System_String_o *)StringLiteral_8584/*"LoadServantFormEnd"*/, v16);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__322_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_B0D97C(0LL);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OnClickSelectPhotoCampaign_b__346_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x0

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_B0D97C(0LL);
  PhotoCampaignComponent__Open(photoCampaignComponent, 1, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__273_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42124C4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3115/*"CLOSE_MENU"*/, method);
    byte_42124C4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3115/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__211_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42124C2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7101/*"HIDE_END"*/, method);
    byte_42124C2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7101/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__248_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B0D97C(this);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__202_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v5; // x8

  if ( (byte_42124C1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8428/*"LOAD_END"*/, method);
    sub_B0D8A4(&StringLiteral_8429/*"LOAD_END_TO_HELP"*/, v3);
    byte_42124C1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  if ( this->fields.type == 6 )
    v5 = &StringLiteral_8429/*"LOAD_END_TO_HELP"*/;
  else
    v5 = &StringLiteral_8428/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__184_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42124C0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, result);
    byte_42124C0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
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
  if ( (byte_421247C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, result);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    this = (MyRoomControl_o *)sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v6);
    byte_421247C = 1;
  }
  if ( !result )
    goto LABEL_13;
  this = (MyRoomControl_o *)System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL);
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
          v7 = &StringLiteral_11104/*"REQUEST_NG"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_B0D97C(this);
  }
  this = (MyRoomControl_o *)v4->fields.myRoomData;
  if ( !this )
    goto LABEL_13;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = (MyRoomControl_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_13;
  v7 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4212488 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_4212488 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_B0D97C(0LL);
    MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
  }
}


void __fastcall MyRoomControl__closeMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Collider_o *maskBoxCollider; // x0

  MyRoomControl__SetState(this, 1, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_B0D97C(0LL);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *svtCtr; // x0

  svtCtr = (StandFigureBack_o *)this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.baseCallbackFunc = 0LL,
        sub_B0D840(&svtCtr->fields.baseCallbackFunc, 0LL),
        (svtCtr = this->fields.standFigureBack) == 0LL) )
  {
    sub_B0D97C(svtCtr);
  }
  StandFigureBack__DestroyFigure(svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_421247A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11603/*"SAVE_END"*/, method);
    byte_421247A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11603/*"SAVE_END"*/, 0LL);
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

  if ( (byte_4212458 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4212458 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  v10 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, v9);
  if ( v10 )
  {
    v11 = v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  v11,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.age;
LABEL_15:
      sub_B0D97C(Instance);
    }
  }
  return DEFAULT_BGM_NAME;
}


System_String_o *__fastcall MyRoomControl__getMyRoomBgm(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  System_String_o *v4; // x0
  SoundPlayerComponent_o *soundPlayerComp; // x8
  System_String_o *v6; // x19
  System_String_o *PlaySoundName; // x20

  if ( (byte_4212459 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    byte_4212459 = 1;
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
    sub_B0D97C(v4);
  v6 = v4;
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
    return v6;
  else
    return PlaySoundName;
}


UIStandFigureR_o *__fastcall MyRoomControl__getSvtStandFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B0D97C(0LL);
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
  MyRoomData_o *myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t size; // w10
  int32_t v17; // w8
  struct System_Collections_Generic_List_int__o *v19; // x8
  UIWidget_o *changeBtnImg; // x20
  int v21; // s0
  MyRoomControl_c *v25; // x0
  int v26; // w8
  int v27; // s0
  MyRoomControl_c *v31; // x0
  struct System_Collections_Generic_List_int__o *v32; // x21
  __int64 figureSvtDispIdx; // x19
  int32_t v34; // w20
  int32_t LimitCountByImageLimit; // w19
  StandFigureBack_c *v36; // x0

  if ( (byte_421246C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StandFigureBack_TypeInfo, v10);
    byte_421246C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B0D840(&this->fields.usrData, SelfUserGame);
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
      v17 = this->fields.figureSvtDispIdx + 1;
      if ( v17 >= size )
        v17 = 0;
      else
        this->fields.figureSvtDispIdx = v17;
      this->fields.figureSvtDispIdx = v17;
    }
    else
    {
      v19 = this->fields.imageIdList;
      if ( !v19 )
        goto LABEL_41;
      changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
      if ( v19->fields._size <= 1 )
      {
        *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_gray(0LL);
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
        v26 = this->fields.buttonFlag & ~v31->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
        if ( !changeBtnImg )
          goto LABEL_41;
        UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v21, 0LL);
        v25 = MyRoomControl_TypeInfo;
        if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v25 = MyRoomControl_TypeInfo;
        }
        v26 = this->fields.buttonFlag | v25->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v26;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  v32 = this->fields.imageIdList;
  if ( !v32 )
    goto LABEL_41;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  v34 = (int)myRoomData;
  if ( v32->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  LimitCountByImageLimit = v32->fields._items->m_Items[figureSvtDispIdx + 1];
  v36 = StandFigureBack_TypeInfo;
  if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v36 = StandFigureBack_TypeInfo;
  }
  if ( LimitCountByImageLimit < v36->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(LimitCountByImageLimit, 0LL);
  }
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData
    || (myRoomData = (MyRoomData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)myRoomData,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_41:
    sub_B0D97C(myRoomData);
  }
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v34, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4212475 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4212475 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_B0D97C(0LL);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL);
}


void __fastcall MyRoomControl__helpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_421248B & 1) == 0 )
  {
    sub_B0D8A4(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    byte_421248B = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(helpListViewManager);
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v11,
                                                         (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_B0D97C(0LL);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4212483 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__hideFavoriteSvt_b__273_0__, v4);
    byte_4212483 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__273_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v5, 1, v6);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_B0D97C(0LL);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_B0D97C(0LL);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_B0D97C(0LL);
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
    sub_B0D97C(mstPfComp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B0D97C(0LL);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4212485 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3115/*"CLOSE_MENU"*/, method);
    byte_4212485 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3115/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4212486 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212486 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_B0D97C(soundPlayerComp);
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
  int v7; // s0
  const MethodInfo *v11; // x1
  MyRoomControl_c *v12; // x0
  StandFigureBack_o *standFigureBack; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_421246F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__hideSvtFigure_b__211_0__, v3);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v4);
    byte_421246F = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
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
  this->fields.buttonFlag &= ~v12->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v11);
  standFigureBack = this->fields.standFigureBack;
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__211_0__, 0LL);
  if ( !standFigureBack )
LABEL_9:
    sub_B0D97C(v6);
  StandFigureBack__Fadeout(standFigureBack, v16, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_B0D97C(0LL);
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
    sub_B0D97C(usrItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__initMaterial_d__248_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4212480 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__initMaterial_d__248_TypeInfo, method);
    byte_4212480 = 1;
  }
  v4 = (MyRoomControl__initMaterial_d__248_o *)sub_B0D974(MyRoomControl__initMaterial_d__248_TypeInfo, method, v2);
  MyRoomControl__initMaterial_d__248___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  struct CStateManager_MyRoomControl__o *mFSM; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  MyRoomControl_StateEtc_o *v30; // x21
  struct EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMaster_o **p_eventMaster; // x20
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  struct MyRoomControl___c_StaticFields *standFigureCollectList; // x8
  System_Action_o *_9__179_0; // x22
  Il2CppObject *v40; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  _BOOL8 v42; // x0
  const MethodInfo *v43; // x4
  MyRoomControl_o *v44; // x0
  const MethodInfo *v45; // x4
  __int64 v46; // x1
  MyRoomParamsManager_c *v47; // x0
  struct MyRoomParamsManager_StaticFields *v48; // x8
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_o *v55; // x22
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  float x; // w8
  float y; // w9
  float z; // w10
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v64; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v68; // x21
  int max_length; // w9
  int basePanel; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  EventEntity_array *EnableEntityList; // x20
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v79; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x20
  UILabel_o *photoCampaignButtonLabel; // x21
  const MethodInfo *v82; // x2
  struct EventEntity_o *photoCampaignEntity; // x8
  const MethodInfo *v84; // x1
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x1
  __int64 v87; // x0
  UnityEngine_Vector3_o v88; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212453 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CStateManager_MyRoomControl___ctor__, v4);
    sub_B0D8A4(&Method_CStateManager_MyRoomControl__add__, v5);
    sub_B0D8A4(&CStateManager_MyRoomControl__TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_MyRoomControl_LoadScriptFileListAssetData__, v12);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&MyRoomControl_StateEtc_TypeInfo, v16);
    sub_B0D8A4(&Method_MyRoomControl___c__initMyRoom_b__179_0__, v17);
    sub_B0D8A4(&MyRoomControl___c_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_10461/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v19);
    sub_B0D8A4(&StringLiteral_17013/*"btn_bg_12"*/, v20);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v21);
    sub_B0D8A4(&StringLiteral_8879/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v22);
    byte_4212453 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v88.fields.z = 0.0;
  *(_QWORD *)&v88.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( !this->fields.mFSM )
  {
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_MyRoomControl__TypeInfo,
                                                                v24,
                                                                v25);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v26,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2AAF784 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v26;
    sub_B0D840(&this->fields.mFSM, v26);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_2AAF850 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = this->fields.mFSM;
    v30 = (MyRoomControl_StateEtc_o *)sub_B0D974(MyRoomControl_StateEtc_TypeInfo, v28, v29);
    MyRoomControl_StateEtc___ctor(v30, 0LL);
    if ( !mFSM )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      1,
      (IState_T__o *)v30,
      (const MethodInfo_2AAF850 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v25);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (struct EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)standFigureBack,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = MasterData_WarQuestSelectionMaster;
  sub_B0D840(&this->fields.eventMaster, MasterData_WarQuestSelectionMaster);
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
  MyRoomControl__setUserStInfoView(this, v33);
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
    v40 = (Il2CppObject *)standFigureCollectList->__9;
    _9__179_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
    System_Action___ctor(_9__179_0, v40, Method_MyRoomControl___c__initMyRoom_b__179_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__179_0 = _9__179_0;
    sub_B0D840(&static_fields->__9__179_0, _9__179_0);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_59;
  v42 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, _9__179_0, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v42,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v43);
  MyRoomControl__setupSortWindowUIMoveData(v44, this->fields.sortWindowObj, &v, &v88, v45);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_42124C9 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v46);
    byte_42124C9 = 1;
  }
  v47 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v47 = MyRoomParamsManager_TypeInfo;
  }
  v48 = v47->static_fields;
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  this->fields.IsListActive = v48->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_59;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v49);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v50);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v53, v54);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_59;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v55, v56);
  MyRoomControl__setupSvtImageIdList(this, v57);
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
    v93 = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    x = v93.fields.x;
    y = v93.fields.y;
    z = v93.fields.z;
    this->fields.voicePlayButtonDefaultPos = v93;
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  this->fields.voicePlayBtnInitPos.fields.x = x;
  this->fields.voicePlayBtnInitPos.fields.y = y;
  this->fields.voicePlayBtnInitPos.fields.z = z;
  v94 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v94;
  v95 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v95;
  v96 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v96;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v64);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17013/*"btn_bg_12"*/, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_59;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.typeMetadataHandle)(
    standFigureBack,
    standFigureBack->klass[2]._1.interopData);
  v97 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v97;
  if ( !multipleStandFigureBacks )
    goto LABEL_59;
  v68 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v68 >= max_length )
      break;
    if ( (unsigned int)v68 >= max_length )
      goto LABEL_96;
    standFigureBack = multipleStandFigureBacks->m_Items[v68];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v68;
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
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
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
    sub_B0D97C(standFigureBack);
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
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8879/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_59;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_59;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v73);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v74);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v75);
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
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_59;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EnableEntityList,
                                           0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
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
      v87 = sub_B0D9A8(standFigureBack);
      sub_B0D948(v87, 0LL);
    }
    v79 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v79;
    sub_B0D840(&this->fields.photoCampaignEntity, v79);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10461/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_59;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_59;
    MyRoomControl__LoadPhotoCampaignAssets(this, (*p_photoCampaignEntity)->fields.id, v82);
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
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v84);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v85);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v86);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0

  z = movePos.fields.z;
  movePos.fields.z = movePos.fields.y;
  movePos.fields.y = movePos.fields.x;
  v8 = TweenPosition__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&movePos.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v8 )
    sub_B0D97C(gameObject);
  v8->fields.eventReceiver = gameObject;
  sub_B0D840(&v8->fields.eventReceiver, gameObject);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_B0D840(&v8->fields.callWhenFinished, callwhenFinished);
  }
  v8->fields.style = 3;
}


void __fastcall MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v4; // x1
  MyRoomControl_c *v5; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4212489 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4212489 = 1;
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
        sub_B0D97C(0LL);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  MyRoomHelpListViewManager_CallbackFunc2_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_421248A & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl_helpClose__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421248A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_B0D974(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, v6, v7);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_B0D97C(v9);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_B0D97C(0LL);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B0D97C(0LL);
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
  int32_t v10; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v12; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v14; // w20
  TopMyRoomRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_Int32_array_array *v16; // x22
  int fsm; // w8
  System_Int32_array *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4212478 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_B0D8A4(&int_____TypeInfo, v3);
    sub_B0D8A4(&int___TypeInfo, v4);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4212478 = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v10 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_23;
    v12 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v12, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v10, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_23;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v10, v12, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v14 = FlagRequestNumber;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TopMyRoomRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    0LL,
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v16 = (System_Int32_array_array *)sub_B0D8BC(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_B0D8BC(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          fsm = (int)svtCtr->fields.fsm;
          v18 = (System_Int32_array *)svtCtr;
          if ( !fsm )
            goto LABEL_24;
          LODWORD(svtCtr->fields.player) = v10;
          if ( fsm == 1 )
            goto LABEL_24;
          HIDWORD(svtCtr->fields.player) = v14;
          if ( !v16 )
            goto LABEL_23;
          svtCtr = (MyRoomSvtControl_o *)sub_B0D964(svtCtr, v16->obj.klass->_1.element_class);
          if ( !svtCtr )
          {
            v20 = sub_B0D99C();
            sub_B0D948(v20, 0LL);
          }
          if ( !v16->max_length )
          {
LABEL_24:
            v19 = sub_B0D9A8(svtCtr);
            sub_B0D948(v19, 0LL);
          }
          v16->m_Items[0] = v18;
          sub_B0D840(v16->m_Items, v18);
          if ( Request_WarBoardWallAttackRequest )
          {
            TopMyRoomRequest__beginRequest(Request_WarBoardWallAttackRequest, v16, 0LL);
            return;
          }
        }
LABEL_23:
        sub_B0D97C(svtCtr);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  SoundPlayerComponent_o *soundPlayerComp; // x0
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  int32_t materialServantId; // w20
  int32_t v8; // w21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4212463 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4212463 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, v8, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  soundPlayerComp = v2->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    goto LABEL_19;
  SoundPlayerComponent__DestroyMenu(soundPlayerComp, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v2, v9);
  MyRoomControl__destroySvtFigure(v2, v10);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.backGroundManager;
  if ( !soundPlayerComp )
    goto LABEL_19;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)soundPlayerComp, v11);
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
    sub_B0D97C(soundPlayerComp);
  }
  ((void (__fastcall *)(SoundPlayerComponent_o *, Il2CppClass *, float))soundPlayerComp->klass[1]._1.castClass)(
    soundPlayerComp,
    soundPlayerComp->klass[1]._1.declaringType,
    1.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212479 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl_endReflectionGameOption__, v4);
    byte_4212479 = 1;
  }
  optionComp = this->fields.optionComp;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_B0D97C(v7);
  SetGameOptionComponent__reflectionGameOption(optionComp, v6, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *SelfUserGame; // x0
  int32_t v8; // w19
  System_String_o *Value; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x20

  if ( (byte_421247B & 1) == 0 )
  {
    sub_B0D8A4(&Method_MyRoomControl_callbackChangeName__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3927/*"ChangeUserName"*/, v6);
    byte_421247B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  if ( !this->fields.myRoomFsm )
    goto LABEL_14;
  v8 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_3927/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
  NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v12,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_WarBoardWallAttackRequest )
LABEL_14:
    sub_B0D97C(SelfUserGame);
  UserNameChangeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    Value,
    v8,
    *((System_String_o **)SelfUserGame + 29),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_B0D97C(0LL);
  MstProfileComponent__showMstProfile(mstPfComp, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomControl___c__DisplayClass212_0_o *v9; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  const MethodInfo *v11; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **p_svtVoiceEnt; // x21
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 figureSvtDispIdx; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_4212470 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isReset);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass212_0__resetSvtVoiceData_b__0__, v6);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass212_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8428/*"LOAD_END"*/, v8);
    byte_4212470 = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass212_0_o *)sub_B0D974(
                                                   MyRoomControl___c__DisplayClass212_0_TypeInfo,
                                                   isReset,
                                                   method);
  MyRoomControl___c__DisplayClass212_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields, this);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8428/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B0D97C(myRoomFsm);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v11);
  v9->fields.svtVoiceEnt = SvtVoiceEnt;
  p_svtVoiceEnt = &v9->fields.svtVoiceEnt;
  sub_B0D840(&v9->fields.svtVoiceEnt, SvtVoiceEnt);
  if ( !v9->fields.svtVoiceEnt )
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                      *p_svtVoiceEnt,
                      imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                      0LL);
  this->fields.voiceList = MyRoomVoiceList;
  sub_B0D840(&this->fields.voiceList, MyRoomVoiceList);
  myRoomFsm = (PlayMakerFSM_o *)*p_svtVoiceEnt;
  if ( !*p_svtVoiceEnt )
    goto LABEL_15;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_B0D840(&this->fields.asstName, VoiceAssetName);
  asstName = this->fields.asstName;
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass212_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v21, v22);
}


void __fastcall MyRoomControl__setContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 8;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_B0D97C(titleInfo);
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

  if ( (byte_4212492 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212492 = 1;
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
        sub_B0D97C(voicePlayBtn);
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
    sub_B0D97C(moveBtnObj);
  }
  UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0LL);
}


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
    sub_B0D97C(titleBtnCollider);
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
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 5;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_B0D97C(titleInfo);
  }
  SetGameOptionComponent__showGameOption((SetGameOptionComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v6; // x3

  if ( (byte_421247E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, isPlayDecideSe);
    byte_421247E = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v6);
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
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_B0D97C(titleInfo);
  }
  MaterialCollectionComponent__showMenu((MaterialCollectionComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_B0D97C(titleInfo);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 55, 0, 0LL);
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
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B0D97C(this);
  mStateMaterial->fields.isServantMenuTop = 0;
  MyRoomControl__SetState(this, 0, v2);
}


void __fastcall MyRoomControl__setMaterialUIMove(MyRoomControl_o *this, bool isDisp, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x0
  const MethodInfo *v7; // x2
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
    sub_B0D97C(v6);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &moveHidePos;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v7);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4212467 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl__setMySvtFigure_b__202_0__, v4);
    byte_4212467 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__202_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v5, v6);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_20299944(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_20299944(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
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
  if ( (byte_4212474 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    this = (MyRoomControl_o *)sub_B0D8A4(&UIStandFigureRender_TypeInfo, v6);
    byte_4212474 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
  }
}


void __fastcall MyRoomControl__setNoticeInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 6;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_B0D97C(titleInfo);
  }
  NoticeInfoComponent__setNoticeInfo((NoticeInfoComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mstpfObj; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  mstpfObj = this->fields.mstpfObj;
  if ( !mstpfObj
    || (UnityEngine_GameObject__SetActive(mstpfObj, 1, 0LL),
        MyRoomControl__stopSvtVoice(this, v4),
        mstpfObj = (UnityEngine_GameObject_o *)this->fields.titleInfo,
        this->fields.type = 4,
        !mstpfObj)
    || (TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_B0D97C(mstpfObj);
  }
  MstProfileComponent__showMstProfile((MstProfileComponent_o *)mstpfObj, v6);
}


void __fastcall MyRoomControl__setSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SerialCodeComponent_o *serialCodeComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 7;
  MyRoomControl__setSvtFigureActive(this, 7, 1, v3);
  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B0D97C(0LL);
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
  StandFigureBack_o *standFigureBack; // x0
  int v7; // w20
  bool isEnableMultipleView; // w1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  bool isEnablePhotoCampaign; // w1
  const MethodInfo *v12; // x1

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
      v7 = 0;
      isEnableMultipleView = 0;
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
      v7 = 1;
      isEnableMultipleView = this->fields.isEnableMultipleView;
LABEL_26:
      standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton;
      if ( !standFigureBack )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(this, v10);
      standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignButton;
      if ( v7 )
      {
        isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
        if ( !standFigureBack )
LABEL_33:
          sub_B0D97C(standFigureBack);
      }
      else
      {
        isEnablePhotoCampaign = 0;
        if ( !standFigureBack )
          goto LABEL_33;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(this, v12);
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
    sub_B0D97C(0LL);
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
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__200_0; // x21
  Il2CppObject *v30; // x22
  struct MyRoomControl___c_StaticFields *v31; // x0

  if ( (byte_4212465 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B0D8A4(&Method_MyRoomControl_EndLoad__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_MyRoomControl___c__setSvtVoiceData_b__200_0__, v8);
    sub_B0D8A4(&MyRoomControl___c_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_8428/*"LOAD_END"*/, v10);
    byte_4212465 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8428/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_27:
    sub_B0D97C(myRoomFsm);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                        (ServantVoiceEntity_o *)myRoomFsm,
                        imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                        0LL);
    this->fields.voiceList = MyRoomVoiceList;
    sub_B0D840(&this->fields.voiceList, MyRoomVoiceList);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v14, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B0D840(&this->fields.asstName, VoiceAssetName);
    asstName = this->fields.asstName;
    v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v20, v21);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v26 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
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
        v30 = (Il2CppObject *)static_fields->__9;
        _9__200_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
        System_Action___ctor(_9__200_0, v30, Method_MyRoomControl___c__setSvtVoiceData_b__200_0__, 0LL);
        v31 = MyRoomControl___c_TypeInfo->static_fields;
        v31->__9__200_0 = _9__200_0;
        sub_B0D840(&v31->__9__200_0, _9__200_0);
      }
      if ( !Instance )
        goto LABEL_27;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__200_0, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_27;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8428/*"LOAD_END"*/, 0LL);
    this->fields.isVoicePlaying = 0;
  }
}


void __fastcall MyRoomControl__setUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_B0D97C(titleInfo);
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

  if ( (byte_421247D & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl_TypeInfo, method);
    byte_421247D = 1;
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
    sub_B0D97C(multipleViewButton);
  }
  TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v7);
}


void __fastcall MyRoomControl__setUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 3;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_B0D97C(titleInfo);
  }
  UserItemListViewManager__SetMode_22599824((UserItemListViewManager_o *)titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl__setupMaterialUIMoveData(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o **moveTarget,
        UnityEngine_Vector3_o *moveShowPos,
        UnityEngine_Vector3_o *moveHidePos,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *materialObj; // x8
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  materialObj = this->fields.materialObj;
  *moveTarget = materialObj;
  sub_B0D840(moveTarget, materialObj);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_B0D97C(transform);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x8
  System_Collections_Generic_List_int__o *imageIdList; // x0
  UserServantEntity_o *v15; // x20
  void *monitor; // x21
  System_Collections_Generic_List_int__c *klass; // x22
  int32_t v18; // w21
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  int32_t v21; // w22
  __int64 v22; // x22
  __int64 v23; // x23
  __int64 v24; // x21
  __int64 v25; // x22
  MyRoomControl_o *v26; // x0
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  System_Collections_Generic_List_int__o *v29; // x21
  unsigned __int64 v30; // x22
  int32_t v31; // w1
  int32_t FigureImageLimitCount; // w20
  struct System_Collections_Generic_List_int__o *v33; // x22
  __int64 v34; // x21
  int size; // w8
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4212455 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4212455 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B0D840(&this->fields.usrData, SelfUserGame);
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
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  imageIdList = (System_Collections_Generic_List_int__o *)this->fields.myRoomData;
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)imageIdList,
                                                            this->fields.fvrUsrSvtId,
                                                            0LL);
  if ( !imageIdList )
    goto LABEL_48;
  v15 = (UserServantEntity_o *)imageIdList;
  klass = imageIdList[2].klass;
  monitor = imageIdList[2].monitor;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = klass;
  *(_QWORD *)&v37.fields.fakeValue = monitor;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v37, 0LL);
  v18 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine(v15, 0LL);
  while ( 1 )
  {
    v23 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v23;
    *(_QWORD *)&v38.fields.fakeValue = v22;
    if ( v18 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v38, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v18, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)imageIdList,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                              (ServantLimitImageMaster_o *)imageIdList,
                                                              this->fields.figureSvtId,
                                                              ImageLimitCount,
                                                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v21 = (int)imageIdList;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)imageIdList,
            (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        imageIdList,
        v21,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    ++v18;
  }
  if ( UserServantEntity__IsHeroine(v15, 0LL) || UserServantEntity__isLimitCountMax(v15, 0LL) )
  {
    v25 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v25;
    *(_QWORD *)&v39.fields.fakeValue = v24;
    v26 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v39, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)MyRoomControl__GetSortedCostumeIds(v26, (int32_t)v26, v27);
    if ( imageIdList )
    {
      v28 = *(_QWORD *)&imageIdList->fields._size;
      v29 = imageIdList;
      if ( (int)v28 >= 1 )
      {
        v30 = 0LL;
        do
        {
          if ( v30 >= (unsigned int)v28 )
          {
            v36 = sub_B0D9A8(imageIdList);
            sub_B0D948(v36, 0LL);
          }
          v31 = *((_DWORD *)&v29->fields._syncRoot + v30);
          if ( v31 >= 1 )
          {
            imageIdList = this->fields.imageIdList;
            if ( !imageIdList )
              goto LABEL_48;
            System_Collections_Generic_List_int___Add(
              imageIdList,
              v31,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v28) = v29->fields._size;
          ++v30;
        }
        while ( (__int64)v30 < (int)v28 );
      }
      goto LABEL_39;
    }
LABEL_48:
    sub_B0D97C(imageIdList);
  }
LABEL_39:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v15, 0, 0LL);
  imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)imageIdList,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)imageIdList,
                                                            this->fields.figureSvtId,
                                                            FigureImageLimitCount,
                                                            0LL);
  v33 = this->fields.imageIdList;
  if ( !v33 )
    goto LABEL_48;
  v34 = 0LL;
  while ( 1 )
  {
    size = v33->fields._size;
    if ( (int)v34 >= size )
      break;
    if ( size <= (unsigned int)v34 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( v33->fields._items->m_Items[v34 + 1] == (_DWORD)imageIdList )
    {
      this->fields.figureSvtDispIdx = v34;
      return;
    }
    v33 = this->fields.imageIdList;
    ++v34;
    if ( !v33 )
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
  void *limitCountSupport; // x0
  int32_t v14; // w22
  _DWORD *v15; // x19
  __int64 IsLeave; // x0
  unsigned int v17; // w20
  char *v18; // x24
  void **v19; // x24
  void *v20; // t1
  __int64 v21; // x1
  __int64 v22; // x2
  UserServantEntity_o *v23; // x20
  NetworkManager_ResultCallbackFunc_o *v24; // x19
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  UserServantCollectionMaster_o *v27; // x19
  int64_t userId; // x21
  __int64 v29; // x23
  __int64 v30; // x24
  __int128 v31; // q1
  _DWORD *v32; // x25
  __int128 v33; // q0
  int32_t v34; // w24
  int32_t v35; // w26
  int32_t v36; // w27
  int32_t v37; // w28
  bool IsLock; // w19
  char v39; // w21
  int32_t commonFlag; // w23
  int32_t battleVoice; // w25
  int32_t randomSettingOwn; // w22
  int32_t v43; // w0
  __int64 v44; // x8
  int32_t randomSettingSupport; // w20
  __int64 v46; // x0
  int64_t v47; // [xsp+48h] [xbp-E8h]
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v49; // [xsp+58h] [xbp-D8h]
  int64_t pushUserSvtId; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_WarBoardWallAttackRequest; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4212457 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&Method_MyRoomControl__setupSvtRand_b__184_0__, v4);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&OptionManager_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v12);
    byte_4212457 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_40:
    sub_B0D97C(limitCountSupport);
  }
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_40;
  v14 = *((_DWORD *)limitCountSupport + 6);
  v15 = limitCountSupport;
  while ( 1 )
  {
    do
    {
      IsLeave = UnityEngine_Random__RandomRange(0, v14, 0LL);
      v17 = IsLeave;
      if ( (unsigned int)IsLeave >= v15[6] )
      {
LABEL_39:
        v46 = sub_B0D9A8(IsLeave);
        sub_B0D948(v46, 0LL);
      }
      v18 = (char *)&v15[2 * (int)IsLeave];
      v20 = (void *)*((_QWORD *)v18 + 4);
      v19 = (void **)(v18 + 32);
      limitCountSupport = v20;
      if ( !v20 )
        goto LABEL_40;
      IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    }
    while ( (IsLeave & 1) != 0 );
    if ( v17 >= v15[6] )
      goto LABEL_39;
    limitCountSupport = *v19;
    if ( !*v19 )
      goto LABEL_40;
    IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
    if ( (IsLeave & 1) == 0 )
    {
      if ( v17 >= v15[6] )
        goto LABEL_39;
      v23 = (UserServantEntity_o *)*v19;
      if ( *v19 )
        break;
    }
  }
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__184_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CardFavoriteRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v24,
                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_B0D840(&this->fields.usrData, SelfUserGame);
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData || !v23 )
    goto LABEL_40;
  v27 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v30 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v30;
  *(_QWORD *)&v55.fields.fakeValue = v29;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v27 )
    goto LABEL_40;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v27, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_40;
  v31 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  v32 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v53 = v54;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v53, 0LL);
  v33 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v33;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                      v23->fields.imageLimitCount,
                      0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23->fields.dispLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23->fields.commandCardLimitCount, 0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23->fields.iconLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v23, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v23, 0LL);
  if ( !v32 )
    goto LABEL_40;
  v39 = (char)limitCountSupport;
  commonFlag = v32[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       v23->fields.randomLimitCount,
                       0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23->fields.randomLimitCountSupport, 0LL);
  v44 = *(_QWORD *)&v23->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v56.fields.fakeValue = *(_QWORD *)&v23->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v43;
  *(_QWORD *)&v56.fields.currentCryptoKey = v44;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v56, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_40;
  CardFavoriteRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v49,
    imageLimitCount,
    v34,
    v35,
    v36,
    v37,
    1,
    IsLock,
    v39 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    pushUserSvtId == v47,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0

  if ( (byte_4212462 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_4212462 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  MissionNotifyManager__RemoveNoDisplayMissionCondType(v3, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0

  if ( (byte_4212461 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_4212461 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  MissionNotifyManager__AddNoDisplayMissionCondType(v3, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_B0D97C(0LL);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_20299944(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__293_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_421248E & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl__svtVoicePlayAct_d__293_TypeInfo, item);
    byte_421248E = 1;
  }
  v5 = (MyRoomControl__svtVoicePlayAct_d__293_o *)sub_B0D974(
                                                    MyRoomControl__svtVoicePlayAct_d__293_TypeInfo,
                                                    item,
                                                    method);
  MyRoomControl__svtVoicePlayAct_d__293___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.item = item;
  sub_B0D840(&v5->fields.item, item);
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
  MyRoomControl___c__DisplayClass199_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  NetworkManager_c *v14; // x0
  SoundManager_o *Instance; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x22

  if ( (byte_4212464 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetName);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass199_0__voiceLoad_b__0__, v9);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass199_0_TypeInfo, v10);
    byte_4212464 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass199_0_o *)sub_B0D974(
                                                    MyRoomControl___c__DisplayClass199_0_TypeInfo,
                                                    assetName,
                                                    endCallback);
  MyRoomControl___c__DisplayClass199_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  v11->fields.__4__this = this;
  sub_B0D840(&v11->fields, this);
  v11->fields.endCallback = endCallback;
  sub_B0D840(&v11->fields.endCallback, endCallback);
  this->fields.isVoiceLoading = 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42124CA )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    byte_42124CA = 1;
  }
  v14 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  if ( !v14->static_fields->isRebootBlock )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass199_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage(Instance, assetName, v18, 1, 0LL);
      return;
    }
LABEL_15:
    sub_B0D97C(v12);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v7; // x19
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  UnityEngine_Texture2D_o *v10; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v12; // x20
  UIRect_o *height; // x0
  int v14; // w23
  int32_t activeHeight; // w0
  int32_t v16; // w26
  int32_t v17; // w21
  int v18; // w22
  int v19; // w24
  int v20; // w21
  int v21; // w8
  int v22; // w27
  int v23; // w0
  float photoFramePosY; // s8
  int v25; // w25
  int v26; // w23
  int v27; // w24
  int32_t v28; // w0
  double v29; // d0
  UnityEngine_Color_array *Pixels_35037120; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Texture2D_o *v33; // x20
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_421276A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, method);
    sub_B0D8A4(&TouchEffectManager_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_421276A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v10 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v12 = v10;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_27;
    v14 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_27;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_27;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v16 = this->fields.height;
    v17 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_27;
    v18 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_27;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v12 )
      goto LABEL_27;
    v19 = (int)height;
    v20 = v14 * width / v17;
    v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._4_get_width.method)(
            v12,
            v12->klass->vtable._5_set_width.methodPtr)
        - v20;
    v22 = v21 >= 0 ? v21 : v21 + 1;
    v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._6_get_height.method)(
            v12,
            v12->klass->vtable._7_set_height.methodPtr);
    photoFramePosY = _4__this->fields.photoFramePosY;
    v25 = v23;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_27;
    v26 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_27;
    v27 = v18 * v16 / v19;
    v28 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v29 = photoFramePosY == INFINITY ? -photoFramePosY : photoFramePosY;
    Pixels_35037120 = UnityEngine_Texture2D__GetPixels_35037120(
                        v12,
                        v22 >> 1,
                        v26 * (int)v29 / v28 + (v25 - v27) / 2,
                        v20,
                        v27,
                        0LL);
    v33 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, v31, v32);
    UnityEngine_Texture2D___ctor_35037800(v33, v20, v27, 3, 0, 0LL);
    if ( !v33
      || (UnityEngine_Texture2D__SetPixels_35038848(v33, Pixels_35037120, 0LL),
          UnityEngine_Texture2D__Apply_35039676(v33, 0LL),
          (height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot) == 0LL) )
    {
LABEL_27:
      sub_B0D97C(height);
    }
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v33,
      height->klass[1]._1.generic_class);
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_B0D840(&this->fields.__2__current, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__CaptureServant_d__350_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  bool v10; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Func_bool__o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_WaitUntil_o *v16; // x21
  Il2CppObject **p__2__current; // x19

  if ( (byte_421276B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__253_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_421276B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_B0D97C(Instance);
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v11, v12);
  System_Func_bool____ctor(
    v13,
    _4__this,
    Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__253_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v16 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v14, v15);
  UnityEngine_WaitUntil___ctor(v16, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, v16);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  System_Collections_IEnumerator_o *v8; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  __int64 v12; // x1
  TerminalSceneComponent_c *v13; // x0
  struct TerminalSceneComponent_o *mInstance; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  BackTaskAmountAdjuster_o *v17; // x20
  System_Collections_IEnumerator_o *v18; // x0

  v2 = this;
  if ( (byte_421276C & 1) == 0 )
  {
    sub_B0D8A4(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    byte_421276C = 1;
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
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v12);
      byte_421083D = 1;
    }
    v13 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v13 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v13->static_fields->mInstance;
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
    v17 = (BackTaskAmountAdjuster_o *)sub_B0D974(BackTaskAmountAdjuster_TypeInfo, v15, v16);
    BackTaskAmountAdjuster___ctor(v17, 0LL);
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_31;
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                                 (MyRoomStateMaterial_o *)this,
                                                                 0LL);
    if ( !v17 )
      goto LABEL_31;
    v18 = BackTaskAmountAdjuster__Execute(v17, (System_Collections_IEnumerator_o *)this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v18, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (MyRoomControl__InitMaterialOnBackground_d__247_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( this )
    {
      v8 = QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &v2->fields.__2__current;
      sub_B0D840(p__2__current, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_31:
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__InitMaterialOnBackground_d__247_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  bool v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_WaitUntil_o *v18; // x19
  Il2CppObject **p__2__current; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  BackTaskAmountAdjuster_o *v22; // x20
  System_Collections_IEnumerator_o *v23; // x0

  if ( (byte_421276D & 1) == 0 )
  {
    sub_B0D8A4(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v3);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_MyRoomControl__InitServantMenu_b__250_0__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v8);
    byte_421276D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v22 = (BackTaskAmountAdjuster_o *)sub_B0D974(BackTaskAmountAdjuster_TypeInfo, v20, v21);
          BackTaskAmountAdjuster___ctor(v22, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, 0LL);
          if ( !v22 )
            goto LABEL_17;
          v23 = BackTaskAmountAdjuster__Execute(v22, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v23, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_B0D97C(Instance);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v15 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v13, v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)_4__this,
    Method_MyRoomControl__InitServantMenu_b__250_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v18 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v16, v17);
  UnityEngine_WaitUntil___ctor(v18, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, v18);
  *((_DWORD *)p__2__current - 2) = 1;
  return v12;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__InitServantMenu_d__250_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  MyRoomControl__LoadMultipleServant_d__330_o *v3; // x26
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x1
  struct StandFigureBack_array *v22; // x8
  __int64 v23; // x0
  struct StandFigureBack_array *v24; // x8
  __int64 v25; // x27
  __int64 v26; // x21
  __int64 v27; // x25
  int v28; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v30; // x8
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v33; // w24
  int32_t v34; // w20
  MyRoomControl__LoadMultipleServant_d__330_o *v35; // x19
  int32_t Id; // w26
  int32_t Form; // w23
  __int64 v38; // x1
  __int64 v39; // x2
  struct ServantScriptMultipleEntity_array *v40; // x22
  ServantScriptMultipleEntity_o *v41; // x26
  struct StandFigureBack_array *v42; // x8
  struct MyRoomControl_o *v43; // x25
  Il2CppObject *v44; // x28
  StandFigureBack_o *v45; // x26
  System_Action_o *monitor; // x27
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v49; // x19
  int max_length; // w9
  unsigned int v51; // w23
  struct StandFigureBack_array *v52; // x8
  UnityEngine_Component_o *v53; // x8
  Il2CppObject *_2__current; // x21
  float v55; // s1
  float v56; // s2
  float v57; // s8
  float v58; // s9
  float v59; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v61; // x8
  float v62; // s10
  struct StandFigureBack_array *v63; // x9
  int v64; // s14
  int v65; // s15
  float v66; // s0
  float v67; // s2
  struct StandFigureBack_array *v68; // x8
  float v69; // s11
  float v70; // s12
  struct StandFigureBack_array *v71; // x8
  struct StandFigureBack_array *v72; // x8
  System_String_o *v73; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass330_0_o *_8__1; // x8
  MultipleViewComponent_o *multipleViewComponent; // x20
  Il2CppObject *v77; // x22
  System_Action_o *v78; // x21
  Il2CppObject *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  System_Func_bool__o *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  UnityEngine_WaitWhile_o *v85; // x20
  struct ServantScriptMultipleEntity_array *v86; // x8
  ServantScriptMultipleEntity_o *v87; // x9
  ServantScriptMultipleEntity_o *v88; // x8
  Il2CppObject *v89; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  System_Func_bool__o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  UnityEngine_WaitWhile_o *v95; // x20
  __int64 v96; // x0
  __int64 v97; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+8h] [xbp-B8h]
  Il2CppObject **p__8__1; // [xsp+10h] [xbp-B0h]
  __int64 v100; // [xsp+18h] [xbp-A8h]
  __int64 v101; // [xsp+20h] [xbp-A0h]
  ServantScriptMultipleEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_421276E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v6);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&ServantScriptMultipleEntity___TypeInfo, v9);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__0__, v10);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__1__, v11);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__2__, v12);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__3__, v13);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass330_0_TypeInfo, v14);
    sub_B0D8A4(&UIStandFigureRender_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v16);
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B0D8A4(&StringLiteral_6705/*"FinishedFadeMultipleServant"*/, v17);
    byte_421276E = 1;
  }
  entity = 0LL;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_84;
    TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
    v49 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v51 = v49 - 4;
      if ( (int)v49 - 4 >= max_length )
        return 0;
      if ( v51 >= max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v49);
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)StandFigureBack__GetSvtStandFigure(
                                                              (StandFigureBack_o *)this,
                                                              0,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      v52 = _4__this->fields.multipleStandFigureBacks;
      if ( !v52 )
        goto LABEL_84;
      if ( v51 >= v52->max_length )
        goto LABEL_104;
      v53 = (UnityEngine_Component_o *)*((_QWORD *)&v52->obj.klass + v49);
      if ( !v53 )
        goto LABEL_84;
      _2__current = this->fields.__2__current;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(v53, 0LL);
      if ( !this )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v55 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !_2__current )
        goto LABEL_84;
      v57 = v55;
      v58 = v56;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_2__current,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      LODWORD(v59) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      multipleEntities_5__2 = v3->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_84;
      if ( v51 >= multipleEntities_5__2->max_length )
        goto LABEL_104;
      v61 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v49);
      v62 = flt_3201944[(_DWORD)v49 == 4] - v59;
      if ( v61 )
      {
        v63 = _4__this->fields.multipleStandFigureBacks;
        if ( !v63 )
          goto LABEL_84;
        if ( v51 >= v63->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&v63->obj.klass + v49);
        if ( !this )
          goto LABEL_84;
        v64 = *(_DWORD *)(v61 + 28);
        v65 = *(_DWORD *)(v61 + 32);
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v68 = _4__this->fields.multipleStandFigureBacks;
        if ( !v68 )
          goto LABEL_84;
        if ( v51 >= v68->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&v68->obj.klass + v49);
        if ( !this )
          goto LABEL_84;
        v69 = v66;
        v70 = v67;
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        v57 = v57 + (float)v65;
        v62 = v62 + (float)v64;
        v104.fields.x = v69;
        v104.fields.y = v57;
        v104.fields.z = v70;
        v58 = v58 + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v104, 0LL);
      }
      v71 = _4__this->fields.multipleStandFigureBacks;
      if ( !v71 )
        goto LABEL_84;
      if ( v51 >= v71->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__330_o *)*((_QWORD *)&v71->obj.klass + v49);
      if ( this )
      {
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v72 = _4__this->fields.multipleStandFigureBacks;
        if ( v72 )
        {
          v73 = v51 == v72->max_length - 1 ? (System_String_o *)StringLiteral_6705/*"FinishedFadeMultipleServant"*/ : 0LL;
          v105.fields.x = v62;
          v105.fields.y = v57;
          v105.fields.z = v58;
          MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v105, v73, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v49;
          if ( multipleStandFigureBacks )
            continue;
        }
      }
      goto LABEL_84;
    }
  }
  if ( _1__state == 1 )
  {
    _8__1 = v3->fields.__8__1;
    v3->fields.__1__state = -1;
    if ( _8__1 )
    {
      _8__1->fields.wait = 1;
      if ( _4__this )
      {
        multipleViewComponent = _4__this->fields.multipleViewComponent;
        v77 = (Il2CppObject *)v3->fields.__8__1;
        v78 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
        System_Action___ctor(v78, v77, Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__1__, 0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v78, 0LL);
          v79 = (Il2CppObject *)v3->fields.__8__1;
          v82 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v80, v81);
          System_Func_bool____ctor(
            v82,
            v79,
            Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__2__,
            (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
          v85 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v83, v84);
          UnityEngine_WaitWhile___ctor(v85, v82, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v85;
          sub_B0D840(&v3->fields.__2__current, v85);
          v3->fields.__1__state = 2;
          return 1;
        }
      }
    }
    goto LABEL_84;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v20 = (Il2CppObject *)sub_B0D974(MyRoomControl___c__DisplayClass330_0_TypeInfo, method, v2);
  System_Object___ctor(v20, 0LL);
  v3->fields.__8__1 = (struct MyRoomControl___c__DisplayClass330_0_o *)v20;
  p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
  sub_B0D840(&v3->fields.__8__1, v20);
  this = (MyRoomControl__LoadMultipleServant_d__330_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_84;
  v21 = (Il2CppObject *)v3->fields.__4__this;
  this->fields.__2__current = v21;
  sub_B0D840(&this->fields.__2__current, v21);
  if ( !_4__this )
    goto LABEL_84;
  this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.mBlocker;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_84;
  LODWORD((*p__8__1)[1].klass) = 0;
  v22 = _4__this->fields.multipleStandFigureBacks;
  if ( !v22 )
    goto LABEL_84;
  v23 = sub_B0D8BC(ServantScriptMultipleEntity___TypeInfo, v22->max_length);
  v3->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v23;
  p_multipleEntities_5__2 = &v3->fields._multipleEntities_5__2;
  sub_B0D840(&v3->fields._multipleEntities_5__2, v23);
  v24 = _4__this->fields.multipleStandFigureBacks;
  if ( !v24 )
    goto LABEL_84;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 32LL;
  while ( 1 )
  {
    v28 = v24->max_length;
    if ( (int)v26 >= v28 )
      break;
    if ( (unsigned int)v26 >= v28 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)v24->m_Items[v26];
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_84;
    if ( (unsigned int)v26 >= defaultMultipleServantPoses->max_length )
      goto LABEL_104;
    if ( !this )
      goto LABEL_84;
    v30 = (float *)((char *)defaultMultipleServantPoses + v25);
    v103.fields.x = flt_320194C[(_DWORD)v26 == 0] + v30[8];
    v103.fields.y = v30[9] + 0.0;
    v103.fields.z = v30[10] + 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v103, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_84;
    if ( (unsigned int)v26 >= multipleServantUsrIds->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)_4__this->fields.myRoomData;
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            multipleServantUsrIds->m_Items[v26],
                                                            0LL);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_84;
    if ( (unsigned int)v26 >= multipleLimitCounts->max_length )
      goto LABEL_104;
    v33 = multipleLimitCounts->m_Items[v26 + 1];
    v34 = (int)this;
    v35 = v3;
    Id = ServantScriptMaster__getId((int32_t)this, v33, 0LL);
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__330_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                            (ServantScriptMultipleMaster_o *)this,
                                                            &entity,
                                                            Id,
                                                            Form,
                                                            v26 + 1,
                                                            0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v40 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_84;
      v41 = entity;
      if ( entity )
      {
        this = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B0D964(entity, v40->obj.klass->_1.element_class);
        if ( !this )
        {
          v97 = sub_B0D99C();
          sub_B0D948(v97, 0LL);
        }
      }
      if ( (unsigned int)v26 >= v40->max_length )
        goto LABEL_104;
      v40->m_Items[v26] = v41;
      sub_B0D840((char *)v40 + v27, v41);
    }
    v100 = v27;
    v101 = v25;
    v42 = _4__this->fields.multipleStandFigureBacks;
    if ( !v42 )
      goto LABEL_84;
    if ( (unsigned int)v26 >= v42->max_length )
      goto LABEL_104;
    v43 = _4__this;
    v44 = *p__8__1;
    if ( *p__8__1 )
    {
      v45 = v42->m_Items[v26];
      monitor = (System_Action_o *)v44[2].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
        System_Action___ctor(monitor, v44, Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__3__, 0LL);
        v44[2].monitor = monitor;
        sub_B0D840(&v44[2].monitor, monitor);
      }
      if ( v45 )
      {
        StandFigureBack__SetMyRoomStandFigure(v45, v34, v33, 1, 0, Form, 10, monitor, 0LL);
        _4__this = v43;
        v24 = v43->fields.multipleStandFigureBacks;
        ++v26;
        v3 = v35;
        v27 = v100 + 8;
        v25 = v101 + 12;
        if ( v24 )
          continue;
      }
    }
    goto LABEL_84;
  }
  this = (MyRoomControl__LoadMultipleServant_d__330_o *)sub_B0D8BC(int___TypeInfo, 2LL);
  v86 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_84;
  if ( !v86->max_length )
    goto LABEL_104;
  v87 = v86->m_Items[0];
  if ( v87 )
  {
    if ( !this )
      goto LABEL_84;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_104;
    LODWORD(this->fields.__4__this) = v87->fields.depth;
    v86 = *p_multipleEntities_5__2;
    if ( !*p_multipleEntities_5__2 )
      goto LABEL_84;
  }
  if ( v86->max_length <= 1 )
    goto LABEL_104;
  v88 = v86->m_Items[1];
  if ( !v88 )
  {
    if ( this )
      goto LABEL_102;
LABEL_84:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_84;
  if ( LODWORD(this->fields.__2__current) <= 1 )
    goto LABEL_104;
  HIDWORD(this->fields.__4__this) = v88->fields.depth;
LABEL_102:
  if ( LODWORD(this->fields.__2__current) < 2 )
  {
LABEL_104:
    v96 = sub_B0D9A8(this);
    sub_B0D948(v96, 0LL);
  }
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
    0LL);
  v89 = (Il2CppObject *)v3->fields.__8__1;
  v92 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v90, v91);
  System_Func_bool____ctor(
    v92,
    v89,
    Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v95 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v93, v94);
  UnityEngine_WaitWhile___ctor(v95, v92, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v95;
  sub_B0D840(&v3->fields.__2__current, v95);
  result = 1;
  v3->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__LoadMultipleServant_d__330_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  MyRoomControl__LoadPhotoCampaignServant_d__348_o *v3; // x19
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v18; // x22
  struct MyRoomControl___c__DisplayClass348_0_o **p__8__1; // x21
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v22; // w23
  int32_t Id; // w0
  int32_t v24; // w24
  bool v25; // w21
  int32_t Form; // w0
  Il2CppObject *v27; // x26
  int32_t v28; // w24
  StandFigureBack_o *photoCampaignStandFigureBack; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x25
  Il2CppObject *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Func_bool__o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_WaitWhile_o *v39; // x20
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_GameObject_o *v43; // x21
  float PhotoSvtScale; // s0
  struct MyRoomControl___c__DisplayClass348_0_o *_8__1; // x8
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  Il2CppObject *v47; // x22
  System_Action_o *v48; // x21
  Il2CppObject *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_bool__o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_WaitWhile_o *v55; // x20
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v57; // x8
  float svtPosX_5__4; // s8
  float svtPosY_5__5; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s0
  float v62; // s10
  UnityEngine_GameObject_o *v63; // x0
  __int64 v65; // x0
  ServantScriptEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_421276F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantScriptMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v6);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v7);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__0__, v8);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__1__, v9);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__2__, v10);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__3__, v11);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass348_0_TypeInfo, v12);
    sub_B0D8A4(&UIStandFigureRender_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v14);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)sub_B0D8A4(&StringLiteral_6706/*"FinishedFadePhotoServant"*/, v15);
    byte_421276F = 1;
  }
  entity = 0LL;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
    v57 = _4__this->fields.titleInfo;
    if ( !v57 )
      goto LABEL_53;
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)v57->fields.headerBgImg;
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
    svtPosX_5__4 = v3->fields._svtPosX_5__4;
    svtPosY_5__5 = v3->fields._svtPosY_5__5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
    if ( !this )
      goto LABEL_53;
    v62 = LocalPositionZ;
    v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v68.fields.x = svtPosX_5__4;
    v68.fields.y = svtPosY_5__5;
    v68.fields.z = v62;
    MyRoomControl__moveControl(_4__this, v63, v68, (System_String_o *)StringLiteral_6706/*"FinishedFadePhotoServant"*/, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
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
            v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v3->fields._svtPosX_5__4 = -GameObjectExtensions__GetLocalPositionX(v40, 0LL);
            v3->fields._svtPosY_5__5 = _4__this->fields.defaultPhotoServantPos.fields.y;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantScriptMaster___);
            if ( this )
            {
              this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)ServantScriptMaster__TryGetEntity(
                                                                           (ServantScriptMaster_o *)this,
                                                                           &entity,
                                                                           v3->fields._imageId_5__2,
                                                                           v3->fields._formId_5__3,
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
                    || (v3->fields._svtPosX_5__4 = (float)SLODWORD(this->fields.__4__this),
                        LODWORD(this->fields.__2__current) <= 1) )
                  {
                    v65 = sub_B0D9A8(this);
                    sub_B0D948(v65, 0LL);
                  }
                  v3->fields._svtPosY_5__5 = (float)SHIDWORD(this->fields.__4__this);
                }
                this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)_4__this->fields.photoCampaignStandFigureBack;
                if ( !this )
                  goto LABEL_53;
                this = (MyRoomControl__LoadPhotoCampaignServant_d__348_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
                if ( !entity )
                  goto LABEL_53;
                v43 = (UnityEngine_GameObject_o *)this;
                PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 0LL);
                GameObjectExtensions__SetLocalScale_31180844(v43, PhotoSvtScale, 0LL);
              }
              _8__1 = v3->fields.__8__1;
              if ( _8__1 )
              {
                _8__1->fields.wait = 1;
                photoCampaignComponent = _4__this->fields.photoCampaignComponent;
                v47 = (Il2CppObject *)v3->fields.__8__1;
                v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
                System_Action___ctor(
                  v48,
                  v47,
                  Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__2__,
                  0LL);
                if ( photoCampaignComponent )
                {
                  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v48, 0LL);
                  v49 = (Il2CppObject *)v3->fields.__8__1;
                  v52 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v50, v51);
                  System_Func_bool____ctor(
                    v52,
                    v49,
                    Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__3__,
                    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
                  v55 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v53, v54);
                  UnityEngine_WaitWhile___ctor(v55, v52, 0LL);
                  v3->fields.__2__current = (Il2CppObject *)v55;
                  sub_B0D840(&v3->fields.__2__current, v55);
                  v3->fields.__1__state = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_B0D97C(this);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v18 = (Il2CppObject *)sub_B0D974(MyRoomControl___c__DisplayClass348_0_TypeInfo, method, v2);
  System_Object___ctor(v18, 0LL);
  p__8__1 = &v3->fields.__8__1;
  v3->fields.__8__1 = (struct MyRoomControl___c__DisplayClass348_0_o *)v18;
  sub_B0D840(&v3->fields.__8__1, v18);
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
  v67.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
  v67.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x + -1300.0;
  v67.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v67, 0LL);
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
  v22 = SvtId;
  Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
  v3->fields._imageId_5__2 = Id;
  v24 = Id;
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  v25 = 1;
  Form = UIStandFigureRender__GetForm(v24, 1, -1, 0LL);
  v3->fields._formId_5__3 = Form;
  v27 = (Il2CppObject *)v3->fields.__8__1;
  v28 = Form;
  photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v32, v27, Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__0__, 0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_53;
  StandFigureBack__SetMyRoomStandFigure(
    photoCampaignStandFigureBack,
    v22,
    photoCampaignLimitCount,
    1,
    0,
    v28,
    10,
    v32,
    0LL);
  v33 = (Il2CppObject *)v3->fields.__8__1;
  v36 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v34, v35);
  System_Func_bool____ctor(
    v36,
    v33,
    Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__1__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v39 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v37, v38);
  UnityEngine_WaitWhile___ctor(v39, v36, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v39;
  sub_B0D840(&v3->fields.__2__current, v39);
  v3->fields.__1__state = 1;
  return v25;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__LoadPhotoCampaignServant_d__348_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  MyRoomControl__StartCameraEffect_d__352_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  UILabel_o *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v9; // x22
  bool v10; // w21
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_WaitForSeconds_o *v14; // x19
  Il2CppObject **v15; // x20
  Il2CppObject **p__2__current; // x20
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  UILabel_o *v21; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4212770 & 1) == 0 )
  {
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (MyRoomControl__StartCameraEffect_d__352_o *)sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4212770 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
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
    v21 = UnityEngine_Object__Instantiate_UILabel_(
            photoCampaignCameraEffect,
            transform,
            (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v21;
    sub_B0D840(&_4__this->fields.photoCampaignInstantiateCameraEffect, v21);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B0D840(p__2__current, 0LL);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_25;
  photoCampaignShutterEffect = (UILabel_o *)_4__this->fields.photoCampaignShutterEffect;
  v9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    photoCampaignShutterEffect,
    v9,
    (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignProduction;
  if ( !this
    || (v10 = 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (MyRoomControl__StartCameraEffect_d__352_o *)_4__this->fields.photoCampaignFadeSprite) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(this);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_UIWidget_(
    v11,
    (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v14 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v12, v13);
  UnityEngine_WaitForSeconds___ctor(v14, 0.066, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v14;
  v15 = &v2->fields.__2__current;
  sub_B0D840(v15, v14);
  *((_DWORD *)v15 - 2) = 1;
  return v10;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__StartCameraEffect_d__352_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_421275F & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomControl___c_TypeInfo, v1);
    byte_421275F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MyRoomControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MyRoomControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MyRoomControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__201_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212761 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212761 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__281_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0

  if ( (byte_4212762 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4212762 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___initMyRoom_b__179_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__200_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212760 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212760 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
  MyRoomControl___c__DisplayClass203_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v7; // x8
  struct MyRoomControl_o *v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  struct MyRoomControl_o *v11; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22

  v2 = this;
  if ( (byte_4212763 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass203_0_o *)sub_B0D8A4(
                                                       &Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__1__,
                                                       v3);
    byte_4212763 = 1;
  }
  _4__this = v2->fields.__4__this;
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
  sub_B0D840(&this[1].fields.__9__2, standFigureCollectList);
  this = (MyRoomControl___c__DisplayClass203_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[18].fields.__9__2, 0, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass203_0_o *)v7->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v7->fields.isExistVoiceData, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass203_0_o *)v8->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v8->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass203_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].klass) )
    MyRoomControl__setNormalFace_20299944((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_20;
  favoriteChangeComp = v11->fields.favoriteChangeComp;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B0D840(&v2->fields.__9__1, _9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct MyRoomControl_o *v9; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  struct MyRoomControl_o *v12; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v14; // x8
  float v15; // s8
  int v16; // s1
  struct MyRoomControl_o *v17; // x8
  int v18; // s9
  int v19; // s2
  float v20; // s0
  int v21; // s1
  struct MyRoomControl_o *v22; // x8

  if ( (byte_4212764 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__2__, v3);
    sub_B0D8A4(&StringLiteral_11416/*"ReleaseTouch"*/, v4);
    byte_4212764 = 1;
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
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v12->fields.standFigureBack;
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
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v14->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v15 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v17->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v18 = v16;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v20 = -v15;
    v21 = v18;
    MyRoomControl__moveControl(
      _4__this,
      _4__this->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v19 - 2),
      (System_String_o *)StringLiteral_11416/*"ReleaseTouch"*/,
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
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          standFigureBack = v9->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B0D840(&this->fields.__9__2, _9__2);
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
    sub_B0D97C(_4__this);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_30;
  v22->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass203_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v4; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.isSvtLoading = 0, (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
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
  MyRoomControl___c__DisplayClass205_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  MyRoomControl___c__DisplayClass205_0_c *standFigureCollectList; // x1
  struct MyRoomControl_o *v8; // x8
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  int klass_high; // w8
  __int64 v15; // x1
  __int64 v16; // x2
  struct MyRoomControl_o *v17; // x8
  StandFigureBack_o *v18; // x20
  System_Action_o *_9__1; // x22
  struct MyRoomControl_o *v20; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v22; // x8
  float v23; // s8
  int v24; // s1
  struct MyRoomControl_o *v25; // x8
  int v26; // s9
  int v27; // s2
  float v28; // s0
  int v29; // s1
  struct MyRoomControl_o *v30; // x8

  v2 = this;
  if ( (byte_4212765 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__1__, v3);
    this = (MyRoomControl___c__DisplayClass205_0_o *)sub_B0D8A4(&StringLiteral_11416/*"ReleaseTouch"*/, v4);
    byte_4212765 = 1;
  }
  _4__this = v2->fields.__4__this;
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
  sub_B0D840(&this[2], standFigureCollectList);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v8->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v9->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v10->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v11->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v12->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass205_0_o *)v13->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass205_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[21].fields.end_act) )
    MyRoomControl__setNormalFace_20299944((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass205_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  klass_high = HIDWORD(this[21].klass);
  if ( klass_high == 1 )
  {
    this = (MyRoomControl___c__DisplayClass205_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v20 = v2->fields.__4__this;
    if ( !v20 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)v20->fields.standFigureBack;
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
    v22 = v2->fields.__4__this;
    if ( !v22 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)v22->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v23 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass205_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v24 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v25 = v2->fields.__4__this;
    if ( !v25 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass205_0_o *)v25->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v26 = v24;
    this = (MyRoomControl___c__DisplayClass205_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v27 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass205_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v28 = -v23;
    v29 = v26;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].fields.__4__this,
      *(UnityEngine_Vector3_o *)(&v27 - 2),
      (System_String_o *)StringLiteral_11416/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !klass_high )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v17 = v2->fields.__4__this;
    if ( v17 )
    {
      v18 = v17->fields.standFigureBack;
      _9__1 = v2->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v2,
          Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v2->fields.__9__1 = _9__1;
        sub_B0D840(&v2->fields.__9__1, _9__1);
      }
      if ( v18 )
      {
        StandFigureBack__Fadein(v18, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_B0D97C(this);
  }
  ActionExtensions__Call(v2->fields.end_act, 0LL);
  v30 = v2->fields.__4__this;
  if ( !v30 )
    goto LABEL_46;
  v30->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass205_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v4; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B0D97C(_4__this);
  v4->fields.isSvtLoading = 0;
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
  if ( (byte_4212766 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass212_0_o *)sub_B0D8A4(&StringLiteral_8428/*"LOAD_END"*/, method);
    byte_4212766 = 1;
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
    sub_B0D97C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8428/*"LOAD_END"*/, 0LL);
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
    sub_B0D97C(this);
  }
  v5->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass274_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  System_Action_o *callback; // x0

  if ( (byte_4212767 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212767 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass293_0_o *v4; // x19
  MyRoomControl___c__DisplayClass293_0_c *standFigureCollectList; // x1
  float v6; // s1
  float v7; // s2
  struct MyRoomControl_o *v8; // x8
  float v9; // s8
  float v10; // s9
  struct MyRoomControl_o *v11; // x8
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
  if ( !bondsStandFigureBack )
    goto LABEL_14;
  v4 = this;
  this = (MyRoomControl___c__DisplayClass293_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = (MyRoomControl___c__DisplayClass293_0_c *)bondsStandFigureBack->fields.standFigureCollectList;
  this[2].klass = standFigureCollectList;
  sub_B0D840(&this[2], standFigureCollectList);
  this = (MyRoomControl___c__DisplayClass293_0_o *)v4->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass293_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass293_0_o *)v8->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v9 = v6;
  v10 = v7;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11
    || (this = (MyRoomControl___c__DisplayClass293_0_o *)v11->fields.bondsStandFigureBack) == 0LL
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
    sub_B0D97C(this);
  }
  v12.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v12.fields.y = v9;
  v12.fields.z = v10;
  GameObjectExtensions__SetLocalPosition(v4->fields.bondsSvtObj, v12, 0LL);
  v4->fields.createStandEnd = 1;
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  MyRoomControl___c__DisplayClass345_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v11; // x22
  struct MyRoomControl_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4212768 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetData);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v5);
    sub_B0D8A4(&AtlasManager_TypeInfo, v6);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__1__, v7);
    sub_B0D8A4(&StringLiteral_16789/*"bit_camera_shutter"*/, v8);
    this = (MyRoomControl___c__DisplayClass345_0_o *)sub_B0D8A4(&StringLiteral_16788/*"bit_camera_iconblink"*/, v9);
    byte_4212768 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.photoCampaignAssetData = assetData;
  sub_B0D840(&_4__this->fields.photoCampaignAssetData, assetData);
  if ( !assetData
    || (v11 = v4->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass345_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                           assetData,
                                                           (System_String_o *)StringLiteral_16788/*"bit_camera_iconblink"*/,
                                                           (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440),
        !v11)
    || (v11->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this,
        sub_B0D840(&v11->fields.photoCampaignCameraEffect, this),
        v12 = v4->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass345_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                           assetData,
                                                           (System_String_o *)StringLiteral_16789/*"bit_camera_shutter"*/,
                                                           (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440),
        !v12) )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  v12->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v12->fields.photoCampaignShutterEffect, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_27921540(eventId, _9__1, 1, 0LL);
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
  if ( (byte_4212769 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19506/*"img_bg_shutter"*/, v3);
    sub_B0D8A4(&StringLiteral_10736/*"Polaroid_btn_shutter"*/, v4);
    this = (MyRoomControl___c__DisplayClass345_0_o *)sub_B0D8A4(&StringLiteral_10737/*"Polaroid_img_frame"*/, v5);
    byte_4212769 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = v2->fields.eventId;
  photoCampaignFrameSprite = _4__this->fields.photoCampaignFrameSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (MyRoomControl___c__DisplayClass345_0_o *)AtlasManager__SetEventUI_27921852(
                                                     eventId,
                                                     photoCampaignFrameSprite,
                                                     (System_String_o *)StringLiteral_10737/*"Polaroid_img_frame"*/,
                                                     0LL);
  v9 = v2->fields.__4__this;
  if ( !v9
    || (this = (MyRoomControl___c__DisplayClass345_0_o *)AtlasManager__SetEventUI_27921852(
                                                           v2->fields.eventId,
                                                           v9->fields.photoCampaignCameraButtonSprite,
                                                           (System_String_o *)StringLiteral_10736/*"Polaroid_btn_shutter"*/,
                                                           0LL),
        (v10 = v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  AtlasManager__SetEventUI_27921852(
    v2->fields.eventId,
    v10->fields.photoCampaignCameraButtonBgSprite,
    (System_String_o *)StringLiteral_19506/*"img_bg_shutter"*/,
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
  bool v11; // w21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Func_bool__o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_WaitUntil_o *v17; // x20
  Il2CppObject **p__2__current; // x19

  if ( (byte_4212771 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_MyRoomControl__initMaterial_b__248_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v7);
    byte_4212771 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), !_4__this)
      || (Instance = (CommonUI_o *)_4__this[2].klass) == 0LL )
    {
LABEL_13:
      sub_B0D97C(Instance);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v14 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v12, v13);
  System_Func_bool____ctor(
    v14,
    _4__this,
    Method_MyRoomControl__initMaterial_b__248_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v17 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v15, v16);
  UnityEngine_WaitUntil___ctor(v17, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v17;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, v17);
  *((_DWORD *)p__2__current - 2) = 1;
  return v11;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__initMaterial_d__248_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  MyRoomControl__svtVoicePlayAct_d__293_o *v3; // x19
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v21; // x21
  struct MyRoomControl_o *v22; // x1
  CommonUI_o *v23; // x21
  Il2CppObject **p__8__1; // x27
  __int64 v25; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v30; // x21
  int32_t *item; // x8
  ServantVoiceEntity_o *v32; // x22
  System_String_o *VoiceAssetName; // x0
  Il2CppObject *v34; // x23
  struct MaterialEventLogListViewItem_Info_o *v35; // x8
  System_String_o *v36; // x0
  struct MaterialEventLogListViewItem_Info_o *v37; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_29945472; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o **p_svtVoiceDataList_5__4; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *svtVoiceDataList_5__4; // x8
  struct MaterialEventLogListViewItem_Info_o *v41; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_29944888; // x0
  struct MyRoomControl___c__DisplayClass293_0_o *_8__1; // x22
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  struct MaterialEventLogListViewItem_Info_o *v46; // x8
  int32_t v47; // w22
  struct MaterialEventLogListViewItem_Info_o *v48; // x8
  int32_t v49; // w23
  int32_t voiceCondValue; // w24
  struct System_Collections_Generic_List_ServantVoiceData____o *v51; // x24
  int32_t form; // w23
  ServantVoiceData_array *v53; // x8
  ServantVoiceData_o *v54; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v55; // x21
  ServantVoiceData_array *v56; // x8
  ServantVoiceData_o *v57; // x8
  __int64 v58; // x1
  __int64 v59; // x2
  struct MaterialEventLogListViewItem_Info_o *v60; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  Il2CppObject *v63; // x26
  System_Action_o *v64; // x25
  __int64 v65; // x0
  Il2CppObject **v66; // x19
  int v67; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *v68; // x21
  int size; // w8
  MyRoomControl__svtVoicePlayAct_d__293_o **p_bondsSvtCtr; // x22
  __int64 v71; // x0
  unsigned int v72; // w22
  ServantVoiceData_array *v73; // x21
  ServantVoiceData_o *v74; // x8
  CommonUI_o *v75; // x21
  __int64 v76; // x0
  CommonUI_o *v77; // x21
  __int64 v78; // x0
  struct MyRoomControl___c__DisplayClass293_0_o *v79; // x8
  CommonUI_o *v80; // x20
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x0
  int v84; // [xsp+1Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_4212772 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&char_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&Method_MyRoomControl___c__DisplayClass293_0__svtVoicePlayAct_b__0__, v17);
    sub_B0D8A4(&MyRoomControl___c__DisplayClass293_0_TypeInfo, v18);
    this = (MyRoomControl__svtVoicePlayAct_d__293_o *)sub_B0D8A4(&UIStandFigureRender_TypeInfo, v19);
    byte_4212772 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v21 = (Il2CppObject *)sub_B0D974(MyRoomControl___c__DisplayClass293_0_TypeInfo, method, v2);
      System_Object___ctor(v21, 0LL);
      v3->fields.__8__1 = (struct MyRoomControl___c__DisplayClass293_0_o *)v21;
      sub_B0D840(&v3->fields.__8__1, v21);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)v3->fields.__8__1;
      if ( !this )
        goto LABEL_138;
      v22 = v3->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v22;
      sub_B0D840(&this->fields, v22);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v23 )
        goto LABEL_138;
      CommonUI__maskFadeout(v23, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_13:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v84 = 0;
        v25 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
        v3->fields.__2__current = (Il2CppObject *)v25;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v25);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
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
      v30 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                       System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                       v28,
                                                                       v29);
      System_Collections_Generic_List_VoiceCondType_Type____ctor(
        v30,
        (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v30 )
        goto LABEL_138;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v30,
        81,
        (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v3->fields.item;
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
      v32 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v3->fields._voiceAssetName_5__2 = VoiceAssetName;
      sub_B0D840(&v3->fields._voiceAssetName_5__2, VoiceAssetName);
      v34 = (Il2CppObject *)System_Int32__ToString((int)v32 + 20, 0LL);
      LOWORD(v84) = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)j_il2cpp_value_box_0(char_TypeInfo, &v84);
      v35 = v3->fields.item;
      if ( !v35 )
        goto LABEL_138;
      v36 = System_String__Concat_43929608(v34, (Il2CppObject *)this, (Il2CppObject *)v35->fields.voiceId, 0LL);
      v3->fields._playSvtVoiceId_5__3 = v36;
      sub_B0D840(&v3->fields._playSvtVoiceId_5__3, v36);
      v37 = v3->fields.item;
      if ( !v37 )
        goto LABEL_138;
      VoiceList_29945472 = ServantVoiceEntity__getVoiceList_29945472(
                             v32,
                             v37->fields.svtVoiceType,
                             v3->fields._playSvtVoiceId_5__3,
                             (System_Collections_Generic_List_CondType_Kind__o *)v30,
                             0,
                             0LL);
      p_svtVoiceDataList_5__4 = &v3->fields._svtVoiceDataList_5__4;
      v3->fields._svtVoiceDataList_5__4 = VoiceList_29945472;
      sub_B0D840(&v3->fields._svtVoiceDataList_5__4, VoiceList_29945472);
      svtVoiceDataList_5__4 = v3->fields._svtVoiceDataList_5__4;
      if ( svtVoiceDataList_5__4 && svtVoiceDataList_5__4->fields._size )
        goto LABEL_39;
      v41 = v3->fields.item;
      if ( !v41 )
        goto LABEL_138;
      VoiceList_29944888 = ServantVoiceEntity__getVoiceList_29944888(
                             v32,
                             v41->fields.svtVoiceType,
                             3,
                             v41->fields.voiceCondValue,
                             0LL,
                             -1,
                             0LL);
      *p_svtVoiceDataList_5__4 = VoiceList_29944888;
      sub_B0D840(&v3->fields._svtVoiceDataList_5__4, VoiceList_29944888);
LABEL_39:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      _8__1 = v3->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_138;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      sub_B0D840(&_8__1->fields.bondsSvtObj, this);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v46 = v3->fields.item;
      if ( !v46 )
        goto LABEL_138;
      v47 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)ServantScriptMaster__getId(v46->fields.svt_id, v47, 0LL);
      v48 = v3->fields.item;
      if ( !v48 )
        goto LABEL_138;
      v49 = (int)this;
      voiceCondValue = v48->fields.voiceCondValue;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UIStandFigureRender__GetForm(v49, 1, voiceCondValue, 0LL);
      v51 = *p_svtVoiceDataList_5__4;
      form = (int)this;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_66;
      if ( !v51->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v53 = v51->fields._items->m_Items[0];
      if ( !v53 )
        goto LABEL_138;
      if ( !v53->max_length )
        goto LABEL_139;
      v54 = v53->m_Items[0];
      if ( !v54 )
        goto LABEL_138;
      if ( !v54->fields.changeEffect )
        goto LABEL_66;
      v55 = *p_svtVoiceDataList_5__4;
      if ( !v55 )
        goto LABEL_138;
      if ( !v55->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v56 = v55->fields._items->m_Items[0];
      if ( !v56 )
        goto LABEL_138;
      if ( !v56->max_length )
      {
LABEL_139:
        v83 = sub_B0D9A8(this);
        sub_B0D948(v83, 0LL);
      }
      v57 = v56->m_Items[0];
      if ( !v57 )
        goto LABEL_138;
      form = v57->fields.form;
LABEL_66:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v60 = v3->fields.item;
      if ( !v60 )
        goto LABEL_138;
      svt_id = v60->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v63 = *p__8__1;
      v64 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v58, v59);
      System_Action___ctor(v64, v63, Method_MyRoomControl___c__DisplayClass293_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_138;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v47, 1, 0, form, 10, v64, 0LL);
LABEL_70:
      if ( !*p__8__1 )
        goto LABEL_138;
      if ( !LOBYTE((*p__8__1)[2].klass) )
      {
        v84 = 0;
        v71 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
        v3->fields.__2__current = (Il2CppObject *)v71;
        v66 = &v3->fields.__2__current;
        sub_B0D840(v66, v71);
        v67 = 2;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__voiceLoad(_4__this, v3->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_74:
      if ( _4__this->fields.isVoiceLoading )
      {
        v84 = 0;
        v65 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
        v3->fields.__2__current = (Il2CppObject *)v65;
        v66 = &v3->fields.__2__current;
        sub_B0D840(v66, v65);
        v67 = 3;
        goto LABEL_137;
      }
      v68 = v3->fields._svtVoiceDataList_5__4;
      if ( !v68 )
        goto LABEL_138;
      size = v68->fields._size;
      if ( size >= 2 )
      {
        v72 = 0;
        while ( 1 )
        {
          if ( size <= v72 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v73 = v68->fields._items->m_Items[v72];
          if ( !v73 )
            goto LABEL_138;
          if ( !v73->max_length )
            goto LABEL_139;
          v74 = v73->m_Items[0];
          if ( !v74 )
            goto LABEL_138;
          this = (MyRoomControl__svtVoicePlayAct_d__293_o *)System_String__op_Equality(
                                                              v74->fields.id,
                                                              v3->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          v68 = v3->fields._svtVoiceDataList_5__4;
          if ( !v68 )
            goto LABEL_138;
          size = v68->fields._size;
          if ( (int)++v72 >= size )
          {
            p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__293_o **)&_4__this->fields.bondsSvtCtr;
            goto LABEL_93;
          }
        }
        this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsSvtCtr;
        if ( this )
        {
          p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__293_o **)&_4__this->fields.bondsSvtCtr;
          MyRoomSvtControl__setSvtVoice_23623804((MyRoomSvtControl_o *)this, v73, v3->fields._voiceAssetName_5__2, 0LL);
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
        v3->fields._svtVoiceDataList_5__4,
        v3->fields._voiceAssetName_5__2,
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
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v75 )
        goto LABEL_138;
      CommonUI__maskFadein(v75, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_100:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v84 = 0;
        v76 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
        v3->fields.__2__current = (Il2CppObject *)v76;
        v66 = &v3->fields.__2__current;
        sub_B0D840(v66, v76);
        v67 = 4;
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
        v84 = 0;
        v82 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
        v3->fields.__2__current = (Il2CppObject *)v82;
        v66 = &v3->fields.__2__current;
        sub_B0D840(v66, v82);
        v67 = 5;
        goto LABEL_137;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v77 )
        goto LABEL_138;
      CommonUI__maskFadeout(v77, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_112:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v84 = 0;
        v78 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
        v3->fields.__2__current = (Il2CppObject *)v78;
        v66 = &v3->fields.__2__current;
        sub_B0D840(v66, v78);
        v67 = 6;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v3->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v79 = v3->fields.__8__1;
      if ( !v79 )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)v79->fields.bondsSvtObj;
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
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v80 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v80 )
        goto LABEL_138;
      CommonUI__maskFadein(v80, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_132:
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_138:
        sub_B0D97C(this);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v84 = 0;
      v81 = j_il2cpp_value_box_0(int_TypeInfo, &v84);
      v3->fields.__2__current = (Il2CppObject *)v81;
      v66 = &v3->fields.__2__current;
      sub_B0D840(v66, v81);
      v67 = 7;
LABEL_137:
      *((_DWORD *)v66 - 2) = v67;
      return 1;
    case 1:
      v3->fields.__1__state = -1;
      goto LABEL_13;
    case 2:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_70;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_138;
      goto LABEL_74;
    case 4:
      v3->fields.__1__state = -1;
      goto LABEL_100;
    case 5:
      v3->fields.__1__state = -1;
      goto LABEL_103;
    case 6:
      v3->fields.__1__state = -1;
      goto LABEL_112;
    case 7:
      v3->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomControl__svtVoicePlayAct_d__293_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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