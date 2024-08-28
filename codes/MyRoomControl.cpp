void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct MyRoomControl_StaticFields *static_fields; // x8

  if ( (byte_4A04559 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_2999/*"BGM_MYROOM_1"*/, v2);
    byte_4A04559 = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_2999/*"BGM_MYROOM_1"*/;
  sub_1B68678(MyRoomControl_TypeInfo->static_fields);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_BA6790;
  *(_QWORD *)&static_fields->BUTTON_MULTIPLE_VIEW = 0x2000000010LL;
  *(_QWORD *)&static_fields->BUTTON_OUT_X = 0x2C4480000LL;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MyRoomStateMaterial_o *v8; // x20
  System_Collections_Generic_List_int__o *v9; // x20
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w8
  __int64 v14; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4A04558 & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, method);
    sub_1B686D4(&long___TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B686D4(&MyRoomStateMaterial_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Vector3___TypeInfo, v7);
    byte_4A04558 = 1;
  }
  v8 = (MyRoomStateMaterial_o *)sub_1B68920(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v8, 0LL);
  this->fields.mStateMaterial = v8;
  sub_1B68678(&this->fields.mStateMaterial);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v9;
  sub_1B68678(&this->fields.imageIdList);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v10;
  sub_1B68678(&this->fields.materialImageIdList);
  v11 = sub_1B6877C(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v11 )
    sub_1B68930(0LL, v12);
  v13 = *(_DWORD *)(v11 + 24);
  if ( !v13 || (*(_DWORD *)(v11 + 40) = 0, *(_QWORD *)(v11 + 32) = 0x43900000C4000000LL, v13 == 1) )
    sub_1B68938(v11, v11);
  *(_DWORD *)(v11 + 52) = 0;
  *(_QWORD *)(v11 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v11;
  sub_1B68678(&this->fields.defaultMultipleServantPoses);
  if ( !byte_4A03901 )
  {
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4A03901 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  this->fields.multipleServantUsrIds = (struct System_Int64_array *)sub_1B6877C(long___TypeInfo, 2LL);
  sub_1B68678(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = (struct System_Int32_array *)sub_1B6877C(int___TypeInfo, 2LL);
  sub_1B68678(&this->fields.multipleLimitCounts);
  this->fields.photoMasterPosition = 2;
  this->fields.photoCampaignFinishedTime = -1LL;
  *(_WORD *)&this->fields._IsMasterRight_k__BackingField = 257;
  *(_QWORD *)&this->fields.defaultPhotoServantPos.fields.x = 0x4390000000000000LL;
  this->fields.defaultPhotoServantPos.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomControl__AccountLinkageServerStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B68930(0LL, method);
  AccountLinkageComponent__LinkageStatusCheck(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__AccountLinkageStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4A04509 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_LinkageStatusCheckCallback__, method);
    sub_1B686D4(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1B686D4(&NetworkManager_TypeInfo, v4);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4A04509 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B68930(0LL, v8);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall MyRoomControl__AutoDelinkAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AccountLinkageComponent_c *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v13; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_int__o v20; // 0:x4.8

  if ( (byte_4A0450C & 1) == 0 )
  {
    sub_1B686D4(&AccountLinkageComponent_TypeInfo, method);
    sub_1B686D4(&System_Action_TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__317_0__, v5);
    sub_1B686D4(&Method_System_Nullable_int___ctor__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v8);
    sub_1B686D4(&StringLiteral_3379/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_4A0450C = 1;
  }
  v10 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v10 = AccountLinkageComponent_TypeInfo;
  }
  v10->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__317_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_35D914C *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B68930(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3379/*"CAN_CONTINUE_DEVICE"*/, 0LL);
  MyRoomControl__HideContinueDeviceMenu(this, v16);
}


void __fastcall MyRoomControl__BlockTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomControl_c *v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UIWidget_o *changeBGBtnImg; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0451B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B686D4(&MyRoomControl_TypeInfo, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4A0451B = 1;
  }
  v5 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v5->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v6);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v14, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v15.fields.r = 0.5;
  v15.fields.g = 0.5;
  v15.fields.b = 0.5;
  v15.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v15, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  changeBGBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData(
                                   (MyRoomData_o *)changeBGBtnImg,
                                   this->fields.fvrUsrSvtId,
                                   0LL);
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v10 = *(_QWORD *)&changeBGBtnImg->fields.mChanged;
  v9 = *(_QWORD *)&changeBGBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v13, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_25;
    LODWORD(changeBGBtnImg) = materialImageIdList->fields._size - 1;
  }
  if ( (int)changeBGBtnImg >= 1 )
  {
    changeBGBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !changeBGBtnImg )
      goto LABEL_25;
    v16.fields.r = 0.5;
    v16.fields.g = 0.5;
    v16.fields.b = 0.5;
    v16.fields.a = 1.0;
    UIWidget__set_color(changeBGBtnImg, v16, 0LL);
    v12 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v12 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v12->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.mBlocker;
  if ( !changeBGBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeBGBtnImg, 1, 0LL),
        (changeBGBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_25:
    sub_1B68930(changeBGBtnImg, v7);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeBGBtnImg, 1, 0LL);
  if ( this->fields.type == 10 )
  {
    changeBGBtnImg = (UIWidget_o *)this->fields.soundPlayerComp;
    if ( changeBGBtnImg )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)changeBGBtnImg, 1, 0LL);
      return;
    }
    goto LABEL_25;
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
  float v8; // s0
  float v9; // s1

  if ( (byte_4A04549 & 1) == 0 )
  {
    sub_1B686D4(&ManagerConfig_TypeInfo, method);
    byte_4A04549 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v2->static_fields;
  v4 = (float)static_fields[22];
  v5 = v4 / (float)static_fields[20];
  v6 = v4 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  v8 = (float)height / (float)UnityEngine_Screen__get_width(0LL);
  if ( v8 <= v5 )
    v9 = v8;
  else
    v9 = v5;
  if ( v8 < v6 )
    return v6;
  else
    return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MyRoomControl__CaptureServant(
        MyRoomControl_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  MyRoomControl__CaptureServant_d__409_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A04544 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__CaptureServant_d__409_TypeInfo, *(_QWORD *)&width);
    byte_4A04544 = 1;
  }
  v7 = (MyRoomControl__CaptureServant_d__409_o *)sub_1B68920(MyRoomControl__CaptureServant_d__409_TypeInfo);
  MyRoomControl__CaptureServant_d__409___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_1B68930(v8, v9);
  v7->fields.__4__this = this;
  sub_1B68678(&v7->fields.__4__this);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v20; // s0
  float v21; // s9
  float v22; // s1
  float v23; // s8
  const MethodInfo *v24; // x2
  float v25; // s2
  float v26; // s10
  MyRoomControl_o *v27; // x0
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x2
  float v30; // s9
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  int32_t v33; // w8
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x3
  MyRoomControl_c *v37; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  StandFigureBack_o *v48; // x20
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1
  UnityEngine_Vector3_o v57; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A04518 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isSePlay);
    sub_1B686D4(&Method_MyRoomControl_ChangeDisp__, v6);
    sub_1B686D4(&Method_MyRoomControl__ChangeDisp_b__339_0__, v7);
    sub_1B686D4(&Method_MyRoomControl__ChangeDisp_b__339_1__, v8);
    sub_1B686D4(&MyRoomControl_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_11217/*"ReleaseTouch"*/, v10);
    byte_4A04518 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_29;
  v11 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v11->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v11->static_fields->BUTTON_DISP_CHANGE) == 0) )
  {
LABEL_29:
    v34 = Method_MyRoomControl_ChangeDisp__;
    if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_ChangeDisp__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B686B8(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v12);
    if ( isSePlay )
    {
      v13 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_ChangeDisp__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B686B8(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    }
    mShowPos = this->fields.mShowPos;
    moveTarget = this->fields.mMainObj;
    moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
    moveHidePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    v57 = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    switch ( this->fields.type )
    {
      case 1:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v18);
        goto LABEL_14;
      case 6:
        moveTarget = this->fields.noticeObj;
        goto LABEL_14;
      case 0xA:
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.soundPlayerComp;
        if ( !soundPlayerComp )
          goto LABEL_53;
        gameObject = UnityEngine_Component__get_gameObject(soundPlayerComp, 0LL);
        moveTarget = gameObject;
LABEL_14:
        MyRoomControl__setupServantListUIMoveData(
          (MyRoomControl_o *)gameObject,
          this->fields.servantListObj,
          &LocalPosition,
          &v57,
          v18);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.standFigureBack;
        if ( !soundPlayerComp )
          goto LABEL_53;
        soundPlayerComp = (UnityEngine_Component_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)soundPlayerComp,
                                                       0,
                                                       0LL);
        if ( !soundPlayerComp )
          goto LABEL_53;
        soundPlayerComp = (UnityEngine_Component_o *)soundPlayerComp[1].monitor;
        if ( !soundPlayerComp )
          goto LABEL_53;
        soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(soundPlayerComp, 0LL);
        if ( !soundPlayerComp )
          goto LABEL_53;
        v20 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v21 = *(float *)&v20,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v22 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v23 = v22,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_53:
          sub_1B68930(soundPlayerComp, v17);
        }
        *(UnityEngine_Vector3_o *)(&v25 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)soundPlayerComp,
                                                 0LL);
        switch ( this->fields.mState )
        {
          case 0:
            v26 = v25;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v24);
            MyRoomControl__setupSortWindowUIMoveData(
              v27,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v28);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, v57, v29);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_53;
            v30 = -v21;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v31);
            v62.fields.x = v30;
            v62.fields.y = v23;
            v62.fields.z = v26;
            MyRoomControl__moveControl(this, this->fields.svtObj, v62, (System_String_o *)StringLiteral_11217/*"ReleaseTouch"*/, v32);
            v33 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_53;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v37 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v67, (System_String_o *)StringLiteral_11217/*"ReleaseTouch"*/, v42);
            v68.fields.y = this->fields.helpBtnInitPos.fields.y;
            v68.fields.z = this->fields.helpBtnInitPos.fields.z;
            v68.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v68, 0LL, v43);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v33 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v17);
            standFigureBack = this->fields.standFigureBack;
            v45 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(v45, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__339_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_53;
            StandFigureBack__Fadeout(standFigureBack, v45, 0LL);
            v33 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v24);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v46);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v47);
            v48 = this->fields.standFigureBack;
            v49 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(v49, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__339_1__, 0LL);
            if ( !v48 )
              goto LABEL_53;
            StandFigureBack__Fadein(v48, v49, 0LL);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_53;
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
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0LL);
            v33 = 0;
            break;
          default:
            goto LABEL_48;
        }
        this->fields.mState = v33;
LABEL_48:
        MyRoomControl__SetMultipleViewButtonColor(this, v17);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v56);
        break;
      default:
        goto LABEL_14;
    }
  }
}


void __fastcall MyRoomControl__ChangeMasterSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__int__o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A04551 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_int__int__TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__ChangeMasterSetting_b__424_0__, v3);
    byte_4A04551 = 1;
  }
  v4 = (System_Action_int__int__o *)sub_1B68920(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__ChangeMasterSetting_b__424_0__, 0LL);
  MyRoomControl__OpenMasterEquipSettingDialog(this, v4, 0LL, v5);
}


void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomControl___c__DisplayClass405_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  int32_t v9; // w9
  il2cpp_array_size_t max_length; // w10
  ServantPhotoEntity_FaceData_o *faceData; // x21
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x3

  if ( (byte_4A04543 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass405_0__ChangePhotoCampaignServantFace_b__0__, v3);
    sub_1B686D4(&MyRoomControl___c__DisplayClass405_0_TypeInfo, v4);
    byte_4A04543 = 1;
  }
  v5 = (MyRoomControl___c__DisplayClass405_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass405_0_TypeInfo);
  MyRoomControl___c__DisplayClass405_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.__4__this = this,
        v6 = sub_1B68678(&v5->fields),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v9 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v9,
        !photoCampaignFaceList) )
  {
    sub_1B68930(v6, v7);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v9 >= (int)max_length )
  {
    v9 = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  if ( v9 >= max_length )
    sub_1B68938(v6, v7);
  v5->fields.faceData = photoCampaignFaceList->m_Items[v9];
  sub_1B68678(&v5->fields.faceData);
  faceData = v5->fields.faceData;
  v12 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass405_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  MyRoomControl__SetFacePhotoServant(this, faceData, v12, v13);
}


void __fastcall MyRoomControl__ChangePhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.photoCampaignState = 7;
  MyRoomControl__ClosePhotoCampaignServant(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeSetBtnsTouch(MyRoomControl_o *this, bool isSet, const MethodInfo *method)
{
  UIWidget_o *playBtnImg; // x0
  float v6; // s8
  MyRoomControl_c *v7; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  int32_t buttonFlag; // w9
  int v10; // w10
  int32_t v11; // w8
  MyRoomControl_c *v12; // x0
  struct MyRoomControl_StaticFields *v13; // x8
  int32_t v14; // w9
  int v15; // w10
  int32_t v16; // w8
  MyRoomControl_c *v17; // x0
  int32_t v18; // w9
  int32_t BUTTON_DISP_CHANGE; // w8
  int v20; // w10
  int v21; // w8
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0451F & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, isSet);
    byte_4A0451F = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( isSet )
    v6 = 1.0;
  else
    v6 = 0.5;
  if ( !playBtnImg )
    goto LABEL_22;
  v22.fields.a = 1.0;
  v22.fields.r = v6;
  v22.fields.g = v6;
  v22.fields.b = v6;
  UIWidget__set_color(playBtnImg, v22, 0LL);
  v7 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v7 = MyRoomControl_TypeInfo;
  }
  static_fields = v7->static_fields;
  buttonFlag = this->fields.buttonFlag;
  playBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
  LODWORD(static_fields) = static_fields->BUTTON_VOICE_PLAY;
  v10 = buttonFlag & ~(_DWORD)static_fields;
  v11 = buttonFlag | (unsigned int)static_fields;
  if ( !isSet )
    v11 = v10;
  this->fields.buttonFlag = v11;
  if ( !playBtnImg )
    goto LABEL_22;
  v23.fields.a = 1.0;
  v23.fields.r = v6;
  v23.fields.g = v6;
  v23.fields.b = v6;
  UIWidget__set_color(playBtnImg, v23, 0LL);
  v12 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v12 = MyRoomControl_TypeInfo;
  }
  v13 = v12->static_fields;
  v14 = this->fields.buttonFlag;
  playBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  LODWORD(v13) = v13->BUTTON_LIMIT_CHANGE;
  v15 = v14 & ~(_DWORD)v13;
  v16 = v14 | (unsigned int)v13;
  if ( !isSet )
    v16 = v15;
  this->fields.buttonFlag = v16;
  if ( !playBtnImg )
LABEL_22:
    sub_1B68930(playBtnImg, isSet);
  v24.fields.a = 1.0;
  v24.fields.r = v6;
  v24.fields.g = v6;
  v24.fields.b = v6;
  UIWidget__set_color(playBtnImg, v24, 0LL);
  v17 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v17 = MyRoomControl_TypeInfo;
  }
  v18 = this->fields.buttonFlag;
  BUTTON_DISP_CHANGE = v17->static_fields->BUTTON_DISP_CHANGE;
  v20 = v18 & ~BUTTON_DISP_CHANGE;
  v21 = v18 | BUTTON_DISP_CHANGE;
  if ( !isSet )
    v21 = v20;
  this->fields.buttonFlag = v21;
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

  if ( (byte_4A0451E & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isSet);
    byte_4A0451E = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_12;
  SvtStandFigure = (UnityEngine_Object_o *)StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1B68930(standFigureBack, isSet);
  }
LABEL_10:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckCsUnlink(MyRoomControl_o *this, const MethodInfo *method)
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
  PlayMakerFSM_o *SelfUserAccountLinkage; // x0
  __int64 v13; // x1
  int32_t type; // w8
  AccountLinkageComponent_c *v15; // x0
  struct AccountLinkageComponent_StaticFields *v16; // x8
  AccountLinkageComponent_c *v17; // x0
  __int64 *v18; // x8
  AccountLinkageComponent_c *v19; // x0
  System_String_o *v20; // x20
  Il2CppObject *Instance; // x21
  MyRoomControl___c_c *v22; // x8
  System_Action_o *_9__318_0; // x22
  Il2CppObject *v24; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v29; // 0:x3.8
  System_Nullable_int__o v30; // 0:x4.8

  if ( (byte_4A0450D & 1) == 0 )
  {
    sub_1B686D4(&AccountLinkageComponent_TypeInfo, method);
    sub_1B686D4(&System_Action_TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_System_Nullable_int___ctor__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_MyRoomControl___c__CheckCsUnlink_b__318_0__, v7);
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_3378/*"CANNOT_CONTINUE_DEVICE"*/, v9);
    sub_1B686D4(&StringLiteral_2008/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, v10);
    sub_1B686D4(&StringLiteral_3379/*"CAN_CONTINUE_DEVICE"*/, v11);
    byte_4A0450D = 1;
  }
  entity = 0LL;
  msgFontSize = 0LL;
  SelfUserAccountLinkage = (PlayMakerFSM_o *)UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( ((unsigned __int8)SelfUserAccountLinkage & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    type = entity->fields.type;
    if ( type == 1 )
    {
      v19 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v19 = AccountLinkageComponent_TypeInfo;
      }
      v19->static_fields->isLinked = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2008/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v22 = MyRoomControl___c_TypeInfo;
      }
      _9__318_0 = v22->static_fields->__9__318_0;
      if ( !_9__318_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = MyRoomControl___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__318_0 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(_9__318_0, v24, Method_MyRoomControl___c__CheckCsUnlink_b__318_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__318_0 = _9__318_0;
        sub_1B68678(&static_fields->__9__318_0);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_35D914C *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v30 = msgFontSize;
        v29 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v20, _9__318_0, v29, v30, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v18 = &StringLiteral_3378/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1B68930(SelfUserAccountLinkage, v13);
    }
    if ( !type )
    {
      v15 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v15 = AccountLinkageComponent_TypeInfo;
      }
      v16 = v15->static_fields;
LABEL_15:
      v16->isLinked = 0;
      goto LABEL_16;
    }
  }
  v17 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v17 = AccountLinkageComponent_TypeInfo;
  }
  v16 = v17->static_fields;
  if ( v16->isLinked )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v16 = AccountLinkageComponent_TypeInfo->static_fields;
    }
    goto LABEL_15;
  }
LABEL_16:
  SelfUserAccountLinkage = this->fields.myRoomFsm;
  if ( !SelfUserAccountLinkage )
    goto LABEL_32;
  v18 = &StringLiteral_3379/*"CAN_CONTINUE_DEVICE"*/;
LABEL_18:
  PlayMakerFSM__SendEvent(SelfUserAccountLinkage, (System_String_o *)*v18, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v7; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v9; // x9

  v2 = this;
  if ( (byte_4A04524 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomRootComponent_TypeInfo, method);
    sub_1B686D4(&StringLiteral_3529/*"CLICK_MATERIAL"*/, v3);
    this = (MyRoomControl_o *)sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, v4);
    byte_4A04524 = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = &StringLiteral_6910/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B68930(this, method);
  }
  name = sceneJumpInfo->fields.name;
  v7 = MyRoomRootComponent_TypeInfo;
  if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v7 = MyRoomRootComponent_TypeInfo;
  }
  this = (MyRoomControl_o *)System_String__op_Equality(name, v7->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  myRoomFsm = v2->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  v9 = &StringLiteral_6910/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = &StringLiteral_3529/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B68930(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4A04531 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__CloseMultipleView_b__384_0__, v3);
    byte_4A04531 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1B68930(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__384_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v4; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  __int64 v7; // x22
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
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0452F & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_6676/*"FinishedCloseMultiServant"*/, method);
    byte_4A0452F = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1B68930(mBlocker, method);
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
LABEL_22:
      sub_1B68938(mBlocker, method);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6676/*"FinishedCloseMultiServant"*/ : 0LL;
              v19.fields.y = v15;
              v19.fields.x = flt_BA5788[(_DWORD)v7 == 4] + y;
              v19.fields.z = x + 0.0;
              MyRoomControl__moveControl(this, mBlocker, v19, v18, v16);
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

  if ( (byte_4A0454D & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_0__, v4);
    byte_4A0454D = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v5, 0, v6);
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
  float v16; // s9
  float v17; // s10
  UnityEngine_GameObject_o *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0454B & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_6677/*"FinishedClosePhotoCampaignServant"*/, method);
    byte_4A0454B = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v6 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  v7 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v8 = this->fields.currentPhotoServantPos.fields.x + flt_BA5208[!this->fields._IsMasterRight_k__BackingField];
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v20.fields.x = v8;
  v20.fields.y = v7;
  v20.fields.z = v6;
  MyRoomControl__moveControl(this, gameObject, v20, (System_String_o *)StringLiteral_6677/*"FinishedClosePhotoCampaignServant"*/, v10);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(v11, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_1B68930(photoCampaignStandFigureBack, v4);
  }
  v15 = v14 + 0.0;
  v16 = v13 + 0.0;
  v17 = v12 + flt_BA5120[!this->fields._IsMasterRight_k__BackingField];
  v18 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v21.fields.y = v16;
  v21.fields.z = v15;
  v21.fields.x = v17;
  MyRoomControl__moveControl(this, v18, v21, 0LL, v19);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A04508 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_TypeInfo, setEndAction);
    byte_4A04508 = 1;
  }
  v5 = (MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *)sub_1B68920(MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__290___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1B68930(v6, v7);
  v5->fields.__4__this = this;
  sub_1B68678(&v5->fields.__4__this);
  v5->fields.setEndAction = setEndAction;
  sub_1B68678(&v5->fields.setEndAction);
  return (System_Collections_IEnumerator_o *)v5;
}


CRIMoviePlayer_o *__fastcall MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *object; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4A04521 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1B686D4(&StringLiteral_3909/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v5);
    byte_4A04521 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_3909/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_2EDCB20 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1B68930(0LL, v8);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v7,
                               (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MyRoomControl___c__DisplayClass401_0_o *v7; // x20
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v14; // x23
  System_Action_o *v15; // x24

  if ( (byte_4A0453F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, func);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass401_0__CreatePhotoMasterFigure_b__0__, v5);
    sub_1B686D4(&MyRoomControl___c__DisplayClass401_0_TypeInfo, v6);
    byte_4A0453F = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass401_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass401_0_TypeInfo);
  MyRoomControl___c__DisplayClass401_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  v7->fields.__4__this = this;
  sub_1B68678(&v7->fields);
  v7->fields.func = func;
  sub_1B68678(&v7->fields.func);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    ActionExtensions__Call(v7->fields.func, 0LL);
    return;
  }
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B68930(photoCampaignStandFigureBack, v9);
  }
  v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v14 = v11;
  v15 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass401_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  this->fields.photoMasterTexture = MasterFigureManagerOld__CreatePrefab_37665988(
                                      v14,
                                      2,
                                      photoMasterGenderType,
                                      photoMasterEquipId,
                                      1,
                                      v15,
                                      0,
                                      (System_Nullable_Vector3__o)0,
                                      0LL);
  sub_1B68678(&this->fields.photoMasterTexture);
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
  MyRoomControl___c__DisplayClass382_0_o *v12; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  _BOOL8 v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v18; // x23
  StandFigureBack_o *v19; // x21
  System_Action_o *v20; // x23
  _BOOL4 v21; // w8
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x4
  UnityEngine_Vector3_o *p_moveShowPos; // x10
  float *p_z; // x8
  float x; // s0
  float *p_y; // x10
  int v30; // s1
  int v31; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4A04530 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDispDefault);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__0__, v9);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__1__, v10);
    sub_1B686D4(&MyRoomControl___c__DisplayClass382_0_TypeInfo, v11);
    byte_4A04530 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = (MyRoomControl___c__DisplayClass382_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass382_0_TypeInfo);
  MyRoomControl___c__DisplayClass382_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.callback = callback;
  sub_1B68678(&v12->fields);
  v12->fields.__4__this = this;
  sub_1B68678(&v12->fields.__4__this);
  MyRoomControl__stopSvtVoice(this, v15);
  MyRoomControl__BlockTouch(this, v16);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__0__,
        0LL);
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, v18, 0LL);
    }
    frontObjectManager = this->fields.frontObjectManager;
    if ( frontObjectManager )
    {
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
      goto LABEL_13;
    }
LABEL_39:
    sub_1B68930(frontObjectManager, v14);
  }
  v19 = this->fields.standFigureBack;
  v20 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__1__,
    0LL);
  if ( !v19 )
    goto LABEL_39;
  StandFigureBack__Fadeout(v19, v20, 0LL);
  frontObjectManager = this->fields.frontObjectManager;
  if ( !frontObjectManager )
    goto LABEL_39;
  MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
LABEL_13:
  MainMenuBar__setMenuActive(isDispDefault, 0LL, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.voicePlayBtn;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.moveBtnObj;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeLimitBtn;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.helpBtn;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.multipleViewButton;
  v21 = isDispDefault && this->fields.isEnableMultipleView;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v21, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  v14 = isDispDefault && (unsigned __int64)this->fields.isEnablePhotoCampaign;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v14, 0LL);
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
      goto LABEL_27;
    case 6:
      mMainObj = this->fields.noticeObj;
      moveTarget = mMainObj;
      goto LABEL_27;
    case 0xA:
      frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.soundPlayerComp;
      if ( !frontObjectManager )
        goto LABEL_39;
      mMainObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frontObjectManager, 0LL);
      moveTarget = mMainObj;
LABEL_27:
      if ( isDispDefault )
        p_moveShowPos = &moveShowPos;
      else
        p_moveShowPos = &LocalPosition;
      p_z = &LocalPosition.fields.z;
      x = p_moveShowPos->fields.x;
      if ( isDispDefault )
        p_y = &moveShowPos.fields.y;
      else
        p_y = &LocalPosition.fields.y;
      if ( isDispDefault )
        p_z = &moveShowPos.fields.z;
      v30 = *(_DWORD *)p_y;
      v31 = *(_DWORD *)p_z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v24);
      return;
    default:
      goto LABEL_27;
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
  __int64 v11; // x1
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_4A0453D & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIPanel___, usrSvtId);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    byte_4A0453D = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( this->fields.photoCampaignServantUsrId != usrSvtId )
  {
    Instance = (MissionNotifyManager_o *)this->fields.photoCampaignStandFigureBack;
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Instance,
                                             (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( Instance )
      {
        UIPanel__set_depth((UIPanel_o *)Instance, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_1B68930(Instance, v13);
  }
LABEL_8:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
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
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  Il2CppObject *v15; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4A044EC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&Method_MyRoomControl___c__EndLoad_b__238_0__, v5);
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_8232/*"LOAD_END"*/, v7);
    byte_4A044EC = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_20;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v9);
  if ( SvtVoiceEnt )
  {
    method = (const MethodInfo *)SvtVoiceEnt;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_20;
    MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)svtCtr, (ServantVoiceEntity_o *)method, 0LL);
  }
  if ( !this->fields.sceneJumpInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    svtCtr = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      svtCtr = MyRoomControl___c_TypeInfo;
    }
    v14 = *(System_Action_o **)(*((_QWORD *)svtCtr + 23) + 24LL);
    if ( !v14 )
    {
      if ( !*((_DWORD *)svtCtr + 56) )
      {
        j_il2cpp_runtime_class_init_0(svtCtr);
        svtCtr = MyRoomControl___c_TypeInfo;
      }
      v15 = (Il2CppObject *)**((_QWORD **)svtCtr + 23);
      v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v14, v15, Method_MyRoomControl___c__EndLoad_b__238_0__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__238_0 = v14;
      svtCtr = (void *)sub_1B68678(&static_fields->__9__238_0);
    }
    if ( Instance )
    {
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v14, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_1B68930(svtCtr, method);
  }
