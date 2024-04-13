void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  MyRoomControl_c *v13; // x8

  if ( (byte_42E9E0D & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2608/*"BGM_MYROOM_1"*/, v8, v9, v10);
    byte_42E9E0D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2608/*"BGM_MYROOM_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2608/*"BGM_MYROOM_1"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MyRoomControl_TypeInfo;
  MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY = 1;
  v13->static_fields->BUTTON_LIMIT_CHANGE = 2;
  v13->static_fields->BUTTON_DISP_CHANGE = 4;
  v13->static_fields->BUTTON_HELP = 8;
  v13->static_fields->BUTTON_MULTIPLE_VIEW = 16;
  v13->static_fields->BUTTON_PHOTO_CAMPAIGN = 32;
  v13->static_fields->BUTTON_OUT_X = -800.0;
  v13->static_fields->MULTIPLE_VIEW_SELECTED_MAX = 2;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
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
  MyRoomStateMaterial_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_int__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int v49; // w8
  struct System_Int64_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct System_Int32_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x0

  if ( (byte_42E9E0C & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&MyRoomStateMaterial_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v17, v18, v19);
    byte_42E9E0C = 1;
  }
  v20 = (MyRoomStateMaterial_o *)sub_B5D694(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v20, 0LL);
  this->fields.mStateMaterial = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mStateMaterial,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.imageIdList = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.materialImageIdList = v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.materialImageIdList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v41 )
    sub_B5D69C(0LL, v42);
  v49 = *(_DWORD *)(v41 + 24);
  if ( !v49 || (*(_DWORD *)(v41 + 40) = 0, *(_QWORD *)(v41 + 32) = 0x43900000C4000000LL, v49 == 1) )
  {
    v64 = sub_B5D6C8(v41);
    sub_B5D668(v64, 0LL);
  }
  *(_DWORD *)(v41 + 52) = 0;
  *(_QWORD *)(v41 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defaultMultipleServantPoses,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.voicePlayButtonDefaultPos = UnityEngine_Vector3__get_zero(0LL);
  this->fields.multipleViewFinishedTime = -1LL;
  v50 = (struct System_Int64_array *)sub_B5D5DC(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v57;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MyRoomControl_c *v11; // x0
  const MethodInfo *v12; // x1
  UIWidget_o *changeBGBtnImg; // x20
  MyRoomData_o *UsrSvtData; // x0
  __int64 v15; // x1
  int v16; // s0
  UIWidget_o *helpButtonImg; // x20
  int v21; // s0
  const MethodInfo *v25; // x2
  struct MyRoomData_o *myRoomData; // x10
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v31; // s0
  MyRoomControl_c *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42E9DCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    byte_42E9DCF = 1;
  }
  v11 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v11->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v12);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_28;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v16, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !helpButtonImg )
    goto LABEL_28;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v21, 0LL);
  myRoomData = this->fields.myRoomData;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !myRoomData )
    goto LABEL_28;
  UsrSvtData = (MyRoomData_o *)MyRoomData__getUsrSvtData(UsrSvtData, this->fields.fvrUsrSvtId, v25);
  if ( !UsrSvtData )
    goto LABEL_28;
  usrDeckData = UsrSvtData[1].fields.usrDeckData;
  mstInfoData = UsrSvtData[1].fields.mstInfoData;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v36.fields.fakeValue = mstInfoData;
  UsrSvtData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_28;
    LODWORD(UsrSvtData) = materialImageIdList->fields._size - 1;
  }
  if ( (int)UsrSvtData >= 1 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_28;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v31, 0LL);
    v35 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v35 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v35->static_fields->BUTTON_LIMIT_CHANGE;
  }
  UsrSvtData = (MyRoomData_o *)this->fields.mBlocker;
  if ( !UsrSvtData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UsrSvtData, 1, 0LL),
        (UsrSvtData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_28:
    sub_B5D69C(UsrSvtData, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)UsrSvtData, 1, 0LL);
  if ( this->fields.type == 10 )
  {
    UsrSvtData = (MyRoomData_o *)this->fields.soundPlayerComp;
    if ( UsrSvtData )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)UsrSvtData, 1, 0LL);
      return;
    }
    goto LABEL_28;
  }
}


float __fastcall MyRoomControl__CalcGameScreenAspectRatio(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagerConfig_c *v4; // x0
  int *static_fields; // x8
  float v6; // s0
  float v7; // s8
  float v8; // s9
  int32_t height; // w19
  int32_t width; // w0

  if ( (byte_42E9DFD & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DFD = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v4->static_fields;
  v6 = (float)static_fields[22];
  v7 = v6 / (float)static_fields[20];
  v8 = v6 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  return UnityEngine_Mathf__Clamp((float)height / (float)width, v8, v7, 0LL);
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

  if ( (byte_42E9DF8 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__CaptureServant_d__397_TypeInfo, width, height, method);
    byte_42E9DF8 = 1;
  }
  v7 = sub_B5D694(MyRoomControl__CaptureServant_d__397_TypeInfo);
  MyRoomControl__CaptureServant_d__397___ctor((MyRoomControl__CaptureServant_d__397_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = width;
  *(_DWORD *)(v7 + 48) = height;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeDisp(MyRoomControl_o *this, bool isSePlay, const MethodInfo *method)
{
  char v3; // vf
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  MyRoomControl_c *v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v29; // s0
  float v30; // s9
  float v31; // s1
  float v32; // s8
  const MethodInfo *v33; // x2
  float v34; // s2
  float v35; // s10
  MyRoomControl_o *v36; // x0
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x2
  float v39; // s9
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x3
  int32_t v42; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x3
  MyRoomControl_c *v46; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  StandFigureBack_o *v55; // x20
  System_Action_o *v56; // x21
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  UnityEngine_Vector3_o movePos; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9DCC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isSePlay, (_DWORD)method, v4);
    sub_B5D5C4(&Method_MyRoomControl__ChangeDisp_b__327_0__, v7, v8, v9);
    sub_B5D5C4(&Method_MyRoomControl__ChangeDisp_b__327_1__, v10, v11, v12);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11522/*"ReleaseTouch"*/, v19, v20, v21);
    byte_42E9DCC = 1;
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
  v22 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v22 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v22->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v22->static_fields->BUTTON_DISP_CHANGE) == 0) )
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
    MyRoomControl__BlockTouch(this, v23);
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
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v27);
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
          v27);
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
        v29 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v30 = *(float *)&v29,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v31 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v32 = v31,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_57:
          sub_B5D69C(soundPlayerComp, v26);
        }
        *(UnityEngine_Vector3_o *)(&v34 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)soundPlayerComp,
                                                 0LL);
        switch ( this->fields.mState )
        {
          case 0:
            v35 = v34;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v33);
            MyRoomControl__setupSortWindowUIMoveData(
              v36,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v37);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, movePos, v38);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_57;
            v39 = -v30;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v40);
            v69.fields.x = v39;
            v69.fields.y = v32;
            v69.fields.z = v35;
            MyRoomControl__moveControl(this, this->fields.svtObj, v69, (System_String_o *)StringLiteral_11522/*"ReleaseTouch"*/, v41);
            v42 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_57;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v46 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v46 = MyRoomControl_TypeInfo;
            }
            v70.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v70.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v70.fields.x = v46->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v70, 0LL, v45);
            v71.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v71.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v71.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v71, 0LL, v48);
            v72.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v72.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v72.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v72, 0LL, v49);
            v73.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v73.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v73.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v73, 0LL, v50);
            v74.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v74.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v74.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v74, (System_String_o *)StringLiteral_11522/*"ReleaseTouch"*/, v51);
            v75.fields.y = this->fields.helpBtnInitPos.fields.y;
            v75.fields.z = this->fields.helpBtnInitPos.fields.z;
            v75.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v75, 0LL, v52);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v42 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v26);
            standFigureBack = this->fields.standFigureBack;
            v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v44, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__327_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_57;
            StandFigureBack__Fadeout(standFigureBack, v44, 0LL);
            v42 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v33);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v53);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v54);
            v55 = this->fields.standFigureBack;
            v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v56, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__327_1__, 0LL);
            if ( !v55 )
              goto LABEL_57;
            StandFigureBack__Fadein(v55, v56, 0LL);
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
              v57);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v58);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v59);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v60);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v61);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v62);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_57;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0LL);
            v42 = 0;
            break;
          default:
            goto LABEL_52;
        }
        this->fields.mState = v42;
LABEL_52:
        MyRoomControl__SetMultipleViewButtonColor(this, v26);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v63);
        break;
      default:
        goto LABEL_16;
    }
  }
}


void __fastcall MyRoomControl__ChangeMasterSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_int__int__o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_42E9E05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl__ChangeMasterSetting_b__412_0__, v8, v9, v10);
    byte_42E9E05 = 1;
  }
  v11 = (System_Action_int__int__o *)sub_B5D694(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_MyRoomControl__ChangeMasterSetting_b__412_0__,
    (const MethodInfo_2597CC8 *)Method_System_Action_int__int___ctor__);
  MyRoomControl__OpenMasterEquipSettingDialog(this, v11, 0LL, v12);
}


void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  int32_t v27; // w9
  int32_t max_length; // w10
  System_Int32_array **v29; // x1
  ServantPhotoEntity_FaceData_o *v30; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3
  __int64 v33; // x0

  if ( (byte_42E9DF7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass393_0__ChangePhotoCampaignServantFace_b__0__, v5, v6, v7);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass393_0_TypeInfo, v8, v9, v10);
    byte_42E9DF7 = 1;
  }
  v11 = sub_B5D694(MyRoomControl___c__DisplayClass393_0_TypeInfo);
  MyRoomControl___c__DisplayClass393_0___ctor((MyRoomControl___c__DisplayClass393_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v27 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v27,
        !photoCampaignFaceList) )
  {
    sub_B5D69C(v12, v13);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v27 >= max_length )
  {
    this->fields.photoCampaignFaceListIndex = 0;
    max_length = photoCampaignFaceList->max_length;
    v27 = 0;
  }
  if ( v27 >= (unsigned int)max_length )
  {
    v33 = sub_B5D6C8(v12);
    sub_B5D668(v33, 0LL);
  }
  v29 = (System_Int32_array **)photoCampaignFaceList->m_Items[v27];
  *(_QWORD *)(v11 + 24) = v29;
  sub_B5D560((BattleServantConfConponent_o *)(v11 + 24), v29, v20, v21, v22, v23, v24, v25);
  v30 = *(ServantPhotoEntity_FaceData_o **)(v11 + 24);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass393_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  MyRoomControl__SetFacePhotoServant(this, v30, v31, v32);
}


void __fastcall MyRoomControl__ChangePhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.photoCampaignState = 7;
  MyRoomControl__ClosePhotoCampaignServant(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeSetBtnsTouch(MyRoomControl_o *this, bool isSet, const MethodInfo *method)
{
  __int64 v3; // x3
  UIWidget_o *playBtnImg; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // s0
  MyRoomControl_c *v13; // x0
  int32_t buttonFlag; // w9
  UIWidget_o *changeBtnImg; // x21
  int32_t BUTTON_VOICE_PLAY; // w8
  int v17; // w10
  int v18; // w8
  int v19; // s0
  MyRoomControl_c *v23; // x0
  int32_t v24; // w9
  UIWidget_o *changeBGBtnImg; // x21
  int32_t BUTTON_LIMIT_CHANGE; // w8
  int v27; // w10
  int v28; // w8
  int v29; // s0
  MyRoomControl_c *v33; // x0
  int32_t v34; // w9
  int32_t BUTTON_DISP_CHANGE; // w8
  int v36; // w10
  int v37; // w8

  if ( (byte_42E9DD3 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, isSet, (_DWORD)method, v3);
    byte_42E9DD3 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_gray(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v9, 0LL);
  v13 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v13 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
  BUTTON_VOICE_PLAY = v13->static_fields->BUTTON_VOICE_PLAY;
  v17 = buttonFlag & ~BUTTON_VOICE_PLAY;
  v18 = buttonFlag | BUTTON_VOICE_PLAY;
  if ( !isSet )
    v18 = v17;
  this->fields.buttonFlag = v18;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v19, 0LL);
  v23 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v23 = MyRoomControl_TypeInfo;
  }
  v24 = this->fields.buttonFlag;
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  BUTTON_LIMIT_CHANGE = v23->static_fields->BUTTON_LIMIT_CHANGE;
  v27 = v24 & ~BUTTON_LIMIT_CHANGE;
  v28 = v24 | BUTTON_LIMIT_CHANGE;
  if ( !isSet )
    v28 = v27;
  this->fields.buttonFlag = v28;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
    if ( !changeBGBtnImg )
LABEL_31:
      sub_B5D69C(v7, v8);
  }
  else
  {
    *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBGBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v29, 0LL);
  v33 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v33 = MyRoomControl_TypeInfo;
  }
  v34 = this->fields.buttonFlag;
  BUTTON_DISP_CHANGE = v33->static_fields->BUTTON_DISP_CHANGE;
  v36 = v34 & ~BUTTON_DISP_CHANGE;
  v37 = v34 | BUTTON_DISP_CHANGE;
  if ( !isSet )
    v37 = v36;
  this->fields.buttonFlag = v37;
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

  if ( (byte_42E9DD2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isSet, isTouch, method);
    byte_42E9DD2 = 1;
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
    sub_B5D69C(standFigureBack, isSet);
  }
LABEL_11:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v13; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v15; // x9
  System_String_o *v16; // x1

  if ( (byte_42E9DD8 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3127/*"CLICK_MATERIAL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v8, v9, v10);
    byte_42E9DD8 = 1;
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v16 = (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(myRoomFsm, method);
  }
  name = sceneJumpInfo->fields.name;
  v13 = MyRoomRootComponent_TypeInfo;
  if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v13 = MyRoomRootComponent_TypeInfo;
  }
  myRoomFsm = (PlayMakerFSM_o *)System_String__op_Equality(name, v13->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_15;
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    v15 = &StringLiteral_3127/*"CLICK_MATERIAL"*/;
  else
    v15 = &StringLiteral_6975/*"GO_NEXT"*/;
  v16 = (System_String_o *)*v15;
  myRoomFsm = this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent(myRoomFsm, v16, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_42E9DE5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__CloseMultipleView_b__372_0__, v5, v6, v7);
    byte_42E9DE5 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__372_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v9, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v6; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int max_length; // w9
  il2cpp_array_size_t v11; // w24
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x10
  float y; // s10
  float x; // s11
  float v15; // s1
  struct StandFigureBack_array *v16; // x8
  float v17; // s8
  const MethodInfo *v18; // x3
  struct StandFigureBack_array *v19; // x8
  System_String_o *v20; // x2
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9DE3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6766/*"FinishedCloseMultiServant"*/, (_DWORD)method, v2, v3);
    byte_42E9DE3 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v6),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(mBlocker, method);
  }
  v8 = 0LL;
  v9 = 4LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    v11 = v9 - 4;
    if ( (int)v9 - 4 >= max_length )
      break;
    defaultMultipleServantPoses = this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_20;
    if ( v11 >= defaultMultipleServantPoses->max_length || v11 >= max_length )
    {
LABEL_22:
      v21 = sub_B5D6C8(mBlocker);
      sub_B5D668(v21, 0LL);
    }
    mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v9);
    if ( mBlocker )
    {
      y = defaultMultipleServantPoses->m_Items[v8].fields.y;
      x = defaultMultipleServantPoses->m_Items[v8 + 1].fields.x;
      mBlocker = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)mBlocker,
                                               0LL);
      if ( mBlocker )
      {
        *(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)mBlocker,
                                                 0LL);
        v16 = this->fields.multipleStandFigureBacks;
        if ( v16 )
        {
          if ( v11 >= v16->max_length )
            goto LABEL_22;
          mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->obj.klass + v9);
          if ( mBlocker )
          {
            v17 = v15;
            mBlocker = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mBlocker, 0LL);
            v19 = this->fields.multipleStandFigureBacks;
            if ( v19 )
            {
              v20 = v11 == v19->max_length - 1 ? (System_String_o *)StringLiteral_6766/*"FinishedCloseMultiServant"*/ : 0LL;
              v22.fields.y = v17;
              v22.fields.x = flt_32A4448[(_DWORD)v9 == 4] + y;
              v22.fields.z = x + 0.0;
              MyRoomControl__moveControl(this, mBlocker, v22, v20, v18);
              multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
              ++v9;
              ++v8;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_42E9E01 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_0__, v5, v6, v7);
    byte_42E9E01 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v8, 0, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  float v7; // s8
  float v8; // s9
  float v9; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s10
  float v18; // s9
  UnityEngine_GameObject_o *v19; // x1
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9DFF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6767/*"FinishedClosePhotoCampaignServant"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9DFF = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v7 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v8 = flt_32A4450[!this->fields._IsMasterRight_k__BackingField] + this->fields.currentPhotoServantPos.fields.x;
  v9 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v21.fields.x = v8;
  v21.fields.y = v7;
  v21.fields.z = v9;
  MyRoomControl__moveControl(this, gameObject, v21, (System_String_o *)StringLiteral_6767/*"FinishedClosePhotoCampaignServant"*/, v11);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v12 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = GameObjectExtensions__GetLocalPosition(v12, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(photoCampaignStandFigureBack, v5);
  }
  v16 = v14 + 0.0;
  v17 = v15 + 0.0;
  v18 = v13 + flt_32A4458[!this->fields._IsMasterRight_k__BackingField];
  v19 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v22.fields.x = v18;
  v22.fields.y = v16;
  v22.fields.z = v17;
  MyRoomControl__moveControl(this, v19, v22, 0LL, v20);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E9DC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_TypeInfo,
      (_DWORD)setEndAction,
      (_DWORD)method,
      v3);
    byte_42E9DC1 = 1;
  }
  v6 = sub_B5D694(MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__289___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = setEndAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)setEndAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


CRIMoviePlayer_o *__fastcall MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1

  if ( (byte_42E9DD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5, v6);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v13, v14, v15);
    byte_42E9DD5 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                        (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      UIAtlas,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v17 )
    sub_B5D69C(0LL, v18);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v17,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x20
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v31; // x23
  System_Action_o *v32; // x24
  struct UIMasterFigureTextureOld_o *Prefab_31039236; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E9DF3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)func, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass389_0__CreatePhotoMasterFigure_b__0__, v6, v7, v8);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass389_0_TypeInfo, v9, v10, v11);
    byte_42E9DF3 = 1;
  }
  v12 = sub_B5D694(MyRoomControl___c__DisplayClass389_0_TypeInfo);
  MyRoomControl___c__DisplayClass389_0___ctor((MyRoomControl___c__DisplayClass389_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = func;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)func, v21, v22, v23, v24, v25, v26);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(photoCampaignStandFigureBack, v14);
  }
  v28 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v31 = v28;
  v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass389_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  Prefab_31039236 = MasterFigureManagerOld__CreatePrefab_31039236(
                      v31,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v32,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0LL);
  this->fields.photoMasterTexture = Prefab_31039236;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.photoMasterTexture,
    (System_Int32_array **)Prefab_31039236,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__DispDefaultMyRoom(
        MyRoomControl_o *this,
        bool isDispDefault,
        System_Action_o *callback,
        bool isFadein,
        const MethodInfo *method)
{
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  _BOOL8 isEnablePhotoCampaign; // x1
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
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  StandFigureBack_o *v35; // x21
  System_Action_o *v36; // x23
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v38; // x23
  _BOOL4 isEnableMultipleView; // w8
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x4
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42E9DE4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDispDefault, (_DWORD)callback, isFadein);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__0__, v9, v10, v11);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__1__, v12, v13, v14);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass370_0_TypeInfo, v15, v16, v17);
    byte_42E9DE4 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v18 = sub_B5D694(MyRoomControl___c__DisplayClass370_0_TypeInfo);
  MyRoomControl___c__DisplayClass370_0___ctor((MyRoomControl___c__DisplayClass370_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_35;
  *(_QWORD *)(v18 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  MyRoomControl__stopSvtVoice(this, v33);
  MyRoomControl__BlockTouch(this, v34);
  if ( !isDispDefault )
  {
    standFigureBack = this->fields.standFigureBack;
    v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v18,
      Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__1__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadeout(standFigureBack, v38, 0LL);
      frontObjectManager = this->fields.frontObjectManager;
      if ( frontObjectManager )
      {
        MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
        goto LABEL_13;
      }
    }
LABEL_35:
    sub_B5D69C(frontObjectManager, isEnablePhotoCampaign);
  }
  if ( isFadein )
  {
    v35 = this->fields.standFigureBack;
    v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v18,
      Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__0__,
      0LL);
    if ( !v35 )
      goto LABEL_35;
    StandFigureBack__Fadein(v35, v36, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v43);
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
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v42);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__DispPhotoCampaign(
        MyRoomControl_o *this,
        int64_t usrSvtId,
        int32_t imageLimitCount,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  MissionNotifyManager_o *photoCampaignStandFigureBack; // x0
  const MethodInfo *v18; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_42E9DF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, usrSvtId, imageLimitCount, *(_QWORD *)&equipId);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14, v15, v16);
    byte_42E9DF1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  photoCampaignStandFigureBack = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        UIPanel__set_depth((UIPanel_o *)photoCampaignStandFigureBack, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B5D69C(photoCampaignStandFigureBack, v18);
  }
LABEL_11:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
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
  void *svtCtr; // x0
  const MethodInfo *v21; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__237_0; // x21
  Il2CppObject *v28; // x22
  struct MyRoomControl___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E9DA5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl___c__EndLoad_b__237_0__, v11, v12, v13);
    sub_B5D5C4(&MyRoomControl___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8491/*"LOAD_END"*/, v17, v18, v19);
    byte_42E9DA5 = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_23;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v21);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    svtCtr = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
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
      v28 = (Il2CppObject *)static_fields->__9;
      _9__237_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__237_0, v28, Method_MyRoomControl___c__EndLoad_b__237_0__, 0LL);
      v29 = MyRoomControl___c_TypeInfo->static_fields;
      v29->__9__237_0 = _9__237_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v29->__9__237_0,
        (System_Int32_array **)_9__237_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__237_0, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B5D69C(svtCtr, method);
  }
LABEL_21:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8491/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  System_Action_ShopRootConstants_State__o *v13; // x21

  if ( (byte_42E9DEF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl__EndLoadPhotoAsset_b__385_0__, v8, v9, v10);
    byte_42E9DEF = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v13 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v13,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__385_0__,
          (const MethodInfo_258A064 *)Method_System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE___ctor__),
        !photoTargetSelectDialog) )
  {
    sub_B5D69C(photoCampaignStandFigureBack, method);
  }
  PhotoTargetSelectDialog__Open(photoTargetSelectDialog, (System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *)v13, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x19

  if ( (byte_42E9DD9 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E9DD9 = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.sceneJumpInfo, 0LL, v2, v3, v4, v5, v6, v7);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v14 )
      sub_B5D69C(Instance, v13);
    CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_B5D69C(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
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
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x5
  _BOOL4 IsMasterRight_k__BackingField; // w9
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  bool v29; // zf
  bool v30; // w9
  int32_t v31; // w10
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *v33; // x8
  struct System_Int32_array *multiForm; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21
  __int64 v39; // x0

  if ( (byte_42E9E06 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass413_0__ExchangePosition_b__0__, v11, v12, v13);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass413_0_TypeInfo, v14, v15, v16);
    byte_42E9E06 = 1;
  }
  v17 = sub_B5D694(MyRoomControl___c__DisplayClass413_0_TypeInfo);
  MyRoomControl___c__DisplayClass413_0___ctor((MyRoomControl___c__DisplayClass413_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( !this )
    goto LABEL_18;
  IsMasterRight_k__BackingField = this->fields._IsMasterRight_k__BackingField;
  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v29 = !IsMasterRight_k__BackingField;
  v30 = !IsMasterRight_k__BackingField;
  v31 = v29 ? 2 : 1;
  this->fields.photoMasterPosition = v31;
  this->fields._IsMasterRight_k__BackingField = v30;
  if ( !photoCampaignFaceList )
    goto LABEL_18;
  photoCampaignFaceListIndex = this->fields.photoCampaignFaceListIndex;
  if ( (unsigned int)photoCampaignFaceListIndex >= photoCampaignFaceList->max_length )
    goto LABEL_19;
  v33 = photoCampaignFaceList->m_Items[photoCampaignFaceListIndex];
  if ( !v33 )
    goto LABEL_18;
  multiForm = v33->fields.multiForm;
  if ( !multiForm )
    goto LABEL_18;
  if ( !multiForm->max_length )
  {
LABEL_19:
    v39 = sub_B5D6C8(v18);
    sub_B5D668(v39, 0LL);
  }
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    (UnityEngine_Vector3_o *)(v17 + 24),
    (float *)(v17 + 36),
    v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v36 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v17,
    Method_MyRoomControl___c__DisplayClass413_0__ExchangePosition_b__0__,
    0LL);
  if ( !Instance )
LABEL_18:
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v38, 0LL);
}


