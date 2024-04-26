void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  MyRoomControl_c *v9; // x8

  if ( (byte_4352E30 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&StringLiteral_2616/*"BGM_MYROOM_1"*/);
    byte_4352E30 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2616/*"BGM_MYROOM_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2616/*"BGM_MYROOM_1"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MyRoomControl_TypeInfo;
  MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY = 1;
  v9->static_fields->BUTTON_LIMIT_CHANGE = 2;
  v9->static_fields->BUTTON_DISP_CHANGE = 4;
  v9->static_fields->BUTTON_HELP = 8;
  v9->static_fields->BUTTON_MULTIPLE_VIEW = 16;
  v9->static_fields->BUTTON_PHOTO_CAMPAIGN = 32;
  v9->static_fields->BUTTON_OUT_X = -800.0;
  v9->static_fields->MULTIPLE_VIEW_SELECTED_MAX = 2;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomStateMaterial_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_int__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int v32; // w8
  struct System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0

  if ( (byte_4352E2F & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&MyRoomStateMaterial_TypeInfo);
    sub_B70694(&UnityEngine_Vector3___TypeInfo);
    byte_4352E2F = 1;
  }
  v3 = (MyRoomStateMaterial_o *)sub_B70764(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v3, 0LL);
  this->fields.mStateMaterial = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mStateMaterial,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.materialImageIdList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = sub_B706AC(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v24 )
    sub_B7076C(0LL, v25);
  v32 = *(_DWORD *)(v24 + 24);
  if ( !v32 || (*(_DWORD *)(v24 + 40) = 0, *(_QWORD *)(v24 + 32) = 0x43900000C4000000LL, v32 == 1) )
  {
    v47 = sub_B70798(v24);
    sub_B70738(v47, 0LL);
  }
  *(_DWORD *)(v24 + 52) = 0;
  *(_QWORD *)(v24 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.defaultMultipleServantPoses,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.voicePlayButtonDefaultPos = UnityEngine_Vector3__get_zero(0LL);
  this->fields.multipleViewFinishedTime = -1LL;
  v33 = (struct System_Int64_array *)sub_B706AC(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v33;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v40;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.photoMasterPosition = 2;
  this->fields.photoCampaignFinishedTime = -1LL;
  *(_WORD *)&this->fields._IsMasterRight_k__BackingField = 257;
  *(_QWORD *)&this->fields.defaultPhotoServantPos.fields.x = 0x4390000000000000LL;
  this->fields.defaultPhotoServantPos.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__BlockTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  const MethodInfo *v4; // x1
  UIWidget_o *changeBGBtnImg; // x20
  MyRoomData_o *myRoomData; // x0
  __int64 v7; // x1
  int v8; // s0
  UIWidget_o *helpButtonImg; // x20
  int v13; // s0
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v21; // s0
  MyRoomControl_c *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4352DF2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4352DF2 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v3->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v4);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_28;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v8, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
  if ( !helpButtonImg )
    goto LABEL_28;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v13, 0LL);
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
  *(_QWORD *)&v26.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v26.fields.fakeValue = mstInfoData;
  myRoomData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v26, 0LL);
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
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_28;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v21, 0LL);
    v25 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v25 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v25->static_fields->BUTTON_LIMIT_CHANGE;
  }
  myRoomData = (MyRoomData_o *)this->fields.mBlocker;
  if ( !myRoomData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomData, 1, 0LL),
        (myRoomData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_28:
    sub_B7076C(myRoomData, v7);
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

  if ( (byte_4352E20 & 1) == 0 )
  {
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_4352E20 = 1;
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

  if ( (byte_4352E1B & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__CaptureServant_d__397_TypeInfo);
    byte_4352E1B = 1;
  }
  v7 = sub_B70764(MyRoomControl__CaptureServant_d__397_TypeInfo);
  MyRoomControl__CaptureServant_d__397___ctor((MyRoomControl__CaptureServant_d__397_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = width;
  *(_DWORD *)(v7 + 48) = height;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeDisp(MyRoomControl_o *this, bool isSePlay, const MethodInfo *method)
{
  char v3; // vf
  MyRoomControl_c *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v13; // s0
  float v14; // s9
  float v15; // s1
  float v16; // s8
  const MethodInfo *v17; // x2
  float v18; // s2
  float v19; // s10
  MyRoomControl_o *v20; // x0
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x2
  float v23; // s9
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t v26; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x3
  MyRoomControl_c *v30; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  StandFigureBack_o *v39; // x20
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x1
  UnityEngine_Vector3_o movePos; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352DEF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__ChangeDisp_b__327_0__);
    sub_B70694(&Method_MyRoomControl__ChangeDisp_b__327_1__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_11543/*"ReleaseTouch"*/);
    byte_4352DEF = 1;
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
  v6 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v6->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v6->static_fields->BUTTON_DISP_CHANGE) == 0) )
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
    MyRoomControl__BlockTouch(this, v7);
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
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v11);
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
          v11);
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
        v13 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v14 = *(float *)&v13,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v16 = v15,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_57:
          sub_B7076C(soundPlayerComp, v10);
        }
        *(UnityEngine_Vector3_o *)(&v18 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)soundPlayerComp,
                                                 0LL);
        switch ( this->fields.mState )
        {
          case 0:
            v19 = v18;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v17);
            MyRoomControl__setupSortWindowUIMoveData(
              v20,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v21);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, movePos, v22);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_57;
            v23 = -v14;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v24);
            v53.fields.x = v23;
            v53.fields.y = v16;
            v53.fields.z = v19;
            MyRoomControl__moveControl(this, this->fields.svtObj, v53, (System_String_o *)StringLiteral_11543/*"ReleaseTouch"*/, v25);
            v26 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_57;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v30 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v30 = MyRoomControl_TypeInfo;
            }
            v54.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v54.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v54.fields.x = v30->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v54, 0LL, v29);
            v55.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v55.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v55.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v55, 0LL, v32);
            v56.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v56.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v56.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v56, 0LL, v33);
            v57.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v57.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v57.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v57, 0LL, v34);
            v58.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v58.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v58.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v58, (System_String_o *)StringLiteral_11543/*"ReleaseTouch"*/, v35);
            v59.fields.y = this->fields.helpBtnInitPos.fields.y;
            v59.fields.z = this->fields.helpBtnInitPos.fields.z;
            v59.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v59, 0LL, v36);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v26 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v10);
            standFigureBack = this->fields.standFigureBack;
            v28 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(v28, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__327_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_57;
            StandFigureBack__Fadeout(standFigureBack, v28, 0LL);
            v26 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v17);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v37);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v38);
            v39 = this->fields.standFigureBack;
            v40 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(v40, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__327_1__, 0LL);
            if ( !v39 )
              goto LABEL_57;
            StandFigureBack__Fadein(v39, v40, 0LL);
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
              v41);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v42);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v43);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v44);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v45);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v46);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0LL);
            v26 = 0;
            break;
          default:
            goto LABEL_52;
        }
        this->fields.mState = v26;
LABEL_52:
        MyRoomControl__SetMultipleViewButtonColor(this, v10);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v47);
        break;
      default:
        goto LABEL_16;
    }
  }
}


void __fastcall MyRoomControl__ChangeMasterSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_int__int__o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4352E28 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__int___ctor__);
    sub_B70694(&System_Action_int__int__TypeInfo);
    sub_B70694(&Method_MyRoomControl__ChangeMasterSetting_b__412_0__);
    byte_4352E28 = 1;
  }
  v3 = (System_Action_int__int__o *)sub_B70764(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v3,
    (Il2CppObject *)this,
    Method_MyRoomControl__ChangeMasterSetting_b__412_0__,
    (const MethodInfo_2658AF0 *)Method_System_Action_int__int___ctor__);
  MyRoomControl__OpenMasterEquipSettingDialog(this, v3, 0LL, v4);
}


void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(MyRoomControl_o *this, const MethodInfo *method)
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  int32_t v19; // w9
  int32_t max_length; // w10
  System_Int32_array **v21; // x1
  ServantPhotoEntity_FaceData_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  __int64 v25; // x0

  if ( (byte_4352E1A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass393_0__ChangePhotoCampaignServantFace_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass393_0_TypeInfo);
    byte_4352E1A = 1;
  }
  v3 = sub_B70764(MyRoomControl___c__DisplayClass393_0_TypeInfo);
  MyRoomControl___c__DisplayClass393_0___ctor((MyRoomControl___c__DisplayClass393_0_o *)v3, 0LL);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v19 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v19,
        !photoCampaignFaceList) )
  {
    sub_B7076C(v4, v5);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v19 >= max_length )
  {
    this->fields.photoCampaignFaceListIndex = 0;
    max_length = photoCampaignFaceList->max_length;
    v19 = 0;
  }
  if ( v19 >= (unsigned int)max_length )
  {
    v25 = sub_B70798(v4);
    sub_B70738(v25, 0LL);
  }
  v21 = (System_Int32_array **)photoCampaignFaceList->m_Items[v19];
  *(_QWORD *)(v3 + 24) = v21;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v21, v12, v13, v14, v15, v16, v17);
  v22 = *(ServantPhotoEntity_FaceData_o **)(v3 + 24);
  v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v3,
    Method_MyRoomControl___c__DisplayClass393_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  MyRoomControl__SetFacePhotoServant(this, v22, v23, v24);
}


void __fastcall MyRoomControl__ChangePhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.photoCampaignState = 7;
  MyRoomControl__ClosePhotoCampaignServant(this, method);
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

  if ( (byte_4352DF6 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352DF6 = 1;
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
      sub_B7076C(v6, v7);
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

  if ( (byte_4352DF5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352DF5 = 1;
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
    sub_B7076C(standFigureBack, isSet);
  }
LABEL_11:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v5; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v7; // x9
  System_String_o *v8; // x1

  if ( (byte_4352DFB & 1) == 0 )
  {
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&StringLiteral_3136/*"CLICK_MATERIAL"*/);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4352DFB = 1;
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v8 = (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(myRoomFsm, method);
  }
  name = sceneJumpInfo->fields.name;
  v5 = MyRoomRootComponent_TypeInfo;
  if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v5 = MyRoomRootComponent_TypeInfo;
  }
  myRoomFsm = (PlayMakerFSM_o *)System_String__op_Equality(name, v5->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_15;
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    v7 = &StringLiteral_3136/*"CLICK_MATERIAL"*/;
  else
    v7 = &StringLiteral_6989/*"GO_NEXT"*/;
  v8 = (System_String_o *)*v7;
  myRoomFsm = this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent(myRoomFsm, v8, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4352E08 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__CloseMultipleView_b__372_0__);
    byte_4352E08 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B7076C(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__372_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 0, v5);
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

  if ( (byte_4352E06 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6779/*"FinishedCloseMultiServant"*/);
    byte_4352E06 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_B7076C(mBlocker, method);
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
      v19 = sub_B70798(mBlocker);
      sub_B70738(v19, 0LL);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6779/*"FinishedCloseMultiServant"*/ : 0LL;
              v20.fields.y = v15;
              v20.fields.x = flt_32EC110[(_DWORD)v7 == 4] + y;
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
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4352E24 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_0__);
    byte_4352E24 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  float v6; // s8
  float v7; // s9
  float v8; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *v11; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s10
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352E22 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6780/*"FinishedClosePhotoCampaignServant"*/);
    byte_4352E22 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v6 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v7 = flt_32EC118[!this->fields._IsMasterRight_k__BackingField] + this->fields.currentPhotoServantPos.fields.x;
  v8 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v20.fields.x = v7;
  v20.fields.y = v6;
  v20.fields.z = v8;
  MyRoomControl__moveControl(this, gameObject, v20, (System_String_o *)StringLiteral_6780/*"FinishedClosePhotoCampaignServant"*/, v10);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(v11, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_B7076C(photoCampaignStandFigureBack, v4);
  }
  v15 = v13 + 0.0;
  v16 = v14 + 0.0;
  v17 = v12 + flt_32EC120[!this->fields._IsMasterRight_k__BackingField];
  v18 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v21.fields.x = v17;
  v21.fields.y = v15;
  v21.fields.z = v16;
  MyRoomControl__moveControl(this, v18, v21, 0LL, v19);
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

  if ( (byte_4352DE4 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_TypeInfo);
    byte_4352DE4 = 1;
  }
  v5 = sub_B70764(MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__289___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setEndAction;
  sub_B70630(
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
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4352DF8 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&StringLiteral_3511/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4352DF8 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_3511/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                        (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     UIAtlas,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v3,
                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v24; // x23
  System_Action_o *v25; // x24
  struct UIMasterFigureTextureOld_o *Prefab_30991164; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4352E16 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass389_0__CreatePhotoMasterFigure_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass389_0_TypeInfo);
    byte_4352E16 = 1;
  }
  v5 = sub_B70764(MyRoomControl___c__DisplayClass389_0_TypeInfo);
  MyRoomControl___c__DisplayClass389_0___ctor((MyRoomControl___c__DisplayClass389_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = func;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)func, v14, v15, v16, v17, v18, v19);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
    return;
  }
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B7076C(photoCampaignStandFigureBack, v7);
  }
  v21 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v24 = v21;
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass389_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  Prefab_30991164 = MasterFigureManagerOld__CreatePrefab_30991164(
                      v24,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v25,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0LL);
  this->fields.photoMasterTexture = Prefab_30991164;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.photoMasterTexture,
    (System_Int32_array **)Prefab_30991164,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__DispDefaultMyRoom(
        MyRoomControl_o *this,
        bool isDispDefault,
        System_Action_o *callback,
        bool isFadein,
        const MethodInfo *method)
{
  __int64 v9; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  _BOOL8 isEnablePhotoCampaign; // x1
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
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  StandFigureBack_o *v26; // x21
  System_Action_o *v27; // x23
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v29; // x23
  _BOOL4 isEnableMultipleView; // w8
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x4
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4352E07 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__0__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__1__);
    sub_B70694(&MyRoomControl___c__DisplayClass370_0_TypeInfo);
    byte_4352E07 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v9 = sub_B70764(MyRoomControl___c__DisplayClass370_0_TypeInfo);
  MyRoomControl___c__DisplayClass370_0___ctor((MyRoomControl___c__DisplayClass370_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  MyRoomControl__stopSvtVoice(this, v24);
  MyRoomControl__BlockTouch(this, v25);
  if ( !isDispDefault )
  {
    standFigureBack = this->fields.standFigureBack;
    v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v9,
      Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__1__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadeout(standFigureBack, v29, 0LL);
      frontObjectManager = this->fields.frontObjectManager;
      if ( frontObjectManager )
      {
        MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
        goto LABEL_13;
      }
    }
LABEL_35:
    sub_B7076C(frontObjectManager, isEnablePhotoCampaign);
  }
  if ( isFadein )
  {
    v26 = this->fields.standFigureBack;
    v27 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v9,
      Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__0__,
      0LL);
    if ( !v26 )
      goto LABEL_35;
    StandFigureBack__Fadein(v26, v27, 0LL);
  }
  frontObjectManager = this->fields.frontObjectManager;
  if ( !frontObjectManager )
    goto LABEL_35;
  MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
LABEL_13:
  MainMenuBar__setMenuActive(isDispDefault, 0LL, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.voicePlayBtn;
  if ( !frontObjectManager )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.moveBtnObj;
  if ( !frontObjectManager )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeLimitBtn;
  if ( !frontObjectManager )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.helpBtn;
  if ( !frontObjectManager )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.multipleViewButton;
  if ( isDispDefault )
  {
    isEnableMultipleView = this->fields.isEnableMultipleView;
    if ( !frontObjectManager )
      goto LABEL_35;
  }
  else
  {
    isEnableMultipleView = 0;
    if ( !frontObjectManager )
      goto LABEL_35;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isEnableMultipleView, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  if ( isDispDefault )
  {
    isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
    if ( !frontObjectManager )
      goto LABEL_35;
  }
  else
  {
    isEnablePhotoCampaign = 0LL;
    if ( !frontObjectManager )
      goto LABEL_35;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isEnablePhotoCampaign, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v34);
      mMainObj = moveTarget;
      goto LABEL_27;
    case 6:
      mMainObj = this->fields.noticeObj;
      moveTarget = mMainObj;
      if ( !isDispDefault )
        goto LABEL_33;
      goto LABEL_28;
    case 0xA:
      frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.soundPlayerComp;
      if ( !frontObjectManager )
        goto LABEL_35;
      mMainObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frontObjectManager, 0LL);
      moveTarget = mMainObj;
      if ( !isDispDefault )
        goto LABEL_33;
      goto LABEL_28;
    default:
LABEL_27:
      if ( isDispDefault )
      {
LABEL_28:
        x = moveShowPos.fields.x;
        y = moveShowPos.fields.y;
        z = moveShowPos.fields.z;
      }
      else
      {
LABEL_33:
        y = LocalPosition.fields.y;
        x = LocalPosition.fields.x;
        z = LocalPosition.fields.z;
      }
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v33);
      return;
  }
}


void __fastcall MyRoomControl__DispPhotoCampaign(
        MyRoomControl_o *this,
        int64_t usrSvtId,
        int32_t imageLimitCount,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  MissionNotifyManager_o *photoCampaignStandFigureBack; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_4352E14 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4352E14 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  photoCampaignStandFigureBack = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_12;
  MissionNotifyManager__StartPause(photoCampaignStandFigureBack, 0LL);
  if ( this->fields.photoCampaignServantUsrId != usrSvtId )
  {
    photoCampaignStandFigureBack = (MissionNotifyManager_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (MissionNotifyManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        UIPanel__set_depth((UIPanel_o *)photoCampaignStandFigureBack, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B7076C(photoCampaignStandFigureBack, v12);
  }
LABEL_11:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  void *svtCtr; // x0
  const MethodInfo *v4; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__237_0; // x21
  Il2CppObject *v11; // x22
  struct MyRoomControl___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4352DC8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__EndLoad_b__237_0__);
    sub_B70694(&MyRoomControl___c_TypeInfo);
    sub_B70694(&StringLiteral_8506/*"LOAD_END"*/);
    byte_4352DC8 = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_23;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v4);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v7 = AvalonSceneManager_TypeInfo;
    }
    svtCtr = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      svtCtr = MyRoomControl___c_TypeInfo;
    }
    static_fields = (struct MyRoomControl___c_StaticFields *)*((_QWORD *)svtCtr + 23);
    _9__237_0 = static_fields->__9__237_0;
    if ( !_9__237_0 )
    {
      if ( (*((_BYTE *)svtCtr + 307) & 4) != 0 && !*((_DWORD *)svtCtr + 56) )
      {
        j_il2cpp_runtime_class_init_0(svtCtr);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__237_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__237_0, v11, Method_MyRoomControl___c__EndLoad_b__237_0__, 0LL);
      v12 = MyRoomControl___c_TypeInfo->static_fields;
      v12->__9__237_0 = _9__237_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v12->__9__237_0,
        (System_Int32_array **)_9__237_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__237_0, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B7076C(svtCtr, method);
  }
LABEL_21:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8506/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  System_Action_ShopRootConstants_State__o *v5; // x21

  if ( (byte_4352E12 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE___ctor__);
    sub_B70694(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo);
    sub_B70694(&Method_MyRoomControl__EndLoadPhotoAsset_b__385_0__);
    byte_4352E12 = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v5 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v5,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__385_0__,
          (const MethodInfo_264AE8C *)Method_System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE___ctor__),
        !photoTargetSelectDialog) )
  {
    sub_B7076C(photoCampaignStandFigureBack, method);
  }
  PhotoTargetSelectDialog__Open(photoTargetSelectDialog, (System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *)v5, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x19

  if ( (byte_4352DFC & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352DFC = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.sceneJumpInfo, 0LL, v2, v3, v4, v5, v6, v7);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v11 )
      sub_B7076C(Instance, v10);
    CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_B7076C(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x5
  _BOOL4 IsMasterRight_k__BackingField; // w9
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  bool v15; // zf
  bool v16; // w9
  int32_t v17; // w10
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *v19; // x8
  struct System_Int32_array *multiForm; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21
  __int64 v25; // x0

  if ( (byte_4352E29 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass413_0__ExchangePosition_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass413_0_TypeInfo);
    byte_4352E29 = 1;
  }
  v3 = sub_B70764(MyRoomControl___c__DisplayClass413_0_TypeInfo);
  MyRoomControl___c__DisplayClass413_0___ctor((MyRoomControl___c__DisplayClass413_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( !this )
    goto LABEL_18;
  IsMasterRight_k__BackingField = this->fields._IsMasterRight_k__BackingField;
  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v15 = !IsMasterRight_k__BackingField;
  v16 = !IsMasterRight_k__BackingField;
  v17 = v15 ? 2 : 1;
  this->fields.photoMasterPosition = v17;
  this->fields._IsMasterRight_k__BackingField = v16;
  if ( !photoCampaignFaceList )
    goto LABEL_18;
  photoCampaignFaceListIndex = this->fields.photoCampaignFaceListIndex;
  if ( (unsigned int)photoCampaignFaceListIndex >= photoCampaignFaceList->max_length )
    goto LABEL_19;
  v19 = photoCampaignFaceList->m_Items[photoCampaignFaceListIndex];
  if ( !v19 )
    goto LABEL_18;
  multiForm = v19->fields.multiForm;
  if ( !multiForm )
    goto LABEL_18;
  if ( !multiForm->max_length )
  {
LABEL_19:
    v25 = sub_B70798(v4);
    sub_B70738(v25, 0LL);
  }
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    (UnityEngine_Vector3_o *)(v3 + 24),
    (float *)(v3 + 36),
    v12);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v3,
    Method_MyRoomControl___c__DisplayClass413_0__ExchangePosition_b__0__,
    0LL);
  if ( !Instance )
LABEL_18:
    sub_B7076C(v4, v5);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v24, 0LL);
}


void __fastcall MyRoomControl__FingerGestures_OnGestureEvent(
        MyRoomControl_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  UnityEngine_Object_o *startSelection; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x10

  v4 = this;
  if ( (byte_4352DFA & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl_o *)sub_B70694(&SwipeGesture_TypeInfo);
    byte_4352DFA = 1;
  }
  if ( !gesture )
    sub_B7076C(this, gesture);
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
      v7 = *(&SwipeGesture_TypeInfo->_2.bitflags2 + 1);
      if ( *(&gesture->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[v7 - 1] == SwipeGesture_TypeInfo )
      {
        if ( (v4->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(v4, 0, v6);
        if ( v4->fields.multipleViewState == 3 )
        {
          v4->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(v4, 1, v6);
        }
        if ( v4->fields.photoCampaignState == 3 )
        {
          v4->fields.photoCampaignState = 2;
          MyRoomControl__SetPhotoCampaignUi(v4, 1, v6);
        }
      }
    }
  }
}


void __fastcall MyRoomControl__FinishedCloseFullScreenPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  UnityEngine_Object_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4352E21 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E21 = 1;
  }
  photoCampaignProduction = this->fields.photoCampaignProduction;
  this->fields.photoCampaignState = 2;
  if ( !photoCampaignProduction )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignBackGroundSprite;
  if ( !photoCampaignProduction )
    goto LABEL_12;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignFadeSprite;
  if ( !photoCampaignProduction )
    goto LABEL_12;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
    goto LABEL_12;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))photoCampaignProduction->klass[1].vtable._3_ToString.method)(
                                 photoCampaignProduction,
                                 photoCampaignProduction->klass[2]._1.image);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_12:
    sub_B7076C(photoCampaignProduction, method);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))photoCampaignProduction->klass[2]._1.gc_desc)(
    photoCampaignProduction,
    0LL,
    photoCampaignProduction->klass[2]._1.name);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
}