LABEL_18:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_20;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8232/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  System_Action_T__o *v6; // x21

  if ( (byte_4A0453B & 1) == 0 )
  {
    sub_1B686D4(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__EndLoadPhotoAsset_b__397_0__, v3);
    byte_4A0453B = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v6 = (System_Action_T__o *)sub_1B68920(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo),
        System_Action_Int32Enum____ctor(
          v6,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__397_0__,
          0LL),
        !photoTargetSelectDialog) )
  {
    sub_1B68930(photoCampaignStandFigureBack, method);
  }
  PhotoTargetSelectDialog__Open(photoTargetSelectDialog, (System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *)v6, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19

  if ( (byte_4A04525 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A04525 = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1B68678(&this->fields.sceneJumpInfo);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1B68930(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_1B68930(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MyRoomControl___c__DisplayClass425_0_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  _BOOL4 IsMasterRight_k__BackingField; // w9
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  bool v13; // zf
  bool v14; // w9
  int32_t v15; // w10
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *v17; // x8
  struct System_Int32_array *multiForm; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_4A04552 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass425_0__ExchangePosition_b__0__, v5);
    sub_1B686D4(&MyRoomControl___c__DisplayClass425_0_TypeInfo, v6);
    byte_4A04552 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass425_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass425_0_TypeInfo);
  MyRoomControl___c__DisplayClass425_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  v7->fields.__4__this = this;
  v8 = sub_1B68678(&v7->fields);
  IsMasterRight_k__BackingField = this->fields._IsMasterRight_k__BackingField;
  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v13 = !IsMasterRight_k__BackingField;
  v14 = !IsMasterRight_k__BackingField;
  v15 = v13 ? 2 : 1;
  this->fields.photoMasterPosition = v15;
  this->fields._IsMasterRight_k__BackingField = v14;
  if ( !photoCampaignFaceList )
    goto LABEL_16;
  photoCampaignFaceListIndex = this->fields.photoCampaignFaceListIndex;
  if ( (unsigned int)photoCampaignFaceListIndex >= photoCampaignFaceList->max_length )
    goto LABEL_17;
  v17 = photoCampaignFaceList->m_Items[photoCampaignFaceListIndex];
  if ( !v17 )
    goto LABEL_16;
  multiForm = v17->fields.multiForm;
  if ( !multiForm )
    goto LABEL_16;
  if ( !multiForm->max_length )
LABEL_17:
    sub_1B68938(v8, v9);
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    &v7->fields.svtMovePos,
    &v7->fields.svtMoveScale,
    v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass425_0__ExchangePosition_b__0__,
    0LL);
  if ( !v21 )
LABEL_16:
    sub_1B68930(v8, v9);
  CommonUI__maskFadeout(v21, 1, DEFAULT_FADE_TIME, v23, 0LL);
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
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4A04523 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_1B686D4(&SwipeGesture_TypeInfo, v5);
    byte_4A04523 = 1;
  }
  if ( !gesture )
    sub_1B68930(this, gesture);
  startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startSelection, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
    {
      methodPtr_low = LOBYTE(SwipeGesture_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(gesture->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[methodPtr_low - 1] == SwipeGesture_TypeInfo )
      {
        if ( (v4->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(v4, 0, v7);
        if ( v4->fields.multipleViewState == 3 )
        {
          v4->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(v4, 1, v7);
        }
        if ( v4->fields.photoCampaignState == 3 )
        {
          v4->fields.photoCampaignState = 2;
          MyRoomControl__SetPhotoCampaignUi(v4, 1, v7);
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

  if ( (byte_4A0454A & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0454A = 1;
  }
  photoCampaignProduction = this->fields.photoCampaignProduction;
  this->fields.photoCampaignState = 2;
  if ( !photoCampaignProduction )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignBackGroundSprite;
  if ( !photoCampaignProduction )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignFadeSprite;
  if ( !photoCampaignProduction )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
    goto LABEL_11;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))photoCampaignProduction->klass[1].vtable._3_ToString.method)(
                                 photoCampaignProduction,
                                 photoCampaignProduction->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69171816(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_11:
    sub_1B68930(photoCampaignProduction, method);
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
  const MethodInfo *v9; // x2

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
      sub_1B68938(multipleViewCloseButton, method);
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
    sub_1B68930(multipleViewCloseButton, method);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4A0454C & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_4A0454C = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_25;
  photoCampaignStandFigureBack = (StandFigureBack_o *)titleInfo->fields.headerBgImg;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  photoCampaignStandFigureBack = (StandFigureBack_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                                        0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignStandFigureBack, 1, 0LL);
  photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v6);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_33417400(v8, 1.0, 0LL);
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = &this->fields.photoMasterTexture;
    photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoMasterTexture;
    if ( !photoCampaignStandFigureBack )
      goto LABEL_25;
    UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)photoCampaignStandFigureBack, 0LL);
    photoCampaignStandFigureBack = (StandFigureBack_o *)*p_photoMasterTexture;
    if ( !*p_photoMasterTexture )
      goto LABEL_25;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v11, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1B68678(&this->fields.photoMasterTexture);
  }
  if ( (photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.titleInfo) == 0LL)
    || ((TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignStandFigureBack, 1, 0LL),
         photoCampaignStandFigureBack = (StandFigureBack_o *)this->fields.photoCampaignComponent,
         this->fields.photoCampaignState != 7)
      ? (method = (const MethodInfo *)(unsigned int)this->fields.photoCampaignType)
      : (method = 0LL),
        !photoCampaignStandFigureBack) )
  {
LABEL_25:
    sub_1B68930(photoCampaignStandFigureBack, method);
  }
  PhotoCampaignComponent__Open(
    (PhotoCampaignComponent_o *)photoCampaignStandFigureBack,
    (int32_t)method,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v12);
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
    sub_1B68930(0LL, v4);
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
    sub_1B68930(photoCampaignStandFigureBack, method);
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
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  MyRoomSvtControl_o *v5; // x20
  PlayMakerFSM_o *myRoomFsm; // x8
  System_String_o **v7; // x9

  if ( (byte_4A044F8 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9229/*"NORMAL_FORM"*/, method);
    sub_1B686D4(&StringLiteral_3409/*"CHANGE_FORM"*/, v3);
    byte_4A044F8 = 1;
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 0;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__SetVoiceData(svtCtr, 0LL);
  if ( ((unsigned __int8)svtCtr & 1) == 0 )
    goto LABEL_13;
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFirstServantVoiceData(svtCtr, 0LL);
  if ( !svtCtr || (v5 = svtCtr, !HIDWORD(svtCtr->fields.asstName)) )
  {
LABEL_13:
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v7 = (System_String_o **)&StringLiteral_9229/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1B68930(svtCtr, method);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  if ( LODWORD(v5->fields.asstName) == (_DWORD)svtCtr )
    v7 = (System_String_o **)&StringLiteral_9229/*"NORMAL_FORM"*/;
  else
    v7 = (System_String_o **)&StringLiteral_3409/*"CHANGE_FORM"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myRoomFsm, *v7, 0LL);
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
  ManagerConfig_c *v7; // x0
  __int64 v8; // x1
  float v9; // s0
  struct UISprite_o *photoCampaignFrameSprite; // x8
  float v11; // s8
  float v12; // s9
  struct ManagerConfig_StaticFields *static_fields; // x9
  int *p_WIDTH; // x9
  int *p_mHeight; // x8
  float v16; // s0

  v6 = this;
  if ( (byte_4A04548 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B686D4(&ManagerConfig_TypeInfo, localScale);
    byte_4A04548 = 1;
  }
  v9 = MyRoomControl__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  photoCampaignFrameSprite = v6->fields.photoCampaignFrameSprite;
  if ( !photoCampaignFrameSprite )
    goto LABEL_12;
  v11 = v9;
  v7 = ManagerConfig_TypeInfo;
  v12 = (float)photoCampaignFrameSprite->fields.mHeight / (float)photoCampaignFrameSprite->fields.mWidth;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
    photoCampaignFrameSprite = v6->fields.photoCampaignFrameSprite;
  }
  static_fields = v7->static_fields;
  if ( v11 >= v12 )
  {
    if ( photoCampaignFrameSprite )
    {
      p_WIDTH = &static_fields->WIDTH;
      p_mHeight = &photoCampaignFrameSprite->fields.mHeight;
      goto LABEL_11;
    }
LABEL_12:
    sub_1B68930(v7, v8);
  }
  if ( !photoCampaignFrameSprite )
    goto LABEL_12;
  p_WIDTH = &static_fields->HEIGHT;
  p_mHeight = &photoCampaignFrameSprite->fields.mWidth;
LABEL_11:
  v16 = (float)*p_WIDTH / (float)*p_mHeight;
  localScale->fields.z = 1.0;
  localScale->fields.x = v16;
  localScale->fields.y = v16;
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
    sub_1B68930(v4, method);
  if ( (int)v4 >= (signed int)photoCampaignFaceList->max_length )
  {
    LODWORD(v4) = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  return v4;
}


int32_t __fastcall MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *materialImageIdList; // x0

  if ( (byte_4A04522 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4A04522 = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1B68930(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
}


UnityEngine_Vector3_o __fastcall MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MasterPhotoMaster_o *Master_object; // x0
  __int64 v5; // x1
  float y; // s8
  float offsetX; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v10; // s0
  float v11; // s1
  MasterPhotoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A04541 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_MasterPhotoMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    byte_4A04541 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_MasterPhotoMaster___);
  if ( !Master_object )
    goto LABEL_14;
  y = this->fields.defaultPhotoServantPos.fields.y;
  if ( this->fields._IsMasterRight_k__BackingField )
    offsetX = -150.0;
  else
    offsetX = -600.0;
  Master_object = (MasterPhotoMaster_o *)MasterPhotoMaster__TryGetEntity(
                                           Master_object,
                                           &entity,
                                           this->fields.photoMasterEquipId,
                                           this->fields.photoMasterGenderType,
                                           this->fields.photoMasterPosition,
                                           0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_14;
    offsetX = (float)entity->fields.offsetX;
    y = (float)entity->fields.offsetY;
  }
  Master_object = (MasterPhotoMaster_o *)this->fields.photoMasterTexture;
  if ( !Master_object )
LABEL_14:
    sub_1B68930(Master_object, v5);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v16; // s8
  float v17; // s1
  float y; // s9
  int v19; // w9
  System_Int32_array *v20; // x22
  int v21; // w10
  int v22; // w8
  int32_t photoCampaignType; // w8
  float PhotoSvtScale; // s0
  System_Int32_array *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  float LocalPositionZ; // s0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A04540 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_ServantScriptMaster___, *(_QWORD *)&imageId);
    sub_1B686D4(&DataManager_TypeInfo, v11);
    sub_1B686D4(&int___TypeInfo, v12);
    byte_4A04540 = 1;
  }
  entity = 0LL;
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  photoCampaignStandFigureBack = (__int64)StandFigureBack__GetSvtStandFigure(
                                            (StandFigureBack_o *)photoCampaignStandFigureBack,
                                            0,
                                            0LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  photoCampaignStandFigureBack = *(_QWORD *)(photoCampaignStandFigureBack + 32);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    v16 = -LocalPositionX;
  }
  else
  {
    v17 = -256.0;
    if ( !this->fields._IsMasterRight_k__BackingField )
      v17 = 256.0;
    v16 = v17 - LocalPositionX;
  }
  y = this->fields.defaultPhotoServantPos.fields.y;
  photoCampaignStandFigureBack = sub_1B6877C(int___TypeInfo, 2LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v19 = *(_DWORD *)(photoCampaignStandFigureBack + 24);
  v20 = (System_Int32_array *)photoCampaignStandFigureBack;
  if ( !v19 )
    goto LABEL_42;
  v21 = (int)v16;
  if ( v16 == INFINITY )
    v21 = 0x80000000;
  *(_DWORD *)(photoCampaignStandFigureBack + 32) = v21;
  if ( v19 == 1 )
LABEL_42:
    sub_1B68938(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  if ( y == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = v22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantScriptMaster___);
  *scale = 1.0;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  photoCampaignStandFigureBack = ServantScriptMaster__TryGetEntity(
                                   (ServantScriptMaster_o *)photoCampaignStandFigureBack,
                                   &entity,
                                   imageId,
                                   formId,
                                   0LL);
  if ( (photoCampaignStandFigureBack & 1) == 0 )
    goto LABEL_39;
  photoCampaignType = this->fields.photoCampaignType;
  if ( photoCampaignType != 1 )
  {
    if ( photoCampaignType )
      goto LABEL_37;
    photoCampaignStandFigureBack = (__int64)entity;
    if ( entity )
    {
      photoCampaignStandFigureBack = (__int64)ServantScriptEntity__GetPhotoSvtPosition(entity, v20, 0LL);
      if ( entity )
      {
        v20 = (System_Int32_array *)photoCampaignStandFigureBack;
        PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0LL);
        goto LABEL_36;
      }
    }
LABEL_41:
    sub_1B68930(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  }
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  v25 = this->fields._IsMasterRight_k__BackingField
      ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, v20, 0LL)
      : ServantScriptEntity__GetPhotoSvtPositionRight(entity, v20, 0LL);
  v20 = v25;
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  if ( this->fields._IsMasterRight_k__BackingField )
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0LL);
  else
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0LL);
LABEL_36:
  *scale = PhotoSvtScale;
  if ( !v20 )
    goto LABEL_41;
LABEL_37:
  if ( v20->max_length < 2 )
    goto LABEL_42;
  v16 = (float)v20->m_Items[1];
  y = (float)v20->m_Items[2];
LABEL_39:
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v26, 0LL);
  position->fields.x = v16;
  position->fields.y = y;
  position->fields.z = LocalPositionZ;
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
  ServantCostumeEntity_array *Instance; // x0
  __int64 id; // x1
  int max_length; // w8
  ServantCostumeEntity_array *v13; // x20
  unsigned int v14; // w21
  ServantCostumeEntity_o *v15; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4A04526 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A04526 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v13 = Instance;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B68938(Instance, id);
      v15 = v13->m_Items[v14];
      if ( !v15 )
        break;
      if ( !v9 )
        break;
      id = (unsigned int)v15->fields.id;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          id,
          *(const MethodInfo_349F254 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B68930(Instance, id);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A044E5 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B686D4(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_4A044E5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B68930(this, method);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v15; // x23
  __int64 v16; // x1
  BalanceConfig_c *v17; // x0

  if ( (byte_4A04512 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    sub_1B686D4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_MyRoomControl_GoToTitle__, v5);
    sub_1B686D4(&Method_MyRoomControl__GoToTitle_b__329_0__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_8778/*"MYROOM_TITLE_CONFIRM"*/, v8);
    sub_1B686D4(&StringLiteral_1/*""*/, v9);
    byte_4A04512 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v10 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_GoToTitle__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B686B8(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8778/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B68920(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__329_0__, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1B68930(v17, v16);
  CommonUI__OpenConfirmDialog(
    (CommonUI_o *)Instance,
    v12,
    v13,
    v15,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall MyRoomControl__HideContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *continueDeviceComp; // x0

  continueDeviceComp = (UnityEngine_Component_o *)this->fields.continueDeviceComp;
  if ( !continueDeviceComp
    || (continueDeviceComp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(continueDeviceComp, 0LL)) == 0LL )
  {
    sub_1B68930(continueDeviceComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceComp, 0, 0LL);
}


void __fastcall MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4A04553 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04553 = 1;
  }
  this->fields.photoCampaignState = 3;
  photoMasterTouchPress = (UnityEngine_Object_o *)this->fields.photoMasterTouchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoMasterTouchPress;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  photoSvtTouchPress = (UnityEngine_Object_o *)this->fields.photoSvtTouchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSvtTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoSvtTouchPress;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_1B68930(gameObject, v4);
  }
LABEL_15:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v7);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitMaterialOnBackground_d__284_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A04505 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__InitMaterialOnBackground_d__284_TypeInfo, method);
    byte_4A04505 = 1;
  }
  v3 = (MyRoomControl__InitMaterialOnBackground_d__284_o *)sub_1B68920(MyRoomControl__InitMaterialOnBackground_d__284_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__284___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  v3->fields.__4__this = this;
  sub_1B68678(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitServantMenu_d__287_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A04507 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__InitServantMenu_d__287_TypeInfo, method);
    byte_4A04507 = 1;
  }
  v3 = (MyRoomControl__InitServantMenu_d__287_o *)sub_1B68920(MyRoomControl__InitServantMenu_d__287_TypeInfo);
  MyRoomControl__InitServantMenu_d__287___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  v3->fields.__4__this = this;
  sub_1B68678(&v3->fields.__4__this);
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

  if ( (byte_4A04533 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, method);
    byte_4A04533 = 1;
  }
  if ( !this->fields.isEnoughServantMultipleView )
    return 0;
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A0454E & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, method);
    byte_4A0454E = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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

  v4 = this;
  if ( (byte_4A0452C & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_4A0452C = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1B68938(this, *(_QWORD *)&index);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1B68930(this, *(_QWORD *)&index);
  }
  return SLODWORD(this->fields.moveBtnObjInitPos.fields.x) > 15;
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A044F4 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15500/*"Wait_Action"*/, method);
    sub_1B686D4(&StringLiteral_7181/*"Help"*/, v3);
    byte_4A044F4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15500/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7181/*"Help"*/, 0LL) )
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
  if ( (float)((float)((float)(v13 - position.fields.z) * (float)(v13 - position.fields.z))
             + (float)((float)((float)(v11 - position.fields.x) * (float)(v11 - position.fields.x))
                     + (float)((float)(v12 - position.fields.y) * (float)(v12 - position.fields.y)))) < 1.0e-10 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_1B68930(myRoomFsm, method);
  return !mMaterialEventLogListViewManager->fields.mIsDoing_Slide;
}


bool __fastcall MyRoomControl__IsServantMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.isServantMaterial;
}


void __fastcall MyRoomControl__LinkageStatusCheckCallback(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  int32_t notificationType; // w8

  if ( (byte_4A0450A & 1) == 0 )
  {
    sub_1B686D4(&AccountLinkageParams_TypeInfo, result);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v5);
    byte_4A0450A = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22150/*"ok"*/, 0LL) )
  {
    notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
    if ( notificationType == 2 )
    {
      MyRoomControl__OverrideAccountLinkage(this, v6);
    }
    else if ( notificationType == 1 )
    {
      MyRoomControl__AutoDelinkAccountLinkage(this, v6);
    }
    else
    {
      MyRoomControl__CheckCsUnlink(this, v6);
    }
  }
}


void __fastcall MyRoomControl__LoadMasterEquip(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
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
  Il2CppObject *Master_object; // x20
  __int64 UserId; // x0
  __int64 v17; // x1
  UserEquipEntity_array *List; // x20
  __int64 v19; // x8
  __int64 v20; // x0
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v22; // x29
  __int64 *v23; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x19
  unsigned int v25; // w27
  UserEquipEntity_o *v26; // x28
  __int64 v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  __int64 v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v31; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v32; // x0
  UserEquipEntity_array *v33; // x29
  const MethodInfo_3133FA0 **v34; // x20
  __int64 v35; // x25
  __int64 v36; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v42; // x0
  Il2CppObject *v43; // x0
  System_String_o *v44; // x24
  AssetLoader_LoadEndDataHandler_o *v45; // x25
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v49; // x0
  Il2CppObject *v50; // x0
  System_String_o *v51; // x23
  AssetLoader_LoadEndDataHandler_o *v52; // x24
  __int128 v54; // [xsp+10h] [xbp-80h] BYREF
  __int128 v55; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4A04539 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_EquipMaster___, v2);
    sub_1B686D4(&Method_DataManager_GetMaster_UserEquipMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v6);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__0__, v11);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__1__, v12);
    sub_1B686D4(&MyRoomControl___c__DisplayClass394_0_TypeInfo, v13);
    sub_1B686D4(&StringLiteral_8863/*"MasterFace/equip{0:D5}"*/, v14);
    byte_4A04539 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BBA5B0(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BBA5B0(v20);
  UserId = **(_QWORD **)(v20 + 184);
  if ( !UserId )
    goto LABEL_33;
  UserId = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_33;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v23 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserId;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1B68938(UserId, v17);
      v26 = List->m_Items[v25];
      v27 = sub_1B68920(MyRoomControl___c__DisplayClass394_0_TypeInfo);
      MyRoomControl___c__DisplayClass394_0___ctor((MyRoomControl___c__DisplayClass394_0_o *)v27, 0LL);
      if ( !v27 )
        break;
      *(_QWORD *)(v27 + 24) = this;
      UserId = sub_1B68678(v27 + 24);
      if ( !v26 )
        break;
      v29 = *(_QWORD *)&v26->fields.equipId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v26->fields.equipId.fields.fakeValue;
      if ( !(*v22)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v22);
      *(_QWORD *)&v56.fields.currentCryptoKey = v29;
      *(_QWORD *)&v56.fields.fakeValue = v28;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v56, 0LL);
      if ( !v24 )
        break;
      v30 = v27 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v24,
              (Il2CppObject **)(v27 + 16),
              UserId,
              (const MethodInfo_30E4514 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v31 = v22;
      v32 = *v22;
      v33 = List;
      v34 = (const MethodInfo_3133FA0 **)v23;
      v36 = *(_QWORD *)&v26->fields.equipId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v26->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v32->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v32);
      *(_QWORD *)&v57.fields.currentCryptoKey = v36;
      *(_QWORD *)&v57.fields.fakeValue = v35;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v57, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v23 = (__int64 *)v34;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        UserId,
        0LL,
        *v34);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v26->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        UserId,
        0LL,
        *v34);
      if ( !*(_QWORD *)v30 )
        break;
      v42 = *v31;
      List = v33;
      v22 = v31;
      v55 = *(_OWORD *)(*(_QWORD *)v30 + 64LL);
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(v42, &v55, v39, v40, v41);
      v44 = System_String__Format((System_String_o *)StringLiteral_8863/*"MasterFace/equip{0:D5}"*/, v43, 0LL);
      v45 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v45,
        (Il2CppObject *)v27,
        Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UserId = AssetManager__loadAssetStorage(v44, v45, 10, 0LL);
      if ( !*(_QWORD *)v30 )
        break;
      v49 = *v31;
      v54 = *(_OWORD *)(*(_QWORD *)v30 + 80LL);
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(v49, &v54, v46, v47, v48);
      v51 = System_String__Format((System_String_o *)StringLiteral_8863/*"MasterFace/equip{0:D5}"*/, v50, 0LL);
      v52 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v52,
        (Il2CppObject *)v27,
        Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__1__,
        0LL);
      UserId = AssetManager__loadAssetStorage(v51, v52, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v25 >= max_length )
        return;
    }