void __fastcall MyRoomControl__FingerGestures_OnGestureEvent(
        MyRoomControl_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *startSelection; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x10

  v5 = this;
  if ( (byte_42E9DD7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)gesture, (_DWORD)method, v3);
    this = (MyRoomControl_o *)sub_B5D5C4(&SwipeGesture_TypeInfo, v6, v7, v8);
    byte_42E9DD7 = 1;
  }
  if ( !gesture )
    sub_B5D69C(this, gesture);
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
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    {
      v11 = *(&SwipeGesture_TypeInfo->_2.bitflags2 + 1);
      if ( *(&gesture->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[v11 - 1] == SwipeGesture_TypeInfo )
      {
        if ( (v5->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(v5, 0, v10);
        if ( v5->fields.multipleViewState == 3 )
        {
          v5->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(v5, 1, v10);
        }
        if ( v5->fields.photoCampaignState == 3 )
        {
          v5->fields.photoCampaignState = 2;
          MyRoomControl__SetPhotoCampaignUi(v5, 1, v10);
        }
      }
    }
  }
}


void __fastcall MyRoomControl__FinishedCloseFullScreenPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_42E9DFE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DFE = 1;
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
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))photoCampaignProduction->klass[1].vtable._3_ToString.method)(
                                 photoCampaignProduction,
                                 photoCampaignProduction->klass[2]._1.image);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v6, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_12:
    sub_B5D69C(photoCampaignProduction, method);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))photoCampaignProduction->klass[2]._1.gc_desc)(
    photoCampaignProduction,
    0LL,
    photoCampaignProduction->klass[2]._1.name);
  MyRoomControl__SetBackButtonIgnore(this, 0, v7);
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
      v9 = sub_B5D6C8(multipleViewCloseButton);
      sub_B5D668(v9, 0LL);
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
    sub_B5D69C(multipleViewCloseButton, method);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_42E9E00 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8, v9, v10);
    byte_42E9E00 = 1;
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
  MyRoomControl__SetPhotoCampaignUi(this, 0, v13);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_30;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(v15, 1.0, 0LL);
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
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v18, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.photoMasterTexture, 0LL, v19, v20, v21, v22, v23, v24);
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !photoCampaignStandFigureBack
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(photoCampaignStandFigureBack, method);
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
  MyRoomControl__SetBackButtonIgnore(this, 0, v25);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(photoCampaignStandFigureBack, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MyRoomSvtControl_o *svtCtr; // x0
  ServantVoiceData_o *FirstServantVoiceData; // x0
  ServantVoiceData_o *v10; // x20
  __int64 *v11; // x9
  System_String_o *v12; // x1

  if ( (byte_42E9DB1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9420/*"NORMAL_FORM"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3009/*"CHANGE_FORM"*/, v5, v6, v7);
    byte_42E9DB1 = 1;
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
  if ( !FirstServantVoiceData || (v10 = FirstServantVoiceData, !FirstServantVoiceData->fields.changeEffect) )
  {
LABEL_12:
    svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
    if ( svtCtr )
    {
      v12 = (System_String_o *)StringLiteral_9420/*"NORMAL_FORM"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_B5D69C(svtCtr, method);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_17;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_17;
  if ( v10->fields.form == (_DWORD)svtCtr )
    v11 = &StringLiteral_9420/*"NORMAL_FORM"*/;
  else
    v11 = &StringLiteral_3009/*"CHANGE_FORM"*/;
  v12 = (System_String_o *)*v11;
  svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, v12, 0LL);
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
  if ( (byte_42E9DFC & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)localScale, (_DWORD)localEulerAngle, method);
    byte_42E9DFC = 1;
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
    sub_B5D69C(v7, v8);
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
    sub_B5D69C(v4, method);
  if ( (int)v4 >= (signed int)photoCampaignFaceList->max_length )
  {
    LODWORD(v4) = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  return v4;
}


int32_t __fastcall MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_o *v4; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x20
  __int64 materialFigureSvtDispIdx; // x19

  v4 = this;
  if ( (byte_42E9DD6 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B5D5C4(
                                &Method_System_Collections_Generic_List_int__get_Item__,
                                (_DWORD)method,
                                v2,
                                v3);
    byte_42E9DD6 = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_B5D69C(this, method);
  materialFigureSvtDispIdx = v4->fields.materialFigureSvtDispIdx;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
}


UnityEngine_Vector3_o __fastcall MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MasterPhotoMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  float y; // s8
  _BOOL4 v11; // w20
  float offsetX; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v15; // s0
  float v16; // s1
  MasterPhotoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9DF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_MasterPhotoMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9DF5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MasterPhotoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MasterPhotoMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  y = this->fields.defaultPhotoServantPos.fields.y;
  v11 = !this->fields._IsMasterRight_k__BackingField;
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
    offsetX = flt_32A4468[v11];
  }
  Master_WarQuestSelectionMaster = (MasterPhotoMaster_o *)this->fields.photoMasterTexture;
  if ( !Master_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
  v15 = offsetX;
  v16 = y;
  result.fields.z = LocalPositionZ;
  result.fields.y = v16;
  result.fields.x = v15;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s8
  float v20; // s10
  float y; // s9
  int v22; // w8
  System_Int32_array *v23; // x22
  float v24; // s8
  double v25; // d1
  double v26; // d0
  int32_t photoCampaignType; // w8
  float PhotoSvtScale; // s0
  System_Int32_array *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  float LocalPositionZ; // s0
  __int64 v32; // x0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E9DF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantScriptMaster___, imageId, formId, position);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    byte_42E9DF4 = 1;
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
  v20 = this->fields._IsOnlyServant_k__BackingField ? -0.0 : flt_32A4460[!this->fields._IsMasterRight_k__BackingField];
  y = this->fields.defaultPhotoServantPos.fields.y;
  photoCampaignStandFigureBack = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  v22 = *(_DWORD *)(photoCampaignStandFigureBack + 24);
  v23 = (System_Int32_array *)photoCampaignStandFigureBack;
  if ( !v22 )
    goto LABEL_40;
  v24 = v20 - LocalPositionX;
  v25 = v24;
  if ( v24 == INFINITY )
    v25 = -v24;
  *(_DWORD *)(photoCampaignStandFigureBack + 32) = (int)v25;
  if ( v22 == 1 )
  {
LABEL_40:
    v32 = sub_B5D6C8(photoCampaignStandFigureBack);
    sub_B5D668(v32, 0LL);
  }
  v26 = -y;
  if ( y != INFINITY )
    v26 = y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = (int)v26;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantScriptMaster___);
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
      photoCampaignStandFigureBack = (__int64)ServantScriptEntity__GetPhotoSvtPosition(entity, v23, 0LL);
      if ( entity )
      {
        v23 = (System_Int32_array *)photoCampaignStandFigureBack;
        PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0LL);
        goto LABEL_34;
      }
    }
LABEL_39:
    sub_B5D69C(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  }
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_39;
  v29 = this->fields._IsMasterRight_k__BackingField
      ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, v23, 0LL)
      : ServantScriptEntity__GetPhotoSvtPositionRight(entity, v23, 0LL);
  v23 = v29;
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_39;
  if ( this->fields._IsMasterRight_k__BackingField )
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0LL);
  else
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0LL);
LABEL_34:
  *scale = PhotoSvtScale;
  if ( !v23 )
    goto LABEL_39;
LABEL_35:
  if ( v23->max_length < 2 )
    goto LABEL_40;
  v24 = (float)v23->m_Items[1];
  y = (float)v23->m_Items[2];
LABEL_37:
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_39;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v30, 0LL);
  position->fields.x = v24;
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
  System_Collections_Generic_List_int__o *v20; // x19
  void *Instance; // x0
  __int64 v22; // x1
  int v23; // w8
  void *v24; // x20
  unsigned int v25; // w21
  __int64 v26; // x8
  __int64 v28; // x0

  if ( (byte_42E9DDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E9DDA = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v23 = *((_DWORD *)Instance + 6);
  v24 = Instance;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= v23 )
      {
        v28 = sub_B5D6C8(Instance);
        sub_B5D668(v28, 0LL);
      }
      v26 = *((_QWORD *)v24 + (int)v25 + 4);
      if ( !v26 || !v20 )
        break;
      System_Collections_Generic_List_int___Add(
        v20,
        *(_DWORD *)(v26 + 20),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        goto LABEL_12;
    }
LABEL_14:
    sub_B5D69C(Instance, v22);
  }
LABEL_12:
  if ( !v20 )
    goto LABEL_14;
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_o *v4; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E9D9E & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B5D5C4(&Method_CStateManager_MyRoomControl__getState__, (_DWORD)method, v2, v3);
    byte_42E9D9E = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


MyRoomStateMaterial_o *__fastcall MyRoomControl__GetStateMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mStateMaterial;
}


void __fastcall MyRoomControl__GoToTitle(MyRoomControl_o *this, const MethodInfo *method)
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
  System_String_o *v26; // x20
  System_String_o *v27; // x21
  CommonUI_o *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v29; // x23
  __int64 v30; // x1
  BalanceConfig_c *v31; // x0

  if ( (byte_42E9DC6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl__GoToTitle_b__317_0__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8980/*"MYROOM_TITLE_CONFIRM"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E9DC6 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v26 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8980/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v29, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__317_0__, 0LL);
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    sub_B5D69C(v31, v30);
  CommonUI__OpenConfirmDialog(
    Instance,
    v26,
    v27,
    v29,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9E07 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E07 = 1;
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
    sub_B5D69C(gameObject, v6);
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v9);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9DBE & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__InitMaterialOnBackground_d__283_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DBE = 1;
  }
  v5 = sub_B5D694(MyRoomControl__InitMaterialOnBackground_d__283_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__283___ctor((MyRoomControl__InitMaterialOnBackground_d__283_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9DC0 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__InitServantMenu_d__286_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DC0 = 1;
  }
  v5 = sub_B5D694(MyRoomControl__InitServantMenu_d__286_TypeInfo);
  MyRoomControl__InitServantMenu_d__286___ctor((MyRoomControl__InitServantMenu_d__286_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall MyRoomControl__IsEnableButton(MyRoomControl_o *this, int32_t button, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.buttonFlag & button) < 0) ^ v3 | ((this->fields.buttonFlag & button) == 0));
}


bool __fastcall MyRoomControl__IsEnableMultipleViewButton(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_c *v5; // x0

  if ( (byte_42E9DE7 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DE7 = 1;
  }
  if ( !this->fields.isEnoughServantMultipleView )
    return 0;
  v5 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  return (this->fields.buttonFlag & v5->static_fields->BUTTON_MULTIPLE_VIEW) >= 1
      && !this->fields.type
      && !this->fields.mState
      && (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0;
}


bool __fastcall MyRoomControl__IsEnablePhotoCampaignButton(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_c *v5; // x0

  if ( (byte_42E9E02 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E02 = 1;
  }
  v5 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  return (this->fields.buttonFlag & v5->static_fields->BUTTON_PHOTO_CAMPAIGN) >= 1
      && !this->fields.type
      && !this->fields.mState
      && (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__IsFrontMultipleServant(MyRoomControl_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl_o *v5; // x20
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v8; // x0

  v5 = this;
  if ( (byte_42E9DE0 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B5D5C4(
                                &Method_UnityEngine_Component_GetComponent_UIPanel___,
                                index,
                                (_DWORD)method,
                                v3);
    byte_42E9DE0 = 1;
  }
  multipleStandFigureBacks = v5->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
  {
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_B5D69C(this, *(_QWORD *)&index);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v10; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E9DAD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15588/*"Wait_Action"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_7227/*"Help"*/, v5, v6, v7);
    byte_42E9DAD = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15588/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v10 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_7227/*"Help"*/, 0LL) )
      return 0;
  }
  myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomListCtr;
  if ( !myRoomFsm )
    goto LABEL_16;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  myRoomFsm = (PlayMakerFSM_o *)this->fields.mShowPos;
  if ( !myRoomFsm )
    goto LABEL_16;
  v15 = v12;
  v16 = v13;
  v17 = v14;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  v19.fields.x = v15;
  v19.fields.y = v16;
  v19.fields.z = v17;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Vector3__op_Equality(v19, position, 0LL);
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_B5D69C(myRoomFsm, method);
  return !mMaterialEventLogListViewManager->fields.mIsDoing_Slide;
}


bool __fastcall MyRoomControl__IsServantMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.isServantMaterial;
}


void __fastcall MyRoomControl__LoadMasterEquip(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  UserEquipMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v45; // x1
  UserEquipEntity_array *List; // x26
  __int64 v47; // x21
  __int64 v48; // x21
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v50; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x19
  unsigned int v52; // w27
  UserEquipEntity_o *v53; // x20
  __int64 v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v61; // x0
  __int64 v62; // x24
  __int64 v63; // x25
  __int64 *v64; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v65; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v66; // x0
  UserEquipEntity_array *v67; // x28
  __int64 v68; // x25
  __int64 v69; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v72; // x8
  __int64 v73; // x8
  __int64 v74; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v75; // x0
  Il2CppObject *v76; // x0
  System_String_o *v77; // x24
  AssetLoader_LoadEndDataHandler_o *v78; // x25
  __int64 v79; // x8
  __int64 v80; // x8
  __int64 v81; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v82; // x0
  Il2CppObject *v83; // x0
  System_String_o *v84; // x23
  AssetLoader_LoadEndDataHandler_o *v85; // x24
  __int64 v86; // x0
  __int64 v88[2]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v89[2]; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_42E9DED & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEquipMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v16, v17, v18);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28, v29, v30);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__0__, v31, v32, v33);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__1__, v34, v35, v36);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass382_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_9060/*"MasterFace/equip{0:D5}"*/, v40, v41, v42);
    byte_42E9DED = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  List = UserEquipMaster__getList(Master_WarQuestSelectionMaster, UserId, 0LL);
  v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v48 = **(_QWORD **)(v47 + 192);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AF52C4(v48);
  UserId = **(_QWORD **)(v48 + 184);
  if ( !UserId )
    goto LABEL_38;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_38;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v50 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)UserId;
    v52 = 0;
    while ( 1 )
    {
      if ( v52 >= max_length )
      {
        v86 = sub_B5D6C8(UserId);
        sub_B5D668(v86, 0LL);
      }
      v53 = List->m_Items[v52];
      v54 = sub_B5D694(MyRoomControl___c__DisplayClass382_0_TypeInfo);
      MyRoomControl___c__DisplayClass382_0___ctor((MyRoomControl___c__DisplayClass382_0_o *)v54, 0LL);
      if ( !v54 )
        break;
      *(_QWORD *)(v54 + 24) = this;
      sub_B5D560((BattleServantConfConponent_o *)(v54 + 24), (System_Int32_array **)this, v55, v56, v57, v58, v59, v60);
      if ( !v53 )
        break;
      v61 = *v50;
      v63 = *(_QWORD *)&v53->fields.equipId.fields.currentCryptoKey;
      v62 = *(_QWORD *)&v53->fields.equipId.fields.fakeValue;
      if ( (BYTE3((*v50)->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v61);
      *(_QWORD *)&v90.fields.currentCryptoKey = v63;
      *(_QWORD *)&v90.fields.fakeValue = v62;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90, 0LL);
      if ( !v51 )
        break;
      v64 = (__int64 *)(v54 + 16);
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v51,
              (WarEntity_o **)(v54 + 16),
              UserId,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v65 = v50;
      v66 = *v50;
      v67 = List;
      v69 = *(_QWORD *)&v53->fields.equipId.fields.currentCryptoKey;
      v68 = *(_QWORD *)&v53->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v66);
      *(_QWORD *)&v91.fields.currentCryptoKey = v69;
      *(_QWORD *)&v91.fields.fakeValue = v68;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v91, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)masterFemaleEquipTexture,
        UserId,
        0LL,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v53->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      List = v67;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)masterMaleEquipTexture,
        UserId,
        0LL,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
      v72 = *v64;
      if ( !*v64 )
        break;
      v74 = *(_QWORD *)(v72 + 64);
      v73 = *(_QWORD *)(v72 + 72);
      v75 = *v65;
      v50 = v65;
      v89[0] = v74;
      v89[1] = v73;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(v75, v89);
      v77 = System_String__Format((System_String_o *)StringLiteral_9060/*"MasterFace/equip{0:D5}"*/, v76, 0LL);
      v78 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v78,
        (Il2CppObject *)v54,
        Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UserId = AssetManager__loadAssetStorage(v77, v78, 10, 0LL);
      v79 = *v64;
      if ( !*v64 )
        break;
      v81 = *(_QWORD *)(v79 + 80);
      v80 = *(_QWORD *)(v79 + 88);
      v82 = *v65;
      v88[0] = v81;
      v88[1] = v80;
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(v82, v88);
      v84 = System_String__Format((System_String_o *)StringLiteral_9060/*"MasterFace/equip{0:D5}"*/, v83, 0LL);
      v85 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v85,
        (Il2CppObject *)v54,
        Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__1__,
        0LL);
      UserId = AssetManager__loadAssetStorage(v84, v85, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v52 >= max_length )
        return;
    }
LABEL_38:
    sub_B5D69C(UserId, v45);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9DE2 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__LoadMultipleServant_d__366_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DE2 = 1;
  }
  v5 = sub_B5D694(MyRoomControl__LoadMultipleServant_d__366_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__366___ctor((MyRoomControl__LoadMultipleServant_d__366_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        System_Action_o *callBack,
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
  __int64 v21; // x21
  CommonUI_o *Instance; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  AssetLoader_LoadEndDataHandler_o *v36; // x19

  if ( (byte_42E9DEC & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass381_0__LoadPhotoCampaignAssets_b__0__, v12, v13, v14);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass381_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9353/*"MyRoom/PhotoCampaign"*/, v18, v19, v20);
    byte_42E9DEC = 1;
  }
  v21 = sub_B5D694(MyRoomControl___c__DisplayClass381_0_TypeInfo);
  MyRoomControl___c__DisplayClass381_0___ctor((MyRoomControl___c__DisplayClass381_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_11;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)callBack, v30, v31, v32, v33, v34, v35);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v21,
    Method_MyRoomControl___c__DisplayClass381_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9353/*"MyRoom/PhotoCampaign"*/, v36, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(Instance, v23);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9DF2 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__LoadPhotoCampaignServant_d__388_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DF2 = 1;
  }
  v5 = sub_B5D694(MyRoomControl__LoadPhotoCampaignServant_d__388_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__388___ctor((MyRoomControl__LoadPhotoCampaignServant_d__388_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E9D99 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E9D99 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9DB5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__LoadServantForm_b__264_0__, v5, v6, v7);
    byte_42E9DB5 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__264_0__, 0LL);
  if ( !svtCtr )
    sub_B5D69C(v10, v11);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIWidget_o *playBtnImg; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v10; // x1
  int v11; // s0
  const MethodInfo *v15; // x1
  MyRoomControl_c *v16; // x0

  if ( (byte_42E9DB6 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8491/*"LOAD_END"*/, v5, v6, v7);
    byte_42E9DB6 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_9;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v11, 0LL);
  v16 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v16 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v16->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v15);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
LABEL_9:
    sub_B5D69C(myRoomFsm, v10);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8491/*"LOAD_END"*/, 0LL);
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
  if ( (byte_42E9DCE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9359/*"MyRoomUIAnimationEnd"*/, (_DWORD)target, (_DWORD)method, v4);
    byte_42E9DCE = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9359/*"MyRoomUIAnimationEnd"*/, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_o *v4; // x19
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  const MethodInfo *v63; // x1
  int32_t multipleViewState; // w8
  const MethodInfo *v65; // x1
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x5
  int32_t photoCampaignState; // w8
  const MethodInfo *v71; // x1
  int32_t type; // w8
  int32_t mState; // w8
  int v74; // w9
  char v75; // w8
  __int64 *v76; // x8
  __int64 *v77; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v81; // x2
  MyRoomControl_o *v82; // x8
  struct SerialCodeComponent_o *serialCodeComp; // x20
  UIWidget_o *changeBtnImg; // x20
  int v85; // s0
  MyRoomControl_c *v89; // x0
  __int64 value; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v4 = this;
  if ( (byte_42E9DCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_OnClickBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3166/*"CLOSE_MATERIAL_COLLECTION"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3165/*"CLOSE_MATERIAL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3177/*"CLOSE_USER_SERVANT_COIN"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_3169/*"CLOSE_NOTICE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3163/*"CLOSE_GAMEOPTION"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3164/*"CLOSE_ITEMLIST"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3167/*"CLOSE_MATERIAL_COSTUME"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_3160/*"CLOSE_CONTINUE_DEVICE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_3155/*"CLOSE_BLACKLIST"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_13216/*"State 5"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3172/*"CLOSE_SERIAL_CODE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3157/*"CLOSE_CHANGE_PROFILE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3173/*"CLOSE_SOUND_PLAYER"*/, v56, v57, v58);
    this = (MyRoomControl_o *)sub_B5D5C4(&StringLiteral_3162/*"CLOSE_FAVORITE_CHANGE"*/, v59, v60, v61);
    byte_42E9DCB = 1;
  }
  mMaterialEventLogListViewManager = v4->fields.mMaterialEventLogListViewManager;
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
      && !v4->fields.isMyRoomUIAnimation
      && !v4->fields.isBackBtnIgnore
      && !v4->fields.isSvtLoading )
    {
      multipleViewState = v4->fields.multipleViewState;
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
          v4->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v4, v71);
        }
        else if ( multipleViewState == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(1, 0LL);
          v4->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v4, v65);
        }
        return;
      }
      if ( v4->fields.photoCampaignState )
      {
        v66 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
          v66 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickBack__);
        v67 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v66, v66[3]);
        OverwriteAssetSoundName__PlaySystemSe(v67, 1, 0LL);
        photoCampaignState = v4->fields.photoCampaignState;
        switch ( photoCampaignState )
        {
          case 7:
            MyRoomControl__DispPhotoCampaign(
              v4,
              v4->fields.photoCampaignServantUsrId,
              v4->fields.photoCampaignLimitCount,
              v4->fields.photoMasterEquipId,
              v4->fields.photoMasterGenderType,
              v69);
            break;
          case 2:
            v4->fields.photoCampaignServantUsrId = 0LL;
            v4->fields.photoCampaignState = 1;
            v4->fields.photoCampaignLimitCount = 0;
            MyRoomControl__ClosePhotoCampaignServant(v4, v68);
            break;
          case 1:
            v4->fields.photoCampaignState = 0;
            MyRoomControl__ClosePhotoCampaignPanel(v4, v68);
            break;
        }
        return;
      }
      this = (MyRoomControl_o *)MyRoomControl__GetState(v4, v63);
      if ( !(_DWORD)this || (type = v4->fields.type, type == 10) )
      {
        mState = v4->fields.mState;
        v4->fields.IsMaterialEventBack = 1;
        if ( mState )
        {
          MyRoomControl__setDefSvtPos(v4, method);
          return;
        }
        this = (MyRoomControl_o *)v4->fields.mStateMaterial;
        if ( !this )
          goto LABEL_79;
        this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        type = v4->fields.type;
      }
      method = (const MethodInfo *)StringLiteral_3102/*"CLICK_BACK"*/;
      v74 = type - 1;
      v75 = 0;
      switch ( v74 )
      {
        case 0:
          v76 = &StringLiteral_3165/*"CLOSE_MATERIAL"*/;
          goto LABEL_51;
        case 1:
          v77 = &StringLiteral_3166/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_59;
        case 2:
          v77 = &StringLiteral_3164/*"CLOSE_ITEMLIST"*/;
          goto LABEL_59;
        case 3:
          v77 = &StringLiteral_3157/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_59;
        case 4:
          optionComp = v4->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v75 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              method = (const MethodInfo *)StringLiteral_3155/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v77 = &StringLiteral_3163/*"CLOSE_GAMEOPTION"*/;
LABEL_59:
            method = (const MethodInfo *)*v77;
            v75 = 0;
          }
LABEL_60:
          if ( ((unsigned __int8)v75 & (v4->fields.mState != 0)) != 0 )
          {
            MyRoomControl__setDefSvtPos(v4, method);
          }
          else
          {
            this = (MyRoomControl_o *)v4->fields.titleInfo;
            if ( !this )
              break;
            TitleInfoControl__sendEvent((TitleInfoControl_o *)this, (System_String_o *)method, 0LL);
          }
          this = (MyRoomControl_o *)v4->fields.myRoomFsm;
          if ( this )
          {
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
            this = (MyRoomControl_o *)System_String__op_Inequality(
                                        ActiveStateName,
                                        (System_String_o *)StringLiteral_13216/*"State 5"*/,
                                        0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              return;
            if ( v4->fields.myRoomData )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v4->fields.fvrUsrSvtId, v81);
              if ( this )
              {
                v82 = this;
                v91 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&this->fields.materialCollectionComp;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = *(_QWORD *)&v91.fields.currentCryptoKey;
                  serialCodeComp = v82->fields.serialCodeComp;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v91.fields.currentCryptoKey = value;
                  *(_QWORD *)&v91.fields.fakeValue = serialCodeComp;
                }
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v91, 0LL) < 1
                  || v4->fields.isHeroine && v4->fields.isHeroineReave )
                {
                  return;
                }
                changeBtnImg = (UIWidget_o *)v4->fields.changeBtnImg;
                *(UnityEngine_Color_o *)&v85 = UnityEngine_Color__get_white(0LL);
                if ( changeBtnImg )
                {
                  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v85, 0LL);
                  v89 = MyRoomControl_TypeInfo;
                  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                    v89 = MyRoomControl_TypeInfo;
                  }
                  v4->fields.buttonFlag |= v89->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 5:
          v76 = &StringLiteral_3169/*"CLOSE_NOTICE"*/;