void __fastcall MyRoomControl__FinishedCloseMultiServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  const MethodInfo *v4; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  int max_length; // w9
  const MethodInfo *v8; // x2
  __int64 v9; // x0

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
      v9 = sub_B70798(multipleViewCloseButton);
      sub_B70738(v9, 0LL);
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
    || (MultipleViewComponent__Open((MultipleViewComponent_o *)multipleViewCloseButton, 0, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 0, v8),
        (multipleViewCloseButton = this->fields.mBlocker) == 0LL) )
  {
LABEL_8:
    sub_B7076C(multipleViewCloseButton, method);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4352E23 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4352E23 = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_30;
  photoCampaignStandFigureBack = (StandFigureBack_o *)titleInfo->fields.headerBgImg;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  photoCampaignStandFigureBack = (StandFigureBack_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                                        0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignStandFigureBack, 1, 0LL);
  photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v5);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_32499584(v7, 1.0, 0LL);
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = &this->fields.photoMasterTexture;
    photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoMasterTexture;
    if ( !photoCampaignStandFigureBack )
      goto LABEL_30;
    UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)photoCampaignStandFigureBack, 0LL);
    photoCampaignStandFigureBack = (StandFigureBack_o *)*p_photoMasterTexture;
    if ( !*p_photoMasterTexture )
      goto LABEL_30;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v10, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.photoMasterTexture, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !photoCampaignStandFigureBack
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo) == 0LL) )
  {
LABEL_30:
    sub_B7076C(photoCampaignStandFigureBack, method);
  }
  TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL);
  photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoCampaignComponent;
  if ( this->fields.photoCampaignState == 7 )
  {
    method = 0LL;
    if ( !photoCampaignStandFigureBack )
      goto LABEL_30;
  }
  else
  {
    method = (const MethodInfo *)(unsigned int)this->fields.photoCampaignType;
    if ( !photoCampaignStandFigureBack )
      goto LABEL_30;
  }
  PhotoCampaignComponent__Open(
    (PhotoCampaignComponent_o *)photoCampaignStandFigureBack,
    (int32_t)method,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v17);
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
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL);
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v6);
}


void __fastcall MyRoomControl__FinishedFadePhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x2
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  const MethodInfo *v7; // x2

  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        this->fields.currentPhotoServantPos = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        MyRoomControl__SetPhotoCampaignUi(this, 1, v5),
        (photoCampaignFaceList = this->fields.photoCampaignFaceList) == 0LL)
    || (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent) == 0LL )
  {
    sub_B7076C(photoCampaignStandFigureBack, method);
  }
  PhotoSettingButtonComponent__DispSettingButton(
    (PhotoSettingButtonComponent_o *)photoCampaignStandFigureBack,
    this->fields.photoCampaignType,
    (signed int)photoCampaignFaceList->max_length > 1,
    0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v7);
}


void __fastcall MyRoomControl__FormChangeCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  ServantVoiceData_o *FirstServantVoiceData; // x0
  ServantVoiceData_o *v5; // x20
  __int64 *v6; // x9
  System_String_o *v7; // x1

  if ( (byte_4352DD4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9435/*"NORMAL_FORM"*/);
    sub_B70694(&StringLiteral_3018/*"CHANGE_FORM"*/);
    byte_4352DD4 = 1;
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
  if ( !FirstServantVoiceData || (v5 = FirstServantVoiceData, !FirstServantVoiceData->fields.changeEffect) )
  {
LABEL_12:
    svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
    if ( svtCtr )
    {
      v7 = (System_String_o *)StringLiteral_9435/*"NORMAL_FORM"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_B7076C(svtCtr, method);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_17;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_17;
  if ( v5->fields.form == (_DWORD)svtCtr )
    v6 = &StringLiteral_9435/*"NORMAL_FORM"*/;
  else
    v6 = &StringLiteral_3018/*"CHANGE_FORM"*/;
  v7 = (System_String_o *)*v6;
  svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, v7, 0LL);
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
  __int64 v7; // x0
  __int64 v8; // x1
  float v9; // s0
  struct UISprite_o *photoCampaignFrameSprite; // x8
  int *p_mHeight; // x8
  int32_t *p_WIDTH; // x9
  float v13; // s0

  v6 = this;
  if ( (byte_4352E1F & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B70694(&ManagerConfig_TypeInfo);
    byte_4352E1F = 1;
  }
  v9 = MyRoomControl__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  photoCampaignFrameSprite = v6->fields.photoCampaignFrameSprite;
  if ( !photoCampaignFrameSprite )
    goto LABEL_14;
  if ( v9 >= (float)((float)photoCampaignFrameSprite->fields.mHeight / (float)photoCampaignFrameSprite->fields.mWidth) )
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || ManagerConfig_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo),
          (photoCampaignFrameSprite = v6->fields.photoCampaignFrameSprite) != 0LL) )
    {
      p_mHeight = &photoCampaignFrameSprite->fields.mHeight;
      p_WIDTH = &ManagerConfig_TypeInfo->static_fields->WIDTH;
      goto LABEL_13;
    }
LABEL_14:
    sub_B7076C(v7, v8);
  }
  if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    photoCampaignFrameSprite = v6->fields.photoCampaignFrameSprite;
    if ( !photoCampaignFrameSprite )
      goto LABEL_14;
  }
  p_mHeight = &photoCampaignFrameSprite->fields.mWidth;
  p_WIDTH = &ManagerConfig_TypeInfo->static_fields->HEIGHT;
LABEL_13:
  v13 = (float)*p_WIDTH / (float)*p_mHeight;
  localScale->fields.z = 1.0;
  localScale->fields.x = v13;
  localScale->fields.y = v13;
  *(_QWORD *)&localEulerAngle->fields.x = 0LL;
  localEulerAngle->fields.z = 90.0;
}


int32_t __fastcall MyRoomControl__GetNextRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x9
  __int64 v4; // x0

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v4 = (unsigned int)(this->fields.photoCampaignFaceListIndex + 1);
  this->fields.photoCampaignFaceListIndex = v4;
  if ( !photoCampaignFaceList )
    sub_B7076C(v4, method);
  if ( (int)v4 >= (signed int)photoCampaignFaceList->max_length )
  {
    LODWORD(v4) = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  return v4;
}


int32_t __fastcall MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x20
  __int64 materialFigureSvtDispIdx; // x19

  v2 = this;
  if ( (byte_4352DF9 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4352DF9 = 1;
  }
  materialImageIdList = v2->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_B7076C(this, method);
  materialFigureSvtDispIdx = v2->fields.materialFigureSvtDispIdx;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  return materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
}


UnityEngine_Vector3_o __fastcall MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MasterPhotoMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  float y; // s8
  _BOOL4 v6; // w20
  float offsetX; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v10; // s0
  float v11; // s1
  MasterPhotoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352E18 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_MasterPhotoMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4352E18 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MasterPhotoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_MasterPhotoMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  y = this->fields.defaultPhotoServantPos.fields.y;
  v6 = !this->fields._IsMasterRight_k__BackingField;
  Master_WarQuestSelectionMaster = (MasterPhotoMaster_o *)MasterPhotoMaster__TryGetEntity(
                                                            Master_WarQuestSelectionMaster,
                                                            &entity,
                                                            this->fields.photoMasterEquipId,
                                                            this->fields.photoMasterGenderType,
                                                            this->fields.photoMasterPosition,
                                                            0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_13;
    offsetX = (float)entity->fields.offsetX;
    y = (float)entity->fields.offsetY;
  }
  else
  {
    offsetX = flt_32EC130[v6];
  }
  Master_WarQuestSelectionMaster = (MasterPhotoMaster_o *)this->fields.photoMasterTexture;
  if ( !Master_WarQuestSelectionMaster )
LABEL_13:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
  v10 = offsetX;
  v11 = y;
  result.fields.z = LocalPositionZ;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        MyRoomControl_o *this,
        int32_t imageId,
        int32_t formId,
        UnityEngine_Vector3_o *position,
        float *scale,
        const MethodInfo *method)
{
  __int64 photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s8
  float v14; // s10
  float y; // s9
  int v16; // w8
  System_Int32_array *v17; // x22
  float v18; // s8
  double v19; // d1
  double v20; // d0
  int32_t photoCampaignType; // w8
  float PhotoSvtScale; // s0
  System_Int32_array *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  float LocalPositionZ; // s0
  __int64 v26; // x0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4352E17 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantScriptMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_4352E17 = 1;
  }
  entity = 0LL;
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  photoCampaignStandFigureBack = (__int64)StandFigureBack__GetSvtStandFigure(
                                            (StandFigureBack_o *)photoCampaignStandFigureBack,
                                            0,
                                            0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  photoCampaignStandFigureBack = *(_QWORD *)(photoCampaignStandFigureBack + 24);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v14 = this->fields._IsOnlyServant_k__BackingField ? -0.0 : flt_32EC128[!this->fields._IsMasterRight_k__BackingField];
  y = this->fields.defaultPhotoServantPos.fields.y;
  photoCampaignStandFigureBack = sub_B706AC(int___TypeInfo, 2LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  v16 = *(_DWORD *)(photoCampaignStandFigureBack + 24);
  v17 = (System_Int32_array *)photoCampaignStandFigureBack;
  if ( !v16 )
    goto LABEL_40;
  v18 = v14 - LocalPositionX;
  v19 = v18;
  if ( v18 == INFINITY )
    v19 = -v18;
  *(_DWORD *)(photoCampaignStandFigureBack + 32) = (int)v19;
  if ( v16 == 1 )
  {
LABEL_40:
    v26 = sub_B70798(photoCampaignStandFigureBack);
    sub_B70738(v26, 0LL);
  }
  v20 = -y;
  if ( y != INFINITY )
    v20 = y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = (int)v20;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantScriptMaster___);
  *scale = 1.0;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  photoCampaignStandFigureBack = ServantScriptMaster__TryGetEntity(
                                   (ServantScriptMaster_o *)photoCampaignStandFigureBack,
                                   &entity,
                                   imageId,
                                   formId,
                                   0LL);
  if ( (photoCampaignStandFigureBack & 1) == 0 )
    goto LABEL_37;
  photoCampaignType = this->fields.photoCampaignType;
  if ( photoCampaignType != 1 )
  {
    if ( photoCampaignType )
      goto LABEL_35;
    photoCampaignStandFigureBack = (__int64)entity;
    if ( entity )
    {
      photoCampaignStandFigureBack = (__int64)ServantScriptEntity__GetPhotoSvtPosition(entity, v17, 0LL);
      if ( entity )
      {
        v17 = (System_Int32_array *)photoCampaignStandFigureBack;
        PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0LL);
        goto LABEL_34;
      }
    }
LABEL_39:
    sub_B7076C(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  }
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_39;
  v23 = this->fields._IsMasterRight_k__BackingField
      ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, v17, 0LL)
      : ServantScriptEntity__GetPhotoSvtPositionRight(entity, v17, 0LL);
  v17 = v23;
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_39;
  if ( this->fields._IsMasterRight_k__BackingField )
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0LL);
  else
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0LL);
LABEL_34:
  *scale = PhotoSvtScale;
  if ( !v17 )
    goto LABEL_39;
LABEL_35:
  if ( v17->max_length < 2 )
    goto LABEL_40;
  v18 = (float)v17->m_Items[1];
  y = (float)v17->m_Items[2];
LABEL_37:
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v24, 0LL);
  position->fields.x = v18;
  position->fields.y = y;
  position->fields.z = LocalPositionZ;
}


SceneJumpInfo_o *__fastcall MyRoomControl__GetSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.sceneJumpInfo;
}


System_Int32_array *__fastcall MyRoomControl__GetSortedCostumeIds(
        MyRoomControl_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x8
  __int64 v12; // x0

  if ( (byte_4352DFD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352DFD = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v12 = sub_B70798(Instance);
        sub_B70738(v12, 0LL);
      }
      v10 = *((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 || !v4 )
        break;
      System_Collections_Generic_List_int___Add(
        v4,
        *(_DWORD *)(v10 + 20),
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_12;
    }
LABEL_14:
    sub_B7076C(Instance, v6);
  }
LABEL_12:
  if ( !v4 )
    goto LABEL_14;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4352DC1 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B70694(&Method_CStateManager_MyRoomControl__getState__);
    byte_4352DC1 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(this, method);
  return mFSM->fields.m_state;
}


MyRoomStateMaterial_o *__fastcall MyRoomControl__GetStateMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mStateMaterial;
}


void __fastcall MyRoomControl__GoToTitle(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v4; // x21
  CommonUI_o *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v6; // x23
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0

  if ( (byte_4352DE9 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MyRoomControl__GoToTitle_b__317_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_8995/*"MYROOM_TITLE_CONFIRM"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352DE9 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8995/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__317_0__, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    sub_B7076C(v8, v7);
  CommonUI__OpenConfirmDialog(Instance, v3, v4, v6, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0, 0, 0LL);
}


void __fastcall MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4352E2A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E2A = 1;
  }
  this->fields.photoCampaignState = 3;
  photoMasterTouchPress = (UnityEngine_Object_o *)this->fields.photoMasterTouchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoMasterTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoMasterTouchPress;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  photoSvtTouchPress = (UnityEngine_Object_o *)this->fields.photoSvtTouchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoSvtTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoSvtTouchPress;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        goto LABEL_17;
      }
    }
LABEL_19:
    sub_B7076C(gameObject, v4);
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v7);
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

  if ( (byte_4352DE1 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__InitMaterialOnBackground_d__283_TypeInfo);
    byte_4352DE1 = 1;
  }
  v3 = sub_B70764(MyRoomControl__InitMaterialOnBackground_d__283_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__283___ctor((MyRoomControl__InitMaterialOnBackground_d__283_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4352DE3 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__InitServantMenu_d__286_TypeInfo);
    byte_4352DE3 = 1;
  }
  v3 = sub_B70764(MyRoomControl__InitServantMenu_d__286_TypeInfo);
  MyRoomControl__InitServantMenu_d__286___ctor((MyRoomControl__InitServantMenu_d__286_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4352E0A & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352E0A = 1;
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

  if ( (byte_4352E25 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352E25 = 1;
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
  if ( (byte_4352E03 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4352E03 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
  {
    v7 = sub_B70798(this);
    sub_B70738(v7, 0LL);
  }
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_B7076C(this, *(_QWORD *)&index);
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
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s8
  float v11; // s9
  float v12; // s10
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4352DD0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15619/*"Wait_Action"*/);
    sub_B70694(&StringLiteral_7242/*"Help"*/);
    byte_4352DD0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15619/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7242/*"Help"*/, 0LL) )
      return 0;
  }
  myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomListCtr;
  if ( !myRoomFsm )
    goto LABEL_16;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  myRoomFsm = (PlayMakerFSM_o *)this->fields.mShowPos;
  if ( !myRoomFsm )
    goto LABEL_16;
  v10 = v7;
  v11 = v8;
  v12 = v9;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  v14.fields.x = v10;
  v14.fields.y = v11;
  v14.fields.z = v12;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Vector3__op_Equality(v14, position, 0LL);
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_B7076C(myRoomFsm, method);
  return !mMaterialEventLogListViewManager->fields.mIsDoing_Slide;
}


bool __fastcall MyRoomControl__IsServantMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.isServantMaterial;
}


void __fastcall MyRoomControl__LoadMasterEquip(MyRoomControl_o *this, const MethodInfo *method)
{
  UserEquipMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v4; // x1
  UserEquipEntity_array *List; // x26
  __int64 v6; // x21
  __int64 v7; // x21
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v9; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  unsigned int v11; // w27
  UserEquipEntity_o *v12; // x20
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v20; // x0
  __int64 v21; // x24
  __int64 v22; // x25
  __int64 *v23; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v25; // x0
  UserEquipEntity_array *v26; // x28
  __int64 v27; // x25
  __int64 v28; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v31; // x2
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v35; // x0
  Il2CppObject *v36; // x0
  System_String_o *v37; // x24
  AssetLoader_LoadEndDataHandler_o *v38; // x25
  __int64 v39; // x2
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v43; // x0
  Il2CppObject *v44; // x0
  System_String_o *v45; // x23
  AssetLoader_LoadEndDataHandler_o *v46; // x24
  __int64 v47; // x0
  __int64 v49[2]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v50[2]; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4352E10 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__0__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__1__);
    sub_B70694(&MyRoomControl___c__DisplayClass382_0_TypeInfo);
    sub_B70694(&StringLiteral_9075/*"MasterFace/equip{0:D5}"*/);
    byte_4352E10 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  List = UserEquipMaster__getList(Master_WarQuestSelectionMaster, UserId, 0LL);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B08394(v7);
  UserId = **(_QWORD **)(v7 + 184);
  if ( !UserId )
    goto LABEL_38;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_38;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)UserId;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v47 = sub_B70798(UserId);
        sub_B70738(v47, 0LL);
      }
      v12 = List->m_Items[v11];
      v13 = sub_B70764(MyRoomControl___c__DisplayClass382_0_TypeInfo);
      MyRoomControl___c__DisplayClass382_0___ctor((MyRoomControl___c__DisplayClass382_0_o *)v13, 0LL);
      if ( !v13 )
        break;
      *(_QWORD *)(v13 + 24) = this;
      sub_B70630((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
      if ( !v12 )
        break;
      v20 = *v9;
      v22 = *(_QWORD *)&v12->fields.equipId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v12->fields.equipId.fields.fakeValue;
      if ( (BYTE3((*v9)->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20);
      *(_QWORD *)&v51.fields.currentCryptoKey = v22;
      *(_QWORD *)&v51.fields.fakeValue = v21;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v51, 0LL);
      if ( !v10 )
        break;
      v23 = (__int64 *)(v13 + 16);
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v10,
              (WarEntity_o **)(v13 + 16),
              UserId,
              (const MethodInfo_21C049C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v24 = v9;
      v25 = *v9;
      v26 = List;
      v28 = *(_QWORD *)&v12->fields.equipId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&v12->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v25);
      *(_QWORD *)&v52.fields.currentCryptoKey = v28;
      *(_QWORD *)&v52.fields.fakeValue = v27;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v52, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)masterFemaleEquipTexture,
        UserId,
        0LL,
        (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      List = v26;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)masterMaleEquipTexture,
        UserId,
        0LL,
        (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
      v32 = *v23;
      if ( !*v23 )
        break;
      v34 = *(_QWORD *)(v32 + 64);
      v33 = *(_QWORD *)(v32 + 72);
      v35 = *v24;
      v9 = v24;
      v50[0] = v34;
      v50[1] = v33;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(v35, v50, v31);
      v37 = System_String__Format((System_String_o *)StringLiteral_9075/*"MasterFace/equip{0:D5}"*/, v36, 0LL);
      v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v38,
        (Il2CppObject *)v13,
        Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UserId = AssetManager__loadAssetStorage(v37, v38, 10, 0LL);
      v40 = *v23;
      if ( !*v23 )
        break;
      v42 = *(_QWORD *)(v40 + 80);
      v41 = *(_QWORD *)(v40 + 88);
      v43 = *v24;
      v49[0] = v42;
      v49[1] = v41;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(v43, v49, v39);
      v45 = System_String__Format((System_String_o *)StringLiteral_9075/*"MasterFace/equip{0:D5}"*/, v44, 0LL);
      v46 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v46,
        (Il2CppObject *)v13,
        Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__1__,
        0LL);
      UserId = AssetManager__loadAssetStorage(v45, v46, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_38:
    sub_B7076C(UserId, v4);
  }
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

  if ( (byte_4352E05 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__LoadMultipleServant_d__366_TypeInfo);
    byte_4352E05 = 1;
  }
  v3 = sub_B70764(MyRoomControl__LoadMultipleServant_d__366_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__366___ctor((MyRoomControl__LoadMultipleServant_d__366_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  CommonUI_o *Instance; // x0
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
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_4352E0F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass381_0__LoadPhotoCampaignAssets_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass381_0_TypeInfo);
    sub_B70694(&StringLiteral_9368/*"MyRoom/PhotoCampaign"*/);
    byte_4352E0F = 1;
  }
  v5 = sub_B70764(MyRoomControl___c__DisplayClass381_0_TypeInfo);
  MyRoomControl___c__DisplayClass381_0___ctor((MyRoomControl___c__DisplayClass381_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callBack, v14, v15, v16, v17, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass381_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9368/*"MyRoom/PhotoCampaign"*/, v20, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(Instance, v7);
  }
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

  if ( (byte_4352E15 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__LoadPhotoCampaignServant_d__388_TypeInfo);
    byte_4352E15 = 1;
  }
  v3 = sub_B70764(MyRoomControl__LoadPhotoCampaignServant_d__388_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__388___ctor((MyRoomControl__LoadPhotoCampaignServant_d__388_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4352DBC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4352DBC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4352DD8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__LoadServantForm_b__264_0__);
    byte_4352DD8 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__264_0__, 0LL);
  if ( !svtCtr )
    sub_B7076C(v5, v6);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  UIWidget_o *playBtnImg; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v5; // x1
  int v6; // s0
  const MethodInfo *v10; // x1
  MyRoomControl_c *v11; // x0

  if ( (byte_4352DD9 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&StringLiteral_8506/*"LOAD_END"*/);
    byte_4352DD9 = 1;
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
    sub_B7076C(myRoomFsm, v5);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8506/*"LOAD_END"*/, 0LL);
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
  if ( (byte_4352DF1 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9374/*"MyRoomUIAnimationEnd"*/);
    byte_4352DF1 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9374/*"MyRoomUIAnimationEnd"*/, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  const MethodInfo *v4; // x1
  int32_t multipleViewState; // w8
  const MethodInfo *v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x5
  int32_t photoCampaignState; // w8
  const MethodInfo *v12; // x1
  int32_t type; // w8
  int32_t mState; // w8
  int v15; // w9
  char v16; // w8
  __int64 *v17; // x8
  __int64 *v18; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  System_String_o *ActiveStateName; // x0
  MyRoomControl_o *v22; // x8
  struct SerialCodeComponent_o *serialCodeComp; // x20
  UIWidget_o *changeBtnImg; // x20
  int v25; // s0
  MyRoomControl_c *v29; // x0
  __int64 value; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v2 = this;
  if ( (byte_4352DEE & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_OnClickBack__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3175/*"CLOSE_MATERIAL_COLLECTION"*/);
    sub_B70694(&StringLiteral_3174/*"CLOSE_MATERIAL"*/);
    sub_B70694(&StringLiteral_3186/*"CLOSE_USER_SERVANT_COIN"*/);
    sub_B70694(&StringLiteral_3111/*"CLICK_BACK"*/);
    sub_B70694(&StringLiteral_3178/*"CLOSE_NOTICE"*/);
    sub_B70694(&StringLiteral_3172/*"CLOSE_GAMEOPTION"*/);
    sub_B70694(&StringLiteral_3173/*"CLOSE_ITEMLIST"*/);
    sub_B70694(&StringLiteral_3176/*"CLOSE_MATERIAL_COSTUME"*/);
    sub_B70694(&StringLiteral_3169/*"CLOSE_CONTINUE_DEVICE"*/);
    sub_B70694(&StringLiteral_3164/*"CLOSE_BLACKLIST"*/);
    sub_B70694(&StringLiteral_13241/*"State 5"*/);
    sub_B70694(&StringLiteral_3181/*"CLOSE_SERIAL_CODE"*/);
    sub_B70694(&StringLiteral_3166/*"CLOSE_CHANGE_PROFILE"*/);
    sub_B70694(&StringLiteral_3182/*"CLOSE_SOUND_PLAYER"*/);
    this = (MyRoomControl_o *)sub_B70694(&StringLiteral_3171/*"CLOSE_FAVORITE_CHANGE"*/);
    byte_4352DEE = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_79;
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
          MyRoomControl__CloseMutlipleServant(v2, v12);
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
          MyRoomControl__CloseMultipleView(v2, v6);
        }
        return;
      }
      if ( v2->fields.photoCampaignState )
      {
        v7 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
          v7 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickBack__);
        v8 = (System_Reflection_MethodBase_o *)sub_B70678(v7, v7[3]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
        photoCampaignState = v2->fields.photoCampaignState;
        switch ( photoCampaignState )
        {
          case 7:
            MyRoomControl__DispPhotoCampaign(
              v2,
              v2->fields.photoCampaignServantUsrId,
              v2->fields.photoCampaignLimitCount,
              v2->fields.photoMasterEquipId,
              v2->fields.photoMasterGenderType,
              v10);
            break;
          case 2:
            v2->fields.photoCampaignServantUsrId = 0LL;
            v2->fields.photoCampaignState = 1;
            v2->fields.photoCampaignLimitCount = 0;
            MyRoomControl__ClosePhotoCampaignServant(v2, v9);
            break;
          case 1:
            v2->fields.photoCampaignState = 0;
            MyRoomControl__ClosePhotoCampaignPanel(v2, v9);
            break;
        }
        return;
      }
      this = (MyRoomControl_o *)MyRoomControl__GetState(v2, v4);
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
          goto LABEL_79;
        this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        type = v2->fields.type;
      }
      method = (const MethodInfo *)StringLiteral_3111/*"CLICK_BACK"*/;
      v15 = type - 1;
      v16 = 0;
      switch ( v15 )
      {
        case 0:
          v17 = &StringLiteral_3174/*"CLOSE_MATERIAL"*/;
          goto LABEL_51;
        case 1:
          v18 = &StringLiteral_3175/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_59;
        case 2:
          v18 = &StringLiteral_3173/*"CLOSE_ITEMLIST"*/;
          goto LABEL_59;
        case 3:
          v18 = &StringLiteral_3166/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_59;
        case 4:
          optionComp = v2->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v16 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              method = (const MethodInfo *)StringLiteral_3164/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v18 = &StringLiteral_3172/*"CLOSE_GAMEOPTION"*/;
LABEL_59:
            method = (const MethodInfo *)*v18;
            v16 = 0;
          }
LABEL_60:
          if ( ((unsigned __int8)v16 & (v2->fields.mState != 0)) != 0 )
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
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13241/*"State 5"*/, 0LL) )
              return;
            this = (MyRoomControl_o *)v2->fields.myRoomData;
            if ( this )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0LL);
              if ( this )
              {
                v22 = this;
                v31 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&this->fields.materialCollectionComp;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = *(_QWORD *)&v31.fields.currentCryptoKey;
                  serialCodeComp = v22->fields.serialCodeComp;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v31.fields.currentCryptoKey = value;
                  *(_QWORD *)&v31.fields.fakeValue = serialCodeComp;
                }
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v31, 0LL) < 1
                  || v2->fields.isHeroine && v2->fields.isHeroineReave )
                {
                  return;
                }
                changeBtnImg = (UIWidget_o *)v2->fields.changeBtnImg;
                *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
                if ( changeBtnImg )
                {
                  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v25, 0LL);
                  v29 = MyRoomControl_TypeInfo;
                  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                    v29 = MyRoomControl_TypeInfo;
                  }
                  v2->fields.buttonFlag |= v29->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 5:
          v17 = &StringLiteral_3178/*"CLOSE_NOTICE"*/;