LABEL_33:
    sub_1B68930(UserId, v17);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadMultipleServant_d__378_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A0452E & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__LoadMultipleServant_d__378_TypeInfo, method);
    byte_4A0452E = 1;
  }
  v3 = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B68920(MyRoomControl__LoadMultipleServant_d__378_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__378___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  v3->fields.__4__this = this;
  sub_1B68678(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MyRoomControl___c__DisplayClass393_0_o *v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4A04538 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, callBack);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass393_0__LoadPhotoCampaignAssets_b__0__, v7);
    sub_1B686D4(&MyRoomControl___c__DisplayClass393_0_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_9161/*"MyRoom/PhotoCampaign"*/, v9);
    byte_4A04538 = 1;
  }
  v10 = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass393_0_TypeInfo);
  MyRoomControl___c__DisplayClass393_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  v10->fields.__4__this = this;
  sub_1B68678(&v10->fields);
  v10->fields.callBack = callBack;
  sub_1B68678(&v10->fields.callBack);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass393_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9161/*"MyRoom/PhotoCampaign"*/, v13, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1B68930(Instance, v12);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A0453E & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__LoadPhotoCampaignServant_d__400_TypeInfo, method);
    byte_4A0453E = 1;
  }
  v3 = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B68920(MyRoomControl__LoadPhotoCampaignServant_d__400_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__400___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  v3->fields.__4__this = this;
  sub_1B68678(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A044E0 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, method);
    byte_4A044E0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A044FC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__LoadServantForm_b__265_0__, v3);
    byte_4A044FC = 1;
  }
  svtCtr = this->fields.svtCtr;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__265_0__, 0LL);
  if ( !svtCtr )
    sub_1B68930(v6, v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v5, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v5; // x1
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A044FD & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, method);
    sub_1B686D4(&StringLiteral_8232/*"LOAD_END"*/, v3);
    byte_4A044FD = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v7, 0LL);
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v6->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v5);
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
LABEL_8:
    sub_1B68930(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8232/*"LOAD_END"*/, 0LL);
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
  if ( (byte_4A0451A & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9167/*"MyRoomUIAnimationEnd"*/, target);
    byte_4A0451A = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9167/*"MyRoomUIAnimationEnd"*/, v4);
}


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
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  const MethodInfo *v27; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x5
  int32_t photoCampaignState; // w8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  int32_t type; // w8
  int32_t mState; // w8
  int v38; // w9
  char v39; // w8
  __int64 *v40; // x8
  __int64 *v41; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  System_String_o *ActiveStateName; // x0
  struct NoticeInfoComponent_o *noticeComp; // x8
  struct MaterialCollectionComponent_o *materialCollectionComp; // x20
  MyRoomControl_c *v47; // x0
  struct NoticeInfoComponent_o *v48; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A04517 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickBack__, method);
    sub_1B686D4(&MyRoomControl_TypeInfo, v3);
    sub_1B686D4(&NetworkManager_TypeInfo, v4);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_3557/*"CLOSE_ACCOUNT_LINKAGE"*/, v6);
    sub_1B686D4(&StringLiteral_3569/*"CLOSE_MATERIAL_COLLECTION"*/, v7);
    sub_1B686D4(&StringLiteral_3568/*"CLOSE_MATERIAL"*/, v8);
    sub_1B686D4(&StringLiteral_3580/*"CLOSE_USER_SERVANT_COIN"*/, v9);
    sub_1B686D4(&StringLiteral_3504/*"CLICK_BACK"*/, v10);
    sub_1B686D4(&StringLiteral_3572/*"CLOSE_NOTICE"*/, v11);
    sub_1B686D4(&StringLiteral_3566/*"CLOSE_GAMEOPTION"*/, v12);
    sub_1B686D4(&StringLiteral_3567/*"CLOSE_ITEMLIST"*/, v13);
    sub_1B686D4(&StringLiteral_3570/*"CLOSE_MATERIAL_COSTUME"*/, v14);
    sub_1B686D4(&StringLiteral_3563/*"CLOSE_CONTINUE_DEVICE"*/, v15);
    sub_1B686D4(&StringLiteral_3558/*"CLOSE_BLACKLIST"*/, v16);
    sub_1B686D4(&StringLiteral_12917/*"State 5"*/, v17);
    sub_1B686D4(&StringLiteral_3575/*"CLOSE_SERIAL_CODE"*/, v18);
    sub_1B686D4(&StringLiteral_3560/*"CLOSE_CHANGE_PROFILE"*/, v19);
    sub_1B686D4(&StringLiteral_3576/*"CLOSE_SOUND_PLAYER"*/, v20);
    this = (MyRoomControl_o *)sub_1B686D4(&StringLiteral_3565/*"CLOSE_FAVORITE_CHANGE"*/, v21);
    byte_4A04517 = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_75;
  if ( !mMaterialEventLogListViewManager->fields.mIsDoing_Slide )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
          v33 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v33 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickBack__);
          v34 = (System_Reflection_MethodBase_o *)sub_1B686B8(v33, v33[4]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v35);
        }
        else if ( multipleViewState == 1 )
        {
          v25 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v25 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickBack__);
          v26 = (System_Reflection_MethodBase_o *)sub_1B686B8(v25, v25[4]);
          OverwriteAssetSoundName__PlaySystemSe(v26, 1, 0LL);
          v2->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v2, v27);
        }
        return;
      }
      if ( v2->fields.photoCampaignState )
      {
        v28 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
          v28 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickBack__);
        v29 = (System_Reflection_MethodBase_o *)sub_1B686B8(v28, v28[4]);
        OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0LL);
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
              v31);
            break;
          case 2:
            v2->fields.photoCampaignServantUsrId = 0LL;
            v2->fields.photoCampaignState = 1;
            v2->fields.photoCampaignLimitCount = 0;
            MyRoomControl__ClosePhotoCampaignServant(v2, v30);
            break;
          case 1:
            v2->fields.photoCampaignState = 0;
            MyRoomControl__ClosePhotoCampaignPanel(v2, v30);
            break;
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
          goto LABEL_75;
        this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        type = v2->fields.type;
      }
      method = (const MethodInfo *)StringLiteral_3504/*"CLICK_BACK"*/;
      v38 = type - 1;
      v39 = 0;
      switch ( v38 )
      {
        case 0:
          v40 = &StringLiteral_3568/*"CLOSE_MATERIAL"*/;
          goto LABEL_48;
        case 1:
          v41 = &StringLiteral_3569/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_57;
        case 2:
          v41 = &StringLiteral_3567/*"CLOSE_ITEMLIST"*/;
          goto LABEL_57;
        case 3:
          v41 = &StringLiteral_3560/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_57;
        case 4:
          optionComp = v2->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v39 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              method = (const MethodInfo *)StringLiteral_3558/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v41 = &StringLiteral_3566/*"CLOSE_GAMEOPTION"*/;
LABEL_57:
            method = (const MethodInfo *)*v41;
            v39 = 0;
          }
LABEL_58:
          if ( ((unsigned __int8)v39 & (v2->fields.mState != 0)) != 0 )
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
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_12917/*"State 5"*/, 0LL) )
              return;
            this = (MyRoomControl_o *)v2->fields.myRoomData;
            if ( this )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0LL);
              if ( this )
              {
                noticeComp = this->fields.noticeComp;
                *(_QWORD *)&v49.fields.fakeValue = this->fields.materialCollectionComp;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  v48 = this->fields.noticeComp;
                  materialCollectionComp = this->fields.materialCollectionComp;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  noticeComp = v48;
                  *(_QWORD *)&v49.fields.fakeValue = materialCollectionComp;
                }
                *(_QWORD *)&v49.fields.currentCryptoKey = noticeComp;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v49, 0LL) < 1
                  || v2->fields.isHeroine && v2->fields.isHeroineReave )
                {
                  return;
                }
                this = (MyRoomControl_o *)v2->fields.changeBtnImg;
                if ( this )
                {
                  v50.fields.r = 1.0;
                  v50.fields.g = 1.0;
                  v50.fields.b = 1.0;
                  v50.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)this, v50, 0LL);
                  v47 = MyRoomControl_TypeInfo;
                  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                    v47 = MyRoomControl_TypeInfo;
                  }
                  v2->fields.buttonFlag |= v47->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 5:
          v40 = &StringLiteral_3572/*"CLOSE_NOTICE"*/;
LABEL_48:
          method = (const MethodInfo *)*v40;
          v39 = 1;
          goto LABEL_58;
        case 6:
          v41 = &StringLiteral_3575/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_57;
        case 7:
          v41 = &StringLiteral_3563/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_57;
        case 8:
          v41 = &StringLiteral_3565/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_57;
        case 9:
          v41 = &StringLiteral_3576/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_57;
        case 10:
          v41 = &StringLiteral_3570/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_57;
        case 16:
          v41 = &StringLiteral_3580/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_57;
        case 17:
          v41 = &StringLiteral_3557/*"CLOSE_ACCOUNT_LINKAGE"*/;
          goto LABEL_57;
        default:
          goto LABEL_58;
      }
LABEL_75:
      sub_1B68930(this, method);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  Il2CppObject *Entity; // x21
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t materialFigureSvtDispIdx; // w9
  int32_t v27; // w8
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct FsmTemplate_o *fsmTemplate; // x20
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A044F3 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B686D4(&Method_MyRoomControl_OnClickChangeLimit__, v7);
    sub_1B686D4(&MyRoomControl_TypeInfo, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B686D4(&StringLiteral_15500/*"Wait_Action"*/, v11);
    sub_1B686D4(&StringLiteral_3413/*"CHANGE_LIMIT"*/, v12);
    sub_1B686D4(&StringLiteral_7181/*"Help"*/, v13);
    byte_4A044F3 = 1;
  }
  v14 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v14 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v14->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2 | ((this->fields.buttonFlag & v14->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
    goto LABEL_30;
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15500/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v17 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_7181/*"Help"*/, 0LL) )
      return;
  }
  if ( !this->fields.isServantMaterial )
  {
    if ( !this->fields.isHeroine || !this->fields.isHeroineReave )
    {
      if ( !MyRoomControl__IsScrollviewInShowPosition(this, method) )
        goto LABEL_40;
      myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomData;
      if ( !myRoomFsm )
        goto LABEL_45;
      myRoomFsm = (PlayMakerFSM_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomFsm, this->fields.fvrUsrSvtId, 0LL);
      if ( !myRoomFsm )
        goto LABEL_45;
      fsm = myRoomFsm[1].fields.fsm;
      fsmTemplate = myRoomFsm[1].fields.fsmTemplate;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = fsm;
      *(_QWORD *)&v35.fields.fakeValue = fsmTemplate;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v35, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v28 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickChangeLimit__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B686B8(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_45;
  if ( !myRoomFsm )
    goto LABEL_45;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)myRoomFsm,
                       usrData->fields.userId,
                       this->fields.materialServantId,
                       0LL);
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v34, 0LL);
  if ( !v20 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)myRoomFsm,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v24);
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
  {
    if ( EntityDefinitely->fields.maxLimitCount > 0 )
      goto LABEL_23;
    if ( !Entity )
      goto LABEL_45;
    myRoomFsm = (PlayMakerFSM_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Entity, 0LL);
    if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    {
LABEL_23:
      materialImageIdList = this->fields.materialImageIdList;
      if ( !materialImageIdList )
        goto LABEL_45;
      materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
      if ( materialFigureSvtDispIdx + 1 < materialImageIdList->fields._size )
        v27 = materialFigureSvtDispIdx + 1;
      else
        v27 = 0;
      this->fields.materialFigureSvtDispIdx = v27;
LABEL_40:
      MyRoomControl__BlockTouch(this, method);
      this->fields.isSvtLoading = 1;
      v32 = Method_MyRoomControl_OnClickChangeLimit__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickChangeLimit__);
      v33 = (System_Reflection_MethodBase_o *)sub_1B686B8(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3413/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1B68930(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A04529 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickCloseMultipleView__, method);
    byte_4A04529 = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
}


void __fastcall MyRoomControl__OnClickDispPhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4A04554 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickDispPhotoUi__, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A04554 = 1;
  }
  v4 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickDispPhotoUi__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields.photoCampaignState = 2;
  photoMasterTouchPress = (UnityEngine_Object_o *)this->fields.photoMasterTouchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoMasterTouchPress;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  photoSvtTouchPress = (UnityEngine_Object_o *)this->fields.photoSvtTouchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSvtTouchPress, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.photoSvtTouchPress;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        goto LABEL_17;
      }
    }
LABEL_19:
    sub_1B68930(gameObject, v7);
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v10);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4A04537 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_4A04537 = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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
    sub_1B68930(materialCollectionServantListViewManager, v5);
  }
  materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !materialCollectionServantListViewManager )
    goto LABEL_10;
  MaterialEventLogListViewManager__EventLogSortKind(
    (MaterialEventLogListViewManager_o *)materialCollectionServantListViewManager,
    this->fields.eventLogServantSortSelectMenu,
    v6);
}


void __fastcall MyRoomControl__OnClickLeftServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A0452A & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickLeftServant__, method);
    byte_4A0452A = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 0, v6);
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
  UnityEngine_GameObject_o *v9; // x20
  float v10; // s11
  float v11; // s10
  float v12; // s9
  float v13; // s5
  float v14; // s6
  float v15; // s7
  float v16; // s4
  UnityEngine_GameObject_o *v17; // x0
  float x; // s12
  float v19; // s13
  float v20; // s14
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x20
  float v24; // s5
  float v25; // s6
  float v26; // s7
  float v27; // s4
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x20
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float y; // s5
  float z; // s6
  float w; // s7
  float v39; // s4
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x20
  float v43; // s5
  float v44; // s6
  float v45; // s7
  float v46; // s4
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  TweenAlpha_o *v50; // x20
  UnityEngine_Vector3_o v51; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v58; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v59; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v60; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v61; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4A04547 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_1B686D4(&StringLiteral_6675/*"FinishedCloseFullScreenPhotoCampaign"*/, v3);
    byte_4A04547 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v51.fields.z = 0.0;
  *(_QWORD *)&v51.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_37;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  switch ( photoCampaignState )
  {
    case 6:
      v31 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v32 = (System_Reflection_MethodBase_o *)sub_1B686B8(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v33 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v34 = (System_Reflection_MethodBase_o *)sub_1B686B8(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v55.fields.x = 0.0;
      v55.fields.y = 0.0;
      v55.fields.z = 0.0;
      v64 = UnityEngine_Quaternion__Internal_FromEulerRad(v55, 0LL);
      y = v64.fields.y;
      z = v64.fields.z;
      w = v64.fields.w;
      v64.fields.y = v64.fields.x;
      v64.fields.z = y;
      v64.fields.w = z;
      v39 = w;
      TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v64.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v58.fields.x = 1.0;
      v58.fields.y = 1.0;
      v58.fields.z = 1.0;
      TweenScale__Begin(v40, 0.2, v58, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v59.fields.x = 0.0;
      v59.fields.y = 11.0;
      v59.fields.z = 0.0;
      TweenPosition__Begin(v41, 0.2, v59, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v56.fields.x = 0.0;
      v56.fields.y = 0.0;
      v56.fields.z = 0.0;
      v65 = UnityEngine_Quaternion__Internal_FromEulerRad(v56, 0LL);
      v43 = v65.fields.y;
      v44 = v65.fields.z;
      v45 = v65.fields.w;
      v65.fields.y = v65.fields.x;
      v65.fields.z = v43;
      v65.fields.w = v44;
      v46 = v45;
      TweenRotation__Begin(v42, 0.2, *(UnityEngine_Quaternion_o *)&v65.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v60.fields.x = 1.0;
      v60.fields.y = 1.0;
      v60.fields.z = 1.0;
      TweenScale__Begin(v47, 0.2, v60, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v61.fields.x = 0.0;
      v61.fields.y = 11.0;
      v61.fields.z = 0.0;
      TweenPosition__Begin(v48, 0.2, v61, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
LABEL_34:
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v50 = TweenAlpha__Begin(v49, 0.2, 0.0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !v50 )
        goto LABEL_37;
      v50->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
      sub_1B68678(&v50->fields.eventReceiver);
      v50->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6675/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1B68678(&v50->fields.callWhenFinished);
      return;
    case 4:
      v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      this->fields.photoCampaignState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v51, v8);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        v10 = v51.fields.x * 0.017453;
        v11 = v51.fields.y * 0.017453;
        v12 = v51.fields.z * 0.017453;
        v53.fields.x = v51.fields.x * 0.017453;
        v53.fields.y = v51.fields.y * 0.017453;
        v53.fields.z = v51.fields.z * 0.017453;
        v62 = UnityEngine_Quaternion__Internal_FromEulerRad(v53, 0LL);
        v13 = v62.fields.y;
        v14 = v62.fields.z;
        v15 = v62.fields.w;
        v62.fields.y = v62.fields.x;
        v62.fields.z = v13;
        v62.fields.w = v14;
        v16 = v15;
        TweenRotation__Begin(v9, 0.2, *(UnityEngine_Quaternion_o *)&v62.fields.y, 0LL);
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
            v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
            if ( !byte_4A03901 )
            {
              sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v21);
              byte_4A03901 = 1;
            }
            TweenPosition__Begin(v22, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              v54.fields.x = v10;
              v54.fields.y = v11;
              v54.fields.z = v12;
              v63 = UnityEngine_Quaternion__Internal_FromEulerRad(v54, 0LL);
              v24 = v63.fields.y;
              v25 = v63.fields.z;
              v26 = v63.fields.w;
              v63.fields.y = v63.fields.x;
              v63.fields.z = v24;
              v63.fields.w = v25;
              v27 = v26;
              TweenRotation__Begin(v23, 0.2, *(UnityEngine_Quaternion_o *)&v63.fields.y, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v57.fields.x = x;
                v57.fields.y = v19;
                v57.fields.z = v20;
                TweenScale__Begin(v28, 0.2, v57, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                  if ( !byte_4A03901 )
                  {
                    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v29);
                    byte_4A03901 = 1;
                  }
                  TweenPosition__Begin(v30, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
LABEL_37:
      sub_1B68930(maskBoxCollider, method);
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

  if ( (byte_4A04545 & 1) == 0 )
  {
    sub_1B686D4(&TouchEffectManager_TypeInfo, method);
    byte_4A04545 = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1B68930(backBtn, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall MyRoomControl__OnClickPhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct UIPanel_o *v9; // x8

  if ( (byte_4A04555 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B686D4(&Method_MyRoomControl_OnClickPhotoServant__, v3);
    byte_4A04555 = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        photoMasterPanel = this->fields.photoMasterPanel;
        if ( photoMasterPanel )
        {
          v6 = (UIPanel_o *)photoCampaignStandFigureBack;
          if ( SLODWORD(photoCampaignStandFigureBack[13].monitor) > photoMasterPanel->fields.mDepth )
            return;
          v7 = Method_MyRoomControl_OnClickPhotoServant__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoServant__ + 83) & 2) != 0 )
            v7 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickPhotoServant__);
          v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
          v9 = this->fields.photoMasterPanel;
          if ( v9 )
          {
            UIPanel__set_depth(v6, v9->fields.mDepth + 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A0452B & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickRightServant__, method);
    byte_4A0452B = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 1, v6);
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
  bool IsEnableMultipleViewButton; // w0
  _QWORD *v13; // x8
  bool v14; // w20
  System_Reflection_MethodBase_o *v15; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v17; // x20
  int max_length; // w9
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x4

  if ( (byte_4A04527 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&int___TypeInfo, v3);
    sub_1B686D4(&long___TypeInfo, v4);
    sub_1B686D4(&Method_MyRoomControl_OnClickSelectMultipleServant__, v5);
    sub_1B686D4(&Method_MyRoomControl__OnClickSelectMultipleServant_b__370_0__, v6);
    sub_1B686D4(&StringLiteral_15500/*"Wait_Action"*/, v7);
    sub_1B686D4(&StringLiteral_7181/*"Help"*/, v8);
    byte_4A04527 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15500/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v11 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7181/*"Help"*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v13 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v14 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B686B8(v13, v13[4]);
  if ( !v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1B68930(myRoomFsm, method);
  v17 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v17 >= max_length )
      break;
    if ( (unsigned int)v17 >= max_length )
      sub_1B68938(myRoomFsm, method);
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v17];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v17;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_16;
  }
  this->fields.multipleServantUsrIds = (struct System_Int64_array *)sub_1B6877C(long___TypeInfo, 2LL);
  sub_1B68678(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = (struct System_Int32_array *)sub_1B6877C(int___TypeInfo, 2LL);
  sub_1B68678(&this->fields.multipleLimitCounts);
  v19 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__370_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v19, 1, v20);
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
  bool IsEnablePhotoCampaignButton; // w0
  _QWORD *v11; // x8
  bool v12; // w20
  System_Reflection_MethodBase_o *v13; // x0
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_4A0453A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl_EndLoadPhotoAsset__, v3);
    sub_1B686D4(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v4);
    sub_1B686D4(&StringLiteral_15500/*"Wait_Action"*/, v5);
    sub_1B686D4(&StringLiteral_7181/*"Help"*/, v6);
    byte_4A0453A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15500/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_7181/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1B68930(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v11 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v12 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B686B8(v11, v11[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_MyRoomControl_EndLoadPhotoAsset__, 0LL);
    MyRoomControl__LoadPhotoCampaignAssets(this, v14, v15);
    if ( !this->fields.isLoadMasterEquip )
    {
      this->fields.isLoadMasterEquip = 1;
      MyRoomControl__LoadMasterEquip(this, v16);
    }
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
  }
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCollectionServantListViewManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A04536 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomRootComponent_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4A04536 = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  dropObjectList = Instance->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_13;
  methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomRootComponent_TypeInfo
    || !*(_QWORD *)&dropObjectList[1].fields._size )
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
    sub_1B68930(Instance, v5);
  }
  Instance = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !Instance )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder((MaterialEventLogListViewManager_o *)Instance, v5);
}


void __fastcall MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomControl_c *v6; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4A044F7 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickSvt__, method);
    sub_1B686D4(&MyRoomControl_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_10351/*"PLAY_VOICE"*/, v5);
    byte_4A044F7 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_12;
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v6->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2 | ((this->fields.buttonFlag & v6->static_fields->BUTTON_VOICE_PLAY) == 0) )
  {
LABEL_12:
    v8 = Method_MyRoomControl_OnClickSvt__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickSvt__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickSvt__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B686B8(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
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
        MyRoomControl__setNormalFace_31079460(this, 1, v11);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10351/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_1B68930(svtCtr, v7);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A04528 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickUiDisableMultipleView__, method);
    byte_4A04528 = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v5);
}


void __fastcall MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v7; // x1
  _QWORD *monitor; // x8
  __int64 methodPtr_low; // x11
  __int64 v10; // x8
  MyRoomStateMaterial_o *v11; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v15; // x2
  _BOOL4 v16; // w19

  if ( (byte_4A04535 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_1B686D4(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B686D4(&MyRoomRootComponent_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4A04535 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  monitor = Instance[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*monitor + 304LL) < (unsigned int)methodPtr_low )
    goto LABEL_16;
  if ( *(MyRoomRootComponent_c **)(*(_QWORD *)(*monitor + 200LL) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo )
    goto LABEL_16;
  v10 = monitor[8];
  if ( !v10 )
    goto LABEL_16;
  v11 = *(MyRoomStateMaterial_o **)(v10 + 880);
  v12 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnClickValentineListChange__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B686B8(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v11
    || (MyRoomStateMaterial__ValentineListMomentChange(v11, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_16:
    sub_1B68930(Instance, v7);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v15);
  v16 = this->fields.IsListActive;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SaveIsListActive(v16, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4A044E3 & 1) == 0 )
  {
    sub_1B686D4(&Gesture_EventHandler_TypeInfo, method);
    sub_1B686D4(&FingerGestures_TypeInfo, v3);
    sub_1B686D4(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4A044E3 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B68920(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v5, 0LL);
}


void __fastcall MyRoomControl__OnclickPhotoMaster(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct UIPanel_o *v9; // x8

  if ( (byte_4A04556 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B686D4(&Method_MyRoomControl_OnclickPhotoMaster__, v3);
    byte_4A04556 = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      photoMasterPanel = this->fields.photoMasterPanel;
      if ( photoMasterPanel )
      {
        v6 = (UIPanel_o *)photoCampaignStandFigureBack;
        if ( photoCampaignStandFigureBack )
        {
          if ( photoMasterPanel->fields.mDepth > SLODWORD(photoCampaignStandFigureBack[13].monitor) )
            return;
          v7 = Method_MyRoomControl_OnclickPhotoMaster__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnclickPhotoMaster__ + 83) & 2) != 0 )
            v7 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_OnclickPhotoMaster__);
          v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
          v9 = this->fields.photoMasterPanel;
          if ( v9 )
          {
            UIPanel__set_depth(v6, v9->fields.mDepth - 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B68930(0LL, method);
  AccountLinkageComponent__OpenMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__OpenMasterEquipSettingDialog(
        MyRoomControl_o *this,
        System_Action_int__int__o *callBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MasterEquipSettingDialog_o *masterEquipSettingDialog; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x23
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  System_Action_bool__o *v11; // x25
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A0453C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, callBack);
    sub_1B686D4(&Method_MyRoomControl_SetMaskCollider__, v7);
    byte_4A0453C = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v11 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1B68930(v12, v13);
  MasterEquipSettingDialog__Open(
    masterEquipSettingDialog,
    masterMaleEquipTexture,
    masterFemaleEquipTexture,
    callBack,
    closeCallBack,
    v11,
    0LL);
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
  sub_1B68678(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1B68678(&this->fields.multipleLimitCounts);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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
  SelectImageLimitDialog_o *selectImageLimitDialog; // x24
  System_Action_bool__o *v13; // x25
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x6

  if ( (byte_4A04532 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, *(_QWORD *)&type);
    sub_1B686D4(&Method_MyRoomControl_SetMaskCollider__, v11);
    byte_4A04532 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v13 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1B68930(v14, v15);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v13, callback, index, v16);
}


void __fastcall MyRoomControl__OverrideAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AccountLinkageComponent_c *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v13; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_int__o v20; // 0:x4.8

  if ( (byte_4A0450B & 1) == 0 )
  {
    sub_1B686D4(&AccountLinkageComponent_TypeInfo, method);
    sub_1B686D4(&System_Action_TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_MyRoomControl__OverrideAccountLinkage_b__316_0__, v5);
    sub_1B686D4(&Method_System_Nullable_int___ctor__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_2010/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v8);
    sub_1B686D4(&StringLiteral_3379/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_4A0450B = 1;
  }
  v10 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v10 = AccountLinkageComponent_TypeInfo;
  }
  v10->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2010/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__316_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_35D914C *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B68930(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3379/*"CAN_CONTINUE_DEVICE"*/, 0LL);
  MyRoomControl__HideContinueDeviceMenu(this, v16);
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
  MyRoomControl___c__DisplayClass357_0_o *v11; // x24
  MyRoomControl_o *v12; // x0
  const MethodInfo *v13; // x1
  CRIMoviePlayer_o *CriMoviePlayerObject; // x0
  __int64 v15; // x1
  CRIMoviePlayer_o **p_player; // x22
  __int64 v17; // x1
  CRIMoviePlayer_o *player; // x23
  BgmManager_c *v19; // x0
  float masterVolume; // s8
  System_Action_o *v21; // x25

  if ( (byte_4A04520 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, fileName);
    sub_1B686D4(&BgmManager_TypeInfo, v8);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass357_0__PlayOpening_b__0__, v9);
    sub_1B686D4(&MyRoomControl___c__DisplayClass357_0_TypeInfo, v10);
    byte_4A04520 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass357_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass357_0_TypeInfo);
  MyRoomControl___c__DisplayClass357_0___ctor(v11, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.player = CriMoviePlayerObject;
  p_player = &v11->fields.player;
  sub_1B68678(&v11->fields);
  player = v11->fields.player;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4A0456C )
  {
    sub_1B686D4(&BgmManager_TypeInfo, v17);
    byte_4A0456C = 1;
  }
  v19 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v19 = BgmManager_TypeInfo;
  }
  masterVolume = v19->static_fields->masterVolume;
  v21 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass357_0__PlayOpening_b__0__, 0LL);
  if ( !player
    || (CRIMoviePlayer__Initialize(player, fileName, assetPath, masterVolume, isCanSkip, 0LL, v21, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *p_player) == 0LL) )
  {
LABEL_13:
    sub_1B68930(CriMoviePlayerObject, v15);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AssetData_o *photoCampaignAssetData; // x20
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v13; // x21
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  System_Object_array *v15; // x21
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x19

  if ( (byte_4A04557 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData__ToArray__, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    byte_4A04557 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1B68678(&this->fields.photoCampaignShutterEffect);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1B68678(&this->fields.photoCampaignCameraEffect);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1B68678(&this->fields.photoLayerChangeObj);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37539444(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1B68678(&this->fields.photoCampaignAssetData);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !v8 )
      goto LABEL_38;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1B68678(&this->fields.photoTargetSelectDialog);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !v8 )
      goto LABEL_38;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v11, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1B68678(&this->fields.photoSettingButtonComponent);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !v8 )
      goto LABEL_38;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v13, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1B68678(&this->fields.masterEquipSettingDialog);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v15 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37539652((AssetData_array *)v15, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1B68678(&this->fields.masterEquipAssetData);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = &this->fields.photoMasterTexture;
    v8 = (UnityEngine_Component_o *)*p_photoMasterTexture;
    if ( *p_photoMasterTexture )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)v8, 0LL);
      *p_photoMasterTexture = 0LL;
      sub_1B68678(p_photoMasterTexture);
      return;
    }
LABEL_38:
    sub_1B68930(v8, v7);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  struct System_String_o **p_asstName; // x20

  if ( (byte_4A044E1 & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, method);
    byte_4A044E1 = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = &this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    *p_asstName = 0LL;
    sub_1B68678(p_asstName);
  }
}


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
  __int64 v16; // x1
  UIWidget_o *playBtnImg; // x0
  __int64 v18; // x20
  __int64 v19; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v21; // w20
  System_String_o *ActiveStateName; // x0
  bool v23; // w0
  MyRoomControl_c *v24; // x0
  MyRoomControl_c *v25; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0451C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B686D4(&MyRoomControl_TypeInfo, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_12917/*"State 5"*/, v5);
    byte_4A0451C = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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
  if ( !playBtnImg )
    goto LABEL_35;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v28, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  if ( !playBtnImg )
    goto LABEL_35;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v29, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !playBtnImg )
    goto LABEL_35;
  playBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)playBtnImg, this->fields.fvrUsrSvtId, 0LL);
  if ( !playBtnImg )
    goto LABEL_35;
  v19 = *(_QWORD *)&playBtnImg->fields.mChanged;
  v18 = *(_QWORD *)&playBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v27, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_35;
    v21 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v21 = (int)playBtnImg;
  }
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
    goto LABEL_35;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)playBtnImg, 0LL);
  v23 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_12917/*"State 5"*/, 0LL);
  if ( v21 >= 1 && v23 )
  {
    playBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !playBtnImg )
      goto LABEL_35;
    v30.fields.r = 1.0;
    v30.fields.g = 1.0;
    v30.fields.b = 1.0;
    v30.fields.a = 1.0;
    UIWidget__set_color(playBtnImg, v30, 0LL);
    v24 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v24 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v24->static_fields->BUTTON_LIMIT_CHANGE;
  }
  playBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !playBtnImg )
    goto LABEL_35;
  v31.fields.r = 1.0;
  v31.fields.g = 1.0;
  v31.fields.b = 1.0;
  v31.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v31, 0LL);
  v25 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v25 = MyRoomControl_TypeInfo;
  }
  static_fields = v25->static_fields;
  playBtnImg = (UIWidget_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !playBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playBtnImg, 0, 0LL),
        (playBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_35:
    sub_1B68930(playBtnImg, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)playBtnImg, 0, 0LL);
  if ( this->fields.type == 10 )
  {
    playBtnImg = (UIWidget_o *)this->fields.soundPlayerComp;
    if ( playBtnImg )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)playBtnImg, 0, 0LL);
      return;
    }
    goto LABEL_35;
  }
}