LABEL_51:
          method = (const MethodInfo *)*v76;
          v75 = 1;
          goto LABEL_60;
        case 6:
          v77 = &StringLiteral_3172/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_59;
        case 7:
          v77 = &StringLiteral_3160/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_59;
        case 8:
          v77 = &StringLiteral_3162/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_59;
        case 9:
          v77 = &StringLiteral_3173/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_59;
        case 10:
          v77 = &StringLiteral_3167/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_59;
        case 16:
          v77 = &StringLiteral_3177/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_59;
        default:
          goto LABEL_60;
      }
LABEL_79:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickChangeLimit(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  int v3; // w2
  __int64 v4; // x3
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  MyRoomControl_c *v36; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v39; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  ServantEntity_o *Entity; // x21
  const MethodInfo *v46; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t size; // w10
  int32_t v49; // w8
  const MethodInfo *v50; // x2
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x20
  __int64 v52; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_42E9DAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v12, v13, v14);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_15588/*"Wait_Action"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3013/*"CHANGE_LIMIT"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_7227/*"Help"*/, v33, v34, v35);
    byte_42E9DAC = 1;
  }
  v36 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v36 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v36->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2 | ((this->fields.buttonFlag & v36->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
    goto LABEL_30;
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_50;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15588/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_50;
    v39 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v39, (System_String_o *)StringLiteral_7227/*"Help"*/, 0LL) )
      return;
  }
  if ( !this->fields.isServantMaterial )
  {
    if ( !this->fields.isHeroine || !this->fields.isHeroineReave )
    {
      myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, method);
      if ( ((unsigned __int8)myRoomFsm & 1) == 0 )
        goto LABEL_45;
      if ( !this->fields.myRoomData )
        goto LABEL_50;
      myRoomFsm = (PlayMakerFSM_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomFsm, this->fields.fvrUsrSvtId, v50);
      if ( !myRoomFsm )
        goto LABEL_50;
      v52 = *(_QWORD *)&myRoomFsm[1].fields.eventHandlerComponentsAdded;
      addEventHandlers = myRoomFsm[1].fields.addEventHandlers;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v54.fields.currentCryptoKey = v52;
      *(_QWORD *)&v54.fields.fakeValue = addEventHandlers;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v54, 0LL) > 0 || this->fields.isHeroine )
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_50;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_50;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)myRoomFsm;
  v44 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v44;
  *(_QWORD *)&v53.fields.fakeValue = v43;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v53, 0LL);
  if ( !v42 )
    goto LABEL_50;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v42,
                                (int32_t)myRoomFsm,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v46);
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
      v49 = this->fields.materialFigureSvtDispIdx + 1;
      if ( v49 >= size )
        v49 = 0;
      else
        this->fields.materialFigureSvtDispIdx = v49;
      this->fields.materialFigureSvtDispIdx = v49;
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
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3013/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_50:
      sub_B5D69C(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9DDD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DDD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
}


void __fastcall MyRoomControl__OnClickDispPhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E9E08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_OnClickDispPhotoUi__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9E08 = 1;
  }
  v8 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 75) & 2) != 0 )
    v8 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickDispPhotoUi__);
  v9 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v8, v8[3]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
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
    sub_B5D69C(gameObject, v11);
  }
LABEL_19:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v14);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_42E9DEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_OnClickEventLogSortKind__, (_DWORD)method, v2, v3);
    byte_42E9DEB = 1;
  }
  v5 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickEventLogSortKind__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
    sub_B5D69C(materialCollectionServantListViewManager, v7);
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
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9DDE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9DDE = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 0, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t photoCampaignState; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // kr00_8
  float v15; // s11
  UnityEngine_GameObject_o *v16; // x20
  float v17; // s5
  float v18; // s6
  float v19; // s7
  float v20; // s4
  UnityEngine_GameObject_o *v21; // x0
  float x; // s12
  float v23; // s13
  float v24; // s14
  UnityEngine_GameObject_o *v25; // x20
  float v26; // s4
  float v27; // s5
  float v28; // s3
  UnityEngine_GameObject_o *v29; // x20
  float v30; // s5
  float v31; // s6
  float v32; // s7
  float v33; // s4
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x20
  float v36; // s4
  float v37; // s5
  float v38; // s3
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float y; // s5
  float z; // s6
  float w; // s7
  float v47; // s4
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x20
  float v51; // s5
  float v52; // s6
  float v53; // s7
  float v54; // s4
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  TweenAlpha_o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Vector3_o v73; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v78; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v79; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v80; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v81; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v82; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42E9DFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6765/*"FinishedCloseFullScreenPhotoCampaign"*/, v5, v6, v7);
    byte_42E9DFB = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v73.fields.z = 0.0;
  *(_QWORD *)&v73.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_33;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  switch ( photoCampaignState )
  {
    case 6:
      v39 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
        v39 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v40 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v39, v39[3]);
      OverwriteAssetSoundName__PlaySystemSe(v40, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
      goto LABEL_30;
    case 5:
      v41 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
        v41 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v42 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v41, v41[3]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v85 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
      y = v85.fields.y;
      z = v85.fields.z;
      w = v85.fields.w;
      v85.fields.y = v85.fields.x;
      v85.fields.z = y;
      v85.fields.w = z;
      v47 = w;
      TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v85.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v79.fields.x = 1.0;
      v79.fields.y = 1.0;
      v79.fields.z = 1.0;
      TweenScale__Begin(v48, 0.2, v79, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v80.fields.y = 11.0;
      v80.fields.x = 0.0;
      v80.fields.z = 0.0;
      TweenPosition__Begin(v49, 0.2, v80, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v86 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
      v51 = v86.fields.y;
      v52 = v86.fields.z;
      v53 = v86.fields.w;
      v86.fields.y = v86.fields.x;
      v86.fields.z = v51;
      v86.fields.w = v52;
      v54 = v53;
      TweenRotation__Begin(v50, 0.2, *(UnityEngine_Quaternion_o *)&v86.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v81.fields.x = 1.0;
      v81.fields.y = 1.0;
      v81.fields.z = 1.0;
      TweenScale__Begin(v55, 0.2, v81, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_33;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v82.fields.y = 11.0;
      v82.fields.x = 0.0;
      v82.fields.z = 0.0;
      TweenPosition__Begin(v56, 0.2, v82, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_33;
LABEL_30:
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v58 = TweenAlpha__Begin(v57, 0.2, 0.0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !v58 )
        goto LABEL_33;
      v58->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
      p_eventReceiver = &v58->fields.eventReceiver;
      sub_B5D560(
        (BattleServantConfConponent_o *)p_eventReceiver,
        (System_Int32_array **)maskBoxCollider,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v66 = (System_Int32_array **)StringLiteral_6765/*"FinishedCloseFullScreenPhotoCampaign"*/;
      p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6765/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_B5D560((BattleServantConfConponent_o *)(p_eventReceiver + 1), v66, v67, v68, v69, v70, v71, v72);
      return;
    case 4:
      v10 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
        v10 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v11 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v10, v10[3]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      this->fields.photoCampaignState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v73, v12);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        v14 = *(_QWORD *)&v73.fields.x;
        v15 = v73.fields.z;
        v16 = v13;
        v83 = UnityEngine_Quaternion__Euler_35652376(v73, 0LL);
        v17 = v83.fields.y;
        v18 = v83.fields.z;
        v19 = v83.fields.w;
        v83.fields.y = v83.fields.x;
        v83.fields.z = v17;
        v83.fields.w = v18;
        v20 = v19;
        TweenRotation__Begin(v16, 0.2, *(UnityEngine_Quaternion_o *)&v83.fields.y, 0LL);
        maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
        if ( maskBoxCollider )
        {
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
          x = localScale.fields.x;
          v23 = localScale.fields.y;
          v24 = localScale.fields.z;
          TweenScale__Begin(v21, 0.2, localScale, 0LL);
          maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
          if ( maskBoxCollider )
          {
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
            zero = UnityEngine_Vector3__get_zero(0LL);
            v26 = zero.fields.y;
            v27 = zero.fields.z;
            zero.fields.y = zero.fields.x;
            zero.fields.z = v26;
            v28 = v27;
            TweenPosition__Begin(v25, 0.2, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              *(_QWORD *)&v76.fields.x = v14;
              v76.fields.z = v15;
              v84 = UnityEngine_Quaternion__Euler_35652376(v76, 0LL);
              v30 = v84.fields.y;
              v31 = v84.fields.z;
              v32 = v84.fields.w;
              v84.fields.y = v84.fields.x;
              v84.fields.z = v30;
              v84.fields.w = v31;
              v33 = v32;
              TweenRotation__Begin(v29, 0.2, *(UnityEngine_Quaternion_o *)&v84.fields.y, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v78.fields.x = x;
                v78.fields.y = v23;
                v78.fields.z = v24;
                TweenScale__Begin(v34, 0.2, v78, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                  v77 = UnityEngine_Vector3__get_zero(0LL);
                  v36 = v77.fields.y;
                  v37 = v77.fields.z;
                  v77.fields.y = v77.fields.x;
                  v77.fields.z = v36;
                  v38 = v37;
                  TweenPosition__Begin(v35, 0.2, *(UnityEngine_Vector3_o *)&v77.fields.y, 0LL);
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
      sub_B5D69C(maskBoxCollider, method);
  }
}


void __fastcall MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *backBtn; // x0
  __int64 v6; // x1
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  MyRoomControl_c *klass; // x11
  bool v11; // zf
  int32_t v12; // w8
  __int64 v13; // x1
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_42E9DF9 & 1) == 0 )
  {
    sub_B5D5C4(&TouchEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DF9 = 1;
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_B5D69C(backBtn, v6);
  UnityEngine_GameObject__SetActive(backBtn, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v8);
  MyRoomControl__SetBackButtonIgnore(this, 1, v9);
  klass = this->klass;
  v11 = !this->fields._IsOnlyServant_k__BackingField;
  if ( this->fields._IsOnlyServant_k__BackingField )
    v12 = 4;
  else
    v12 = 6;
  this->fields.photoCampaignState = v12;
  if ( v11 )
    v13 = 870LL;
  else
    v13 = 362LL;
  v14 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, __int64, __int64, void *))klass->vtable._4_CaptureServant.method)(
                                              this,
                                              v13,
                                              552LL,
                                              klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
}


void __fastcall MyRoomControl__OnClickPhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct UIPanel_o *v13; // x8

  if ( (byte_42E9E09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl_OnClickPhotoServant__, v5, v6, v7);
    byte_42E9E09 = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        photoMasterPanel = this->fields.photoMasterPanel;
        if ( photoMasterPanel )
        {
          v10 = (UIPanel_o *)photoCampaignStandFigureBack;
          if ( SLODWORD(photoCampaignStandFigureBack[13].klass) > photoMasterPanel->fields.mDepth )
            return;
          v11 = Method_MyRoomControl_OnClickPhotoServant__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoServant__ + 75) & 2) != 0 )
            v11 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickPhotoServant__);
          v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
          v13 = this->fields.photoMasterPanel;
          if ( v13 )
          {
            UIPanel__set_depth(v10, v13->fields.mDepth + 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9DDF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9DDF = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 1, v5);
  }
}


void __fastcall MyRoomControl__OnClickSelectMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
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
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v25; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v27; // x20
  int max_length; // w9
  struct System_Int64_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Int32_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Action_o *v43; // x20
  const MethodInfo *v44; // x4
  __int64 v45; // x0

  if ( (byte_42E9DDB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&long___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl__OnClickSelectMultipleServant_b__358_0__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15588/*"Wait_Action"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_7227/*"Help"*/, v20, v21, v22);
    byte_42E9DDB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_17;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15588/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_17;
    v25 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v25, (System_String_o *)StringLiteral_7227/*"Help"*/, 0LL) )
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
    sub_B5D69C(myRoomFsm, method);
  v27 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v27 >= max_length )
      break;
    if ( (unsigned int)v27 >= max_length )
    {
      v45 = sub_B5D6C8(myRoomFsm);
      sub_B5D668(v45, 0LL);
    }
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v27];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v27;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_17;
  }
  v29 = (struct System_Int64_array *)sub_B5D5DC(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__358_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v43, 1, v44);
}


void __fastcall MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
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
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v19; // x0
  bool IsEnablePhotoCampaignButton; // w20
  _QWORD *v21; // x8
  System_Reflection_MethodBase_o *v22; // x0
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1

  if ( (byte_42E9DEE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl_EndLoadPhotoAsset__, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15588/*"Wait_Action"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_7227/*"Help"*/, v14, v15, v16);
    byte_42E9DEE = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15588/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v19 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v19, (System_String_o *)StringLiteral_7227/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_B5D69C(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v21 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 75) & 2) != 0 )
    v21 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v22 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v21, v21[3]);
  if ( IsEnablePhotoCampaignButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
    v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_MyRoomControl_EndLoadPhotoAsset__, 0LL);
    MyRoomControl__LoadPhotoCampaignAssets(this, v23, v24);
    if ( !this->fields.isLoadMasterEquip )
    {
      this->fields.isLoadMasterEquip = 1;
      MyRoomControl__LoadMasterEquip(this, v25);
    }
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
  }
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MaterialCollectionServantListViewManager_o *Instance; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 v11; // x11

  if ( (byte_42E9DEA & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    byte_42E9DEA = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  dropObjectList = Instance->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_13;
  v11 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&dropObjectList->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v11 - 1] != MyRoomRootComponent_TypeInfo
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
    sub_B5D69C(Instance, v9);
  }
  Instance = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !Instance )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder((MaterialEventLogListViewManager_o *)Instance, 0LL);
}


void __fastcall MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  int v3; // w2
  __int64 v4; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  MyRoomControl_c *v12; // x0
  __int64 v13; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v15; // x2

  if ( (byte_42E9DB0 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10574/*"PLAY_VOICE"*/, v9, v10, v11);
    byte_42E9DB0 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_25;
  v12 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v12 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v12->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2 | ((this->fields.buttonFlag & v12->static_fields->BUTTON_VOICE_PLAY) == 0) )
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
        MyRoomControl__setNormalFace_27626976(this, 1, v15);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10574/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_B5D69C(svtCtr, v13);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9DDC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DDC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v5);
}


void __fastcall MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v17; // x11
  __int64 v18; // x8
  MyRoomStateMaterial_o *v19; // x20
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v23; // x2
  _BOOL4 v24; // w19

  if ( (byte_42E9DE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_OnClickValentineListChange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    byte_42E9DE9 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = Instance[1].klass;
  if ( !klass )
    goto LABEL_17;
  v17 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *((unsigned __int8 *)klass->_1.image + 300) < (unsigned int)v17 )
    goto LABEL_17;
  if ( *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v17 - 8) != MyRoomRootComponent_TypeInfo )
    goto LABEL_17;
  v18 = *(_QWORD *)&klass->_1.this_arg.bits;
  if ( !v18 )
    goto LABEL_17;
  v19 = *(MyRoomStateMaterial_o **)(v18 + 864);
  v20 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 75) & 2) != 0 )
    v20 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnClickValentineListChange__);
  v21 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v20, v20[3]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v19
    || (MyRoomStateMaterial__ValentineListMomentChange(v19, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(Instance, v15);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v23);
  v24 = this->fields.IsListActive;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__SaveIsListActive(v24, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Gesture_EventHandler_o *v11; // x20

  if ( (byte_42E9D9C & 1) == 0 )
  {
    sub_B5D5C4(&Gesture_EventHandler_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FingerGestures_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v8, v9, v10);
    byte_42E9D9C = 1;
  }
  v11 = (Gesture_EventHandler_o *)sub_B5D694(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v11, 0LL);
}


void __fastcall MyRoomControl__OnclickPhotoMaster(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct UIPanel_o *v13; // x8

  if ( (byte_42E9E0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl_OnclickPhotoMaster__, v5, v6, v7);
    byte_42E9E0A = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      photoMasterPanel = this->fields.photoMasterPanel;
      if ( photoMasterPanel )
      {
        v10 = (UIPanel_o *)photoCampaignStandFigureBack;
        if ( photoCampaignStandFigureBack )
        {
          if ( photoMasterPanel->fields.mDepth > SLODWORD(photoCampaignStandFigureBack[13].klass) )
            return;
          v11 = Method_MyRoomControl_OnclickPhotoMaster__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnclickPhotoMaster__ + 75) & 2) != 0 )
            v11 = (_QWORD *)sub_B5D5CC(Method_MyRoomControl_OnclickPhotoMaster__);
          v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
          v13 = this->fields.photoMasterPanel;
          if ( v13 )
          {
            UIPanel__set_depth(v10, v13->fields.mDepth - 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenMasterEquipSettingDialog(
        MyRoomControl_o *this,
        System_Action_int__int__o *callBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  MasterEquipSettingDialog_o *masterEquipSettingDialog; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x23
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  System_Action_bool__o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_42E9DF0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)callBack, (_DWORD)closeCallBack, method);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_MyRoomControl_SetMaskCollider__, v10, v11, v12);
    byte_42E9DF0 = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v16 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v16,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !masterEquipSettingDialog )
    sub_B5D69C(v17, v18);
  MasterEquipSettingDialog__Open(
    masterEquipSettingDialog,
    masterMaleEquipTexture,
    masterFemaleEquipTexture,
    callBack,
    closeCallBack,
    v16,
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)usrSvtIds,
    (System_String_array **)imageLimitCounts,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)imageLimitCounts,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
}


void __fastcall MyRoomControl__OpenSelectImageLimit(
        MyRoomControl_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_Action_bool__int__o *callback,
        int32_t index,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  SelectImageLimitDialog_o *selectImageLimitDialog; // x24
  System_Action_bool__o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42E9DE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, type, usrSvtId, callback);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_MyRoomControl_SetMaskCollider__, v14, v15, v16);
    byte_42E9DE6 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v18 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v18,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !selectImageLimitDialog )
    sub_B5D69C(v19, v20);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v18, callback, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__PlayOpening(
        MyRoomControl_o *this,
        System_String_o *fileName,
        System_String_o *assetPath,
        bool isCanSkip,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  MyRoomControl_o *v18; // x0
  const MethodInfo *v19; // x1
  System_Int32_array **CriMoviePlayerObject; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array ***v28; // x22
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  CRIMoviePlayer_o *v32; // x23
  BgmManager_c *v33; // x0
  float masterVolume; // s8
  System_Action_o *v35; // x25

  if ( (byte_42E9DD4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)fileName, (_DWORD)assetPath, isCanSkip);
    sub_B5D5C4(&BgmManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass345_0__PlayOpening_b__0__, v11, v12, v13);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass345_0_TypeInfo, v14, v15, v16);
    byte_42E9DD4 = 1;
  }
  v17 = sub_B5D694(MyRoomControl___c__DisplayClass345_0_TypeInfo);
  MyRoomControl___c__DisplayClass345_0___ctor((MyRoomControl___c__DisplayClass345_0_o *)v17, 0LL);
  CriMoviePlayerObject = (System_Int32_array **)MyRoomControl__CreateCriMoviePlayerObject(v18, v19);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 16) = CriMoviePlayerObject;
  v28 = (System_Int32_array ***)(v17 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), CriMoviePlayerObject, v22, v23, v24, v25, v26, v27);
  v32 = *(CRIMoviePlayer_o **)(v17 + 16);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_42E4CBD )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v29, v30, v31);
    byte_42E4CBD = 1;
  }
  v33 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v33 = BgmManager_TypeInfo;
  }
  masterVolume = v33->static_fields->masterVolume;
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v17, Method_MyRoomControl___c__DisplayClass345_0__PlayOpening_b__0__, 0LL);
  if ( !v32
    || (CRIMoviePlayer__Initialize(v32, fileName, assetPath, masterVolume, isCanSkip, 0LL, v35, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *v28) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(CriMoviePlayerObject, v21);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
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
  AssetData_o *photoCampaignAssetData; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v35; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  AssetData_array *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_Object_o *photoMasterTexture; // x20
  BattleServantConfConponent_o *p_photoMasterTexture; // x19
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7

  if ( (byte_42E9E0B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__ToArray__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E9E0B = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.photoCampaignShutterEffect, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.photoCampaignCameraEffect, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.photoLayerChangeObj = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.photoLayerChangeObj, 0LL, v21, v22, v23, v24, v25, v26);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.photoCampaignAssetData, 0LL, v28, v29, v30, v31, v32, v33);
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.photoTargetSelectDialog, 0LL, v38, v39, v40, v41, v42, v43);
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
    v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v45, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.photoSettingButtonComponent,
      0LL,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
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
    v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v53, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.masterEquipSettingDialog,
      0LL,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v61 = (AssetData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)masterEquipAssetData,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657772(v61, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.masterEquipAssetData, 0LL, v62, v63, v64, v65, v66, v67);
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
      sub_B5D560(p_photoMasterTexture, 0LL, v70, v71, v72, v73, v74, v75);
      return;
    }
LABEL_47:
    sub_B5D69C(klass, v35);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *asstName; // x19
  BattleServantConfConponent_o *p_asstName; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E9D9A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D9A = 1;
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
    sub_B5D560(p_asstName, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ReleaseTouch(MyRoomControl_o *this, const MethodInfo *method)
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
  MyRoomControl_c *v14; // x0
  int32_t buttonFlag; // w9
  int32_t BUTTON_MULTIPLE_VIEW; // w8
  int v17; // w11
  int v18; // w8
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  int32_t BUTTON_PHOTO_CAMPAIGN; // w8
  int v22; // w11
  int v23; // w8
  UIWidget_o *playBtnImg; // x20
  MyRoomData_o *UsrSvtData; // x0
  __int64 v26; // x1
  int v27; // s0
  UIWidget_o *helpButtonImg; // x20
  int v32; // s0
  const MethodInfo *v36; // x2
  struct MyRoomData_o *myRoomData; // x10
  struct MstProfileData_o *mstInfoData; // x20
  struct UserDeckEntity_o *usrDeckData; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v41; // w20
  System_String_o *ActiveStateName; // x0
  bool v43; // w0
  UIWidget_o *changeBtnImg; // x20
  int v45; // s0
  MyRoomControl_c *v49; // x0
  UIWidget_o *changeBGBtnImg; // x20
  int v51; // s0
  MyRoomControl_c *v55; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_42E9DD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13216/*"State 5"*/, v11, v12, v13);
    byte_42E9DD0 = 1;
  }
  v14 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v14 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  BUTTON_MULTIPLE_VIEW = v14->static_fields->BUTTON_MULTIPLE_VIEW;
  v17 = buttonFlag & ~BUTTON_MULTIPLE_VIEW;
  v18 = buttonFlag | BUTTON_MULTIPLE_VIEW;
  if ( this->fields.type )
    v18 = v17;
  this->fields.buttonFlag = v18;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  v20 = this->fields.buttonFlag;
  BUTTON_PHOTO_CAMPAIGN = MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  v22 = v20 & ~BUTTON_PHOTO_CAMPAIGN;
  v23 = v20 | BUTTON_PHOTO_CAMPAIGN;
  if ( this->fields.type )
    v23 = v22;
  this->fields.buttonFlag = v23;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v19);
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_39;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v27, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
  if ( !helpButtonImg )
    goto LABEL_39;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v32, 0LL);
  myRoomData = this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !myRoomData )
    goto LABEL_39;
  UsrSvtData = (MyRoomData_o *)MyRoomData__getUsrSvtData(UsrSvtData, this->fields.fvrUsrSvtId, v36);
  if ( !UsrSvtData )
    goto LABEL_39;
  usrDeckData = UsrSvtData[1].fields.usrDeckData;
  mstInfoData = UsrSvtData[1].fields.mstInfoData;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = usrDeckData;
  *(_QWORD *)&v57.fields.fakeValue = mstInfoData;
  UsrSvtData = (MyRoomData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_39;
    v41 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v41 = (int)UsrSvtData;
  }
  UsrSvtData = (MyRoomData_o *)this->fields.myRoomFsm;
  if ( !UsrSvtData )
    goto LABEL_39;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)UsrSvtData, 0LL);
  v43 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13216/*"State 5"*/, 0LL);
  if ( v41 >= 1 && v43 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_39;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v45, 0LL);
    v49 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v49 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v49->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_white(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_39;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v51, 0LL);
  v55 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v55 = MyRoomControl_TypeInfo;
  }
  static_fields = v55->static_fields;
  UsrSvtData = (MyRoomData_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !UsrSvtData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UsrSvtData, 0, 0LL),
        (UsrSvtData = (MyRoomData_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_39:
    sub_B5D69C(UsrSvtData, v26);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)UsrSvtData, 0, 0LL);
  if ( this->fields.type == 10 )
  {
    UsrSvtData = (MyRoomData_o *)this->fields.soundPlayerComp;
    if ( UsrSvtData )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)UsrSvtData, 0, 0LL);
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
    sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v10; // s0
  MyRoomControl_c *v14; // x0
  int v15; // w8
  int v16; // s0
  MyRoomControl_c *v20; // x0

  v4 = this;
  if ( (byte_42E9DAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    this = (MyRoomControl_o *)sub_B5D5C4(&MyRoomControl_TypeInfo, v5, v6, v7);
    byte_42E9DAA = 1;
  }
  if ( v4->fields.isServantMaterial )
  {
    materialImageIdList = v4->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_19:
      sub_B5D69C(this, method);
  }
  else
  {
    materialImageIdList = v4->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_19;
  }
  changeBtnImg = (UIWidget_o *)v4->fields.changeBtnImg;
  if ( materialImageIdList->fields._size > 1 )
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_19;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v16, 0LL);
    v20 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v20 = MyRoomControl_TypeInfo;
    }
    v15 = v4->fields.buttonFlag | v20->static_fields->BUTTON_LIMIT_CHANGE;
  }
  else
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_19;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v10, 0LL);
    v14 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v14 = MyRoomControl_TypeInfo;
    }
    v15 = v4->fields.buttonFlag & ~v14->static_fields->BUTTON_LIMIT_CHANGE;
  }
  v4->fields.buttonFlag = v15;
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, isEnable);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct StandFigureBack_o *photoCampaignStandFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x23
  int size; // w24
  __int64 v13; // x25
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v16; // w21
  StandFigureCollect_o *v17; // x8
  System_Action_o *v18; // x3
  __int64 v19; // x0

  v6 = this;
  if ( (byte_42E9DF6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_StandFigureCollect__get_Count__,
      (_DWORD)faceData,
      (_DWORD)callbackFunc,
      method);
    this = (MyRoomControl_o *)sub_B5D5C4(
                                &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                v7,
                                v8,
                                v9);
    byte_42E9DF6 = 1;
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
      v13 = 0LL;
      while ( 1 )
      {
        multiFace = faceData->fields.multiFace;
        if ( !multiFace )
          break;
        if ( (unsigned int)v13 >= multiFace->max_length )
          goto LABEL_22;
        multiForm = faceData->fields.multiForm;
        if ( !multiForm )
          break;
        if ( (unsigned int)v13 >= multiForm->max_length )
        {
LABEL_22:
          v19 = sub_B5D6C8(this);
          sub_B5D668(v19, 0LL);
        }
        v16 = multiFace->m_Items[v13 + 1];
        if ( standFigureCollectList->fields._size <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v17 = standFigureCollectList->fields._items->m_Items[v13];
        if ( !v17 )
          break;
        this = (MyRoomControl_o *)v17->fields._standFigure_k__BackingField;
        if ( !this )
          break;
        if ( (_DWORD)v13 )
          v18 = 0LL;
        else
          v18 = callbackFunc;
        UIStandFigureR__SetFace_40975992((UIStandFigureR_o *)this, v16, multiForm->m_Items[++v13], v18, 0.0, 0LL);
        if ( (int)v13 >= size )
          return;
      }
    }
LABEL_21:
    sub_B5D69C(this, faceData);
  }
}