LABEL_51:
          method = (const MethodInfo *)*v17;
          v16 = 1;
          goto LABEL_60;
        case 6:
          v18 = &StringLiteral_3181/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_59;
        case 7:
          v18 = &StringLiteral_3169/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_59;
        case 8:
          v18 = &StringLiteral_3171/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_59;
        case 9:
          v18 = &StringLiteral_3182/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_59;
        case 10:
          v18 = &StringLiteral_3176/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_59;
        case 16:
          v18 = &StringLiteral_3186/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_59;
        default:
          goto LABEL_60;
      }
LABEL_79:
      sub_B7076C(this, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickChangeLimit(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  MyRoomControl_c *v4; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v7; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  ServantEntity_o *Entity; // x21
  const MethodInfo *v14; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t size; // w10
  int32_t v17; // w8
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x20
  __int64 v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4352DCF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_15619/*"Wait_Action"*/);
    sub_B70694(&StringLiteral_3022/*"CHANGE_LIMIT"*/);
    sub_B70694(&StringLiteral_7242/*"Help"*/);
    byte_4352DCF = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2 | ((this->fields.buttonFlag & v4->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
    goto LABEL_30;
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_50;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15619/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_50;
    v7 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v7, (System_String_o *)StringLiteral_7242/*"Help"*/, 0LL) )
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
      v19 = *(_QWORD *)&myRoomFsm[1].fields.eventHandlerComponentsAdded;
      addEventHandlers = myRoomFsm[1].fields.addEventHandlers;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v21.fields.currentCryptoKey = v19;
      *(_QWORD *)&v21.fields.fakeValue = addEventHandlers;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL) > 0 || this->fields.isHeroine )
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_50;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)myRoomFsm;
  v12 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v20, 0LL);
  if ( !v10 )
    goto LABEL_50;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v10,
                                (int32_t)myRoomFsm,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v14);
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
      v17 = this->fields.materialFigureSvtDispIdx + 1;
      if ( v17 >= size )
        v17 = 0;
      else
        this->fields.materialFigureSvtDispIdx = v17;
      this->fields.materialFigureSvtDispIdx = v17;
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
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3022/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_50:
      sub_B7076C(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4352E00 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352E00 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v3);
}


void __fastcall MyRoomControl__OnClickDispPhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4352E2B & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_OnClickDispPhotoUi__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E2B = 1;
  }
  v3 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickDispPhotoUi__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields.photoCampaignState = 2;
  photoMasterTouchPress = (UnityEngine_Object_o *)this->fields.photoMasterTouchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoMasterTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoMasterTouchPress;
    if ( !gameObject )
      goto LABEL_21;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  photoSvtTouchPress = (UnityEngine_Object_o *)this->fields.photoSvtTouchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoSvtTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoSvtTouchPress;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        goto LABEL_19;
      }
    }
LABEL_21:
    sub_B7076C(gameObject, v6);
  }
LABEL_19:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v9);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4352E0E & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_OnClickEventLogSortKind__);
    byte_4352E0E = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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
    sub_B7076C(materialCollectionServantListViewManager, v5);
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

  if ( (byte_4352E01 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352E01 = 1;
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
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t photoCampaignState; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // kr00_8
  float v10; // s11
  UnityEngine_GameObject_o *v11; // x20
  float v12; // s5
  float v13; // s6
  float v14; // s7
  float v15; // s4
  UnityEngine_GameObject_o *v16; // x0
  float x; // s12
  float v18; // s13
  float v19; // s14
  UnityEngine_GameObject_o *v20; // x20
  float v21; // s4
  float v22; // s5
  float v23; // s3
  UnityEngine_GameObject_o *v24; // x20
  float v25; // s5
  float v26; // s6
  float v27; // s7
  float v28; // s4
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x20
  float v31; // s4
  float v32; // s5
  float v33; // s3
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
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

  if ( (byte_4352E1E & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    sub_B70694(&StringLiteral_6778/*"FinishedCloseFullScreenPhotoCampaign"*/);
    byte_4352E1E = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v68.fields.z = 0.0;
  *(_QWORD *)&v68.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_33;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  switch ( photoCampaignState )
  {
    case 6:
      v34 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
        v34 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v35 = (System_Reflection_MethodBase_o *)sub_B70678(v34, v34[3]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
      goto LABEL_30;
    case 5:
      v36 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
        v36 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v37 = (System_Reflection_MethodBase_o *)sub_B70678(v36, v36[3]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
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
        goto LABEL_33;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v74.fields.x = 1.0;
      v74.fields.y = 1.0;
      v74.fields.z = 1.0;
      TweenScale__Begin(v43, 0.2, v74, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v75.fields.y = 11.0;
      v75.fields.x = 0.0;
      v75.fields.z = 0.0;
      TweenPosition__Begin(v44, 0.2, v75, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_33;
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
        goto LABEL_33;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v76.fields.x = 1.0;
      v76.fields.y = 1.0;
      v76.fields.z = 1.0;
      TweenScale__Begin(v50, 0.2, v76, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v77.fields.y = 11.0;
      v77.fields.x = 0.0;
      v77.fields.z = 0.0;
      TweenPosition__Begin(v51, 0.2, v77, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
LABEL_30:
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v53 = TweenAlpha__Begin(v52, 0.2, 0.0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !v53 )
        goto LABEL_33;
      v53->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
      p_eventReceiver = &v53->fields.eventReceiver;
      sub_B70630(
        (BattleServantConfConponent_o *)p_eventReceiver,
        (System_Int32_array **)maskBoxCollider,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      v61 = (System_Int32_array **)StringLiteral_6778/*"FinishedCloseFullScreenPhotoCampaign"*/;
      p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6778/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_B70630((BattleServantConfConponent_o *)(p_eventReceiver + 1), v61, v62, v63, v64, v65, v66, v67);
      return;
    case 4:
      v5 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      this->fields.photoCampaignState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v68, v7);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        v9 = *(_QWORD *)&v68.fields.x;
        v10 = v68.fields.z;
        v11 = v8;
        v78 = UnityEngine_Quaternion__Euler_36099348(v68, 0LL);
        v12 = v78.fields.y;
        v13 = v78.fields.z;
        v14 = v78.fields.w;
        v78.fields.y = v78.fields.x;
        v78.fields.z = v12;
        v78.fields.w = v13;
        v15 = v14;
        TweenRotation__Begin(v11, 0.2, *(UnityEngine_Quaternion_o *)&v78.fields.y, 0LL);
        maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
        if ( maskBoxCollider )
        {
          v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
          x = localScale.fields.x;
          v18 = localScale.fields.y;
          v19 = localScale.fields.z;
          TweenScale__Begin(v16, 0.2, localScale, 0LL);
          maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
          if ( maskBoxCollider )
          {
            v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
            zero = UnityEngine_Vector3__get_zero(0LL);
            v21 = zero.fields.y;
            v22 = zero.fields.z;
            zero.fields.y = zero.fields.x;
            zero.fields.z = v21;
            v23 = v22;
            TweenPosition__Begin(v20, 0.2, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              *(_QWORD *)&v71.fields.x = v9;
              v71.fields.z = v10;
              v79 = UnityEngine_Quaternion__Euler_36099348(v71, 0LL);
              v25 = v79.fields.y;
              v26 = v79.fields.z;
              v27 = v79.fields.w;
              v79.fields.y = v79.fields.x;
              v79.fields.z = v25;
              v79.fields.w = v26;
              v28 = v27;
              TweenRotation__Begin(v24, 0.2, *(UnityEngine_Quaternion_o *)&v79.fields.y, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v73.fields.x = x;
                v73.fields.y = v18;
                v73.fields.z = v19;
                TweenScale__Begin(v29, 0.2, v73, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                  v72 = UnityEngine_Vector3__get_zero(0LL);
                  v31 = v72.fields.y;
                  v32 = v72.fields.z;
                  v72.fields.y = v72.fields.x;
                  v72.fields.z = v31;
                  v33 = v32;
                  TweenPosition__Begin(v30, 0.2, *(UnityEngine_Vector3_o *)&v72.fields.y, 0LL);
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
LABEL_33:
      sub_B7076C(maskBoxCollider, method);
  }
}


void __fastcall MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *backBtn; // x0
  __int64 v4; // x1
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  MyRoomControl_c *klass; // x11
  bool v9; // zf
  int32_t v10; // w8
  __int64 v11; // x1
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_4352E1C & 1) == 0 )
  {
    sub_B70694(&TouchEffectManager_TypeInfo);
    byte_4352E1C = 1;
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_B7076C(backBtn, v4);
  UnityEngine_GameObject__SetActive(backBtn, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v6);
  MyRoomControl__SetBackButtonIgnore(this, 1, v7);
  klass = this->klass;
  v9 = !this->fields._IsOnlyServant_k__BackingField;
  if ( this->fields._IsOnlyServant_k__BackingField )
    v10 = 4;
  else
    v10 = 6;
  this->fields.photoCampaignState = v10;
  if ( v9 )
    v11 = 870LL;
  else
    v11 = 362LL;
  v12 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, __int64, __int64, void *))klass->vtable._4_CaptureServant.method)(
                                              this,
                                              v11,
                                              552LL,
                                              klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall MyRoomControl__OnClickPhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct UIPanel_o *v8; // x8

  if ( (byte_4352E2C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_MyRoomControl_OnClickPhotoServant__);
    byte_4352E2C = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        photoMasterPanel = this->fields.photoMasterPanel;
        if ( photoMasterPanel )
        {
          v5 = (UIPanel_o *)photoCampaignStandFigureBack;
          if ( SLODWORD(photoCampaignStandFigureBack[13].klass) > photoMasterPanel->fields.mDepth )
            return;
          v6 = Method_MyRoomControl_OnClickPhotoServant__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoServant__ + 75) & 2) != 0 )
            v6 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickPhotoServant__);
          v7 = (System_Reflection_MethodBase_o *)sub_B70678(v6, v6[3]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
          v8 = this->fields.photoMasterPanel;
          if ( v8 )
          {
            UIPanel__set_depth(v5, v8->fields.mDepth + 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B7076C(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_4352E02 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352E02 = 1;
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
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v7; // x20
  int max_length; // w9
  struct System_Int64_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Int32_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x4
  __int64 v25; // x0

  if ( (byte_4352DFE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_MyRoomControl__OnClickSelectMultipleServant_b__358_0__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_15619/*"Wait_Action"*/);
    sub_B70694(&StringLiteral_7242/*"Help"*/);
    byte_4352DFE = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_17;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15619/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_17;
    v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7242/*"Help"*/, 0LL) )
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
    sub_B7076C(myRoomFsm, method);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v25 = sub_B70798(myRoomFsm);
      sub_B70738(v25, 0LL);
    }
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v7];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v7;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_17;
  }
  v9 = (struct System_Int64_array *)sub_B706AC(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v16;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__358_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v23, 1, v24);
}


void __fastcall MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  bool IsEnablePhotoCampaignButton; // w20
  _QWORD *v7; // x8
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4352E11 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl_EndLoadPhotoAsset__);
    sub_B70694(&Method_MyRoomControl_OnClickSelectPhotoCampaign__);
    sub_B70694(&StringLiteral_15619/*"Wait_Action"*/);
    sub_B70694(&StringLiteral_7242/*"Help"*/);
    byte_4352E11 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15619/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7242/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_B7076C(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v7 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v8 = (System_Reflection_MethodBase_o *)sub_B70678(v7, v7[3]);
  if ( IsEnablePhotoCampaignButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl_EndLoadPhotoAsset__, 0LL);
    MyRoomControl__LoadPhotoCampaignAssets(this, v9, v10);
    if ( !this->fields.isLoadMasterEquip )
    {
      this->fields.isLoadMasterEquip = 1;
      MyRoomControl__LoadMasterEquip(this, v11);
    }
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 v6; // x11

  if ( (byte_4352E0D & 1) == 0 )
  {
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4352E0D = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_B7076C(Instance, v4);
  }
  Instance = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !Instance )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder((MaterialEventLogListViewManager_o *)Instance, 0LL);
}


void __fastcall MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  MyRoomControl_c *v4; // x0
  __int64 v5; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4352DD3 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_10595/*"PLAY_VOICE"*/);
    byte_4352DD3 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_25;
  v4 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2 | ((this->fields.buttonFlag & v4->static_fields->BUTTON_VOICE_PLAY) == 0) )
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
        MyRoomControl__setNormalFace_27265484(this, 1, v7);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10595/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_B7076C(svtCtr, v5);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4352DFF & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DFF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v3);
}


void __fastcall MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v6; // x11
  __int64 v7; // x8
  MyRoomStateMaterial_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v12; // x2
  _BOOL4 v13; // w19

  if ( (byte_4352E0C & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_OnClickValentineListChange__);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4352E0C = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = Instance[1].klass;
  if ( !klass )
    goto LABEL_17;
  v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v6 )
    goto LABEL_17;
  if ( *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v6 - 8) != MyRoomRootComponent_TypeInfo )
    goto LABEL_17;
  v7 = *(_QWORD *)&klass->_1.this_arg.bits;
  if ( !v7 )
    goto LABEL_17;
  v8 = *(MyRoomStateMaterial_o **)(v7 + 864);
  v9 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnClickValentineListChange__);
  v10 = (System_Reflection_MethodBase_o *)sub_B70678(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v8
    || (MyRoomStateMaterial__ValentineListMomentChange(v8, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_17:
    sub_B7076C(Instance, v4);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v12);
  v13 = this->fields.IsListActive;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__SaveIsListActive(v13, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4352DBF & 1) == 0 )
  {
    sub_B70694(&Gesture_EventHandler_TypeInfo);
    sub_B70694(&FingerGestures_TypeInfo);
    sub_B70694(&Method_MyRoomControl_FingerGestures_OnGestureEvent__);
    byte_4352DBF = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_B70764(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v3, 0LL);
}


void __fastcall MyRoomControl__OnclickPhotoMaster(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct UIPanel_o *v8; // x8

  if ( (byte_4352E2D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_MyRoomControl_OnclickPhotoMaster__);
    byte_4352E2D = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      photoMasterPanel = this->fields.photoMasterPanel;
      if ( photoMasterPanel )
      {
        v5 = (UIPanel_o *)photoCampaignStandFigureBack;
        if ( photoCampaignStandFigureBack )
        {
          if ( photoMasterPanel->fields.mDepth > SLODWORD(photoCampaignStandFigureBack[13].klass) )
            return;
          v6 = Method_MyRoomControl_OnclickPhotoMaster__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnclickPhotoMaster__ + 75) & 2) != 0 )
            v6 = (_QWORD *)sub_B7069C(Method_MyRoomControl_OnclickPhotoMaster__);
          v7 = (System_Reflection_MethodBase_o *)sub_B70678(v6, v6[3]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
          v8 = this->fields.photoMasterPanel;
          if ( v8 )
          {
            UIPanel__set_depth(v5, v8->fields.mDepth - 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B7076C(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenMasterEquipSettingDialog(
        MyRoomControl_o *this,
        System_Action_int__int__o *callBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  MasterEquipSettingDialog_o *masterEquipSettingDialog; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x23
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  System_Action_bool__o *v10; // x25
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4352E13 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_MyRoomControl_SetMaskCollider__);
    byte_4352E13 = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v10 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  if ( !masterEquipSettingDialog )
    sub_B7076C(v11, v12);
  MasterEquipSettingDialog__Open(
    masterEquipSettingDialog,
    masterMaleEquipTexture,
    masterFemaleEquipTexture,
    callBack,
    closeCallBack,
    v10,
    0LL);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)usrSvtIds,
    (System_String_array **)imageLimitCounts,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)imageLimitCounts,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
}


void __fastcall MyRoomControl__OpenSelectImageLimit(
        MyRoomControl_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_Action_bool__int__o *callback,
        int32_t index,
        const MethodInfo *method)
{
  SelectImageLimitDialog_o *selectImageLimitDialog; // x24
  System_Action_bool__o *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4352E09 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_MyRoomControl_SetMaskCollider__);
    byte_4352E09 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v12 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  if ( !selectImageLimitDialog )
    sub_B7076C(v13, v14);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v12, callback, index, 0LL);
}


void __fastcall MyRoomControl__PlayOpening(
        MyRoomControl_o *this,
        System_String_o *fileName,
        System_String_o *assetPath,
        bool isCanSkip,
        const MethodInfo *method)
{
  __int64 v8; // x24
  MyRoomControl_o *v9; // x0
  const MethodInfo *v10; // x1
  System_Int32_array **CriMoviePlayerObject; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array ***v19; // x22
  CRIMoviePlayer_o *v20; // x23
  BgmManager_c *v21; // x0
  float masterVolume; // s8
  System_Action_o *v23; // x25

  if ( (byte_4352DF7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass345_0__PlayOpening_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass345_0_TypeInfo);
    byte_4352DF7 = 1;
  }
  v8 = sub_B70764(MyRoomControl___c__DisplayClass345_0_TypeInfo);
  MyRoomControl___c__DisplayClass345_0___ctor((MyRoomControl___c__DisplayClass345_0_o *)v8, 0LL);
  CriMoviePlayerObject = (System_Int32_array **)MyRoomControl__CreateCriMoviePlayerObject(v9, v10);
  if ( !v8 )
    goto LABEL_15;
  *(_QWORD *)(v8 + 16) = CriMoviePlayerObject;
  v19 = (System_Int32_array ***)(v8 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v8 + 16), CriMoviePlayerObject, v13, v14, v15, v16, v17, v18);
  v20 = *(CRIMoviePlayer_o **)(v8 + 16);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_434E401 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_434E401 = 1;
  }
  v21 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v21 = BgmManager_TypeInfo;
  }
  masterVolume = v21->static_fields->masterVolume;
  v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v8, Method_MyRoomControl___c__DisplayClass345_0__PlayOpening_b__0__, 0LL);
  if ( !v20
    || (CRIMoviePlayer__Initialize(v20, fileName, assetPath, masterVolume, isCanSkip, 0LL, v23, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *v19) == 0LL) )
  {
LABEL_15:
    sub_B7076C(CriMoviePlayerObject, v12);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  AssetData_o *photoCampaignAssetData; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v29; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  AssetData_array *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *photoMasterTexture; // x20
  BattleServantConfConponent_o *p_photoMasterTexture; // x19
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7

  if ( (byte_4352E2E & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E2E = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.photoCampaignShutterEffect, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.photoCampaignCameraEffect, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.photoLayerChangeObj = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.photoLayerChangeObj, 0LL, v15, v16, v17, v18, v19, v20);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_31197044(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.photoCampaignAssetData, 0LL, v22, v23, v24, v25, v26, v27);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !klass )
      goto LABEL_47;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.photoTargetSelectDialog, 0LL, v32, v33, v34, v35, v36, v37);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !klass )
      goto LABEL_47;
    v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v39, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.photoSettingButtonComponent,
      0LL,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !klass )
      goto LABEL_47;
    v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v47, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.masterEquipSettingDialog,
      0LL,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v55 = (AssetData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)masterEquipAssetData,
                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_31197252(v55, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.masterEquipAssetData, 0LL, v56, v57, v58, v59, v60, v61);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = (BattleServantConfConponent_o *)&this->fields.photoMasterTexture;
    klass = (UnityEngine_Component_o *)p_photoMasterTexture->klass;
    if ( p_photoMasterTexture->klass )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)klass, 0LL);
      p_photoMasterTexture->klass = 0LL;
      sub_B70630(p_photoMasterTexture, 0LL, v64, v65, v66, v67, v68, v69);
      return;
    }
LABEL_47:
    sub_B7076C(klass, v29);
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

  if ( (byte_4352DBD & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DBD = 1;
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
    sub_B70630(p_asstName, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ReleaseTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  int32_t buttonFlag; // w9
  int32_t BUTTON_MULTIPLE_VIEW; // w8
  int v6; // w11
  int v7; // w8
  const MethodInfo *v8; // x1
  int32_t v9; // w9
  int32_t BUTTON_PHOTO_CAMPAIGN; // w8
  int v11; // w11
  int v12; // w8
  UIWidget_o *playBtnImg; // x20
  MyRoomData_o *myRoomData; // x0
  __int64 v15; // x1
  int v16; // s0
  UIWidget_o *helpButtonImg; // x20
  int v21; // s0
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v28; // w20
  System_String_o *ActiveStateName; // x0
  bool v30; // w0
  UIWidget_o *changeBtnImg; // x20
  int v32; // s0
  MyRoomControl_c *v36; // x0
  UIWidget_o *changeBGBtnImg; // x20
  int v38; // s0
  MyRoomControl_c *v42; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4352DF3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_13241/*"State 5"*/);
    byte_4352DF3 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  BUTTON_MULTIPLE_VIEW = v3->static_fields->BUTTON_MULTIPLE_VIEW;
  v6 = buttonFlag & ~BUTTON_MULTIPLE_VIEW;
  v7 = buttonFlag | BUTTON_MULTIPLE_VIEW;
  if ( this->fields.type )
    v7 = v6;
  this->fields.buttonFlag = v7;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  v9 = this->fields.buttonFlag;
  BUTTON_PHOTO_CAMPAIGN = MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  v11 = v9 & ~BUTTON_PHOTO_CAMPAIGN;
  v12 = v9 | BUTTON_PHOTO_CAMPAIGN;
  if ( this->fields.type )
    v12 = v11;
  this->fields.buttonFlag = v12;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v8);
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_39;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v16, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
  if ( !helpButtonImg )
    goto LABEL_39;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v21, 0LL);
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
  *(_QWORD *)&v44.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v44.fields.fakeValue = mstInfoData;
  myRoomData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v44, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_39;
    v28 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v28 = (int)myRoomData;
  }
  myRoomData = (MyRoomData_o *)this->fields.myRoomFsm;
  if ( !myRoomData )
    goto LABEL_39;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)myRoomData, 0LL);
  v30 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13241/*"State 5"*/, 0LL);
  if ( v28 >= 1 && v30 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_39;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v32, 0LL);
    v36 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v36 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v36->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_39;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v38, 0LL);
  v42 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v42 = MyRoomControl_TypeInfo;
  }
  static_fields = v42->static_fields;
  myRoomData = (MyRoomData_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !myRoomData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomData, 0, 0LL),
        (myRoomData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_39:
    sub_B7076C(myRoomData, v15);
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
    sub_B7076C(0LL, v5);
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
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v5; // s0
  MyRoomControl_c *v9; // x0
  int v10; // w8
  int v11; // s0
  MyRoomControl_c *v15; // x0

  v2 = this;
  if ( (byte_4352DCD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (MyRoomControl_o *)sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352DCD = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_19:
      sub_B7076C(this, method);
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
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_19;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v11, 0LL);
    v15 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v15 = MyRoomControl_TypeInfo;
    }
    v10 = v2->fields.buttonFlag | v15->static_fields->BUTTON_LIMIT_CHANGE;
  }
  else
  {
    *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_19;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v5, 0LL);
    v9 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v9 = MyRoomControl_TypeInfo;
    }
    v10 = v2->fields.buttonFlag & ~v9->static_fields->BUTTON_LIMIT_CHANGE;
  }
  v2->fields.buttonFlag = v10;
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
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
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
    sub_B7076C(this, isEnable);
  }
  if ( isEnable )
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0LL);
  else
    TitleInfoControl__FrameOut((TitleInfoControl_o *)this, 0, 0LL);
}