void __fastcall MyRoomControl__SetAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 18;
  if ( !titleInfo )
    sub_1B68930(0LL, v3);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 89, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5);
}


void __fastcall MyRoomControl__SetBackButtonIgnore(MyRoomControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0
  _BOOL8 v5; // x1

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  v5 = flag;
  this->fields.isBackBtnIgnore = v5;
  if ( !maskBoxCollider )
    sub_1B68930(0LL, v5);
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


void __fastcall MyRoomControl__SetChangeBtn(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v5; // x0
  int v6; // w8
  MyRoomControl_c *v7; // x0
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A044F1 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_1B686D4(&MyRoomControl_TypeInfo, v3);
    byte_4A044F1 = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1B68930(this, method);
  }
  else
  {
    materialImageIdList = v2->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_17;
  }
  this = (MyRoomControl_o *)v2->fields.changeBtnImg;
  if ( materialImageIdList->fields._size <= 1 )
  {
    if ( !this )
      goto LABEL_17;
    v9.fields.r = 0.5;
    v9.fields.g = 0.5;
    v9.fields.b = 0.5;
    v9.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v9, 0LL);
    v7 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v7 = MyRoomControl_TypeInfo;
    }
    v6 = v2->fields.buttonFlag & ~v7->static_fields->BUTTON_LIMIT_CHANGE;
  }
  else
  {
    if ( !this )
      goto LABEL_17;
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v8, 0LL);
    v5 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v5 = MyRoomControl_TypeInfo;
    }
    v6 = v2->fields.buttonFlag | v5->static_fields->BUTTON_LIMIT_CHANGE;
  }
  v2->fields.buttonFlag = v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetEnableMultipleViewUi(MyRoomControl_o *this, bool isEnable, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *multipleFaceChangeButtons; // x8
  MyRoomControl_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9

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
      sub_1B68938(this, isEnable);
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
    sub_1B68930(this, isEnable);
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
  __int64 v7; // x1
  struct StandFigureBack_o *photoCampaignStandFigureBack; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  __int64 size; // x25
  unsigned __int64 v11; // x22
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v14; // w23
  int32_t v15; // w24
  System_Action_o *v16; // x3

  v6 = this;
  if ( (byte_4A04542 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, faceData);
    this = (MyRoomControl_o *)sub_1B686D4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    byte_4A04542 = 1;
  }
  photoCampaignStandFigureBack = v6->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_19;
  standFigureCollectList = (System_Collections_Generic_List_object__o *)photoCampaignStandFigureBack->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_19;
  size = (unsigned int)standFigureCollectList->fields._size;
  if ( (int)size >= 1 )
  {
    if ( faceData )
    {
      v11 = 0LL;
      while ( 1 )
      {
        multiFace = faceData->fields.multiFace;
        if ( !multiFace )
          break;
        if ( v11 >= multiFace->max_length )
          goto LABEL_20;
        multiForm = faceData->fields.multiForm;
        if ( !multiForm )
          break;
        if ( v11 >= multiForm->max_length )
LABEL_20:
          sub_1B68938(this, faceData);
        v14 = multiFace->m_Items[v11 + 1];
        v15 = multiForm->m_Items[v11 + 1];
        this = (MyRoomControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    v11,
                                    (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (MyRoomControl_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v11 )
          v16 = 0LL;
        else
          v16 = callbackFunc;
        UIStandFigureR__SetFace_40716228((UIStandFigureR_o *)this, v14, v15, v16, 0.0, 0LL);
        if ( size == ++v11 )
          return;
      }
    }
LABEL_19:
    sub_1B68930(this, faceData);
  }
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
  MyRoomControl___c__DisplayClass322_0_o *v13; // x21
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  ServantVoiceEntity_o **p_svtVoiceEnt; // x22
  const MethodInfo *v19; // x1
  ServantVoiceEntity_o *v20; // x23
  System_String_o *asstName; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x23
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_4A0450F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__0__, v9);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__1__, v10);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__2__, v11);
    sub_1B686D4(&MyRoomControl___c__DisplayClass322_0_TypeInfo, v12);
    byte_4A0450F = 1;
  }
  v13 = (MyRoomControl___c__DisplayClass322_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass322_0_TypeInfo);
  MyRoomControl___c__DisplayClass322_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  v13->fields.__4__this = this;
  sub_1B68678(&v13->fields);
  v13->fields.callback = callback;
  sub_1B68678(&v13->fields.callback);
  MyRoomControl__setupSvtImageIdList(this, v16);
  v13->fields.svtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v17);
  p_svtVoiceEnt = &v13->fields.svtVoiceEnt;
  sub_1B68678(&v13->fields.svtVoiceEnt);
  if ( v13->fields.svtVoiceEnt )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v19);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        v20 = *p_svtVoiceEnt;
        Instance = (CommonUI_o *)System_Collections_Generic_List_int___get_Item(
                                   (System_Collections_Generic_List_int__o *)Instance,
                                   this->fields.figureSvtDispIdx,
                                   (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( v20 )
        {
          this->fields.voiceList = ServantVoiceEntity__getMyRoomVoiceList(v20, (int32_t)Instance, 0LL);
          sub_1B68678(&this->fields.voiceList);
          Instance = (CommonUI_o *)*p_svtVoiceEnt;
          if ( *p_svtVoiceEnt )
          {
            this->fields.asstName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
            sub_1B68678(&this->fields.asstName);
            asstName = this->fields.asstName;
            v22 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(
              v22,
              (Il2CppObject *)v13,
              Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v22, v23);
            goto LABEL_11;
          }
        }
      }
    }
LABEL_14:
    sub_1B68930(Instance, v15);
  }
  this->fields.isExistVoiceData = 0;
LABEL_11:
  v24 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__1__,
    0LL);
  v13->fields.action = v24;
  sub_1B68678(&v13->fields.action);
  if ( IsActSetMyRoomStandFigre )
  {
    v25 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v25, v26);
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

  v4 = this;
  if ( (byte_4A0452D & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_4A0452D = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1B68930(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B68938(this, *(_QWORD *)&frontIndex);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B68930(0LL, flag);
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
  MyRoomControl___c__DisplayClass242_0_o *v12; // x21
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v17; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  int32_t v20; // w0
  int32_t Id; // w22
  int32_t v22; // w22
  int32_t v23; // w0
  StandFigureBack_o *standFigureBack; // x20
  int32_t v25; // w23
  System_Action_o *v26; // x24

  if ( (byte_4A044F0 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__0__, v9);
    sub_1B686D4(&MyRoomControl___c__DisplayClass242_0_TypeInfo, v10);
    sub_1B686D4(&UIStandFigureRender_TypeInfo, v11);
    byte_4A044F0 = 1;
  }
  v12 = (MyRoomControl___c__DisplayClass242_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass242_0_TypeInfo);
  MyRoomControl___c__DisplayClass242_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v12->fields.__4__this = this;
  sub_1B68678(&v12->fields);
  v12->fields.end_act = end_act;
  sub_1B68678(&v12->fields.end_act);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v15);
    MyRoomControl__SetChangeBtn(this, v17);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_16;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                    Item,
                                                                    0LL);
  if ( !mStateMaterial )
    goto LABEL_16;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, (int32_t)materialImageIdList, 0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !materialImageIdList )
    goto LABEL_16;
  v20 = System_Collections_Generic_List_int___get_Item(
          materialImageIdList,
          this->fields.materialFigureSvtDispIdx,
          (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
  Id = ServantScriptMaster__getId(servantId, v20, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  if ( !this->fields.materialImageIdList
    || (v22 = (int)materialImageIdList,
        v23 = System_Collections_Generic_List_int___get_Item(
                this->fields.materialImageIdList,
                this->fields.materialFigureSvtDispIdx,
                (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__),
        standFigureBack = this->fields.standFigureBack,
        v25 = v23,
        v26 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v12,
          Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__0__,
          0LL),
        !standFigureBack) )
  {
LABEL_16:
    sub_1B68930(materialImageIdList, v14);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v25, 1, 0, v22, 10, v26, 0, 0LL);
}


void __fastcall MyRoomControl__SetMultipleViewButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsEnableMultipleViewButton; // w8
  UIWidget_o *multipleViewButtonSprite; // x0
  float v6; // s8
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonSprite;
  if ( IsEnableMultipleViewButton )
    v6 = 1.0;
  else
    v6 = 0.5;
  if ( !multipleViewButtonSprite
    || (v7.fields.a = 1.0,
        v7.fields.r = v6,
        v7.fields.g = v6,
        v7.fields.b = v6,
        UIWidget__set_color(multipleViewButtonSprite, v7, 0LL),
        (multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonLabel) == 0LL) )
  {
    sub_1B68930(multipleViewButtonSprite, v3);
  }
  v8.fields.a = 1.0;
  v8.fields.r = v6;
  v8.fields.g = v6;
  v8.fields.b = v6;
  UIWidget__set_color(multipleViewButtonSprite, v8, 0LL);
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
  MyRoomControl___c__DisplayClass240_0_o *v10; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  bool _37438804; // w8
  int32_t figureSvtId; // w21
  int32_t Item; // w0
  int32_t v17; // w21
  int32_t v18; // w21
  int32_t v19; // w0
  StandFigureBack_o *standFigureBack; // x22
  int32_t v21; // w19
  int32_t v22; // w23
  System_Action_o *v23; // x24

  if ( (byte_4A044EE & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, end_act);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B686D4(&TutorialFlag_TypeInfo, v6);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__0__, v7);
    sub_1B686D4(&MyRoomControl___c__DisplayClass240_0_TypeInfo, v8);
    sub_1B686D4(&UIStandFigureRender_TypeInfo, v9);
    byte_4A044EE = 1;
  }
  v10 = (MyRoomControl___c__DisplayClass240_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass240_0_TypeInfo);
  MyRoomControl___c__DisplayClass240_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  v10->fields.__4__this = this;
  sub_1B68678(&v10->fields);
  v10->fields.end_act = end_act;
  sub_1B68678(&v10->fields.end_act);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, v10->fields.end_act, v13);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37438804 = TutorialFlag__Get_37438804(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _37438804;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_15;
  figureSvtId = this->fields.figureSvtId;
  Item = System_Collections_Generic_List_int___get_Item(
           imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
  imageIdList = (System_Collections_Generic_List_int__o *)ServantScriptMaster__getId(figureSvtId, Item, 0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_15;
  v17 = (int)imageIdList;
  MyRoomData__getUsrSvtData(this->fields.myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  imageIdList = (System_Collections_Generic_List_int__o *)UIStandFigureRender__GetForm(v17, 1, -1, 0LL);
  if ( !this->fields.imageIdList
    || (v18 = (int)imageIdList,
        v19 = System_Collections_Generic_List_int___get_Item(
                this->fields.imageIdList,
                this->fields.figureSvtDispIdx,
                (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__),
        standFigureBack = this->fields.standFigureBack,
        v21 = this->fields.figureSvtId,
        v22 = v19,
        v23 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v10,
          Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__0__,
          0LL),
        !standFigureBack) )
  {
LABEL_15:
    sub_1B68930(imageIdList, v12);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, v21, v22, 1, 0, v18, 10, v23, 0, 0LL);
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
  MyRoomControl___c__DisplayClass241_0_o *v9; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v11; // x1
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4A044EF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, end_act);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B686D4(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass241_0__SetMySvtFigure_b__0__, v7);
    sub_1B686D4(&MyRoomControl___c__DisplayClass241_0_TypeInfo, v8);
    byte_4A044EF = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass241_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.__4__this = this,
        sub_1B68678(&v9->fields),
        v9->fields.end_act = end_act,
        sub_1B68678(&v9->fields.end_act),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1B68930(materialImageIdList, v11);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v14);
  v15 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v9, Method_MyRoomControl___c__DisplayClass241_0__SetMySvtFigure_b__0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v15, v16);
}


void __fastcall MyRoomControl__SetPhotoCampaignButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsEnablePhotoCampaignButton; // w8
  UIWidget_o *photoCampaignButtonSprite; // x0
  float v6; // s8
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonSprite;
  if ( IsEnablePhotoCampaignButton )
    v6 = 1.0;
  else
    v6 = 0.5;
  if ( !photoCampaignButtonSprite
    || (v7.fields.a = 1.0,
        v7.fields.r = v6,
        v7.fields.g = v6,
        v7.fields.b = v6,
        UIWidget__set_color(photoCampaignButtonSprite, v7, 0LL),
        (photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonLabel) == 0LL) )
  {
    sub_1B68930(photoCampaignButtonSprite, v3);
  }
  v8.fields.a = 1.0;
  v8.fields.r = v6;
  v8.fields.g = v6;
  v8.fields.b = v6;
  UIWidget__set_color(photoCampaignButtonSprite, v8, 0LL);
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
    sub_1B68930(photoCampaignAtlas, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21

  if ( (byte_4A04550 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, isActive);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A04550 = 1;
  }
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, isActive, 0LL);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.photoSettingButtonComponent;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  photoCampaignCameraButton = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)photoCampaignCameraButton,
                                0LL);
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, isActive, 0LL);
  if ( isActive )
  {
    photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
    if ( photoCampaignCameraButton )
    {
      photoCampaignCameraEffect = (Il2CppObject *)this->fields.photoCampaignCameraEffect;
      transform = UnityEngine_GameObject__get_transform(photoCampaignCameraButton, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49072196(
                                                                                               photoCampaignCameraEffect,
                                                                                               transform,
                                                                                               (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
      sub_1B68678(&this->fields.photoCampaignInstantiateCameraEffect);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1B68930(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69171816(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1B68678(&this->fields.photoCampaignInstantiateCameraEffect);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
}


void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *v9; // x20
  UITweener_o *v10; // x20
  UITweener_o *v11; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4A044F9 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A044F9 = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(voicePlayEffect, 1, 0LL);
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_21;
    voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayEffect, 0LL);
    v9 = (UnityEngine_Transform_o *)voicePlayEffect;
    if ( !byte_4A03906 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4A03906 = 1;
    }
    if ( !v9
      || (UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v10 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v10)
      || (v11 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v10, 0.0, 0LL), !v11) )
    {
LABEL_21:
      sub_1B68930(voicePlayEffect, v7);
    }
    UITweener__set_tweenFactor(v11, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      v10->fields.style = 1;
      v11->fields.style = 1;
    }
    else
    {
      v10->fields.style = 0;
      v11->fields.style = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_46755020(v10, 1, 0LL);
    UITweener__Play_46755020(v11, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_1B68930(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_69131556(
                                              0,
                                              photoCampaignFaceList->max_length,
                                              0LL);
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  this->fields.sceneJumpInfo = info;
  sub_1B68678(&this->fields.sceneJumpInfo);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B68930(0LL, v3);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B68930(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A044E6 & 1) == 0 )
  {
    sub_1B686D4(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_4A044E6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B68930(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3071A0C *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4A044DA & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A044DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, 0LL),
        !this->fields.frontObjectManager) )
  {
    sub_1B68930(Instance, v5);
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
  int32_t LimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v16; // w20
  int v17; // w9
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v19; // x2
  DataManager_o *v20; // x22
  int32_t v21; // w23
  int32_t v22; // w26
  int32_t ImageLimitCount; // w24
  int32_t v24; // w24
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v29; // x21
  unsigned __int64 i; // x23
  int32_t v31; // w22
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10

  if ( (byte_4A044DC & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B686D4(&MaterialServantLimitCountManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A044DC = 1;
  }
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)Instance,
                                servantId,
                                LimitCount,
                                0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_46;
  v16 = (int)Instance;
  v17 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_46;
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)Instance,
                                usrData->fields.userId,
                                servantId,
                                0LL);
  if ( !Instance )
    goto LABEL_46;
  v20 = Instance;
  if ( ((__int64)Instance->fields.masterDataBytes & 0x80000000) == 0 )
  {
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v21, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    (ServantLimitImageMaster_o *)Instance,
                                    servantId,
                                    ImageLimitCount,
                                    0LL);
      if ( !this->fields.materialImageIdList )
        break;
      v24 = (int)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    this->fields.materialImageIdList,
                                    (int32_t)Instance,
                                    (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          break;
        v25 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v25 )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Instance,
            v24,
            *(const MethodInfo_349F254 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v25 + 4 * m_CancellationTokenSource_low + 32) = v24;
        }
        if ( v24 == v16 )
          this->fields.materialFigureSvtDispIdx = v22;
        ++v22;
      }
      if ( ++v21 > SLODWORD(v20->fields.masterDataBytes) )
        goto LABEL_31;
    }
LABEL_46:
    sub_1B68930(Instance, v14);
  }
  v22 = 0;
LABEL_31:
  Instance = (DataManager_o *)MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)Instance, servantId, v19);
  if ( !Instance )
    goto LABEL_46;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v29 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B68938(Instance, v14);
      v31 = *((_DWORD *)&v29->fields._DispLog + i);
      if ( v31 >= 1 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_46;
        v32 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v32 )
          goto LABEL_46;
        v34 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Instance,
            v31,
            *(const MethodInfo_349F254 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v34 + 1;
          *(_DWORD *)(v32 + 4 * v34 + 32) = v31;
        }
        if ( v31 == v16 )
          this->fields.materialFigureSvtDispIdx = v22;
        ++v22;
      }
      LODWORD(m_CancellationTokenSource) = v29->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall MyRoomControl__ShowContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1B68930(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4A044E2 & 1) == 0 )
  {
    sub_1B686D4(&Gesture_EventHandler_TypeInfo, method);
    sub_1B686D4(&FingerGestures_TypeInfo, v3);
    sub_1B686D4(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4A044E2 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B68920(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__StartCameraEffect_d__411_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A04546 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__StartCameraEffect_d__411_TypeInfo, method);
    byte_4A04546 = 1;
  }
  v3 = (MyRoomControl__StartCameraEffect_d__411_o *)sub_1B68920(MyRoomControl__StartCameraEffect_d__411_TypeInfo);
  MyRoomControl__StartCameraEffect_d__411___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  v3->fields.__4__this = this;
  sub_1B68678(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A044E4 & 1) == 0 )
  {
    sub_1B686D4(&Method_CStateManager_MyRoomControl__update__, method);
    byte_4A044E4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30719E8 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_4A04534 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&NetworkManager_TypeInfo, v3);
    byte_4A04534 = 1;
  }
  if ( (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    multipleViewButtonRemainTimeLabel = this->fields.multipleViewButtonRemainTimeLabel;
    multipleViewFinishedTime = this->fields.multipleViewFinishedTime;
    v7 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v7, 0LL);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_1B68930(RestTime6, v9);
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

  if ( (byte_4A0454F & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&NetworkManager_TypeInfo, v3);
    byte_4A0454F = 1;
  }
  if ( (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    photoCampaignButtonRemainTimeLabel = this->fields.photoCampaignButtonRemainTimeLabel;
    photoCampaignFinishedTime = this->fields.photoCampaignFinishedTime;
    v7 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v7, 0LL);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_1B68930(RestTime6, v9);
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
    sub_1B68930(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__317_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A0455F & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0455F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B68930(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___ChangeMasterSetting_b__424_0(
        MyRoomControl_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MyRoomControl___c__DisplayClass424_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x20

  if ( (byte_4A04565 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass424_0__ChangeMasterSetting_b__1__, v9);
    sub_1B686D4(&MyRoomControl___c__DisplayClass424_0_TypeInfo, v10);
    byte_4A04565 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass424_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass424_0_TypeInfo);
  MyRoomControl___c__DisplayClass424_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  v11->fields.__4__this = this;
  sub_1B68678(&v11->fields.__4__this);
  v11->fields.genderType = genderType;
  v11->fields.equipId = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass424_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1B68930(v12, v13);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__424_2(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *photoMasterTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v6; // x1
  CommonUI_o *v7; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A04566 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A04566 = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v6);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)photoMasterTexture;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1B68930(photoMasterTexture, method);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__384_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A04562 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__CloseMultipleView_b__384_1__, v3);
    byte_4A04562 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__384_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1B68930(v6, v7);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v5, v8);
}


void __fastcall MyRoomControl___CloseMultipleView_b__384_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  int max_length; // w9
  const MethodInfo *v8; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 40, 0, 0LL);
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
      sub_1B68938(titleInfo, method);
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
    sub_1B68930(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__418_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A04564 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_1__, v3);
    byte_4A04564 = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_1B68930(v6, v7);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v5, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__418_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_1B68930(titleInfo, method);
  }
  StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v6);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__290_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B68930(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___EndLoadPhotoAsset_b__397_0(
        MyRoomControl_o *this,
        int32_t photoType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x4

  if ( (byte_4A04563 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&photoType);
    sub_1B686D4(&Method_MyRoomControl__EndLoadPhotoAsset_b__397_1__, v5);
    byte_4A04563 = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v6 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__397_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v6, 1, v7);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__397_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_1B68930(this, method);
  PhotoCampaignComponent__Open(
    photoCampaignComponent,
    this->fields.photoCampaignType,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___GoToTitle_b__329_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  MyRoomControl_o *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x19
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x20
  Il2CppObject *v16; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4A04561 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_MyRoomControl___c__GoToTitle_b__329_1__, v6);
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v7);
    byte_4A04561 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v10, v11);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      Instance = MyRoomControl___c_TypeInfo;
    }
    v15 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 40LL);
    if ( !v15 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MyRoomControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v15 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v15, v16, Method_MyRoomControl___c__GoToTitle_b__329_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__329_1 = v15;
      Instance = (void *)sub_1B68678(&static_fields->__9__329_1);
    }
    if ( v12 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v12, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_16:
    sub_1B68930(Instance, v9);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__287_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B68930(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__265_0(MyRoomControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A0455D & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__LoadServantForm_b__265_1__, v4);
    sub_1B686D4(&StringLiteral_8418/*"LoadServantFormEnd"*/, v5);
    byte_4A0455D = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v8 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__265_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B68930(SvtStandFigure, method);
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
  MyRoomControl__moveControl(this, this->fields.svtObj, v15, (System_String_o *)StringLiteral_8418/*"LoadServantFormEnd"*/, v14);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__370_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1B68930(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__316_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A0455E & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0455E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B68930(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__321_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A04560 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_3571/*"CLOSE_MENU"*/, method);
    byte_4A04560 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3571/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__248_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A0455C & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_7123/*"HIDE_END"*/, method);
    byte_4A0455C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7123/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__285_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B68930(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__239_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v5; // x8

  if ( (byte_4A0455B & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_8232/*"LOAD_END"*/, method);
    sub_1B686D4(&StringLiteral_8233/*"LOAD_END_TO_HELP"*/, v3);
    byte_4A0455B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, method);
  if ( this->fields.type == 6 )
    v5 = (System_String_o **)&StringLiteral_8233/*"LOAD_END_TO_HELP"*/;
  else
    v5 = (System_String_o **)&StringLiteral_8232/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__221_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A0455A & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, result);
    byte_4A0455A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MyRoomControl_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  v4 = (MyRoomControl_o **)this;
  if ( (byte_4A04502 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_11012/*"REQUEST_OK"*/, result);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v5);
    this = (MyRoomControl_o *)sub_1B686D4(&StringLiteral_11010/*"REQUEST_NG"*/, v6);
    byte_4A04502 = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_61427784(result, (System_String_o *)StringLiteral_22150/*"ok"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v7 = &StringLiteral_11010/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B68930(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v7 = &StringLiteral_11012/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4A04513 & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, method);
    byte_4A04513 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37438804(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1B68930(0LL, v3);
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
    sub_1B68930(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1B68930(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *svtCtr; // x0

  svtCtr = (StandFigureBack_o *)this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.baseCallbackFunc = 0LL,
        sub_1B68678(&svtCtr->fields.baseCallbackFunc),
        (svtCtr = this->fields.standFigureBack) == 0LL) )
  {
    sub_1B68930(svtCtr, method);
  }
  StandFigureBack__DestroyFigure(svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A04500 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_11398/*"SAVE_END"*/, method);
    byte_4A04500 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11398/*"SAVE_END"*/, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w0
  int32_t v11; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A044DE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_1B686D4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B686D4(&MyRoomControl_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A044DE = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v6->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_14;
  v10 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v10 )
  {
    v11 = v10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v11,
                                 (const MethodInfo_30E4514 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1B68930(Instance, v9);
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

  if ( (byte_4A044DF & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, method);
    byte_4A044DF = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1B68930(v4, v5);
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
    sub_1B68930(0LL, method);
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
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v16; // w8
  struct System_Collections_Generic_List_int__o *v18; // x8
  MyRoomControl_c *v19; // x0
  int v20; // w8
  MyRoomControl_c *v21; // x0
  int32_t v22; // w20
  int32_t Item; // w0
  StandFigureBack_c *v24; // x8
  int32_t LimitCountByImageLimit; // w19
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A044F2 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B686D4(&MyRoomControl_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B686D4(&StandFigureBack_TypeInfo, v10);
    byte_4A044F2 = 1;
  }
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  myRoomData = (MyRoomData_o *)sub_1B68678(&this->fields.usrData);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_35;
  favoriteUserSvtId = usrData->fields.favoriteUserSvtId;
  this->fields.fvrUsrSvtId = favoriteUserSvtId;
  if ( favoriteUserSvtId < 1 )
    return 0LL;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_35;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0LL);
  if ( myRoomData )
  {
    if ( limitCntReset )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_35;
      figureSvtDispIdx = this->fields.figureSvtDispIdx;
      if ( figureSvtDispIdx + 1 < imageIdList->fields._size )
        v16 = figureSvtDispIdx + 1;
      else
        v16 = 0;
      this->fields.figureSvtDispIdx = v16;
    }
    else
    {
      v18 = this->fields.imageIdList;
      if ( !v18 )
        goto LABEL_35;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v18->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_35;
        v27.fields.r = 0.5;
        v27.fields.g = 0.5;
        v27.fields.b = 0.5;
        v27.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v27, 0LL);
        v21 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v21 = MyRoomControl_TypeInfo;
        }
        v20 = this->fields.buttonFlag & ~v21->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_35;
        v26.fields.r = 1.0;
        v26.fields.g = 1.0;
        v26.fields.b = 1.0;
        v26.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v26, 0LL);
        v19 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v19 = MyRoomControl_TypeInfo;
        }
        v20 = this->fields.buttonFlag | v19->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v20;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_35;
  v22 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
  v24 = StandFigureBack_TypeInfo;
  LimitCountByImageLimit = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v24 = StandFigureBack_TypeInfo;
  }
  if ( LimitCountByImageLimit < v24->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(LimitCountByImageLimit, 0LL);
  }
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData
    || (myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)myRoomData,
                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_35:
    sub_1B68930(myRoomData, favoriteUserSvtId);
  }
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v22, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A044FB & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A044FB = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1B68930(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v9, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x20

  if ( (byte_4A04516 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_1B686D4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1B686D4(&NetworkManager_TypeInfo, v4);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B686D4(&TutorialFlag_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v7);
    byte_4A04516 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37438804(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1B68930(helpListViewManager, v8);
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v10,
                                                         (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !helpListViewManager )
    goto LABEL_12;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)helpListViewManager, 128, 0LL);
  EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall MyRoomControl__hideContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1B68930(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A0450E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__hideFavoriteSvt_b__321_0__, v3);
    byte_4A0450E = 1;
  }
  v4 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__321_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1B68930(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1B68930(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1B68930(0LL, method);
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
    sub_1B68930(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1B68930(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A04510 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_3571/*"CLOSE_MENU"*/, method);
    byte_4A04510 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B68930(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3571/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4A04511 & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, method);
    byte_4A04511 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1B68930(soundPlayerComp, method);
  }
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
  {
    MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v5);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(MyRoomBgm, 0LL);
  }
}


void __fastcall MyRoomControl__hideSvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v6; // x1
  MyRoomControl_c *v7; // x0
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v9; // x21
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A044F5 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__hideSvtFigure_b__248_0__, v3);
    sub_1B686D4(&MyRoomControl_TypeInfo, v4);
    byte_4A044F5 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v10, 0LL);
  v7 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v7 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v7->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v6);
  standFigureBack = this->fields.standFigureBack;
  v9 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__248_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1B68930(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v9, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1B68930(0LL, method);
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
    sub_1B68930(usrItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__initMaterial_d__285_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A04506 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__initMaterial_d__285_TypeInfo, method);
    byte_4A04506 = 1;
  }
  v3 = (MyRoomControl__initMaterial_d__285_o *)sub_1B68920(MyRoomControl__initMaterial_d__285_TypeInfo);
  MyRoomControl__initMaterial_d__285___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  v3->fields.__4__this = this;
  sub_1B68678(&v3->fields.__4__this);
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 standFigureBack; // x0
  const MethodInfo *v28; // x2
  CStateManager_T__o *v29; // x21
  CStateManager_T__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v31; // x21
  struct EventMaster_o **p_eventMaster; // x20
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v35; // x3
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v37; // x22
  Il2CppObject *v38; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x4
  MyRoomControl_o *v42; // x0
  const MethodInfo *v43; // x4
  MyRoomParamsManager_c *v44; // x0
  struct MyRoomParamsManager_StaticFields *v45; // x8
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x1
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v55; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v59; // x21
  int max_length; // w9
  int v61; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x1
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v70; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_object__o *v72; // x22
  System_Collections_Generic_Dictionary_int__object__o *v73; // x22
  System_Collections_Generic_Dictionary_int__object__o *v74; // x22
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  UnityEngine_Vector3_o v79; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A044D9 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AtlasManager_TypeInfo, v3);
    sub_1B686D4(&Method_CStateManager_MyRoomControl___ctor__, v4);
    sub_1B686D4(&Method_CStateManager_MyRoomControl__add__, v5);
    sub_1B686D4(&CStateManager_MyRoomControl__TypeInfo, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1B686D4(&DataManager_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v11);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData___ctor__, v13);
    sub_1B686D4(&System_Collections_Generic_List_AssetData__TypeInfo, v14);
    sub_1B686D4(&LocalizationManager_TypeInfo, v15);
    sub_1B686D4(&Method_MyRoomControl_LoadScriptFileListAssetData__, v16);
    sub_1B686D4(&MyRoomParamsManager_TypeInfo, v17);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B686D4(&SoundManager_TypeInfo, v19);
    sub_1B686D4(&MyRoomControl_StateEtc_TypeInfo, v20);
    sub_1B686D4(&Method_MyRoomControl___c__initMyRoom_b__216_0__, v21);
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v22);
    sub_1B686D4(&StringLiteral_10324/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v23);
    sub_1B686D4(&StringLiteral_17411/*"btn_bg_12"*/, v24);
    sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, v25);
    sub_1B686D4(&StringLiteral_8743/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v26);
    byte_4A044D9 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v79.fields.z = 0.0;
  *(_QWORD *)&v79.fields.x = 0LL;
  standFigureBack = (__int64)this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (__int64)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_52;
  }
  if ( !this->fields.mFSM )
  {
    v29 = (CStateManager_T__o *)sub_1B68920(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v29,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_30718D8 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v29;
    sub_1B68678(&this->fields.mFSM);
    standFigureBack = (__int64)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_52;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_3071980 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v31 = (MyRoomControl_StateEtc_o *)sub_1B68920(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v31, 0LL);
    if ( !mFSM )
      goto LABEL_52;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_3071980 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v28);
  standFigureBack = (__int64)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (__int64)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_52;
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)standFigureBack,
                                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
  sub_1B68678(&this->fields.eventMaster);
  standFigureBack = (__int64)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)standFigureBack, this->fields.myRoomFsm, 1, 0LL, 40, 0LL);
  standFigureBack = (__int64)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_52;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)standFigureBack, 30, 0LL);
  standFigureBack = (__int64)this->fields.myRoomListCtr;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomListControl__Setup((MyRoomListControl_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  standFigureBack = (__int64)this->fields.voiceClickCollider;
  if ( !standFigureBack )
    goto LABEL_52;
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
  standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
  }
  v37 = *(System_Action_o **)(*(_QWORD *)(standFigureBack + 184) + 8LL);
  if ( !v37 )
  {
    if ( !*(_DWORD *)(standFigureBack + 224) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
    }
    v38 = **(Il2CppObject ***)(standFigureBack + 184);
    v37 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v37, v38, Method_MyRoomControl___c__initMyRoom_b__216_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__216_0 = v37;
    standFigureBack = sub_1B68678(&static_fields->__9__216_0);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_52;
  v40 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v37, v35);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v40,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v41);
  MyRoomControl__setupSortWindowUIMoveData(v42, this->fields.sortWindowObj, &v, &v79, v43);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_4A0456A )
  {
    sub_1B686D4(&MyRoomParamsManager_TypeInfo, method);
    byte_4A0456A = 1;
  }
  v44 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v44 = MyRoomParamsManager_TypeInfo;
  }
  v45 = v44->static_fields;
  standFigureBack = (__int64)this->fields.soundPlayerComp;
  this->fields.IsListActive = v45->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_52;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v46);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v47);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v50 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_52;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v50, 0LL);
  MyRoomControl__setupSvtImageIdList(this, v51);
  standFigureBack = (__int64)this->fields.helpListViewManager;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomHelpListViewManager__LoadBaseSprite((MyRoomHelpListViewManager_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)this->fields.changeLimitBtn;
  this->fields.mState = 0;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (__int64)this->fields.moveBtnObj;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (__int64)this->fields.helpBtn;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  if ( !this->fields.isSetVoicePlayButtonDefaultPos )
  {
    this->fields.voicePlayButtonDefaultPos = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  *(_QWORD *)&this->fields.voicePlayBtnInitPos.fields.x = *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x;
  this->fields.voicePlayBtnInitPos.fields.z = this->fields.voicePlayButtonDefaultPos.fields.z;
  v84 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v84;
  v85 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v85;
  v86 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (__int64)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v86;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v55);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17411/*"btn_bg_12"*/, 0LL);
  standFigureBack = (__int64)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_52;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)standFigureBack + 840LL))(
    standFigureBack,
    *(_QWORD *)(*(_QWORD *)standFigureBack + 848LL));
  v87 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v87;
  if ( !multipleStandFigureBacks )
    goto LABEL_52;
  v59 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v59 >= max_length )
      break;
    if ( (unsigned int)v59 >= max_length )
      goto LABEL_84;
    standFigureBack = (__int64)multipleStandFigureBacks->m_Items[v59];
    if ( standFigureBack )
    {
      StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v59;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_52;
  }
  standFigureBack = (__int64)this->fields.multipleViewCloseButton;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (__int64)this->fields.multipleViewDisableUiButton;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (__int64)*p_eventMaster;
  if ( !*p_eventMaster )
    goto LABEL_52;
  this->fields.isEnableMultipleView = EventMaster__IsEnableMyRoomMultipleView((EventMaster_o *)standFigureBack, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)standFigureBack, 0LL)) == 0
    || (v61 = *(_DWORD *)(standFigureBack + 24),
        standFigureBack = (__int64)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = v61 > 1,
        !standFigureBack) )
  {
LABEL_52:
    sub_1B68930(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8743/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_52;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (__int64)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v64);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v65);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v66);
  }
  standFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)this->fields.photoCampaignCameraButton;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (__int64)this->fields.photoCampaignProduction;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_52;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0LL);
  standFigureBack = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntityList, 0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  method = (const MethodInfo *)(((unsigned int)standFigureBack ^ 1) & 1);
  this->fields.isEnablePhotoCampaign = (standFigureBack ^ 1) & 1;
  if ( !photoCampaignButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(photoCampaignButton, (standFigureBack ^ 1) & 1, 0LL);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoCampaignState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_52;
    if ( !EnableEntityList->max_length )
LABEL_84:
      sub_1B68938(standFigureBack, method);
    v70 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v70;
    sub_1B68678(&this->fields.photoCampaignEntity);
    v72 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v72,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v72;
    sub_1B68678(&this->fields.masterEquipAssetData);
    v73 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v73,
      (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v73;
    sub_1B68678(&this->fields.masterMaleEquipTexture);
    v74 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v74,
      (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v74;
    sub_1B68678(&this->fields.masterFemaleEquipTexture);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_52;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_52;
    standFigureBack = (__int64)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               (EventMaster_o *)standFigureBack,
                                               (*p_photoCampaignEntity)->fields.id,
                                               0LL);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v76);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v77);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v78);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  __int64 v10; // x1

  z = movePos.fields.z;
  movePos.fields.z = movePos.fields.y;
  movePos.fields.y = movePos.fields.x;
  v8 = TweenPosition__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&movePos.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v8 )
    sub_1B68930(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1B68678(&v8->fields.eventReceiver);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1B68678(&v8->fields.callWhenFinished);
  }
  v8->fields.method = 3;
}