void __fastcall MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  __int64 v25; // x21
  ServantVoiceEntity_o *Instance; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x24
  __int64 figureSvtDispIdx; // x25
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_o *asstName; // x22
  System_Action_o *v68; // x23
  const MethodInfo *v69; // x3
  System_Action_o *v70; // x23
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Action_o *v77; // x20
  const MethodInfo *v78; // x2

  if ( (byte_42E9DC3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, IsActSetMyRoomStandFigre, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__0__, v13, v14, v15);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__1__, v16, v17, v18);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__2__, v19, v20, v21);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass310_0_TypeInfo, v22, v23, v24);
    byte_42E9DC3 = 1;
  }
  v25 = sub_B5D694(MyRoomControl___c__DisplayClass310_0_TypeInfo);
  MyRoomControl___c__DisplayClass310_0___ctor((MyRoomControl___c__DisplayClass310_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 32) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  MyRoomControl__setupSvtImageIdList(this, v40);
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, 0, v41);
  v43 = (ServantVoiceEntity_o **)(v25 + 24);
  *(_QWORD *)(v25 + 24) = SvtVoiceEnt;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), SvtVoiceEnt, v44, v45, v46, v47, v48, v49);
  if ( *(_QWORD *)(v25 + 24) )
  {
    Instance = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v50);
      imageIdList = this->fields.imageIdList;
      if ( imageIdList )
      {
        figureSvtDispIdx = this->fields.figureSvtDispIdx;
        if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( *v43 )
        {
          MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                              *v43,
                              imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                              0LL);
          this->fields.voiceList = MyRoomVoiceList;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.voiceList,
            (System_Int32_array **)MyRoomVoiceList,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          Instance = *v43;
          if ( *v43 )
          {
            VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Instance, 0LL);
            this->fields.asstName = VoiceAssetName;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.asstName,
              (System_Int32_array **)VoiceAssetName,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66);
            asstName = this->fields.asstName;
            v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v68,
              (Il2CppObject *)v25,
              Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v68, v69);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_16:
    sub_B5D69C(Instance, v27);
  }
  this->fields.isExistVoiceData = 0;
LABEL_13:
  v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v25,
    Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__1__,
    0LL);
  *(_QWORD *)(v25 + 40) = v70;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 40), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
  if ( IsActSetMyRoomStandFigre )
  {
    v77 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v25,
      Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v77, v78);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v25 + 40), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetLayerMultipleServant(
        MyRoomControl_o *this,
        int32_t frontIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl_o *v5; // x19
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v7; // x21
  int max_length; // w9
  int32_t v9; // w1
  __int64 v10; // x0

  v5 = this;
  if ( (byte_42E9DE1 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B5D5C4(
                                &Method_UnityEngine_Component_GetComponent_UIPanel___,
                                frontIndex,
                                (_DWORD)method,
                                v3);
    byte_42E9DE1 = 1;
  }
  multipleStandFigureBacks = v5->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_B5D69C(this, *(_QWORD *)&frontIndex);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v7];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( this )
      {
        v9 = frontIndex == (_DWORD)v7 ? 16 : 15;
        UIPanel__set_depth((UIPanel_o *)this, v9, 0LL);
        multipleStandFigureBacks = v5->fields.multipleStandFigureBacks;
        ++v7;
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
    sub_B5D69C(0LL, flag);
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0LL);
}


void __fastcall MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v39; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x23
  __int64 materialFigureSvtDispIdx; // x24
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t v43; // w23
  struct System_Collections_Generic_List_int__o *v44; // x22
  __int64 v45; // x23
  int32_t Id; // w22
  struct System_Collections_Generic_List_int__o *v47; // x23
  __int64 v48; // x24
  int32_t v49; // w22
  StandFigureBack_o *standFigureBack; // x20
  int32_t v51; // w23
  System_Action_o *v52; // x24

  if ( (byte_42E9DA9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, servantId, (_DWORD)end_act, method);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__0__, v13, v14, v15);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass241_0_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, v19, v20, v21);
    byte_42E9DA9 = 1;
  }
  v22 = sub_B5D694(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor((MyRoomControl___c__DisplayClass241_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_24;
  *(_QWORD *)(v22 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)end_act, v31, v32, v33, v34, v35, v36);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v37);
    MyRoomControl__SetChangeBtn(this, v39);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_24;
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  mStateMaterial = this->fields.mStateMaterial;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v43 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v43, 0LL);
  if ( !mStateMaterial )
    goto LABEL_24;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, LimitCountByImageLimitCostumeIn, 0LL);
  v44 = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !v44 )
    goto LABEL_24;
  v45 = this->fields.materialFigureSvtDispIdx;
  if ( v44->fields._size <= (unsigned int)v45 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  Id = ServantScriptMaster__getId(servantId, v44->fields._items->m_Items[v45 + 1], 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  v47 = this->fields.materialImageIdList;
  if ( !v47 )
    goto LABEL_24;
  v48 = this->fields.materialFigureSvtDispIdx;
  v49 = LimitCountByImageLimitCostumeIn;
  if ( v47->fields._size <= (unsigned int)v48 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  standFigureBack = this->fields.standFigureBack;
  v51 = v47->fields._items->m_Items[v48 + 1];
  v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v22,
    Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_24:
    sub_B5D69C(LimitCountByImageLimitCostumeIn, v24);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v51, 1, 0, v49, 10, v52, 0, 0LL);
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
    sub_B5D69C(multipleViewButtonSprite, v8);
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
  __int64 v21; // x20
  MyRoomData_o *_29295864; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 figureSvtDispIdx; // x23
  const MethodInfo *v39; // x2
  int32_t v40; // w21
  struct System_Collections_Generic_List_int__o *v41; // x22
  __int64 v42; // x23
  int32_t v43; // w21
  struct System_Int32_array *items; // x8
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w19
  int32_t v47; // w23
  System_Action_o *v48; // x24

  if ( (byte_42E9DA7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__0__, v12, v13, v14);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass239_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, v18, v19, v20);
    byte_42E9DA7 = 1;
  }
  v21 = sub_B5D694(MyRoomControl___c__DisplayClass239_0_TypeInfo);
  MyRoomControl___c__DisplayClass239_0___ctor((MyRoomControl___c__DisplayClass239_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_21;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)end_act, v30, v31, v32, v33, v34, v35);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v21 + 24), v36);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = (MyRoomData_o *)TutorialFlag__Get_29295864(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = (unsigned __int8)_29295864 & 1;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_21;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  _29295864 = (MyRoomData_o *)ServantScriptMaster__getId(
                                this->fields.figureSvtId,
                                imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                                0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_21;
  v40 = (int)_29295864;
  MyRoomData__getUsrSvtData(_29295864, this->fields.fvrUsrSvtId, v39);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  _29295864 = (MyRoomData_o *)UIStandFigureRender__GetForm(v40, 1, -1, 0LL);
  v41 = this->fields.imageIdList;
  if ( !v41 )
    goto LABEL_21;
  v42 = this->fields.figureSvtDispIdx;
  v43 = (int)_29295864;
  if ( v41->fields._size <= (unsigned int)v42 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  items = v41->fields._items;
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v47 = items->m_Items[v42 + 1];
  v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v21,
    Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_21:
    sub_B5D69C(_29295864, v23);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v47, 1, 0, v43, 10, v48, 0, 0LL);
}


void __fastcall MyRoomControl__SetMySvtFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
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
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
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
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  int32_t materialServantId; // w21
  int32_t v36; // w22
  const MethodInfo *v37; // x1
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2

  if ( (byte_42E9DA8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&MaterialServantLimitCountManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass240_0__SetMySvtFigure_b__0__, v12, v13, v14);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass240_0_TypeInfo, v15, v16, v17);
    byte_42E9DA8 = 1;
  }
  v18 = sub_B5D694(MyRoomControl___c__DisplayClass240_0_TypeInfo);
  MyRoomControl___c__DisplayClass240_0___ctor((MyRoomControl___c__DisplayClass240_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)this,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        *(_QWORD *)(v18 + 24) = end_act,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 24),
          (System_Int32_array **)end_act,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_B5D69C(v19, v20);
  }
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  materialServantId = this->fields.materialServantId;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v36 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, v36, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v37);
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v18,
    Method_MyRoomControl___c__DisplayClass240_0__SetMySvtFigure_b__0__,
    0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v38, v39);
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
    sub_B5D69C(photoCampaignButtonSprite, v8);
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
    sub_B5D69C(photoCampaignAtlas, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  struct UnityEngine_GameObject_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E9E04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, isActive, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9E04 = 1;
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
      v12 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)photoCampaignCameraEffect,
                                                 transform,
                                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      this->fields.photoCampaignInstantiateCameraEffect = v12;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
    0LL,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_18;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v15; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_42E9DB2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E9DB2 = 1;
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
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v18, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v21 = voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v21)
      || (v22 = voicePlayEffect, UITweener__set_tweenFactor((UITweener_o *)v21, 0.0, 0LL), !v22) )
    {
LABEL_20:
      sub_B5D69C(voicePlayEffect, v15);
    }
    UITweener__set_tweenFactor((UITweener_o *)v22, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      HIDWORD(v21[1].klass) = 1;
      HIDWORD(v22[1].klass) = 1;
    }
    else
    {
      HIDWORD(v21[1].klass) = 0;
      HIDWORD(v22[1].klass) = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_45224128((UITweener_o *)v21, 1, 0LL);
    UITweener__Play_45224128((UITweener_o *)v22, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_B5D69C(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_35654020(
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v3);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B5D69C(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_42E9D9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MyRoomControl__setState__, state, (_DWORD)method, v3);
    byte_42E9D9F = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_42E9D93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E9D93 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (DataManager_o *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, v10),
        !this->fields.frontObjectManager) )
  {
    sub_B5D69C(Instance, v9);
  }
  v11 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v11 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v11, 0LL);
}


void __fastcall MyRoomControl__SetupMaterialSvtImageIdList(
        MyRoomControl_o *this,
        int32_t servantId,
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
  int32_t LimitCount; // w21
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  int32_t ServantImageLimitSealAfter; // w21
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v32; // x2
  DataManager_o *v33; // x22
  int32_t v34; // w23
  int32_t v35; // w26
  int32_t ImageLimitCount; // w24
  int32_t v37; // w24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v39; // x20
  unsigned __int64 v40; // x23
  int32_t v41; // w22
  __int64 v42; // x0

  if ( (byte_42E9D95 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v18, v19, v20);
    sub_B5D5C4(&MaterialServantLimitCountManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E9D95 = 1;
  }
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v33 = Instance;
  if ( ((__int64)Instance->fields.saveDataMapList & 0x80000000) == 0 )
  {
    v34 = 0;
    v35 = 0;
    while ( 1 )
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v34, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    (ServantLimitImageMaster_o *)Instance,
                                    servantId,
                                    ImageLimitCount,
                                    0LL);
      if ( !this->fields.materialImageIdList )
        goto LABEL_40;
      v37 = (int)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    this->fields.materialImageIdList,
                                    (int32_t)Instance,
                                    (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v37,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( v37 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v35;
        ++v35;
      }
      if ( ++v34 > SLODWORD(v33->fields.saveDataMapList) )
        goto LABEL_29;
    }
  }
  v35 = 0;
LABEL_29:
  Instance = (DataManager_o *)MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)Instance, servantId, v32);
  if ( !Instance )
LABEL_40:
    sub_B5D69C(Instance, v29);
  datalist = Instance->fields.datalist;
  v39 = Instance;
  if ( (int)datalist >= 1 )
  {
    v40 = 0LL;
    do
    {
      if ( v40 >= (unsigned int)datalist )
      {
        v42 = sub_B5D6C8(Instance);
        sub_B5D668(v42, 0LL);
      }
      v41 = *((_DWORD *)&v39->fields.lookup + v40);
      if ( v41 >= 1 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          v41,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( v41 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v35;
        ++v35;
      }
      LODWORD(datalist) = v39->fields.datalist;
      ++v40;
    }
    while ( (__int64)v40 < (int)datalist );
  }
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Gesture_EventHandler_o *v11; // x20

  if ( (byte_42E9D9B & 1) == 0 )
  {
    sub_B5D5C4(&Gesture_EventHandler_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FingerGestures_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v8, v9, v10);
    byte_42E9D9B = 1;
  }
  v11 = (Gesture_EventHandler_o *)sub_B5D694(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v11, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9DFA & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__StartCameraEffect_d__399_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DFA = 1;
  }
  v5 = sub_B5D694(MyRoomControl__StartCameraEffect_d__399_TypeInfo);
  MyRoomControl__StartCameraEffect_d__399___ctor((MyRoomControl__StartCameraEffect_d__399_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_42E9D9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MyRoomControl__update__, (_DWORD)method, v2, v3);
    byte_42E9D9D = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_MyRoomControl__update__);
  if ( this->fields.isEnableMultipleView )
    MyRoomControl__UpdateMutipleViewRemainTime(this, method);
  if ( this->fields.isEnablePhotoCampaign )
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, method);
}


void __fastcall MyRoomControl__UpdateMutipleViewRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t Time; // x0
  UILabel_o *multipleViewButtonRemainTimeLabel; // x21
  int64_t multipleViewFinishedTime; // x22
  int64_t v11; // x20
  System_String_o *RestTime6; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_42E9DE8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E9DE8 = 1;
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
    v11 = Time;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v11, 0LL);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_B5D69C(RestTime6, v13);
    UILabel__set_text(multipleViewButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v11 > this->fields.multipleViewFinishedTime )
    {
      this->fields.multipleViewFinishedTime = -1LL;
      MyRoomControl__SetMultipleViewButtonColor(this, v14);
    }
  }
}


void __fastcall MyRoomControl__UpdatePhotoCampaignRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t Time; // x0
  UILabel_o *photoCampaignButtonRemainTimeLabel; // x21
  int64_t photoCampaignFinishedTime; // x22
  int64_t v11; // x20
  System_String_o *RestTime6; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_42E9E03 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E9E03 = 1;
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
    v11 = Time;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v11, 0LL);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_B5D69C(RestTime6, v13);
    UILabel__set_text(photoCampaignButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v11 > this->fields.photoCampaignFinishedTime )
    {
      this->fields.photoCampaignFinishedTime = -1LL;
      MyRoomControl__SetPhotoCampaignButtonColor(this, v14);
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
    sub_B5D69C(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__412_0(
        MyRoomControl_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_42E9E17 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, equipId, genderType, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass412_0__ChangeMasterSetting_b__1__, v13, v14, v15);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass412_0_TypeInfo, v16, v17, v18);
    byte_42E9E17 = 1;
  }
  v19 = sub_B5D694(MyRoomControl___c__DisplayClass412_0_TypeInfo);
  MyRoomControl___c__DisplayClass412_0___ctor((MyRoomControl___c__DisplayClass412_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_9;
  *(_QWORD *)(v19 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v19 + 16) = genderType;
  *(_DWORD *)(v19 + 20) = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = *(_DWORD *)(v19 + 16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v19,
    Method_MyRoomControl___c__DisplayClass412_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v20, v21);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__412_2(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *photoMasterTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v10; // x1
  CommonUI_o *v11; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9E18 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E9E18 = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v10);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)photoMasterTexture;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v11 )
LABEL_9:
    sub_B5D69C(photoMasterTexture, method);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__372_0(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9E14 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__CloseMultipleView_b__372_1__, v5, v6, v7);
    byte_42E9E14 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__372_1__, 0LL);
  if ( !multipleViewComponent )
    sub_B5D69C(v10, v11);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v9, 0LL);
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
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 40, 0, 0LL);
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
      v9 = sub_B5D6C8(titleInfo);
      sub_B5D668(v9, 0LL);
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
    sub_B5D69C(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__406_0(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9E16 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_1__, v5, v6, v7);
    byte_42E9E16 = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__406_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_B5D69C(v10, v11);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v9, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__406_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_B5D69C(titleInfo, method);
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
    sub_B5D69C(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__385_0(
        MyRoomControl_o *this,
        int32_t photoType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x4

  if ( (byte_42E9E15 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, photoType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MyRoomControl__EndLoadPhotoAsset_b__385_1__, v6, v7, v8);
    byte_42E9E15 = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__385_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v9, 1, v10);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__385_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_B5D69C(this, method);
  PhotoCampaignComponent__Open(
    photoCampaignComponent,
    this->fields.photoCampaignType,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
}


void __fastcall MyRoomControl___GoToTitle_b__317_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *Instance; // x0
  __int64 v18; // x1
  MyRoomControl_o *v19; // x0
  const MethodInfo *v20; // x1
  CommonUI_o *v21; // x19
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__317_1; // x20
  Il2CppObject *v26; // x21
  struct MyRoomControl___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E9E13 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl___c__GoToTitle_b__317_1__, v11, v12, v13);
    sub_B5D5C4(&MyRoomControl___c_TypeInfo, v14, v15, v16);
    byte_42E9E13 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v19, v20);
    v21 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v22 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
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
      v26 = (Il2CppObject *)static_fields->__9;
      _9__317_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__317_1, v26, Method_MyRoomControl___c__GoToTitle_b__317_1__, 0LL);
      v27 = MyRoomControl___c_TypeInfo->static_fields;
      v27->__9__317_1 = _9__317_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v27->__9__317_1,
        (System_Int32_array **)_9__317_1,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( v21 )
    {
      CommonUI__maskFadeout(v21, 1, DEFAULT_FADE_TIME, _9__317_1, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(Instance, v18);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__286_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B5D69C(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__264_0(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t mState; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v13; // x21
  StandFigureBack_o *SvtStandFigure; // x0
  unsigned int localPosition; // s0
  float v16; // s8
  float v17; // s1
  float v18; // s9
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9E11 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__LoadServantForm_b__264_1__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8649/*"LoadServantFormEnd"*/, v8, v9, v10);
    byte_42E9E11 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v3);
    standFigureBack = this->fields.standFigureBack;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__264_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v13, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(SvtStandFigure, method);
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
  v16 = *(float *)&localPosition;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)(&v17 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)SvtStandFigure,
                                           0LL);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v18 = v17;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0LL);
  v20.fields.x = -v16;
  v20.fields.y = v18;
  MyRoomControl__moveControl(this, this->fields.svtObj, v20, (System_String_o *)StringLiteral_8649/*"LoadServantFormEnd"*/, v19);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__358_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_B5D69C(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__309_0(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E9E12 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3168/*"CLOSE_MENU"*/, (_DWORD)method, v2, v3);
    byte_42E9E12 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__247_0(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E9E10 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7163/*"HIDE_END"*/, (_DWORD)method, v2, v3);
    byte_42E9E10 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7163/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__284_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B5D69C(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__238_0(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v9; // x8

  if ( (byte_42E9E0F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8491/*"LOAD_END"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8492/*"LOAD_END_TO_HELP"*/, v5, v6, v7);
    byte_42E9E0F = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  if ( this->fields.type == 6 )
    v9 = &StringLiteral_8492/*"LOAD_END_TO_HELP"*/;
  else
    v9 = &StringLiteral_8491/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__220_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E9E0E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42E9E0E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl_o **v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 *v12; // x8

  v5 = (MyRoomControl_o **)this;
  if ( (byte_42E9DBB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    this = (MyRoomControl_o *)sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v9, v10, v11);
    byte_42E9DBB = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = v5[8];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v5[4];
      if ( this )
      {
        v12 = &StringLiteral_11210/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B5D69C(this, result);
  }
  this = v5[3];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, (const MethodInfo *)result);
  this = v5[4];
  if ( !this )
    goto LABEL_12;
  v12 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v12, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_42E9DC7 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DC7 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_B5D69C(0LL, v5);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_B5D69C(0LL, method);
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
        sub_B5D560((BattleServantConfConponent_o *)(svtCtr + 80), 0LL, v2, v3, v4, v5, v6, v7),
        (svtCtr = (char *)this->fields.standFigureBack) == 0LL) )
  {
    sub_B5D69C(svtCtr, method);
  }
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E9DB9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11709/*"SAVE_END"*/, (_DWORD)method, v2, v3);
    byte_42E9DB9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11709/*"SAVE_END"*/, 0LL);
}


System_String_o *__fastcall MyRoomControl__getChangeMyRoomBgm(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  MyRoomControl_c *v16; // x0
  System_String_o *DEFAULT_BGM_NAME; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w0
  int32_t v21; // w20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9D97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E9D97 = 1;
  }
  entity = 0LL;
  v16 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v16 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v16->static_fields->DEFAULT_BGM_NAME;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  v20 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, v19);
  if ( v20 )
  {
    v21 = v20;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  v21,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.age;
LABEL_15:
      sub_B5D69C(Instance, v19);
    }
  }
  return DEFAULT_BGM_NAME;
}


System_String_o *__fastcall MyRoomControl__getMyRoomBgm(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_c *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  SoundPlayerComponent_o *soundPlayerComp; // x8
  System_String_o *v9; // x19
  System_String_o *PlaySoundName; // x20

  if ( (byte_42E9D98 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D98 = 1;
  }
  v5 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  v6 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v5);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B5D69C(v6, v7);
  v9 = v6;
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
    return v9;
  else
    return PlaySoundName;
}