void __fastcall MyRoomControl__SetFacePhotoServant(
        MyRoomControl_o *this,
        ServantPhotoEntity_FaceData_o *faceData,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MyRoomControl_o *v6; // x21
  struct StandFigureBack_o *photoCampaignStandFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x23
  int size; // w24
  __int64 v10; // x25
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v13; // w21
  StandFigureCollect_o *v14; // x8
  System_Action_o *v15; // x3
  __int64 v16; // x0

  v6 = this;
  if ( (byte_4352E19 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    this = (MyRoomControl_o *)sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4352E19 = 1;
  }
  photoCampaignStandFigureBack = v6->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  standFigureCollectList = photoCampaignStandFigureBack->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_21;
  size = standFigureCollectList->fields._size;
  if ( size >= 1 )
  {
    if ( faceData )
    {
      v10 = 0LL;
      while ( 1 )
      {
        multiFace = faceData->fields.multiFace;
        if ( !multiFace )
          break;
        if ( (unsigned int)v10 >= multiFace->max_length )
          goto LABEL_22;
        multiForm = faceData->fields.multiForm;
        if ( !multiForm )
          break;
        if ( (unsigned int)v10 >= multiForm->max_length )
        {
LABEL_22:
          v16 = sub_B70798(this);
          sub_B70738(v16, 0LL);
        }
        v13 = multiFace->m_Items[v10 + 1];
        if ( standFigureCollectList->fields._size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v14 = standFigureCollectList->fields._items->m_Items[v10];
        if ( !v14 )
          break;
        this = (MyRoomControl_o *)v14->fields._standFigure_k__BackingField;
        if ( !this )
          break;
        if ( (_DWORD)v10 )
          v15 = 0LL;
        else
          v15 = callbackFunc;
        UIStandFigureR__SetFace_40793900((UIStandFigureR_o *)this, v13, multiForm->m_Items[++v10], v15, 0.0, 0LL);
        if ( (int)v10 >= size )
          return;
      }
    }
LABEL_21:
    sub_B7076C(this, faceData);
  }
}


void __fastcall MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  __int64 v7; // x21
  ServantVoiceEntity_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x24
  __int64 figureSvtDispIdx; // x25
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *asstName; // x22
  System_Action_o *v50; // x23
  const MethodInfo *v51; // x3
  System_Action_o *v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Action_o *v59; // x20
  const MethodInfo *v60; // x2

  if ( (byte_4352DE6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__0__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__1__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__2__);
    sub_B70694(&MyRoomControl___c__DisplayClass310_0_TypeInfo);
    byte_4352DE6 = 1;
  }
  v7 = sub_B70764(MyRoomControl___c__DisplayClass310_0_TypeInfo);
  MyRoomControl___c__DisplayClass310_0___ctor((MyRoomControl___c__DisplayClass310_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  MyRoomControl__setupSvtImageIdList(this, v22);
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, 0, v23);
  v25 = (ServantVoiceEntity_o **)(v7 + 24);
  *(_QWORD *)(v7 + 24) = SvtVoiceEnt;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), SvtVoiceEnt, v26, v27, v28, v29, v30, v31);
  if ( *(_QWORD *)(v7 + 24) )
  {
    Instance = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v32);
      imageIdList = this->fields.imageIdList;
      if ( imageIdList )
      {
        figureSvtDispIdx = this->fields.figureSvtDispIdx;
        if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( *v25 )
        {
          MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                              *v25,
                              imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                              0LL);
          this->fields.voiceList = MyRoomVoiceList;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.voiceList,
            (System_Int32_array **)MyRoomVoiceList,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          Instance = *v25;
          if ( *v25 )
          {
            VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Instance, 0LL);
            this->fields.asstName = VoiceAssetName;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.asstName,
              (System_Int32_array **)VoiceAssetName,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            asstName = this->fields.asstName;
            v50 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v50,
              (Il2CppObject *)v7,
              Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v50, v51);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_16:
    sub_B7076C(Instance, v9);
  }
  this->fields.isExistVoiceData = 0;
LABEL_13:
  v52 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__1__, 0LL);
  *(_QWORD *)(v7 + 40) = v52;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
  if ( IsActSetMyRoomStandFigre )
  {
    v59 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v7,
      Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v59, v60);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0LL);
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
  if ( (byte_4352E04 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4352E04 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_B7076C(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v9 = sub_B70798(this);
      sub_B70738(v9, 0LL);
    }
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B7076C(0LL, flag);
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0LL);
}


void __fastcall MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x23
  __int64 materialFigureSvtDispIdx; // x24
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t v28; // w23
  struct System_Collections_Generic_List_int__o *v29; // x22
  __int64 v30; // x23
  int32_t Id; // w22
  struct System_Collections_Generic_List_int__o *v32; // x23
  __int64 v33; // x24
  int32_t v34; // w22
  StandFigureBack_o *standFigureBack; // x20
  int32_t v36; // w23
  System_Action_o *v37; // x24

  if ( (byte_4352DCC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass241_0_TypeInfo);
    sub_B70694(&UIStandFigureRender_TypeInfo);
    byte_4352DCC = 1;
  }
  v7 = sub_B70764(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor((MyRoomControl___c__DisplayClass241_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)end_act, v16, v17, v18, v19, v20, v21);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v22);
    MyRoomControl__SetChangeBtn(this, v24);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_24;
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  mStateMaterial = this->fields.mStateMaterial;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v28 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v28, 0LL);
  if ( !mStateMaterial )
    goto LABEL_24;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, LimitCountByImageLimitCostumeIn, 0LL);
  v29 = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !v29 )
    goto LABEL_24;
  v30 = this->fields.materialFigureSvtDispIdx;
  if ( v29->fields._size <= (unsigned int)v30 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  Id = ServantScriptMaster__getId(servantId, v29->fields._items->m_Items[v30 + 1], 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  v32 = this->fields.materialImageIdList;
  if ( !v32 )
    goto LABEL_24;
  v33 = this->fields.materialFigureSvtDispIdx;
  v34 = LimitCountByImageLimitCostumeIn;
  if ( v32->fields._size <= (unsigned int)v33 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  standFigureBack = this->fields.standFigureBack;
  v36 = v32->fields._items->m_Items[v33 + 1];
  v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_24:
    sub_B7076C(LimitCountByImageLimitCostumeIn, v9);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v36, 1, 0, v34, 10, v37, 0, 0LL);
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
    sub_B7076C(multipleViewButtonSprite, v8);
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
  __int64 v5; // x20
  __int64 _29045252; // x0
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
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 figureSvtDispIdx; // x23
  int32_t v23; // w21
  struct System_Collections_Generic_List_int__o *v24; // x22
  __int64 v25; // x23
  int32_t v26; // w21
  struct System_Int32_array *items; // x8
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w19
  int32_t v30; // w23
  System_Action_o *v31; // x24

  if ( (byte_4352DCA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass239_0_TypeInfo);
    sub_B70694(&UIStandFigureRender_TypeInfo);
    byte_4352DCA = 1;
  }
  v5 = sub_B70764(MyRoomControl___c__DisplayClass239_0_TypeInfo);
  MyRoomControl___c__DisplayClass239_0___ctor((MyRoomControl___c__DisplayClass239_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v5 + 24), v20);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29045252 = TutorialFlag__Get_29045252(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _29045252 & 1;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_21;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  _29045252 = ServantScriptMaster__getId(
                this->fields.figureSvtId,
                imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_21;
  v23 = _29045252;
  MyRoomData__getUsrSvtData(this->fields.myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  _29045252 = UIStandFigureRender__GetForm(v23, 1, -1, 0LL);
  v24 = this->fields.imageIdList;
  if ( !v24 )
    goto LABEL_21;
  v25 = this->fields.figureSvtDispIdx;
  v26 = _29045252;
  if ( v24->fields._size <= (unsigned int)v25 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  items = v24->fields._items;
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v30 = items->m_Items[v25 + 1];
  v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_21:
    sub_B7076C(_29045252, v7);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v30, 1, 0, v26, 10, v31, 0, 0LL);
}


void __fastcall MyRoomControl__SetMySvtFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x20
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
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  int32_t materialServantId; // w21
  int32_t v23; // w22
  const MethodInfo *v24; // x1
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_4352DCB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&MaterialServantLimitCountManager_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass240_0__SetMySvtFigure_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass240_0_TypeInfo);
    byte_4352DCB = 1;
  }
  v5 = sub_B70764(MyRoomControl___c__DisplayClass240_0_TypeInfo);
  MyRoomControl___c__DisplayClass240_0___ctor((MyRoomControl___c__DisplayClass240_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = end_act,
        sub_B70630(
          (BattleServantConfConponent_o *)(v5 + 24),
          (System_Int32_array **)end_act,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_B7076C(v6, v7);
  }
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  materialServantId = this->fields.materialServantId;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v23 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, v23, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v24);
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v5, Method_MyRoomControl___c__DisplayClass240_0__SetMySvtFigure_b__0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v25, v26);
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
    sub_B7076C(photoCampaignButtonSprite, v8);
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color(photoCampaignButtonSprite, v13, 0LL);
}


void __fastcall MyRoomControl__SetPhotoCampaignSprite(
        MyRoomControl_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  UIAtlas_o *photoCampaignAtlas; // x0

  photoCampaignAtlas = this->fields.photoCampaignAtlas;
  if ( !photoCampaignAtlas )
    goto LABEL_6;
  photoCampaignAtlas = (UIAtlas_o *)UIAtlas__GetSprite(photoCampaignAtlas, name, 0LL);
  if ( photoCampaignAtlas )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, this->fields.photoCampaignAtlas, 0LL);
      UISprite__set_spriteName(sprite, name, 0LL);
      return;
    }
LABEL_6:
    sub_B7076C(photoCampaignAtlas, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  struct UnityEngine_GameObject_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4352E27 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352E27 = 1;
  }
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, isActive, 0LL);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.photoSettingButtonComponent;
  if ( !photoCampaignCameraButton )
    goto LABEL_18;
  photoCampaignCameraButton = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)photoCampaignCameraButton,
                                0LL);
  if ( !photoCampaignCameraButton )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, isActive, 0LL);
  if ( isActive )
  {
    photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
    if ( photoCampaignCameraButton )
    {
      photoCampaignCameraEffect = this->fields.photoCampaignCameraEffect;
      transform = UnityEngine_GameObject__get_transform(photoCampaignCameraButton, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                (UILabel_o *)photoCampaignCameraEffect,
                                                transform,
                                                (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
      this->fields.photoCampaignInstantiateCameraEffect = v8;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B7076C(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_18;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4352DD5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352DD5 = 1;
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
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v7, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v10 = voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v10)
      || (v11 = voicePlayEffect, UITweener__set_tweenFactor((UITweener_o *)v10, 0.0, 0LL), !v11) )
    {
LABEL_20:
      sub_B7076C(voicePlayEffect, v4);
    }
    UITweener__set_tweenFactor((UITweener_o *)v11, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      HIDWORD(v10[1].klass) = 1;
      HIDWORD(v11[1].klass) = 1;
    }
    else
    {
      HIDWORD(v10[1].klass) = 0;
      HIDWORD(v11[1].klass) = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_45675728((UITweener_o *)v10, 1, 0LL);
    UITweener__Play_45675728((UITweener_o *)v11, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_B7076C(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_36100992(
                                              0,
                                              photoCampaignFaceList->max_length,
                                              0LL);
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.sceneJumpInfo = info;
  sub_B70630(
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
    sub_B7076C(0LL, v3);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B7076C(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_4352DC2 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MyRoomControl__setState__);
    byte_4352DC2 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4352DB6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352DB6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (DataManager_o *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, v5),
        !this->fields.frontObjectManager) )
  {
    sub_B7076C(Instance, v4);
  }
  v6 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v6 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v6, 0LL);
}


void __fastcall MyRoomControl__SetupMaterialSvtImageIdList(
        MyRoomControl_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  int32_t LimitCount; // w21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t ServantImageLimitSealAfter; // w21
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v10; // x2
  DataManager_o *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w26
  int32_t ImageLimitCount; // w24
  int32_t v15; // w24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v17; // x20
  unsigned __int64 v18; // x23
  int32_t v19; // w22
  __int64 v20; // x0

  if ( (byte_4352DB8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&MaterialServantLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352DB8 = 1;
  }
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v11 = Instance;
  if ( ((__int64)Instance->fields.saveDataMapList & 0x80000000) == 0 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v12, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    (ServantLimitImageMaster_o *)Instance,
                                    servantId,
                                    ImageLimitCount,
                                    0LL);
      if ( !this->fields.materialImageIdList )
        goto LABEL_40;
      v15 = (int)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    this->fields.materialImageIdList,
                                    (int32_t)Instance,
                                    (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v15,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v15 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v13;
        ++v13;
      }
      if ( ++v12 > SLODWORD(v11->fields.saveDataMapList) )
        goto LABEL_29;
    }
  }
  v13 = 0;
LABEL_29:
  Instance = (DataManager_o *)MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)Instance, servantId, v10);
  if ( !Instance )
LABEL_40:
    sub_B7076C(Instance, v7);
  datalist = Instance->fields.datalist;
  v17 = Instance;
  if ( (int)datalist >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)datalist )
      {
        v20 = sub_B70798(Instance);
        sub_B70738(v20, 0LL);
      }
      v19 = *((_DWORD *)&v17->fields.lookup + v18);
      if ( v19 >= 1 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v19,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v19 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v13;
        ++v13;
      }
      LODWORD(datalist) = v17->fields.datalist;
      ++v18;
    }
    while ( (__int64)v18 < (int)datalist );
  }
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4352DBE & 1) == 0 )
  {
    sub_B70694(&Gesture_EventHandler_TypeInfo);
    sub_B70694(&FingerGestures_TypeInfo);
    sub_B70694(&Method_MyRoomControl_FingerGestures_OnGestureEvent__);
    byte_4352DBE = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_B70764(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v3, 0LL);
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

  if ( (byte_4352E1D & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__StartCameraEffect_d__399_TypeInfo);
    byte_4352E1D = 1;
  }
  v3 = sub_B70764(MyRoomControl__StartCameraEffect_d__399_TypeInfo);
  MyRoomControl__StartCameraEffect_d__399___ctor((MyRoomControl__StartCameraEffect_d__399_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_4352DC0 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MyRoomControl__update__);
    byte_4352DC0 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2C80124 *)Method_CStateManager_MyRoomControl__update__);
  if ( this->fields.isEnableMultipleView )
    MyRoomControl__UpdateMutipleViewRemainTime(this, method);
  if ( this->fields.isEnablePhotoCampaign )
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, method);
}


void __fastcall MyRoomControl__UpdateMutipleViewRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  UILabel_o *multipleViewButtonRemainTimeLabel; // x21
  int64_t multipleViewFinishedTime; // x22
  int64_t v6; // x20
  System_String_o *RestTime6; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4352E0B & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4352E0B = 1;
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
    v6 = Time;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v6, 0LL);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_B7076C(RestTime6, v8);
    UILabel__set_text(multipleViewButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v6 > this->fields.multipleViewFinishedTime )
    {
      this->fields.multipleViewFinishedTime = -1LL;
      MyRoomControl__SetMultipleViewButtonColor(this, v9);
    }
  }
}


void __fastcall MyRoomControl__UpdatePhotoCampaignRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  UILabel_o *photoCampaignButtonRemainTimeLabel; // x21
  int64_t photoCampaignFinishedTime; // x22
  int64_t v6; // x20
  System_String_o *RestTime6; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4352E26 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4352E26 = 1;
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
    v6 = Time;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v6, 0LL);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_B7076C(RestTime6, v8);
    UILabel__set_text(photoCampaignButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v6 > this->fields.photoCampaignFinishedTime )
    {
      this->fields.photoCampaignFinishedTime = -1LL;
      MyRoomControl__SetPhotoCampaignButtonColor(this, v9);
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
    sub_B7076C(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__412_0(
        MyRoomControl_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4352E3A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass412_0__ChangeMasterSetting_b__1__);
    sub_B70694(&MyRoomControl___c__DisplayClass412_0_TypeInfo);
    byte_4352E3A = 1;
  }
  v7 = sub_B70764(MyRoomControl___c__DisplayClass412_0_TypeInfo);
  MyRoomControl___c__DisplayClass412_0___ctor((MyRoomControl___c__DisplayClass412_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 16) = genderType;
  *(_DWORD *)(v7 + 20) = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = *(_DWORD *)(v7 + 16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass412_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7076C(v8, v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__412_2(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *photoMasterTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  CommonUI_o *v6; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352E3B & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352E3B = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v5);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)photoMasterTexture;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
LABEL_9:
    sub_B7076C(photoMasterTexture, method);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__372_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4352E37 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__CloseMultipleView_b__372_1__);
    byte_4352E37 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__372_1__, 0LL);
  if ( !multipleViewComponent )
    sub_B7076C(v5, v6);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v4, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__372_1(MyRoomControl_o *this, const MethodInfo *method)
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
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 40, 0, 0LL);
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
      v9 = sub_B70798(titleInfo);
      sub_B70738(v9, 0LL);
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
    sub_B7076C(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__406_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4352E39 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_1__);
    byte_4352E39 = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_B7076C(v5, v6);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v4, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__406_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_B7076C(titleInfo, method);
  }
  StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v6);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__289_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B7076C(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__385_0(
        MyRoomControl_o *this,
        int32_t photoType,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x4

  if ( (byte_4352E38 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__EndLoadPhotoAsset_b__385_1__);
    byte_4352E38 = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__385_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v5, 1, v6);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__385_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_B7076C(this, method);
  PhotoCampaignComponent__Open(
    photoCampaignComponent,
    this->fields.photoCampaignType,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
}


void __fastcall MyRoomControl___GoToTitle_b__317_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  MyRoomControl_o *v6; // x0
  const MethodInfo *v7; // x1
  CommonUI_o *v8; // x19
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__317_1; // x20
  Il2CppObject *v13; // x21
  struct MyRoomControl___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4352E36 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__GoToTitle_b__317_1__);
    sub_B70694(&MyRoomControl___c_TypeInfo);
    byte_4352E36 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v6, v7);
    v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      Instance = MyRoomControl___c_TypeInfo;
    }
    static_fields = (struct MyRoomControl___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__317_1 = static_fields->__9__317_1;
    if ( !_9__317_1 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__317_1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__317_1, v13, Method_MyRoomControl___c__GoToTitle_b__317_1__, 0LL);
      v14 = MyRoomControl___c_TypeInfo->static_fields;
      v14->__9__317_1 = _9__317_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v14->__9__317_1,
        (System_Int32_array **)_9__317_1,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( v8 )
    {
      CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, _9__317_1, 0LL);
      return;
    }
LABEL_19:
    sub_B7076C(Instance, v5);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__286_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B7076C(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__264_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t mState; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v6; // x21
  StandFigureBack_o *SvtStandFigure; // x0
  unsigned int localPosition; // s0
  float v9; // s8
  float v10; // s1
  float v11; // s9
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352E34 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__LoadServantForm_b__264_1__);
    sub_B70694(&StringLiteral_8664/*"LoadServantFormEnd"*/);
    byte_4352E34 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__264_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v6, 0LL);
      return;
    }
LABEL_18:
    sub_B7076C(SvtStandFigure, method);
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
  v9 = *(float *)&localPosition;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)SvtStandFigure,
                                           0LL);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v11 = v10;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0LL);
  v13.fields.x = -v9;
  v13.fields.y = v11;
  MyRoomControl__moveControl(this, this->fields.svtObj, v13, (System_String_o *)StringLiteral_8664/*"LoadServantFormEnd"*/, v12);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__358_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_B7076C(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__309_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4352E35 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3177/*"CLOSE_MENU"*/);
    byte_4352E35 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3177/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__247_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4352E33 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7178/*"HIDE_END"*/);
    byte_4352E33 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7178/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__284_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B7076C(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__238_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v4; // x8

  if ( (byte_4352E32 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8506/*"LOAD_END"*/);
    sub_B70694(&StringLiteral_8507/*"LOAD_END_TO_HELP"*/);
    byte_4352E32 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  if ( this->fields.type == 6 )
    v4 = &StringLiteral_8507/*"LOAD_END_TO_HELP"*/;
  else
    v4 = &StringLiteral_8506/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v4, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__220_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4352E31 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4352E31 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MyRoomControl_o **v4; // x19
  __int64 *v5; // x8

  v4 = (MyRoomControl_o **)this;
  if ( (byte_4352DDE & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (MyRoomControl_o *)sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4352DDE = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    this = v4[8];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[4];
      if ( this )
      {
        v5 = &StringLiteral_11231/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B7076C(this, result);
  }
  this = v4[3];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  v5 = &StringLiteral_11233/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4352DEA & 1) == 0 )
  {
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_4352DEA = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29045252(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_B7076C(0LL, v3);
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
    sub_B7076C(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_B7076C(0LL, method);
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
        sub_B70630((BattleServantConfConponent_o *)(svtCtr + 80), 0LL, v2, v3, v4, v5, v6, v7),
        (svtCtr = (char *)this->fields.standFigureBack) == 0LL) )
  {
    sub_B7076C(svtCtr, method);
  }
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4352DDC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11730/*"SAVE_END"*/);
    byte_4352DDC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11730/*"SAVE_END"*/, 0LL);
}