void __fastcall MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_c *v4; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  _QWORD *v6; // x0
  int v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4A04514 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_onClickHelp__, method);
    sub_1B686D4(&MyRoomControl_TypeInfo, v3);
    byte_4A04514 = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = Method_MyRoomControl_onClickHelp__;
  v7 = this->fields.buttonFlag & static_fields->BUTTON_HELP;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelp__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_onClickHelp__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
  if ( v7 <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    if ( this->fields.isServantMaterial )
    {
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 61, 0LL, 0LL);
    }
    else
    {
      helpListViewManager = this->fields.helpListViewManager;
      if ( !helpListViewManager )
        sub_1B68930(0LL, v9);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  MyRoomHelpListViewManager_CallbackFunc2_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A04515 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl_helpClose__, v3);
    sub_1B686D4(&Method_MyRoomControl_onClickHelpClose__, v4);
    byte_4A04515 = 1;
  }
  v5 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_onClickHelpClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1B68920(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1B68930(v9, v10);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1B68930(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1B68930(0LL, method);
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
  MyRoomSvtControl_o *v10; // x1
  int32_t v11; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v13; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v15; // w20
  Il2CppObject *Request_object; // x21
  System_Int32_array_array *v17; // x22
  int m_CancellationTokenSource; // w8

  if ( (byte_4A044FE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B686D4(&int_____TypeInfo, v3);
    sub_1B686D4(&int___TypeInfo, v4);
    sub_1B686D4(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A044FE = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v11 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_21;
    v13 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v13, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v11, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_21;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v11, v13, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v15 = FlagRequestNumber;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0LL,
                           (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v17 = (System_Int32_array_array *)sub_1B6877C(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1B6877C(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          m_CancellationTokenSource = (int)svtCtr->fields.m_CancellationTokenSource;
          v10 = svtCtr;
          if ( !m_CancellationTokenSource )
            goto LABEL_22;
          LODWORD(svtCtr->fields.fsm) = v11;
          if ( m_CancellationTokenSource == 1 )
            goto LABEL_22;
          HIDWORD(svtCtr->fields.fsm) = v15;
          if ( !v17 )
            goto LABEL_21;
          if ( !v17->max_length )
LABEL_22:
            sub_1B68938(svtCtr, svtCtr);
          v17->m_Items[0] = (System_Int32_array *)svtCtr;
          svtCtr = (MyRoomSvtControl_o *)sub_1B68678(v17->m_Items);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, v17, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1B68930(svtCtr, v10);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialServantId; // w20
  int32_t Item; // w21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  ListViewManager_o *mMaterialEventLogListViewManager; // x20
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4A044E9 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_1B686D4(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4A044E9 = 1;
  }
  MyRoomControl__shutdown(this, method);
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    v2->fields.isServantMaterial = 0;
    if ( !materialImageIdList )
      goto LABEL_17;
    materialServantId = v2->fields.materialServantId;
    Item = System_Collections_Generic_List_int___get_Item(
             materialImageIdList,
             v2->fields.materialFigureSvtDispIdx,
             (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.soundPlayerComp;
  if ( !materialImageIdList )
    goto LABEL_17;
  SoundPlayerComponent__DestroyMenu((SoundPlayerComponent_o *)materialImageIdList, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v2, v8);
  MyRoomControl__destroySvtFigure(v2, v9);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.backGroundManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)materialImageIdList, 0LL);
  mMaterialEventLogListViewManager = (ListViewManager_o *)v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_17;
  ListViewManager__DestroyList((ListViewManager_o *)v2->fields.mMaterialEventLogListViewManager, 0LL);
  ListViewManager__CheckSortButton(mMaterialEventLogListViewManager, 0, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.helpListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)materialImageIdList, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.helpListViewManager;
  if ( !materialImageIdList
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)materialImageIdList, 0LL),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)materialImageIdList, 0LL),
        MyRoomControl__ReleasePhotoAsset(v2, v11),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.MaterialEventLogItemListPanel) == 0LL)
    || (((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
          materialImageIdList,
          materialImageIdList->klass->vtable._9_unknown.methodPtr,
          1.0),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.valentineListObj) == 0LL) )
  {
LABEL_17:
    sub_1B68930(materialImageIdList, v4);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
    materialImageIdList,
    materialImageIdList->klass->vtable._9_unknown.methodPtr,
    0.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A044FF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl_endReflectionGameOption__, v3);
    byte_4A044FF = 1;
  }
  optionComp = this->fields.optionComp;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1B68930(v6, v7);
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
  int32_t v9; // w20
  System_String_o *Value; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  Il2CppObject *Request_object; // x19

  if ( (byte_4A04501 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_callbackChangeName__, method);
    sub_1B686D4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_1B686D4(&NetworkManager_TypeInfo, v4);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_4388/*"ChangeUserName"*/, v6);
    byte_4A04501 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( !this->fields.myRoomFsm )
    goto LABEL_13;
  v9 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_4388/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1B68930(SelfUserGame, v8);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    Value,
    v9,
    *((System_String_o **)SelfUserGame + 30),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_1B68930(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomControl___c__DisplayClass249_0_o *v9; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  PlayMakerFSM_o **p_svtVoiceEnt; // x21
  ServantVoiceEntity_o *svtVoiceEnt; // x22
  int32_t Item; // w0
  System_String_o *asstName; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4A044F6 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isReset);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass249_0__resetSvtVoiceData_b__0__, v6);
    sub_1B686D4(&MyRoomControl___c__DisplayClass249_0_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_8232/*"LOAD_END"*/, v8);
    byte_4A044F6 = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass249_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass249_0_TypeInfo);
  MyRoomControl___c__DisplayClass249_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9->fields.__4__this = this;
  sub_1B68678(&v9->fields);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8232/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1B68930(myRoomFsm, v11);
  }
  v9->fields.svtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v12);
  p_svtVoiceEnt = (PlayMakerFSM_o **)&v9->fields.svtVoiceEnt;
  sub_1B68678(&v9->fields.svtVoiceEnt);
  svtVoiceEnt = v9->fields.svtVoiceEnt;
  if ( !svtVoiceEnt )
  {
    myRoomFsm = this->fields.myRoomFsm;
    this->fields.isExistVoiceData = 0;
    if ( myRoomFsm )
      goto LABEL_7;
    goto LABEL_13;
  }
  myRoomFsm = (PlayMakerFSM_o *)this->fields.imageIdList;
  if ( !myRoomFsm )
    goto LABEL_13;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)myRoomFsm,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
  this->fields.voiceList = ServantVoiceEntity__getMyRoomVoiceList(svtVoiceEnt, Item, 0LL);
  sub_1B68678(&this->fields.voiceList);
  myRoomFsm = *p_svtVoiceEnt;
  if ( !*p_svtVoiceEnt )
    goto LABEL_13;
  this->fields.asstName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  sub_1B68678(&this->fields.asstName);
  asstName = this->fields.asstName;
  v17 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass249_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v17, v18);
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
  }
  ContinueDeviceComponent__showMenu((ContinueDeviceComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setDefSvtPos(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  _BOOL4 isServantMaterial; // w23
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
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

  if ( (byte_4A0451D & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_setDefSvtPos__, method);
    byte_4A0451D = 1;
  }
  voicePlayBtn = this->fields.voicePlayBtn;
  if ( !voicePlayBtn )
    goto LABEL_34;
  isServantMaterial = this->fields.isServantMaterial;
  UnityEngine_GameObject__SetActive(voicePlayBtn, !this->fields.isServantMaterial, 0LL);
  voicePlayBtn = this->fields.changeLimitBtn;
  if ( !voicePlayBtn )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 1, 0LL);
  voicePlayBtn = this->fields.helpBtn;
  if ( !voicePlayBtn )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 1, 0LL);
  if ( !this->fields.mState )
    return;
  v5 = Method_MyRoomControl_setDefSvtPos__;
  if ( (*((_BYTE *)Method_MyRoomControl_setDefSvtPos__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
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
        goto LABEL_34;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.materialObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      y = v27.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mMainObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      servantListObj = this->fields.servantListObj;
      if ( !servantListObj )
        goto LABEL_34;
      sortWindowObj = this->fields.sortWindowObj;
      z = v12;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v15 = v28.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      *(UnityEngine_Vector3_o *)(&v16 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      if ( !sortWindowObj )
        goto LABEL_34;
      v17 = v16;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v18 = v29.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
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
LABEL_20:
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
                goto LABEL_30;
              }
            }
          }
        }
        goto LABEL_34;
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
            goto LABEL_30;
          }
        }
LABEL_34:
        sub_1B68930(voicePlayBtn, method);
      }
LABEL_30:
      v33.fields.x = x;
      v33.fields.y = y;
      v33.fields.z = z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, v33, v8);
      this->fields.mState = 0;
      return;
    case 6:
      mMainObj = this->fields.noticeObj;
      goto LABEL_20;
    case 0xA:
      mMainObj = this->fields.soundPlayerObj;
      goto LABEL_20;
    default:
      goto LABEL_20;
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
    sub_1B68930(moveBtnObj, isDisp);
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
    sub_1B68930(titleBtnCollider, isEnabled);
  if ( !titleBtnCollider[10].fields.m_CachedPtr )
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
  }
  SetGameOptionComponent__showGameOption((SetGameOptionComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4A04504 & 1) == 0 )
  {
    sub_1B686D4(&Method_MyRoomControl_setMaterial__, isPlayDecideSe);
    byte_4A04504 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B68930(0LL, v5);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B686EC(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B686B8(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B68930(0LL, method);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B68930(0LL, method);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B68930(0LL, method);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 55, 0, 0LL);
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
    sub_1B68930(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B68930(0LL, method);
  TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B68930(this, method);
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
  UnityEngine_Vector3_o v10; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  v10.fields.z = 0.0;
  *(_QWORD *)&v10.fields.x = 0LL;
  MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &v10, v3);
  if ( !this )
    sub_1B68930(v6, v7);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &v10;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v8);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A044ED & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__setMySvtFigure_b__239_0__, v3);
    byte_4A044ED = 1;
  }
  v4 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__239_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v4, v5);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_31079460(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_31079460(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialFigureSvtDispIdx; // w1
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  int32_t Form; // w0
  int32_t Item; // w0
  int32_t Id; // w20
  int32_t v14; // w2
  UnityEngine_Object_o *playBtnImg; // x20

  if ( (byte_4A044FA & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&UIStandFigureRender_TypeInfo, v6);
    byte_4A044FA = 1;
  }
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_27;
    materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
    materialServantId = this->fields.materialServantId;
LABEL_15:
    Item = System_Collections_Generic_List_int___get_Item(
             materialImageIdList,
             materialFigureSvtDispIdx,
             (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
    Id = ServantScriptMaster__getId(materialServantId, Item, 0LL);
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
LABEL_18:
    v14 = Form;
    goto LABEL_19;
  }
  if ( !isCurrent || !this->fields.isServantFormKeep )
  {
    materialImageIdList = this->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_27;
    materialFigureSvtDispIdx = this->fields.figureSvtDispIdx;
    materialServantId = this->fields.figureSvtId;
    goto LABEL_15;
  }
  svtCtr = (UnityEngine_Object_o *)this->fields.svtCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtCtr, 0LL, 0LL) )
  {
    materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.svtCtr;
    if ( !materialImageIdList )
      goto LABEL_27;
    Form = MyRoomSvtControl__GetFormId((MyRoomSvtControl_o *)materialImageIdList, 0LL);
    goto LABEL_18;
  }
  v14 = 0;
LABEL_19:
  materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.standFigureBack;
  if ( !materialImageIdList )
    goto LABEL_27;
  StandFigureBack__SetFaceTypeAndForm((StandFigureBack_o *)materialImageIdList, 0, v14, 0LL);
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.voicePlayEffect;
    if ( materialImageIdList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialImageIdList, 0, 0LL);
      return;
    }