UIStandFigureR_o *__fastcall MyRoomControl__getSvtStandFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B5D69C(0LL, method);
  return StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall MyRoomControl__getSvtVoiceEnt(
        MyRoomControl_o *this,
        bool limitCntReset,
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
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  MyRoomData_o *UsrSvtData; // x0
  int64_t favoriteUserSvtId; // x1
  const MethodInfo *v33; // x2
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t size; // w10
  int32_t v37; // w8
  struct System_Collections_Generic_List_int__o *v39; // x8
  UIWidget_o *changeBtnImg; // x20
  int v41; // s0
  MyRoomControl_c *v45; // x0
  int v46; // w8
  int v47; // s0
  MyRoomControl_c *v51; // x0
  struct System_Collections_Generic_List_int__o *v52; // x21
  __int64 figureSvtDispIdx; // x19
  int32_t v54; // w20
  int32_t LimitCountByImageLimit; // w19
  StandFigureBack_c *v56; // x0

  if ( (byte_42E9DAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v12, v13, v14);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StandFigureBack_TypeInfo, v21, v22, v23);
    byte_42E9DAB = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_41;
  favoriteUserSvtId = usrData->fields.favoriteUserSvtId;
  this->fields.fvrUsrSvtId = favoriteUserSvtId;
  if ( favoriteUserSvtId < 1 )
    return 0LL;
  if ( !this->fields.myRoomData )
    goto LABEL_41;
  UsrSvtData = (MyRoomData_o *)MyRoomData__getUsrSvtData(UsrSvtData, favoriteUserSvtId, v33);
  if ( UsrSvtData )
  {
    if ( limitCntReset )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_41;
      size = imageIdList->fields._size;
      v37 = this->fields.figureSvtDispIdx + 1;
      if ( v37 >= size )
        v37 = 0;
      else
        this->fields.figureSvtDispIdx = v37;
      this->fields.figureSvtDispIdx = v37;
    }
    else
    {
      v39 = this->fields.imageIdList;
      if ( !v39 )
        goto LABEL_41;
      changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
      if ( v39->fields._size <= 1 )
      {
        *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_gray(0LL);
        if ( !changeBtnImg )
          goto LABEL_41;
        UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v47, 0LL);
        v51 = MyRoomControl_TypeInfo;
        if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v51 = MyRoomControl_TypeInfo;
        }
        v46 = this->fields.buttonFlag & ~v51->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
        if ( !changeBtnImg )
          goto LABEL_41;
        UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v41, 0LL);
        v45 = MyRoomControl_TypeInfo;
        if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v45 = MyRoomControl_TypeInfo;
        }
        v46 = this->fields.buttonFlag | v45->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v46;
    }
  }
  UsrSvtData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  v52 = this->fields.imageIdList;
  if ( !v52 )
    goto LABEL_41;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  v54 = (int)UsrSvtData;
  if ( v52->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  LimitCountByImageLimit = v52->fields._items->m_Items[figureSvtDispIdx + 1];
  v56 = StandFigureBack_TypeInfo;
  if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v56 = StandFigureBack_TypeInfo;
  }
  if ( LimitCountByImageLimit < v56->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(LimitCountByImageLimit, 0LL);
  }
  UsrSvtData = (MyRoomData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UsrSvtData
    || (UsrSvtData = (MyRoomData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)UsrSvtData,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_41:
    sub_B5D69C(UsrSvtData, favoriteUserSvtId);
  }
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)UsrSvtData, 1, v54, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  MyRoomControl_o *v4; // x19
  int64_t fvrUsrSvtId; // x1
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42E9DB4 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B5D5C4(
                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                (_DWORD)method,
                                (_DWORD)v2,
                                v3);
    byte_42E9DB4 = 1;
  }
  fvrUsrSvtId = v4->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  if ( !v4->fields.myRoomData )
    sub_B5D69C(this, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData((MyRoomData_o *)this, fvrUsrSvtId, v2);
  if ( !UsrSvtData )
    return 0;
  v8 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
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
  __int64 v20; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v22; // x20

  if ( (byte_42E9DCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_EndTurorialRequest__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v17, v18, v19);
    byte_42E9DCA = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(helpListViewManager, v20);
  }
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v22, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v22,
                                                         (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_B5D69C(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_42E9DC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__hideFavoriteSvt_b__309_0__, v5, v6, v7);
    byte_42E9DC2 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__309_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v8, 1, v9);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_B5D69C(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_B5D69C(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B5D69C(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E9DC4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3168/*"CLOSE_MENU"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9DC4 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v7; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_42E9DC5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DC5 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_B5D69C(soundPlayerComp, method);
  }
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
  {
    MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UIWidget_o *playBtnImg; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // s0
  const MethodInfo *v18; // x1
  MyRoomControl_c *v19; // x0
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v21; // x21

  if ( (byte_42E9DAE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__hideSvtFigure_b__247_0__, v5, v6, v7);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v8, v9, v10);
    byte_42E9DAE = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
  if ( !playBtnImg )
    goto LABEL_9;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v14, 0LL);
  v19 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v19 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v19->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v18);
  standFigureBack = this->fields.standFigureBack;
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__247_0__, 0LL);
  if ( !standFigureBack )
LABEL_9:
    sub_B5D69C(v12, v13);
  StandFigureBack__Fadeout(standFigureBack, v21, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(usrItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9DBF & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__initMaterial_d__284_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DBF = 1;
  }
  v5 = sub_B5D694(MyRoomControl__initMaterial_d__284_TypeInfo);
  MyRoomControl__initMaterial_d__284___ctor((MyRoomControl__initMaterial_d__284_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__initMyRoom(MyRoomControl_o *this, const MethodInfo *method)
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v78; // x2
  CStateManager_QAASpotStateController_IMapSpot__o *v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct CStateManager_MyRoomControl__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v87; // x21
  struct EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMaster_o **p_eventMaster; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  const MethodInfo *v96; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  struct MyRoomControl___c_StaticFields *standFigureCollectList; // x8
  System_Action_o *_9__215_0; // x22
  Il2CppObject *v101; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  _BOOL8 v109; // x0
  const MethodInfo *v110; // x4
  MyRoomControl_o *v111; // x0
  const MethodInfo *v112; // x4
  int v113; // w2
  __int64 v114; // x3
  MyRoomParamsManager_c *v115; // x0
  struct MyRoomParamsManager_StaticFields *v116; // x8
  const MethodInfo *v117; // x1
  const MethodInfo *v118; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v121; // x22
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x1
  float x; // w8
  float y; // w9
  float z; // w10
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v130; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v134; // x21
  int max_length; // w9
  int basePanel; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x2
  const MethodInfo *v141; // x1
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v151; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // x22
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v160; // x22
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v167; // x22
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v175; // x1
  const MethodInfo *v176; // x2
  const MethodInfo *v177; // x1
  __int64 v178; // x0
  UnityEngine_Vector3_o v179; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v184; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9D92 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CStateManager_MyRoomControl___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_CStateManager_MyRoomControl__add__, v11, v12, v13);
    sub_B5D5C4(&CStateManager_MyRoomControl__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_AssetData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_MyRoomControl_LoadScriptFileListAssetData__, v44, v45, v46);
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&SoundManager_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&MyRoomControl_StateEtc_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_MyRoomControl___c__initMyRoom_b__215_0__, v59, v60, v61);
    sub_B5D5C4(&MyRoomControl___c_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_10545/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_8947/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v74, v75, v76);
    byte_42E9D92 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v179.fields.z = 0.0;
  *(_QWORD *)&v179.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( !this->fields.mFSM )
  {
    v79 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v79,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v79;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MyRoomControl__add__);
    mFSM = this->fields.mFSM;
    v87 = (MyRoomControl_StateEtc_o *)sub_B5D694(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v87, 0LL);
    if ( !mFSM )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      1,
      (IState_T__o *)v87,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v78);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_59;
  MyRoomData__setUserInfoData((MyRoomData_o *)standFigureBack, method);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (struct EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)standFigureBack,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
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
  MyRoomControl__setUserStInfoView(this, v96);
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
    v101 = (Il2CppObject *)standFigureCollectList->__9;
    _9__215_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__215_0, v101, Method_MyRoomControl___c__initMyRoom_b__215_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__215_0 = _9__215_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__215_0,
      (System_Int32_array **)_9__215_0,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_59;
  v109 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, _9__215_0, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v109,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v110);
  MyRoomControl__setupSortWindowUIMoveData(v111, this->fields.sortWindowObj, &v, &v179, v112);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_42E9E22 )
  {
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)method, v113, v114);
    byte_42E9E22 = 1;
  }
  v115 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v115 = MyRoomParamsManager_TypeInfo;
  }
  v116 = v115->static_fields;
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  this->fields.IsListActive = v116->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_59;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v117);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v118);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v121 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v121, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_59;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v121, v122);
  MyRoomControl__setupSvtImageIdList(this, v123);
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
    v184 = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    x = v184.fields.x;
    y = v184.fields.y;
    z = v184.fields.z;
    this->fields.voicePlayButtonDefaultPos = v184;
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  this->fields.voicePlayBtnInitPos.fields.x = x;
  this->fields.voicePlayBtnInitPos.fields.y = y;
  this->fields.voicePlayBtnInitPos.fields.z = z;
  v185 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v185;
  v186 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v186;
  v187 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v187;
  if ( !standFigureBack )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v130);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17171/*"btn_bg_12"*/, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_59;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.typeMetadataHandle)(
    standFigureBack,
    standFigureBack->klass[2]._1.interopData);
  v188 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v188;
  if ( !multipleStandFigureBacks )
    goto LABEL_59;
  v134 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v134 >= max_length )
      break;
    if ( (unsigned int)v134 >= max_length )
      goto LABEL_95;
    standFigureBack = multipleStandFigureBacks->m_Items[v134];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v134;
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
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
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
    sub_B5D69C(standFigureBack, method);
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
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8947/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_59;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_59;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v139);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v140);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v141);
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
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
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
      v178 = sub_B5D6C8(standFigureBack);
      sub_B5D668(v178, 0LL);
    }
    v151 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v151;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.photoCampaignEntity,
      (System_Int32_array **)v151,
      v144,
      v145,
      v146,
      v147,
      v148,
      v149);
    v153 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v153,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v153;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.masterEquipAssetData,
      (System_Int32_array **)v153,
      v154,
      v155,
      v156,
      v157,
      v158,
      v159);
    v160 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v160,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v160;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.masterMaleEquipTexture,
      (System_Int32_array **)v160,
      v161,
      v162,
      v163,
      v164,
      v165,
      v166);
    v167 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v167,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v167;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.masterFemaleEquipTexture,
      (System_Int32_array **)v167,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10545/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
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
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v175);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v176);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v177);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_B5D69C(gameObject, v10);
  v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.eventReceiver, gameObject, v11, v12, v13, v14, v15, v16);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_B5D560(
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
  int v3; // w2
  __int64 v4; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MyRoomControl_c *v9; // x0
  __int64 v10; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_42E9DC8 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42E9DC8 = 1;
  }
  v9 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v9->static_fields->BUTTON_HELP) < 0) ^ v2 | ((this->fields.buttonFlag & v9->static_fields->BUTTON_HELP) == 0) )
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
        sub_B5D69C(0LL, v10);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  MyRoomHelpListViewManager_CallbackFunc2_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9DC9 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl_helpClose__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9DC9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v12 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_B5D694(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v12, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_B5D69C(v13, v14);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v12, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_B5D69C(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B5D69C(0LL, method);
  SoundPlayerComponent__openMenu(soundPlayerComp, 0LL);
}


void __fastcall MyRoomControl__playSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
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
  int32_t VoiceSvtId; // w0
  __int64 v24; // x1
  int32_t v25; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v27; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v29; // w20
  TopMyRoomRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_Int32_array_array *v31; // x22
  int fsm; // w8
  System_Int32_array **v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0
  __int64 v41; // x0

  if ( (byte_42E9DB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_____TypeInfo, v5, v6, v7);
    sub_B5D5C4(&int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E9DB7 = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v25 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_23;
    v27 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v27, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v25, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_23;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_23;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v25, v27, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v29 = FlagRequestNumber;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TopMyRoomRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    0LL,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v31 = (System_Int32_array_array *)sub_B5D5DC(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_B5D5DC(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          fsm = (int)svtCtr->fields.fsm;
          v33 = (System_Int32_array **)svtCtr;
          if ( !fsm )
            goto LABEL_24;
          LODWORD(svtCtr->fields.player) = v25;
          if ( fsm == 1 )
            goto LABEL_24;
          HIDWORD(svtCtr->fields.player) = v29;
          if ( !v31 )
            goto LABEL_23;
          svtCtr = (MyRoomSvtControl_o *)sub_B5D684(svtCtr, v31->obj.klass->_1.element_class);
          if ( !svtCtr )
          {
            v41 = sub_B5D6BC(0LL);
            sub_B5D668(v41, 0LL);
          }
          if ( !v31->max_length )
          {
LABEL_24:
            v40 = sub_B5D6C8(svtCtr);
            sub_B5D668(v40, 0LL);
          }
          v31->m_Items[0] = (System_Int32_array *)v33;
          sub_B5D560((BattleServantConfConponent_o *)v31->m_Items, v33, v34, v35, v36, v37, v38, v39);
          if ( Request_WarBoardWallAttackRequest )
          {
            TopMyRoomRequest__beginRequest(Request_WarBoardWallAttackRequest, v31, 0LL);
            return;
          }
        }
LABEL_23:
        sub_B5D69C(svtCtr, v24);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SoundPlayerComponent_o *soundPlayerComp; // x0
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  int32_t materialServantId; // w20
  int32_t v13; // w21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  v4 = this;
  if ( (byte_42E9DA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, (_DWORD)method, v2, v3);
    this = (MyRoomControl_o *)sub_B5D5C4(&MaterialServantLimitCountManager_TypeInfo, v5, v6, v7);
    byte_42E9DA2 = 1;
  }
  MyRoomControl__shutdown(this, method);
  if ( v4->fields.isServantMaterial )
  {
    materialImageIdList = v4->fields.materialImageIdList;
    v4->fields.isServantMaterial = 0;
    if ( !materialImageIdList )
      goto LABEL_20;
    materialFigureSvtDispIdx = v4->fields.materialFigureSvtDispIdx;
    materialServantId = v4->fields.materialServantId;
    if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v13 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, v13, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  soundPlayerComp = v4->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    goto LABEL_20;
  SoundPlayerComponent__DestroyMenu(soundPlayerComp, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v4, v14);
  MyRoomControl__destroySvtFigure(v4, v15);
  soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.backGroundManager;
  if ( !soundPlayerComp )
    goto LABEL_20;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)soundPlayerComp, v9);
  soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.mMaterialEventLogListViewManager;
  if ( !soundPlayerComp )
    goto LABEL_20;
  MaterialEventLogListViewManager__DestroyList((MaterialEventLogListViewManager_o *)soundPlayerComp, 0LL);
  soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.helpListViewManager;
  if ( !soundPlayerComp )
    goto LABEL_20;
  MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)soundPlayerComp, 0LL);
  soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.helpListViewManager;
  if ( !soundPlayerComp
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)soundPlayerComp, 0LL),
        (soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)soundPlayerComp, 0LL),
        MyRoomControl__ReleasePhotoAsset(v4, v16),
        (soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.MaterialEventLogItemListPanel) == 0LL)
    || (((void (__fastcall *)(SoundPlayerComponent_o *, Il2CppClass *, float))soundPlayerComp->klass[1]._1.castClass)(
          soundPlayerComp,
          soundPlayerComp->klass[1]._1.declaringType,
          1.0),
        (soundPlayerComp = (SoundPlayerComponent_o *)v4->fields.valentineListObj) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(soundPlayerComp, v9);
  }
  ((void (__fastcall *)(SoundPlayerComponent_o *, Il2CppClass *, float))soundPlayerComp->klass[1]._1.castClass)(
    soundPlayerComp,
    soundPlayerComp->klass[1]._1.declaringType,
    0.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9DB8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl_endReflectionGameOption__, v5, v6, v7);
    byte_42E9DB8 = 1;
  }
  optionComp = this->fields.optionComp;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_B5D69C(v10, v11);
  SetGameOptionComponent__reflectionGameOption(optionComp, v9, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
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
  void *SelfUserGame; // x0
  __int64 v18; // x1
  int32_t v19; // w19
  System_String_o *Value; // x21
  NetworkManager_ResultCallbackFunc_o *v21; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x20

  if ( (byte_42E9DBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_MyRoomControl_callbackChangeName__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3981/*"ChangeUserName"*/, v14, v15, v16);
    byte_42E9DBA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  if ( !this->fields.myRoomFsm )
    goto LABEL_14;
  v19 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_14;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_3981/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v21, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v21,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_WarBoardWallAttackRequest )
LABEL_14:
    sub_B5D69C(SelfUserGame, v18);
  UserNameChangeRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    Value,
    v19,
    *((System_String_o **)SelfUserGame + 29),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_B5D69C(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
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
  __int64 v18; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 figureSvtDispIdx; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *asstName; // x21
  System_Action_o *v53; // x22
  const MethodInfo *v54; // x3

  if ( (byte_42E9DAF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isReset, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass248_0__resetSvtVoiceData_b__0__, v9, v10, v11);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass248_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8491/*"LOAD_END"*/, v15, v16, v17);
    byte_42E9DAF = 1;
  }
  v18 = sub_B5D694(MyRoomControl___c__DisplayClass248_0_TypeInfo);
  MyRoomControl___c__DisplayClass248_0___ctor((MyRoomControl___c__DisplayClass248_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_15;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8491/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(myRoomFsm, v20);
  }
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, isReset, v27);
  *(_QWORD *)(v18 + 24) = SvtVoiceEnt;
  v29 = (ServantVoiceEntity_o **)(v18 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), SvtVoiceEnt, v30, v31, v32, v33, v34, v35);
  if ( !*(_QWORD *)(v18 + 24) )
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                      *v29,
                      imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                      0LL);
  this->fields.voiceList = MyRoomVoiceList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceList,
    (System_Int32_array **)MyRoomVoiceList,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  myRoomFsm = (PlayMakerFSM_o *)*v29;
  if ( !*v29 )
    goto LABEL_15;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)VoiceAssetName,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  asstName = this->fields.asstName;
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v18,
    Method_MyRoomControl___c__DisplayClass248_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v53, v54);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
  }
  ContinueDeviceComponent__showMenu((ContinueDeviceComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setDefSvtPos(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  _BOOL4 isServantMaterial; // w23
  UnityEngine_GameObject_o *mMainObj; // x20
  const MethodInfo *v8; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  float v12; // s2
  UnityEngine_GameObject_o *servantListObj; // x22
  UnityEngine_GameObject_o *sortWindowObj; // x21
  float v15; // s10
  float v16; // s2
  float v17; // s11
  float v18; // s12
  float v19; // s13
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  int32_t mState; // w8
  float v23; // s1
  float v24; // s11
  const MethodInfo *v25; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9DD1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DD1 = 1;
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
      v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      y = v27.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mMainObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      servantListObj = this->fields.servantListObj;
      if ( !servantListObj )
        goto LABEL_35;
      sortWindowObj = this->fields.sortWindowObj;
      z = v12;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v15 = v28.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      *(UnityEngine_Vector3_o *)(&v16 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      if ( !sortWindowObj )
        goto LABEL_35;
      v17 = v16;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v18 = v29.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_35;
      v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v19 = v30.fields.z;
      v30.fields.x = -7.0;
      v30.fields.y = v15;
      v30.fields.z = v17;
      MyRoomControl__MyRoomlUIAnimationStart(this, servantListObj, v30, v20);
      v31.fields.x = 0.0;
      v31.fields.y = v18;
      v31.fields.z = v19;
      MyRoomControl__MyRoomlUIAnimationStart(this, sortWindowObj, v31, v21);
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
            *(UnityEngine_Vector3_o *)(&v23 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)voicePlayBtn,
                                                     0LL);
            voicePlayBtn = this->fields.svtObj;
            if ( voicePlayBtn )
            {
              v24 = v23;
              voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayBtn, 0LL);
              if ( voicePlayBtn )
              {
                v32 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
                v32.fields.x = -512.0;
                v32.fields.y = v24;
                MyRoomControl__moveControl(this, this->fields.svtObj, v32, 0LL, v25);
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
        sub_B5D69C(voicePlayBtn, method);
      }
LABEL_31:
      v33.fields.x = x;
      v33.fields.y = y;
      v33.fields.z = z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, v33, v8);
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
    sub_B5D69C(moveBtnObj, isDisp);
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
    sub_B5D69C(titleBtnCollider, isEnabled);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
  }
  SetGameOptionComponent__showGameOption((SetGameOptionComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42E9DBD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, isPlayDecideSe, (_DWORD)method, v3);
    byte_42E9DBD = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, v6);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v8);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 55, 0, 0LL);
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
    sub_B5D69C(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B5D69C(this, method);
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
    sub_B5D69C(v6, v7);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &moveHidePos;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v8);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9DA6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl__setMySvtFigure_b__238_0__, v5, v6, v7);
    byte_42E9DA6 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__238_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v8, v9);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_27626976(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_27626976(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  unsigned int size; // w8
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  int32_t Form; // w0
  int32_t Id; // w20
  int32_t v19; // w2
  UnityEngine_Object_o *playBtnImg; // x20

  v5 = this;
  if ( (byte_42E9DB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    this = (MyRoomControl_o *)sub_B5D5C4(&UIStandFigureRender_TypeInfo, v9, v10, v11);
    byte_42E9DB3 = 1;
  }
  if ( v5->fields.isServantMaterial )
  {
    materialImageIdList = v5->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_32;
    materialFigureSvtDispIdx = v5->fields.materialFigureSvtDispIdx;
    size = materialImageIdList->fields._size;
    materialServantId = v5->fields.materialServantId;
LABEL_16:
    if ( size <= (unsigned int)materialFigureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
    v19 = Form;
    goto LABEL_23;
  }
  if ( !isCurrent || !v5->fields.isServantFormKeep )
  {
    materialImageIdList = v5->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_32;
    materialFigureSvtDispIdx = v5->fields.figureSvtDispIdx;
    size = materialImageIdList->fields._size;
    materialServantId = v5->fields.figureSvtId;
    goto LABEL_16;
  }
  svtCtr = (UnityEngine_Object_o *)v5->fields.svtCtr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtCtr, 0LL, 0LL) )
  {
    this = (MyRoomControl_o *)v5->fields.svtCtr;
    if ( !this )
      goto LABEL_32;
    Form = MyRoomSvtControl__GetFormId((MyRoomSvtControl_o *)this, 0LL);
    goto LABEL_22;
  }
  v19 = 0;
LABEL_23:
  this = (MyRoomControl_o *)v5->fields.standFigureBack;
  if ( !this )
    goto LABEL_32;
  StandFigureBack__SetFaceTypeAndForm((StandFigureBack_o *)this, 0, v19, 0LL);
  v5->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)v5->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    this = (MyRoomControl_o *)v5->fields.voicePlayEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_32:
    sub_B5D69C(this, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_B5D69C(mstpfObj, method);
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
    sub_B5D69C(0LL, v4);
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
          sub_B5D69C(standFigureBack, isEnableMultipleView);
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
    sub_B5D69C(0LL, hSvtId);
  return MyRoomData__getSvtFriendshipLv(myRoomData, hSvtId, method);
}


void __fastcall MyRoomControl__setSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  void *myRoomFsm; // x0
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 figureSvtDispIdx; // x22
  ServantVoiceEntity_o *v29; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_o *asstName; // x20
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v49; // x8
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__236_0; // x21
  Il2CppObject *v53; // x22
  struct MyRoomControl___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42E9DA4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl_EndLoad__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomControl___c__setSvtVoiceData_b__236_0__, v17, v18, v19);
    sub_B5D5C4(&MyRoomControl___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_8491/*"LOAD_END"*/, v23, v24, v25);
    byte_42E9DA4 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8491/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_27:
    sub_B5D69C(myRoomFsm, method);
  }
  myRoomFsm = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( myRoomFsm )
  {
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_27;
    figureSvtDispIdx = this->fields.figureSvtDispIdx;
    v29 = (ServantVoiceEntity_o *)myRoomFsm;
    if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                        (ServantVoiceEntity_o *)myRoomFsm,
                        imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                        0LL);
    this->fields.voiceList = MyRoomVoiceList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)MyRoomVoiceList,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v29, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    asstName = this->fields.asstName;
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v45, v46);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v49 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v49 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v49->static_fields->DEFAULT_FADE_TIME;
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
        v53 = (Il2CppObject *)static_fields->__9;
        _9__236_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__236_0, v53, Method_MyRoomControl___c__setSvtVoiceData_b__236_0__, 0LL);
        v54 = MyRoomControl___c_TypeInfo->static_fields;
        v54->__9__236_0 = _9__236_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v54->__9__236_0,
          (System_Int32_array **)_9__236_0,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      if ( !Instance )
        goto LABEL_27;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__236_0, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_27;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8491/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
  }
  UserServantCoinComponent__showMenu((UserServantCoinComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setUserStInfoView(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *multipleViewButton; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  MyRoomControl_c *v9; // x0

  if ( (byte_42E9DBC & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9DBC = 1;
  }
  multipleViewButton = this->fields.multipleViewButton;
  this->fields.type = 0;
  if ( !multipleViewButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnableMultipleView, 0LL);
  v9 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v9->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, v6);
  multipleViewButton = this->fields.photoCampaignButton;
  if ( !multipleViewButton
    || (UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnablePhotoCampaign, 0LL),
        this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN,
        MyRoomControl__SetPhotoCampaignButtonColor(this, v7),
        (multipleViewButton = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v8);
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
    || (TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_B5D69C(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_22517780((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(transform, v12);
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
    sub_B5D69C(this, moveTarget);
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
    sub_B5D69C(this, moveTarget);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  *moveShowPos = localPosition;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void __fastcall MyRoomControl__setupSvtImageIdList(MyRoomControl_o *this, const MethodInfo *method)
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
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x8
  System_Collections_Generic_List_int__o *imageIdList; // x0
  const MethodInfo *v40; // x2
  UserServantEntity_o *v41; // x20
  void *monitor; // x21
  System_Collections_Generic_List_int__c *klass; // x22
  int32_t v44; // w21
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  int32_t v47; // w22
  __int64 v48; // x22
  __int64 v49; // x23
  __int64 v50; // x21
  __int64 v51; // x22
  MyRoomControl_o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x8
  System_Collections_Generic_List_int__o *v55; // x21
  unsigned __int64 v56; // x22
  int32_t FigureImageLimitCount; // w20
  struct System_Collections_Generic_List_int__o *v58; // x22
  __int64 v59; // x21
  int size; // w8
  __int64 v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42E9D94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E9D94 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  if ( !this->fields.myRoomData )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)imageIdList,
                                                            this->fields.fvrUsrSvtId,
                                                            v40);
  if ( !imageIdList )
    goto LABEL_48;
  v41 = (UserServantEntity_o *)imageIdList;
  klass = imageIdList[2].klass;
  monitor = imageIdList[2].monitor;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = klass;
  *(_QWORD *)&v62.fields.fakeValue = monitor;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
  v44 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine(v41, 0LL);
  while ( 1 )
  {
    v49 = *(_QWORD *)&v41->fields.limitCount.fields.currentCryptoKey;
    v48 = *(_QWORD *)&v41->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = v49;
    *(_QWORD *)&v63.fields.fakeValue = v48;
    if ( v44 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v44, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)imageIdList,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !imageIdList )
      goto LABEL_48;
    imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                              (ServantLimitImageMaster_o *)imageIdList,
                                                              this->fields.figureSvtId,
                                                              ImageLimitCount,
                                                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v47 = (int)imageIdList;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)imageIdList,
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        imageIdList,
        v47,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    ++v44;
  }
  if ( UserServantEntity__IsHeroine(v41, 0LL) || UserServantEntity__isLimitCountMax(v41, 0LL) )
  {
    v51 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v51;
    *(_QWORD *)&v64.fields.fakeValue = v50;
    v52 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
    imageIdList = (System_Collections_Generic_List_int__o *)MyRoomControl__GetSortedCostumeIds(v52, (int32_t)v52, v53);
    if ( imageIdList )
    {
      v54 = *(_QWORD *)&imageIdList->fields._size;
      v55 = imageIdList;
      if ( (int)v54 >= 1 )
      {
        v56 = 0LL;
        do
        {
          if ( v56 >= (unsigned int)v54 )
          {
            v61 = sub_B5D6C8(imageIdList);
            sub_B5D668(v61, 0LL);
          }
          v36 = *((unsigned int *)&v55->fields._syncRoot + v56);
          if ( (int)v36 >= 1 )
          {
            imageIdList = this->fields.imageIdList;
            if ( !imageIdList )
              goto LABEL_48;
            System_Collections_Generic_List_int___Add(
              imageIdList,
              v36,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v54) = v55->fields._size;
          ++v56;
        }
        while ( (__int64)v56 < (int)v54 );
      }
      goto LABEL_39;
    }
LABEL_48:
    sub_B5D69C(imageIdList, v36);
  }
LABEL_39:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v41, 0, 0LL);
  imageIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)imageIdList,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !imageIdList )
    goto LABEL_48;
  imageIdList = (System_Collections_Generic_List_int__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)imageIdList,
                                                            this->fields.figureSvtId,
                                                            FigureImageLimitCount,
                                                            0LL);
  v58 = this->fields.imageIdList;
  if ( !v58 )
    goto LABEL_48;
  v59 = 0LL;
  while ( 1 )
  {
    size = v58->fields._size;
    if ( (int)v59 >= size )
      break;
    if ( size <= (unsigned int)v59 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( v58->fields._items->m_Items[v59 + 1] == (_DWORD)imageIdList )
    {
      this->fields.figureSvtDispIdx = v59;
      return;
    }
    v58 = this->fields.imageIdList;
    ++v59;
    if ( !v58 )
      goto LABEL_48;
  }
}


void __fastcall MyRoomControl__setupSvtRand(MyRoomControl_o *this, const MethodInfo *method)
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
  __int64 v35; // x1
  void *limitCountSupport; // x0
  int32_t v37; // w22
  _DWORD *v38; // x19
  __int64 IsLeave; // x0
  unsigned int v40; // w20
  char *v41; // x24
  void **v42; // x24
  void *v43; // t1
  UserServantEntity_o *v44; // x20
  NetworkManager_ResultCallbackFunc_o *v45; // x19
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UserServantCollectionMaster_o *v54; // x19
  int64_t userId; // x21
  __int64 v56; // x23
  __int64 v57; // x24
  __int128 v58; // q1
  _DWORD *v59; // x25
  __int128 v60; // q0
  int32_t v61; // w24
  int32_t v62; // w26
  int32_t v63; // w27
  int32_t v64; // w28
  bool IsLock; // w19
  char v66; // w21
  int32_t commonFlag; // w23
  int32_t battleVoice; // w25
  int32_t randomSettingOwn; // w22
  int32_t v70; // w0
  __int64 v71; // x8
  int32_t randomSettingSupport; // w20
  __int64 v73; // x0
  int64_t v74; // [xsp+48h] [xbp-E8h]
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v76; // [xsp+58h] [xbp-D8h]
  int64_t pushUserSvtId; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_WarBoardWallAttackRequest; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_42E9D96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl__setupSvtRand_b__220_0__, v8, v9, v10);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&OptionManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v32, v33, v34);
    byte_42E9D96 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_40:
    sub_B5D69C(limitCountSupport, v35);
  }
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_40;
  v37 = *((_DWORD *)limitCountSupport + 6);
  v38 = limitCountSupport;
  while ( 1 )
  {
    do
    {
      IsLeave = UnityEngine_Random__RandomRange(0, v37, 0LL);
      v40 = IsLeave;
      if ( (unsigned int)IsLeave >= v38[6] )
      {
LABEL_39:
        v73 = sub_B5D6C8(IsLeave);
        sub_B5D668(v73, 0LL);
      }
      v41 = (char *)&v38[2 * (int)IsLeave];
      v43 = (void *)*((_QWORD *)v41 + 4);
      v42 = (void **)(v41 + 32);
      limitCountSupport = v43;
      if ( !v43 )
        goto LABEL_40;
      IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    }
    while ( (IsLeave & 1) != 0 );
    if ( v40 >= v38[6] )
      goto LABEL_39;
    limitCountSupport = *v42;
    if ( !*v42 )
      goto LABEL_40;
    IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
    if ( (IsLeave & 1) == 0 )
    {
      if ( v40 >= v38[6] )
        goto LABEL_39;
      v44 = (UserServantEntity_o *)*v42;
      if ( *v42 )
        break;
    }
  }
  v45 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v45,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__220_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CardFavoriteRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v45,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  limitCountSupport = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_40;
  limitCountSupport = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData || !v44 )
    goto LABEL_40;
  v54 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v57 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v57;
  *(_QWORD *)&v82.fields.fakeValue = v56;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v82, 0LL);
  if ( !v54 )
    goto LABEL_40;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v54, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_40;
  v58 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  v59 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v58;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v80 = v81;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v80, 0LL);
  v60 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v79.fields.fakeValue = v60;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v79, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                      v44->fields.imageLimitCount,
                      0LL);
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44->fields.dispLimitCount, 0LL);
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44->fields.commandCardLimitCount, 0LL);
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44->fields.iconLimitCount, 0LL);
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v44, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v44, 0LL);
  if ( !v59 )
    goto LABEL_40;
  v66 = (char)limitCountSupport;
  commonFlag = v59[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       v44->fields.randomLimitCount,
                       0LL);
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44->fields.randomLimitCountSupport, 0LL);
  v71 = *(_QWORD *)&v44->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v83.fields.fakeValue = *(_QWORD *)&v44->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v70;
  *(_QWORD *)&v83.fields.currentCryptoKey = v71;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v83, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_40;
  CardFavoriteRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v76,
    imageLimitCount,
    v61,
    v62,
    v63,
    v64,
    1,
    IsLock,
    v66 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    pushUserSvtId == v74,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MissionNotifyManager_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E9DA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4, v5, v6);
    byte_42E9DA1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v7 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  MissionNotifyManager__RemoveNoDisplayMissionCondType(v7, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MissionNotifyManager_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E9DA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4, v5, v6);
    byte_42E9DA0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v7 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  MissionNotifyManager__AddNoDisplayMissionCondType(v7, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_B5D69C(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_27626976(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E9DCD & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl__svtVoicePlayAct_d__329_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E9DCD = 1;
  }
  v6 = sub_B5D694(MyRoomControl__svtVoicePlayAct_d__329_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__329___ctor((MyRoomControl__svtVoicePlayAct_d__329_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = item;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)item, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  NetworkManager_c *v37; // x0
  SoundManager_o *Instance; // x21
  System_Action_o *v39; // x22

  if ( (byte_42E9DA3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetName, (_DWORD)endCallback, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass235_0__voiceLoad_b__0__, v13, v14, v15);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass235_0_TypeInfo, v16, v17, v18);
    byte_42E9DA3 = 1;
  }
  v19 = sub_B5D694(MyRoomControl___c__DisplayClass235_0_TypeInfo);
  MyRoomControl___c__DisplayClass235_0___ctor((MyRoomControl___c__DisplayClass235_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v19 + 24),
    (System_Int32_array **)endCallback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.isVoiceLoading = 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42E5FA0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    byte_42E5FA0 = 1;
  }
  v37 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v37 = NetworkManager_TypeInfo;
  }
  if ( !v37->static_fields->isRebootBlock )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)v19, Method_MyRoomControl___c__DisplayClass235_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage(Instance, assetName, v39, 1, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(v20, v21);
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
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v24; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v26; // x21
  UIRect_o *height; // x0
  __int64 v28; // x1
  int v29; // w22
  int32_t activeHeight; // w0
  int32_t v31; // w26
  int32_t v32; // w23
  int v33; // w24
  int v34; // w22
  int v35; // w23
  int v36; // w8
  int v37; // w25
  int v38; // w0
  _BOOL4 IsOnlyServant_k__BackingField; // w26
  int v40; // w27
  int v41; // w24
  int v42; // w25
  int v43; // w27
  int32_t v44; // w0
  int v45; // w8
  UnityEngine_Color_array *Pixels_35722184; // x25
  UnityEngine_Texture2D_o *v47; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v49; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_42EAE6F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TouchEffectManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v11, v12, v13);
    byte_42EAE6F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v24 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v26 = v24;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_37;
    v29 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_37;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_37;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v31 = this->fields.height;
    v32 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_37;
    v33 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_37;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v26 )
      goto LABEL_37;
    v34 = v29 * width / v32;
    v35 = v33 * v31 / (int)height;
    v36 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v26->klass->vtable._4_get_width.method)(
            v26,
            v26->klass->vtable._5_set_width.methodPtr)
        - v34;
    v37 = v36 >= 0 ? v36 : v36 + 1;
    v38 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
            v26,
            v26->klass->vtable._7_set_height.methodPtr);
    IsOnlyServant_k__BackingField = _4__this->fields._IsOnlyServant_k__BackingField;
    v40 = v38 - v35 >= 0 ? v38 - v35 : v38 - v35 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_37;
    v41 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_37;
    v42 = v37 >> 1;
    v43 = v40 >> 1;
    v44 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v45 = IsOnlyServant_k__BackingField ? 11 : 1;
    Pixels_35722184 = UnityEngine_Texture2D__GetPixels_35722184(v26, v42, v45 * v41 / v44 + v43, v34, v35, 0LL);
    v47 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35722864(v47, v34, v35, 3, 0, 0LL);
    if ( !v47 )
      goto LABEL_37;
    UnityEngine_Texture2D__SetPixels_35723912(v47, Pixels_35722184, 0LL);
    UnityEngine_Texture2D__Apply_35724740(v47, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_37;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v47,
      height->klass[1]._1.generic_class);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v26, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v49 = 11.0;
    if ( !_4__this->fields._IsOnlyServant_k__BackingField )
      v49 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v49, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_37:
      sub_B5D69C(height, v28);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__CaptureServant_d__397_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  bool v21; // w20
  System_Func_bool__o *v22; // x22
  UnityEngine_WaitUntil_o *v23; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42EAE70 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__289_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    byte_42EAE70 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_B5D69C(Instance, v20);
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v21 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v22 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v22,
    _4__this,
    Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__289_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v23 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v23, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v23;
  p__2__current = &this->fields.__2__current;
  sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
  *((_DWORD *)p__2__current - 2) = 1;
  return v21;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__289_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl__InitMaterialOnBackground_d__283_o *v4; // x20
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
  int32_t _1__state; // w8
  System_Int32_array **v18; // x0
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  TerminalSceneComponent_c *v31; // x0
  struct TerminalSceneComponent_o *mInstance; // x20
  BackTaskAmountAdjuster_o *v33; // x20
  System_Collections_IEnumerator_o *v34; // x0

  v4 = this;
  if ( (byte_42EAE71 & 1) == 0 )
  {
    sub_B5D5C4(&BackTaskAmountAdjuster_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v11, v12, v13);
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)sub_B5D5C4(
                                                                 &TerminalSceneComponent_TypeInfo,
                                                                 v14,
                                                                 v15,
                                                                 v16);
    byte_42EAE71 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
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
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v28, v29, v30);
      byte_42E4B1E = 1;
    }
    v31 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v31 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v31->static_fields->mInstance;
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
    v33 = (BackTaskAmountAdjuster_o *)sub_B5D694(BackTaskAmountAdjuster_TypeInfo);
    BackTaskAmountAdjuster___ctor(v33, 0LL);
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_31;
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                                 (MyRoomStateMaterial_o *)this,
                                                                 0LL);
    if ( !v33 )
      goto LABEL_31;
    v34 = BackTaskAmountAdjuster__Execute(v33, (System_Collections_IEnumerator_o *)this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v34, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (MyRoomControl__InitMaterialOnBackground_d__283_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( this )
    {
      v18 = (System_Int32_array **)QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v18;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, v18, v20, v21, v22, v23, v24, v25);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_31:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__InitMaterialOnBackground_d__283_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  __int64 v26; // x1
  bool v27; // w21
  System_Func_bool__o *v28; // x22
  UnityEngine_WaitUntil_o *v29; // x19
  Il2CppObject **p__2__current; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BackTaskAmountAdjuster_o *v37; // x20
  System_Collections_IEnumerator_o *v38; // x0

  if ( (byte_42EAE72 & 1) == 0 )
  {
    sub_B5D5C4(&BackTaskAmountAdjuster_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MyRoomControl__InitServantMenu_b__286_0__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v20, v21, v22);
    byte_42EAE72 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v37 = (BackTaskAmountAdjuster_o *)sub_B5D694(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v37, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, 0LL);
          if ( !v37 )
            goto LABEL_17;
          v38 = BackTaskAmountAdjuster__Execute(v37, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v38, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_B5D69C(Instance, v26);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v27 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v28 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v28,
    (Il2CppObject *)_4__this,
    Method_MyRoomControl__InitServantMenu_b__286_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v29 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v29, v28, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v29, v31, v32, v33, v34, v35, v36);
  *((_DWORD *)p__2__current - 2) = 1;
  return v27;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__InitServantMenu_d__286_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl__LoadMultipleServant_d__366_o *v4; // x26
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  MyRoomControl___c__DisplayClass366_0_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppObject *v62; // x1
  struct StandFigureBack_array *v63; // x8
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct StandFigureBack_array *v71; // x8
  __int64 v72; // x27
  __int64 v73; // x21
  __int64 v74; // x25
  int v75; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v77; // x8
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v80; // w24
  int32_t v81; // w20
  MyRoomControl__LoadMultipleServant_d__366_o *v82; // x19
  int32_t Id; // w26
  int32_t Form; // w23
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct ServantScriptMultipleEntity_array *v91; // x22
  System_Int32_array **v92; // x26
  struct StandFigureBack_array *v93; // x8
  struct MyRoomControl_o *v94; // x25
  struct MyRoomControl___c__DisplayClass366_0_o *v95; // x28
  StandFigureBack_o *v96; // x26
  System_Action_o *_9__3; // x27
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v106; // x19
  int max_length; // w9
  unsigned int v108; // w23
  struct StandFigureBack_array *v109; // x8
  UnityEngine_Component_o *v110; // x8
  Il2CppObject *_2__current; // x21
  float v112; // s1
  float v113; // s2
  float v114; // s8
  float v115; // s9
  float v116; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v118; // x8
  float v119; // s10
  struct StandFigureBack_array *v120; // x9
  int v121; // s14
  int v122; // s15
  float v123; // s0
  float v124; // s2
  struct StandFigureBack_array *v125; // x8
  float v126; // s11
  float v127; // s12
  struct StandFigureBack_array *v128; // x8
  struct StandFigureBack_array *v129; // x8
  System_String_o *v130; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass366_0_o *_8__1; // x8
  MultipleViewComponent_o *multipleViewComponent; // x20
  Il2CppObject *v134; // x22
  System_Action_o *v135; // x21
  Il2CppObject *v136; // x20
  System_Func_bool__o *v137; // x21
  UnityEngine_WaitWhile_o *v138; // x20
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct ServantScriptMultipleEntity_array *v145; // x8
  ServantScriptMultipleEntity_o *v146; // x9
  ServantScriptMultipleEntity_o *v147; // x8
  Il2CppObject *v148; // x20
  System_Func_bool__o *v149; // x21
  UnityEngine_WaitWhile_o *v150; // x20
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x0
  __int64 v158; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-B8h]
  struct MyRoomControl___c__DisplayClass366_0_o **p__8__1; // [xsp+20h] [xbp-B0h]
  __int64 v161; // [xsp+28h] [xbp-A8h]
  __int64 v162; // [xsp+30h] [xbp-A0h]
  ServantScriptMultipleEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EAE73 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ServantScriptMultipleEntity___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__0__, v23, v24, v25);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__1__, v26, v27, v28);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__2__, v29, v30, v31);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__3__, v32, v33, v34);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass366_0_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v41, v42, v43);
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_B5D5C4(&StringLiteral_6768/*"FinishedFadeMultipleServant"*/, v44, v45, v46);
    byte_42EAE73 = 1;
  }
  entity = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_84;
    TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
    v106 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v108 = v106 - 4;
      if ( (int)v106 - 4 >= max_length )
        return 0;
      if ( v108 >= max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v106);
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)StandFigureBack__GetSvtStandFigure(
                                                              (StandFigureBack_o *)this,
                                                              0,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      v109 = _4__this->fields.multipleStandFigureBacks;
      if ( !v109 )
        goto LABEL_84;
      if ( v108 >= v109->max_length )
        goto LABEL_104;
      v110 = (UnityEngine_Component_o *)*((_QWORD *)&v109->obj.klass + v106);
      if ( !v110 )
        goto LABEL_84;
      _2__current = this->fields.__2__current;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(v110, 0LL);
      if ( !this )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v112 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL);
      if ( !_2__current )
        goto LABEL_84;
      v114 = v112;
      v115 = v113;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_2__current,
                                                              0LL);
      if ( !this )
        goto LABEL_84;
      LODWORD(v116) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      multipleEntities_5__2 = v4->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_84;
      if ( v108 >= multipleEntities_5__2->max_length )
        goto LABEL_104;
      v118 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v106);
      v119 = flt_32A5394[(_DWORD)v106 == 4] - v116;
      if ( v118 )
      {
        v120 = _4__this->fields.multipleStandFigureBacks;
        if ( !v120 )
          goto LABEL_84;
        if ( v108 >= v120->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v120->obj.klass + v106);
        if ( !this )
          goto LABEL_84;
        v121 = *(_DWORD *)(v118 + 28);
        v122 = *(_DWORD *)(v118 + 32);
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        *(UnityEngine_Vector3_o *)&v123 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v125 = _4__this->fields.multipleStandFigureBacks;
        if ( !v125 )
          goto LABEL_84;
        if ( v108 >= v125->max_length )
          goto LABEL_104;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v125->obj.klass + v106);
        if ( !this )
          goto LABEL_84;
        v126 = v123;
        v127 = v124;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_84;
        v114 = v114 + (float)v122;
        v119 = v119 + (float)v121;
        v165.fields.x = v126;
        v165.fields.y = v114;
        v165.fields.z = v127;
        v115 = v115 + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v165, 0LL);
      }
      v128 = _4__this->fields.multipleStandFigureBacks;
      if ( !v128 )
        goto LABEL_84;
      if ( v108 >= v128->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v128->obj.klass + v106);
      if ( this )
      {
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v129 = _4__this->fields.multipleStandFigureBacks;
        if ( v129 )
        {
          v130 = v108 == v129->max_length - 1 ? (System_String_o *)StringLiteral_6768/*"FinishedFadeMultipleServant"*/ : 0LL;
          v166.fields.x = v119;
          v166.fields.y = v114;
          v166.fields.z = v115;
          MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v166, v130, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v106;
          if ( multipleStandFigureBacks )
            continue;
        }
      }
      goto LABEL_84;
    }
  }
  if ( _1__state == 1 )
  {
    _8__1 = v4->fields.__8__1;
    v4->fields.__1__state = -1;
    if ( _8__1 )
    {
      _8__1->fields.wait = 1;
      if ( _4__this )
      {
        multipleViewComponent = _4__this->fields.multipleViewComponent;
        v134 = (Il2CppObject *)v4->fields.__8__1;
        v135 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v135, v134, Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__1__, 0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v135, 0LL);
          v136 = (Il2CppObject *)v4->fields.__8__1;
          v137 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v137,
            v136,
            Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__2__,
            (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
          v138 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v138, v137, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v138;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v4->fields.__2__current,
            (System_Int32_array **)v138,
            v139,
            v140,
            v141,
            v142,
            v143,
            v144);
          v4->fields.__1__state = 2;
          return 1;
        }
      }
    }
    goto LABEL_84;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v49 = (MyRoomControl___c__DisplayClass366_0_o *)sub_B5D694(MyRoomControl___c__DisplayClass366_0_TypeInfo);
  MyRoomControl___c__DisplayClass366_0___ctor(v49, 0LL);
  v4->fields.__8__1 = v49;
  p__8__1 = &v4->fields.__8__1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.__8__1,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_84;
  v62 = (Il2CppObject *)v4->fields.__4__this;
  this->fields.__2__current = v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v62,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
  v63 = _4__this->fields.multipleStandFigureBacks;
  if ( !v63 )
    goto LABEL_84;
  v64 = (System_Int32_array **)sub_B5D5DC(ServantScriptMultipleEntity___TypeInfo, v63->max_length);
  v4->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v64;
  p_multipleEntities_5__2 = &v4->fields._multipleEntities_5__2;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields._multipleEntities_5__2, v64, v65, v66, v67, v68, v69, v70);
  v71 = _4__this->fields.multipleStandFigureBacks;
  if ( !v71 )
    goto LABEL_84;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 32LL;
  while ( 1 )
  {
    v75 = v71->max_length;
    if ( (int)v73 >= v75 )
      break;
    if ( (unsigned int)v73 >= v75 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)v71->m_Items[v73];
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_84;
    if ( (unsigned int)v73 >= defaultMultipleServantPoses->max_length )
      goto LABEL_104;
    if ( !this )
      goto LABEL_84;
    v77 = (float *)((char *)defaultMultipleServantPoses + v72);
    v164.fields.x = flt_32A539C[(_DWORD)v73 == 0] + v77[8];
    v164.fields.y = v77[9] + 0.0;
    v164.fields.z = v77[10] + 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v164, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_84;
    if ( (unsigned int)v73 >= multipleServantUsrIds->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.myRoomData;
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            multipleServantUsrIds->m_Items[v73],
                                                            0LL);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_84;
    if ( (unsigned int)v73 >= multipleLimitCounts->max_length )
      goto LABEL_104;
    v80 = multipleLimitCounts->m_Items[v73 + 1];
    v81 = (int)this;
    v82 = v4;
    Id = ServantScriptMaster__getId((int32_t)this, v80, 0LL);
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !this )
      goto LABEL_84;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                            (ServantScriptMultipleMaster_o *)this,
                                                            &entity,
                                                            Id,
                                                            Form,
                                                            v73 + 1,
                                                            0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v91 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_84;
      v92 = (System_Int32_array **)entity;
      if ( entity )
      {
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_B5D684(entity, v91->obj.klass->_1.element_class);
        if ( !this )
        {
          v158 = sub_B5D6BC(0LL);
          sub_B5D668(v158, 0LL);
        }
      }
      if ( (unsigned int)v73 >= v91->max_length )
        goto LABEL_104;
      v91->m_Items[v73] = (ServantScriptMultipleEntity_o *)v92;
      sub_B5D560((BattleServantConfConponent_o *)((char *)v91 + v74), v92, v85, v86, v87, v88, v89, v90);
    }
    v161 = v74;
    v162 = v72;
    v93 = _4__this->fields.multipleStandFigureBacks;
    if ( !v93 )
      goto LABEL_84;
    if ( (unsigned int)v73 >= v93->max_length )
      goto LABEL_104;
    v94 = _4__this;
    v95 = *p__8__1;
    if ( *p__8__1 )
    {
      v96 = v93->m_Items[v73];
      _9__3 = v95->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v95,
          Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__3__,
          0LL);
        v95->fields.__9__3 = _9__3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v95->fields.__9__3,
          (System_Int32_array **)_9__3,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103);
      }
      if ( v96 )
      {
        StandFigureBack__SetMyRoomStandFigure(v96, v81, v80, 1, 0, Form, 10, _9__3, 0, 0LL);
        _4__this = v94;
        v71 = v94->fields.multipleStandFigureBacks;
        ++v73;
        v4 = v82;
        v74 = v161 + 8;
        v72 = v162 + 12;
        if ( v71 )
          continue;
      }
    }
    goto LABEL_84;
  }
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_B5D5DC(int___TypeInfo, 2LL);
  v145 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_84;
  if ( !v145->max_length )
    goto LABEL_104;
  v146 = v145->m_Items[0];
  if ( v146 )
  {
    if ( !this )
      goto LABEL_84;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_104;
    LODWORD(this->fields.__4__this) = v146->fields.depth;
    v145 = *p_multipleEntities_5__2;
    if ( !*p_multipleEntities_5__2 )
      goto LABEL_84;
  }
  if ( v145->max_length <= 1 )
    goto LABEL_104;
  v147 = v145->m_Items[1];
  if ( !v147 )
  {
    if ( this )
      goto LABEL_102;
LABEL_84:
    sub_B5D69C(this, method);
  }
  if ( !this )
    goto LABEL_84;
  if ( LODWORD(this->fields.__2__current) <= 1 )
    goto LABEL_104;
  HIDWORD(this->fields.__4__this) = v147->fields.depth;