System_String_o *__fastcall MyRoomControl__getChangeMyRoomBgm(const MethodInfo *method)
{
  MyRoomControl_c *v1; // x0
  System_String_o *DEFAULT_BGM_NAME; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w0
  int32_t v6; // w20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4352DBA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352DBA = 1;
  }
  entity = 0LL;
  v1 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v1 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v1->static_fields->DEFAULT_BGM_NAME;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  v5 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, v4);
  if ( v5 )
  {
    v6 = v5;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  v6,
                                  (const MethodInfo_21C049C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.age;
LABEL_15:
      sub_B7076C(Instance, v4);
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

  if ( (byte_4352DBB & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352DBB = 1;
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
    sub_B7076C(v4, v5);
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
    sub_B7076C(0LL, method);
  return StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall MyRoomControl__getSvtVoiceEnt(
        MyRoomControl_o *this,
        bool limitCntReset,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
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

  if ( (byte_4352DCE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StandFigureBack_TypeInfo);
    byte_4352DCE = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData
    || (myRoomData = (MyRoomData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)myRoomData,
                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_41:
    sub_B7076C(myRoomData, favoriteUserSvtId);
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

  if ( (byte_4352DD7 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4352DD7 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_B7076C(0LL, fvrUsrSvtId);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
}


bool __fastcall MyRoomControl__get_IsMasterRight(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields._IsMasterRight_k__BackingField;
}


bool __fastcall MyRoomControl__get_IsOnlyServant(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields._IsOnlyServant_k__BackingField;
}


void __fastcall MyRoomControl__helpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20

  if ( (byte_4352DED & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_EndTurorialRequest__);
    sub_B70694(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4352DED = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29045252(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(helpListViewManager, v3);
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v5,
                                                         (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_B7076C(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4352DE5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__hideFavoriteSvt_b__309_0__);
    byte_4352DE5 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__309_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v3, 1, v4);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_B7076C(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_B7076C(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_B7076C(0LL, method);
  SetGameOptionComponent__hideGameOption(optionComp, 0LL);
}


void __fastcall MyRoomControl__hideProfile(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp
    || (MstProfileComponent__hideMstProfile(mstPfComp, 0LL),
        (mstPfComp = (MstProfileComponent_o *)this->fields.mstpfObj) == 0LL) )
  {
    sub_B7076C(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B7076C(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4352DE7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3177/*"CLOSE_MENU"*/);
    byte_4352DE7 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3177/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4352DE8 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DE8 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_B7076C(soundPlayerComp, method);
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
  UIWidget_o *playBtnImg; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0
  const MethodInfo *v10; // x1
  MyRoomControl_c *v11; // x0
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v13; // x21

  if ( (byte_4352DD1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__hideSvtFigure_b__247_0__);
    sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352DD1 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
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
  this->fields.buttonFlag &= ~v11->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v10);
  standFigureBack = this->fields.standFigureBack;
  v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__247_0__, 0LL);
  if ( !standFigureBack )
LABEL_9:
    sub_B7076C(v4, v5);
  StandFigureBack__Fadeout(standFigureBack, v13, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_B7076C(0LL, method);
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
    sub_B7076C(usrItemListViewManager, method);
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

  if ( (byte_4352DE2 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__initMaterial_d__284_TypeInfo);
    byte_4352DE2 = 1;
  }
  v3 = sub_B70764(MyRoomControl__initMaterial_d__284_TypeInfo);
  MyRoomControl__initMaterial_d__284___ctor((MyRoomControl__initMaterial_d__284_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__initMyRoom(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v4; // x2
  CStateManager_QAASpotStateController_IMapSpot__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct CStateManager_MyRoomControl__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v13; // x21
  struct EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMaster_o **p_eventMaster; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  struct MyRoomControl___c_StaticFields *standFigureCollectList; // x8
  System_Action_o *_9__215_0; // x22
  Il2CppObject *v27; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x4
  MyRoomControl_o *v37; // x0
  const MethodInfo *v38; // x4
  MyRoomParamsManager_c *v39; // x0
  struct MyRoomParamsManager_StaticFields *v40; // x8
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v45; // x22
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x1
  float x; // w8
  float y; // w9
  float z; // w10
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v54; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v58; // x21
  int max_length; // w9
  int basePanel; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x1
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v75; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v91; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x1
  __int64 v102; // x0
  UnityEngine_Vector3_o v103; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352DB5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_CStateManager_MyRoomControl___ctor__);
    sub_B70694(&Method_CStateManager_MyRoomControl__add__);
    sub_B70694(&CStateManager_MyRoomControl__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B70694(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MyRoomControl_LoadScriptFileListAssetData__);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&MyRoomControl_StateEtc_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__initMyRoom_b__215_0__);
    sub_B70694(&MyRoomControl___c_TypeInfo);
    sub_B70694(&StringLiteral_10566/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/);
    sub_B70694(&StringLiteral_17218/*"btn_bg_12"*/);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    sub_B70694(&StringLiteral_8962/*"MULTIPLE_VIEW_BUTTON_TEXT"*/);
    byte_4352DB5 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v103.fields.z = 0.0;
  *(_QWORD *)&v103.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v5,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v5;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = this->fields.mFSM;
    v13 = (MyRoomControl_StateEtc_o *)sub_B70764(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v13, 0LL);
    if ( !mFSM )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      1,
      (IState_T__o *)v13,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v4);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (struct EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)standFigureBack,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = MasterData_WarQuestSelectionMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  MyRoomControl__setUserStInfoView(this, v22);
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
  _9__215_0 = standFigureCollectList->__9__215_0;
  if ( !_9__215_0 )
  {
    if ( (standFigureBack[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(standFigureBack[2].fields.baseWindow) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureCollectList = MyRoomControl___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)standFigureCollectList->__9;
    _9__215_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__215_0, v27, Method_MyRoomControl___c__initMyRoom_b__215_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__215_0 = _9__215_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->__9__215_0,
      (System_Int32_array **)_9__215_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_59;
  v35 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, _9__215_0, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v35,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v36);
  MyRoomControl__setupSortWindowUIMoveData(v37, this->fields.sortWindowObj, &v, &v103, v38);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_4352E3C )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4352E3C = 1;
  }
  v39 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v39 = MyRoomParamsManager_TypeInfo;
  }
  v40 = v39->static_fields;
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  this->fields.IsListActive = v40->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_59;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v41);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v42);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v45 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_59;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v45, v46);
  MyRoomControl__setupSvtImageIdList(this, v47);
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
    v108 = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    x = v108.fields.x;
    y = v108.fields.y;
    z = v108.fields.z;
    this->fields.voicePlayButtonDefaultPos = v108;
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  this->fields.voicePlayBtnInitPos.fields.x = x;
  this->fields.voicePlayBtnInitPos.fields.y = y;
  this->fields.voicePlayBtnInitPos.fields.z = z;
  v109 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v109;
  v110 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v110;
  v111 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v111;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v54);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17218/*"btn_bg_12"*/, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_59;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.typeMetadataHandle)(
    standFigureBack,
    standFigureBack->klass[2]._1.interopData);
  v112 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v112;
  if ( !multipleStandFigureBacks )
    goto LABEL_59;
  v58 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v58 >= max_length )
      break;
    if ( (unsigned int)v58 >= max_length )
      goto LABEL_95;
    standFigureBack = multipleStandFigureBacks->m_Items[v58];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v58;
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
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
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
    sub_B7076C(standFigureBack, method);
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
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8962/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_59;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_59;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v63);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v64);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v65);
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
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
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
LABEL_95:
      v102 = sub_B70798(standFigureBack);
      sub_B70738(v102, 0LL);
    }
    v75 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v75;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.photoCampaignEntity,
      (System_Int32_array **)v75,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v77,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v77;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.masterEquipAssetData,
      (System_Int32_array **)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v84 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v84,
      (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v84;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.masterMaleEquipTexture,
      (System_Int32_array **)v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v91 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v91,
      (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v91;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.masterFemaleEquipTexture,
      (System_Int32_array **)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10566/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_59;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_59;
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_59;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               (EventMaster_o *)standFigureBack,
                                               (*p_photoCampaignEntity)->fields.id,
                                               0LL);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v99);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v100);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v101);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_B7076C(gameObject, v10);
  v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B70630((BattleServantConfConponent_o *)&v8->fields.eventReceiver, gameObject, v11, v12, v13, v14, v15, v16);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_B70630(
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
  MyRoomControl_c *v4; // x0
  __int64 v5; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4352DEB & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DEB = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_HELP) < 0) ^ v2 | ((this->fields.buttonFlag & v4->static_fields->BUTTON_HELP) == 0) )
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
        sub_B7076C(0LL, v5);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  MyRoomHelpListViewManager_CallbackFunc2_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4352DEC & 1) == 0 )
  {
    sub_B70694(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    sub_B70694(&Method_MyRoomControl_helpClose__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DEC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v4 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_B70764(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_B7076C(v5, v6);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v4, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_B7076C(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B7076C(0LL, method);
  SoundPlayerComponent__openMenu(soundPlayerComp, 0LL);
}


void __fastcall MyRoomControl__playSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t VoiceSvtId; // w0
  __int64 v4; // x1
  int32_t v5; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v7; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v9; // w20
  TopMyRoomRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_Int32_array_array *v11; // x22
  int fsm; // w8
  System_Int32_array **v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_4352DDA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B70694(&int_____TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352DDA = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v5 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_23;
    v7 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v7, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v5, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_23;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v5, v7, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v9 = FlagRequestNumber;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TopMyRoomRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    0LL,
                                                                    (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v11 = (System_Int32_array_array *)sub_B706AC(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_B706AC(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          fsm = (int)svtCtr->fields.fsm;
          v13 = (System_Int32_array **)svtCtr;
          if ( !fsm )
            goto LABEL_24;
          LODWORD(svtCtr->fields.player) = v5;
          if ( fsm == 1 )
            goto LABEL_24;
          HIDWORD(svtCtr->fields.player) = v9;
          if ( !v11 )
            goto LABEL_23;
          svtCtr = (MyRoomSvtControl_o *)sub_B70754(svtCtr, v11->obj.klass->_1.element_class);
          if ( !svtCtr )
          {
            v21 = sub_B7078C(0LL);
            sub_B70738(v21, 0LL);
          }
          if ( !v11->max_length )
          {
LABEL_24:
            v20 = sub_B70798(svtCtr);
            sub_B70738(v20, 0LL);
          }
          v11->m_Items[0] = (System_Int32_array *)v13;
          sub_B70630((BattleServantConfConponent_o *)v11->m_Items, v13, v14, v15, v16, v17, v18, v19);
          if ( Request_WarBoardWallAttackRequest )
          {
            TopMyRoomRequest__beginRequest(Request_WarBoardWallAttackRequest, v11, 0LL);
            return;
          }
        }
LABEL_23:
        sub_B7076C(svtCtr, v4);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  SoundPlayerComponent_o *soundPlayerComp; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  int32_t materialServantId; // w20
  int32_t v8; // w21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4352DC5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (MyRoomControl_o *)sub_B70694(&MaterialServantLimitCountManager_TypeInfo);
    byte_4352DC5 = 1;
  }
  MyRoomControl__shutdown(this, method);
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    v2->fields.isServantMaterial = 0;
    if ( !materialImageIdList )
      goto LABEL_20;
    materialFigureSvtDispIdx = v2->fields.materialFigureSvtDispIdx;
    materialServantId = v2->fields.materialServantId;
    if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
    goto LABEL_20;
  SoundPlayerComponent__DestroyMenu(soundPlayerComp, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v2, v9);
  MyRoomControl__destroySvtFigure(v2, v10);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.backGroundManager;
  if ( !soundPlayerComp )
    goto LABEL_20;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)soundPlayerComp, v4);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.mMaterialEventLogListViewManager;
  if ( !soundPlayerComp )
    goto LABEL_20;
  MaterialEventLogListViewManager__DestroyList((MaterialEventLogListViewManager_o *)soundPlayerComp, 0LL);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.helpListViewManager;
  if ( !soundPlayerComp )
    goto LABEL_20;
  MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)soundPlayerComp, 0LL);
  soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.helpListViewManager;
  if ( !soundPlayerComp
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)soundPlayerComp, 0LL),
        (soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)soundPlayerComp, 0LL),
        MyRoomControl__ReleasePhotoAsset(v2, v11),
        (soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.MaterialEventLogItemListPanel) == 0LL)
    || (((void (__fastcall *)(SoundPlayerComponent_o *, Il2CppClass *, float))soundPlayerComp->klass[1]._1.castClass)(
          soundPlayerComp,
          soundPlayerComp->klass[1]._1.declaringType,
          1.0),
        (soundPlayerComp = (SoundPlayerComponent_o *)v2->fields.valentineListObj) == 0LL) )
  {
LABEL_20:
    sub_B7076C(soundPlayerComp, v4);
  }
  ((void (__fastcall *)(SoundPlayerComponent_o *, Il2CppClass *, float))soundPlayerComp->klass[1]._1.castClass)(
    soundPlayerComp,
    soundPlayerComp->klass[1]._1.declaringType,
    0.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4352DDB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl_endReflectionGameOption__);
    byte_4352DDB = 1;
  }
  optionComp = this->fields.optionComp;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_B7076C(v5, v6);
  SetGameOptionComponent__reflectionGameOption(optionComp, v4, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t v5; // w19
  System_String_o *Value; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x20

  if ( (byte_4352DDD & 1) == 0 )
  {
    sub_B70694(&Method_MyRoomControl_callbackChangeName__);
    sub_B70694(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_3990/*"ChangeUserName"*/);
    byte_4352DDD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  if ( !this->fields.myRoomFsm )
    goto LABEL_14;
  v5 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_3990/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v7,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_WarBoardWallAttackRequest )
LABEL_14:
    sub_B7076C(SelfUserGame, v4);
  UserNameChangeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    Value,
    v5,
    *((System_String_o **)SelfUserGame + 29),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_B7076C(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v5; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 figureSvtDispIdx; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *asstName; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x3

  if ( (byte_4352DD2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass248_0__resetSvtVoiceData_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass248_0_TypeInfo);
    sub_B70694(&StringLiteral_8506/*"LOAD_END"*/);
    byte_4352DD2 = 1;
  }
  v5 = sub_B70764(MyRoomControl___c__DisplayClass248_0_TypeInfo);
  MyRoomControl___c__DisplayClass248_0___ctor((MyRoomControl___c__DisplayClass248_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8506/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B7076C(myRoomFsm, v7);
  }
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, isReset, v14);
  *(_QWORD *)(v5 + 24) = SvtVoiceEnt;
  v16 = (ServantVoiceEntity_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), SvtVoiceEnt, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 24) )
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                      *v16,
                      imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                      0LL);
  this->fields.voiceList = MyRoomVoiceList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.voiceList,
    (System_Int32_array **)MyRoomVoiceList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  myRoomFsm = (PlayMakerFSM_o *)*v16;
  if ( !*v16 )
    goto LABEL_15;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)VoiceAssetName,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  asstName = this->fields.asstName;
  v40 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass248_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v40, v41);
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
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

  if ( (byte_4352DF4 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DF4 = 1;
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
        sub_B7076C(voicePlayBtn, method);
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
    sub_B7076C(moveBtnObj, isDisp);
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
    sub_B7076C(titleBtnCollider, isEnabled);
  if ( !LODWORD(titleBtnCollider[10].monitor) )
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
  }
  SetGameOptionComponent__showGameOption((SetGameOptionComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4352DE0 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352DE0 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, v5);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 41, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, method);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, method);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, method);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 55, 0, 0LL);
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
    sub_B7076C(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, method);
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B7076C(this, method);
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
    sub_B7076C(v6, v7);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &moveHidePos;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v8);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4352DC9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl__setMySvtFigure_b__238_0__);
    byte_4352DC9 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__238_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v3, v4);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_27265484(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_27265484(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  unsigned int size; // w8
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  int32_t Form; // w0
  int32_t Id; // w20
  int32_t v12; // w2
  UnityEngine_Object_o *playBtnImg; // x20

  v4 = this;
  if ( (byte_4352DD6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl_o *)sub_B70694(&UIStandFigureRender_TypeInfo);
    byte_4352DD6 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
    v12 = Form;
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
  v12 = 0;
LABEL_23:
  this = (MyRoomControl_o *)v4->fields.standFigureBack;
  if ( !this )
    goto LABEL_32;
  StandFigureBack__SetFaceTypeAndForm((StandFigureBack_o *)this, 0, v12, 0LL);
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
    sub_B7076C(this, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_B7076C(mstpfObj, method);
  }
  MstProfileComponent__showMstProfile((MstProfileComponent_o *)mstpfObj, 0LL);
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
    sub_B7076C(0LL, v4);
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
          sub_B7076C(standFigureBack, isEnableMultipleView);
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
    sub_B7076C(0LL, hSvtId);
  return MyRoomData__getSvtFriendshipLv(myRoomData, hSvtId, 0LL);
}


void __fastcall MyRoomControl__setSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *myRoomFsm; // x0
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 figureSvtDispIdx; // x22
  ServantVoiceEntity_o *v7; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *asstName; // x20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__236_0; // x21
  Il2CppObject *v31; // x22
  struct MyRoomControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4352DC7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_MyRoomControl_EndLoad__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__setSvtVoiceData_b__236_0__);
    sub_B70694(&MyRoomControl___c_TypeInfo);
    sub_B70694(&StringLiteral_8506/*"LOAD_END"*/);
    byte_4352DC7 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8506/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_27:
    sub_B7076C(myRoomFsm, method);
  }
  myRoomFsm = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( myRoomFsm )
  {
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_27;
    figureSvtDispIdx = this->fields.figureSvtDispIdx;
    v7 = (ServantVoiceEntity_o *)myRoomFsm;
    if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                        (ServantVoiceEntity_o *)myRoomFsm,
                        imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                        0LL);
    this->fields.voiceList = MyRoomVoiceList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)MyRoomVoiceList,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v7, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    asstName = this->fields.asstName;
    v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v23, v24);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v27 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
      if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      static_fields = (struct MyRoomControl___c_StaticFields *)*((_QWORD *)myRoomFsm + 23);
      _9__236_0 = static_fields->__9__236_0;
      if ( !_9__236_0 )
      {
        if ( (*((_BYTE *)myRoomFsm + 307) & 4) != 0 && !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          static_fields = MyRoomControl___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__236_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__236_0, v31, Method_MyRoomControl___c__setSvtVoiceData_b__236_0__, 0LL);
        v32 = MyRoomControl___c_TypeInfo->static_fields;
        v32->__9__236_0 = _9__236_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v32->__9__236_0,
          (System_Int32_array **)_9__236_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( !Instance )
        goto LABEL_27;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__236_0, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_27;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8506/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
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

  if ( (byte_4352DDF & 1) == 0 )
  {
    sub_B70694(&MyRoomControl_TypeInfo);
    byte_4352DDF = 1;
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
    sub_B7076C(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_22832240((UserItemListViewManager_o *)titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl__set_IsMasterRight(MyRoomControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMasterRight_k__BackingField = value;
}


void __fastcall MyRoomControl__set_IsOnlyServant(MyRoomControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOnlyServant_k__BackingField = value;
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
  sub_B70630(
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
    sub_B7076C(transform, v12);
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
    sub_B7076C(this, moveTarget);
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
    sub_B7076C(this, moveTarget);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  *moveShowPos = localPosition;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void __fastcall MyRoomControl__setupSvtImageIdList(MyRoomControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x8
  System_Collections_Generic_List_int__o *imageIdList; // x0
  UserServantEntity_o *v14; // x20
  void *monitor; // x21
  System_Collections_Generic_List_int__c *klass; // x22
  int32_t v17; // w21
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  int32_t v20; // w22
  __int64 v21; // x22
  __int64 v22; // x23
  __int64 v23; // x21
  __int64 v24; // x22
  MyRoomControl_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x8
  System_Collections_Generic_List_int__o *v28; // x21
  unsigned __int64 v29; // x22
  int32_t FigureImageLimitCount; // w20
  struct System_Collections_Generic_List_int__o *v31; // x22
  __int64 v32; // x21
  int size; // w8
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4352DB7 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352DB7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  imageIdList = (System_Collections_Generic_List_int__o *)this->fields.myRoomData;
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)imageIdList,
                                                            this->fields.fvrUsrSvtId,
                                                            0LL);
  if ( !imageIdList )
    goto LABEL_48;
  v14 = (UserServantEntity_o *)imageIdList;
  klass = imageIdList[2].klass;
  monitor = imageIdList[2].monitor;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = monitor;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v35, 0LL);
  v17 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine(v14, 0LL);
  while ( 1 )
  {
    v22 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v22;
    *(_QWORD *)&v36.fields.fakeValue = v21;
    if ( v17 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v36, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v17, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)imageIdList,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                              (ServantLimitImageMaster_o *)imageIdList,
                                                              this->fields.figureSvtId,
                                                              ImageLimitCount,
                                                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v20 = (int)imageIdList;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)imageIdList,
            (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        imageIdList,
        v20,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    ++v17;
  }
  if ( UserServantEntity__IsHeroine(v14, 0LL) || UserServantEntity__isLimitCountMax(v14, 0LL) )
  {
    v24 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v37.fields.currentCryptoKey = v24;
    *(_QWORD *)&v37.fields.fakeValue = v23;
    v25 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v37, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)MyRoomControl__GetSortedCostumeIds(v25, (int32_t)v25, v26);
    if ( imageIdList )
    {
      v27 = *(_QWORD *)&imageIdList->fields._size;
      v28 = imageIdList;
      if ( (int)v27 >= 1 )
      {
        v29 = 0LL;
        do
        {
          if ( v29 >= (unsigned int)v27 )
          {
            v34 = sub_B70798(imageIdList);
            sub_B70738(v34, 0LL);
          }
          v10 = *((unsigned int *)&v28->fields._syncRoot + v29);
          if ( (int)v10 >= 1 )
          {
            imageIdList = this->fields.imageIdList;
            if ( !imageIdList )
              goto LABEL_48;
            System_Collections_Generic_List_int___Add(
              imageIdList,
              v10,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v27) = v28->fields._size;
          ++v29;
        }
        while ( (__int64)v29 < (int)v27 );
      }
      goto LABEL_39;
    }
LABEL_48:
    sub_B7076C(imageIdList, v10);
  }
LABEL_39:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v14, 0, 0LL);
  imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)imageIdList,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)imageIdList,
                                                            this->fields.figureSvtId,
                                                            FigureImageLimitCount,
                                                            0LL);
  v31 = this->fields.imageIdList;
  if ( !v31 )
    goto LABEL_48;
  v32 = 0LL;
  while ( 1 )
  {
    size = v31->fields._size;
    if ( (int)v32 >= size )
      break;
    if ( size <= (unsigned int)v32 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( v31->fields._items->m_Items[v32 + 1] == (_DWORD)imageIdList )
    {
      this->fields.figureSvtDispIdx = v32;
      return;
    }
    v31 = this->fields.imageIdList;
    ++v32;
    if ( !v31 )
      goto LABEL_48;
  }
}