LABEL_27:
    sub_1B68930(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_36940820((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1B68930(mstpfObj, method);
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
    sub_1B68930(0LL, v4);
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
    case 18:
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
      if ( !standFigureBack
        || ((UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL),
             MyRoomControl__SetMultipleViewButtonColor(this, v10),
             standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignButton,
             !v8)
          ? (isEnableMultipleView = 0LL)
          : (isEnableMultipleView = this->fields.isEnablePhotoCampaign),
            !standFigureBack) )
      {
LABEL_33:
        sub_1B68930(standFigureBack, isEnableMultipleView);
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
    sub_1B68930(0LL, hSvtId);
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
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v13; // x20
  int32_t Item; // w0
  System_String_o *asstName; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21
  Il2CppObject *v23; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4A044EB & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B686D4(&Method_MyRoomControl_EndLoad__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&Method_MyRoomControl___c__setSvtVoiceData_b__237_0__, v8);
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_8232/*"LOAD_END"*/, v10);
    byte_4A044EB = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8232/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1B68930(myRoomFsm, method);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( SvtVoiceEnt )
  {
    v13 = SvtVoiceEnt;
    myRoomFsm = this->fields.imageIdList;
    if ( !myRoomFsm )
      goto LABEL_22;
    Item = System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)myRoomFsm,
             this->fields.figureSvtDispIdx,
             (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
    this->fields.voiceList = ServantVoiceEntity__getMyRoomVoiceList(v13, Item, 0LL);
    sub_1B68678(&this->fields.voiceList);
    this->fields.asstName = ServantVoiceEntity__getVoiceAssetName(v13, 0LL);
    sub_1B68678(&this->fields.asstName);
    asstName = this->fields.asstName;
    v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v16, v17);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v20 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v22 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 16LL);
      if ( !v22 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v23 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v22 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(v22, v23, Method_MyRoomControl___c__setSvtVoiceData_b__237_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__237_0 = v22;
        myRoomFsm = (void *)sub_1B68678(&static_fields->__9__237_0);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v22, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8232/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
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

  if ( (byte_4A04503 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl_TypeInfo, method);
    byte_4A04503 = 1;
  }
  multipleViewButton = this->fields.multipleViewButton;
  this->fields.type = 0;
  if ( !multipleViewButton )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnableMultipleView, 0LL);
  v5 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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
LABEL_9:
    sub_1B68930(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_36940820((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_36940820(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1B68930(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_30877188((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  *moveTarget = this->fields.materialObj;
  sub_1B68678(moveTarget);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1B68930(transform, v8);
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
    sub_1B68930(this, moveTarget);
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
    sub_1B68930(this, moveTarget);
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
  __int64 myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  __int64 favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v15; // w9
  __int64 v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t i; // w21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  int32_t v24; // w22
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x21
  __int64 v29; // x22
  MyRoomControl_o *v30; // x0
  const MethodInfo *v31; // x2
  __int64 v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x22
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  int32_t FigureImageLimitCount; // w20
  struct System_Collections_Generic_List_int__o *v39; // x8
  int v40; // w20
  int32_t v41; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A044DB & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A044DB = 1;
  }
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  myRoomData = sub_1B68678(&this->fields.usrData);
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
  v15 = imageIdList->fields._version + 1;
  imageIdList->fields._size = 0;
  imageIdList->fields._version = v15;
  myRoomData = (__int64)this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomData, favoriteUserSvtId, 0LL);
  if ( !myRoomData )
    goto LABEL_48;
  v16 = myRoomData;
  v18 = *(_QWORD *)(myRoomData + 80);
  v17 = *(_QWORD *)(myRoomData + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = v17;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v42, 0LL);
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v16, 0LL);
  for ( i = 0; ; ++i )
  {
    v21 = *(_QWORD *)(v16 + 96);
    v20 = *(_QWORD *)(v16 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v21;
    *(_QWORD *)&v43.fields.fakeValue = v20;
    if ( i > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v43, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, i, 0LL);
    myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)myRoomData,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)myRoomData,
                   this->fields.figureSvtId,
                   ImageLimitCount,
                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v24 = myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            myRoomData,
            (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      myRoomData = (__int64)this->fields.imageIdList;
      if ( !myRoomData )
        goto LABEL_48;
      v25 = *(_QWORD *)(myRoomData + 16);
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++*(_DWORD *)(myRoomData + 28);
      if ( !v25 )
        goto LABEL_48;
      v27 = *(int *)(myRoomData + 24);
      if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)myRoomData,
          v24,
          *(const MethodInfo_349F254 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(myRoomData + 24) = v27 + 1;
        *(_DWORD *)(v25 + 4 * v27 + 32) = v24;
      }
    }
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v16, 0LL)
    || UserServantEntity__isLimitCountMax((UserServantEntity_o *)v16, 0LL) )
  {
    v29 = *(_QWORD *)(v16 + 80);
    v28 = *(_QWORD *)(v16 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v29;
    *(_QWORD *)&v44.fields.fakeValue = v28;
    v30 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v44, 0LL);
    myRoomData = (__int64)MyRoomControl__GetSortedCostumeIds(v30, (int32_t)v30, v31);
    if ( myRoomData )
    {
      v32 = *(_QWORD *)(myRoomData + 24);
      v33 = myRoomData;
      if ( (int)v32 >= 1 )
      {
        v34 = 0LL;
        while ( 1 )
        {
          if ( v34 >= (unsigned int)v32 )
            sub_1B68938(myRoomData, favoriteUserSvtId);
          favoriteUserSvtId = *(unsigned int *)(v33 + 32 + 4 * v34);
          if ( (int)favoriteUserSvtId >= 1 )
          {
            myRoomData = (__int64)this->fields.imageIdList;
            if ( !myRoomData )
              goto LABEL_48;
            v35 = *(_QWORD *)(myRoomData + 16);
            v36 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(myRoomData + 28);
            if ( !v35 )
              goto LABEL_48;
            v37 = *(int *)(myRoomData + 24);
            if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)myRoomData,
                favoriteUserSvtId,
                *(const MethodInfo_349F254 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(myRoomData + 24) = v37 + 1;
              *(_DWORD *)(v35 + 4 * v37 + 32) = favoriteUserSvtId;
            }
          }
          LODWORD(v32) = *(_DWORD *)(v33 + 24);
          if ( (__int64)++v34 >= (int)v32 )
            goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
LABEL_48:
    sub_1B68930(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v16, 0, 0LL);
  myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)myRoomData,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)myRoomData,
                 this->fields.figureSvtId,
                 FigureImageLimitCount,
                 0LL);
  v39 = this->fields.imageIdList;
  if ( !v39 )
    goto LABEL_48;
  v40 = myRoomData;
  v41 = 0;
  while ( v41 < v39->fields._size )
  {
    myRoomData = System_Collections_Generic_List_int___get_Item(
                   v39,
                   v41,
                   (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v40 )
    {
      this->fields.figureSvtDispIdx = v41;
      return;
    }
    v39 = this->fields.imageIdList;
    ++v41;
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
  _DWORD *v16; // x20
  __int64 IsLeave; // x0
  char *v18; // x25
  unsigned int v19; // w23
  void **v20; // x25
  void *v21; // t1
  UserServantEntity_o *v22; // x19
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  struct UserGameEntity_o **p_usrData; // x22
  UserServantCollectionMaster_o *v25; // x20
  int64_t userId; // x21
  __int64 v27; // x23
  __int64 v28; // x24
  __int128 v29; // q1
  _DWORD *v30; // x26
  int64_t pushUserSvtId; // x8
  int64_t v32; // x0
  __int128 v33; // q1
  int64_t v34; // x23
  int32_t v35; // w24
  int32_t v36; // w25
  int32_t v37; // w27
  int32_t v38; // w28
  bool IsLock; // w29
  char v40; // w20
  int32_t commonFlag; // w22
  int32_t battleVoice; // w26
  int32_t randomSettingOwn; // w21
  int32_t v44; // w0
  __int64 v45; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v48; // [xsp+58h] [xbp-D8h]
  int64_t v49; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_object; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A044DD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B686D4(&Method_MyRoomControl__setupSvtRand_b__221_0__, v4);
    sub_1B686D4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&OptionManager_TypeInfo, v9);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, v12);
    byte_4A044DD = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1B68930(limitCountSupport, v13);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v15 = *((_DWORD *)limitCountSupport + 6);
  v16 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_69131556(0, v15, 0LL);
    if ( (unsigned int)IsLeave >= v16[6] )
LABEL_35:
      sub_1B68938(IsLeave, v13);
    v18 = (char *)&v16[2 * (int)IsLeave];
    v19 = IsLeave;
    v21 = (void *)*((_QWORD *)v18 + 4);
    v20 = (void **)(v18 + 32);
    limitCountSupport = v21;
    if ( !v21 )
      goto LABEL_36;
    IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    v22 = 0LL;
    if ( (IsLeave & 1) == 0 )
    {
      if ( v19 >= v16[6] )
        goto LABEL_35;
      limitCountSupport = *v20;
      if ( !*v20 )
        goto LABEL_36;
      IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
      v22 = 0LL;
      if ( (IsLeave & 1) == 0 )
      {
        if ( v19 >= v16[6] )
          goto LABEL_35;
        v22 = (UserServantEntity_o *)*v20;
      }
    }
  }
  while ( !v22 );
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__221_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v23,
                                              (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrData);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData )
    goto LABEL_36;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v28 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v28;
  *(_QWORD *)&v54.fields.fakeValue = v27;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v54, 0LL);
  if ( !v25 )
    goto LABEL_36;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v25, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_36;
  v29 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v30 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v29;
  v49 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v52, 0LL);
  v33 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v34 = v32;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v33;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v51, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                      v22->fields.imageLimitCount,
                      0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22->fields.dispLimitCount, 0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22->fields.commandCardLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22->fields.iconLimitCount, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v22, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v22, 0LL);
  if ( !v30 )
    goto LABEL_36;
  v40 = (char)limitCountSupport;
  commonFlag = v30[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                       v22->fields.randomLimitCount,
                       0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22->fields.randomLimitCountSupport, 0LL);
  v45 = *(_QWORD *)&v22->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&v22->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v44;
  *(_QWORD *)&v55.fields.currentCryptoKey = v45;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v55, 0LL);
  if ( !Request_object )
    goto LABEL_36;
  CardFavoriteRequest__beginRequest(
    Request_object,
    v48,
    imageLimitCount,
    v35,
    v36,
    v37,
    v38,
    1,
    IsLock,
    v40 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 == v34,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A044E8 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A044E8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A044E7 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A044E7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1B68930(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_31079460(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__341_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A04519 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl__svtVoicePlayAct_d__341_TypeInfo, item);
    byte_4A04519 = 1;
  }
  v5 = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1B68920(MyRoomControl__svtVoicePlayAct_d__341_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__341___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1B68930(v6, v7);
  v5->fields.__4__this = this;
  sub_1B68678(&v5->fields.__4__this);
  v5->fields.item = item;
  sub_1B68678(&v5->fields.item);
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
  MyRoomControl___c__DisplayClass236_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  NetworkManager_c *v15; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v17; // x22

  if ( (byte_4A044EA & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, assetName);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass236_0__voiceLoad_b__0__, v9);
    sub_1B686D4(&MyRoomControl___c__DisplayClass236_0_TypeInfo, v10);
    byte_4A044EA = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass236_0_o *)sub_1B68920(MyRoomControl___c__DisplayClass236_0_TypeInfo);
  MyRoomControl___c__DisplayClass236_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_1B68678(&v11->fields);
  v11->fields.endCallback = endCallback;
  sub_1B68678(&v11->fields.endCallback);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A0456B )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, v14);
    byte_4A0456B = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  if ( !v15->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v17 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass236_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v17, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1B68930(v12, v13);
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


void __fastcall MyRoomControl__CaptureServant_d__409___ctor(
        MyRoomControl__CaptureServant_d__409_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__409__MoveNext(
        MyRoomControl__CaptureServant_d__409_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v10; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v12; // x21
  UIRect_o *height; // x0
  __int64 v14; // x1
  int v15; // w22
  int32_t activeHeight; // w0
  int32_t v17; // w26
  int32_t v18; // w23
  int v19; // w24
  int v20; // w22
  int v21; // w23
  int v22; // w8
  int v23; // w25
  int v24; // w0
  _BOOL4 IsOnlyServant_k__BackingField; // w26
  int v26; // w27
  int v27; // w24
  int v28; // w25
  int v29; // w27
  int32_t v30; // w0
  int v31; // w8
  UnityEngine_Color_array *Pixels_69058956; // x25
  UnityEngine_Texture2D_o *v33; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v35; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4A0457E & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Texture2D_TypeInfo, v3);
    sub_1B686D4(&TouchEffectManager_TypeInfo, v4);
    sub_1B686D4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_4A0457E = 1;
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
      goto LABEL_35;
    v15 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_35;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v17 = this->fields.height;
    v18 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v19 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v12 )
      goto LABEL_35;
    v20 = v15 * width / v18;
    v21 = v19 * v17 / (int)height;
    v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._4_get_width.method)(
            v12,
            v12->klass->vtable._5_set_width.methodPtr)
        - v20;
    v23 = v22 >= 0 ? v22 : v22 + 1;
    v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._6_get_height.method)(
            v12,
            v12->klass->vtable._7_set_height.methodPtr);
    IsOnlyServant_k__BackingField = _4__this->fields._IsOnlyServant_k__BackingField;
    v26 = v24 - v21 >= 0 ? v24 - v21 : v24 - v21 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v27 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    v28 = v23 >> 1;
    v29 = v26 >> 1;
    v30 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v31 = IsOnlyServant_k__BackingField ? 11 : 1;
    Pixels_69058956 = UnityEngine_Texture2D__GetPixels_69058956(v12, v28, v31 * v27 / v30 + v29, v20, v21, 0LL);
    v33 = (UnityEngine_Texture2D_o *)sub_1B68920(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69060080(v33, v20, v21, 3, 0, 0LL);
    if ( !v33 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_69061160(v33, Pixels_69058956, 0LL);
    UnityEngine_Texture2D__Apply_69061932(v33, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v33,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816((UnityEngine_Object_o *)v12, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v35 = 11.0;
    if ( !_4__this->fields._IsOnlyServant_k__BackingField )
      v35 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v35, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1B68930(height, v14);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1B68678(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__409__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__409__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__409_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__CaptureServant_d__409_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__409__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__409__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__409_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__290___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__290__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  bool v10; // w20
  System_Func_bool__o *v11; // x22
  UnityEngine_WaitUntil_o *v12; // x21
  Il2CppObject **p__2__current; // x19

  if ( (byte_4A0457F & 1) == 0 )
  {
    sub_1B686D4(&System_Func_bool__TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__290_0__, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A0457F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1B68930(Instance, v9);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v11, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__290_0__, 0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1B68920(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1B68678(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__290__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__290__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__290__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__290__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__284___ctor(
        MyRoomControl__InitMaterialOnBackground_d__284_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitMaterialOnBackground_d__284__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__284_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MyRoomControl__InitMaterialOnBackground_d__284_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  __int64 v9; // x1
  TerminalSceneComponent_c *v10; // x0
  UnityEngine_Object_o *v11; // x21
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct TerminalSceneComponent_o *terminal_5__2; // x8
  BackTaskAmountAdjuster_o *v15; // x20
  System_Collections_IEnumerator_o *v16; // x0

  v3 = this;
  if ( (byte_4A04580 & 1) == 0 )
  {
    sub_1B686D4(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)sub_1B686D4(&TerminalSceneComponent_TypeInfo, v6);
    byte_4A04580 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    terminal_5__2 = v3->fields._terminal_5__2;
    v3->fields.__1__state = -1;
    if ( !terminal_5__2 )
      goto LABEL_26;
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)terminal_5__2->fields.mTerminalMap;
    if ( !this )
      goto LABEL_26;
    ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)this, 0LL);
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_26;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, v2);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A03EAD )
    {
      sub_1B686D4(&TerminalSceneComponent_TypeInfo, v9);
      byte_4A03EAD = 1;
    }
    v10 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    v3->fields._terminal_5__2 = v10->static_fields->mInstance;
    sub_1B68678(&v3->fields._terminal_5__2);
    v11 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v3->fields.__2__current = (Il2CppObject *)QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
        p__2__current = &v3->fields.__2__current;
        sub_1B68678(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_26:
      sub_1B68930(this, method);
    }
  }
  v15 = (BackTaskAmountAdjuster_o *)sub_1B68920(BackTaskAmountAdjuster_TypeInfo);
  BackTaskAmountAdjuster___ctor(v15, 0LL);
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)_4__this->fields.mStateMaterial;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                               (MyRoomStateMaterial_o *)this,
                                                               method);
  if ( !v15 )
    goto LABEL_26;
  v16 = BackTaskAmountAdjuster__Execute(v15, (System_Collections_IEnumerator_o *)this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0LL);
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__284__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__284_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitMaterialOnBackground_d__284__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__284_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__InitMaterialOnBackground_d__284_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__284__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__284_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__284__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__284_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitServantMenu_d__287___ctor(
        MyRoomControl__InitServantMenu_d__287_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitServantMenu_d__287__MoveNext(
        MyRoomControl__InitServantMenu_d__287_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  const MethodInfo *v11; // x1
  bool v12; // w21
  System_Func_bool__o *v13; // x22
  UnityEngine_WaitUntil_o *v14; // x19
  Il2CppObject **p__2__current; // x20
  BackTaskAmountAdjuster_o *v16; // x20
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_4A04581 & 1) == 0 )
  {
    sub_1B686D4(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1B686D4(&System_Func_bool__TypeInfo, v3);
    sub_1B686D4(&Method_MyRoomControl__InitServantMenu_b__287_0__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, v7);
    byte_4A04581 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v16 = (BackTaskAmountAdjuster_o *)sub_1B68920(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v16, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v11);
          if ( !v16 )
            goto LABEL_17;
          v17 = BackTaskAmountAdjuster__Execute(v16, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1B68930(Instance, v11);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__287_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1B68920(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1B68678(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v12;
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__287__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__287_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitServantMenu_d__287__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__287_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__InitServantMenu_d__287_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__287__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__287_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitServantMenu_d__287__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__287_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__378___ctor(
        MyRoomControl__LoadMultipleServant_d__378_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__LoadMultipleServant_d__378__MoveNext(
        MyRoomControl__LoadMultipleServant_d__378_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
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
  struct MyRoomControl_o *_4__this; // x29
  Il2CppObject *v17; // x22
  Il2CppObject **p__8__1; // x28
  struct StandFigureBack_array *v19; // x8
  struct StandFigureBack_array *v20; // x8
  __int64 v21; // x19
  __int64 v22; // x22
  __int64 v23; // x21
  int v24; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v26; // x8
  const MethodInfo *v27; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v30; // w20
  int32_t v31; // w25
  int32_t Id; // w26
  int32_t Form; // w24
  struct ServantScriptMultipleEntity_array *v34; // x27
  ServantScriptMultipleEntity_o *v35; // x26
  struct StandFigureBack_array *v36; // x8
  Il2CppObject **v37; // x23
  Il2CppObject *v38; // x28
  StandFigureBack_o *v39; // x26
  System_Action_o *monitor; // x27
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v43; // x19
  int max_length; // w9
  unsigned int v45; // w25
  struct StandFigureBack_array *v46; // x8
  UnityEngine_Component_o *v47; // x8
  UnityEngine_Component_o *v48; // x21
  float v49; // s2
  float v50; // s1
  float v51; // s8
  float v52; // s10
  float v53; // s9
  float v54; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v56; // x8
  float v57; // s10
  struct StandFigureBack_array *v58; // x9
  int v59; // s14
  int v60; // s15
  float v61; // s0
  float v62; // s2
  struct StandFigureBack_array *v63; // x8
  float v64; // s11
  float v65; // s12
  struct StandFigureBack_array *v66; // x8
  struct StandFigureBack_array *v67; // x8
  System_String_o *v68; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass378_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v72; // x22
  Il2CppObject *v73; // x20
  System_Func_bool__o *v74; // x21
  UnityEngine_WaitWhile_o *v75; // x20
  struct ServantScriptMultipleEntity_array *v76; // x8
  unsigned int v77; // w9
  ServantScriptMultipleEntity_o *v78; // x10
  ServantScriptMultipleEntity_o *v79; // x8
  Il2CppObject *v80; // x20
  System_Func_bool__o *v81; // x21
  UnityEngine_WaitWhile_o *v82; // x20
  __int64 v83; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+10h] [xbp-C0h]
  MyRoomControl__LoadMultipleServant_d__378_o *v85; // [xsp+18h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  v85 = this;
  if ( (byte_4A04582 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v2);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&System_Func_bool__TypeInfo, v4);
    sub_1B686D4(&int___TypeInfo, v5);
    sub_1B686D4(&ServantScriptMultipleEntity___TypeInfo, v6);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__0__, v7);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__1__, v8);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__2__, v9);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__3__, v10);
    sub_1B686D4(&MyRoomControl___c__DisplayClass378_0_TypeInfo, v11);
    sub_1B686D4(&UIStandFigureRender_TypeInfo, v12);
    sub_1B686D4(&UnityEngine_WaitWhile_TypeInfo, v13);
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B686D4(&StringLiteral_6678/*"FinishedFadeMultipleServant"*/, v14);
    byte_4A04582 = 1;
  }
  entity = 0LL;
  _1__state = v85->fields.__1__state;
  _4__this = v85->fields.__4__this;
  if ( _1__state == 2 )
  {
    v85->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_85;
    TitleInfoControl__changeTitleInfo_36940820((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)titleInfo->fields.titleImg;
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    if ( !this )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.multipleViewCloseButton;
    _4__this->fields.multipleViewState = 2;
    if ( !this )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
    if ( !multipleStandFigureBacks )
      goto LABEL_85;
    v43 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v45 = v43 - 4;
      if ( (int)v43 - 4 >= max_length )
        return 0;
      if ( v45 >= max_length )
        goto LABEL_105;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v43);
      if ( !this )
        goto LABEL_85;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)StandFigureBack__GetSvtStandFigure(
                                                              (StandFigureBack_o *)this,
                                                              0,
                                                              0LL);
      if ( !this )
        goto LABEL_85;
      v46 = _4__this->fields.multipleStandFigureBacks;
      if ( !v46 )
        goto LABEL_85;
      if ( v45 >= v46->max_length )
        goto LABEL_105;
      v47 = (UnityEngine_Component_o *)*((_QWORD *)&v46->obj.klass + v43);
      if ( !v47 )
        goto LABEL_85;
      v48 = (UnityEngine_Component_o *)this->fields.__4__this;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(v47, 0LL);
      if ( !this )
        goto LABEL_85;
      *(UnityEngine_Vector3_o *)(&v49 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v51 = v50;
      v52 = (_DWORD)v43 == 4 ? -256.0 : 256.0;
      if ( !v48 )
        goto LABEL_85;
      v53 = v49;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(v48, 0LL);
      if ( !this )
        goto LABEL_85;
      LODWORD(v54) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      multipleEntities_5__2 = v85->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_85;
      if ( v45 >= multipleEntities_5__2->max_length )
        goto LABEL_105;
      v56 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v43);
      v57 = v52 - v54;
      if ( v56 )
      {
        v58 = _4__this->fields.multipleStandFigureBacks;
        if ( !v58 )
          goto LABEL_85;
        if ( v45 >= v58->max_length )
          goto LABEL_105;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v58->obj.klass + v43);
        if ( !this )
          goto LABEL_85;
        v59 = *(_DWORD *)(v56 + 28);
        v60 = *(_DWORD *)(v56 + 32);
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_85;
        *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v63 = _4__this->fields.multipleStandFigureBacks;
        if ( !v63 )
          goto LABEL_85;
        if ( v45 >= v63->max_length )
          goto LABEL_105;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v63->obj.klass + v43);
        if ( !this )
          goto LABEL_85;
        v64 = v61;
        v65 = v62;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_85;
        v51 = v51 + (float)v60;
        v57 = v57 + (float)v59;
        v88.fields.x = v64;
        v88.fields.y = v51;
        v88.fields.z = v65;
        v53 = v53 + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v88, 0LL);
      }
      v66 = _4__this->fields.multipleStandFigureBacks;
      if ( !v66 )
        goto LABEL_85;
      if ( v45 >= v66->max_length )
        goto LABEL_105;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v66->obj.klass + v43);
      if ( this )
      {
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v67 = _4__this->fields.multipleStandFigureBacks;
        if ( v67 )
        {
          v68 = v45 == v67->max_length - 1 ? (System_String_o *)StringLiteral_6678/*"FinishedFadeMultipleServant"*/ : 0LL;
          v89.fields.x = v57;
          v89.fields.y = v51;
          v89.fields.z = v53;
          MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v89, v68, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v43;
          if ( multipleStandFigureBacks )
            continue;
        }
      }
      goto LABEL_85;
    }
  }
  if ( _1__state == 1 )
  {
    _8__1 = v85->fields.__8__1;
    v85->fields.__1__state = -1;
    if ( _8__1 )
    {
      _8__1->fields.wait = 1;
      if ( _4__this )
      {
        multipleViewComponent = _4__this->fields.multipleViewComponent;
        v72 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(
          v72,
          (Il2CppObject *)_8__1,
          Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__1__,
          0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v72, 0LL);
          v73 = (Il2CppObject *)v85->fields.__8__1;
          v74 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v74,
            v73,
            Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__2__,
            0LL);
          v75 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v75, v74, 0LL);
          v85->fields.__2__current = (Il2CppObject *)v75;
          sub_1B68678(&v85->fields.__2__current);
          v85->fields.__1__state = 2;
          return 1;
        }
      }
    }
    goto LABEL_85;
  }
  if ( _1__state )
    return 0;
  v85->fields.__1__state = -1;
  v17 = (Il2CppObject *)sub_1B68920(MyRoomControl___c__DisplayClass378_0_TypeInfo);
  System_Object___ctor(v17, 0LL);
  v85->fields.__8__1 = (struct MyRoomControl___c__DisplayClass378_0_o *)v17;
  p__8__1 = (Il2CppObject **)&v85->fields.__8__1;
  sub_1B68678(&v85->fields.__8__1);
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)v85->fields.__8__1;
  if ( !this )
    goto LABEL_85;
  this->fields.__2__current = (Il2CppObject *)v85->fields.__4__this;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B68678(&this->fields.__2__current);
  if ( !_4__this )
    goto LABEL_85;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.mBlocker;
  if ( !this )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_85;
  LODWORD((*p__8__1)[1].klass) = 0;
  v19 = _4__this->fields.multipleStandFigureBacks;
  if ( !v19 )
    goto LABEL_85;
  v85->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)sub_1B6877C(
                                                                                     ServantScriptMultipleEntity___TypeInfo,
                                                                                     v19->max_length);
  p_multipleEntities_5__2 = &v85->fields._multipleEntities_5__2;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B68678(&v85->fields._multipleEntities_5__2);
  v20 = _4__this->fields.multipleStandFigureBacks;
  if ( !v20 )
    goto LABEL_85;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 32LL;
  while ( 1 )
  {
    v24 = v20->max_length;
    if ( (int)v22 >= v24 )
      break;
    if ( (unsigned int)v22 >= v24 )
      goto LABEL_105;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)v20->m_Items[v22];
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_85;
    if ( (unsigned int)v22 >= defaultMultipleServantPoses->max_length )
      goto LABEL_105;
    if ( !this )
      goto LABEL_85;
    v26 = (float *)((char *)defaultMultipleServantPoses + v21);
    v87.fields.z = v26[10] + 0.0;
    v87.fields.y = v26[9] + 0.0;
    v87.fields.x = flt_BA5788[(_DWORD)v22 == 0] + v26[8];
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v87, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_85;
    if ( (unsigned int)v22 >= multipleServantUsrIds->max_length )
      goto LABEL_105;
    if ( !_4__this->fields.myRoomData )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            multipleServantUsrIds->m_Items[v22],
                                                            v27);
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_85;
    if ( (unsigned int)v22 >= multipleLimitCounts->max_length )
      goto LABEL_105;
    v30 = multipleLimitCounts->m_Items[v22 + 1];
    v31 = (int)this;
    Id = ServantScriptMaster__getId((int32_t)this, v30, 0LL);
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                            (ServantScriptMultipleMaster_o *)this,
                                                            &entity,
                                                            Id,
                                                            Form,
                                                            v22 + 1,
                                                            0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v34 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_85;
      v35 = entity;
      if ( entity )
      {
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B68810(entity, v34->obj.klass->_1.element_class);
        if ( !this )
        {
          v83 = sub_1B68954();
          sub_1B687FC(v83, 0LL);
        }
      }
      if ( (unsigned int)v22 >= v34->max_length )
        goto LABEL_105;
      v34->m_Items[v22] = v35;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B68678((char *)v34 + v23);
    }
    v36 = _4__this->fields.multipleStandFigureBacks;
    if ( !v36 )
      goto LABEL_85;
    if ( (unsigned int)v22 >= v36->max_length )
      goto LABEL_105;
    v37 = p__8__1;
    v38 = *p__8__1;
    if ( v38 )
    {
      v39 = v36->m_Items[v22];
      monitor = (System_Action_o *)v38[2].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(monitor, v38, Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__3__, 0LL);
        v38[2].monitor = monitor;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B68678(&v38[2].monitor);
      }
      if ( v39 )
      {
        StandFigureBack__SetMyRoomStandFigure(v39, v31, v30, 1, 0, Form, 10, monitor, 0, 0LL);
        v23 += 8LL;
        v20 = _4__this->fields.multipleStandFigureBacks;
        ++v22;
        v21 += 12LL;
        p__8__1 = v37;
        if ( v20 )
          continue;
      }
    }
    goto LABEL_85;
  }
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B6877C(int___TypeInfo, 2LL);
  v76 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_85;
  v77 = v76->max_length;
  if ( !v77 )
    goto LABEL_105;
  v78 = v76->m_Items[0];
  if ( v78 )
  {
    if ( !this )
      goto LABEL_85;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_105;
    LODWORD(this->fields.__4__this) = v78->fields.depth;
  }
  if ( v77 <= 1 )
    goto LABEL_105;
  v79 = v76->m_Items[1];
  if ( !v79 )
  {
    if ( this )
      goto LABEL_103;
LABEL_85:
    sub_1B68930(this, method);
  }
  if ( !this )
    goto LABEL_85;
  if ( LODWORD(this->fields.__2__current) <= 1 )
    goto LABEL_105;
  HIDWORD(this->fields.__4__this) = v79->fields.depth;