LABEL_102:
  if ( LODWORD(this->fields.__2__current) < 2 )
  {
LABEL_104:
    v157 = sub_B5D6C8(this);
    sub_B5D668(v157, 0LL);
  }
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
    0LL);
  v148 = (Il2CppObject *)v4->fields.__8__1;
  v149 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v149,
    v148,
    Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v150 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v150, v149, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v150;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.__2__current,
    (System_Int32_array **)v150,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  result = 1;
  v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__LoadMultipleServant_d__366_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl__LoadPhotoCampaignServant_d__388_o *v4; // x19
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  struct MyRoomControl_o *_4__this; // x20
  MyRoomControl___c__DisplayClass388_0_o *v96; // x22
  struct MyRoomControl___c__DisplayClass388_0_o **p__8__1; // x21
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v113; // w23
  int32_t Id; // w0
  int32_t v115; // w24
  bool v116; // w21
  int32_t photoCampaignType; // w27
  StandFigureBack_o *photoCampaignStandFigureBack; // x24
  int32_t formId_5__3; // w20
  Il2CppObject *_8__1; // x26
  System_Action_o *v121; // x25
  Il2CppObject *v122; // x20
  System_Func_bool__o *v123; // x22
  UnityEngine_WaitWhile_o *v124; // x20
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct ServantPhotoEntity_FaceData_o *faceData_5__4; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl___c__DisplayClass388_0_o *v134; // x8
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  Il2CppObject *v136; // x22
  System_Action_o *v137; // x21
  Il2CppObject *v138; // x20
  System_Func_bool__o *v139; // x21
  UnityEngine_WaitWhile_o *v140; // x20
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  int v147; // w8
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x1
  BattleServantConfConponent_o *p_photoCampaignFaceList; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  struct ServantPhotoEntity_FaceData_array *v162; // x8
  __int64 photoCampaignFaceListIndex; // x9
  System_Int32_array **v164; // x1
  BattleServantConfConponent_o *p_faceData_5__4; // x19
  ServantPhotoEntity_FaceData_o *klass; // x21
  Il2CppObject *classBoardSkillObj; // x22
  System_Action_o *v168; // x23
  Il2CppObject *v169; // x20
  System_Func_bool__o *v170; // x21
  UnityEngine_WaitWhile_o *v171; // x20
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  struct MyRoomControl___c__DisplayClass388_0_o *v178; // x8
  Il2CppObject *v179; // x22
  System_Action_o *v180; // x21
  Il2CppObject *v181; // x20
  System_Func_bool__o *v182; // x21
  UnityEngine_WaitWhile_o *v183; // x20
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v191; // x8
  UnityEngine_GameObject_o *v192; // x0
  UnityEngine_GameObject_o *v193; // x19
  struct StandFigureBack_o *v194; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  int size; // w22
  __int64 v197; // x21
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  __int64 *v204; // x23
  System_Int32_array **v205; // x0
  __int64 *v206; // x24
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  __int64 v213; // x8
  __int64 v214; // x9
  __int64 v215; // x9
  bool v216; // cc
  MyRoomControl__LoadPhotoCampaignServant_d__388_o *v217; // x22
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v225; // x0
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__388_4; // x22
  Il2CppObject *v228; // x23
  struct MyRoomControl___c_StaticFields *v229; // x0
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v236; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v237; // x0
  struct MyRoomControl___c__DisplayClass388_0_o *v238; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__388_o *v239; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v241; // x23
  UIStandFigureR_o *v242; // x20
  System_Action_o *v243; // x22
  Il2CppObject *v244; // x20
  System_Func_bool__o *v245; // x21
  UnityEngine_WaitWhile_o *v246; // x20
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  __int64 v254; // x0
  __int64 v255; // x0
  float scale; // [xsp+1Ch] [xbp-54h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v258; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EAE74 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantPhotoMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v20, v21, v22);
    sub_B5D5C4(&ServantPhotoEntity_FaceData___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantPhotoEntity_FaceData_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_ServantPhotoEntity_FaceData__IEnumerable_int____ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v38, v39, v40);
    sub_B5D5C4(&int___TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__388_4__, v47, v48, v49);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__0__, v50, v51, v52);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__10__, v53, v54, v55);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__1__, v56, v57, v58);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__2__, v59, v60, v61);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__3__, v62, v63, v64);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__5__, v65, v66, v67);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__6__, v68, v69, v70);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__7__, v71, v72, v73);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__8__, v74, v75, v76);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__9__, v77, v78, v79);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass388_0_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&MyRoomControl___c_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v89, v90, v91);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B5D5C4(&StringLiteral_6769/*"FinishedFadePhotoServant"*/, v92, v93, v94);
    byte_42EAE74 = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v96 = (MyRoomControl___c__DisplayClass388_0_o *)sub_B5D694(MyRoomControl___c__DisplayClass388_0_TypeInfo);
      MyRoomControl___c__DisplayClass388_0___ctor(v96, 0LL);
      p__8__1 = &v4->fields.__8__1;
      v4->fields.__8__1 = v96;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__8__1,
        (System_Int32_array **)v96,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_84;
      v110 = (System_Int32_array **)v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v110;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields, v110, v104, v105, v106, v107, v108, v109);
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
      v258.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v258.fields.x = flt_32A53A4[!_4__this->fields._IsMasterRight_k__BackingField]
                    + _4__this->fields.defaultPhotoServantPos.fields.x;
      v258.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v258, 0LL);
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
      v113 = SvtId;
      Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
      v4->fields._imageId_5__2 = Id;
      v115 = Id;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      v116 = 1;
      v4->fields._formId_5__3 = UIStandFigureRender__GetForm(v115, 1, -1, 0LL);
      photoCampaignType = _4__this->fields.photoCampaignType;
      _4__this->fields.photoCampaignServantImageId = v4->fields._imageId_5__2;
      photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
      formId_5__3 = v4->fields._formId_5__3;
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      v121 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v121,
        _8__1,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_84;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v113,
        photoCampaignLimitCount,
        1,
        0,
        formId_5__3,
        10,
        v121,
        photoCampaignType == 1,
        0LL);
      v122 = (Il2CppObject *)v4->fields.__8__1;
      v123 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v123,
        v122,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__1__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v124 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v124, v123, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v124;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__2__current,
        (System_Int32_array **)v124,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v4->fields.__1__state = 1;
      return v116;
    case 1:
      v178 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v178 )
        goto LABEL_84;
      v178->fields.flag = 1;
      v179 = (Il2CppObject *)v4->fields.__8__1;
      v180 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v180,
        v179,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__2__,
        0LL);
      if ( !_4__this )
        goto LABEL_84;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v180, 0LL);
      v181 = (Il2CppObject *)v4->fields.__8__1;
      v182 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v182,
        v181,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__3__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v183 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v183, v182, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v183;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__2__current,
        (System_Int32_array **)v183,
        v184,
        v185,
        v186,
        v187,
        v188,
        v189);
      v147 = 2;
      goto LABEL_81;
    case 2:
      v4->fields.__1__state = -1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                                   &entity,
                                                                   v4->fields._imageId_5__2,
                                                                   (const MethodInfo_23FB094 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)entity;
        if ( !entity )
          goto LABEL_84;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)ServantPhotoEntity__GetFaceList(
                                                                     (ServantPhotoEntity_o *)entity,
                                                                     v4->fields._formId_5__3,
                                                                     0LL);
        if ( !_4__this )
          goto LABEL_84;
        v154 = (System_Int32_array **)this;
        p_photoCampaignFaceList = (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignFaceList;
        _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v154;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_84;
        v194 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v194 )
          goto LABEL_84;
        standFigureCollectList = v194->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_84;
        size = standFigureCollectList->fields._size;
        v197 = sub_B5D694(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v197, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B5D5DC(int___TypeInfo, (unsigned int)size);
        if ( !v197 )
          goto LABEL_84;
        *(_QWORD *)(v197 + 16) = this;
        v204 = (__int64 *)(v197 + 16);
        sub_B5D560(
          (BattleServantConfConponent_o *)(v197 + 16),
          (System_Int32_array **)this,
          v198,
          v199,
          v200,
          v201,
          v202,
          v203);
        v205 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)size);
        v206 = (__int64 *)(v197 + 24);
        *(_QWORD *)(v197 + 24) = v205;
        sub_B5D560((BattleServantConfConponent_o *)(v197 + 24), v205, v207, v208, v209, v210, v211, v212);
        if ( size >= 1 )
        {
          v213 = 8LL;
          while ( 1 )
          {
            v214 = *v204;
            if ( !*v204 )
              break;
            if ( v213 - 8 >= (unsigned __int64)*(unsigned int *)(v214 + 24) )
              goto LABEL_85;
            *(_DWORD *)(v214 + 4 * v213) = 0;
            v215 = *v206;
            if ( !*v206 )
              break;
            if ( v213 - 8 >= (unsigned __int64)*(unsigned int *)(v215 + 24) )
              goto LABEL_85;
            v216 = v213 - 7 < size;
            *(_DWORD *)(v215 + 4 * v213++) = v4->fields._formId_5__3;
            if ( !v216 )
              goto LABEL_65;
          }
LABEL_84:
          sub_B5D69C(this, method);
        }