void __fastcall MyRoomControl__setupSvtRand(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *limitCountSupport; // x0
  int32_t v5; // w22
  _DWORD *v6; // x19
  __int64 IsLeave; // x0
  unsigned int v8; // w20
  char *v9; // x24
  void **v10; // x24
  void *v11; // t1
  UserServantEntity_o *v12; // x20
  NetworkManager_ResultCallbackFunc_o *v13; // x19
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserServantCollectionMaster_o *v22; // x19
  int64_t userId; // x21
  __int64 v24; // x23
  __int64 v25; // x24
  __int128 v26; // q1
  _DWORD *v27; // x25
  __int128 v28; // q0
  int32_t v29; // w24
  int32_t v30; // w26
  int32_t v31; // w27
  int32_t v32; // w28
  bool IsLock; // w19
  char v34; // w21
  int32_t commonFlag; // w23
  int32_t battleVoice; // w25
  int32_t randomSettingOwn; // w22
  int32_t v38; // w0
  __int64 v39; // x8
  int32_t randomSettingSupport; // w20
  __int64 v41; // x0
  int64_t v42; // [xsp+48h] [xbp-E8h]
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v44; // [xsp+58h] [xbp-D8h]
  int64_t pushUserSvtId; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_WarBoardWallAttackRequest; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4352DB9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_MyRoomControl__setupSvtRand_b__220_0__);
    sub_B70694(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4352DB9 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_40:
    sub_B7076C(limitCountSupport, v3);
  }
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_40;
  v5 = *((_DWORD *)limitCountSupport + 6);
  v6 = limitCountSupport;
  while ( 1 )
  {
    do
    {
      IsLeave = UnityEngine_Random__RandomRange(0, v5, 0LL);
      v8 = IsLeave;
      if ( (unsigned int)IsLeave >= v6[6] )
      {
LABEL_39:
        v41 = sub_B70798(IsLeave);
        sub_B70738(v41, 0LL);
      }
      v9 = (char *)&v6[2 * (int)IsLeave];
      v11 = (void *)*((_QWORD *)v9 + 4);
      v10 = (void **)(v9 + 32);
      limitCountSupport = v11;
      if ( !v11 )
        goto LABEL_40;
      IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    }
    while ( (IsLeave & 1) != 0 );
    if ( v8 >= v6[6] )
      goto LABEL_39;
    limitCountSupport = *v10;
    if ( !*v10 )
      goto LABEL_40;
    IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
    if ( (IsLeave & 1) == 0 )
    {
      if ( v8 >= v6[6] )
        goto LABEL_39;
      v12 = (UserServantEntity_o *)*v10;
      if ( *v10 )
        break;
    }
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__220_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CardFavoriteRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v13,
                                                                 (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData || !v12 )
    goto LABEL_40;
  v22 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v25 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v25;
  *(_QWORD *)&v50.fields.fakeValue = v24;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v50, 0LL);
  if ( !v22 )
    goto LABEL_40;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v22, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_40;
  v26 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
  v27 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v26;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v48 = v49;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v48, 0LL);
  v28 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v28;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v47, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                      v12->fields.imageLimitCount,
                      0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.dispLimitCount, 0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.commandCardLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.iconLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v12, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v12, 0LL);
  if ( !v27 )
    goto LABEL_40;
  v34 = (char)limitCountSupport;
  commonFlag = v27[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                       v12->fields.randomLimitCount,
                       0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12->fields.randomLimitCountSupport, 0LL);
  v39 = *(_QWORD *)&v12->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)&v12->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v38;
  *(_QWORD *)&v51.fields.currentCryptoKey = v39;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v51, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_40;
  CardFavoriteRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v44,
    imageLimitCount,
    v29,
    v30,
    v31,
    v32,
    1,
    IsLock,
    v34 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    pushUserSvtId == v42,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x0
  __int64 v3; // x1

  if ( (byte_4352DC4 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4352DC4 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v2 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v2 )
    sub_B7076C(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType(v2, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x0
  __int64 v3; // x1

  if ( (byte_4352DC3 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4352DC3 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v2 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v2 )
    sub_B7076C(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType(v2, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_B7076C(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_27265484(this, 1, v4);
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

  if ( (byte_4352DF0 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl__svtVoicePlayAct_d__329_TypeInfo);
    byte_4352DF0 = 1;
  }
  v5 = sub_B70764(MyRoomControl__svtVoicePlayAct_d__329_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__329___ctor((MyRoomControl__svtVoicePlayAct_d__329_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = item;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  NetworkManager_c *v22; // x0
  SoundManager_o *Instance; // x21
  System_Action_o *v24; // x22

  if ( (byte_4352DC6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass235_0__voiceLoad_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass235_0_TypeInfo);
    byte_4352DC6 = 1;
  }
  v7 = sub_B70764(MyRoomControl___c__DisplayClass235_0_TypeInfo);
  MyRoomControl___c__DisplayClass235_0___ctor((MyRoomControl___c__DisplayClass235_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)endCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isVoiceLoading = 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_434F41F )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434F41F = 1;
  }
  v22 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v22 = NetworkManager_TypeInfo;
  }
  if ( !v22->static_fields->isRebootBlock )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass235_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage(Instance, assetName, v24, 1, 0LL);
      return;
    }
LABEL_15:
    sub_B7076C(v8, v9);
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


void __fastcall MyRoomControl__CaptureServant_d__397___ctor(
        MyRoomControl__CaptureServant_d__397_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__397__MoveNext(
        MyRoomControl__CaptureServant_d__397_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v13; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v15; // x21
  UIRect_o *height; // x0
  __int64 v17; // x1
  int v18; // w22
  int32_t activeHeight; // w0
  int32_t v20; // w26
  int32_t v21; // w23
  int v22; // w24
  int v23; // w22
  int v24; // w23
  int v25; // w8
  int v26; // w25
  int v27; // w0
  _BOOL4 IsOnlyServant_k__BackingField; // w26
  int v29; // w27
  int v30; // w24
  int v31; // w25
  int v32; // w27
  int32_t v33; // w0
  int v34; // w8
  UnityEngine_Color_array *Pixels_36169220; // x25
  UnityEngine_Texture2D_o *v36; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v38; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4352AC1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_Texture2D_TypeInfo);
    sub_B70694(&TouchEffectManager_TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4352AC1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v13 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v15 = v13;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_37;
    v18 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_37;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_37;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v20 = this->fields.height;
    v21 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_37;
    v22 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_37;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v15 )
      goto LABEL_37;
    v23 = v18 * width / v21;
    v24 = v22 * v20 / (int)height;
    v25 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v15->klass->vtable._4_get_width.method)(
            v15,
            v15->klass->vtable._5_set_width.methodPtr)
        - v23;
    v26 = v25 >= 0 ? v25 : v25 + 1;
    v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v15->klass->vtable._6_get_height.method)(
            v15,
            v15->klass->vtable._7_set_height.methodPtr);
    IsOnlyServant_k__BackingField = _4__this->fields._IsOnlyServant_k__BackingField;
    v29 = v27 - v24 >= 0 ? v27 - v24 : v27 - v24 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_37;
    v30 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_37;
    v31 = v26 >> 1;
    v32 = v29 >> 1;
    v33 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v34 = IsOnlyServant_k__BackingField ? 11 : 1;
    Pixels_36169220 = UnityEngine_Texture2D__GetPixels_36169220(v15, v31, v34 * v30 / v33 + v32, v23, v24, 0LL);
    v36 = (UnityEngine_Texture2D_o *)sub_B70764(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_36169900(v36, v23, v24, 3, 0, 0LL);
    if ( !v36 )
      goto LABEL_37;
    UnityEngine_Texture2D__SetPixels_36170948(v36, Pixels_36169220, 0LL);
    UnityEngine_Texture2D__Apply_36171776(v36, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_37;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v36,
      height->klass[1]._1.generic_class);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)v15, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v38 = 11.0;
    if ( !_4__this->fields._IsOnlyServant_k__BackingField )
      v38 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v38, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_37:
      sub_B7076C(height, v17);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__397__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__397_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__397__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__397_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__CaptureServant_d__397_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__397__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__397_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__397__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__397_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__289___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__289__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  bool v7; // w20
  System_Func_bool__o *v8; // x22
  UnityEngine_WaitUntil_o *v9; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352AC2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__289_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_4352AC2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_B7076C(Instance, v6);
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v7 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v8 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    _4__this,
    Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__289_0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v9 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__289__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__289__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__289__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__289__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__283___ctor(
        MyRoomControl__InitMaterialOnBackground_d__283_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitMaterialOnBackground_d__283__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__283_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitMaterialOnBackground_d__283_o *v2; // x20
  int32_t _1__state; // w8
  System_Int32_array **v4; // x0
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  TerminalSceneComponent_c *v14; // x0
  struct TerminalSceneComponent_o *mInstance; // x20
  BackTaskAmountAdjuster_o *v16; // x20
  System_Collections_IEnumerator_o *v17; // x0

  v2 = this;
  if ( (byte_4352AC3 & 1) == 0 )
  {
    sub_B70694(&BackTaskAmountAdjuster_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4352AC3 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_31;
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_31;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    v14 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v14->static_fields->mInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)UnityEngine_Object__op_Inequality(
                                                                 (UnityEngine_Object_o *)mInstance,
                                                                 0LL,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !mInstance )
        goto LABEL_31;
      this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)mInstance->fields.mTerminalMap;
      if ( !this )
        goto LABEL_31;
      ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)this, 0LL);
    }
    v16 = (BackTaskAmountAdjuster_o *)sub_B70764(BackTaskAmountAdjuster_TypeInfo);
    BackTaskAmountAdjuster___ctor(v16, 0LL);
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_31;
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                                 (MyRoomStateMaterial_o *)this,
                                                                 0LL);
    if ( !v16 )
      goto LABEL_31;
    v17 = BackTaskAmountAdjuster__Execute(v16, (System_Collections_IEnumerator_o *)this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( this )
    {
      v4 = (System_Int32_array **)QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v4;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B70630(p__2__current, v4, v6, v7, v8, v9, v10, v11);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_31:
    sub_B7076C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__283__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__283_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitMaterialOnBackground_d__283__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__283_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__InitMaterialOnBackground_d__283_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__283__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__283_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__283__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__283_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitServantMenu_d__286___ctor(
        MyRoomControl__InitServantMenu_d__286_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitServantMenu_d__286__MoveNext(
        MyRoomControl__InitServantMenu_d__286_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  bool v7; // w21
  System_Func_bool__o *v8; // x22
  UnityEngine_WaitUntil_o *v9; // x19
  Il2CppObject **p__2__current; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BackTaskAmountAdjuster_o *v17; // x20
  System_Collections_IEnumerator_o *v18; // x0

  if ( (byte_4352AC4 & 1) == 0 )
  {
    sub_B70694(&BackTaskAmountAdjuster_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_MyRoomControl__InitServantMenu_b__286_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4352AC4 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v17 = (BackTaskAmountAdjuster_o *)sub_B70764(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v17, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, 0LL);
          if ( !v17 )
            goto LABEL_17;
          v18 = BackTaskAmountAdjuster__Execute(v17, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, v18, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_B7076C(Instance, v6);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v7 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v8 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    (Il2CppObject *)_4__this,
    Method_MyRoomControl__InitServantMenu_b__286_0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v9 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__286__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitServantMenu_d__286__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__286_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__InitServantMenu_d__286_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__286__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitServantMenu_d__286__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__286_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__366___ctor(
        MyRoomControl__LoadMultipleServant_d__366_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__LoadMultipleServant_d__366__MoveNext(
        MyRoomControl__LoadMultipleServant_d__366_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadMultipleServant_d__366_o *v2; // x26
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  Il2CppObject *v5; // x22
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  Il2CppObject *v18; // x1
  struct StandFigureBack_array *v19; // x8
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct StandFigureBack_array *v27; // x8
  __int64 v28; // x27
  __int64 v29; // x21
  __int64 v30; // x25
  int v31; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v33; // x8
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v36; // w24
  int32_t v37; // w20
  MyRoomControl__LoadMultipleServant_d__366_o *v38; // x19
  int32_t Id; // w26
  int32_t Form; // w23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct ServantScriptMultipleEntity_array *v47; // x22
  System_Int32_array **v48; // x26
  struct StandFigureBack_array *v49; // x8
  struct MyRoomControl_o *v50; // x25
  struct MyRoomControl___c__DisplayClass366_0_o *v51; // x28
  StandFigureBack_o *v52; // x26
  System_Action_o *_9__3; // x27
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v62; // x19
  int max_length; // w9
  unsigned int v64; // w23
  struct StandFigureBack_array *v65; // x8
  UnityEngine_Component_o *v66; // x8
  Il2CppObject *_2__current; // x21
  float v68; // s1
  float v69; // s2
  float v70; // s8
  float v71; // s9
  float v72; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v74; // x8
  float v75; // s10
  struct StandFigureBack_array *v76; // x9
  int v77; // s14
  int v78; // s15
  float v79; // s0
  float v80; // s2
  struct StandFigureBack_array *v81; // x8
  float v82; // s11
  float v83; // s12
  struct StandFigureBack_array *v84; // x8
  struct StandFigureBack_array *v85; // x8
  System_String_o *v86; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass366_0_o *_8__1; // x8
  MultipleViewComponent_o *multipleViewComponent; // x20
  Il2CppObject *v90; // x22
  System_Action_o *v91; // x21
  Il2CppObject *v92; // x20
  System_Func_bool__o *v93; // x21
  UnityEngine_WaitWhile_o *v94; // x20
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct ServantScriptMultipleEntity_array *v101; // x8
  ServantScriptMultipleEntity_o *v102; // x9
  ServantScriptMultipleEntity_o *v103; // x8
  Il2CppObject *v104; // x20
  System_Func_bool__o *v105; // x21
  UnityEngine_WaitWhile_o *v106; // x20
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  __int64 v113; // x0
  __int64 v114; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-B8h]
  struct MyRoomControl___c__DisplayClass366_0_o **p__8__1; // [xsp+20h] [xbp-B0h]
  __int64 v117; // [xsp+28h] [xbp-A8h]
  __int64 v118; // [xsp+30h] [xbp-A0h]
  ServantScriptMultipleEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4352AC5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&ServantScriptMultipleEntity___TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__0__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__1__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__2__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__3__);
    sub_B70694(&MyRoomControl___c__DisplayClass366_0_TypeInfo);
    sub_B70694(&UIStandFigureRender_TypeInfo);
    sub_B70694(&UnityEngine_WaitWhile_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_B70694(&StringLiteral_6781/*"FinishedFadeMultipleServant"*/);
    byte_4352AC5 = 1;
  }
  entity = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_84;
    TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)titleInfo->fields.titleImg;
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.multipleViewCloseButton;
    _4__this->fields.multipleViewState = 2;
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
    if ( !multipleStandFigureBacks )
      goto LABEL_84;
    v62 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v64 = v62 - 4;
      if ( (int)v62 - 4 >= max_length )
        return 0;
      if ( v64 >= max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v62);
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)StandFigureBack__GetSvtStandFigure(
                                                              (StandFigureBack_o *)this,
                                                              0,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      v65 = _4__this->fields.multipleStandFigureBacks;
      if ( !v65 )
        goto LABEL_84;
      if ( v64 >= v65->max_length )
        goto LABEL_104;
      v66 = (UnityEngine_Component_o *)*((_QWORD *)&v65->obj.klass + v62);
      if ( !v66 )
        goto LABEL_84;
      _2__current = this->fields.__2__current;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(v66, 0LL);
      if ( !this )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v68 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !_2__current )
        goto LABEL_84;
      v70 = v68;
      v71 = v69;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_2__current,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      LODWORD(v72) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      multipleEntities_5__2 = v2->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_84;
      if ( v64 >= multipleEntities_5__2->max_length )
        goto LABEL_104;
      v74 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v62);
      v75 = flt_32EBEB0[(_DWORD)v62 == 4] - v72;
      if ( v74 )
      {
        v76 = _4__this->fields.multipleStandFigureBacks;
        if ( !v76 )
          goto LABEL_84;
        if ( v64 >= v76->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v76->obj.klass + v62);
        if ( !this )
          goto LABEL_84;
        v77 = *(_DWORD *)(v74 + 28);
        v78 = *(_DWORD *)(v74 + 32);
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v81 = _4__this->fields.multipleStandFigureBacks;
        if ( !v81 )
          goto LABEL_84;
        if ( v64 >= v81->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v81->obj.klass + v62);
        if ( !this )
          goto LABEL_84;
        v82 = v79;
        v83 = v80;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        v70 = v70 + (float)v78;
        v75 = v75 + (float)v77;
        v121.fields.x = v82;
        v121.fields.y = v70;
        v121.fields.z = v83;
        v71 = v71 + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v121, 0LL);
      }
      v84 = _4__this->fields.multipleStandFigureBacks;
      if ( !v84 )
        goto LABEL_84;
      if ( v64 >= v84->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v84->obj.klass + v62);
      if ( this )
      {
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v85 = _4__this->fields.multipleStandFigureBacks;
        if ( v85 )
        {
          v86 = v64 == v85->max_length - 1 ? (System_String_o *)StringLiteral_6781/*"FinishedFadeMultipleServant"*/ : 0LL;
          v122.fields.x = v75;
          v122.fields.y = v70;
          v122.fields.z = v71;
          MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v122, v86, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v62;
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
        v90 = (Il2CppObject *)v2->fields.__8__1;
        v91 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v91, v90, Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__1__, 0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v91, 0LL);
          v92 = (Il2CppObject *)v2->fields.__8__1;
          v93 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v93,
            v92,
            Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__2__,
            (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
          v94 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v94, v93, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v94;
          sub_B70630(
            (BattleServantConfConponent_o *)&v2->fields.__2__current,
            (System_Int32_array **)v94,
            v95,
            v96,
            v97,
            v98,
            v99,
            v100);
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
  v5 = (Il2CppObject *)sub_B70764(MyRoomControl___c__DisplayClass366_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass366_0_o *)v5;
  p__8__1 = &v2->fields.__8__1;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.__8__1, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_84;
  v18 = (Il2CppObject *)v2->fields.__4__this;
  this->fields.__2__current = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v18,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !_4__this )
    goto LABEL_84;
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.mBlocker;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_84;
  (*p__8__1)->fields.loadedCount = 0;
  v19 = _4__this->fields.multipleStandFigureBacks;
  if ( !v19 )
    goto LABEL_84;
  v20 = (System_Int32_array **)sub_B706AC(ServantScriptMultipleEntity___TypeInfo, v19->max_length);
  v2->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v20;
  p_multipleEntities_5__2 = &v2->fields._multipleEntities_5__2;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields._multipleEntities_5__2, v20, v21, v22, v23, v24, v25, v26);
  v27 = _4__this->fields.multipleStandFigureBacks;
  if ( !v27 )
    goto LABEL_84;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 32LL;
  while ( 1 )
  {
    v31 = v27->max_length;
    if ( (int)v29 >= v31 )
      break;
    if ( (unsigned int)v29 >= v31 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)v27->m_Items[v29];
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_84;
    if ( (unsigned int)v29 >= defaultMultipleServantPoses->max_length )
      goto LABEL_104;
    if ( !this )
      goto LABEL_84;
    v33 = (float *)((char *)defaultMultipleServantPoses + v28);
    v120.fields.x = flt_32EBEB8[(_DWORD)v29 == 0] + v33[8];
    v120.fields.y = v33[9] + 0.0;
    v120.fields.z = v33[10] + 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v120, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_84;
    if ( (unsigned int)v29 >= multipleServantUsrIds->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.myRoomData;
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            multipleServantUsrIds->m_Items[v29],
                                                            0LL);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_84;
    if ( (unsigned int)v29 >= multipleLimitCounts->max_length )
      goto LABEL_104;
    v36 = multipleLimitCounts->m_Items[v29 + 1];
    v37 = (int)this;
    v38 = v2;
    Id = ServantScriptMaster__getId((int32_t)this, v36, 0LL);
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                            (ServantScriptMultipleMaster_o *)this,
                                                            &entity,
                                                            Id,
                                                            Form,
                                                            v29 + 1,
                                                            0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v47 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_84;
      v48 = (System_Int32_array **)entity;
      if ( entity )
      {
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_B70754(entity, v47->obj.klass->_1.element_class);
        if ( !this )
        {
          v114 = sub_B7078C(0LL);
          sub_B70738(v114, 0LL);
        }
      }
      if ( (unsigned int)v29 >= v47->max_length )
        goto LABEL_104;
      v47->m_Items[v29] = (ServantScriptMultipleEntity_o *)v48;
      sub_B70630((BattleServantConfConponent_o *)((char *)v47 + v30), v48, v41, v42, v43, v44, v45, v46);
    }
    v117 = v30;
    v118 = v28;
    v49 = _4__this->fields.multipleStandFigureBacks;
    if ( !v49 )
      goto LABEL_84;
    if ( (unsigned int)v29 >= v49->max_length )
      goto LABEL_104;
    v50 = _4__this;
    v51 = *p__8__1;
    if ( *p__8__1 )
    {
      v52 = v49->m_Items[v29];
      _9__3 = v51->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v51,
          Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__3__,
          0LL);
        v51->fields.__9__3 = _9__3;
        sub_B70630(
          (BattleServantConfConponent_o *)&v51->fields.__9__3,
          (System_Int32_array **)_9__3,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      if ( v52 )
      {
        StandFigureBack__SetMyRoomStandFigure(v52, v37, v36, 1, 0, Form, 10, _9__3, 0, 0LL);
        _4__this = v50;
        v27 = v50->fields.multipleStandFigureBacks;
        ++v29;
        v2 = v38;
        v30 = v117 + 8;
        v28 = v118 + 12;
        if ( v27 )
          continue;
      }
    }
    goto LABEL_84;
  }
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_B706AC(int___TypeInfo, 2LL);
  v101 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_84;
  if ( !v101->max_length )
    goto LABEL_104;
  v102 = v101->m_Items[0];
  if ( v102 )
  {
    if ( !this )
      goto LABEL_84;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_104;
    LODWORD(this->fields.__4__this) = v102->fields.depth;
    v101 = *p_multipleEntities_5__2;
    if ( !*p_multipleEntities_5__2 )
      goto LABEL_84;
  }
  if ( v101->max_length <= 1 )
    goto LABEL_104;
  v103 = v101->m_Items[1];
  if ( !v103 )
  {
    if ( this )
      goto LABEL_102;
LABEL_84:
    sub_B7076C(this, method);
  }
  if ( !this )
    goto LABEL_84;
  if ( LODWORD(this->fields.__2__current) <= 1 )
    goto LABEL_104;
  HIDWORD(this->fields.__4__this) = v103->fields.depth;
LABEL_102:
  if ( LODWORD(this->fields.__2__current) < 2 )
  {
LABEL_104:
    v113 = sub_B70798(this);
    sub_B70738(v113, 0LL);
  }
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
    0LL);
  v104 = (Il2CppObject *)v2->fields.__8__1;
  v105 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v105,
    v104,
    Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v106 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v106, v105, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v106;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.__2__current,
    (System_Int32_array **)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__366__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__366_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadMultipleServant_d__366__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__366_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__LoadMultipleServant_d__366_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__366__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__366_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__366__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__366_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__388___ctor(
        MyRoomControl__LoadPhotoCampaignServant_d__388_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoCampaignServant_d__388__MoveNext(
        MyRoomControl__LoadPhotoCampaignServant_d__388_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__388_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v4; // x22
  struct MyRoomControl___c__DisplayClass388_0_o **p__8__1; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v21; // w23
  int32_t Id; // w0
  int32_t v23; // w24
  bool v24; // w21
  int32_t photoCampaignType; // w27
  StandFigureBack_o *photoCampaignStandFigureBack; // x24
  int32_t formId_5__3; // w20
  Il2CppObject *_8__1; // x26
  System_Action_o *v29; // x25
  Il2CppObject *v30; // x20
  System_Func_bool__o *v31; // x22
  UnityEngine_WaitWhile_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ServantPhotoEntity_FaceData_o *faceData_5__4; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl___c__DisplayClass388_0_o *v42; // x8
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  Il2CppObject *v44; // x22
  System_Action_o *v45; // x21
  Il2CppObject *v46; // x20
  System_Func_bool__o *v47; // x21
  UnityEngine_WaitWhile_o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int v55; // w8
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  BattleServantConfConponent_o *p_photoCampaignFaceList; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ServantPhotoEntity_FaceData_array *v70; // x8
  __int64 photoCampaignFaceListIndex; // x9
  System_Int32_array **v72; // x1
  BattleServantConfConponent_o *p_faceData_5__4; // x19
  ServantPhotoEntity_FaceData_o *klass; // x21
  Il2CppObject *classBoardSkillObj; // x22
  System_Action_o *v76; // x23
  Il2CppObject *v77; // x20
  System_Func_bool__o *v78; // x21
  UnityEngine_WaitWhile_o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct MyRoomControl___c__DisplayClass388_0_o *v86; // x8
  Il2CppObject *v87; // x22
  System_Action_o *v88; // x21
  Il2CppObject *v89; // x20
  System_Func_bool__o *v90; // x21
  UnityEngine_WaitWhile_o *v91; // x20
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v99; // x8
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x19
  struct StandFigureBack_o *v102; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  int size; // w22
  __int64 v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 *v112; // x23
  System_Int32_array **v113; // x0
  __int64 *v114; // x24
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  __int64 v121; // x8
  __int64 v122; // x9
  __int64 v123; // x9
  bool v124; // cc
  MyRoomControl__LoadPhotoCampaignServant_d__388_o *v125; // x22
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v133; // x0
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__388_4; // x22
  Il2CppObject *v136; // x23
  struct MyRoomControl___c_StaticFields *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  struct MyRoomControl___c__DisplayClass388_0_o *v146; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__388_o *v147; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v149; // x23
  UIStandFigureR_o *v150; // x20
  System_Action_o *v151; // x22
  Il2CppObject *v152; // x20
  System_Func_bool__o *v153; // x21
  UnityEngine_WaitWhile_o *v154; // x20
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  __int64 v162; // x0
  __int64 v163; // x0
  float scale; // [xsp+1Ch] [xbp-54h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4352AC6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B70694(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B70694(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_B70694(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_System_Func_ServantPhotoEntity_FaceData__IEnumerable_int____ctor__);
    sub_B70694(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_B70694(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__388_4__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__0__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__10__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__1__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__2__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__3__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__5__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__6__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__7__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__8__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__9__);
    sub_B70694(&MyRoomControl___c__DisplayClass388_0_TypeInfo);
    sub_B70694(&MyRoomControl___c_TypeInfo);
    sub_B70694(&UIStandFigureRender_TypeInfo);
    sub_B70694(&UnityEngine_WaitWhile_TypeInfo);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B70694(&StringLiteral_6782/*"FinishedFadePhotoServant"*/);
    byte_4352AC6 = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_B70764(MyRoomControl___c__DisplayClass388_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      p__8__1 = &v2->fields.__8__1;
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass388_0_o *)v4;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__8__1,
        (System_Int32_array **)v4,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_84;
      v18 = (System_Int32_array **)v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v18;
      sub_B70630((BattleServantConfConponent_o *)&this->fields, v18, v12, v13, v14, v15, v16, v17);
      if ( !_4__this )
        goto LABEL_84;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_84;
      (*p__8__1)->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_84;
      v166.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v166.fields.x = flt_32EBEC0[!_4__this->fields._IsMasterRight_k__BackingField]
                    + _4__this->fields.defaultPhotoServantPos.fields.x;
      v166.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v166, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.myRoomData;
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)MyRoomData__getUsrSvtData(
                                                                   (MyRoomData_o *)this,
                                                                   _4__this->fields.photoCampaignServantUsrId,
                                                                   0LL);
      if ( !this )
        goto LABEL_84;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
      photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
      v21 = SvtId;
      Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
      v2->fields._imageId_5__2 = Id;
      v23 = Id;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      v24 = 1;
      v2->fields._formId_5__3 = UIStandFigureRender__GetForm(v23, 1, -1, 0LL);
      photoCampaignType = _4__this->fields.photoCampaignType;
      _4__this->fields.photoCampaignServantImageId = v2->fields._imageId_5__2;
      photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
      formId_5__3 = v2->fields._formId_5__3;
      _8__1 = (Il2CppObject *)v2->fields.__8__1;
      v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        _8__1,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_84;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v21,
        photoCampaignLimitCount,
        1,
        0,
        formId_5__3,
        10,
        v29,
        photoCampaignType == 1,
        0LL);
      v30 = (Il2CppObject *)v2->fields.__8__1;
      v31 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v31,
        v30,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__1__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v32 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v32, v31, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v32;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v2->fields.__1__state = 1;
      return v24;
    case 1:
      v86 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v86 )
        goto LABEL_84;
      v86->fields.flag = 1;
      v87 = (Il2CppObject *)v2->fields.__8__1;
      v88 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v88, v87, Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__2__, 0LL);
      if ( !_4__this )
        goto LABEL_84;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v88, 0LL);
      v89 = (Il2CppObject *)v2->fields.__8__1;
      v90 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v90,
        v89,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__3__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v91 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v91, v90, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v91;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v91,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      v55 = 2;
      goto LABEL_81;
    case 2:
      v2->fields.__1__state = -1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                                   &entity,
                                                                   v2->fields._imageId_5__2,
                                                                   (const MethodInfo_21C06C4 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)entity;
        if ( !entity )
          goto LABEL_84;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)ServantPhotoEntity__GetFaceList(
                                                                     (ServantPhotoEntity_o *)entity,
                                                                     v2->fields._formId_5__3,
                                                                     0LL);
        if ( !_4__this )
          goto LABEL_84;
        v62 = (System_Int32_array **)this;
        p_photoCampaignFaceList = (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignFaceList;
        _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v62;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_84;
        v102 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v102 )
          goto LABEL_84;
        standFigureCollectList = v102->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_84;
        size = standFigureCollectList->fields._size;
        v105 = sub_B70764(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v105, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B706AC(int___TypeInfo, (unsigned int)size);
        if ( !v105 )
          goto LABEL_84;
        *(_QWORD *)(v105 + 16) = this;
        v112 = (__int64 *)(v105 + 16);
        sub_B70630(
          (BattleServantConfConponent_o *)(v105 + 16),
          (System_Int32_array **)this,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
        v113 = (System_Int32_array **)sub_B706AC(int___TypeInfo, (unsigned int)size);
        v114 = (__int64 *)(v105 + 24);
        *(_QWORD *)(v105 + 24) = v113;
        sub_B70630((BattleServantConfConponent_o *)(v105 + 24), v113, v115, v116, v117, v118, v119, v120);
        if ( size >= 1 )
        {
          v121 = 8LL;
          while ( 1 )
          {
            v122 = *v112;
            if ( !*v112 )
              break;
            if ( v121 - 8 >= (unsigned __int64)*(unsigned int *)(v122 + 24) )
              goto LABEL_85;
            *(_DWORD *)(v122 + 4 * v121) = 0;
            v123 = *v114;
            if ( !*v114 )
              break;
            if ( v121 - 8 >= (unsigned __int64)*(unsigned int *)(v123 + 24) )
              goto LABEL_85;
            v124 = v121 - 7 < size;
            *(_DWORD *)(v123 + 4 * v121++) = v2->fields._formId_5__3;
            if ( !v124 )
              goto LABEL_65;
          }
LABEL_84:
          sub_B7076C(this, method);
        }
LABEL_65:
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B706AC(
                                                                     ServantPhotoEntity_FaceData___TypeInfo,
                                                                     1LL);
        if ( !this )
          goto LABEL_84;
        v125 = this;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B70754(v105, this->klass->_1.element_class);
        if ( !this )
        {
          v163 = sub_B7078C(0LL);
          sub_B70738(v163, 0LL);
        }
        if ( !LODWORD(v125->fields.__2__current) )
        {
LABEL_85:
          v162 = sub_B70798(this);
          sub_B70738(v162, 0LL);
        }
        v125->fields.__4__this = (struct MyRoomControl_o *)v105;
        sub_B70630(
          (BattleServantConfConponent_o *)&v125->fields.__4__this,
          (System_Int32_array **)v105,
          v126,
          v127,
          v128,
          v129,
          v130,
          v131);
        p_photoCampaignFaceList = (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignFaceList;
        v62 = (System_Int32_array **)v125;
        _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v125;
      }
      sub_B70630(p_photoCampaignFaceList, v62, v56, v57, v58, v59, v60, v61);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v133 = MyRoomControl___c_TypeInfo;
      if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v133 = MyRoomControl___c_TypeInfo;
      }
      static_fields = v133->static_fields;
      _9__388_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__388_4;
      if ( !_9__388_4 )
      {
        if ( (BYTE3(v133->vtable._0_Equals.methodPtr) & 4) != 0 && !v133->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v133);
          static_fields = MyRoomControl___c_TypeInfo->static_fields;
        }
        v136 = (Il2CppObject *)static_fields->__9;
        _9__388_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__388_4,
          v136,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__388_4__,
          (const MethodInfo_29ADCC4 *)Method_System_Func_ServantPhotoEntity_FaceData__IEnumerable_int____ctor__);
        v137 = MyRoomControl___c_TypeInfo->static_fields;
        v137->__9__388_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__388_4;
        sub_B70630(
          (BattleServantConfConponent_o *)&v137->__9__388_4,
          (System_Int32_array **)_9__388_4,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143);
      }
      v144 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                    photoCampaignFaceList,
                                                                    (System_Func_TSource__IEnumerable_TResult___o *)_9__388_4,
                                                                    (const MethodInfo_1CC578C *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v145 = System_Linq_Enumerable__Distinct_int_(
               v144,
               (const MethodInfo_1CB96F0 *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v145,
                                                                   (const MethodInfo_1CCB4A0 *)Method_System_Linq_Enumerable_ToList_int___);
      v146 = v2->fields.__8__1;
      if ( !v146 )
        goto LABEL_84;
      v146->fields.flag = 1;
      v147 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_84;
      SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
      v149 = (Il2CppObject *)v2->fields.__8__1;
      v150 = SvtStandFigure;
      v151 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v151,
        v149,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__5__,
        0LL);
      if ( !v150 )
        goto LABEL_84;
      UIStandFigureR__PreloadFormAssets(v150, (System_Collections_Generic_List_int__o *)v147, v151, 0LL);
      v152 = (Il2CppObject *)v2->fields.__8__1;
      v153 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v153,
        v152,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__6__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v154 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v154, v153, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v154;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v154,
        v155,
        v156,
        v157,
        v158,
        v159,
        v160);
      v55 = 3;