LABEL_103:
  if ( LODWORD(this->fields.__2__current) < 2 )
LABEL_105:
    sub_1B68938(this, method);
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
    0LL);
  v80 = (Il2CppObject *)v85->fields.__8__1;
  v81 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v81, v80, Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__0__, 0LL);
  v82 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v82, v81, 0LL);
  v85->fields.__2__current = (Il2CppObject *)v82;
  sub_1B68678(&v85->fields.__2__current);
  result = 1;
  v85->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__378__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__378_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadMultipleServant_d__378__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__378_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__LoadMultipleServant_d__378_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__378__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__378_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__378__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__378_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__400___ctor(
        MyRoomControl__LoadPhotoCampaignServant_d__400_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoCampaignServant_d__400__MoveNext(
        MyRoomControl__LoadPhotoCampaignServant_d__400_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v2; // x19
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v32; // x22
  struct MyRoomControl___c__DisplayClass400_0_o **p__8__1; // x21
  const MethodInfo *v34; // x2
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v37; // w23
  int32_t Id; // w0
  int32_t v39; // w24
  bool v40; // w21
  int32_t Form; // w0
  int32_t v42; // w24
  int32_t photoCampaignType; // w27
  StandFigureBack_o *photoCampaignStandFigureBack; // x25
  Il2CppObject *_8__1; // x26
  System_Action_o *v46; // x20
  Il2CppObject *v47; // x20
  System_Func_bool__o *v48; // x22
  UnityEngine_WaitWhile_o *v49; // x20
  Il2CppObject **p__2__current; // x19
  struct MyRoomControl___c__DisplayClass400_0_o *v51; // x21
  System_Action_o *v52; // x22
  Il2CppObject *v53; // x20
  System_Func_bool__o *v54; // x21
  UnityEngine_WaitWhile_o *v55; // x20
  Il2CppObject **v56; // x19
  int v57; // w8
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v58; // x1
  struct ServantPhotoEntity_FaceData_array **p_photoCampaignFaceList; // x0
  struct ServantPhotoEntity_FaceData_array *v60; // x8
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *faceData_5__4; // x21
  Il2CppObject *v63; // x22
  System_Action_o *v64; // x23
  Il2CppObject *v65; // x20
  System_Func_bool__o *v66; // x21
  UnityEngine_WaitWhile_o *v67; // x20
  struct ServantPhotoEntity_FaceData_o *v68; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl___c__DisplayClass400_0_o *v71; // x21
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v73; // x22
  Il2CppObject *v74; // x20
  System_Func_bool__o *v75; // x21
  UnityEngine_WaitWhile_o *v76; // x20
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v78; // x8
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x19
  struct StandFigureBack_o *v81; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  ServantPhotoEntity_FaceData_o *v84; // x21
  ServantPhotoEntity_FaceData_Fields *p_fields; // x24
  struct System_Int32_array **p_multiForm; // x23
  struct System_Int32_array *multiFace; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v89; // x8
  int32_t *v90; // x10
  struct System_Int32_array *v91; // x11
  __int64 v92; // x11
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v93; // x22
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v95; // x0
  System_Func_object__object__o *_9__400_4; // x22
  Il2CppObject *v97; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  struct MyRoomControl___c__DisplayClass400_0_o *v101; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v102; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v104; // x23
  UIStandFigureR_o *v105; // x20
  System_Action_o *v106; // x22
  Il2CppObject *v107; // x20
  System_Func_bool__o *v108; // x21
  UnityEngine_WaitWhile_o *v109; // x20
  __int64 v111; // x0
  float scale; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A04583 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantPhotoMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v5);
    sub_1B686D4(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_1B686D4(&ServantPhotoEntity_FaceData___TypeInfo, v9);
    sub_1B686D4(&ServantPhotoEntity_FaceData_TypeInfo, v10);
    sub_1B686D4(&System_Func_bool__TypeInfo, v11);
    sub_1B686D4(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v12);
    sub_1B686D4(&int___TypeInfo, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v14);
    sub_1B686D4(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__400_4__, v15);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__0__, v16);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__10__, v17);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__1__, v18);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__2__, v19);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__3__, v20);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__5__, v21);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__6__, v22);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__7__, v23);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__8__, v24);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__9__, v25);
    sub_1B686D4(&MyRoomControl___c__DisplayClass400_0_TypeInfo, v26);
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v27);
    sub_1B686D4(&UIStandFigureRender_TypeInfo, v28);
    sub_1B686D4(&UnityEngine_WaitWhile_TypeInfo, v29);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B686D4(&StringLiteral_6679/*"FinishedFadePhotoServant"*/, v30);
    byte_4A04583 = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v32 = (Il2CppObject *)sub_1B68920(MyRoomControl___c__DisplayClass400_0_TypeInfo);
      System_Object___ctor(v32, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass400_0_o *)v32;
      p__8__1 = &v2->fields.__8__1;
      sub_1B68678(&v2->fields.__8__1);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B68678(&this->fields);
      if ( !_4__this )
        goto LABEL_79;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_79;
      (*p__8__1)->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_79;
      v114.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      v114.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v114.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x
                    + flt_BA5208[!_4__this->fields._IsMasterRight_k__BackingField];
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v114, 0LL);
      if ( !_4__this->fields.myRoomData )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)MyRoomData__getUsrSvtData(
                                                                   (MyRoomData_o *)this,
                                                                   _4__this->fields.photoCampaignServantUsrId,
                                                                   v34);
      if ( !this )
        goto LABEL_79;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
      photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
      v37 = SvtId;
      Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
      v2->fields._imageId_5__2 = Id;
      v39 = Id;
      if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      v40 = 1;
      Form = UIStandFigureRender__GetForm(v39, 1, -1, 0LL);
      v2->fields._formId_5__3 = Form;
      v42 = Form;
      _4__this->fields.photoCampaignServantImageId = v2->fields._imageId_5__2;
      photoCampaignType = _4__this->fields.photoCampaignType;
      photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
      _8__1 = (Il2CppObject *)v2->fields.__8__1;
      v46 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        _8__1,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_79;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v37,
        photoCampaignLimitCount,
        1,
        0,
        v42,
        10,
        v46,
        photoCampaignType == 1,
        0LL);
      v47 = (Il2CppObject *)v2->fields.__8__1;
      v48 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v48,
        v47,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__1__,
        0LL);
      v49 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v49, v48, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v49;
      p__2__current = &v2->fields.__2__current;
      sub_1B68678(p__2__current);
      *((_DWORD *)p__2__current - 2) = 1;
      return v40;
    case 1:
      v51 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v51 )
        goto LABEL_79;
      v51->fields.flag = 1;
      v52 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)v51,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__2__,
        0LL);
      if ( !_4__this )
        goto LABEL_79;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v52, 0LL);
      v53 = (Il2CppObject *)v2->fields.__8__1;
      v54 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v54,
        v53,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__3__,
        0LL);
      v55 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v55, v54, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v55;
      v56 = &v2->fields.__2__current;
      sub_1B68678(v56);
      v57 = 2;
      goto LABEL_77;
    case 2:
      v2->fields.__1__state = -1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   &entity,
                                                                   v2->fields._imageId_5__2,
                                                                   (const MethodInfo_30E46C0 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !_4__this )
          goto LABEL_79;
        v81 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v81 )
          goto LABEL_79;
        standFigureCollectList = v81->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_79;
        size = (unsigned int)standFigureCollectList->fields._size;
        v84 = (ServantPhotoEntity_FaceData_o *)sub_1B68920(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor(v84, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B6877C(int___TypeInfo, (unsigned int)size);
        if ( !v84 )
          goto LABEL_79;
        v84->fields.multiFace = (struct System_Int32_array *)this;
        p_fields = &v84->fields;
        sub_1B68678(&v84->fields);
        v84->fields.multiForm = (struct System_Int32_array *)sub_1B6877C(int___TypeInfo, (unsigned int)size);
        p_multiForm = &v84->fields.multiForm;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B68678(&v84->fields.multiForm);
        if ( (int)size < 1 )
        {
LABEL_63:
          this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B6877C(
                                                                       ServantPhotoEntity_FaceData___TypeInfo,
                                                                       1LL);
          if ( !this )
            goto LABEL_79;
          v93 = this;
          this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B68810(v84, this->klass->_1.element_class);
          if ( !this )
          {
            v111 = sub_1B68954();
            sub_1B687FC(v111, 0LL);
          }
          if ( LODWORD(v93->fields.__2__current) )
          {
            v93->fields.__4__this = (struct MyRoomControl_o *)v84;
            sub_1B68678(&v93->fields.__4__this);
            p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
            _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v93;
            goto LABEL_67;
          }
        }
        else
        {
          multiFace = p_fields->multiFace;
          if ( !p_fields->multiFace )
            goto LABEL_79;
          max_length = multiFace->max_length;
          v89 = 0LL;
          v90 = &multiFace->m_Items[1];
          while ( v89 < max_length )
          {
            v90[v89] = 0;
            v91 = *p_multiForm;
            if ( !*p_multiForm )
              goto LABEL_79;
            if ( v89 >= v91->max_length )
              break;
            v92 = (__int64)v91 + 4 * v89++;
            *(_DWORD *)(v92 + 32) = v2->fields._formId_5__3;
            if ( size == v89 )
              goto LABEL_63;
          }
        }
LABEL_80:
        sub_1B68938(this, method);
      }
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)entity;
      if ( !entity )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)ServantPhotoEntity__GetFaceList(
                                                                   (ServantPhotoEntity_o *)entity,
                                                                   v2->fields._formId_5__3,
                                                                   0LL);
      if ( !_4__this )
        goto LABEL_79;
      v58 = this;
      p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
      _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v58;
LABEL_67:
      sub_1B68678(p_photoCampaignFaceList);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v95 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v95 = MyRoomControl___c_TypeInfo;
      }
      _9__400_4 = (System_Func_object__object__o *)v95->static_fields->__9__400_4;
      if ( !_9__400_4 )
      {
        if ( !v95->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v95);
          v95 = MyRoomControl___c_TypeInfo;
        }
        v97 = (Il2CppObject *)v95->static_fields->__9;
        _9__400_4 = (System_Func_object__object__o *)sub_1B68920(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__400_4,
          v97,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__400_4__,
          0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__400_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__400_4;
        sub_1B68678(&static_fields->__9__400_4);
      }
      v99 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   photoCampaignFaceList,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__400_4,
                                                                   (const MethodInfo_2E7C550 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v100 = System_Linq_Enumerable__Distinct_int_(
               v99,
               (const MethodInfo_2E68A30 *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v100,
                                                                   (const MethodInfo_2E85828 *)Method_System_Linq_Enumerable_ToList_int___);
      v101 = v2->fields.__8__1;
      if ( !v101 )
        goto LABEL_79;
      v101->fields.flag = 1;
      v102 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this
        || (SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL),
            v104 = (Il2CppObject *)v2->fields.__8__1,
            v105 = SvtStandFigure,
            v106 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
            System_Action___ctor(
              v106,
              v104,
              Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__5__,
              0LL),
            !v105) )
      {
LABEL_79:
        sub_1B68930(this, method);
      }
      UIStandFigureR__PreloadFormAssets(v105, (System_Collections_Generic_List_int__o *)v102, v106, 0LL);
      v107 = (Il2CppObject *)v2->fields.__8__1;
      v108 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v108,
        v107,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__6__,
        0LL);
      v109 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v109, v108, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v109;
      v56 = &v2->fields.__2__current;
      sub_1B68678(v56);
      v57 = 3;