LABEL_65:
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B5D5DC(
                                                                     ServantPhotoEntity_FaceData___TypeInfo,
                                                                     1LL);
        if ( !this )
          goto LABEL_84;
        v217 = this;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)sub_B5D684(v197, this->klass->_1.element_class);
        if ( !this )
        {
          v255 = sub_B5D6BC(0LL);
          sub_B5D668(v255, 0LL);
        }
        if ( !LODWORD(v217->fields.__2__current) )
        {
LABEL_85:
          v254 = sub_B5D6C8(this);
          sub_B5D668(v254, 0LL);
        }
        v217->fields.__4__this = (struct MyRoomControl_o *)v197;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v217->fields.__4__this,
          (System_Int32_array **)v197,
          v218,
          v219,
          v220,
          v221,
          v222,
          v223);
        p_photoCampaignFaceList = (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignFaceList;
        v154 = (System_Int32_array **)v217;
        _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v217;
      }
      sub_B5D560(p_photoCampaignFaceList, v154, v148, v149, v150, v151, v152, v153);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v225 = MyRoomControl___c_TypeInfo;
      if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v225 = MyRoomControl___c_TypeInfo;
      }
      static_fields = v225->static_fields;
      _9__388_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__388_4;
      if ( !_9__388_4 )
      {
        if ( (BYTE3(v225->vtable._0_Equals.methodPtr) & 4) != 0 && !v225->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v225);
          static_fields = MyRoomControl___c_TypeInfo->static_fields;
        }
        v228 = (Il2CppObject *)static_fields->__9;
        _9__388_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__388_4,
          v228,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__388_4__,
          (const MethodInfo_2C3041C *)Method_System_Func_ServantPhotoEntity_FaceData__IEnumerable_int____ctor__);
        v229 = MyRoomControl___c_TypeInfo->static_fields;
        v229->__9__388_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__388_4;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v229->__9__388_4,
          (System_Int32_array **)_9__388_4,
          v230,
          v231,
          v232,
          v233,
          v234,
          v235);
      }
      v236 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                    photoCampaignFaceList,
                                                                    (System_Func_TSource__IEnumerable_TResult___o *)_9__388_4,
                                                                    (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v237 = System_Linq_Enumerable__Distinct_int_(
               v236,
               (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v237,
                                                                   (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
      v238 = v4->fields.__8__1;
      if ( !v238 )
        goto LABEL_84;
      v238->fields.flag = 1;
      v239 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_84;
      SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
      v241 = (Il2CppObject *)v4->fields.__8__1;
      v242 = SvtStandFigure;
      v243 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v243,
        v241,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__5__,
        0LL);
      if ( !v242 )
        goto LABEL_84;
      UIStandFigureR__PreloadFormAssets(v242, (System_Collections_Generic_List_int__o *)v239, v243, 0LL);
      v244 = (Il2CppObject *)v4->fields.__8__1;
      v245 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v245,
        v244,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__6__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v246 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v246, v245, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v246;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__2__current,
        (System_Int32_array **)v246,
        v247,
        v248,
        v249,
        v250,
        v251,
        v252);
      v147 = 3;
LABEL_81:
      v4->fields.__1__state = v147;
      return 1;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v162 = _4__this->fields.photoCampaignFaceList;
      if ( !v162 )
        goto LABEL_84;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v162->max_length )
        goto LABEL_85;
      v164 = (System_Int32_array **)v162->m_Items[photoCampaignFaceListIndex];
      v4->fields._faceData_5__4 = (struct ServantPhotoEntity_FaceData_o *)v164;
      p_faceData_5__4 = (BattleServantConfConponent_o *)&v4->fields._faceData_5__4;
      sub_B5D560(p_faceData_5__4, v164, v156, v157, v158, v159, v160, v161);
      klass = (ServantPhotoEntity_FaceData_o *)p_faceData_5__4->klass;
      classBoardSkillObj = (Il2CppObject *)p_faceData_5__4[-1].fields.classBoardSkillObj;
      v168 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v168,
        classBoardSkillObj,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__7__,
        0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, klass, v168, 0LL);
      v169 = (Il2CppObject *)p_faceData_5__4[-1].fields.classBoardSkillObj;
      v170 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v170,
        v169,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__8__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v171 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v171, v170, 0LL);
      p_faceData_5__4[-1].fields.BattleAssetUIAtlas = (struct UIAtlas_o *)v171;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)p_faceData_5__4 - 32),
        (System_Int32_array **)v171,
        v172,
        v173,
        v174,
        v175,
        v176,
        v177);
      LODWORD(p_faceData_5__4[-1].fields.data) = 4;
      return 1;
    case 4:
      faceData_5__4 = v4->fields._faceData_5__4;
      v4->fields.__1__state = -1;
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
        v4->fields._imageId_5__2,
        multiForm->m_Items[1],
        &v4->fields._svtMovePos_5__5,
        &scale,
        0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScale_32432652(gameObject, scale, 0LL);
      v134 = v4->fields.__8__1;
      if ( !v134 )
        goto LABEL_84;
      v134->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v136 = (Il2CppObject *)v4->fields.__8__1;
      v137 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v137,
        v136,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__9__,
        0LL);
      if ( !photoCampaignComponent )
        goto LABEL_84;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v137, 0LL);
      v138 = (Il2CppObject *)v4->fields.__8__1;
      v139 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v139,
        v138,
        Method_MyRoomControl___c__DisplayClass388_0__LoadPhotoCampaignServant_b__10__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v140 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v140, v139, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v140;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__2__current,
        (System_Int32_array **)v140,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      v147 = 5;
      goto LABEL_81;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_84;
      TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
      v191 = _4__this->fields.titleInfo;
      if ( !v191 )
        goto LABEL_84;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)v191->fields.headerBgImg;
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
      v192 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(
        _4__this,
        v192,
        v4->fields._svtMovePos_5__5,
        (System_String_o *)StringLiteral_6769/*"FinishedFadePhotoServant"*/,
        0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__388_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_84;
      v193 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v193, PhotoCampaignMasterPosition, 0LL, 0LL);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__LoadPhotoCampaignServant_d__388_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  UILabel_o *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v21; // x22
  bool v22; // w21
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_WaitForSeconds_o *v24; // x19
  BattleServantConfConponent_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleServantConfConponent_o *p__2__current; // x20
  int32_t v33; // w1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  UILabel_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_42EAE75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    this = (MyRoomControl__StartCameraEffect_d__399_o *)sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v15, v16, v17);
    byte_42EAE75 = 1;
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
    v33 = _4__this->fields._IsOnlyServant_k__BackingField ? 362 : 870;
    UIWidget__set_width((UIWidget_o *)this, v33, 0LL);
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
    v39 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                   photoCampaignCameraEffect,
                                   transform,
                                   (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v39;
    sub_B5D560(
      (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignInstantiateCameraEffect,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = -1;
    sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    photoCampaignShutterEffect,
    v21,
    (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignProduction;
  if ( !this
    || (v22 = 1,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (MyRoomControl__StartCameraEffect_d__399_o *)_4__this->fields.photoCampaignFadeSprite) == 0LL) )
  {
LABEL_34:
    sub_B5D69C(this, method);
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_UIWidget_(
    v23,
    (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v24 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v24, 0.066, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v24;
  v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(v25, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)&v25[-1].fields.isOpenAfter = 1;
  return v22;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__StartCameraEffect_d__399_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F88 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomControl___c_TypeInfo, v1, v2, v3);
    byte_42E5F88 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MyRoomControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MyRoomControl___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__237_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5F8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F8A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__317_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5F8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F8B = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ManagementManager__reboot(Instance, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__388_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_B5D69C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void __fastcall MyRoomControl___c___initMyRoom_b__215_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__236_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5F89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F89 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass239_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22

  v4 = this;
  if ( (byte_42E5F8C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (MyRoomControl___c__DisplayClass239_0_o *)sub_B5D5C4(
                                                       &Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__1__,
                                                       v5,
                                                       v6,
                                                       v7);
    byte_42E5F8C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass239_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  this[1].fields.__9__2 = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  sub_B5D560(&this[1].fields.__9__2);
  this = (MyRoomControl___c__DisplayClass239_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[18].fields.__9__1, 0, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass239_0_o *)v10->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v10->fields.isExistVoiceData, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass239_0_o *)v11->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v11->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass239_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].monitor) )
    MyRoomControl__setNormalFace_27626976((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_20;
  favoriteChangeComp = v12->fields.favoriteChangeComp;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(&v4->fields.__9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_B5D69C(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass239_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass239_0_o *this,
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
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  struct MyRoomControl_o *v13; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
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

  if ( (byte_42E5F8D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__2__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11522/*"ReleaseTouch"*/, v8, v9, v10);
    byte_42E5F8D = 1;
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
      (System_String_o *)StringLiteral_11522/*"ReleaseTouch"*/,
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
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          standFigureBack = v13->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass239_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B5D560(&this->fields.__9__2);
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
    sub_B5D69C(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_30;
  v26->fields.isSvtLoading = 0;
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
    sub_B5D69C(_4__this, v3);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass241_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomControl_o *v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct MyRoomControl_o *v15; // x8
  struct MyRoomControl_o *v16; // x8
  struct MyRoomControl_o *v17; // x8
  struct MyRoomControl_o *v18; // x8
  int monitor; // w8
  struct MyRoomControl_o *v20; // x8
  StandFigureBack_o *v21; // x20
  System_Action_o *_9__1; // x22
  struct MyRoomControl_o *v23; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v25; // x8
  float v26; // s8
  int v27; // s1
  struct MyRoomControl_o *v28; // x8
  int v29; // s9
  int v30; // s2
  float v31; // s0
  int v32; // s1
  struct MyRoomControl_o *v33; // x8

  v4 = this;
  if ( (byte_42E5F8E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__1__, v5, v6, v7);
    this = (MyRoomControl___c__DisplayClass241_0_o *)sub_B5D5C4(&StringLiteral_11522/*"ReleaseTouch"*/, v8, v9, v10);
    byte_42E5F8E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_46;
  this[2].klass = (MyRoomControl___c__DisplayClass241_0_c *)standFigureBack->fields.standFigureCollectList;
  sub_B5D560(&this[2]);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v13->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v14->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v15->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v16->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v17->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v18->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[21].fields.__9__1) )
    MyRoomControl__setNormalFace_27626976((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  monitor = (int)this[21].monitor;
  if ( monitor == 1 )
  {
    this = (MyRoomControl___c__DisplayClass241_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v23 = v4->fields.__4__this;
    if ( !v23 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)v23->fields.standFigureBack;
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
    v25 = v4->fields.__4__this;
    if ( !v25 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)v25->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v26 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass241_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v28 = v4->fields.__4__this;
    if ( !v28 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass241_0_o *)v28->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v29 = v27;
    this = (MyRoomControl___c__DisplayClass241_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v31 = -v26;
    v32 = v29;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].fields.__4__this,
      *(UnityEngine_Vector3_o *)(&v30 - 2),
      (System_String_o *)StringLiteral_11522/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !monitor )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v20 = v4->fields.__4__this;
    if ( v20 )
    {
      v21 = v20->fields.standFigureBack;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass241_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v4->fields.__9__1 = _9__1;
        sub_B5D560(&v4->fields.__9__1);
      }
      if ( v21 )
      {
        StandFigureBack__Fadein(v21, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_B5D69C(this, method);
  }
  ActionExtensions__Call(v4->fields.end_act, 0LL);
  v33 = v4->fields.__4__this;
  if ( !v33 )
    goto LABEL_46;
  v33->fields.isSvtLoading = 0;
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
    sub_B5D69C(_4__this, v3);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass248_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v6; // x8
  struct MyRoomControl_o *v7; // x8

  v4 = this;
  if ( (byte_42E5F8F & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass248_0_o *)sub_B5D5C4(&StringLiteral_8491/*"LOAD_END"*/, (_DWORD)method, v2, v3);
    byte_42E5F8F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass248_0_o *)_4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v6 = v4->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass248_0_o *)v6->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v4->fields.svtVoiceEnt, 0LL),
        (v7 = v4->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass248_0_o *)v7->fields.myRoomFsm) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8491/*"LOAD_END"*/, 0LL);
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
    sub_B5D69C(this, method);
  }
  v5->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass310_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass310_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *callback; // x0

  if ( (byte_42E5F90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F90 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass329_0_o *v4; // x19
  float v5; // s1
  float v6; // s2
  struct MyRoomControl_o *v7; // x8
  float v8; // s8
  float v9; // s9
  struct MyRoomControl_o *v10; // x8
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
  if ( !bondsStandFigureBack )
    goto LABEL_14;
  v4 = this;
  this = (MyRoomControl___c__DisplayClass329_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  this[2].klass = (MyRoomControl___c__DisplayClass329_0_c *)bondsStandFigureBack->fields.standFigureCollectList;
  sub_B5D560(&this[2]);
  this = (MyRoomControl___c__DisplayClass329_0_o *)v4->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass329_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v7 = v4->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass329_0_o *)v7->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v8 = v5;
  v9 = v6;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10
    || (this = (MyRoomControl___c__DisplayClass329_0_o *)v10->fields.bondsStandFigureBack) == 0LL
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
    sub_B5D69C(this, method);
  }
  v11.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v11.fields.y = v8;
  v11.fields.z = v9;
  GameObjectExtensions__SetLocalPosition(v4->fields.bondsSvtObj, v11, 0LL);
  v4->fields.createStandEnd = 1;
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  AssetData_o *v4; // x20
  MyRoomControl___c__DisplayClass381_0_o *v5; // x19
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct MyRoomControl_o *v63; // x8
  struct MyRoomControl_o *v64; // x21
  struct MyRoomControl_o *v65; // x21
  struct MyRoomControl_o *v66; // x25
  struct MyRoomControl_o *v67; // x8
  UILabel_o *v68; // x21
  UnityEngine_Transform_o *transform; // x22
  struct MyRoomControl_o *v70; // x8
  struct MyRoomControl_o *v71; // x21
  struct MyRoomControl_o *v72; // x8
  struct MyRoomControl_o *v73; // x22
  struct MyRoomControl_o *v74; // x8
  UILabel_o *v75; // x21
  UnityEngine_Transform_o *v76; // x0
  struct MyRoomControl_o *v77; // x8
  struct MyRoomControl_o *v78; // x21

  v4 = assetData;
  v5 = this;
  if ( (byte_42E5F91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_19689/*"img_bg_shutter"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10839/*"Polaroid_img_frame_wide"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_8576/*"LayerChangeButton"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10773/*"PhotoSettingButton"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_9059/*"MasterEquipSettingDialog"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_5466/*"DownloadPhotoCampaignAtlas"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16946/*"bit_camera_shutter"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_16945/*"bit_camera_iconblink"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_10837/*"Polaroid_btn_shutter"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_10838/*"Polaroid_img_frame"*/, v54, v55, v56);
    this = (MyRoomControl___c__DisplayClass381_0_o *)sub_B5D5C4(&StringLiteral_10774/*"PhotoTargetSelectDialog"*/, v57, v58, v59);
    byte_42E5F91 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  _4__this->fields.photoCampaignAssetData = v4;
  sub_B5D560(&_4__this->fields.photoCampaignAssetData);
  if ( !v4 )
    goto LABEL_45;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             v4,
                                                             (System_String_o *)StringLiteral_5466/*"DownloadPhotoCampaignAtlas"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      v63 = v5->fields.__4__this;
      if ( !v63 )
        goto LABEL_45;
      v63->fields.photoCampaignAtlas = (struct UIAtlas_o *)Component_srcLineSprite;
      sub_B5D560(&v63->fields.photoCampaignAtlas);
    }
  }
  this = (MyRoomControl___c__DisplayClass381_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].fields.callBack,
    (System_String_o *)StringLiteral_10838/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].klass,
    (System_String_o *)StringLiteral_10839/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].klass,
    (System_String_o *)StringLiteral_10837/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_45;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].monitor,
    (System_String_o *)StringLiteral_19689/*"img_bg_shutter"*/,
    0LL);
  v64 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     v4,
                                                     (System_String_o *)StringLiteral_16945/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v64 )
    goto LABEL_45;
  v64->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v64->fields.photoCampaignCameraEffect);
  v65 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     v4,
                                                     (System_String_o *)StringLiteral_16946/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v65 )
    goto LABEL_45;
  v65->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v65->fields.photoCampaignShutterEffect);
  v66 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10774/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v67 = v5->fields.__4__this;
  if ( !v67 )
    goto LABEL_45;
  v68 = (UILabel_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v67->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_45;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     v68,
                                                     transform,
                                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v66 )
    goto LABEL_45;
  v66->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  sub_B5D560(&v66->fields.photoTargetSelectDialog);
  v70 = v5->fields.__4__this;
  if ( !v70 )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v70->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_45;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v71 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10773/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v72 = v5->fields.__4__this;
  if ( !v72 )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     (UILabel_o *)this,
                                                     v72->fields.panelRoot,
                                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v71 )
    goto LABEL_45;
  v71->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  sub_B5D560(&v71->fields.photoSettingButtonComponent);
  assetData = (AssetData_o *)v5->fields.__4__this;
  if ( !assetData )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)assetData[14].monitor;
  if ( !this )
    goto LABEL_45;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v73 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     v4,
                                                     (System_String_o *)StringLiteral_9059/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v74 = v5->fields.__4__this;
  if ( !v74 )
    goto LABEL_45;
  v75 = (UILabel_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v74->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_45;
  v76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     v75,
                                                     v76,
                                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
    goto LABEL_45;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v73 )
    goto LABEL_45;
  v73->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  sub_B5D560(&v73->fields.masterEquipSettingDialog);
  v77 = v5->fields.__4__this;
  if ( !v77
    || (this = (MyRoomControl___c__DisplayClass381_0_o *)v77->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v78 = v5->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                           v4,
                                                           (System_String_o *)StringLiteral_8576/*"LayerChangeButton"*/,
                                                           (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        !v78)
    || (v78->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_B5D560(&v78->fields.photoLayerChangeObj),
        (this = (MyRoomControl___c__DisplayClass381_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v5->fields.callBack, 0LL);
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
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass382_0_o *v5; // x20
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
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v19; // x8
  struct EquipEntity_o *equipEnt; // x9
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *masterMaleEquipTexture; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v5 = this;
  if ( (byte_42E5F92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Add__, v12, v13, v14);
    this = (MyRoomControl___c__DisplayClass382_0_o *)sub_B5D5C4(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
    byte_42E5F92 = 1;
  }
  _4__this = v5->fields.__4__this;
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
      v19 = v5->fields.__4__this;
      if ( v19 )
      {
        equipEnt = v5->fields.equipEnt;
        if ( equipEnt )
        {
          masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v19->fields.masterMaleEquipTexture;
          v23 = *(_QWORD *)&equipEnt->fields.id.fields.currentCryptoKey;
          v22 = *(_QWORD *)&equipEnt->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v23;
          *(_QWORD *)&v25.fields.fakeValue = v22;
          this = (MyRoomControl___c__DisplayClass382_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                             v25,
                                                             0LL);
          if ( assetData )
          {
            v24 = (int)this;
            this = (MyRoomControl___c__DisplayClass382_0_o *)AssetData__GetObject_Texture2D_(
                                                               assetData,
                                                               (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___);
            if ( masterMaleEquipTexture )
            {
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                masterMaleEquipTexture,
                v24,
                (WarBoardAIRoute_RouteData_o *)this,
                (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(this, assetData);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30657564(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass382_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass382_0_o *v5; // x20
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
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v19; // x8
  struct EquipEntity_o *equipEnt; // x9
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *masterFemaleEquipTexture; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v5 = this;
  if ( (byte_42E5F93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Add__, v12, v13, v14);
    this = (MyRoomControl___c__DisplayClass382_0_o *)sub_B5D5C4(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
    byte_42E5F93 = 1;
  }
  _4__this = v5->fields.__4__this;
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
      v19 = v5->fields.__4__this;
      if ( v19 )
      {
        equipEnt = v5->fields.equipEnt;
        if ( equipEnt )
        {
          masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v19->fields.masterFemaleEquipTexture;
          v23 = *(_QWORD *)&equipEnt->fields.id.fields.currentCryptoKey;
          v22 = *(_QWORD *)&equipEnt->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v23;
          *(_QWORD *)&v25.fields.fakeValue = v22;
          this = (MyRoomControl___c__DisplayClass382_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                             v25,
                                                             0LL);
          if ( assetData )
          {
            v24 = (int)this;
            this = (MyRoomControl___c__DisplayClass382_0_o *)AssetData__GetObject_Texture2D_(
                                                               assetData,
                                                               (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___);
            if ( masterFemaleEquipTexture )
            {
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                masterFemaleEquipTexture,
                v24,
                (WarBoardAIRoute_RouteData_o *)this,
                (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(this, assetData);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30657564(assetData, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass388_0_o *v4; // x19
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
  struct MyRoomControl_o *_4__this; // x22
  UILabel_o *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v26; // x0
  Il2CppObject *v27; // x21
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *namespaze; // x20
  EventDelegate_Callback_o *v30; // x22
  EventDelegate_o *v31; // x21

  v4 = this;
  if ( (byte_42E5F94 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_MyRoomControl_OnClickPhotoServant__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v17, v18, v19);
    this = (MyRoomControl___c__DisplayClass388_0_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E5F94 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      photoLayerChangeObj,
                                      transform,
                                      (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                                   v26,
                                                                   (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  sub_B5D560(&_4__this->fields.photoSvtTouchPress);
  v27 = (Il2CppObject *)v4->fields.__4__this;
  if ( !v27
    || (klass = v27[83].klass) == 0LL
    || (namespaze = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass->_1.namespaze,
        v30 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v30, v27, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL),
        v31 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo),
        EventDelegate___ctor_29822308(v31, v30, 0LL),
        !namespaze) )
  {
LABEL_14:
    sub_B5D69C(this, method);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    namespaze,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  v4->fields.flag = 0;
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass389_0_o *v4; // x19
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
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v27; // x8
  struct MyRoomControl_o *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v30; // x20
  UnityEngine_GameObject_o *v31; // x0
  struct MyRoomControl_o *v32; // x8
  struct MyRoomControl_o *v33; // x22
  UILabel_o *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v36; // x0
  Il2CppObject *v37; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  EventDelegate_Callback_o *v40; // x22
  EventDelegate_o *v41; // x21
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E5F95 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___, v8, v9, v10);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomControl_OnclickPhotoMaster__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v20, v21, v22);
    this = (MyRoomControl___c__DisplayClass389_0_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42E5F95 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_23;
  if ( !this )
    goto LABEL_23;
  v42.fields.y = v27->fields.defaultPhotoServantPos.fields.y + 0.0;
  v42.fields.x = flt_32A00E8[!v27->fields._IsMasterRight_k__BackingField] + v27->fields.defaultPhotoServantPos.fields.x;
  v42.fields.z = v27->fields.defaultPhotoServantPos.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v42, 0LL);
  v28 = v4->fields.__4__this;
  if ( !v28 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v28->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(gameObject, 0.9, 0LL);
  v30 = v4->fields.__4__this;
  if ( !v30 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v30->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30->fields.photoMasterPanel = (struct UIPanel_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                       v31,
                                                       (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  sub_B5D560(&v30->fields.photoMasterPanel);
  v32 = v4->fields.__4__this;
  if ( !v32 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v32->fields.photoMasterPanel;
  if ( !this )
    goto LABEL_23;
  UIPanel__set_depth((UIPanel_o *)this, 15, 0LL);
  v33 = v4->fields.__4__this;
  if ( !v33 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v33->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_23;
  photoLayerChangeObj = (UILabel_o *)v33->fields.photoLayerChangeObj;
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
  v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      photoLayerChangeObj,
                                      transform,
                                      (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v33->fields.photoMasterTouchPress = (struct UITouchPress_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                                 v36,
                                                                 (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  sub_B5D560(&v33->fields.photoMasterTouchPress);
  v37 = (Il2CppObject *)v4->fields.__4__this;
  if ( !v37
    || (monitor = v37[83].monitor) == 0LL
    || (v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)monitor + 3),
        v40 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v40, v37, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL),
        v41 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo),
        EventDelegate___ctor_29822308(v41, v40, 0LL),
        !v39) )
  {
LABEL_23:
    sub_B5D69C(this, method);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v39,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  ActionExtensions__Call(v4->fields.func, 0LL);
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
    v12 = sub_B5D6C8(_4__this);
    sub_B5D668(v12, 0LL);
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
        GameObjectExtensions__SetLocalScale_32432652(v9, scale, 0LL),
        (v10 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(_4__this, method);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass412_0_o *v4; // x21
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *_4__this; // x23
  UIMasterFigureTextureOld_o *monitor; // x19
  int32_t genderType; // w20
  int32_t equipId; // w21
  System_Action_o *v12; // x22

  v4 = this;
  if ( (byte_42EAE6D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (MyRoomControl___c__DisplayClass412_0_o *)sub_B5D5C4(
                                                       &Method_MyRoomControl__ChangeMasterSetting_b__412_2__,
                                                       v5,
                                                       v6,
                                                       v7);
    byte_42EAE6D = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (UIMasterFigureTextureOld_o *)_4__this[80].monitor,
        genderType = v4->fields.genderType,
        equipId = v4->fields.equipId,
        v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v12, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__412_2__, 0LL),
        !monitor) )
  {
    sub_B5D69C(this, method);
  }
  UIMasterFigureTextureOld__SetCharacter(monitor, 2, genderType, equipId, v12, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass413_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x0
  struct MyRoomControl_o *v12; // x8
  float z; // w10
  struct MyRoomControl_o *v14; // x8
  MyRoomControl_o *v15; // x8
  UnityEngine_GameObject_o *v16; // x19
  CommonUI_o *v17; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EAE6E & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (MyRoomControl___c__DisplayClass413_0_o *)sub_B5D5C4(
                                                       &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                       v5,
                                                       v6,
                                                       v7);
    byte_42EAE6E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, v4->fields.svtMovePos, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)v10->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_16;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(v11, v4->fields.svtMoveScale, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_16;
  z = v4->fields.svtMovePos.fields.z;
  *(_QWORD *)&v12->fields.currentPhotoServantPos.fields.x = *(_QWORD *)&v4->fields.svtMovePos.fields.x;
  v12->fields.currentPhotoServantPos.fields.z = z;
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)v14->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_16;
  this = (MyRoomControl___c__DisplayClass413_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  v16 = (UnityEngine_GameObject_o *)this;
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v15, 0LL);
  GameObjectExtensions__SetLocalPosition(v16, PhotoCampaignMasterPosition, 0LL);
  this = (MyRoomControl___c__DisplayClass413_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v17 )
LABEL_16:
    sub_B5D69C(this, method);
  CommonUI__maskFadein(v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  CommonUI_o *Instance; // x0
  __int64 v23; // x1
  bool v24; // w21
  System_Func_bool__o *v25; // x22
  UnityEngine_WaitUntil_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42EAE76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MyRoomControl__initMaterial_b__284_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v17, v18, v19);
    byte_42EAE76 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), !_4__this)
      || (Instance = (CommonUI_o *)_4__this[2].klass) == 0LL )
    {
LABEL_13:
      sub_B5D69C(Instance, v23);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v24 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v25 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v25,
    _4__this,
    Method_MyRoomControl__initMaterial_b__284_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v26 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v26, v25, 0LL);
  this->fields.__2__current = (Il2CppObject *)v26;
  p__2__current = &this->fields.__2__current;
  sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
  *((_DWORD *)p__2__current - 2) = 1;
  return v24;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__initMaterial_d__284_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomControl__svtVoicePlayAct_d__329_o *v4; // x19
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  struct MyRoomControl_o *_4__this; // x20
  MyRoomControl___c__DisplayClass329_0_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  CommonUI_o *v68; // x21
  Il2CppObject **p__8__1; // x27
  System_Int32_array **v70; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  bool result; // w0
  System_Collections_Generic_List_VoiceCondType_Type__o *v79; // x21
  int32_t *item; // x8
  ServantVoiceEntity_o *v81; // x22
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  Il2CppObject *v89; // x23
  struct MaterialEventLogListViewItem_Info_o *v90; // x8
  System_Int32_array **v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct MaterialEventLogListViewItem_Info_o *v98; // x8
  System_Int32_array **VoiceList_31475968; // x0
  __int64 *p_svtVoiceDataList_5__4; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *svtVoiceDataList_5__4; // x8
  struct MaterialEventLogListViewItem_Info_o *v108; // x8
  System_Int32_array **VoiceList_31475384; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct MyRoomControl___c__DisplayClass329_0_o *_8__1; // x22
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  struct MaterialEventLogListViewItem_Info_o *v125; // x8
  int32_t v126; // w22
  struct MaterialEventLogListViewItem_Info_o *v127; // x8
  int32_t v128; // w23
  int32_t voiceCondValue; // w24
  __int64 v130; // x24
  int32_t v131; // w23
  __int64 v132; // x8
  __int64 v133; // x8
  __int64 v134; // x21
  __int64 v135; // x8
  __int64 v136; // x8
  struct MaterialEventLogListViewItem_Info_o *v137; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  Il2CppObject *v140; // x26
  System_Action_o *v141; // x25
  System_Int32_array **v142; // x0
  BattleServantConfConponent_o *v143; // x19
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  int v150; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *v151; // x21
  int size; // w8
  MyRoomControl__svtVoicePlayAct_d__329_o **p_bondsSvtCtr; // x22
  System_Int32_array **v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  unsigned int v161; // w22
  ServantVoiceData_array *v162; // x21
  ServantVoiceData_o *v163; // x8
  CommonUI_o *v164; // x21
  System_Int32_array **v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  CommonUI_o *v172; // x21
  System_Int32_array **v173; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  struct MyRoomControl___c__DisplayClass329_0_o *v180; // x8
  CommonUI_o *v181; // x20
  System_Int32_array **v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x0
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  __int64 v196; // x0
  int v197; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_42EAE77 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&char_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&Method_MyRoomControl___c__DisplayClass329_0__svtVoicePlayAct_b__0__, v44, v45, v46);
    sub_B5D5C4(&MyRoomControl___c__DisplayClass329_0_TypeInfo, v47, v48, v49);
    this = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_B5D5C4(&UIStandFigureRender_TypeInfo, v50, v51, v52);
    byte_42EAE77 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v54 = (MyRoomControl___c__DisplayClass329_0_o *)sub_B5D694(MyRoomControl___c__DisplayClass329_0_TypeInfo);
      MyRoomControl___c__DisplayClass329_0___ctor(v54, 0LL);
      v4->fields.__8__1 = v54;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__8__1,
        (System_Int32_array **)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_138;
      v67 = (System_Int32_array **)v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v67;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields, v67, v61, v62, v63, v64, v65, v66);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v68 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v68 )
        goto LABEL_138;
      CommonUI__maskFadeout(v68, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_13:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v197 = 0;
        v70 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v4->fields.__2__current = (Il2CppObject *)v70;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, v70, v72, v73, v74, v75, v76, v77);
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
      v79 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_VoiceCondType_Type____ctor(
        v79,
        (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v79 )
        goto LABEL_138;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v79,
        81,
        (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v4->fields.item;
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
      v81 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v4->fields._voiceAssetName_5__2 = (struct System_String_o *)VoiceAssetName;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields._voiceAssetName_5__2,
        VoiceAssetName,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      v89 = (Il2CppObject *)System_Int32__ToString((int)v81 + 20, 0LL);
      LOWORD(v197) = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)j_il2cpp_value_box_0(char_TypeInfo, &v197);
      v90 = v4->fields.item;
      if ( !v90 )
        goto LABEL_138;
      v91 = (System_Int32_array **)System_String__Concat_44657492(
                                     v89,
                                     (Il2CppObject *)this,
                                     (Il2CppObject *)v90->fields.voiceId,
                                     0LL);
      v4->fields._playSvtVoiceId_5__3 = (struct System_String_o *)v91;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields._playSvtVoiceId_5__3, v91, v92, v93, v94, v95, v96, v97);
      v98 = v4->fields.item;
      if ( !v98 )
        goto LABEL_138;
      VoiceList_31475968 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_31475968(
                                                    v81,
                                                    v98->fields.svtVoiceType,
                                                    v4->fields._playSvtVoiceId_5__3,
                                                    (System_Collections_Generic_List_CondType_Kind__o *)v79,
                                                    0,
                                                    0LL);
      p_svtVoiceDataList_5__4 = (__int64 *)&v4->fields._svtVoiceDataList_5__4;
      v4->fields._svtVoiceDataList_5__4 = (struct System_Collections_Generic_List_ServantVoiceData____o *)VoiceList_31475968;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields._svtVoiceDataList_5__4,
        VoiceList_31475968,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      svtVoiceDataList_5__4 = v4->fields._svtVoiceDataList_5__4;
      if ( svtVoiceDataList_5__4 && svtVoiceDataList_5__4->fields._size )
        goto LABEL_39;
      v108 = v4->fields.item;
      if ( !v108 )
        goto LABEL_138;
      VoiceList_31475384 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_31475384(
                                                    v81,
                                                    v108->fields.svtVoiceType,
                                                    3,
                                                    v108->fields.voiceCondValue,
                                                    0LL,
                                                    -1,
                                                    0LL);
      *p_svtVoiceDataList_5__4 = (__int64)VoiceList_31475384;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields._svtVoiceDataList_5__4,
        VoiceList_31475384,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
LABEL_39:
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      _8__1 = v4->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_138;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&_8__1->fields.bondsSvtObj,
        (System_Int32_array **)this,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v125 = v4->fields.item;
      if ( !v125 )
        goto LABEL_138;
      v126 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)ServantScriptMaster__getId(v125->fields.svt_id, v126, 0LL);
      v127 = v4->fields.item;
      if ( !v127 )
        goto LABEL_138;
      v128 = (int)this;
      voiceCondValue = v127->fields.voiceCondValue;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UIStandFigureRender__GetForm(v128, 1, voiceCondValue, 0LL);
      v130 = *p_svtVoiceDataList_5__4;
      v131 = (int)this;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_66;
      if ( !*(_DWORD *)(v130 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v132 = *(_QWORD *)(*(_QWORD *)(v130 + 16) + 32LL);
      if ( !v132 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v132 + 24) )
        goto LABEL_139;
      v133 = *(_QWORD *)(v132 + 32);
      if ( !v133 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v133 + 60) )
        goto LABEL_66;
      v134 = *p_svtVoiceDataList_5__4;
      if ( !v134 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v134 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v135 = *(_QWORD *)(*(_QWORD *)(v134 + 16) + 32LL);
      if ( !v135 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v135 + 24) )
      {
LABEL_139:
        v196 = sub_B5D6C8(this);
        sub_B5D668(v196, 0LL);
      }
      v136 = *(_QWORD *)(v135 + 32);
      if ( !v136 )
        goto LABEL_138;
      v131 = *(_DWORD *)(v136 + 56);
LABEL_66:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v137 = v4->fields.item;
      if ( !v137 )
        goto LABEL_138;
      svt_id = v137->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v140 = *p__8__1;
      v141 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v141, v140, Method_MyRoomControl___c__DisplayClass329_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_138;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v126, 1, 0, v131, 10, v141, 0, 0LL);
LABEL_70:
      if ( !*p__8__1 )
        goto LABEL_138;
      if ( !LOBYTE((*p__8__1)[2].klass) )
      {
        v197 = 0;
        v154 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v4->fields.__2__current = (Il2CppObject *)v154;
        v143 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v143, v154, v155, v156, v157, v158, v159, v160);
        v150 = 2;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__voiceLoad(_4__this, v4->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_74:
      if ( _4__this->fields.isVoiceLoading )
      {
        v197 = 0;
        v142 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v4->fields.__2__current = (Il2CppObject *)v142;
        v143 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v143, v142, v144, v145, v146, v147, v148, v149);
        v150 = 3;
        goto LABEL_137;
      }
      v151 = v4->fields._svtVoiceDataList_5__4;
      if ( !v151 )
        goto LABEL_138;
      size = v151->fields._size;
      if ( size >= 2 )
      {
        v161 = 0;
        while ( 1 )
        {
          if ( size <= v161 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v162 = v151->fields._items->m_Items[v161];
          if ( !v162 )
            goto LABEL_138;
          if ( !v162->max_length )
            goto LABEL_139;
          v163 = v162->m_Items[0];
          if ( !v163 )
            goto LABEL_138;
          this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_String__op_Equality(
                                                              v163->fields.id,
                                                              v4->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          v151 = v4->fields._svtVoiceDataList_5__4;
          if ( !v151 )
            goto LABEL_138;
          size = v151->fields._size;
          if ( (int)++v161 >= size )
          {
            p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__329_o **)&_4__this->fields.bondsSvtCtr;
            goto LABEL_93;
          }
        }
        this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
        if ( this )
        {
          p_bondsSvtCtr = (MyRoomControl__svtVoicePlayAct_d__329_o **)&_4__this->fields.bondsSvtCtr;
          MyRoomSvtControl__setSvtVoice_24866396((MyRoomSvtControl_o *)this, v162, v4->fields._voiceAssetName_5__2, 0LL);
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
        v4->fields._svtVoiceDataList_5__4,
        v4->fields._voiceAssetName_5__2,
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
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v164 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v164 )
        goto LABEL_138;
      CommonUI__maskFadein(v164, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_100:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v197 = 0;
        v165 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v4->fields.__2__current = (Il2CppObject *)v165;
        v143 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v143, v165, v166, v167, v168, v169, v170, v171);
        v150 = 4;
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
        v197 = 0;
        v189 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v4->fields.__2__current = (Il2CppObject *)v189;
        v143 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v143, v189, v190, v191, v192, v193, v194, v195);
        v150 = 5;
        goto LABEL_137;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v172 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v172 )
        goto LABEL_138;
      CommonUI__maskFadeout(v172, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_112:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v197 = 0;
        v173 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v4->fields.__2__current = (Il2CppObject *)v173;
        v143 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v143, v173, v174, v175, v176, v177, v178, v179);
        v150 = 6;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_138;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_138;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v4->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_138;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v180 = v4->fields.__8__1;
      if ( !v180 )
        goto LABEL_138;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v180->fields.bondsSvtObj;
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
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v181 = (CommonUI_o *)this;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v181 )
        goto LABEL_138;
      CommonUI__maskFadein(v181, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_132:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_138:
        sub_B5D69C(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v197 = 0;
      v182 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v197);
      v4->fields.__2__current = (Il2CppObject *)v182;
      v143 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v143, v182, v183, v184, v185, v186, v187, v188);
      v150 = 7;
LABEL_137:
      *(_DWORD *)&v143[-1].fields.isOpenAfter = v150;
      return 1;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_13;
    case 2:
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_70;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_138;
      goto LABEL_74;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_100;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_103;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_112;
    case 7:
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomControl__svtVoicePlayAct_d__329_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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