LABEL_81:
      v2->fields.__1__state = v55;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v70 = _4__this->fields.photoCampaignFaceList;
      if ( !v70 )
        goto LABEL_84;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v70->max_length )
        goto LABEL_85;
      v72 = (System_Int32_array **)v70->m_Items[photoCampaignFaceListIndex];
      v2->fields._faceData_5__4 = (struct ServantPhotoEntity_FaceData_o *)v72;
      p_faceData_5__4 = (BattleServantConfConponent_o *)&v2->fields._faceData_5__4;
      sub_B70630(p_faceData_5__4, v72, v64, v65, v66, v67, v68, v69);
      klass = (ServantPhotoEntity_FaceData_o *)p_faceData_5__4->klass;
      classBoardSkillObj = (Il2CppObject *)p_faceData_5__4[-1].fields.classBoardSkillObj;
      v76 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v76,
        classBoardSkillObj,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__7__,
        0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, klass, v76, 0LL);
      v77 = (Il2CppObject *)p_faceData_5__4[-1].fields.classBoardSkillObj;
      v78 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v78,
        v77,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__8__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v79 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v79, v78, 0LL);
      p_faceData_5__4[-1].fields.BattleAssetUIAtlas = (struct UIAtlas_o *)v79;
      sub_B70630(
        (BattleServantConfConponent_o *)((char *)p_faceData_5__4 - 32),
        (System_Int32_array **)v79,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      LODWORD(p_faceData_5__4[-1].fields.data) = 4;
      return 1;
    case 4:
      faceData_5__4 = v2->fields._faceData_5__4;
      v2->fields.__1__state = -1;
      if ( !faceData_5__4 )
        goto LABEL_84;
      multiForm = faceData_5__4->fields.multiForm;
      if ( !multiForm )
        goto LABEL_84;
      if ( !multiForm->max_length )
        goto LABEL_85;
      if ( !_4__this )
        goto LABEL_84;
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        _4__this,
        v2->fields._imageId_5__2,
        multiForm->m_Items[1],
        &v2->fields._svtMovePos_5__5,
        &scale,
        0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScale_32499584(gameObject, scale, 0LL);
      v42 = v2->fields.__8__1;
      if ( !v42 )
        goto LABEL_84;
      v42->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v44 = (Il2CppObject *)v2->fields.__8__1;
      v45 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v45, v44, Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__9__, 0LL);
      if ( !photoCampaignComponent )
        goto LABEL_84;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v45, 0LL);
      v46 = (Il2CppObject *)v2->fields.__8__1;
      v47 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v47,
        v46,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__10__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v48 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v48, v47, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v48;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v55 = 5;
      goto LABEL_81;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_84;
      TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_84;
      TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 0LL);
      titleInfo = _4__this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)titleInfo->fields.titleImg;
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v99 = _4__this->fields.titleInfo;
      if ( !v99 )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)v99->fields.headerBgImg;
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_84;
      TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignState = 2;
      if ( !this )
        goto LABEL_84;
      v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(
        _4__this,
        v100,
        v2->fields._svtMovePos_5__5,
        (System_String_o *)StringLiteral_6782/*"FinishedFadePhotoServant"*/,
        0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_84;
      v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v101, PhotoCampaignMasterPosition, 0LL, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__388__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__388_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoCampaignServant_d__388__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoCampaignServant_d__388_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__LoadPhotoCampaignServant_d__388_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__388__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__388_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__388__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoCampaignServant_d__388_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__399___ctor(
        MyRoomControl__StartCameraEffect_d__399_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__399__MoveNext(
        MyRoomControl__StartCameraEffect_d__399_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl__StartCameraEffect_d__399_o *v8; // x20
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  UILabel_o *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v12; // x22
  bool v13; // w21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_WaitForSeconds_o *v15; // x19
  BattleServantConfConponent_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p__2__current; // x20
  int32_t v24; // w1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  UILabel_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4352AC7 & 1) == 0 )
  {
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4352AC7 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignFrameSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__399_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      _4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignFrameWideSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__399_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      !_4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_34;
    v24 = _4__this->fields._IsOnlyServant_k__BackingField ? 362 : 870;
    UIWidget__set_width((UIWidget_o *)this, v24, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    zero = UnityEngine_Vector3__get_zero(0LL);
    GameObjectExtensions__SetLocalPosition(photoCampaignProduction, zero, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_34;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__399_o *)titleInfo->fields.backBtn;
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    MyRoomControl__SetPhotoCampaignUi(_4__this, 1, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignCameraButton;
    if ( !this )
      goto LABEL_34;
    photoCampaignCameraEffect = (UILabel_o *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v30 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                   photoCampaignCameraEffect,
                                   transform,
                                   (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v30;
    sub_B70630(
      (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignInstantiateCameraEffect,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = -1;
    sub_B70630(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_34;
  this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_34;
  photoCampaignShutterEffect = (UILabel_o *)_4__this->fields.photoCampaignShutterEffect;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    photoCampaignShutterEffect,
    v12,
    (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignProduction;
  if ( !this
    || (v13 = 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignFadeSprite) == 0LL) )
  {
LABEL_34:
    sub_B7076C(this, method);
  }
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_UIWidget_(
    v14,
    (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v15 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v15, 0.066, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v15;
  v16 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B70630(v16, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)&v16[-1].fields.isOpenAfter = 1;
  return v13;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__399__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__399_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__399__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__399_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__StartCameraEffect_d__399_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__399__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__399_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__399__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__399_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4352AB1 & 1) == 0 )
  {
    sub_B70694(&MyRoomControl___c_TypeInfo);
    byte_4352AB1 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__237_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4352AB3 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352AB3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__317_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4352AB4 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4352AB4 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  ManagementManager__reboot(Instance, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__388_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_B7076C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void __fastcall MyRoomControl___c___initMyRoom_b__215_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__236_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4352AB2 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352AB2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass235_0___ctor(
        MyRoomControl___c__DisplayClass235_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass235_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass235_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(this, method);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass239_0___ctor(
        MyRoomControl___c__DisplayClass239_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass239_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass239_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl___c__DisplayClass239_0_o *v8; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  struct MyRoomControl_o *v14; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v8 = this;
  if ( (byte_4352AB5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass239_0_o *)sub_B70694(&Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__1__);
    byte_4352AB5 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass239_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  standFigureCollectList = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  this[1].fields.__9__2 = standFigureCollectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this[1].fields.__9__2,
    (System_Int32_array **)standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (MyRoomControl___c__DisplayClass239_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[18].fields.__9__1, 0, 0LL);
  v12 = v8->fields.__4__this;
  if ( !v12 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass239_0_o *)v12->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v12->fields.isExistVoiceData, 0LL);
  v13 = v8->fields.__4__this;
  if ( !v13 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass239_0_o *)v13->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v13->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass239_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].monitor) )
    MyRoomControl__setNormalFace_27265484((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v14 = v8->fields.__4__this;
  if ( !v14 )
    goto LABEL_20;
  favoriteChangeComp = v14->fields.favoriteChangeComp;
  _9__1 = v8->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v8,
      Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v8->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->fields.__9__1,
      (System_Int32_array **)_9__1,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_B7076C(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass239_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass239_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  struct MyRoomControl_o *v5; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MyRoomControl_o *v14; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v16; // x8
  float v17; // s8
  int v18; // s1
  struct MyRoomControl_o *v19; // x8
  int v20; // s9
  int v21; // s2
  float v22; // s0
  int v23; // s1
  struct MyRoomControl_o *v24; // x8

  if ( (byte_4352AB6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__2__);
    sub_B70694(&StringLiteral_11543/*"ReleaseTouch"*/);
    byte_4352AB6 = 1;
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
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v14->fields.standFigureBack;
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
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v16->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v17 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v19->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v20 = v18;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v21 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v22 = -v17;
    v23 = v20;
    MyRoomControl__moveControl(
      _4__this,
      _4__this->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v21 - 2),
      (System_String_o *)StringLiteral_11543/*"ReleaseTouch"*/,
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
        v5 = this->fields.__4__this;
        if ( v5 )
        {
          standFigureBack = v5->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.__9__2,
              (System_Int32_array **)_9__2,
              v8,
              v9,
              v10,
              v11,
              v12,
              v13);
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
    sub_B7076C(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_30;
  v24->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass239_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass239_0_o *this,
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
    sub_B7076C(_4__this, v3);
  }
  if ( _4__this->fields.isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass240_0___ctor(
        MyRoomControl___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass240_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass240_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass240_0_o *)_4__this->fields.svtClickCollider) == 0LL)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass240_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0LL),
        !voicePlayBtn) )
  {
    sub_B7076C(this, method);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass241_0___ctor(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass241_0___SetMaterialSvtFigure_b__0(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomControl___c__DisplayClass241_0_o *v8; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  MyRoomControl___c__DisplayClass241_0_c *standFigureCollectList; // x1
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct MyRoomControl_o *v15; // x8
  struct MyRoomControl_o *v16; // x8
  struct MyRoomControl_o *v17; // x8
  int monitor; // w8
  struct MyRoomControl_o *v19; // x8
  StandFigureBack_o *v20; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct MyRoomControl_o *v28; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v30; // x8
  float v31; // s8
  int v32; // s1
  struct MyRoomControl_o *v33; // x8
  int v34; // s9
  int v35; // s2
  float v36; // s0
  int v37; // s1
  struct MyRoomControl_o *v38; // x8

  v8 = this;
  if ( (byte_4352AB7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__1__);
    this = (MyRoomControl___c__DisplayClass241_0_o *)sub_B70694(&StringLiteral_11543/*"ReleaseTouch"*/);
    byte_4352AB7 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_46;
  standFigureCollectList = (MyRoomControl___c__DisplayClass241_0_c *)standFigureBack->fields.standFigureCollectList;
  this[2].klass = standFigureCollectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this[2],
    (System_Int32_array **)standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v12 = v8->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v12->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v13 = v8->fields.__4__this;
  if ( !v13 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v13->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v14 = v8->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v14->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = v8->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v15->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v16 = v8->fields.__4__this;
  if ( !v16 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v16->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v17 = v8->fields.__4__this;
  if ( !v17 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v17->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[21].fields.__9__1) )
    MyRoomControl__setNormalFace_27265484((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  monitor = (int)this[21].monitor;
  if ( monitor == 1 )
  {
    this = (MyRoomControl___c__DisplayClass241_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v28 = v8->fields.__4__this;
    if ( !v28 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)v28->fields.standFigureBack;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)this->fields.end_act;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v30 = v8->fields.__4__this;
    if ( !v30 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)v30->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v31 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass241_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v32 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v33 = v8->fields.__4__this;
    if ( !v33 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)v33->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v34 = v32;
    this = (MyRoomControl___c__DisplayClass241_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v35 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass241_0_o *)v8->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v36 = -v31;
    v37 = v34;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].fields.__4__this,
      *(UnityEngine_Vector3_o *)(&v35 - 2),
      (System_String_o *)StringLiteral_11543/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !monitor )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v19 = v8->fields.__4__this;
    if ( v19 )
    {
      v20 = v19->fields.standFigureBack;
      _9__1 = v8->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v8,
          Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v8->fields.__9__1 = _9__1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v8->fields.__9__1,
          (System_Int32_array **)_9__1,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      if ( v20 )
      {
        StandFigureBack__Fadein(v20, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_B7076C(this, method);
  }
  ActionExtensions__Call(v8->fields.end_act, 0LL);
  v38 = v8->fields.__4__this;
  if ( !v38 )
    goto LABEL_46;
  v38->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass241_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_B7076C(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass248_0___ctor(
        MyRoomControl___c__DisplayClass248_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass248_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass248_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass248_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  v2 = this;
  if ( (byte_4352AB8 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass248_0_o *)sub_B70694(&StringLiteral_8506/*"LOAD_END"*/);
    byte_4352AB8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass248_0_o *)_4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass248_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v2->fields.svtVoiceEnt, 0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass248_0_o *)v5->fields.myRoomFsm) == 0LL )
  {
    sub_B7076C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8506/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass310_0___ctor(
        MyRoomControl___c__DisplayClass310_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass310_0___SetFavoriteSvt_b__0(
        MyRoomControl___c__DisplayClass310_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass310_0_o *v3; // x19
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass310_0_o *)_4__this->fields.svtCtr) == 0LL)
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v3->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass310_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v3->fields.svtVoiceEnt, 0LL),
        (v5 = v3->fields.__4__this) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  v5->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass310_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass310_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *callback; // x0

  if ( (byte_4352AB9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352AB9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass310_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass310_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass329_0___ctor(
        MyRoomControl___c__DisplayClass329_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass329_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass329_0_o *this,
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
  MyRoomControl___c__DisplayClass329_0_o *v10; // x19
  MyRoomControl___c__DisplayClass329_0_c *standFigureCollectList; // x1
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
  this = (MyRoomControl___c__DisplayClass329_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = (MyRoomControl___c__DisplayClass329_0_c *)bondsStandFigureBack->fields.standFigureCollectList;
  this[2].klass = standFigureCollectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this[2],
    (System_Int32_array **)standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (MyRoomControl___c__DisplayClass329_0_o *)v10->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass329_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v14 = v10->fields.__4__this;
  if ( !v14 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass329_0_o *)v14->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v15 = v12;
  v16 = v13;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v17 = v10->fields.__4__this;
  if ( !v17
    || (this = (MyRoomControl___c__DisplayClass329_0_o *)v17->fields.bondsStandFigureBack) == 0LL
    || (this = (MyRoomControl___c__DisplayClass329_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0LL)) == 0LL
    || (this = (MyRoomControl___c__DisplayClass329_0_o *)this->fields.bondsSvtObj) == 0LL
    || (this = (MyRoomControl___c__DisplayClass329_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_B7076C(this, method);
  }
  v18.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v18.fields.y = v15;
  v18.fields.z = v16;
  GameObjectExtensions__SetLocalPosition(v10->fields.bondsSvtObj, v18, 0LL);
  v10->fields.createStandEnd = 1;
}


void __fastcall MyRoomControl___c__DisplayClass345_0___ctor(
        MyRoomControl___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass345_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_B7076C(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass366_0___ctor(
        MyRoomControl___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass366_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0LL )
    sub_B7076C(this, method);
  return this->fields.loadedCount < (signed int)multipleStandFigureBacks->max_length;
}


void __fastcall MyRoomControl___c__DisplayClass366_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass366_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass366_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void __fastcall MyRoomControl___c__DisplayClass370_0___ctor(
        MyRoomControl___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass370_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass370_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass381_0___ctor(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass381_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass381_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v8; // x20
  MyRoomControl___c__DisplayClass381_0_o *v9; // x19
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct MyRoomControl_o *v19; // x8
  struct MyRoomControl_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct MyRoomControl_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct MyRoomControl_o *v34; // x25
  struct MyRoomControl_o *v35; // x8
  UILabel_o *v36; // x21
  UnityEngine_Transform_o *transform; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct MyRoomControl_o *v44; // x8
  struct MyRoomControl_o *v45; // x21
  struct MyRoomControl_o *v46; // x8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct MyRoomControl_o *v53; // x22
  struct MyRoomControl_o *v54; // x8
  UILabel_o *v55; // x21
  UnityEngine_Transform_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct MyRoomControl_o *v63; // x8
  struct MyRoomControl_o *v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7

  v8 = (System_Int32_array **)assetData;
  v9 = this;
  if ( (byte_4352ABA & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_19748/*"img_bg_shutter"*/);
    sub_B70694(&StringLiteral_10860/*"Polaroid_img_frame_wide"*/);
    sub_B70694(&StringLiteral_8591/*"LayerChangeButton"*/);
    sub_B70694(&StringLiteral_10794/*"PhotoSettingButton"*/);
    sub_B70694(&StringLiteral_9074/*"MasterEquipSettingDialog"*/);
    sub_B70694(&StringLiteral_5477/*"DownloadPhotoCampaignAtlas"*/);
    sub_B70694(&StringLiteral_16990/*"bit_camera_shutter"*/);
    sub_B70694(&StringLiteral_16989/*"bit_camera_iconblink"*/);
    sub_B70694(&StringLiteral_10858/*"Polaroid_btn_shutter"*/);
    sub_B70694(&StringLiteral_10859/*"Polaroid_img_frame"*/);
    this = (MyRoomControl___c__DisplayClass381_0_o *)sub_B70694(&StringLiteral_10795/*"PhotoTargetSelectDialog"*/);
    byte_4352ABA = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  _4__this->fields.photoCampaignAssetData = (struct AssetData_o *)v8;
  sub_B70630(
    (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignAssetData,
    v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !v8 )
    goto LABEL_45;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             (AssetData_o *)v8,
                                                             (System_String_o *)StringLiteral_5477/*"DownloadPhotoCampaignAtlas"*/,
                                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__op_Inequality(
                                                     Object_WarBoardWaitTimeSetting,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      goto LABEL_45;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__op_Inequality(
                                                       Component_srcLineSprite,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v9->fields.__4__this;
      if ( !v19 )
        goto LABEL_45;
      v19->fields.photoCampaignAtlas = (struct UIAtlas_o *)Component_srcLineSprite;
      sub_B70630(
        (BattleServantConfConponent_o *)&v19->fields.photoCampaignAtlas,
        (System_Int32_array **)Component_srcLineSprite,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
  }
  this = (MyRoomControl___c__DisplayClass381_0_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].fields.callBack,
    (System_String_o *)StringLiteral_10859/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].klass,
    (System_String_o *)StringLiteral_10860/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].klass,
    (System_String_o *)StringLiteral_10858/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].monitor,
    (System_String_o *)StringLiteral_19748/*"img_bg_shutter"*/,
    0LL);
  v20 = v9->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     (AssetData_o *)v8,
                                                     (System_String_o *)StringLiteral_16989/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( !v20 )
    goto LABEL_45;
  v20->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v20->fields.photoCampaignCameraEffect,
    (System_Int32_array **)this,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = v9->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     (AssetData_o *)v8,
                                                     (System_String_o *)StringLiteral_16990/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( !v27 )
    goto LABEL_45;
  v27->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v27->fields.photoCampaignShutterEffect,
    (System_Int32_array **)this,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = v9->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     (AssetData_o *)v8,
                                                     (System_String_o *)StringLiteral_10795/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  v35 = v9->fields.__4__this;
  if ( !v35 )
    goto LABEL_45;
  v36 = (UILabel_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v35->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_45;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     v36,
                                                     transform,
                                                     (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  if ( !this )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v34 )
    goto LABEL_45;
  v34->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v34->fields.photoTargetSelectDialog,
    (System_Int32_array **)this,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = v9->fields.__4__this;
  if ( !v44 )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v44->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_45;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v45 = v9->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     (AssetData_o *)v8,
                                                     (System_String_o *)StringLiteral_10794/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  v46 = v9->fields.__4__this;
  if ( !v46 )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     (UILabel_o *)this,
                                                     v46->fields.panelRoot,
                                                     (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  if ( !this )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v45 )
    goto LABEL_45;
  v45->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v45->fields.photoSettingButtonComponent,
    (System_Int32_array **)this,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  assetData = (AssetData_o *)v9->fields.__4__this;
  if ( !assetData )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)assetData[14].monitor;
  if ( !this )
    goto LABEL_45;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v53 = v9->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     (AssetData_o *)v8,
                                                     (System_String_o *)StringLiteral_9074/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  v54 = v9->fields.__4__this;
  if ( !v54 )
    goto LABEL_45;
  v55 = (UILabel_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v54->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_45;
  v56 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     v55,
                                                     v56,
                                                     (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  if ( !this )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v53 )
    goto LABEL_45;
  v53->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v53->fields.masterEquipSettingDialog,
    (System_Int32_array **)this,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = v9->fields.__4__this;
  if ( !v63
    || (this = (MyRoomControl___c__DisplayClass381_0_o *)v63->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v64 = v9->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                           (AssetData_o *)v8,
                                                           (System_String_o *)StringLiteral_8591/*"LayerChangeButton"*/,
                                                           (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720),
        !v64)
    || (v64->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_B70630(
          (BattleServantConfConponent_o *)&v64->fields.photoLayerChangeObj,
          (System_Int32_array **)this,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70),
        (this = (MyRoomControl___c__DisplayClass381_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_45:
    sub_B7076C(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v9->fields.callBack, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___ctor(
        MyRoomControl___c__DisplayClass382_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___LoadMasterEquip_b__0(
        MyRoomControl___c__DisplayClass382_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass382_0_o *v4; // x20
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v6; // x8
  struct EquipEntity_o *equipEnt; // x9
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *masterMaleEquipTexture; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_4352ABB & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D___);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (MyRoomControl___c__DisplayClass382_0_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4352ABB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass382_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)assetData,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AssetData__Add__);
      v6 = v4->fields.__4__this;
      if ( v6 )
      {
        equipEnt = v4->fields.equipEnt;
        if ( equipEnt )
        {
          masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v6->fields.masterMaleEquipTexture;
          v10 = *(_QWORD *)&equipEnt->fields.id.fields.currentCryptoKey;
          v9 = *(_QWORD *)&equipEnt->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v12.fields.currentCryptoKey = v10;
          *(_QWORD *)&v12.fields.fakeValue = v9;
          this = (MyRoomControl___c__DisplayClass382_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                             v12,
                                                             0LL);
          if ( assetData )
          {
            v11 = (int)this;
            this = (MyRoomControl___c__DisplayClass382_0_o *)AssetData__GetObject_Texture2D_(
                                                               assetData,
                                                               (const MethodInfo_1BD661C *)Method_AssetData_GetObject_Texture2D___);
            if ( masterMaleEquipTexture )
            {
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                masterMaleEquipTexture,
                v11,
                (WarBoardAIRoute_RouteData_o *)this,
                (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_B7076C(this, assetData);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_31197044(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass382_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass382_0_o *v4; // x20
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v6; // x8
  struct EquipEntity_o *equipEnt; // x9
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *masterFemaleEquipTexture; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_4352ABC & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D___);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (MyRoomControl___c__DisplayClass382_0_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4352ABC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass382_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)assetData,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AssetData__Add__);
      v6 = v4->fields.__4__this;
      if ( v6 )
      {
        equipEnt = v4->fields.equipEnt;
        if ( equipEnt )
        {
          masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v6->fields.masterFemaleEquipTexture;
          v10 = *(_QWORD *)&equipEnt->fields.id.fields.currentCryptoKey;
          v9 = *(_QWORD *)&equipEnt->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v12.fields.currentCryptoKey = v10;
          *(_QWORD *)&v12.fields.fakeValue = v9;
          this = (MyRoomControl___c__DisplayClass382_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                             v12,
                                                             0LL);
          if ( assetData )
          {
            v11 = (int)this;
            this = (MyRoomControl___c__DisplayClass382_0_o *)AssetData__GetObject_Texture2D_(
                                                               assetData,
                                                               (const MethodInfo_1BD661C *)Method_AssetData_GetObject_Texture2D___);
            if ( masterFemaleEquipTexture )
            {
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                masterFemaleEquipTexture,
                v11,
                (WarBoardAIRoute_RouteData_o *)this,
                (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_B7076C(this, assetData);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_31197044(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass388_0___ctor(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__0(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass388_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x22
  UILabel_o *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v6; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  Il2CppObject *v14; // x21
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *namespaze; // x20
  EventDelegate_Callback_o *v17; // x22
  EventDelegate_o *v18; // x21

  v2 = this;
  if ( (byte_4352ABD & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&Method_MyRoomControl_OnClickPhotoServant__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    this = (MyRoomControl___c__DisplayClass388_0_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352ABD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass388_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_14;
  photoLayerChangeObj = (UILabel_o *)_4__this->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass388_0_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass388_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                     photoLayerChangeObj,
                                     transform,
                                     (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v6,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)Component_UIWidget;
  sub_B70630(
    (BattleServantConfConponent_o *)&_4__this->fields.photoSvtTouchPress,
    Component_UIWidget,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v14
    || (klass = v14[83].klass) == 0LL
    || (namespaze = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass->_1.namespaze,
        v17 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v17, v14, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL),
        v18 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo),
        EventDelegate___ctor_29875020(v18, v17, 0LL),
        !namespaze) )
  {
LABEL_14:
    sub_B7076C(this, method);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    namespaze,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  v2->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__1(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


bool __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__10(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__2(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__3(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__5(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__6(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__7(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__8(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass388_0___LoadPhotoCampaignServant_b__9(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void __fastcall MyRoomControl___c__DisplayClass389_0___ctor(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass389_0___CreatePhotoMasterFigure_b__0(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass389_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct MyRoomControl_o *v16; // x8
  struct MyRoomControl_o *v17; // x22
  UILabel_o *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v20; // x0
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppObject *v28; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  EventDelegate_Callback_o *v31; // x22
  EventDelegate_o *v32; // x21
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4352ABE & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&Method_MyRoomControl_OnclickPhotoMaster__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    this = (MyRoomControl___c__DisplayClass389_0_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352ABE = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_23;
  if ( !this )
    goto LABEL_23;
  v33.fields.y = v4->fields.defaultPhotoServantPos.fields.y + 0.0;
  v33.fields.x = flt_32EBEA8[!v4->fields._IsMasterRight_k__BackingField] + v4->fields.defaultPhotoServantPos.fields.x;
  v33.fields.z = v4->fields.defaultPhotoServantPos.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v5->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32499584(gameObject, 0.9, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v7->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v8,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  v7->fields.photoMasterPanel = (struct UIPanel_o *)Component_UIWidget;
  sub_B70630(
    (BattleServantConfConponent_o *)&v7->fields.photoMasterPanel,
    Component_UIWidget,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v16->fields.photoMasterPanel;
  if ( !this )
    goto LABEL_23;
  UIPanel__set_depth((UIPanel_o *)this, 15, 0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v17->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  photoLayerChangeObj = (UILabel_o *)v17->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass389_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_23;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      photoLayerChangeObj,
                                      transform,
                                      (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  v21 = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 v20,
                                 (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  v17->fields.photoMasterTouchPress = (struct UITouchPress_o *)v21;
  sub_B70630((BattleServantConfConponent_o *)&v17->fields.photoMasterTouchPress, v21, v22, v23, v24, v25, v26, v27);
  v28 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v28
    || (monitor = v28[83].monitor) == 0LL
    || (v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)monitor + 3),
        v31 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v31, v28, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL),
        v32 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo),
        EventDelegate___ctor_29875020(v32, v31, 0LL),
        !v30) )
  {
LABEL_23:
    sub_B7076C(this, method);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  ActionExtensions__Call(v2->fields.func, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass393_0___ctor(
        MyRoomControl___c__DisplayClass393_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass393_0___ChangePhotoCampaignServantFace_b__0(
        MyRoomControl___c__DisplayClass393_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  struct ServantPhotoEntity_FaceData_o *faceData; // x8
  struct System_Int32_array *multiForm; // x8
  struct MyRoomControl_o *v6; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x0
  struct MyRoomControl_o *v10; // x8
  float z; // w10
  __int64 v12; // x0
  UnityEngine_Vector3_o v13; // [xsp+0h] [xbp-20h] BYREF
  float scale; // [xsp+1Ch] [xbp-4h] BYREF

  v13.fields.z = 0.0;
  *(_QWORD *)&v13.fields.x = 0LL;
  scale = 0.0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  faceData = this->fields.faceData;
  if ( !faceData )
    goto LABEL_11;
  multiForm = faceData->fields.multiForm;
  if ( !multiForm )
    goto LABEL_11;
  if ( !multiForm->max_length )
  {
    v12 = sub_B70798(_4__this);
    sub_B70738(v12, 0LL);
  }
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    _4__this,
    _4__this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    &v13,
    &scale,
    0LL);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_11;
  _4__this = (struct MyRoomControl_o *)v6->fields.photoCampaignStandFigureBack;
  if ( !_4__this
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL),
        GameObjectExtensions__SetLocalPosition(gameObject, v13, 0LL),
        (v8 = this->fields.__4__this) == 0LL)
    || (_4__this = (struct MyRoomControl_o *)v8->fields.photoCampaignStandFigureBack) == 0LL
    || (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL),
        GameObjectExtensions__SetLocalScale_32499584(v9, scale, 0LL),
        (v10 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B7076C(_4__this, method);
  }
  z = v13.fields.z;
  *(_QWORD *)&v10->fields.currentPhotoServantPos.fields.x = *(_QWORD *)&v13.fields.x;
  v10->fields.currentPhotoServantPos.fields.z = z;
}


void __fastcall MyRoomControl___c__DisplayClass412_0___ctor(
        MyRoomControl___c__DisplayClass412_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass412_0___ChangeMasterSetting_b__1(
        MyRoomControl___c__DisplayClass412_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass412_0_o *v2; // x21
  Il2CppObject *_4__this; // x23
  UIMasterFigureTextureOld_o *monitor; // x19
  int32_t genderType; // w20
  int32_t equipId; // w21
  System_Action_o *v7; // x22

  v2 = this;
  if ( (byte_4352ABF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass412_0_o *)sub_B70694(&Method_MyRoomControl__ChangeMasterSetting_b__412_2__);
    byte_4352ABF = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (UIMasterFigureTextureOld_o *)_4__this[80].monitor,
        genderType = v2->fields.genderType,
        equipId = v2->fields.equipId,
        v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v7, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__412_2__, 0LL),
        !monitor) )
  {
    sub_B7076C(this, method);
  }
  UIMasterFigureTextureOld__SetCharacter(monitor, 2, genderType, equipId, v7, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass413_0___ctor(
        MyRoomControl___c__DisplayClass413_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass413_0___ExchangePosition_b__0(
        MyRoomControl___c__DisplayClass413_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass413_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v5; // x8
  UnityEngine_GameObject_o *v6; // x0
  struct MyRoomControl_o *v7; // x8
  float z; // w10
  struct MyRoomControl_o *v9; // x8
  MyRoomControl_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x19
  CommonUI_o *v12; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4352AC0 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    this = (MyRoomControl___c__DisplayClass413_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352AC0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, v2->fields.svtMovePos, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)v5->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_16;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32499584(v6, v2->fields.svtMoveScale, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  z = v2->fields.svtMovePos.fields.z;
  *(_QWORD *)&v7->fields.currentPhotoServantPos.fields.x = *(_QWORD *)&v2->fields.svtMovePos.fields.x;
  v7->fields.currentPhotoServantPos.fields.z = z;
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)v9->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  v11 = (UnityEngine_GameObject_o *)this;
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v10, 0LL);
  GameObjectExtensions__SetLocalPosition(v11, PhotoCampaignMasterPosition, 0LL);
  this = (MyRoomControl___c__DisplayClass413_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
LABEL_16:
    sub_B7076C(this, method);
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl__initMaterial_d__284___ctor(
        MyRoomControl__initMaterial_d__284_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__initMaterial_d__284__MoveNext(
        MyRoomControl__initMaterial_d__284_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  bool v7; // w21
  System_Func_bool__o *v8; // x22
  UnityEngine_WaitUntil_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352AC8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_MyRoomControl__initMaterial_b__284_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4352AC8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), !_4__this)
      || (Instance = (CommonUI_o *)_4__this[2].klass) == 0LL )
    {
LABEL_13:
      sub_B7076C(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v7 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v8 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    _4__this,
    Method_MyRoomControl__initMaterial_b__284_0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v9 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__284__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__284_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__initMaterial_d__284__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__284_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__initMaterial_d__284_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__284__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__284_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__initMaterial_d__284__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__284_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__329___ctor(
        MyRoomControl__svtVoicePlayAct_d__329_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__svtVoicePlayAct_d__329__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__329_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__svtVoicePlayAct_d__329_o *v3; // x19
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  CommonUI_o *v19; // x21
  Il2CppObject **p__8__1; // x27
  __int64 v21; // x2
  System_Int32_array **v22; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool result; // w0
  System_Collections_Generic_List_VoiceCondType_Type__o *v31; // x21
  int32_t *item; // x8
  ServantVoiceEntity_o *v33; // x22
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject *v41; // x23
  __int64 v42; // x2
  struct MaterialEventLogListViewItem_Info_o *v43; // x8
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct MaterialEventLogListViewItem_Info_o *v51; // x8
  System_Int32_array **VoiceList_29798688; // x0
  __int64 *p_svtVoiceDataList_5__4; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *svtVoiceDataList_5__4; // x8
  struct MaterialEventLogListViewItem_Info_o *v61; // x8
  System_Int32_array **VoiceList_29798104; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct MyRoomControl___c__DisplayClass329_0_o *_8__1; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  struct MaterialEventLogListViewItem_Info_o *v78; // x8
  int32_t v79; // w22
  struct MaterialEventLogListViewItem_Info_o *v80; // x8
  int32_t v81; // w23
  int32_t voiceCondValue; // w24
  __int64 v83; // x24
  int32_t v84; // w23
  __int64 v85; // x8
  __int64 v86; // x8
  __int64 v87; // x21
  __int64 v88; // x8
  __int64 v89; // x8
  struct MaterialEventLogListViewItem_Info_o *v90; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  Il2CppObject *v93; // x26
  System_Action_o *v94; // x25
  System_Int32_array **v95; // x0
  BattleServantConfConponent_o *v96; // x19
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  int v103; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *v104; // x21
  int size; // w8
  MyRoomControl__svtVoicePlayAct_d__329_o **p_bondsSvtCtr; // x22
  System_Int32_array **v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  unsigned int v114; // w22
  ServantVoiceData_array *v115; // x21
  ServantVoiceData_o *v116; // x8
  CommonUI_o *v117; // x21
  __int64 v118; // x2
  System_Int32_array **v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x2
  CommonUI_o *v127; // x21
  __int64 v128; // x2
  System_Int32_array **v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  struct MyRoomControl___c__DisplayClass329_0_o *v136; // x8
  CommonUI_o *v137; // x20
  __int64 v138; // x2
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  __int64 v153; // x0
  int v154; // [xsp+1Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_4352AC9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&char_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MyRoomControl___c__DisplayClass329_0__svtVoicePlayAct_b__0__);
    sub_B70694(&MyRoomControl___c__DisplayClass329_0_TypeInfo);
    this = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_B70694(&UIStandFigureRender_TypeInfo);
    byte_4352AC9 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_B70764(MyRoomControl___c__DisplayClass329_0_TypeInfo);
      System_Object___ctor(v5, 0LL);
      v3->fields.__8__1 = (struct MyRoomControl___c__DisplayClass329_0_o *)v5;
      sub_B70630(
        (BattleServantConfConponent_o *)&v3->fields.__8__1,
        (System_Int32_array **)v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v3->fields.__8__1;
      if ( !this )
        goto LABEL_138;
      v18 = (System_Int32_array **)v3->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v18;
      sub_B70630((BattleServantConfConponent_o *)&this->fields, v18, v12, v13, v14, v15, v16, v17);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v19 )
        goto LABEL_138;
      CommonUI__maskFadeout(v19, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_13:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v154 = 0;
        v22 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v21);
        v3->fields.__2__current = (Il2CppObject *)v22;
        p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(p__2__current, v22, v24, v25, v26, v27, v28, v29);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_138;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v31 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_VoiceCondType_Type____ctor(
        v31,
        (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v31 )
        goto LABEL_138;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v31,
        81,
        (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v3->fields.item;
      if ( !item )
        goto LABEL_138;
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_138;
      v33 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v3->fields._voiceAssetName_5__2 = (struct System_String_o *)VoiceAssetName;
      sub_B70630(
        (BattleServantConfConponent_o *)&v3->fields._voiceAssetName_5__2,
        VoiceAssetName,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v41 = (Il2CppObject *)System_Int32__ToString((int)v33 + 20, 0LL);
      LOWORD(v154) = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)j_il2cpp_value_box_0(char_TypeInfo, &v154, v42);
      v43 = v3->fields.item;
      if ( !v43 )
        goto LABEL_138;
      v44 = (System_Int32_array **)System_String__Concat_44837872(
                                     v41,
                                     (Il2CppObject *)this,
                                     (Il2CppObject *)v43->fields.voiceId,
                                     0LL);
      v3->fields._playSvtVoiceId_5__3 = (struct System_String_o *)v44;
      sub_B70630((BattleServantConfConponent_o *)&v3->fields._playSvtVoiceId_5__3, v44, v45, v46, v47, v48, v49, v50);
      v51 = v3->fields.item;
      if ( !v51 )
        goto LABEL_138;
      VoiceList_29798688 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_29798688(
                                                    v33,
                                                    v51->fields.svtVoiceType,
                                                    v3->fields._playSvtVoiceId_5__3,
                                                    (System_Collections_Generic_List_CondType_Kind__o *)v31,
                                                    0,
                                                    0LL);
      p_svtVoiceDataList_5__4 = (__int64 *)&v3->fields._svtVoiceDataList_5__4;
      v3->fields._svtVoiceDataList_5__4 = (struct System_Collections_Generic_List_ServantVoiceData____o *)VoiceList_29798688;
      sub_B70630(
        (BattleServantConfConponent_o *)&v3->fields._svtVoiceDataList_5__4,
        VoiceList_29798688,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      svtVoiceDataList_5__4 = v3->fields._svtVoiceDataList_5__4;
      if ( svtVoiceDataList_5__4 && svtVoiceDataList_5__4->fields._size )
        goto LABEL_39;
      v61 = v3->fields.item;
      if ( !v61 )
        goto LABEL_138;
      VoiceList_29798104 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_29798104(
                                                    v33,
                                                    v61->fields.svtVoiceType,
                                                    3,
                                                    v61->fields.voiceCondValue,
                                                    0LL,
                                                    -1,
                                                    0LL);
      *p_svtVoiceDataList_5__4 = (__int64)VoiceList_29798104;
      sub_B70630(
        (BattleServantConfConponent_o *)&v3->fields._svtVoiceDataList_5__4,
        VoiceList_29798104,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
LABEL_39:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      _8__1 = v3->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_138;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&_8__1->fields.bondsSvtObj,
        (System_Int32_array **)this,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      if ( !*p__8__1 )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)(*p__8__1)[1].monitor;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v78 = v3->fields.item;
      if ( !v78 )
        goto LABEL_138;
      v79 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)ServantScriptMaster__getId(v78->fields.svt_id, v79, 0LL);
      v80 = v3->fields.item;
      if ( !v80 )
        goto LABEL_138;
      v81 = (int)this;
      voiceCondValue = v80->fields.voiceCondValue;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UIStandFigureRender__GetForm(v81, 1, voiceCondValue, 0LL);
      v83 = *p_svtVoiceDataList_5__4;
      v84 = (int)this;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_66;
      if ( !*(_DWORD *)(v83 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v85 = *(_QWORD *)(*(_QWORD *)(v83 + 16) + 32LL);
      if ( !v85 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v85 + 24) )
        goto LABEL_139;
      v86 = *(_QWORD *)(v85 + 32);
      if ( !v86 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v86 + 60) )
        goto LABEL_66;
      v87 = *p_svtVoiceDataList_5__4;
      if ( !v87 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v87 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v88 = *(_QWORD *)(*(_QWORD *)(v87 + 16) + 32LL);
      if ( !v88 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v88 + 24) )
      {
LABEL_139:
        v153 = sub_B70798(this);
        sub_B70738(v153, 0LL);
      }
      v89 = *(_QWORD *)(v88 + 32);
      if ( !v89 )
        goto LABEL_138;
      v84 = *(_DWORD *)(v89 + 56);
LABEL_66:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v90 = v3->fields.item;
      if ( !v90 )
        goto LABEL_138;
      svt_id = v90->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v93 = *p__8__1;
      v94 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v94, v93, Method_MyRoomControl___c__DisplayClass329_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_138;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v79, 1, 0, v84, 10, v94, 0, 0LL);
LABEL_70:
      if ( !*p__8__1 )
        goto LABEL_138;
      if ( !LOBYTE((*p__8__1)[2].klass) )
      {
        v154 = 0;
        v107 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v2);
        v3->fields.__2__current = (Il2CppObject *)v107;
        v96 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(v96, v107, v108, v109, v110, v111, v112, v113);
        v103 = 2;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__voiceLoad(_4__this, v3->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_74:
      if ( _4__this->fields.isVoiceLoading )
      {
        v154 = 0;
        v95 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v2);
        v3->fields.__2__current = (Il2CppObject *)v95;
        v96 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(v96, v95, v97, v98, v99, v100, v101, v102);
        v103 = 3;
        goto LABEL_137;
      }
      v104 = v3->fields._svtVoiceDataList_5__4;
      if ( !v104 )
        goto LABEL_138;
      size = v104->fields._size;
      if ( size >= 2 )
      {
        v114 = 0;
        while ( 1 )
        {
          if ( size <= v114 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v115 = v104->fields._items->m_Items[v114];
          if ( !v115 )
            goto LABEL_138;
          if ( !v115->max_length )
            goto LABEL_139;
          v116 = v115->m_Items[0];
          if ( !v116 )
            goto LABEL_138;
          this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_String__op_Equality(
                                                              v116->fields.id,
                                                              v3->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          v104 = v3->fields._svtVoiceDataList_5__4;
          if ( !v104 )
            goto LABEL_138;
          size = v104->fields._size;
          if ( (int)++v114 >= size )
          {
            p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__329_o **)&_4__this->fields.bondsSvtCtr;
            goto LABEL_93;
          }
        }
        this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
        if ( this )
        {
          p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__329_o **)&_4__this->fields.bondsSvtCtr;
          MyRoomSvtControl__setSvtVoice_25236504((MyRoomSvtControl_o *)this, v115, v3->fields._voiceAssetName_5__2, 0LL);
          goto LABEL_93;
        }
        goto LABEL_138;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__329_o **)&_4__this->fields.bondsSvtCtr;
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
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v117 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v117 )
        goto LABEL_138;
      CommonUI__maskFadein(v117, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_100:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v154 = 0;
        v119 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v118);
        v3->fields.__2__current = (Il2CppObject *)v119;
        v96 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(v96, v119, v120, v121, v122, v123, v124, v125);
        v103 = 4;
        goto LABEL_137;
      }
LABEL_103:
      if ( !_4__this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v154 = 0;
        v146 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v126);
        v3->fields.__2__current = (Il2CppObject *)v146;
        v96 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(v96, v146, v147, v148, v149, v150, v151, v152);
        v103 = 5;
        goto LABEL_137;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v127 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v127 )
        goto LABEL_138;
      CommonUI__maskFadeout(v127, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_112:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v154 = 0;
        v129 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v128);
        v3->fields.__2__current = (Il2CppObject *)v129;
        v96 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(v96, v129, v130, v131, v132, v133, v134, v135);
        v103 = 6;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v3->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v136 = v3->fields.__8__1;
      if ( !v136 )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v136->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_138;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v137 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v137 )
        goto LABEL_138;
      CommonUI__maskFadein(v137, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_132:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_138:
        sub_B7076C(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v154 = 0;
      v139 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v154, v138);
      v3->fields.__2__current = (Il2CppObject *)v139;
      v96 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
      sub_B70630(v96, v139, v140, v141, v142, v143, v144, v145);
      v103 = 7;
LABEL_137:
      *(_DWORD *)&v96[-1].fields.isOpenAfter = v103;
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


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__329__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__329_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__svtVoicePlayAct_d__329__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__329_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MyRoomControl__svtVoicePlayAct_d__329_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__329__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__329_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__329__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__329_o *this,
        const MethodInfo *method)
{
  ;
}