LABEL_77:
      *((_DWORD *)v56 - 2) = v57;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_79;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v60 = _4__this->fields.photoCampaignFaceList;
      if ( !v60 )
        goto LABEL_79;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v60->max_length )
        goto LABEL_80;
      v2->fields._faceData_5__4 = v60->m_Items[photoCampaignFaceListIndex];
      sub_1B68678(&v2->fields._faceData_5__4);
      faceData_5__4 = v2->fields._faceData_5__4;
      v63 = (Il2CppObject *)v2->fields.__8__1;
      v64 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v64, v63, Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__7__, 0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, faceData_5__4, v64, 0LL);
      v65 = (Il2CppObject *)v2->fields.__8__1;
      v66 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v66,
        v65,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__8__,
        0LL);
      v67 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v67, v66, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v67;
      v56 = &v2->fields.__2__current;
      sub_1B68678(v56);
      v57 = 4;
      goto LABEL_77;
    case 4:
      v68 = v2->fields._faceData_5__4;
      v2->fields.__1__state = -1;
      if ( !v68 )
        goto LABEL_79;
      multiForm = v68->fields.multiForm;
      if ( !multiForm )
        goto LABEL_79;
      if ( !multiForm->max_length )
        goto LABEL_80;
      if ( !_4__this )
        goto LABEL_79;
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        _4__this,
        v2->fields._imageId_5__2,
        multiForm->m_Items[1],
        &v2->fields._svtMovePos_5__5,
        &scale,
        0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_79;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScale_33417400(gameObject, scale, 0LL);
      v71 = v2->fields.__8__1;
      if ( !v71 )
        goto LABEL_79;
      v71->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v73 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v73,
        (Il2CppObject *)v71,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__9__,
        0LL);
      if ( !photoCampaignComponent )
        goto LABEL_79;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v73, 0LL);
      v74 = (Il2CppObject *)v2->fields.__8__1;
      v75 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v75,
        v74,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__10__,
        0LL);
      v76 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v76, v75, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v76;
      v56 = &v2->fields.__2__current;
      sub_1B68678(v56);
      v57 = 5;
      goto LABEL_77;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_79;
      TitleInfoControl__changeTitleInfo_36940820((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_79;
      TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 0LL);
      titleInfo = _4__this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)titleInfo->fields.titleImg;
      if ( !this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v78 = _4__this->fields.titleInfo;
      if ( !v78 )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v78->fields.headerBgImg;
      if ( !this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_79;
      TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignState = 2;
      if ( !this )
        goto LABEL_79;
      v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(_4__this, v79, v2->fields._svtMovePos_5__5, (System_String_o *)StringLiteral_6679/*"FinishedFadePhotoServant"*/, 0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_79;
      v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v80, PhotoCampaignMasterPosition, 0LL, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__400__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__400_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoCampaignServant_d__400__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoCampaignServant_d__400_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__LoadPhotoCampaignServant_d__400_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__400__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__400_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__400__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoCampaignServant_d__400_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__411___ctor(
        MyRoomControl__StartCameraEffect_d__411_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__411__MoveNext(
        MyRoomControl__StartCameraEffect_d__411_o *this,
        const MethodInfo *method)
{
  MyRoomControl__StartCameraEffect_d__411_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v9; // x22
  bool v10; // w21
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_WaitForSeconds_o *v12; // x19
  Il2CppObject **v13; // x20
  int32_t v14; // w1
  __int64 v15; // x1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject **p__2__current; // x20

  v2 = this;
  if ( (byte_4A04584 & 1) == 0 )
  {
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    this = (MyRoomControl__StartCameraEffect_d__411_o *)sub_1B686D4(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4A04584 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignFrameSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__411_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      _4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignFrameWideSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__411_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      !_4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_34;
    if ( _4__this->fields._IsOnlyServant_k__BackingField )
      v14 = 362;
    else
      v14 = 870;
    UIWidget__set_width((UIWidget_o *)this, v14, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_4A03901 )
    {
      sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4A03901 = 1;
    }
    GameObjectExtensions__SetLocalPosition(
      photoCampaignProduction,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          this = (MyRoomControl__StartCameraEffect_d__411_o *)TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL),
          (titleInfo = _4__this->fields.titleInfo) == 0LL)
      || (this = (MyRoomControl__StartCameraEffect_d__411_o *)titleInfo->fields.backBtn) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          MyRoomControl__SetPhotoCampaignUi(_4__this, 1, 0LL),
          (this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignCameraButton) == 0LL) )
    {
LABEL_34:
      sub_1B68930(this, method);
    }
    photoCampaignCameraEffect = (Il2CppObject *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49072196(
                                                                                                 photoCampaignCameraEffect,
                                                                                                 transform,
                                                                                                 (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
    sub_1B68678(&_4__this->fields.photoCampaignInstantiateCameraEffect);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1B68678(p__2__current);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_34;
  this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_34;
  photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
  v9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__49072196(
    photoCampaignShutterEffect,
    v9,
    (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignProduction;
  if ( !this )
    goto LABEL_34;
  v10 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignFadeSprite;
  if ( !this )
    goto LABEL_34;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_object_(
    v11,
    (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v12 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v12, 0.066, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v12;
  v13 = &v2->fields.__2__current;
  sub_1B68678(v13);
  *((_DWORD *)v13 - 2) = 1;
  return v10;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__411__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__411_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__411__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__411_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__StartCameraEffect_d__411_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__411__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__411_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__411__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__411_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4A0456D & 1) == 0 )
  {
    sub_1B686D4(&MyRoomControl___c_TypeInfo, v1);
    byte_4A0456D = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v2;
  sub_1B68678(MyRoomControl___c_TypeInfo->static_fields);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__318_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A04570 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A04570 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__238_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A0456F & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0456F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__329_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A04571 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4A04571 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__400_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1B68930(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void __fastcall MyRoomControl___c___initMyRoom_b__216_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__237_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A0456E & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0456E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass236_0___ctor(
        MyRoomControl___c__DisplayClass236_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass236_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass236_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(this, method);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass240_0___ctor(
        MyRoomControl___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass240_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass240_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomControl_o *v6; // x8
  struct MyRoomControl_o *v7; // x8
  struct MyRoomControl_o *v8; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22

  v2 = this;
  if ( (byte_4A04572 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass240_0_o *)sub_1B686D4(
                                                       &Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__1__,
                                                       v3);
    byte_4A04572 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass240_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  this[1].fields.__9__1 = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  sub_1B68678(&this[1].fields.__9__1);
  this = (MyRoomControl___c__DisplayClass240_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[19].monitor, 0, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass240_0_o *)v6->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6->fields.isExistVoiceData, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass240_0_o *)v7->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v7->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass240_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].fields.end_act) )
    MyRoomControl__setNormalFace_31079460((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_20;
  favoriteChangeComp = v8->fields.favoriteChangeComp;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    this = (MyRoomControl___c__DisplayClass240_0_o *)sub_1B68678(&v2->fields.__9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1B68930(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass240_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  struct MyRoomControl_o *v7; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  struct MyRoomControl_o *v10; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v12; // x8
  float v13; // s8
  int v14; // s1
  struct MyRoomControl_o *v15; // x8
  int v16; // s9
  int v17; // s2
  float v18; // s0
  int v19; // s1
  struct MyRoomControl_o *v20; // x8

  if ( (byte_4A04573 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__2__, v3);
    sub_1B686D4(&StringLiteral_11217/*"ReleaseTouch"*/, v4);
    byte_4A04573 = 1;
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
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v10->fields.standFigureBack;
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
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v12->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v13 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v15->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v16 = v14;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v17 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v18 = -v13;
    v19 = v16;
    MyRoomControl__moveControl(
      _4__this,
      _4__this->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v17 - 2),
      (System_String_o *)StringLiteral_11217/*"ReleaseTouch"*/,
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
            _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _4__this = (MyRoomControl_o *)sub_1B68678(&this->fields.__9__2);
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
    sub_1B68930(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_30;
  v20->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass240_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x0
  _BOOL4 isHeroine; // w8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_1B68930(_4__this, v3);
  isHeroine = _4__this->fields.isHeroine;
  _4__this->fields.isSvtLoading = 0;
  if ( isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass241_0___ctor(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass241_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass241_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass241_0_o *)_4__this->fields.svtClickCollider) == 0LL)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass241_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0LL),
        !voicePlayBtn) )
  {
    sub_1B68930(this, method);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass242_0___ctor(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass242_0___SetMaterialSvtFigure_b__0(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass242_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomControl_o *v7; // x8
  struct MyRoomControl_o *v8; // x8
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  int end_act; // w8
  struct MyRoomControl_o *v14; // x8
  StandFigureBack_o *v15; // x20
  System_Action_o *_9__1; // x22
  struct MyRoomControl_o *v17; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v19; // x8
  float v20; // s8
  int v21; // s1
  struct MyRoomControl_o *v22; // x8
  int v23; // s9
  int v24; // s2
  float v25; // s0
  int v26; // s1
  struct MyRoomControl_o *v27; // x8

  v2 = this;
  if ( (byte_4A04574 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__1__, v3);
    this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1B686D4(&StringLiteral_11217/*"ReleaseTouch"*/, v4);
    byte_4A04574 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_46;
  this[2].monitor = standFigureBack->fields.standFigureCollectList;
  sub_1B68678(&this[2].monitor);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v7->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v8->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v9->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v10->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v11->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v12->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass242_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[22].monitor) )
    MyRoomControl__setNormalFace_31079460((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass242_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  end_act = (int)this[21].fields.end_act;
  if ( end_act == 1 )
  {
    this = (MyRoomControl___c__DisplayClass242_0_o *)this[4].klass;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v17 = v2->fields.__4__this;
    if ( !v17 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)v17->fields.standFigureBack;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)this->fields.__9__1;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v19 = v2->fields.__4__this;
    if ( !v19 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)v19->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v20 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v22 = v2->fields.__4__this;
    if ( !v22 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)v22->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v23 = v21;
    this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v24 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass242_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v25 = -v20;
    v26 = v23;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].fields.__9__1,
      *(UnityEngine_Vector3_o *)(&v24 - 2),
      (System_String_o *)StringLiteral_11217/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !end_act )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v14 = v2->fields.__4__this;
    if ( v14 )
    {
      v15 = v14->fields.standFigureBack;
      _9__1 = v2->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v2,
          Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v2->fields.__9__1 = _9__1;
        this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1B68678(&v2->fields.__9__1);
      }
      if ( v15 )
      {
        StandFigureBack__Fadein(v15, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_1B68930(this, method);
  }
  ActionExtensions__Call(v2->fields.end_act, 0LL);
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_46;
  v27->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass242_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_1B68930(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass249_0___ctor(
        MyRoomControl___c__DisplayClass249_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass249_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass249_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass249_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  v2 = this;
  if ( (byte_4A04575 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass249_0_o *)sub_1B686D4(&StringLiteral_8232/*"LOAD_END"*/, method);
    byte_4A04575 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass249_0_o *)_4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass249_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v2->fields.svtVoiceEnt, 0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass249_0_o *)v5->fields.myRoomFsm) == 0LL )
  {
    sub_1B68930(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8232/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass322_0___ctor(
        MyRoomControl___c__DisplayClass322_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass322_0___SetFavoriteSvt_b__0(
        MyRoomControl___c__DisplayClass322_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass322_0_o *v3; // x19
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass322_0_o *)_4__this->fields.svtCtr) == 0LL)
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v3->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass322_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v3->fields.svtVoiceEnt, 0LL),
        (v5 = v3->fields.__4__this) == 0LL) )
  {
    sub_1B68930(this, method);
  }
  v5->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass322_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass322_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4A04576 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A04576 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall MyRoomControl___c__DisplayClass322_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass322_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass341_0___ctor(
        MyRoomControl___c__DisplayClass341_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass341_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass341_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass341_0_o *v4; // x19
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
  this = (MyRoomControl___c__DisplayClass341_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  this[2].monitor = bondsStandFigureBack->fields.standFigureCollectList;
  sub_1B68678(&this[2].monitor);
  this = (MyRoomControl___c__DisplayClass341_0_o *)v4->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass341_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v7 = v4->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass341_0_o *)v7->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v8 = v5;
  v9 = v6;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10
    || (this = (MyRoomControl___c__DisplayClass341_0_o *)v10->fields.bondsStandFigureBack) == 0LL
    || (this = (MyRoomControl___c__DisplayClass341_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0LL)) == 0LL
    || (this = *(MyRoomControl___c__DisplayClass341_0_o **)&this->fields.createStandEnd) == 0LL
    || (this = (MyRoomControl___c__DisplayClass341_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_1B68930(this, method);
  }
  v11.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v11.fields.y = v8;
  v11.fields.z = v9;
  GameObjectExtensions__SetLocalPosition(v4->fields.bondsSvtObj, v11, 0LL);
  v4->fields.createStandEnd = 1;
}


void __fastcall MyRoomControl___c__DisplayClass357_0___ctor(
        MyRoomControl___c__DisplayClass357_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass357_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass357_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1B68930(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass378_0___ctor(
        MyRoomControl___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass378_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0LL )
    sub_1B68930(this, method);
  return this->fields.loadedCount < (signed int)multipleStandFigureBacks->max_length;
}


void __fastcall MyRoomControl___c__DisplayClass378_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass378_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass378_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void __fastcall MyRoomControl___c__DisplayClass382_0___ctor(
        MyRoomControl___c__DisplayClass382_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass382_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass382_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass393_0___ctor(
        MyRoomControl___c__DisplayClass393_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass393_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass393_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  AssetData_o *v3; // x20
  MyRoomControl___c__DisplayClass393_0_o *v4; // x19
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
  struct MyRoomControl_o *_4__this; // x8
  Il2CppObject *Object_object__48415484; // x21
  Il2CppObject *Component_object; // x21
  struct MyRoomControl_o *v26; // x8
  struct MyRoomControl_o *v27; // x21
  struct MyRoomControl_o *v28; // x21
  struct MyRoomControl_o *v29; // x25
  struct MyRoomControl_o *v30; // x8
  Il2CppObject *v31; // x21
  UnityEngine_Transform_o *transform; // x22
  struct MyRoomControl_o *v33; // x8
  struct MyRoomControl_o *v34; // x21
  struct MyRoomControl_o *v35; // x8
  struct MyRoomControl_o *v36; // x22
  struct MyRoomControl_o *v37; // x8
  Il2CppObject *v38; // x21
  UnityEngine_Transform_o *v39; // x0
  struct MyRoomControl_o *v40; // x8
  struct MyRoomControl_o *v41; // x21

  v3 = assetData;
  v4 = this;
  if ( (byte_4A04577 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, assetData);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v5);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v6);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v7);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B686D4(&StringLiteral_20195/*"img_bg_shutter"*/, v12);
    sub_1B686D4(&StringLiteral_10641/*"Polaroid_img_frame_wide"*/, v13);
    sub_1B686D4(&StringLiteral_8319/*"LayerChangeButton"*/, v14);
    sub_1B686D4(&StringLiteral_10575/*"PhotoSettingButton"*/, v15);
    sub_1B686D4(&StringLiteral_8862/*"MasterEquipSettingDialog"*/, v16);
    sub_1B686D4(&StringLiteral_5366/*"DownloadPhotoCampaignAtlas"*/, v17);
    sub_1B686D4(&StringLiteral_17145/*"bit_camera_shutter"*/, v18);
    sub_1B686D4(&StringLiteral_17144/*"bit_camera_iconblink"*/, v19);
    sub_1B686D4(&StringLiteral_10639/*"Polaroid_btn_shutter"*/, v20);
    sub_1B686D4(&StringLiteral_10640/*"Polaroid_img_frame"*/, v21);
    this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B686D4(&StringLiteral_10576/*"PhotoTargetSelectDialog"*/, v22);
    byte_4A04577 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_42;
  _4__this->fields.photoCampaignAssetData = v3;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B68678(&_4__this->fields.photoCampaignAssetData);
  if ( !v3 )
    goto LABEL_42;
  Object_object__48415484 = AssetData__GetObject_object__48415484(
                              v3,
                              (System_String_o *)StringLiteral_5366/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__48415484,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__48415484 )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__48415484,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = v4->fields.__4__this;
      if ( !v26 )
        goto LABEL_42;
      v26->fields.photoCampaignAtlas = (struct UIAtlas_o *)Component_object;
      sub_1B68678(&v26->fields.photoCampaignAtlas);
    }
  }
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].monitor,
    (System_String_o *)StringLiteral_10640/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.__4__this,
    (System_String_o *)StringLiteral_10641/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.__4__this,
    (System_String_o *)StringLiteral_10639/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_20195/*"img_bg_shutter"*/,
    0LL);
  v27 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48415484(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17144/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v27 )
    goto LABEL_42;
  v27->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(&v27->fields.photoCampaignCameraEffect);
  v28 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48415484(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17145/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v28 )
    goto LABEL_42;
  v28->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(&v28->fields.photoCampaignShutterEffect);
  v29 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48415484(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10576/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  v30 = v4->fields.__4__this;
  if ( !v30 )
    goto LABEL_42;
  v31 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v30->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__49072196(
                                                     v31,
                                                     transform,
                                                     (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v29 )
    goto LABEL_42;
  v29->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B68678(&v29->fields.photoTargetSelectDialog);
  v33 = v4->fields.__4__this;
  if ( !v33 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v33->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_42;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v34 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48415484(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10575/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  v35 = v4->fields.__4__this;
  if ( !v35 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__49072196(
                                                     (Il2CppObject *)this,
                                                     v35->fields.panelRoot,
                                                     (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v34 )
    goto LABEL_42;
  v34->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B68678(&v34->fields.photoSettingButtonComponent);
  assetData = (AssetData_o *)v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)assetData[14].fields.name;
  if ( !this )
    goto LABEL_42;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v36 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48415484(
                                                     v3,
                                                     (System_String_o *)StringLiteral_8862/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  v37 = v4->fields.__4__this;
  if ( !v37 )
    goto LABEL_42;
  v38 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v37->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__49072196(
                                                     v38,
                                                     v39,
                                                     (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v36 )
    goto LABEL_42;
  v36->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B68678(&v36->fields.masterEquipSettingDialog);
  v40 = v4->fields.__4__this;
  if ( !v40
    || (this = (MyRoomControl___c__DisplayClass393_0_o *)v40->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v41 = v4->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48415484(
                                                           v3,
                                                           (System_String_o *)StringLiteral_8319/*"LayerChangeButton"*/,
                                                           (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192),
        !v41)
    || (v41->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_1B68678(&v41->fields.photoLayerChangeObj),
        (this = (MyRoomControl___c__DisplayClass393_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_42:
    sub_1B68930(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callBack, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___ctor(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadMasterEquip_b__0(
        MyRoomControl___c__DisplayClass394_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass394_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v11; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct EquipEntity_o *v15; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterMaleEquipTexture; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_4A04578 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1B686D4(&AssetManager_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData__Add__, v7);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1B686D4(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v8);
    byte_4A04578 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass394_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v11 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v13[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1B68678(v13 + 4);
        }
        v14 = v4->fields.__4__this;
        if ( v14 )
        {
          v15 = v4->fields.equipEnt;
          if ( v15 )
          {
            masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v14->fields.masterMaleEquipTexture;
            v18 = *(_QWORD *)&v15->fields.id.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v15->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v20.fields.currentCryptoKey = v18;
            *(_QWORD *)&v20.fields.fakeValue = v17;
            this = (MyRoomControl___c__DisplayClass394_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                               v20,
                                                               0LL);
            if ( assetData )
            {
              v19 = (int)this;
              this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2E2C1F4 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v19,
                  (Il2CppObject *)this,
                  (const MethodInfo_3133F8C *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B68930(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37539444(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass394_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass394_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v11; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct EquipEntity_o *v15; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterFemaleEquipTexture; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_4A04579 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1B686D4(&AssetManager_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData__Add__, v7);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1B686D4(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v8);
    byte_4A04579 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass394_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v11 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v13[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1B68678(v13 + 4);
        }
        v14 = v4->fields.__4__this;
        if ( v14 )
        {
          v15 = v4->fields.equipEnt;
          if ( v15 )
          {
            masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v14->fields.masterFemaleEquipTexture;
            v18 = *(_QWORD *)&v15->fields.id.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v15->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v20.fields.currentCryptoKey = v18;
            *(_QWORD *)&v20.fields.fakeValue = v17;
            this = (MyRoomControl___c__DisplayClass394_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                               v20,
                                                               0LL);
            if ( assetData )
            {
              v19 = (int)this;
              this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2E2C1F4 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v19,
                  (Il2CppObject *)this,
                  (const MethodInfo_3133F8C *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B68930(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37539444(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass400_0___ctor(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__0(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass400_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct MyRoomControl_o *_4__this; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x21
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *data; // x20
  EventDelegate_Callback_o *v16; // x22
  EventDelegate_o *v17; // x21
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v2 = this;
  if ( (byte_4A0457A & 1) == 0 )
  {
    sub_1B686D4(&EventDelegate_Callback_TypeInfo, method);
    sub_1B686D4(&EventDelegate_TypeInfo, v3);
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1B686D4(&Method_MyRoomControl_OnClickPhotoServant__, v6);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, v7);
    this = (MyRoomControl___c__DisplayClass400_0_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0457A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass400_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_17;
  photoLayerChangeObj = (Il2CppObject *)_4__this->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass400_0_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  if ( !this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass400_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__49072196(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)v12,
                                                                   (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  this = (MyRoomControl___c__DisplayClass400_0_o *)sub_1B68678(&_4__this->fields.photoSvtTouchPress);
  v13 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_17;
  klass = v13[84].klass;
  if ( !klass )
    goto LABEL_17;
  data = (System_Collections_Generic_List_object__o *)klass->_1.byval_arg.data;
  v16 = (EventDelegate_Callback_o *)sub_1B68920(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v16, v13, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL);
  v17 = (EventDelegate_o *)sub_1B68920(EventDelegate_TypeInfo);
  EventDelegate___ctor_46576352(v17, v16, 0LL);
  if ( !data
    || (items = data->fields._items,
        v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++data->fields._version,
        !items) )
  {
LABEL_17:
    sub_1B68930(this, method);
  }
  size = data->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      data,
      (Il2CppObject *)v17,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    data->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v17;
    sub_1B68678(v21 + 4);
  }
  v2->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__1(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


bool __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__10(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__2(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__3(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__5(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__6(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__7(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__8(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass400_0___LoadPhotoCampaignServant_b__9(
        MyRoomControl___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void __fastcall MyRoomControl___c__DisplayClass401_0___ctor(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass401_0___CreatePhotoMasterFigure_b__0(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass401_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  struct MyRoomControl_o *v16; // x8
  struct MyRoomControl_o *v17; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x21
  void *monitor; // x8
  System_Collections_Generic_List_object__o *v23; // x20
  EventDelegate_Callback_o *v24; // x22
  EventDelegate_o *v25; // x21
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A0457B & 1) == 0 )
  {
    sub_1B686D4(&EventDelegate_Callback_TypeInfo, method);
    sub_1B686D4(&EventDelegate_TypeInfo, v3);
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___, v4);
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1B686D4(&Method_MyRoomControl_OnclickPhotoMaster__, v7);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, v8);
    this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0457B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_26;
  if ( !this )
    goto LABEL_26;
  v30.fields.z = v11->fields.defaultPhotoServantPos.fields.z + 0.0;
  v30.fields.y = v11->fields.defaultPhotoServantPos.fields.y + 0.0;
  v30.fields.x = v11->fields.defaultPhotoServantPos.fields.x + flt_BA5120[!v11->fields._IsMasterRight_k__BackingField];
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v12->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33417400(gameObject, 0.9, 0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v14->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14->fields.photoMasterPanel = (struct UIPanel_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                       v15,
                                                       (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1B68678(&v14->fields.photoMasterPanel);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v16->fields.photoMasterPanel;
  if ( !this )
    goto LABEL_26;
  UIPanel__set_depth((UIPanel_o *)this, 15, 0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v17->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  photoLayerChangeObj = (Il2CppObject *)v17->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass401_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object__49072196(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
  v17->fields.photoMasterTouchPress = (struct UITouchPress_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)v20,
                                                                 (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1B68678(&v17->fields.photoMasterTouchPress);
  v21 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v21 )
    goto LABEL_26;
  monitor = v21[84].monitor;
  if ( !monitor )
    goto LABEL_26;
  v23 = (System_Collections_Generic_List_object__o *)*((_QWORD *)monitor + 4);
  v24 = (EventDelegate_Callback_o *)sub_1B68920(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v24, v21, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL);
  v25 = (EventDelegate_o *)sub_1B68920(EventDelegate_TypeInfo);
  EventDelegate___ctor_46576352(v25, v24, 0LL);
  if ( !v23
    || (items = v23->fields._items,
        v27 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v23->fields._version,
        !items) )
  {
LABEL_26:
    sub_1B68930(this, method);
  }
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v25,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v25;
    sub_1B68678(v29 + 4);
  }
  ActionExtensions__Call(v2->fields.func, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass405_0___ctor(
        MyRoomControl___c__DisplayClass405_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass405_0___ChangePhotoCampaignServantFace_b__0(
        MyRoomControl___c__DisplayClass405_0_o *this,
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
  struct UnityEngine_Vector3_o *p_currentPhotoServantPos; // x8
  __int64 v12; // [xsp+0h] [xbp-30h]
  float scale; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o position; // [xsp+10h] [xbp-20h] BYREF

  position.fields.z = 0.0;
  *(_QWORD *)&position.fields.x = 0LL;
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
    sub_1B68938(_4__this, method);
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    _4__this,
    _4__this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    &position,
    &scale,
    0LL);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_11;
  _4__this = (struct MyRoomControl_o *)v6->fields.photoCampaignStandFigureBack;
  if ( !_4__this )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, position, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8
    || (_4__this = (struct MyRoomControl_o *)v8->fields.photoCampaignStandFigureBack) == 0LL
    || (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL),
        GameObjectExtensions__SetLocalScale_33417400(v9, scale, 0LL),
        v10 = this->fields.__4__this,
        v12 = *(_QWORD *)&position.fields.x,
        !v10) )
  {
LABEL_11:
    sub_1B68930(_4__this, method);
  }
  p_currentPhotoServantPos = &v10->fields.currentPhotoServantPos;
  p_currentPhotoServantPos->fields.z = position.fields.z;
  *(_QWORD *)&p_currentPhotoServantPos->fields.x = v12;
}


void __fastcall MyRoomControl___c__DisplayClass424_0___ctor(
        MyRoomControl___c__DisplayClass424_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass424_0___ChangeMasterSetting_b__1(
        MyRoomControl___c__DisplayClass424_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass424_0_o *v2; // x21
  __int64 v3; // x1
  Il2CppObject *_4__this; // x23
  UIMasterFigureTextureOld_o *monitor; // x19
  int32_t genderType; // w20
  int32_t equipId; // w21
  System_Action_o *v8; // x22

  v2 = this;
  if ( (byte_4A0457C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass424_0_o *)sub_1B686D4(
                                                       &Method_MyRoomControl__ChangeMasterSetting_b__424_2__,
                                                       v3);
    byte_4A0457C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (UIMasterFigureTextureOld_o *)_4__this[81].monitor,
        genderType = v2->fields.genderType,
        equipId = v2->fields.equipId,
        v8 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(v8, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__424_2__, 0LL),
        !monitor) )
  {
    sub_1B68930(this, method);
  }
  UIMasterFigureTextureOld__SetCharacter(monitor, 2, genderType, equipId, v8, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass425_0___ctor(
        MyRoomControl___c__DisplayClass425_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass425_0___ExchangePosition_b__0(
        MyRoomControl___c__DisplayClass425_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass425_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v6; // x8
  UnityEngine_GameObject_o *v7; // x0
  struct MyRoomControl_o *v8; // x8
  struct UnityEngine_Vector3_o *p_currentPhotoServantPos; // x8
  struct MyRoomControl_o *v10; // x8
  MyRoomControl_o *v11; // x8
  MyRoomControl___c__DisplayClass425_0_o *v12; // x19
  CommonUI_o *v13; // x19
  __int64 v14; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A0457D & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass425_0_o *)sub_1B686D4(
                                                       &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                       v3);
    byte_4A0457D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass425_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, v2->fields.svtMovePos, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass425_0_o *)v6->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_15;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33417400(v7, v2->fields.svtMoveScale, 0LL);
  v8 = v2->fields.__4__this;
  v14 = *(_QWORD *)&v2->fields.svtMovePos.fields.x;
  if ( !v8 )
    goto LABEL_15;
  p_currentPhotoServantPos = &v8->fields.currentPhotoServantPos;
  p_currentPhotoServantPos->fields.z = v2->fields.svtMovePos.fields.z;
  *(_QWORD *)&p_currentPhotoServantPos->fields.x = v14;
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass425_0_o *)v10->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass425_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_15;
  v12 = this;
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v11, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v12, PhotoCampaignMasterPosition, 0LL);
  this = (MyRoomControl___c__DisplayClass425_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_15:
    sub_1B68930(this, method);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl__initMaterial_d__285___ctor(
        MyRoomControl__initMaterial_d__285_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__initMaterial_d__285__MoveNext(
        MyRoomControl__initMaterial_d__285_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  bool v11; // w21
  System_Func_bool__o *v12; // x22
  UnityEngine_WaitUntil_o *v13; // x20
  Il2CppObject **p__2__current; // x19

  if ( (byte_4A04585 & 1) == 0 )
  {
    sub_1B686D4(&System_Func_bool__TypeInfo, method);
    sub_1B686D4(&Method_MyRoomControl__initMaterial_b__285_0__, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&UnityEngine_WaitUntil_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_6910/*"GO_NEXT"*/, v6);
    byte_4A04585 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1B68930(Instance, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v12, _4__this, Method_MyRoomControl__initMaterial_b__285_0__, 0LL);
  v13 = (UnityEngine_WaitUntil_o *)sub_1B68920(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1B68678(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v11;
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__285__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__285_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__initMaterial_d__285__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__285_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__initMaterial_d__285_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__285__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__285_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__initMaterial_d__285__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__285_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__341___ctor(
        MyRoomControl__svtVoicePlayAct_d__341_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__svtVoicePlayAct_d__341__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__341_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  MyRoomControl__svtVoicePlayAct_d__341_o *v5; // x19
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v23; // x22
  CommonUI_o *v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_T__o *v30; // x21
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v35; // x22
  Il2CppObject *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct MaterialEventLogListViewItem_Info_o *v40; // x8
  struct MaterialEventLogListViewItem_Info_o *v41; // x8
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  struct MaterialEventLogListViewItem_Info_o *v43; // x8
  struct MyRoomControl___c__DisplayClass341_0_o *_8__1; // x22
  struct MyRoomControl___c__DisplayClass341_0_o *v45; // x8
  struct MyRoomControl___c__DisplayClass341_0_o *v46; // x8
  struct MaterialEventLogListViewItem_Info_o *v47; // x8
  int32_t v48; // w22
  struct MaterialEventLogListViewItem_Info_o *v49; // x8
  int32_t v50; // w23
  int32_t voiceCondValue; // w24
  int32_t Form; // w23
  struct MyRoomControl_o *v53; // x8
  struct MyRoomControl_o *v54; // x8
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  Il2CppObject *v58; // x26
  System_Action_o *v59; // x25
  struct MyRoomControl___c__DisplayClass341_0_o *v60; // x8
  Il2CppObject **v61; // x19
  int v62; // w8
  int32_t v63; // w21
  MyRoomControl__svtVoicePlayAct_d__341_o *v64; // x22
  struct MyRoomControl_o *v65; // x8
  CommonUI_o *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  CommonUI_o *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  struct MyRoomControl___c__DisplayClass341_0_o *v77; // x8
  CommonUI_o *v78; // x20
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int v82; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4A04586 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v6);
    sub_1B686D4(&char_TypeInfo, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v8);
    sub_1B686D4(&int_TypeInfo, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v14);
    sub_1B686D4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v15);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B686D4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_1B686D4(&Method_MyRoomControl___c__DisplayClass341_0__svtVoicePlayAct_b__0__, v19);
    sub_1B686D4(&MyRoomControl___c__DisplayClass341_0_TypeInfo, v20);
    this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1B686D4(&UIStandFigureRender_TypeInfo, v21);
    byte_4A04586 = 1;
  }
  _4__this = v5->fields.__4__this;
  switch ( v5->fields.__1__state )
  {
    case 0:
      v5->fields.__1__state = -1;
      v23 = (Il2CppObject *)sub_1B68920(MyRoomControl___c__DisplayClass341_0_TypeInfo);
      System_Object___ctor(v23, 0LL);
      v5->fields.__8__1 = (struct MyRoomControl___c__DisplayClass341_0_o *)v23;
      sub_1B68678(&v5->fields.__8__1);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v5->fields.__8__1;
      if ( !this )
        goto LABEL_129;
      *(_QWORD *)&this->fields.__1__state = v5->fields.__4__this;
      sub_1B68678(&this->fields);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v24 )
        goto LABEL_129;
      CommonUI__maskFadeout(v24, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v82 = 0;
        v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v25, v26, v27);
        p__2__current = &v5->fields.__2__current;
        sub_1B68678(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_129;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_129;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v30 = (System_Collections_Generic_List_T__o *)sub_1B68920(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v30,
        (const MethodInfo_34A122C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v30 )
        goto LABEL_129;
      items = v30->fields._items;
      v32 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_129;
      size = v30->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v30,
          81,
          *(const MethodInfo_34A1A80 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v5->fields.item;
      if ( !item )
        goto LABEL_129;
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_129;
      v35 = (ServantVoiceEntity_o *)this;
      v5->fields._voiceAssetName_5__2 = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      sub_1B68678(&v5->fields._voiceAssetName_5__2);
      v36 = (Il2CppObject *)System_Int32__ToString((int)v35 + 20, 0LL);
      LOWORD(v82) = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)j_il2cpp_value_box_0(char_TypeInfo, &v82, v37, v38, v39);
      v40 = v5->fields.item;
      if ( !v40 )
        goto LABEL_129;
      v5->fields._playSvtVoiceId_5__3 = System_String__Concat_61430480(
                                          v36,
                                          (Il2CppObject *)this,
                                          (Il2CppObject *)v40->fields.voiceId,
                                          0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1B68678(&v5->fields._playSvtVoiceId_5__3);
      v41 = v5->fields.item;
      if ( !v41 )
        goto LABEL_129;
      v5->fields._svtVoiceDataList_5__4 = ServantVoiceEntity__getVoiceList_39507196(
                                            v35,
                                            v41->fields.svtVoiceType,
                                            v5->fields._playSvtVoiceId_5__3,
                                            (System_Collections_Generic_List_CondType_Kind__o *)v30,
                                            0,
                                            0LL);
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v5->fields._svtVoiceDataList_5__4;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1B68678(&v5->fields._svtVoiceDataList_5__4);
      if ( v5->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v43 = v5->fields.item;
      if ( !v43 )
        goto LABEL_129;
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_39506468(
                                                                                v35,
                                                                                v43->fields.svtVoiceType,
                                                                                3,
                                                                                v43->fields.voiceCondValue,
                                                                                0LL,
                                                                                -1,
                                                                                0LL);
      sub_1B68678(&v5->fields._svtVoiceDataList_5__4);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_129;
      _8__1 = v5->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_129;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1B68678(&_8__1->fields.bondsSvtObj);
      v45 = v5->fields.__8__1;
      if ( !v45 )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v45->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v46 = v5->fields.__8__1;
      if ( !v46 )
        goto LABEL_129;
      v46->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
      v47 = v5->fields.item;
      if ( !v47 )
        goto LABEL_129;
      v48 = (int)this;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)ServantScriptMaster__getId(
                                                          v47->fields.svt_id,
                                                          (int32_t)this,
                                                          0LL);
      v49 = v5->fields.item;
      if ( !v49 )
        goto LABEL_129;
      v50 = (int)this;
      voiceCondValue = v49->fields.voiceCondValue;
      if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      Form = UIStandFigureRender__GetForm(v50, 1, voiceCondValue, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_62;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_129;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_130;
      v53 = this->fields.__4__this;
      if ( !v53 )
        goto LABEL_129;
      if ( !HIDWORD(v53->fields.myRoomListCtr) )
        goto LABEL_62;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_129;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_130:
        sub_1B68938(this, method);
      v54 = this->fields.__4__this;
      if ( !v54 )
        goto LABEL_129;
      Form = (int32_t)v54->fields.myRoomListCtr;
LABEL_62:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_129;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v55 = v5->fields.item;
      if ( !v55 )
        goto LABEL_129;
      svt_id = v55->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v58 = (Il2CppObject *)v5->fields.__8__1;
      v59 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v59, v58, Method_MyRoomControl___c__DisplayClass341_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_129;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v48, 1, 0, Form, 10, v59, 0, 0LL);
LABEL_66:
      v60 = v5->fields.__8__1;
      if ( !v60 )
        goto LABEL_129;
      if ( !v60->fields.createStandEnd )
      {
        v82 = 0;
        v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v2, v3, v4);
        v61 = &v5->fields.__2__current;
        sub_1B68678(v61);
        v62 = 2;
        goto LABEL_128;
      }
      if ( !_4__this )
        goto LABEL_129;
      MyRoomControl__voiceLoad(_4__this, v5->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_70:
      if ( _4__this->fields.isVoiceLoading )
      {
        v82 = 0;
        v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v2, v3, v4);
        v61 = &v5->fields.__2__current;
        sub_1B68678(v61);
        v62 = 3;
        goto LABEL_128;
      }
      method = (const MethodInfo *)v5->fields._svtVoiceDataList_5__4;
      if ( !method )
        goto LABEL_129;
      if ( SLODWORD(method->name) >= 2 )
      {
        v63 = 0;
        while ( 1 )
        {
          this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v63,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_129;
          v64 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_130;
          v65 = this->fields.__4__this;
          if ( !v65 )
            goto LABEL_129;
          this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_String__op_Equality(
                                                              *(System_String_o **)&v65->fields.m_CachedPtr,
                                                              v5->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          method = (const MethodInfo *)v5->fields._svtVoiceDataList_5__4;
          if ( !method )
            goto LABEL_129;
          if ( ++v63 >= SLODWORD(method->name) )
            goto LABEL_87;
        }
        this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_129;
        MyRoomSvtControl__setSvtVoice_31294788(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v64,
          v5->fields._voiceAssetName_5__2,
          0LL);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_129;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)method,
          v5->fields._voiceAssetName_5__2,
          0LL);
      }
LABEL_87:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_129;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_129;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v66 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v66 )
        goto LABEL_129;
      CommonUI__maskFadein(v66, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_93:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v82 = 0;
        v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v67, v68, v69);
        v61 = &v5->fields.__2__current;
        sub_1B68678(v61);
        v62 = 4;
        goto LABEL_128;
      }
LABEL_96:
      if ( !_4__this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_129;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v82 = 0;
        v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v70, v71, v72);
        v61 = &v5->fields.__2__current;
        sub_1B68678(v61);
        v62 = 5;
        goto LABEL_128;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v73 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v73 )
        goto LABEL_129;
      CommonUI__maskFadeout(v73, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_104:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v82 = 0;
        v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v74, v75, v76);
        v61 = &v5->fields.__2__current;
        sub_1B68678(v61);
        v62 = 6;
        goto LABEL_128;
      }
      if ( !_4__this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_129;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_129;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v5->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_129;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v77 = v5->fields.__8__1;
      if ( !v77 )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v77->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_129;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v78 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v78 )
        goto LABEL_129;
      CommonUI__maskFadein(v78, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_123:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_129:
        sub_1B68930(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v82 = 0;
      v5->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v79, v80, v81);
      v61 = &v5->fields.__2__current;
      sub_1B68678(v61);
      v62 = 7;
LABEL_128:
      *((_DWORD *)v61 - 2) = v62;
      return 1;
    case 1:
      v5->fields.__1__state = -1;
      goto LABEL_10;
    case 2:
      v5->fields.__1__state = -1;
      goto LABEL_66;
    case 3:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_129;
      goto LABEL_70;
    case 4:
      v5->fields.__1__state = -1;
      goto LABEL_93;
    case 5:
      v5->fields.__1__state = -1;
      goto LABEL_96;
    case 6:
      v5->fields.__1__state = -1;
      goto LABEL_104;
    case 7:
      v5->fields.__1__state = -1;
      goto LABEL_123;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__341__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__341_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__svtVoicePlayAct_d__341__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__341_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MyRoomControl__svtVoicePlayAct_d__341_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__341__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__341_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__341__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__341_o *this,
        const MethodInfo *method)
{
  ;
}