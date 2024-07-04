void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct MyRoomControl_StaticFields *static_fields; // x8

  if ( (byte_48DE48F & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_2995/*"BGM_MYROOM_1"*/, v4);
    byte_48DE48F = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_2995/*"BGM_MYROOM_1"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)MyRoomControl_TypeInfo->static_fields, StringLiteral_2995/*"BGM_MYROOM_1"*/, v2, v3);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_B70EB0;
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_int__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  int v21; // w8
  __int64 v22; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct System_Int64_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_48DE48E & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&long___TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B00CCC(&MyRoomStateMaterial_TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_Vector3___TypeInfo, v7);
    byte_48DE48E = 1;
  }
  v8 = (MyRoomStateMaterial_o *)sub_1B00F18(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v8, 0LL);
  this->fields.mStateMaterial = v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mStateMaterial, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.imageIdList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.materialImageIdList, (int32_t)v14, v15, v16);
  v17 = sub_1B00D74(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v17 )
    sub_1B00F28(0LL, v18);
  v21 = *(_DWORD *)(v17 + 24);
  if ( !v21 || (*(_DWORD *)(v17 + 40) = 0, *(_QWORD *)(v17 + 32) = 0x43900000C4000000LL, v21 == 1) )
    sub_1B00F30(v17, v17, v19, v20);
  *(_DWORD *)(v17 + 52) = 0;
  *(_QWORD *)(v17 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.defaultMultipleServantPoses, v17, v19, v20);
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v22);
    byte_48DD9F1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  v25 = (struct System_Int64_array *)sub_1B00D74(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v25;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.multipleServantUsrIds, (int32_t)v25, v26, v27);
  v28 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v28;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.multipleLimitCounts, (int32_t)v28, v29, v30);
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
    sub_1B00F28(0LL, method);
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

  if ( (byte_48DE43F & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_LinkageStatusCheckCallback__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_48DE43F = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B00F28(0LL, v8);
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

  if ( (byte_48DE442 & 1) == 0 )
  {
    sub_1B00CCC(&AccountLinkageComponent_TypeInfo, method);
    sub_1B00CCC(&System_Action_TypeInfo, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__317_0__, v5);
    sub_1B00CCC(&Method_System_Nullable_int___ctor__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_1995/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v8);
    sub_1B00CCC(&StringLiteral_3363/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_48DE442 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__317_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_34DEC04 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B00F28(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3363/*"CAN_CONTINUE_DEVICE"*/, 0LL);
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

  if ( (byte_48DE451 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v3);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_48DE451 = 1;
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
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v13, 0LL);
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
    sub_1B00F28(changeBGBtnImg, v7);
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

  if ( (byte_48DE47F & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    byte_48DE47F = 1;
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48DE47A & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__CaptureServant_d__409_TypeInfo, *(_QWORD *)&width);
    byte_48DE47A = 1;
  }
  v7 = sub_1B00F18(MyRoomControl__CaptureServant_d__409_TypeInfo);
  MyRoomControl__CaptureServant_d__409___ctor((MyRoomControl__CaptureServant_d__409_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B00F28(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
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

  if ( (byte_48DE44E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isSePlay);
    sub_1B00CCC(&Method_MyRoomControl_ChangeDisp__, v6);
    sub_1B00CCC(&Method_MyRoomControl__ChangeDisp_b__339_0__, v7);
    sub_1B00CCC(&Method_MyRoomControl__ChangeDisp_b__339_1__, v8);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_11079/*"ReleaseTouch"*/, v10);
    byte_48DE44E = 1;
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
      v34 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_ChangeDisp__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v12);
    if ( isSePlay )
    {
      v13 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_ChangeDisp__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v13, v13[4]);
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
          sub_1B00F28(soundPlayerComp, v17);
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
            MyRoomControl__moveControl(this, this->fields.svtObj, v62, (System_String_o *)StringLiteral_11079/*"ReleaseTouch"*/, v32);
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
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v67, (System_String_o *)StringLiteral_11079/*"ReleaseTouch"*/, v42);
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
            v45 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
            v49 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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

  if ( (byte_48DE487 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__int__TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__ChangeMasterSetting_b__424_0__, v3);
    byte_48DE487 = 1;
  }
  v4 = (System_Action_int__int__o *)sub_1B00F18(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__ChangeMasterSetting_b__424_0__, 0LL);
  MyRoomControl__OpenMasterEquipSettingDialog(this, v4, 0LL, v5);
}


void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x2
  __int64 v11; // x3
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  int32_t v13; // w9
  il2cpp_array_size_t max_length; // w10
  ServantPhotoEntity_FaceData_o *v15; // x1
  ServantPhotoEntity_FaceData_o *v16; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_48DE479 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass405_0__ChangePhotoCampaignServantFace_b__0__, v3);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass405_0_TypeInfo, v4);
    byte_48DE479 = 1;
  }
  v5 = sub_1B00F18(MyRoomControl___c__DisplayClass405_0_TypeInfo);
  MyRoomControl___c__DisplayClass405_0___ctor((MyRoomControl___c__DisplayClass405_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v13 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v13,
        !photoCampaignFaceList) )
  {
    sub_1B00F28(v6, v7);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v13 >= (int)max_length )
  {
    v13 = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  if ( v13 >= max_length )
    sub_1B00F30(v6, v7, v10, v11);
  v15 = photoCampaignFaceList->m_Items[v13];
  *(_QWORD *)(v5 + 24) = v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v15, v10, v11);
  v16 = *(ServantPhotoEntity_FaceData_o **)(v5 + 24);
  v17 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass405_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  MyRoomControl__SetFacePhotoServant(this, v16, v17, v18);
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

  if ( (byte_48DE455 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, isSet);
    byte_48DE455 = 1;
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
    sub_1B00F28(playBtnImg, isSet);
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

  if ( (byte_48DE454 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, isSet);
    byte_48DE454 = 1;
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
    sub_1B00F28(standFigureBack, isSet);
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v31; // 0:x3.8
  System_Nullable_int__o v32; // 0:x4.8

  if ( (byte_48DE443 & 1) == 0 )
  {
    sub_1B00CCC(&AccountLinkageComponent_TypeInfo, method);
    sub_1B00CCC(&System_Action_TypeInfo, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Nullable_int___ctor__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_MyRoomControl___c__CheckCsUnlink_b__318_0__, v7);
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_3362/*"CANNOT_CONTINUE_DEVICE"*/, v9);
    sub_1B00CCC(&StringLiteral_2004/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, v10);
    sub_1B00CCC(&StringLiteral_3363/*"CAN_CONTINUE_DEVICE"*/, v11);
    byte_48DE443 = 1;
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
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2004/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__318_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(_9__318_0, v24, Method_MyRoomControl___c__CheckCsUnlink_b__318_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__318_0 = _9__318_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__318_0, (int32_t)_9__318_0, v26, v27);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_34DEC04 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v32 = msgFontSize;
        v31 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v20, _9__318_0, v31, v32, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v18 = &StringLiteral_3362/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1B00F28(SelfUserAccountLinkage, v13);
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
  v18 = &StringLiteral_3363/*"CAN_CONTINUE_DEVICE"*/;
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
  if ( (byte_48DE45A & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomRootComponent_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_3513/*"CLICK_MATERIAL"*/, v3);
    this = (MyRoomControl_o *)sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, v4);
    byte_48DE45A = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = &StringLiteral_6864/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B00F28(this, method);
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
  v9 = &StringLiteral_6864/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = &StringLiteral_3513/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B00F28(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_48DE467 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__CloseMultipleView_b__384_0__, v3);
    byte_48DE467 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1B00F28(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__384_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v4; // x2
  __int64 v5; // x2
  __int64 v6; // x3
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v8; // x20
  __int64 v9; // x22
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
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DE465 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6639/*"FinishedCloseMultiServant"*/, method);
    byte_48DE465 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1B00F28(mBlocker, method);
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
LABEL_22:
      sub_1B00F30(mBlocker, method, v5, v6);
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
              v20 = v11 == v19->max_length - 1 ? (System_String_o *)StringLiteral_6639/*"FinishedCloseMultiServant"*/ : 0LL;
              v21.fields.y = v17;
              v21.fields.x = flt_B6FEF8[(_DWORD)v9 == 4] + y;
              v21.fields.z = x + 0.0;
              MyRoomControl__moveControl(this, mBlocker, v21, v20, v18);
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
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_48DE483 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_0__, v4);
    byte_48DE483 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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

  if ( (byte_48DE481 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6640/*"FinishedClosePhotoCampaignServant"*/, method);
    byte_48DE481 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v6 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  v7 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v8 = this->fields.currentPhotoServantPos.fields.x + flt_B6F9A8[!this->fields._IsMasterRight_k__BackingField];
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v20.fields.x = v8;
  v20.fields.y = v7;
  v20.fields.z = v6;
  MyRoomControl__moveControl(this, gameObject, v20, (System_String_o *)StringLiteral_6640/*"FinishedClosePhotoCampaignServant"*/, v10);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(v11, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_1B00F28(photoCampaignStandFigureBack, v4);
  }
  v15 = v14 + 0.0;
  v16 = v13 + 0.0;
  v17 = v12 + flt_B6F8C8[!this->fields._IsMasterRight_k__BackingField];
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48DE43E & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_TypeInfo, setEndAction);
    byte_48DE43E = 1;
  }
  v5 = sub_1B00F18(MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__290___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B00F28(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = setEndAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)setEndAction, v10, v11);
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

  if ( (byte_48DE457 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1B00CCC(&StringLiteral_3890/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v5);
    byte_48DE457 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_3890/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_2DE4C60 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1B00F28(0LL, v8);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v7,
                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v18; // x23
  System_Action_o *v19; // x24
  struct UIMasterFigureTextureOld_o *Prefab_36715464; // x1
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_48DE475 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, func);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass401_0__CreatePhotoMasterFigure_b__0__, v5);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass401_0_TypeInfo, v6);
    byte_48DE475 = 1;
  }
  v7 = sub_1B00F18(MyRoomControl___c__DisplayClass401_0_TypeInfo);
  MyRoomControl___c__DisplayClass401_0___ctor((MyRoomControl___c__DisplayClass401_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = func;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)func, v12, v13);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
    return;
  }
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B00F28(photoCampaignStandFigureBack, v9);
  }
  v15 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v18 = v15;
  v19 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass401_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  Prefab_36715464 = MasterFigureManagerOld__CreatePrefab_36715464(
                      v18,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v19,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0LL);
  this->fields.photoMasterTexture = Prefab_36715464;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoMasterTexture, (int32_t)Prefab_36715464, v21, v22);
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
  _BOOL8 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v22; // x23
  StandFigureBack_o *v23; // x21
  System_Action_o *v24; // x23
  _BOOL4 v25; // w8
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x4
  UnityEngine_Vector3_o *p_moveShowPos; // x10
  float *p_z; // x8
  float x; // s0
  float *p_y; // x10
  int v34; // s1
  int v35; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_48DE466 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDispDefault);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__0__, v9);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__1__, v10);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass382_0_TypeInfo, v11);
    byte_48DE466 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = sub_1B00F18(MyRoomControl___c__DisplayClass382_0_TypeInfo);
  MyRoomControl___c__DisplayClass382_0___ctor((MyRoomControl___c__DisplayClass382_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_39;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v17, v18);
  MyRoomControl__stopSvtVoice(this, v19);
  MyRoomControl__BlockTouch(this, v20);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__0__,
        0LL);
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, v22, 0LL);
    }
    frontObjectManager = this->fields.frontObjectManager;
    if ( frontObjectManager )
    {
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
      goto LABEL_13;
    }
LABEL_39:
    sub_1B00F28(frontObjectManager, v14);
  }
  v23 = this->fields.standFigureBack;
  v24 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__1__,
    0LL);
  if ( !v23 )
    goto LABEL_39;
  StandFigureBack__Fadeout(v23, v24, 0LL);
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
  v25 = isDispDefault && this->fields.isEnableMultipleView;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v25, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v29);
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
      v34 = *(_DWORD *)p_y;
      v35 = *(_DWORD *)p_z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v28);
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

  if ( (byte_48DE473 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIPanel___, usrSvtId);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    byte_48DE473 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( Instance )
      {
        UIPanel__set_depth((UIPanel_o *)Instance, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_1B00F28(Instance, v13);
  }
LABEL_8:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_48DE422 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_MyRoomControl___c__EndLoad_b__238_0__, v5);
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_8175/*"LOAD_END"*/, v7);
    byte_48DE422 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v14 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v14, v15, Method_MyRoomControl___c__EndLoad_b__238_0__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__238_0 = v14;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__238_0, (int32_t)v14, v17, v18);
    }
    if ( Instance )
    {
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v14, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_1B00F28(svtCtr, method);
  }
LABEL_18:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_20;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8175/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  System_Action_T__o *v6; // x21

  if ( (byte_48DE471 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__EndLoadPhotoAsset_b__397_0__, v3);
    byte_48DE471 = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v6 = (System_Action_T__o *)sub_1B00F18(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo),
        System_Action_Int32Enum____ctor(
          v6,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__397_0__,
          0LL),
        !photoTargetSelectDialog) )
  {
    sub_1B00F28(photoCampaignStandFigureBack, method);
  }
  PhotoTargetSelectDialog__Open(photoTargetSelectDialog, (System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *)v6, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x19

  if ( (byte_48DE45B & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48DE45B = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sceneJumpInfo, 0, v2, v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v8 )
      sub_1B00F28(Instance, v7);
    CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_1B00F28(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x2
  __int64 v13; // x3
  const MethodInfo *v14; // x5
  _BOOL4 IsMasterRight_k__BackingField; // w9
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  bool v17; // zf
  bool v18; // w9
  int32_t v19; // w10
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *v21; // x8
  struct System_Int32_array *multiForm; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v24; // x8
  CommonUI_o *v25; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_48DE488 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass425_0__ExchangePosition_b__0__, v5);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass425_0_TypeInfo, v6);
    byte_48DE488 = 1;
  }
  v7 = sub_1B00F18(MyRoomControl___c__DisplayClass425_0_TypeInfo);
  MyRoomControl___c__DisplayClass425_0___ctor((MyRoomControl___c__DisplayClass425_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  IsMasterRight_k__BackingField = this->fields._IsMasterRight_k__BackingField;
  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v17 = !IsMasterRight_k__BackingField;
  v18 = !IsMasterRight_k__BackingField;
  v19 = v17 ? 2 : 1;
  this->fields.photoMasterPosition = v19;
  this->fields._IsMasterRight_k__BackingField = v18;
  if ( !photoCampaignFaceList )
    goto LABEL_16;
  photoCampaignFaceListIndex = this->fields.photoCampaignFaceListIndex;
  if ( (unsigned int)photoCampaignFaceListIndex >= photoCampaignFaceList->max_length )
    goto LABEL_17;
  v21 = photoCampaignFaceList->m_Items[photoCampaignFaceListIndex];
  if ( !v21 )
    goto LABEL_16;
  multiForm = v21->fields.multiForm;
  if ( !multiForm )
    goto LABEL_16;
  if ( !multiForm->max_length )
LABEL_17:
    sub_1B00F30(v8, v9, v12, v13);
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    (UnityEngine_Vector3_o *)(v7 + 24),
    (float *)(v7 + 36),
    v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  v25 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass425_0__ExchangePosition_b__0__,
    0LL);
  if ( !v25 )
LABEL_16:
    sub_1B00F28(v8, v9);
  CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
  if ( (byte_48DE459 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_1B00CCC(&SwipeGesture_TypeInfo, v5);
    byte_48DE459 = 1;
  }
  if ( !gesture )
    sub_1B00F28(this, gesture);
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

  if ( (byte_48DE480 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DE480 = 1;
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
  UnityEngine_Object__Destroy_68077656(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_11:
    sub_1B00F28(photoCampaignProduction, method);
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
  __int64 v5; // x3
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v7; // x20
  int max_length; // w9
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B00F30(multipleViewCloseButton, method, v4, v5);
    multipleViewCloseButton = (UnityEngine_GameObject_o *)multipleStandFigureBacks->m_Items[v7];
    if ( multipleViewCloseButton )
    {
      StandFigureBack__Init((StandFigureBack_o *)multipleViewCloseButton, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v7;
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
    || (MultipleViewComponent__Open((MultipleViewComponent_o *)multipleViewCloseButton, 0, v9),
        MyRoomControl__SetBackButtonIgnore(this, 0, v10),
        (multipleViewCloseButton = this->fields.mBlocker) == 0LL) )
  {
LABEL_8:
    sub_1B00F28(multipleViewCloseButton, method);
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2

  if ( (byte_48DE482 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_48DE482 = 1;
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
  GameObjectExtensions__SetLocalScale_32537472(v8, 1.0, 0LL);
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
    UnityEngine_Object__Destroy_68077656(v11, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoMasterTexture, 0, v12, v13);
  }
  if ( (photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL
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
    sub_1B00F28(photoCampaignStandFigureBack, method);
  }
  PhotoCampaignComponent__Open(
    (PhotoCampaignComponent_o *)photoCampaignStandFigureBack,
    (int32_t)method,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v14);
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
    sub_1B00F28(0LL, v4);
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
    sub_1B00F28(photoCampaignStandFigureBack, method);
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

  if ( (byte_48DE42E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9163/*"NORMAL_FORM"*/, method);
    sub_1B00CCC(&StringLiteral_3393/*"CHANGE_FORM"*/, v3);
    byte_48DE42E = 1;
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
      v7 = (System_String_o **)&StringLiteral_9163/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1B00F28(svtCtr, method);
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
    v7 = (System_String_o **)&StringLiteral_9163/*"NORMAL_FORM"*/;
  else
    v7 = (System_String_o **)&StringLiteral_3393/*"CHANGE_FORM"*/;
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
  if ( (byte_48DE47E & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B00CCC(&ManagerConfig_TypeInfo, localScale);
    byte_48DE47E = 1;
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
    sub_1B00F28(v7, v8);
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
    sub_1B00F28(v4, method);
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

  if ( (byte_48DE458 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_48DE458 = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1B00F28(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_48DE477 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_MasterPhotoMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    byte_48DE477 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_MasterPhotoMaster___);
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
    sub_1B00F28(Master_object, v5);
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
  __int64 v19; // x2
  __int64 v20; // x3
  int v21; // w9
  System_Int32_array *v22; // x22
  int v23; // w10
  int v24; // w8
  int32_t photoCampaignType; // w8
  float PhotoSvtScale; // s0
  System_Int32_array *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  float LocalPositionZ; // s0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48DE476 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantScriptMaster___, *(_QWORD *)&imageId);
    sub_1B00CCC(&DataManager_TypeInfo, v11);
    sub_1B00CCC(&int___TypeInfo, v12);
    byte_48DE476 = 1;
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
  photoCampaignStandFigureBack = sub_1B00D74(int___TypeInfo, 2LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v21 = *(_DWORD *)(photoCampaignStandFigureBack + 24);
  v22 = (System_Int32_array *)photoCampaignStandFigureBack;
  if ( !v21 )
    goto LABEL_42;
  v23 = (int)v16;
  if ( v16 == INFINITY )
    v23 = 0x80000000;
  *(_DWORD *)(photoCampaignStandFigureBack + 32) = v23;
  if ( v21 == 1 )
LABEL_42:
    sub_1B00F30(photoCampaignStandFigureBack, *(_QWORD *)&imageId, v19, v20);
  if ( y == INFINITY )
    v24 = 0x80000000;
  else
    v24 = (int)y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = v24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantScriptMaster___);
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
      photoCampaignStandFigureBack = (__int64)ServantScriptEntity__GetPhotoSvtPosition(entity, v22, 0LL);
      if ( entity )
      {
        v22 = (System_Int32_array *)photoCampaignStandFigureBack;
        PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0LL);
        goto LABEL_36;
      }
    }
LABEL_41:
    sub_1B00F28(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  }
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  v27 = this->fields._IsMasterRight_k__BackingField
      ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, v22, 0LL)
      : ServantScriptEntity__GetPhotoSvtPositionRight(entity, v22, 0LL);
  v22 = v27;
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  if ( this->fields._IsMasterRight_k__BackingField )
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0LL);
  else
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0LL);
LABEL_36:
  *scale = PhotoSvtScale;
  if ( !v22 )
    goto LABEL_41;
LABEL_37:
  if ( v22->max_length < 2 )
    goto LABEL_42;
  v16 = (float)v22->m_Items[1];
  y = (float)v22->m_Items[2];
LABEL_39:
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v28, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x3
  int max_length; // w8
  ServantCostumeEntity_array *v15; // x20
  unsigned int v16; // w21
  ServantCostumeEntity_o *v17; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_48DE45C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48DE45C = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v15 = Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1B00F30(Instance, id, v12, v13);
      v17 = v15->m_Items[v16];
      if ( !v17 )
        break;
      if ( !v9 )
        break;
      id = (unsigned int)v17->fields.id;
      items = v9->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          id,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B00F28(Instance, id);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_48DE41B & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B00CCC(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_48DE41B = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B00F28(this, method);
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

  if ( (byte_48DE448 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_MyRoomControl_GoToTitle__, v5);
    sub_1B00CCC(&Method_MyRoomControl__GoToTitle_b__329_0__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_8714/*"MYROOM_TITLE_CONFIRM"*/, v8);
    sub_1B00CCC(&StringLiteral_1/*""*/, v9);
    byte_48DE448 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v10 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_GoToTitle__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__329_0__, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1B00F28(v17, v16);
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
    sub_1B00F28(continueDeviceComp, method);
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

  if ( (byte_48DE489 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DE489 = 1;
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
    sub_1B00F28(gameObject, v4);
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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE43B & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__InitMaterialOnBackground_d__284_TypeInfo, method);
    byte_48DE43B = 1;
  }
  v3 = sub_1B00F18(MyRoomControl__InitMaterialOnBackground_d__284_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__284___ctor((MyRoomControl__InitMaterialOnBackground_d__284_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE43D & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__InitServantMenu_d__287_TypeInfo, method);
    byte_48DE43D = 1;
  }
  v3 = sub_1B00F18(MyRoomControl__InitServantMenu_d__287_TypeInfo);
  MyRoomControl__InitServantMenu_d__287___ctor((MyRoomControl__InitServantMenu_d__287_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_48DE469 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, method);
    byte_48DE469 = 1;
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

  if ( (byte_48DE484 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, method);
    byte_48DE484 = 1;
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
  __int64 v3; // x3
  MyRoomControl_o *v5; // x20
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  v5 = this;
  if ( (byte_48DE462 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_48DE462 = 1;
  }
  multipleStandFigureBacks = v5->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1B00F30(this, *(_QWORD *)&index, method, v3);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1B00F28(this, *(_QWORD *)&index);
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

  if ( (byte_48DE42A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_15336/*"Wait_Action"*/, method);
    sub_1B00CCC(&StringLiteral_7134/*"Help"*/, v3);
    byte_48DE42A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7134/*"Help"*/, 0LL) )
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
    sub_1B00F28(myRoomFsm, method);
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

  if ( (byte_48DE440 & 1) == 0 )
  {
    sub_1B00CCC(&AccountLinkageParams_TypeInfo, result);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    byte_48DE440 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
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
  int64_t UserId; // x0
  __int64 v17; // x1
  UserEquipEntity_array *List; // x20
  __int64 v19; // x8
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v24; // x29
  __int64 *v25; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x19
  unsigned int v27; // w27
  UserEquipEntity_o *v28; // x28
  __int64 v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x24
  __int64 v33; // x25
  __int64 v34; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v35; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v36; // x0
  UserEquipEntity_array *v37; // x29
  const MethodInfo_303652C **v38; // x20
  __int64 v39; // x25
  __int64 v40; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v46; // x0
  Il2CppObject *v47; // x0
  System_String_o *v48; // x24
  AssetLoader_LoadEndDataHandler_o *v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v53; // x0
  Il2CppObject *v54; // x0
  System_String_o *v55; // x23
  AssetLoader_LoadEndDataHandler_o *v56; // x24
  __int128 v58; // [xsp+10h] [xbp-80h] BYREF
  __int128 v59; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_48DE46F & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EquipMaster___, v2);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserEquipMaster___, v3);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v6);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__0__, v11);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__1__, v12);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass394_0_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_8798/*"MasterFace/equip{0:D5}"*/, v14);
    byte_48DE46F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1B52BA8(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1B52BA8(v20);
  UserId = **(_QWORD **)(v20 + 184);
  if ( !UserId )
    goto LABEL_33;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_33;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v24 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v25 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserId;
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1B00F30(UserId, v17, v21, v22);
      v28 = List->m_Items[v27];
      v29 = sub_1B00F18(MyRoomControl___c__DisplayClass394_0_TypeInfo);
      MyRoomControl___c__DisplayClass394_0___ctor((MyRoomControl___c__DisplayClass394_0_o *)v29, 0LL);
      if ( !v29 )
        break;
      *(_QWORD *)(v29 + 24) = this;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)this, v30, v31);
      if ( !v28 )
        break;
      v33 = *(_QWORD *)&v28->fields.equipId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&v28->fields.equipId.fields.fakeValue;
      if ( !(*v24)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v24);
      *(_QWORD *)&v60.fields.currentCryptoKey = v33;
      *(_QWORD *)&v60.fields.fakeValue = v32;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v60, 0LL);
      if ( !v26 )
        break;
      v34 = v29 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v26,
              (Il2CppObject **)(v29 + 16),
              UserId,
              (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v35 = v24;
      v36 = *v24;
      v37 = List;
      v38 = (const MethodInfo_303652C **)v25;
      v40 = *(_QWORD *)&v28->fields.equipId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&v28->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v36->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v36);
      *(_QWORD *)&v61.fields.currentCryptoKey = v40;
      *(_QWORD *)&v61.fields.fakeValue = v39;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v61, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v25 = (__int64 *)v38;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        UserId,
        0LL,
        *v38);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v28->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        UserId,
        0LL,
        *v38);
      if ( !*(_QWORD *)v34 )
        break;
      v46 = *v35;
      List = v37;
      v24 = v35;
      v59 = *(_OWORD *)(*(_QWORD *)v34 + 64LL);
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(v46, &v59, v43, v44, v45);
      v48 = System_String__Format((System_String_o *)StringLiteral_8798/*"MasterFace/equip{0:D5}"*/, v47, 0LL);
      v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v49,
        (Il2CppObject *)v29,
        Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UserId = AssetManager__loadAssetStorage(v48, v49, 10, 0LL);
      if ( !*(_QWORD *)v34 )
        break;
      v53 = *v35;
      v58 = *(_OWORD *)(*(_QWORD *)v34 + 80LL);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(v53, &v58, v50, v51, v52);
      v55 = System_String__Format((System_String_o *)StringLiteral_8798/*"MasterFace/equip{0:D5}"*/, v54, 0LL);
      v56 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v56,
        (Il2CppObject *)v29,
        Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__1__,
        0LL);
      UserId = AssetManager__loadAssetStorage(v55, v56, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v27 >= max_length )
        return;
    }
LABEL_33:
    sub_1B00F28(UserId, v17);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE464 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__LoadMultipleServant_d__378_TypeInfo, method);
    byte_48DE464 = 1;
  }
  v3 = sub_1B00F18(MyRoomControl__LoadMultipleServant_d__378_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__378___ctor((MyRoomControl__LoadMultipleServant_d__378_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  __int64 v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  AssetLoader_LoadEndDataHandler_o *v17; // x19

  if ( (byte_48DE46E & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, callBack);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass393_0__LoadPhotoCampaignAssets_b__0__, v7);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass393_0_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_9095/*"MyRoom/PhotoCampaign"*/, v9);
    byte_48DE46E = 1;
  }
  v10 = sub_1B00F18(MyRoomControl___c__DisplayClass393_0_TypeInfo);
  MyRoomControl___c__DisplayClass393_0___ctor((MyRoomControl___c__DisplayClass393_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = callBack;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)callBack, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass393_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9095/*"MyRoom/PhotoCampaign"*/, v17, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1B00F28(Instance, v12);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE474 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__LoadPhotoCampaignServant_d__400_TypeInfo, method);
    byte_48DE474 = 1;
  }
  v3 = sub_1B00F18(MyRoomControl__LoadPhotoCampaignServant_d__400_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__400___ctor((MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE416 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, method);
    byte_48DE416 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_48DE432 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__LoadServantForm_b__265_0__, v3);
    byte_48DE432 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__265_0__, 0LL);
  if ( !svtCtr )
    sub_1B00F28(v6, v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v5, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v5; // x1
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48DE433 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_8175/*"LOAD_END"*/, v3);
    byte_48DE433 = 1;
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
    sub_1B00F28(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8175/*"LOAD_END"*/, 0LL);
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
  if ( (byte_48DE450 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9101/*"MyRoomUIAnimationEnd"*/, target);
    byte_48DE450 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9101/*"MyRoomUIAnimationEnd"*/, v4);
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
  if ( (byte_48DE44D & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickBack__, method);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_3541/*"CLOSE_ACCOUNT_LINKAGE"*/, v6);
    sub_1B00CCC(&StringLiteral_3553/*"CLOSE_MATERIAL_COLLECTION"*/, v7);
    sub_1B00CCC(&StringLiteral_3552/*"CLOSE_MATERIAL"*/, v8);
    sub_1B00CCC(&StringLiteral_3564/*"CLOSE_USER_SERVANT_COIN"*/, v9);
    sub_1B00CCC(&StringLiteral_3488/*"CLICK_BACK"*/, v10);
    sub_1B00CCC(&StringLiteral_3556/*"CLOSE_NOTICE"*/, v11);
    sub_1B00CCC(&StringLiteral_3550/*"CLOSE_GAMEOPTION"*/, v12);
    sub_1B00CCC(&StringLiteral_3551/*"CLOSE_ITEMLIST"*/, v13);
    sub_1B00CCC(&StringLiteral_3554/*"CLOSE_MATERIAL_COSTUME"*/, v14);
    sub_1B00CCC(&StringLiteral_3547/*"CLOSE_CONTINUE_DEVICE"*/, v15);
    sub_1B00CCC(&StringLiteral_3542/*"CLOSE_BLACKLIST"*/, v16);
    sub_1B00CCC(&StringLiteral_12759/*"State 5"*/, v17);
    sub_1B00CCC(&StringLiteral_3559/*"CLOSE_SERIAL_CODE"*/, v18);
    sub_1B00CCC(&StringLiteral_3544/*"CLOSE_CHANGE_PROFILE"*/, v19);
    sub_1B00CCC(&StringLiteral_3560/*"CLOSE_SOUND_PLAYER"*/, v20);
    this = (MyRoomControl_o *)sub_1B00CCC(&StringLiteral_3549/*"CLOSE_FAVORITE_CHANGE"*/, v21);
    byte_48DE44D = 1;
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
            v33 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickBack__);
          v34 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v33, v33[4]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v35);
        }
        else if ( multipleViewState == 1 )
        {
          v25 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v25 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickBack__);
          v26 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v25, v25[4]);
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
          v28 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickBack__);
        v29 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v28, v28[4]);
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
      method = (const MethodInfo *)StringLiteral_3488/*"CLICK_BACK"*/;
      v38 = type - 1;
      v39 = 0;
      switch ( v38 )
      {
        case 0:
          v40 = &StringLiteral_3552/*"CLOSE_MATERIAL"*/;
          goto LABEL_48;
        case 1:
          v41 = &StringLiteral_3553/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_57;
        case 2:
          v41 = &StringLiteral_3551/*"CLOSE_ITEMLIST"*/;
          goto LABEL_57;
        case 3:
          v41 = &StringLiteral_3544/*"CLOSE_CHANGE_PROFILE"*/;
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
              method = (const MethodInfo *)StringLiteral_3542/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v41 = &StringLiteral_3550/*"CLOSE_GAMEOPTION"*/;
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
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_12759/*"State 5"*/, 0LL) )
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
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v49, 0LL) < 1
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
          v40 = &StringLiteral_3556/*"CLOSE_NOTICE"*/;
LABEL_48:
          method = (const MethodInfo *)*v40;
          v39 = 1;
          goto LABEL_58;
        case 6:
          v41 = &StringLiteral_3559/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_57;
        case 7:
          v41 = &StringLiteral_3547/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_57;
        case 8:
          v41 = &StringLiteral_3549/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_57;
        case 9:
          v41 = &StringLiteral_3560/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_57;
        case 10:
          v41 = &StringLiteral_3554/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_57;
        case 16:
          v41 = &StringLiteral_3564/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_57;
        case 17:
          v41 = &StringLiteral_3541/*"CLOSE_ACCOUNT_LINKAGE"*/;
          goto LABEL_57;
        default:
          goto LABEL_58;
      }
LABEL_75:
      sub_1B00F28(this, method);
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

  if ( (byte_48DE429 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B00CCC(&Method_MyRoomControl_OnClickChangeLimit__, v7);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v8);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&StringLiteral_15336/*"Wait_Action"*/, v11);
    sub_1B00CCC(&StringLiteral_3397/*"CHANGE_LIMIT"*/, v12);
    sub_1B00CCC(&StringLiteral_7134/*"Help"*/, v13);
    byte_48DE429 = 1;
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
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v17 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_7134/*"Help"*/, 0LL) )
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v35, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v28 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickChangeLimit__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v34, 0LL);
  if ( !v20 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)myRoomFsm,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v32 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickChangeLimit__);
      v33 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3397/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1B00F28(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_48DE45F & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickCloseMultipleView__, method);
    byte_48DE45F = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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

  if ( (byte_48DE48A & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickDispPhotoUi__, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48DE48A = 1;
  }
  v4 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickDispPhotoUi__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
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
    sub_1B00F28(gameObject, v7);
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
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_48DE46D & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_48DE46D = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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
    sub_1B00F28(materialCollectionServantListViewManager, v5);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_48DE460 & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickLeftServant__, method);
    byte_48DE460 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
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
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_Vector3_o v56; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v63; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v64; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v65; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v66; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_48DE47D & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_1B00CCC(&StringLiteral_6638/*"FinishedCloseFullScreenPhotoCampaign"*/, v3);
    byte_48DE47D = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v56.fields.z = 0.0;
  *(_QWORD *)&v56.fields.x = 0LL;
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
        v31 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v32 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v33 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v34 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v60.fields.x = 0.0;
      v60.fields.y = 0.0;
      v60.fields.z = 0.0;
      v69 = UnityEngine_Quaternion__Internal_FromEulerRad(v60, 0LL);
      y = v69.fields.y;
      z = v69.fields.z;
      w = v69.fields.w;
      v69.fields.y = v69.fields.x;
      v69.fields.z = y;
      v69.fields.w = z;
      v39 = w;
      TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v69.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v63.fields.x = 1.0;
      v63.fields.y = 1.0;
      v63.fields.z = 1.0;
      TweenScale__Begin(v40, 0.2, v63, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v64.fields.x = 0.0;
      v64.fields.y = 11.0;
      v64.fields.z = 0.0;
      TweenPosition__Begin(v41, 0.2, v64, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v61.fields.x = 0.0;
      v61.fields.y = 0.0;
      v61.fields.z = 0.0;
      v70 = UnityEngine_Quaternion__Internal_FromEulerRad(v61, 0LL);
      v43 = v70.fields.y;
      v44 = v70.fields.z;
      v45 = v70.fields.w;
      v70.fields.y = v70.fields.x;
      v70.fields.z = v43;
      v70.fields.w = v44;
      v46 = v45;
      TweenRotation__Begin(v42, 0.2, *(UnityEngine_Quaternion_o *)&v70.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v65.fields.x = 1.0;
      v65.fields.y = 1.0;
      v65.fields.z = 1.0;
      TweenScale__Begin(v47, 0.2, v65, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v66.fields.x = 0.0;
      v66.fields.y = 11.0;
      v66.fields.z = 0.0;
      TweenPosition__Begin(v48, 0.2, v66, 0LL);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v50->fields.eventReceiver, (int32_t)maskBoxCollider, v51, v52);
      v53 = StringLiteral_6638/*"FinishedCloseFullScreenPhotoCampaign"*/;
      v50->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6638/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v50->fields.callWhenFinished, v53, v54, v55);
      return;
    case 4:
      v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      this->fields.photoCampaignState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v56, v8);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        v10 = v56.fields.x * 0.017453;
        v11 = v56.fields.y * 0.017453;
        v12 = v56.fields.z * 0.017453;
        v58.fields.x = v56.fields.x * 0.017453;
        v58.fields.y = v56.fields.y * 0.017453;
        v58.fields.z = v56.fields.z * 0.017453;
        v67 = UnityEngine_Quaternion__Internal_FromEulerRad(v58, 0LL);
        v13 = v67.fields.y;
        v14 = v67.fields.z;
        v15 = v67.fields.w;
        v67.fields.y = v67.fields.x;
        v67.fields.z = v13;
        v67.fields.w = v14;
        v16 = v15;
        TweenRotation__Begin(v9, 0.2, *(UnityEngine_Quaternion_o *)&v67.fields.y, 0LL);
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
            if ( !byte_48DD9F1 )
            {
              sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v21);
              byte_48DD9F1 = 1;
            }
            TweenPosition__Begin(v22, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              v59.fields.x = v10;
              v59.fields.y = v11;
              v59.fields.z = v12;
              v68 = UnityEngine_Quaternion__Internal_FromEulerRad(v59, 0LL);
              v24 = v68.fields.y;
              v25 = v68.fields.z;
              v26 = v68.fields.w;
              v68.fields.y = v68.fields.x;
              v68.fields.z = v24;
              v68.fields.w = v25;
              v27 = v26;
              TweenRotation__Begin(v23, 0.2, *(UnityEngine_Quaternion_o *)&v68.fields.y, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v62.fields.x = x;
                v62.fields.y = v19;
                v62.fields.z = v20;
                TweenScale__Begin(v28, 0.2, v62, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                  if ( !byte_48DD9F1 )
                  {
                    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v29);
                    byte_48DD9F1 = 1;
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
      sub_1B00F28(maskBoxCollider, method);
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

  if ( (byte_48DE47B & 1) == 0 )
  {
    sub_1B00CCC(&TouchEffectManager_TypeInfo, method);
    byte_48DE47B = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1B00F28(backBtn, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
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

  if ( (byte_48DE48B & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B00CCC(&Method_MyRoomControl_OnClickPhotoServant__, v3);
    byte_48DE48B = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
            v7 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickPhotoServant__);
          v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
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
    sub_1B00F28(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_48DE461 & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickRightServant__, method);
    byte_48DE461 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
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
  __int64 v16; // x2
  __int64 v17; // x3
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v19; // x20
  int max_length; // w9
  struct System_Int64_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x4

  if ( (byte_48DE45D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&int___TypeInfo, v3);
    sub_1B00CCC(&long___TypeInfo, v4);
    sub_1B00CCC(&Method_MyRoomControl_OnClickSelectMultipleServant__, v5);
    sub_1B00CCC(&Method_MyRoomControl__OnClickSelectMultipleServant_b__370_0__, v6);
    sub_1B00CCC(&StringLiteral_15336/*"Wait_Action"*/, v7);
    sub_1B00CCC(&StringLiteral_7134/*"Help"*/, v8);
    byte_48DE45D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v11 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7134/*"Help"*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v13 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v14 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v13, v13[4]);
  if ( !v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1B00F28(myRoomFsm, method);
  v19 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v19 >= max_length )
      break;
    if ( (unsigned int)v19 >= max_length )
      sub_1B00F30(myRoomFsm, method, v16, v17);
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v19];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v19;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_16;
  }
  v21 = (struct System_Int64_array *)sub_1B00D74(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v21;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.multipleServantUsrIds, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.multipleLimitCounts, (int32_t)v24, v25, v26);
  v27 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__370_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v27, 1, v28);
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

  if ( (byte_48DE470 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl_EndLoadPhotoAsset__, v3);
    sub_1B00CCC(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v4);
    sub_1B00CCC(&StringLiteral_15336/*"Wait_Action"*/, v5);
    sub_1B00CCC(&StringLiteral_7134/*"Help"*/, v6);
    byte_48DE470 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_7134/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1B00F28(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v11 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v12 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v11, v11[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    v14 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_48DE46C & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomRootComponent_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_48DE46C = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B00F28(Instance, v5);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v11; // x2

  if ( (byte_48DE42D & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickSvt__, method);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_10271/*"PLAY_VOICE"*/, v5);
    byte_48DE42D = 1;
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
      v8 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickSvt__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v8, v8[4]);
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
        MyRoomControl__setNormalFace_30451116(this, 1, v11);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10271/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_1B00F28(svtCtr, v7);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_48DE45E & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickUiDisableMultipleView__, method);
    byte_48DE45E = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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

  if ( (byte_48DE46B & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_1B00CCC(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B00CCC(&MyRoomRootComponent_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_48DE46B = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    v12 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnClickValentineListChange__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v12, v12[4]);
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
    sub_1B00F28(Instance, v7);
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

  if ( (byte_48DE419 & 1) == 0 )
  {
    sub_1B00CCC(&Gesture_EventHandler_TypeInfo, method);
    sub_1B00CCC(&FingerGestures_TypeInfo, v3);
    sub_1B00CCC(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_48DE419 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B00F18(Gesture_EventHandler_TypeInfo);
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

  if ( (byte_48DE48C & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B00CCC(&Method_MyRoomControl_OnclickPhotoMaster__, v3);
    byte_48DE48C = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
            v7 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_OnclickPhotoMaster__);
          v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
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
    sub_1B00F28(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B00F28(0LL, method);
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

  if ( (byte_48DE472 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_bool__TypeInfo, callBack);
    sub_1B00CCC(&Method_MyRoomControl_SetMaskCollider__, v7);
    byte_48DE472 = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v11 = (System_Action_bool__o *)sub_1B00F18(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1B00F28(v12, v13);
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
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *MultipleServant; // x1

  this->fields.multipleServantUsrIds = usrSvtIds;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.multipleServantUsrIds,
    (int32_t)usrSvtIds,
    (int32_t)imageLimitCounts,
    (int32_t)method);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.multipleLimitCounts, (int32_t)imageLimitCounts, v6, v7);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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

  if ( (byte_48DE468 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_bool__TypeInfo, *(_QWORD *)&type);
    sub_1B00CCC(&Method_MyRoomControl_SetMaskCollider__, v11);
    byte_48DE468 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v13 = (System_Action_bool__o *)sub_1B00F18(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1B00F28(v14, v15);
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

  if ( (byte_48DE441 & 1) == 0 )
  {
    sub_1B00CCC(&AccountLinkageComponent_TypeInfo, method);
    sub_1B00CCC(&System_Action_TypeInfo, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_MyRoomControl__OverrideAccountLinkage_b__316_0__, v5);
    sub_1B00CCC(&Method_System_Nullable_int___ctor__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_2006/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v8);
    sub_1B00CCC(&StringLiteral_3363/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_48DE441 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2006/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__316_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_34DEC04 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B00F28(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3363/*"CAN_CONTINUE_DEVICE"*/, 0LL);
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
  __int64 v11; // x24
  MyRoomControl_o *v12; // x0
  const MethodInfo *v13; // x1
  CRIMoviePlayer_o *CriMoviePlayerObject; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  CRIMoviePlayer_o **v18; // x22
  __int64 v19; // x1
  CRIMoviePlayer_o *v20; // x23
  BgmManager_c *v21; // x0
  float masterVolume; // s8
  System_Action_o *v23; // x25

  if ( (byte_48DE456 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, fileName);
    sub_1B00CCC(&BgmManager_TypeInfo, v8);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass357_0__PlayOpening_b__0__, v9);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass357_0_TypeInfo, v10);
    byte_48DE456 = 1;
  }
  v11 = sub_1B00F18(MyRoomControl___c__DisplayClass357_0_TypeInfo);
  MyRoomControl___c__DisplayClass357_0___ctor((MyRoomControl___c__DisplayClass357_0_o *)v11, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = CriMoviePlayerObject;
  v18 = (CRIMoviePlayer_o **)(v11 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)CriMoviePlayerObject, v16, v17);
  v20 = *(CRIMoviePlayer_o **)(v11 + 16);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_48DE49F )
  {
    sub_1B00CCC(&BgmManager_TypeInfo, v19);
    byte_48DE49F = 1;
  }
  v21 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v21 = BgmManager_TypeInfo;
  }
  masterVolume = v21->static_fields->masterVolume;
  v23 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass357_0__PlayOpening_b__0__, 0LL);
  if ( !v20
    || (CRIMoviePlayer__Initialize(v20, fileName, assetPath, masterVolume, isCanSkip, 0LL, v23, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *v18) == 0LL) )
  {
LABEL_13:
    sub_1B00F28(CriMoviePlayerObject, v15);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  AssetData_o *photoCampaignAssetData; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v15; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  System_Object_array *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_Object_o *photoMasterTexture; // x20
  ServantStatusBattleListViewItem_o *p_photoMasterTexture; // x19
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_48DE48D & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AssetData__ToArray__, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    byte_48DE48D = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoCampaignShutterEffect, 0, v2, v3);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoCampaignCameraEffect, 0, v7, v8);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoLayerChangeObj, 0, v9, v10);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_36589816(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoCampaignAssetData, 0, v12, v13);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !klass )
      goto LABEL_38;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoTargetSelectDialog, 0, v18, v19);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !klass )
      goto LABEL_38;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(v21, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoSettingButtonComponent, 0, v22, v23);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !klass )
      goto LABEL_38;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(v25, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.masterEquipSettingDialog, 0, v26, v27);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v29 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_36590024((AssetData_array *)v29, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.masterEquipAssetData, 0, v30, v31);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = (ServantStatusBattleListViewItem_o *)&this->fields.photoMasterTexture;
    klass = (UnityEngine_Component_o *)p_photoMasterTexture->klass;
    if ( p_photoMasterTexture->klass )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)klass, 0LL);
      p_photoMasterTexture->klass = 0LL;
      sub_1B00C70(p_photoMasterTexture, 0, v34, v35);
      return;
    }
LABEL_38:
    sub_1B00F28(klass, v15);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  ServantStatusBattleListViewItem_o *p_asstName; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48DE417 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, method);
    byte_48DE417 = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = (ServantStatusBattleListViewItem_o *)&this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    p_asstName->klass = 0LL;
    sub_1B00C70(p_asstName, 0, v5, v6);
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

  if ( (byte_48DE452 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v3);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_12759/*"State 5"*/, v5);
    byte_48DE452 = 1;
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
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v27, 0LL);
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
  v23 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_12759/*"State 5"*/, 0LL);
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
    sub_1B00F28(playBtnImg, v16);
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
    sub_1B00F28(0LL, v3);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 89, 0, 0LL);
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
    sub_1B00F28(0LL, v5);
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
  if ( (byte_48DE427 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_1B00CCC(&MyRoomControl_TypeInfo, v3);
    byte_48DE427 = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1B00F28(this, method);
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
  __int64 v3; // x3
  struct UnityEngine_GameObject_array *multipleFaceChangeButtons; // x8
  MyRoomControl_o *v5; // x20
  __int64 v7; // x21
  int max_length; // w9

  multipleFaceChangeButtons = this->fields.multipleFaceChangeButtons;
  if ( !multipleFaceChangeButtons )
    goto LABEL_7;
  v5 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = multipleFaceChangeButtons->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B00F30(this, isEnable, method, v3);
    this = (MyRoomControl_o *)multipleFaceChangeButtons->m_Items[v7];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL);
      multipleFaceChangeButtons = v5->fields.multipleFaceChangeButtons;
      ++v7;
      if ( multipleFaceChangeButtons )
        continue;
    }
    goto LABEL_7;
  }
  this = (MyRoomControl_o *)v5->fields.multipleViewCloseButton;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isEnable, 0LL),
        (this = (MyRoomControl_o *)v5->fields.multipleViewDisableUiButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL),
        (this = (MyRoomControl_o *)v5->fields.titleInfo) == 0LL) )
  {
LABEL_7:
    sub_1B00F28(this, isEnable);
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
  if ( (byte_48DE478 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, faceData);
    this = (MyRoomControl_o *)sub_1B00CCC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    byte_48DE478 = 1;
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
          sub_1B00F30(this, faceData, callbackFunc, method);
        v14 = multiFace->m_Items[v11 + 1];
        v15 = multiForm->m_Items[v11 + 1];
        this = (MyRoomControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    v11,
                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (MyRoomControl_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v11 )
          v16 = 0LL;
        else
          v16 = callbackFunc;
        UIStandFigureR__SetFace_39674788((UIStandFigureR_o *)this, v14, v15, v16, 0.0, 0LL);
        if ( size == ++v11 )
          return;
      }
    }
LABEL_19:
    sub_1B00F28(this, faceData);
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
  __int64 v13; // x21
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x1
  ServantVoiceEntity_o *v27; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *asstName; // x22
  System_Action_o *v35; // x23
  const MethodInfo *v36; // x3
  System_Action_o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  System_Action_o *v40; // x20
  const MethodInfo *v41; // x2

  if ( (byte_48DE445 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__0__, v9);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__1__, v10);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__2__, v11);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass322_0_TypeInfo, v12);
    byte_48DE445 = 1;
  }
  v13 = sub_1B00F18(MyRoomControl___c__DisplayClass322_0_TypeInfo);
  MyRoomControl___c__DisplayClass322_0___ctor((MyRoomControl___c__DisplayClass322_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)callback, v18, v19);
  MyRoomControl__setupSvtImageIdList(this, v20);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v21);
  *(_QWORD *)(v13 + 24) = SvtVoiceEnt;
  v23 = (ServantVoiceEntity_o **)(v13 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)SvtVoiceEnt, v24, v25);
  if ( *(_QWORD *)(v13 + 24) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v26);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        v27 = *v23;
        Instance = (CommonUI_o *)System_Collections_Generic_List_int___get_Item(
                                   (System_Collections_Generic_List_int__o *)Instance,
                                   this->fields.figureSvtDispIdx,
                                   (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( v27 )
        {
          MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(v27, (int32_t)Instance, 0LL);
          this->fields.voiceList = MyRoomVoiceList;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.voiceList, (int32_t)MyRoomVoiceList, v29, v30);
          Instance = (CommonUI_o *)*v23;
          if ( *v23 )
          {
            VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
            this->fields.asstName = VoiceAssetName;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v32, v33);
            asstName = this->fields.asstName;
            v35 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            System_Action___ctor(
              v35,
              (Il2CppObject *)v13,
              Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v35, v36);
            goto LABEL_11;
          }
        }
      }
    }
LABEL_14:
    sub_1B00F28(Instance, v15);
  }
  this->fields.isExistVoiceData = 0;
LABEL_11:
  v37 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__1__,
    0LL);
  *(_QWORD *)(v13 + 40) = v37;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)v37, v38, v39);
  if ( IsActSetMyRoomStandFigre )
  {
    v40 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v40,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v40, v41);
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
  __int64 v3; // x3
  MyRoomControl_o *v5; // x19
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v7; // x21
  int max_length; // w9
  int32_t v9; // w1

  v5 = this;
  if ( (byte_48DE463 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_48DE463 = 1;
  }
  multipleStandFigureBacks = v5->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1B00F28(this, *(_QWORD *)&frontIndex);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B00F30(this, *(_QWORD *)&frontIndex, method, v3);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v7];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B00F28(0LL, flag);
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
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v21; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  int32_t v24; // w0
  int32_t Id; // w22
  int32_t v26; // w22
  int32_t v27; // w0
  StandFigureBack_o *standFigureBack; // x20
  int32_t v29; // w23
  System_Action_o *v30; // x24

  if ( (byte_48DE426 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__0__, v9);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass242_0_TypeInfo, v10);
    sub_1B00CCC(&UIStandFigureRender_TypeInfo, v11);
    byte_48DE426 = 1;
  }
  v12 = sub_1B00F18(MyRoomControl___c__DisplayClass242_0_TypeInfo);
  MyRoomControl___c__DisplayClass242_0___ctor((MyRoomControl___c__DisplayClass242_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = end_act;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)end_act, v17, v18);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v19);
    MyRoomControl__SetChangeBtn(this, v21);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_16;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
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
  v24 = System_Collections_Generic_List_int___get_Item(
          materialImageIdList,
          this->fields.materialFigureSvtDispIdx,
          (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
  Id = ServantScriptMaster__getId(servantId, v24, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  if ( !this->fields.materialImageIdList
    || (v26 = (int)materialImageIdList,
        v27 = System_Collections_Generic_List_int___get_Item(
                this->fields.materialImageIdList,
                this->fields.materialFigureSvtDispIdx,
                (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__),
        standFigureBack = this->fields.standFigureBack,
        v29 = v27,
        v30 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v12,
          Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__0__,
          0LL),
        !standFigureBack) )
  {
LABEL_16:
    sub_1B00F28(materialImageIdList, v14);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v29, 1, 0, v26, 10, v30, 0, 0LL);
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
    sub_1B00F28(multipleViewButtonSprite, v3);
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
  __int64 v10; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x3
  bool _36489460; // w8
  int32_t figureSvtId; // w21
  int32_t Item; // w0
  int32_t v21; // w21
  int32_t v22; // w21
  int32_t v23; // w0
  StandFigureBack_o *standFigureBack; // x22
  int32_t v25; // w19
  int32_t v26; // w23
  System_Action_o *v27; // x24

  if ( (byte_48DE424 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, end_act);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v6);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__0__, v7);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass240_0_TypeInfo, v8);
    sub_1B00CCC(&UIStandFigureRender_TypeInfo, v9);
    byte_48DE424 = 1;
  }
  v10 = sub_1B00F18(MyRoomControl___c__DisplayClass240_0_TypeInfo);
  MyRoomControl___c__DisplayClass240_0___ctor((MyRoomControl___c__DisplayClass240_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = end_act;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)end_act, v15, v16);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v10 + 24), v17);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _36489460 = TutorialFlag__Get_36489460(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _36489460;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_15;
  figureSvtId = this->fields.figureSvtId;
  Item = System_Collections_Generic_List_int___get_Item(
           imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
  imageIdList = (System_Collections_Generic_List_int__o *)ServantScriptMaster__getId(figureSvtId, Item, 0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_15;
  v21 = (int)imageIdList;
  MyRoomData__getUsrSvtData(this->fields.myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  imageIdList = (System_Collections_Generic_List_int__o *)UIStandFigureRender__GetForm(v21, 1, -1, 0LL);
  if ( !this->fields.imageIdList
    || (v22 = (int)imageIdList,
        v23 = System_Collections_Generic_List_int___get_Item(
                this->fields.imageIdList,
                this->fields.figureSvtDispIdx,
                (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__),
        standFigureBack = this->fields.standFigureBack,
        v25 = this->fields.figureSvtId,
        v26 = v23,
        v27 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v10,
          Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__0__,
          0LL),
        !standFigureBack) )
  {
LABEL_15:
    sub_1B00F28(imageIdList, v12);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, v25, v26, 1, 0, v22, 10, v27, 0, 0LL);
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
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v18; // x1
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_48DE425 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, end_act);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B00CCC(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass241_0__SetMySvtFigure_b__0__, v7);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass241_0_TypeInfo, v8);
    byte_48DE425 = 1;
  }
  v9 = sub_1B00F18(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor((MyRoomControl___c__DisplayClass241_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13),
        *(_QWORD *)(v9 + 24) = end_act,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)end_act, v14, v15),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1B00F28(materialImageIdList, v11);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v18);
  v19 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_MyRoomControl___c__DisplayClass241_0__SetMySvtFigure_b__0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v19, v20);
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
    sub_1B00F28(photoCampaignButtonSprite, v3);
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
    sub_1B00F28(photoCampaignAtlas, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_48DE486 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, isActive);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DE486 = 1;
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
      v9 = UnityEngine_Object__Instantiate_object__48061460(
             photoCampaignCameraEffect,
             transform,
             (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v9;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields.photoCampaignInstantiateCameraEffect,
        (int32_t)v9,
        v10,
        v11);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1B00F28(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68077656(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoCampaignInstantiateCameraEffect, 0, v13, v14);
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

  if ( (byte_48DE42F & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DE42F = 1;
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
    if ( !byte_48DD9F6 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v7);
      byte_48DD9F6 = 1;
    }
    if ( !v9
      || (UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v10 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v10)
      || (v11 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v10, 0.0, 0LL), !v11) )
    {
LABEL_21:
      sub_1B00F28(voicePlayEffect, v7);
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
    UITweener__Play_45828648(v10, 1, 0LL);
    UITweener__Play_45828648(v11, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_1B00F28(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_68037396(
                                              0,
                                              photoCampaignFaceList->max_length,
                                              0LL);
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.sceneJumpInfo = info;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sceneJumpInfo, (int32_t)info, (int32_t)method, v3);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, v3);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B00F28(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_48DE41C & 1) == 0 )
  {
    sub_1B00CCC(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_48DE41C = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B00F28(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_2F73F98 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_48DE410 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_48DE410 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, 0LL),
        !this->fields.frontObjectManager) )
  {
    sub_1B00F28(Instance, v5);
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
  __int64 v28; // x2
  __int64 v29; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v31; // x21
  unsigned __int64 i; // x23
  int32_t v33; // w22
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10

  if ( (byte_48DE412 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B00CCC(&MaterialServantLimitCountManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_48DE412 = 1;
  }
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                    (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
    sub_1B00F28(Instance, v14);
  }
  v22 = 0;
LABEL_31:
  Instance = (DataManager_o *)MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)Instance, servantId, v19);
  if ( !Instance )
    goto LABEL_46;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v31 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B00F30(Instance, v14, v28, v29);
      v33 = *((_DWORD *)&v31->fields._DispLog + i);
      if ( v33 >= 1 )
      {
        Instance = (DataManager_o *)this->fields.materialImageIdList;
        if ( !Instance )
          goto LABEL_46;
        v34 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_46;
        v36 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Instance,
            v33,
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v36 + 1;
          *(_DWORD *)(v34 + 4 * v36 + 32) = v33;
        }
        if ( v33 == v16 )
          this->fields.materialFigureSvtDispIdx = v22;
        ++v22;
      }
      LODWORD(m_CancellationTokenSource) = v31->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall MyRoomControl__ShowContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1B00F28(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_48DE418 & 1) == 0 )
  {
    sub_1B00CCC(&Gesture_EventHandler_TypeInfo, method);
    sub_1B00CCC(&FingerGestures_TypeInfo, v3);
    sub_1B00CCC(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_48DE418 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B00F18(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE47C & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__StartCameraEffect_d__411_TypeInfo, method);
    byte_48DE47C = 1;
  }
  v3 = sub_1B00F18(MyRoomControl__StartCameraEffect_d__411_TypeInfo);
  MyRoomControl__StartCameraEffect_d__411___ctor((MyRoomControl__StartCameraEffect_d__411_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_48DE41A & 1) == 0 )
  {
    sub_1B00CCC(&Method_CStateManager_MyRoomControl__update__, method);
    byte_48DE41A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_2F73F74 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_48DE46A & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48DE46A = 1;
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
      sub_1B00F28(RestTime6, v9);
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

  if ( (byte_48DE485 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48DE485 = 1;
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
      sub_1B00F28(RestTime6, v9);
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
    sub_1B00F28(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__317_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DE495 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DE495 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B00F28(Instance, v4);
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
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x20

  if ( (byte_48DE49B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass424_0__ChangeMasterSetting_b__1__, v9);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass424_0_TypeInfo, v10);
    byte_48DE49B = 1;
  }
  v11 = sub_1B00F18(MyRoomControl___c__DisplayClass424_0_TypeInfo);
  MyRoomControl___c__DisplayClass424_0___ctor((MyRoomControl___c__DisplayClass424_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 16) = genderType;
  *(_DWORD *)(v11 + 20) = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass424_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !v18 )
LABEL_8:
    sub_1B00F28(v12, v13);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__424_2(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *photoMasterTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v6; // x1
  CommonUI_o *v7; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DE49C & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_48DE49C = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v6);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)photoMasterTexture;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1B00F28(photoMasterTexture, method);
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

  if ( (byte_48DE498 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__CloseMultipleView_b__384_1__, v3);
    byte_48DE498 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__384_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1B00F28(v6, v7);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v5, v8);
}


void __fastcall MyRoomControl___CloseMultipleView_b__384_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  __int64 v5; // x2
  __int64 v6; // x3
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v8; // x20
  int max_length; // w9
  const MethodInfo *v10; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 40, 0, 0LL);
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
  v8 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1B00F30(titleInfo, method, v5, v6);
    titleInfo = (TitleInfoControl_o *)multipleStandFigureBacks->m_Items[v8];
    if ( titleInfo )
    {
      StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v8;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_10;
  }
  titleInfo = (TitleInfoControl_o *)this->fields.mBlocker;
  if ( !titleInfo )
LABEL_10:
    sub_1B00F28(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v10);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__418_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_48DE49A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_1__, v3);
    byte_48DE49A = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_1B00F28(v6, v7);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_1B00F28(titleInfo, method);
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
    sub_1B00F28(this, method);
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

  if ( (byte_48DE499 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&photoType);
    sub_1B00CCC(&Method_MyRoomControl__EndLoadPhotoAsset_b__397_1__, v5);
    byte_48DE499 = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v6 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__397_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v6, 1, v7);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__397_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_1B00F28(this, method);
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
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48DE497 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_MyRoomControl___c__GoToTitle_b__329_1__, v6);
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v7);
    byte_48DE497 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v10, v11);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v15 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v15, v16, Method_MyRoomControl___c__GoToTitle_b__329_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__329_1 = v15;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__329_1, (int32_t)v15, v18, v19);
    }
    if ( v12 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v12, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_16:
    sub_1B00F28(Instance, v9);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__287_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B00F28(this, method);
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

  if ( (byte_48DE493 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__LoadServantForm_b__265_1__, v4);
    sub_1B00CCC(&StringLiteral_8360/*"LoadServantFormEnd"*/, v5);
    byte_48DE493 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__265_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B00F28(SvtStandFigure, method);
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
  MyRoomControl__moveControl(this, this->fields.svtObj, v15, (System_String_o *)StringLiteral_8360/*"LoadServantFormEnd"*/, v14);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__370_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1B00F28(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__316_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DE494 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DE494 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B00F28(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__321_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE496 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3555/*"CLOSE_MENU"*/, method);
    byte_48DE496 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3555/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__248_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE492 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_7076/*"HIDE_END"*/, method);
    byte_48DE492 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7076/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__285_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B00F28(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__239_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v5; // x8

  if ( (byte_48DE491 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8175/*"LOAD_END"*/, method);
    sub_1B00CCC(&StringLiteral_8176/*"LOAD_END_TO_HELP"*/, v3);
    byte_48DE491 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, method);
  if ( this->fields.type == 6 )
    v5 = (System_String_o **)&StringLiteral_8176/*"LOAD_END_TO_HELP"*/;
  else
    v5 = (System_String_o **)&StringLiteral_8175/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__221_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE490 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, result);
    byte_48DE490 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
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
  if ( (byte_48DE438 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, result);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    this = (MyRoomControl_o *)sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v6);
    byte_48DE438 = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v7 = &StringLiteral_10883/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B00F28(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v7 = &StringLiteral_10885/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_48DE449 & 1) == 0 )
  {
    sub_1B00CCC(&TutorialFlag_TypeInfo, method);
    byte_48DE449 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_36489460(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1B00F28(0LL, v3);
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
    sub_1B00F28(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1B00F28(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  char *svtCtr; // x0

  svtCtr = (char *)this->fields.svtCtr;
  if ( !svtCtr
    || (*((_QWORD *)svtCtr + 11) = 0LL,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(svtCtr + 88), 0, v2, v3),
        (svtCtr = (char *)this->fields.standFigureBack) == 0LL) )
  {
    sub_1B00F28(svtCtr, method);
  }
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE436 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11258/*"SAVE_END"*/, method);
    byte_48DE436 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11258/*"SAVE_END"*/, 0LL);
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

  if ( (byte_48DE414 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_1B00CCC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_1B00CCC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DE414 = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v6->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_14;
  v10 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v10 )
  {
    v11 = v10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v11,
                                 (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1B00F28(Instance, v9);
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

  if ( (byte_48DE415 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, method);
    byte_48DE415 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1B00F28(v4, v5);
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
    sub_1B00F28(0LL, method);
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
  int32_t v12; // w2
  int32_t v13; // w3
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v19; // w8
  struct System_Collections_Generic_List_int__o *v21; // x8
  MyRoomControl_c *v22; // x0
  int v23; // w8
  MyRoomControl_c *v24; // x0
  int32_t v25; // w20
  int32_t Item; // w0
  StandFigureBack_c *v27; // x8
  int32_t LimitCountByImageLimit; // w19
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48DE428 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B00CCC(&StandFigureBack_TypeInfo, v10);
    byte_48DE428 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v12, v13);
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
        v19 = figureSvtDispIdx + 1;
      else
        v19 = 0;
      this->fields.figureSvtDispIdx = v19;
    }
    else
    {
      v21 = this->fields.imageIdList;
      if ( !v21 )
        goto LABEL_35;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v21->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_35;
        v30.fields.r = 0.5;
        v30.fields.g = 0.5;
        v30.fields.b = 0.5;
        v30.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v30, 0LL);
        v24 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v24 = MyRoomControl_TypeInfo;
        }
        v23 = this->fields.buttonFlag & ~v24->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_35;
        v29.fields.r = 1.0;
        v29.fields.g = 1.0;
        v29.fields.b = 1.0;
        v29.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v29, 0LL);
        v22 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v22 = MyRoomControl_TypeInfo;
        }
        v23 = this->fields.buttonFlag | v22->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v23;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_35;
  v25 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
  v27 = StandFigureBack_TypeInfo;
  LimitCountByImageLimit = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v27 = StandFigureBack_TypeInfo;
  }
  if ( LimitCountByImageLimit < v27->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(LimitCountByImageLimit, 0LL);
  }
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData
    || (myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)myRoomData,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_35:
    sub_1B00F28(myRoomData, favoriteUserSvtId);
  }
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v25, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_48DE431 & 1) == 0 )
  {
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_48DE431 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1B00F28(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v9, 0LL);
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

  if ( (byte_48DE44C & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v7);
    byte_48DE44C = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_36489460(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1B00F28(helpListViewManager, v8);
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v10,
                                                         (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_1B00F28(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_48DE444 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__hideFavoriteSvt_b__321_0__, v3);
    byte_48DE444 = 1;
  }
  v4 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__321_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1B00F28(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1B00F28(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1B00F28(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE446 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3555/*"CLOSE_MENU"*/, method);
    byte_48DE446 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3555/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_48DE447 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, method);
    byte_48DE447 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1B00F28(soundPlayerComp, method);
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

  if ( (byte_48DE42B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__hideSvtFigure_b__248_0__, v3);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v4);
    byte_48DE42B = 1;
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
  v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__248_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1B00F28(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v9, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(usrItemListViewManager, method);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE43C & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__initMaterial_d__285_TypeInfo, method);
    byte_48DE43C = 1;
  }
  v3 = sub_1B00F18(MyRoomControl__initMaterial_d__285_TypeInfo);
  MyRoomControl__initMaterial_d__285___ctor((MyRoomControl__initMaterial_d__285_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v28; // x2
  CStateManager_T__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  CStateManager_T__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v33; // x21
  Il2CppObject *MasterData_object; // x0
  struct EventMaster_o **p_eventMaster; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v41; // x22
  Il2CppObject *v42; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  _BOOL8 v46; // x0
  const MethodInfo *v47; // x4
  MyRoomControl_o *v48; // x0
  const MethodInfo *v49; // x4
  MyRoomParamsManager_c *v50; // x0
  struct MyRoomParamsManager_StaticFields *v51; // x8
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v56; // x22
  const MethodInfo *v57; // x1
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v61; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  __int64 v64; // x2
  __int64 v65; // x3
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v67; // x21
  int max_length; // w9
  int m_CancellationTokenSource; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v78; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_object__o *v80; // x22
  int32_t v81; // w2
  int32_t v82; // w3
  System_Collections_Generic_Dictionary_int__object__o *v83; // x22
  int32_t v84; // w2
  int32_t v85; // w3
  System_Collections_Generic_Dictionary_int__object__o *v86; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x1
  UnityEngine_Vector3_o v93; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DE40F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&Method_CStateManager_MyRoomControl___ctor__, v4);
    sub_1B00CCC(&Method_CStateManager_MyRoomControl__add__, v5);
    sub_1B00CCC(&CStateManager_MyRoomControl__TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AssetData___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_AssetData__TypeInfo, v14);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v15);
    sub_1B00CCC(&Method_MyRoomControl_LoadScriptFileListAssetData__, v16);
    sub_1B00CCC(&MyRoomParamsManager_TypeInfo, v17);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B00CCC(&SoundManager_TypeInfo, v19);
    sub_1B00CCC(&MyRoomControl_StateEtc_TypeInfo, v20);
    sub_1B00CCC(&Method_MyRoomControl___c__initMyRoom_b__216_0__, v21);
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v22);
    sub_1B00CCC(&StringLiteral_10244/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v23);
    sub_1B00CCC(&StringLiteral_17238/*"btn_bg_12"*/, v24);
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, v25);
    sub_1B00CCC(&StringLiteral_8679/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v26);
    byte_48DE40F = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v93.fields.z = 0.0;
  *(_QWORD *)&v93.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_52;
  }
  if ( !this->fields.mFSM )
  {
    v29 = (CStateManager_T__o *)sub_1B00F18(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v29,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_2F73E64 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v29;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v29, v30, v31);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_52;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_2F73F0C *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v33 = (MyRoomControl_StateEtc_o *)sub_1B00F18(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v33, 0LL);
    if ( !mFSM )
      goto LABEL_52;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v33,
      (const MethodInfo_2F73F0C *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v28);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)standFigureBack,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)MasterData_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventMaster, (int32_t)MasterData_object, v36, v37);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)standFigureBack, this->fields.myRoomFsm, 1, 0LL, 40, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_52;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)standFigureBack, 30, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomListCtr;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomListControl__Setup((MyRoomListControl_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.voiceClickCollider;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  this->fields.isHeroineReave = 0;
  *(_WORD *)&this->fields.isServantMaterial = 0;
  *(_DWORD *)&this->fields.isVoiceLoading = 0;
  this->fields.isExistVoiceData = 1;
  this->fields.materialServantId = -1;
  MyRoomControl__setUserStInfoView(this, v38);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(mMainObj, LocalPosition, 0LL);
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
  }
  v41 = *(System_Action_o **)(*(_QWORD *)&standFigureBack[1].fields.isFirstLoading + 8LL);
  if ( !v41 )
  {
    if ( !standFigureBack[2].fields.m_CachedPtr )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
    }
    v42 = **(Il2CppObject ***)&standFigureBack[1].fields.isFirstLoading;
    v41 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v41, v42, Method_MyRoomControl___c__initMyRoom_b__216_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__216_0 = v41;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__216_0, (int32_t)v41, v44, v45);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_52;
  v46 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v41, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v46,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v47);
  MyRoomControl__setupSortWindowUIMoveData(v48, this->fields.sortWindowObj, &v, &v93, v49);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_48DE49D )
  {
    sub_1B00CCC(&MyRoomParamsManager_TypeInfo, method);
    byte_48DE49D = 1;
  }
  v50 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v50 = MyRoomParamsManager_TypeInfo;
  }
  v51 = v50->static_fields;
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  this->fields.IsListActive = v51->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_52;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v52);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v53);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v56 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_52;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v56, 0LL);
  MyRoomControl__setupSvtImageIdList(this, v57);
  standFigureBack = (StandFigureBack_o *)this->fields.helpListViewManager;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomHelpListViewManager__LoadBaseSprite((MyRoomHelpListViewManager_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
  this->fields.mState = 0;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
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
  v98 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v98;
  v99 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v99;
  v100 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v100;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v61);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17238/*"btn_bg_12"*/, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_52;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.typeMetadataHandle)(
    standFigureBack,
    standFigureBack->klass[2]._1.interopData);
  v101 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v101;
  if ( !multipleStandFigureBacks )
    goto LABEL_52;
  v67 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v67 >= max_length )
      break;
    if ( (unsigned int)v67 >= max_length )
      goto LABEL_84;
    standFigureBack = multipleStandFigureBacks->m_Items[v67];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v67;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_52;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewCloseButton;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewDisableUiButton;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)*p_eventMaster;
  if ( !*p_eventMaster )
    goto LABEL_52;
  this->fields.isEnableMultipleView = EventMaster__IsEnableMyRoomMultipleView((EventMaster_o *)standFigureBack, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (StandFigureBack_o *)UserServantMaster__getOrganizationList(
                                                 (UserServantMaster_o *)standFigureBack,
                                                 0LL)) == 0LL
    || (m_CancellationTokenSource = (int)standFigureBack->fields.m_CancellationTokenSource,
        standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = m_CancellationTokenSource > 1,
        !standFigureBack) )
  {
LABEL_52:
    sub_1B00F28(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8679/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_52;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v72);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v73);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v74);
  }
  standFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init(standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignCameraButton;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignProduction;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_52;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EnableEntityList,
                                           0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  method = (const MethodInfo *)(((unsigned int)standFigureBack ^ 1) & 1);
  this->fields.isEnablePhotoCampaign = ((unsigned __int8)standFigureBack ^ 1) & 1;
  if ( !photoCampaignButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(photoCampaignButton, ((unsigned __int8)standFigureBack ^ 1) & 1, 0LL);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoCampaignState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_52;
    if ( !EnableEntityList->max_length )
LABEL_84:
      sub_1B00F30(standFigureBack, method, v64, v65);
    v78 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v78;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.photoCampaignEntity, (int32_t)v78, v64, v65);
    v80 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v80,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v80;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.masterEquipAssetData, (int32_t)v80, v81, v82);
    v83 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v83,
      (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v83;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.masterMaleEquipTexture, (int32_t)v83, v84, v85);
    v86 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v86,
      (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v86;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.masterFemaleEquipTexture, (int32_t)v86, v87, v88);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10244/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_52;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_52;
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               (EventMaster_o *)standFigureBack,
                                               (*p_photoCampaignEntity)->fields.id,
                                               0LL);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v90);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v91);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v92);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  z = movePos.fields.z;
  movePos.fields.z = movePos.fields.y;
  movePos.fields.y = movePos.fields.x;
  v8 = TweenPosition__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&movePos.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v8 )
    sub_1B00F28(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.eventReceiver, (int32_t)gameObject, v11, v12);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.callWhenFinished, (int32_t)callwhenFinished, v13, v14);
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

  if ( (byte_48DE44A & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_onClickHelp__, method);
    sub_1B00CCC(&MyRoomControl_TypeInfo, v3);
    byte_48DE44A = 1;
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
    v6 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_onClickHelp__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
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
        sub_1B00F28(0LL, v9);
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

  if ( (byte_48DE44B & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl_helpClose__, v3);
    sub_1B00CCC(&Method_MyRoomControl_onClickHelpClose__, v4);
    byte_48DE44B = 1;
  }
  v5 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_onClickHelpClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1B00F18(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1B00F28(v9, v10);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1B00F28(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1B00F28(0LL, method);
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
  __int64 v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  int m_CancellationTokenSource; // w8

  if ( (byte_48DE434 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B00CCC(&int_____TypeInfo, v3);
    sub_1B00CCC(&int___TypeInfo, v4);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48DE434 = 1;
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
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v11, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                           (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v17 = sub_1B00D74(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1B00D74(int___TypeInfo, 2LL);
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
          if ( !*(_DWORD *)(v17 + 24) )
LABEL_22:
            sub_1B00F30(svtCtr, svtCtr, v18, v19);
          *(_QWORD *)(v17 + 32) = svtCtr;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)svtCtr, v18, v19);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, (System_Int32_array_array *)v17, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1B00F28(svtCtr, v10);
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
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_48DE41F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_1B00CCC(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_48DE41F = 1;
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
             (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
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
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.mMaterialEventLogListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MaterialEventLogListViewManager__DestroyList((MaterialEventLogListViewManager_o *)materialImageIdList, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.helpListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)materialImageIdList, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.helpListViewManager;
  if ( !materialImageIdList
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)materialImageIdList, 0LL),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)materialImageIdList, 0LL),
        MyRoomControl__ReleasePhotoAsset(v2, v10),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.MaterialEventLogItemListPanel) == 0LL)
    || (((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
          materialImageIdList,
          materialImageIdList->klass->vtable._9_unknown.methodPtr,
          1.0),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.valentineListObj) == 0LL) )
  {
LABEL_17:
    sub_1B00F28(materialImageIdList, v4);
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

  if ( (byte_48DE435 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl_endReflectionGameOption__, v3);
    byte_48DE435 = 1;
  }
  optionComp = this->fields.optionComp;
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1B00F28(v6, v7);
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

  if ( (byte_48DE437 & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_callbackChangeName__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_4369/*"ChangeUserName"*/, v6);
    byte_48DE437 = 1;
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
                   (System_String_o *)StringLiteral_4369/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1B00F28(SelfUserGame, v8);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
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
    sub_1B00F28(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  PlayMakerFSM_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  ServantVoiceEntity_o *v19; // x22
  int32_t Item; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *asstName; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_48DE42C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isReset);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass249_0__resetSvtVoiceData_b__0__, v6);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass249_0_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_8175/*"LOAD_END"*/, v8);
    byte_48DE42C = 1;
  }
  v9 = sub_1B00F18(MyRoomControl___c__DisplayClass249_0_TypeInfo);
  MyRoomControl___c__DisplayClass249_0___ctor((MyRoomControl___c__DisplayClass249_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8175/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1B00F28(myRoomFsm, v11);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v14);
  *(_QWORD *)(v9 + 24) = SvtVoiceEnt;
  v16 = (PlayMakerFSM_o **)(v9 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)SvtVoiceEnt, v17, v18);
  v19 = *(ServantVoiceEntity_o **)(v9 + 24);
  if ( !v19 )
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
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
  MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(v19, Item, 0LL);
  this->fields.voiceList = MyRoomVoiceList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.voiceList, (int32_t)MyRoomVoiceList, v22, v23);
  myRoomFsm = *v16;
  if ( !*v16 )
    goto LABEL_13;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v25, v26);
  asstName = this->fields.asstName;
  v28 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass249_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v28, v29);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
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

  if ( (byte_48DE453 & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_setDefSvtPos__, method);
    byte_48DE453 = 1;
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
    v5 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
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
        sub_1B00F28(voicePlayBtn, method);
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
    sub_1B00F28(moveBtnObj, isDisp);
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
    sub_1B00F28(titleBtnCollider, isEnabled);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
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

  if ( (byte_48DE43A & 1) == 0 )
  {
    sub_1B00CCC(&Method_MyRoomControl_setMaterial__, isPlayDecideSe);
    byte_48DE43A = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, v5);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B00CE4(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v8, v8[4]);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, method);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, method);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, method);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 55, 0, 0LL);
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
    sub_1B00F28(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, method);
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B00F28(this, method);
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
    sub_1B00F28(v6, v7);
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

  if ( (byte_48DE423 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__setMySvtFigure_b__239_0__, v3);
    byte_48DE423 = 1;
  }
  v4 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__239_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v4, v5);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_30451116(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_30451116(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
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

  if ( (byte_48DE430 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&UIStandFigureRender_TypeInfo, v6);
    byte_48DE430 = 1;
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
             (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1B00F28(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_35993624((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1B00F28(mstpfObj, method);
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
    sub_1B00F28(0LL, v4);
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
        sub_1B00F28(standFigureBack, isEnableMultipleView);
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
    sub_1B00F28(0LL, hSvtId);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *asstName; // x20
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21
  Il2CppObject *v29; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_48DE421 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B00CCC(&Method_MyRoomControl_EndLoad__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B00CCC(&Method_MyRoomControl___c__setSvtVoiceData_b__237_0__, v8);
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_8175/*"LOAD_END"*/, v10);
    byte_48DE421 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8175/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1B00F28(myRoomFsm, method);
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
             (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
    MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(v13, Item, 0LL);
    this->fields.voiceList = MyRoomVoiceList;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.voiceList, (int32_t)MyRoomVoiceList, v16, v17);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v13, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v19, v20);
    asstName = this->fields.asstName;
    v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v22, v23);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v26 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v28 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 16LL);
      if ( !v28 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v29 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v28 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(v28, v29, Method_MyRoomControl___c__setSvtVoiceData_b__237_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__237_0 = v28;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__237_0, (int32_t)v28, v31, v32);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v28, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8175/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
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

  if ( (byte_48DE439 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl_TypeInfo, method);
    byte_48DE439 = 1;
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
    sub_1B00F28(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_35993624((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1B00F28(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_30249520((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  UnityEngine_GameObject_o *materialObj; // x8
  __int64 v9; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  materialObj = this->fields.materialObj;
  *moveTarget = materialObj;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)moveTarget,
    (int32_t)materialObj,
    (int32_t)moveShowPos,
    (int32_t)moveHidePos);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1B00F28(transform, v9);
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
    sub_1B00F28(this, moveTarget);
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
    sub_1B00F28(this, moveTarget);
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
  int32_t v12; // w2
  int32_t v13; // w3
  MyRoomData_o *myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  __int64 favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v18; // w9
  MyRoomData_o *v19; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v21; // x22
  int32_t i; // w21
  struct UserDeckMaster_o *usrDeckMst; // x22
  struct UserGameEntity_o *v24; // x23
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  int32_t v27; // w22
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct System_Threading_CancellationTokenSource_o *v31; // x21
  __int64 v32; // x22
  MyRoomControl_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x2
  __int64 v36; // x3
  struct System_Threading_CancellationTokenSource_o *v37; // x8
  MyRoomData_o *v38; // x21
  unsigned __int64 v39; // x22
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int32_t FigureImageLimitCount; // w20
  struct System_Collections_Generic_List_int__o *v44; // x8
  int v45; // w20
  int32_t v46; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_48DE411 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_48DE411 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v12, v13);
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
  v18 = imageIdList->fields._version + 1;
  imageIdList->fields._size = 0;
  imageIdList->fields._version = v18;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0LL);
  if ( !myRoomData )
    goto LABEL_48;
  v19 = myRoomData;
  v21 = *(_QWORD *)&myRoomData[1].fields.m_CachedPtr;
  m_CancellationTokenSource = myRoomData[1].fields.m_CancellationTokenSource;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v21;
  *(_QWORD *)&v47.fields.fakeValue = m_CancellationTokenSource;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v47, 0LL);
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v19, 0LL);
  for ( i = 0; ; ++i )
  {
    v24 = v19[1].fields.usrData;
    usrDeckMst = v19[1].fields.usrDeckMst;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v24;
    *(_QWORD *)&v48.fields.fakeValue = usrDeckMst;
    if ( i > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v48, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, i, 0LL);
    myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)myRoomData,
                                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (MyRoomData_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   (ServantLimitImageMaster_o *)myRoomData,
                                   this->fields.figureSvtId,
                                   ImageLimitCount,
                                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v27 = (int)myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)myRoomData,
            (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      myRoomData = (MyRoomData_o *)this->fields.imageIdList;
      if ( !myRoomData )
        goto LABEL_48;
      v28 = *(_QWORD *)&myRoomData->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(myRoomData->fields.m_CancellationTokenSource);
      if ( !v28 )
        goto LABEL_48;
      m_CancellationTokenSource_low = SLODWORD(myRoomData->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v28 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)myRoomData,
          v27,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(myRoomData->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v28 + 4 * m_CancellationTokenSource_low + 32) = v27;
      }
    }
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v19, 0LL)
    || UserServantEntity__isLimitCountMax((UserServantEntity_o *)v19, 0LL) )
  {
    v32 = *(_QWORD *)&v19[1].fields.m_CachedPtr;
    v31 = v19[1].fields.m_CancellationTokenSource;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v32;
    *(_QWORD *)&v49.fields.fakeValue = v31;
    v33 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v49, 0LL);
    myRoomData = (MyRoomData_o *)MyRoomControl__GetSortedCostumeIds(v33, (int32_t)v33, v34);
    if ( myRoomData )
    {
      v37 = myRoomData->fields.m_CancellationTokenSource;
      v38 = myRoomData;
      if ( (int)v37 >= 1 )
      {
        v39 = 0LL;
        while ( 1 )
        {
          if ( v39 >= (unsigned int)v37 )
            sub_1B00F30(myRoomData, favoriteUserSvtId, v35, v36);
          favoriteUserSvtId = *((unsigned int *)&v38->fields.usrData + v39);
          if ( (int)favoriteUserSvtId >= 1 )
          {
            myRoomData = (MyRoomData_o *)this->fields.imageIdList;
            if ( !myRoomData )
              goto LABEL_48;
            v40 = *(_QWORD *)&myRoomData->fields.m_CachedPtr;
            v41 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(myRoomData->fields.m_CancellationTokenSource);
            if ( !v40 )
              goto LABEL_48;
            v42 = SLODWORD(myRoomData->fields.m_CancellationTokenSource);
            if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)myRoomData,
                favoriteUserSvtId,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(myRoomData->fields.m_CancellationTokenSource) = v42 + 1;
              *(_DWORD *)(v40 + 4 * v42 + 32) = favoriteUserSvtId;
            }
          }
          LODWORD(v37) = v38->fields.m_CancellationTokenSource;
          if ( (__int64)++v39 >= (int)v37 )
            goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
LABEL_48:
    sub_1B00F28(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v19, 0, 0LL);
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (MyRoomData_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)myRoomData,
                                 this->fields.figureSvtId,
                                 FigureImageLimitCount,
                                 0LL);
  v44 = this->fields.imageIdList;
  if ( !v44 )
    goto LABEL_48;
  v45 = (int)myRoomData;
  v46 = 0;
  while ( v46 < v44->fields._size )
  {
    myRoomData = (MyRoomData_o *)System_Collections_Generic_List_int___get_Item(
                                   v44,
                                   v46,
                                   (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v45 )
    {
      this->fields.figureSvtDispIdx = v46;
      return;
    }
    v44 = this->fields.imageIdList;
    ++v46;
    if ( !v44 )
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
  __int64 v18; // x2
  __int64 v19; // x3
  char *v20; // x25
  unsigned int v21; // w23
  void **v22; // x25
  void *v23; // t1
  UserServantEntity_o *v24; // x19
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  UserServantCollectionMaster_o *v30; // x20
  int64_t userId; // x21
  __int64 v32; // x23
  __int64 v33; // x24
  __int128 v34; // q1
  _DWORD *v35; // x26
  int64_t pushUserSvtId; // x8
  int64_t v37; // x0
  __int128 v38; // q1
  int64_t v39; // x23
  int32_t v40; // w24
  int32_t v41; // w25
  int32_t v42; // w27
  int32_t v43; // w28
  bool IsLock; // w29
  char v45; // w20
  int32_t commonFlag; // w22
  int32_t battleVoice; // w26
  int32_t randomSettingOwn; // w21
  int32_t v49; // w0
  __int64 v50; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v53; // [xsp+58h] [xbp-D8h]
  int64_t v54; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_object; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_48DE413 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B00CCC(&Method_MyRoomControl__setupSvtRand_b__221_0__, v4);
    sub_1B00CCC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B00CCC(&OptionManager_TypeInfo, v9);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, v12);
    byte_48DE413 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1B00F28(limitCountSupport, v13);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v15 = *((_DWORD *)limitCountSupport + 6);
  v16 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_68037396(0, v15, 0LL);
    if ( (unsigned int)IsLeave >= v16[6] )
LABEL_35:
      sub_1B00F30(IsLeave, v13, v18, v19);
    v20 = (char *)&v16[2 * (int)IsLeave];
    v21 = IsLeave;
    v23 = (void *)*((_QWORD *)v20 + 4);
    v22 = (void **)(v20 + 32);
    limitCountSupport = v23;
    if ( !v23 )
      goto LABEL_36;
    IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    v24 = 0LL;
    if ( (IsLeave & 1) == 0 )
    {
      if ( v21 >= v16[6] )
        goto LABEL_35;
      limitCountSupport = *v22;
      if ( !*v22 )
        goto LABEL_36;
      IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
      v24 = 0LL;
      if ( (IsLeave & 1) == 0 )
      {
        if ( v21 >= v16[6] )
          goto LABEL_35;
        v24 = (UserServantEntity_o *)*v22;
      }
    }
  }
  while ( !v24 );
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__221_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v25,
                                              (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v28, v29);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData )
    goto LABEL_36;
  v30 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v33 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v33;
  *(_QWORD *)&v59.fields.fakeValue = v32;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v59, 0LL);
  if ( !v30 )
    goto LABEL_36;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v30, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_36;
  v34 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
  v35 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v34;
  v54 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v57 = v58;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v57, 0LL);
  v38 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
  v39 = v37;
  *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v56.fields.fakeValue = v38;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v56, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                      v24->fields.imageLimitCount,
                      0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v24->fields.dispLimitCount, 0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v24->fields.commandCardLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v24->fields.iconLimitCount, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v24->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v24, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v24, 0LL);
  if ( !v35 )
    goto LABEL_36;
  v45 = (char)limitCountSupport;
  commonFlag = v35[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v24->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                       v24->fields.randomLimitCount,
                       0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v24->fields.randomLimitCountSupport, 0LL);
  v50 = *(_QWORD *)&v24->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v60.fields.fakeValue = *(_QWORD *)&v24->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v49;
  *(_QWORD *)&v60.fields.currentCryptoKey = v50;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v60, 0LL);
  if ( !Request_object )
    goto LABEL_36;
  CardFavoriteRequest__beginRequest(
    Request_object,
    v53,
    imageLimitCount,
    v40,
    v41,
    v42,
    v43,
    1,
    IsLock,
    v45 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v54 == v39,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DE41E & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_48DE41E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DE41D & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_48DE41D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1B00F28(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_30451116(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48DE44F & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl__svtVoicePlayAct_d__341_TypeInfo, item);
    byte_48DE44F = 1;
  }
  v5 = sub_1B00F18(MyRoomControl__svtVoicePlayAct_d__341_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__341___ctor((MyRoomControl__svtVoicePlayAct_d__341_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B00F28(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = item;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)item, v10, v11);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  NetworkManager_c *v19; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x22

  if ( (byte_48DE420 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, assetName);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass236_0__voiceLoad_b__0__, v9);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass236_0_TypeInfo, v10);
    byte_48DE420 = 1;
  }
  v11 = sub_1B00F18(MyRoomControl___c__DisplayClass236_0_TypeInfo);
  MyRoomControl___c__DisplayClass236_0___ctor((MyRoomControl___c__DisplayClass236_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = endCallback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)endCallback, v16, v17);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_48DE49E )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v18);
    byte_48DE49E = 1;
  }
  v19 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  if ( !v19->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v21 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass236_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v21, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1B00F28(v12, v13);
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
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v12; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v14; // x21
  UIRect_o *height; // x0
  __int64 v16; // x1
  int v17; // w22
  int32_t activeHeight; // w0
  int32_t v19; // w26
  int32_t v20; // w23
  int v21; // w24
  int v22; // w22
  int v23; // w23
  int v24; // w8
  int v25; // w25
  int v26; // w0
  _BOOL4 IsOnlyServant_k__BackingField; // w26
  int v28; // w27
  int v29; // w24
  int v30; // w25
  int v31; // w27
  int32_t v32; // w0
  int v33; // w8
  UnityEngine_Color_array *Pixels_67964796; // x25
  UnityEngine_Texture2D_o *v35; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v37; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_48DE4B1 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Texture2D_TypeInfo, v3);
    sub_1B00CCC(&TouchEffectManager_TypeInfo, v4);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_48DE4B1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v12 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v14 = v12;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_35;
    v17 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_35;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v19 = this->fields.height;
    v20 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v21 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v14 )
      goto LABEL_35;
    v22 = v17 * width / v20;
    v23 = v21 * v19 / (int)height;
    v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v14->klass->vtable._4_get_width.method)(
            v14,
            v14->klass->vtable._5_set_width.methodPtr)
        - v22;
    v25 = v24 >= 0 ? v24 : v24 + 1;
    v26 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_height.method)(
            v14,
            v14->klass->vtable._7_set_height.methodPtr);
    IsOnlyServant_k__BackingField = _4__this->fields._IsOnlyServant_k__BackingField;
    v28 = v26 - v23 >= 0 ? v26 - v23 : v26 - v23 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v29 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    v30 = v25 >> 1;
    v31 = v28 >> 1;
    v32 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v33 = IsOnlyServant_k__BackingField ? 11 : 1;
    Pixels_67964796 = UnityEngine_Texture2D__GetPixels_67964796(v14, v30, v33 * v29 / v32 + v31, v22, v23, 0LL);
    v35 = (UnityEngine_Texture2D_o *)sub_1B00F18(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_67965920(v35, v22, v23, 3, 0, 0LL);
    if ( !v35 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_67967000(v35, Pixels_67964796, 0LL);
    UnityEngine_Texture2D__Apply_67967772(v35, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v35,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)v14, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v37 = 11.0;
    if ( !_4__this->fields._IsOnlyServant_k__BackingField )
      v37 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v37, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1B00F28(height, v16);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__CaptureServant_d__409_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_48DE4B2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_bool__TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__290_0__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_48DE4B2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1B00F28(Instance, v9);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v11, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__290_0__, 0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1B00F18(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v12, v14, v15);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  System_Collections_IEnumerator_o *v8; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  __int64 v14; // x1
  TerminalSceneComponent_c *v15; // x0
  struct TerminalSceneComponent_o *mInstance; // x20
  BackTaskAmountAdjuster_o *v17; // x20
  System_Collections_IEnumerator_o *v18; // x0

  v3 = this;
  if ( (byte_48DE4B3 & 1) == 0 )
  {
    sub_1B00CCC(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)sub_1B00CCC(&TerminalSceneComponent_TypeInfo, v6);
    byte_48DE4B3 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_25;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, v2);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_48DDF7C )
    {
      sub_1B00CCC(&TerminalSceneComponent_TypeInfo, v14);
      byte_48DDF7C = 1;
    }
    v15 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v15 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v15->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)UnityEngine_Object__op_Inequality(
                                                                 (UnityEngine_Object_o *)mInstance,
                                                                 0LL,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !mInstance )
        goto LABEL_25;
      this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)mInstance->fields.mTerminalMap;
      if ( !this )
        goto LABEL_25;
      ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)this, 0LL);
    }
    v17 = (BackTaskAmountAdjuster_o *)sub_1B00F18(BackTaskAmountAdjuster_TypeInfo);
    BackTaskAmountAdjuster___ctor(v17, 0LL);
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_25;
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                                 (MyRoomStateMaterial_o *)this,
                                                                 method);
    if ( !v17 )
      goto LABEL_25;
    v18 = BackTaskAmountAdjuster__Execute(v17, (System_Collections_IEnumerator_o *)this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)_4__this, v18, 0LL);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( this )
    {
      v8 = QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v8, v10, v11);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_25:
    sub_1B00F28(this, method);
  }
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__InitMaterialOnBackground_d__284_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v16; // w2
  int32_t v17; // w3
  BackTaskAmountAdjuster_o *v18; // x20
  System_Collections_IEnumerator_o *v19; // x0

  if ( (byte_48DE4B4 & 1) == 0 )
  {
    sub_1B00CCC(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v3);
    sub_1B00CCC(&Method_MyRoomControl__InitServantMenu_b__287_0__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, v7);
    byte_48DE4B4 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v18 = (BackTaskAmountAdjuster_o *)sub_1B00F18(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v18, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v11);
          if ( !v18 )
            goto LABEL_17;
          v19 = BackTaskAmountAdjuster__Execute(v18, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)_4__this, v19, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1B00F28(Instance, v11);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__287_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1B00F18(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v14, v16, v17);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__InitServantMenu_d__287_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  struct MyRoomControl___c__DisplayClass378_0_o **p__8__1; // x28
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x1
  struct StandFigureBack_array *v24; // x8
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct StandFigureBack_array *v28; // x8
  __int64 v29; // x19
  __int64 v30; // x22
  __int64 v31; // x21
  int v32; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v34; // x8
  const MethodInfo *v35; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v38; // w20
  int32_t v39; // w25
  int32_t Id; // w26
  int32_t Form; // w24
  int32_t v42; // w2
  int32_t v43; // w3
  struct ServantScriptMultipleEntity_array *v44; // x27
  ServantScriptMultipleEntity_o *v45; // x26
  struct StandFigureBack_array *v46; // x8
  struct MyRoomControl___c__DisplayClass378_0_o **v47; // x23
  struct MyRoomControl___c__DisplayClass378_0_o *v48; // x28
  StandFigureBack_o *v49; // x26
  System_Action_o *_9__3; // x27
  int32_t v51; // w2
  int32_t v52; // w3
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v55; // x19
  int max_length; // w9
  unsigned int v57; // w25
  struct StandFigureBack_array *v58; // x8
  UnityEngine_Component_o *v59; // x8
  UnityEngine_Component_o *v60; // x21
  float v61; // s2
  float v62; // s1
  float v63; // s8
  float v64; // s10
  float v65; // s9
  float v66; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v68; // x8
  float v69; // s10
  struct StandFigureBack_array *v70; // x9
  int v71; // s14
  int v72; // s15
  float v73; // s0
  float v74; // s2
  struct StandFigureBack_array *v75; // x8
  float v76; // s11
  float v77; // s12
  struct StandFigureBack_array *v78; // x8
  struct StandFigureBack_array *v79; // x8
  System_String_o *v80; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass378_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v84; // x22
  Il2CppObject *v85; // x20
  System_Func_bool__o *v86; // x21
  UnityEngine_WaitWhile_o *v87; // x20
  int32_t v88; // w2
  int32_t v89; // w3
  struct ServantScriptMultipleEntity_array *v90; // x8
  unsigned int v91; // w9
  ServantScriptMultipleEntity_o *v92; // x10
  ServantScriptMultipleEntity_o *v93; // x8
  Il2CppObject *v94; // x20
  System_Func_bool__o *v95; // x21
  UnityEngine_WaitWhile_o *v96; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  __int64 v99; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+10h] [xbp-C0h]
  MyRoomControl__LoadMultipleServant_d__378_o *v101; // [xsp+18h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  v101 = this;
  if ( (byte_48DE4B5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v2);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v4);
    sub_1B00CCC(&int___TypeInfo, v5);
    sub_1B00CCC(&ServantScriptMultipleEntity___TypeInfo, v6);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__0__, v7);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__1__, v8);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__2__, v9);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__3__, v10);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass378_0_TypeInfo, v11);
    sub_1B00CCC(&UIStandFigureRender_TypeInfo, v12);
    sub_1B00CCC(&UnityEngine_WaitWhile_TypeInfo, v13);
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B00CCC(&StringLiteral_6641/*"FinishedFadeMultipleServant"*/, v14);
    byte_48DE4B5 = 1;
  }
  entity = 0LL;
  _1__state = v101->fields.__1__state;
  _4__this = v101->fields.__4__this;
  if ( _1__state == 2 )
  {
    v101->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.titleInfo;
    if ( !this )
      goto LABEL_85;
    TitleInfoControl__changeTitleInfo_35993624((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
    v55 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v57 = v55 - 4;
      if ( (int)v55 - 4 >= max_length )
        return 0;
      if ( v57 >= max_length )
        goto LABEL_105;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v55);
      if ( !this )
        goto LABEL_85;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)StandFigureBack__GetSvtStandFigure(
                                                              (StandFigureBack_o *)this,
                                                              0,
                                                              0LL);
      if ( !this )
        goto LABEL_85;
      v58 = _4__this->fields.multipleStandFigureBacks;
      if ( !v58 )
        goto LABEL_85;
      if ( v57 >= v58->max_length )
        goto LABEL_105;
      v59 = (UnityEngine_Component_o *)*((_QWORD *)&v58->obj.klass + v55);
      if ( !v59 )
        goto LABEL_85;
      v60 = (UnityEngine_Component_o *)this->fields.__4__this;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(v59, 0LL);
      if ( !this )
        goto LABEL_85;
      *(UnityEngine_Vector3_o *)(&v61 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v63 = v62;
      v64 = (_DWORD)v55 == 4 ? -256.0 : 256.0;
      if ( !v60 )
        goto LABEL_85;
      v65 = v61;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(v60, 0LL);
      if ( !this )
        goto LABEL_85;
      LODWORD(v66) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      multipleEntities_5__2 = v101->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_85;
      if ( v57 >= multipleEntities_5__2->max_length )
        goto LABEL_105;
      v68 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v55);
      v69 = v64 - v66;
      if ( v68 )
      {
        v70 = _4__this->fields.multipleStandFigureBacks;
        if ( !v70 )
          goto LABEL_85;
        if ( v57 >= v70->max_length )
          goto LABEL_105;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v70->obj.klass + v55);
        if ( !this )
          goto LABEL_85;
        v71 = *(_DWORD *)(v68 + 28);
        v72 = *(_DWORD *)(v68 + 32);
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_85;
        *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v75 = _4__this->fields.multipleStandFigureBacks;
        if ( !v75 )
          goto LABEL_85;
        if ( v57 >= v75->max_length )
          goto LABEL_105;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v75->obj.klass + v55);
        if ( !this )
          goto LABEL_85;
        v76 = v73;
        v77 = v74;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_85;
        v63 = v63 + (float)v72;
        v69 = v69 + (float)v71;
        v104.fields.x = v76;
        v104.fields.y = v63;
        v104.fields.z = v77;
        v65 = v65 + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v104, 0LL);
      }
      v78 = _4__this->fields.multipleStandFigureBacks;
      if ( !v78 )
        goto LABEL_85;
      if ( v57 >= v78->max_length )
        goto LABEL_105;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v78->obj.klass + v55);
      if ( this )
      {
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v79 = _4__this->fields.multipleStandFigureBacks;
        if ( v79 )
        {
          v80 = v57 == v79->max_length - 1 ? (System_String_o *)StringLiteral_6641/*"FinishedFadeMultipleServant"*/ : 0LL;
          v105.fields.x = v69;
          v105.fields.y = v63;
          v105.fields.z = v65;
          MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v105, v80, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v55;
          if ( multipleStandFigureBacks )
            continue;
        }
      }
      goto LABEL_85;
    }
  }
  if ( _1__state == 1 )
  {
    _8__1 = v101->fields.__8__1;
    v101->fields.__1__state = -1;
    if ( _8__1 )
    {
      _8__1->fields.wait = 1;
      if ( _4__this )
      {
        multipleViewComponent = _4__this->fields.multipleViewComponent;
        v84 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          v84,
          (Il2CppObject *)_8__1,
          Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__1__,
          0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v84, 0LL);
          v85 = (Il2CppObject *)v101->fields.__8__1;
          v86 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v86,
            v85,
            Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__2__,
            0LL);
          v87 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v87, v86, 0LL);
          v101->fields.__2__current = (Il2CppObject *)v87;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v101->fields.__2__current, (int32_t)v87, v88, v89);
          v101->fields.__1__state = 2;
          return 1;
        }
      }
    }
    goto LABEL_85;
  }
  if ( _1__state )
    return 0;
  v101->fields.__1__state = -1;
  v17 = (Il2CppObject *)sub_1B00F18(MyRoomControl___c__DisplayClass378_0_TypeInfo);
  System_Object___ctor(v17, 0LL);
  v101->fields.__8__1 = (struct MyRoomControl___c__DisplayClass378_0_o *)v17;
  p__8__1 = &v101->fields.__8__1;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v101->fields.__8__1, (int32_t)v17, v19, v20);
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)v101->fields.__8__1;
  if ( !this )
    goto LABEL_85;
  v23 = (Il2CppObject *)v101->fields.__4__this;
  this->fields.__2__current = v23;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v23, v21, v22);
  if ( !_4__this )
    goto LABEL_85;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.mBlocker;
  if ( !this )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_85;
  (*p__8__1)->fields.loadedCount = 0;
  v24 = _4__this->fields.multipleStandFigureBacks;
  if ( !v24 )
    goto LABEL_85;
  v25 = sub_1B00D74(ServantScriptMultipleEntity___TypeInfo, v24->max_length);
  v101->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v25;
  p_multipleEntities_5__2 = &v101->fields._multipleEntities_5__2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v101->fields._multipleEntities_5__2, v25, v26, v27);
  v28 = _4__this->fields.multipleStandFigureBacks;
  if ( !v28 )
    goto LABEL_85;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 32LL;
  while ( 1 )
  {
    v32 = v28->max_length;
    if ( (int)v30 >= v32 )
      break;
    if ( (unsigned int)v30 >= v32 )
      goto LABEL_105;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)v28->m_Items[v30];
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_85;
    if ( (unsigned int)v30 >= defaultMultipleServantPoses->max_length )
      goto LABEL_105;
    if ( !this )
      goto LABEL_85;
    v34 = (float *)((char *)defaultMultipleServantPoses + v29);
    v103.fields.z = v34[10] + 0.0;
    v103.fields.y = v34[9] + 0.0;
    v103.fields.x = flt_B6FEF8[(_DWORD)v30 == 0] + v34[8];
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v103, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_85;
    if ( (unsigned int)v30 >= multipleServantUsrIds->max_length )
      goto LABEL_105;
    if ( !_4__this->fields.myRoomData )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            multipleServantUsrIds->m_Items[v30],
                                                            v35);
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_85;
    if ( (unsigned int)v30 >= multipleLimitCounts->max_length )
      goto LABEL_105;
    v38 = multipleLimitCounts->m_Items[v30 + 1];
    v39 = (int)this;
    Id = ServantScriptMaster__getId((int32_t)this, v38, 0LL);
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !this )
      goto LABEL_85;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                            (ServantScriptMultipleMaster_o *)this,
                                                            &entity,
                                                            Id,
                                                            Form,
                                                            v30 + 1,
                                                            0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v44 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_85;
      v45 = entity;
      if ( entity )
      {
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B00E08(entity, v44->obj.klass->_1.element_class);
        if ( !this )
        {
          v99 = sub_1B00F4C();
          sub_1B00DF4(v99, 0LL);
        }
      }
      if ( (unsigned int)v30 >= v44->max_length )
        goto LABEL_105;
      v44->m_Items[v30] = v45;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)((char *)v44 + v31), (int32_t)v45, v42, v43);
    }
    v46 = _4__this->fields.multipleStandFigureBacks;
    if ( !v46 )
      goto LABEL_85;
    if ( (unsigned int)v30 >= v46->max_length )
      goto LABEL_105;
    v47 = p__8__1;
    v48 = *p__8__1;
    if ( v48 )
    {
      v49 = v46->m_Items[v30];
      _9__3 = v48->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v48,
          Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__3__,
          0LL);
        v48->fields.__9__3 = _9__3;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v48->fields.__9__3, (int32_t)_9__3, v51, v52);
      }
      if ( v49 )
      {
        StandFigureBack__SetMyRoomStandFigure(v49, v39, v38, 1, 0, Form, 10, _9__3, 0, 0LL);
        v31 += 8LL;
        v28 = _4__this->fields.multipleStandFigureBacks;
        ++v30;
        v29 += 12LL;
        p__8__1 = v47;
        if ( v28 )
          continue;
      }
    }
    goto LABEL_85;
  }
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1B00D74(int___TypeInfo, 2LL);
  v90 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_85;
  v91 = v90->max_length;
  if ( !v91 )
    goto LABEL_105;
  v92 = v90->m_Items[0];
  if ( v92 )
  {
    if ( !this )
      goto LABEL_85;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_105;
    LODWORD(this->fields.__4__this) = v92->fields.depth;
  }
  if ( v91 <= 1 )
    goto LABEL_105;
  v93 = v90->m_Items[1];
  if ( !v93 )
  {
    if ( this )
      goto LABEL_103;
LABEL_85:
    sub_1B00F28(this, method);
  }
  if ( !this )
    goto LABEL_85;
  if ( LODWORD(this->fields.__2__current) <= 1 )
    goto LABEL_105;
  HIDWORD(this->fields.__4__this) = v93->fields.depth;
LABEL_103:
  if ( LODWORD(this->fields.__2__current) < 2 )
LABEL_105:
    sub_1B00F30(this, method);
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
    0LL);
  v94 = (Il2CppObject *)v101->fields.__8__1;
  v95 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v95, v94, Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__0__, 0LL);
  v96 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v96, v95, 0LL);
  v101->fields.__2__current = (Il2CppObject *)v96;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v101->fields.__2__current, (int32_t)v96, v97, v98);
  result = 1;
  v101->fields.__1__state = 1;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__LoadMultipleServant_d__378_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  struct MyRoomControl_o *v38; // x1
  const MethodInfo *v39; // x2
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v42; // w23
  int32_t Id; // w0
  int32_t v44; // w24
  bool v45; // w21
  int32_t Form; // w0
  int32_t v47; // w24
  int32_t photoCampaignType; // w27
  StandFigureBack_o *photoCampaignStandFigureBack; // x25
  Il2CppObject *_8__1; // x26
  System_Action_o *v51; // x20
  Il2CppObject *v52; // x20
  System_Func_bool__o *v53; // x22
  UnityEngine_WaitWhile_o *v54; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  struct MyRoomControl___c__DisplayClass400_0_o *v58; // x21
  System_Action_o *v59; // x22
  Il2CppObject *v60; // x20
  System_Func_bool__o *v61; // x21
  UnityEngine_WaitWhile_o *v62; // x20
  ServantStatusBattleListViewItem_o *v63; // x19
  int32_t v64; // w2
  int32_t v65; // w3
  int v66; // w8
  int32_t v67; // w2
  int32_t v68; // w3
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v69; // x1
  ServantStatusBattleListViewItem_o *p_photoCampaignFaceList; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  struct ServantPhotoEntity_FaceData_array *v73; // x8
  __int64 photoCampaignFaceListIndex; // x9
  struct ServantPhotoEntity_FaceData_o *v75; // x1
  ServantPhotoEntity_FaceData_o *faceData_5__4; // x21
  Il2CppObject *v77; // x22
  System_Action_o *v78; // x23
  Il2CppObject *v79; // x20
  System_Func_bool__o *v80; // x21
  UnityEngine_WaitWhile_o *v81; // x20
  int32_t v82; // w2
  int32_t v83; // w3
  struct ServantPhotoEntity_FaceData_o *v84; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl___c__DisplayClass400_0_o *v87; // x21
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v89; // x22
  Il2CppObject *v90; // x20
  System_Func_bool__o *v91; // x21
  UnityEngine_WaitWhile_o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v96; // x8
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x19
  struct StandFigureBack_o *v99; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  __int64 v102; // x21
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 *v105; // x24
  __int64 v106; // x0
  __int64 *v107; // x23
  int32_t v108; // w2
  int32_t v109; // w3
  __int64 v110; // x10
  unsigned __int64 v111; // x9
  unsigned __int64 v112; // x8
  __int64 v113; // x10
  __int64 v114; // x11
  __int64 v115; // x11
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v116; // x22
  int32_t v117; // w2
  int32_t v118; // w3
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v120; // x0
  System_Func_object__object__o *_9__400_4; // x22
  Il2CppObject *v122; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x0
  struct MyRoomControl___c__DisplayClass400_0_o *v128; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v129; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v131; // x23
  UIStandFigureR_o *v132; // x20
  System_Action_o *v133; // x22
  Il2CppObject *v134; // x20
  System_Func_bool__o *v135; // x21
  UnityEngine_WaitWhile_o *v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  __int64 v140; // x0
  float scale; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_48DE4B6 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantPhotoMaster___, v3);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_1B00CCC(&ServantPhotoEntity_FaceData___TypeInfo, v9);
    sub_1B00CCC(&ServantPhotoEntity_FaceData_TypeInfo, v10);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v11);
    sub_1B00CCC(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v12);
    sub_1B00CCC(&int___TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v14);
    sub_1B00CCC(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__400_4__, v15);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__0__, v16);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__10__, v17);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__1__, v18);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__2__, v19);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__3__, v20);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__5__, v21);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__6__, v22);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__7__, v23);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__8__, v24);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__9__, v25);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass400_0_TypeInfo, v26);
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v27);
    sub_1B00CCC(&UIStandFigureRender_TypeInfo, v28);
    sub_1B00CCC(&UnityEngine_WaitWhile_TypeInfo, v29);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B00CCC(&StringLiteral_6642/*"FinishedFadePhotoServant"*/, v30);
    byte_48DE4B6 = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v32 = (Il2CppObject *)sub_1B00F18(MyRoomControl___c__DisplayClass400_0_TypeInfo);
      System_Object___ctor(v32, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass400_0_o *)v32;
      p__8__1 = &v2->fields.__8__1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v32, v34, v35);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      v38 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v38;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v38, v36, v37);
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
      v143.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      v143.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v143.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x
                    + flt_B6F9A8[!_4__this->fields._IsMasterRight_k__BackingField];
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v143, 0LL);
      if ( !_4__this->fields.myRoomData )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)MyRoomData__getUsrSvtData(
                                                                   (MyRoomData_o *)this,
                                                                   _4__this->fields.photoCampaignServantUsrId,
                                                                   v39);
      if ( !this )
        goto LABEL_79;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
      photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
      v42 = SvtId;
      Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
      v2->fields._imageId_5__2 = Id;
      v44 = Id;
      if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      v45 = 1;
      Form = UIStandFigureRender__GetForm(v44, 1, -1, 0LL);
      v2->fields._formId_5__3 = Form;
      v47 = Form;
      _4__this->fields.photoCampaignServantImageId = v2->fields._imageId_5__2;
      photoCampaignType = _4__this->fields.photoCampaignType;
      photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
      _8__1 = (Il2CppObject *)v2->fields.__8__1;
      v51 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        _8__1,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_79;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v42,
        photoCampaignLimitCount,
        1,
        0,
        v47,
        10,
        v51,
        photoCampaignType == 1,
        0LL);
      v52 = (Il2CppObject *)v2->fields.__8__1;
      v53 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v53,
        v52,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__1__,
        0LL);
      v54 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v54, v53, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v54;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v54, v56, v57);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return v45;
    case 1:
      v58 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v58 )
        goto LABEL_79;
      v58->fields.flag = 1;
      v59 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v58,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__2__,
        0LL);
      if ( !_4__this )
        goto LABEL_79;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v59, 0LL);
      v60 = (Il2CppObject *)v2->fields.__8__1;
      v61 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v61,
        v60,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__3__,
        0LL);
      v62 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v62, v61, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v62;
      v63 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(v63, (int32_t)v62, v64, v65);
      v66 = 2;
      goto LABEL_77;
    case 2:
      v2->fields.__1__state = -1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   &entity,
                                                                   v2->fields._imageId_5__2,
                                                                   (const MethodInfo_2FE6C4C *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !_4__this )
          goto LABEL_79;
        v99 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v99 )
          goto LABEL_79;
        standFigureCollectList = v99->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_79;
        size = (unsigned int)standFigureCollectList->fields._size;
        v102 = sub_1B00F18(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v102, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B00D74(int___TypeInfo, (unsigned int)size);
        if ( !v102 )
          goto LABEL_79;
        *(_QWORD *)(v102 + 16) = this;
        v105 = (__int64 *)(v102 + 16);
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v102 + 16), (int32_t)this, v103, v104);
        v106 = sub_1B00D74(int___TypeInfo, (unsigned int)size);
        *(_QWORD *)(v102 + 24) = v106;
        v107 = (__int64 *)(v102 + 24);
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v102 + 24), v106, v108, v109);
        if ( (int)size < 1 )
        {
LABEL_63:
          this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B00D74(
                                                                       ServantPhotoEntity_FaceData___TypeInfo,
                                                                       1LL);
          if ( !this )
            goto LABEL_79;
          v116 = this;
          this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1B00E08(v102, this->klass->_1.element_class);
          if ( !this )
          {
            v140 = sub_1B00F4C();
            sub_1B00DF4(v140, 0LL);
          }
          if ( LODWORD(v116->fields.__2__current) )
          {
            v116->fields.__4__this = (struct MyRoomControl_o *)v102;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v116->fields.__4__this, v102, v117, v118);
            p_photoCampaignFaceList = (ServantStatusBattleListViewItem_o *)&_4__this->fields.photoCampaignFaceList;
            LODWORD(v69) = (_DWORD)v116;
            _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v116;
            goto LABEL_67;
          }
        }
        else
        {
          v110 = *v105;
          if ( !*v105 )
            goto LABEL_79;
          v111 = *(unsigned int *)(v110 + 24);
          v112 = 0LL;
          v113 = v110 + 32;
          while ( v112 < v111 )
          {
            *(_DWORD *)(v113 + 4 * v112) = 0;
            v114 = *v107;
            if ( !*v107 )
              goto LABEL_79;
            if ( v112 >= *(unsigned int *)(v114 + 24) )
              break;
            v115 = v114 + 4 * v112++;
            *(_DWORD *)(v115 + 32) = v2->fields._formId_5__3;
            if ( size == v112 )
              goto LABEL_63;
          }
        }
LABEL_80:
        sub_1B00F30(this, method);
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
      v69 = this;
      p_photoCampaignFaceList = (ServantStatusBattleListViewItem_o *)&_4__this->fields.photoCampaignFaceList;
      _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v69;
LABEL_67:
      sub_1B00C70(p_photoCampaignFaceList, (int32_t)v69, v67, v68);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v120 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v120 = MyRoomControl___c_TypeInfo;
      }
      _9__400_4 = (System_Func_object__object__o *)v120->static_fields->__9__400_4;
      if ( !_9__400_4 )
      {
        if ( !v120->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v120);
          v120 = MyRoomControl___c_TypeInfo;
        }
        v122 = (Il2CppObject *)v120->static_fields->__9;
        _9__400_4 = (System_Func_object__object__o *)sub_1B00F18(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__400_4,
          v122,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__400_4__,
          0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__400_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__400_4;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__400_4, (int32_t)_9__400_4, v124, v125);
      }
      v126 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                    photoCampaignFaceList,
                                                                    (System_Func_TSource__IEnumerable_TResult___o *)_9__400_4,
                                                                    (const MethodInfo_2D91F24 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v127 = System_Linq_Enumerable__Distinct_int_(
               v126,
               (const MethodInfo_2D7F6B8 *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v127,
                                                                   (const MethodInfo_2D9AD68 *)Method_System_Linq_Enumerable_ToList_int___);
      v128 = v2->fields.__8__1;
      if ( !v128 )
        goto LABEL_79;
      v128->fields.flag = 1;
      v129 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this
        || (SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL),
            v131 = (Il2CppObject *)v2->fields.__8__1,
            v132 = SvtStandFigure,
            v133 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
            System_Action___ctor(
              v133,
              v131,
              Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__5__,
              0LL),
            !v132) )
      {
LABEL_79:
        sub_1B00F28(this, method);
      }
      UIStandFigureR__PreloadFormAssets(v132, (System_Collections_Generic_List_int__o *)v129, v133, 0LL);
      v134 = (Il2CppObject *)v2->fields.__8__1;
      v135 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v135,
        v134,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__6__,
        0LL);
      v136 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v136, v135, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v136;
      v63 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(v63, (int32_t)v136, v137, v138);
      v66 = 3;
LABEL_77:
      *(_DWORD *)&v63[-1].fields.isMine = v66;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_79;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v73 = _4__this->fields.photoCampaignFaceList;
      if ( !v73 )
        goto LABEL_79;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v73->max_length )
        goto LABEL_80;
      v75 = v73->m_Items[photoCampaignFaceListIndex];
      v2->fields._faceData_5__4 = v75;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._faceData_5__4, (int32_t)v75, v71, v72);
      faceData_5__4 = v2->fields._faceData_5__4;
      v77 = (Il2CppObject *)v2->fields.__8__1;
      v78 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v78, v77, Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__7__, 0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, faceData_5__4, v78, 0LL);
      v79 = (Il2CppObject *)v2->fields.__8__1;
      v80 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v80,
        v79,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__8__,
        0LL);
      v81 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v81, v80, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v81;
      v63 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(v63, (int32_t)v81, v82, v83);
      v66 = 4;
      goto LABEL_77;
    case 4:
      v84 = v2->fields._faceData_5__4;
      v2->fields.__1__state = -1;
      if ( !v84 )
        goto LABEL_79;
      multiForm = v84->fields.multiForm;
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
      GameObjectExtensions__SetLocalScale_32537472(gameObject, scale, 0LL);
      v87 = v2->fields.__8__1;
      if ( !v87 )
        goto LABEL_79;
      v87->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v89 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(
        v89,
        (Il2CppObject *)v87,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__9__,
        0LL);
      if ( !photoCampaignComponent )
        goto LABEL_79;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v89, 0LL);
      v90 = (Il2CppObject *)v2->fields.__8__1;
      v91 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v91,
        v90,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__10__,
        0LL);
      v92 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v92, v91, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v92;
      v63 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(v63, (int32_t)v92, v93, v94);
      v66 = 5;
      goto LABEL_77;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_79;
      TitleInfoControl__changeTitleInfo_35993624((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
      v96 = _4__this->fields.titleInfo;
      if ( !v96 )
        goto LABEL_79;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v96->fields.headerBgImg;
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
      v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(_4__this, v97, v2->fields._svtMovePos_5__5, (System_String_o *)StringLiteral_6642/*"FinishedFadePhotoServant"*/, 0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_79;
      v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v98, PhotoCampaignMasterPosition, 0LL, 0LL);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__LoadPhotoCampaignServant_d__400_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  MyRoomControl__StartCameraEffect_d__411_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v11; // x22
  bool v12; // w21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_WaitForSeconds_o *v14; // x19
  ServantStatusBattleListViewItem_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  __int64 v19; // x1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x20

  v4 = this;
  if ( (byte_48DE4B7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    this = (MyRoomControl__StartCameraEffect_d__411_o *)sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    byte_48DE4B7 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
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
      v18 = 362;
    else
      v18 = 870;
    UIWidget__set_width((UIWidget_o *)this, v18, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_48DD9F1 )
    {
      sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v19);
      byte_48DD9F1 = 1;
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
      sub_1B00F28(this, method);
    }
    photoCampaignCameraEffect = (Il2CppObject *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = UnityEngine_Object__Instantiate_object__48061460(
            photoCampaignCameraEffect,
            transform,
            (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v25;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.photoCampaignInstantiateCameraEffect,
      (int32_t)v25,
      v26,
      v27);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1B00C70(p__2__current, 0, v2, v3);
    *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_34;
  this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_34;
  photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__48061460(
    photoCampaignShutterEffect,
    v11,
    (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignProduction;
  if ( !this )
    goto LABEL_34;
  v12 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__411_o *)_4__this->fields.photoCampaignFadeSprite;
  if ( !this )
    goto LABEL_34;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_object_(
    v13,
    (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v14 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v14, 0.066, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v14;
  v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B00C70(v15, (int32_t)v14, v16, v17);
  *(_DWORD *)&v15[-1].fields.isMine = 1;
  return v12;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__StartCameraEffect_d__411_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DE4A0 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomControl___c_TypeInfo, v1);
    byte_48DE4A0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)MyRoomControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__318_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DE4A3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DE4A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__238_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DE4A2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DE4A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__329_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DE4A4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_48DE4A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__400_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1B00F28(this, 0LL);
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

  if ( (byte_48DE4A1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DE4A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
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
    sub_1B00F28(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  MyRoomControl___c__DisplayClass240_0_o *v4; // x19
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22
  int32_t v14; // w2
  int32_t v15; // w3

  v4 = this;
  if ( (byte_48DE4A5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass240_0_o *)sub_1B00CCC(
                                                       &Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__1__,
                                                       v5);
    byte_48DE4A5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass240_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  standFigureCollectList = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  this[1].fields.__9__1 = standFigureCollectList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this[1].fields.__9__1, (int32_t)standFigureCollectList, v2, v3);
  this = (MyRoomControl___c__DisplayClass240_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[19].monitor, 0, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass240_0_o *)v9->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9->fields.isExistVoiceData, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass240_0_o *)v10->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v10->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass240_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].fields.end_act) )
    MyRoomControl__setNormalFace_30451116((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_20;
  favoriteChangeComp = v11->fields.favoriteChangeComp;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1B00F28(this, method);
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
  int32_t v10; // w2
  int32_t v11; // w3
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

  if ( (byte_48DE4A6 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__2__, v3);
    sub_1B00CCC(&StringLiteral_11079/*"ReleaseTouch"*/, v4);
    byte_48DE4A6 = 1;
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
      (System_String_o *)StringLiteral_11079/*"ReleaseTouch"*/,
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
            _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
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
    sub_1B00F28(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_30;
  v22->fields.isSvtLoading = 0;
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
    sub_1B00F28(_4__this, v3);
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
    sub_1B00F28(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  MyRoomControl___c__DisplayClass242_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct MyRoomControl_o *v15; // x8
  int end_act; // w8
  struct MyRoomControl_o *v17; // x8
  StandFigureBack_o *v18; // x20
  System_Action_o *_9__1; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct MyRoomControl_o *v22; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v24; // x8
  float v25; // s8
  int v26; // s1
  struct MyRoomControl_o *v27; // x8
  int v28; // s9
  int v29; // s2
  float v30; // s0
  int v31; // s1
  struct MyRoomControl_o *v32; // x8

  v4 = this;
  if ( (byte_48DE4A7 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__1__, v5);
    this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1B00CCC(&StringLiteral_11079/*"ReleaseTouch"*/, v6);
    byte_48DE4A7 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_46;
  standFigureCollectList = standFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this[2].monitor, (int32_t)standFigureCollectList, v2, v3);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v10->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v11->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v12->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v13->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v14->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v15->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass242_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[22].monitor) )
    MyRoomControl__setNormalFace_30451116((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass242_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  end_act = (int)this[21].fields.end_act;
  if ( end_act == 1 )
  {
    this = (MyRoomControl___c__DisplayClass242_0_o *)this[4].klass;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v22 = v4->fields.__4__this;
    if ( !v22 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)v22->fields.standFigureBack;
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
    v24 = v4->fields.__4__this;
    if ( !v24 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)v24->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v25 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v26 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v27 = v4->fields.__4__this;
    if ( !v27 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass242_0_o *)v27->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v28 = v26;
    this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v29 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass242_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v30 = -v25;
    v31 = v28;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].fields.__9__1,
      *(UnityEngine_Vector3_o *)(&v29 - 2),
      (System_String_o *)StringLiteral_11079/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !end_act )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v17 = v4->fields.__4__this;
    if ( v17 )
    {
      v18 = v17->fields.standFigureBack;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v4->fields.__9__1 = _9__1;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21);
      }
      if ( v18 )
      {
        StandFigureBack__Fadein(v18, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_1B00F28(this, method);
  }
  ActionExtensions__Call(v4->fields.end_act, 0LL);
  v32 = v4->fields.__4__this;
  if ( !v32 )
    goto LABEL_46;
  v32->fields.isSvtLoading = 0;
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
    sub_1B00F28(_4__this, v3);
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
  if ( (byte_48DE4A8 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass249_0_o *)sub_1B00CCC(&StringLiteral_8175/*"LOAD_END"*/, method);
    byte_48DE4A8 = 1;
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
    sub_1B00F28(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8175/*"LOAD_END"*/, 0LL);
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
    sub_1B00F28(this, method);
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

  if ( (byte_48DE4A9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DE4A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass341_0_o *v6; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  float v8; // s1
  float v9; // s2
  struct MyRoomControl_o *v10; // x8
  float v11; // s8
  float v12; // s9
  struct MyRoomControl_o *v13; // x8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
  if ( !bondsStandFigureBack )
    goto LABEL_14;
  v6 = this;
  this = (MyRoomControl___c__DisplayClass341_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = bondsStandFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this[2].monitor, (int32_t)standFigureCollectList, v2, v3);
  this = (MyRoomControl___c__DisplayClass341_0_o *)v6->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass341_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v10 = v6->fields.__4__this;
  if ( !v10 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass341_0_o *)v10->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v11 = v8;
  v12 = v9;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v13 = v6->fields.__4__this;
  if ( !v13
    || (this = (MyRoomControl___c__DisplayClass341_0_o *)v13->fields.bondsStandFigureBack) == 0LL
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
    sub_1B00F28(this, method);
  }
  v14.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v14.fields.y = v11;
  v14.fields.z = v12;
  GameObjectExtensions__SetLocalPosition(v6->fields.bondsSvtObj, v14, 0LL);
  v6->fields.createStandEnd = 1;
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
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(0LL, method);
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
  int32_t v3; // w3
  AssetData_o *v4; // x20
  MyRoomControl___c__DisplayClass393_0_o *v5; // x19
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
  struct MyRoomControl_o *_4__this; // x8
  Il2CppObject *Object_object__47470892; // x21
  Il2CppObject *Component_object; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct MyRoomControl_o *v29; // x8
  struct MyRoomControl_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  struct MyRoomControl_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  struct MyRoomControl_o *v36; // x25
  struct MyRoomControl_o *v37; // x8
  Il2CppObject *v38; // x21
  UnityEngine_Transform_o *transform; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  struct MyRoomControl_o *v42; // x8
  struct MyRoomControl_o *v43; // x21
  struct MyRoomControl_o *v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  struct MyRoomControl_o *v47; // x22
  struct MyRoomControl_o *v48; // x8
  Il2CppObject *v49; // x21
  UnityEngine_Transform_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct MyRoomControl_o *v53; // x8
  struct MyRoomControl_o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3

  v4 = assetData;
  v5 = this;
  if ( (byte_48DE4AA & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, assetData);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v6);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v7);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v8);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v10);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B00CCC(&StringLiteral_19991/*"img_bg_shutter"*/, v13);
    sub_1B00CCC(&StringLiteral_10555/*"Polaroid_img_frame_wide"*/, v14);
    sub_1B00CCC(&StringLiteral_8261/*"LayerChangeButton"*/, v15);
    sub_1B00CCC(&StringLiteral_10490/*"PhotoSettingButton"*/, v16);
    sub_1B00CCC(&StringLiteral_8797/*"MasterEquipSettingDialog"*/, v17);
    sub_1B00CCC(&StringLiteral_5333/*"DownloadPhotoCampaignAtlas"*/, v18);
    sub_1B00CCC(&StringLiteral_16974/*"bit_camera_shutter"*/, v19);
    sub_1B00CCC(&StringLiteral_16973/*"bit_camera_iconblink"*/, v20);
    sub_1B00CCC(&StringLiteral_10553/*"Polaroid_btn_shutter"*/, v21);
    sub_1B00CCC(&StringLiteral_10554/*"Polaroid_img_frame"*/, v22);
    this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1B00CCC(&StringLiteral_10491/*"PhotoTargetSelectDialog"*/, v23);
    byte_48DE4AA = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_42;
  _4__this->fields.photoCampaignAssetData = v4;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.photoCampaignAssetData,
    (int32_t)v4,
    (int32_t)method,
    v3);
  if ( !v4 )
    goto LABEL_42;
  Object_object__47470892 = AssetData__GetObject_object__47470892(
                              v4,
                              (System_String_o *)StringLiteral_5333/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__47470892,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__47470892 )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__47470892,
                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v29 = v5->fields.__4__this;
      if ( !v29 )
        goto LABEL_42;
      v29->fields.photoCampaignAtlas = (struct UIAtlas_o *)Component_object;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v29->fields.photoCampaignAtlas,
        (int32_t)Component_object,
        v27,
        v28);
    }
  }
  this = (MyRoomControl___c__DisplayClass393_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].monitor,
    (System_String_o *)StringLiteral_10554/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.__4__this,
    (System_String_o *)StringLiteral_10555/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.__4__this,
    (System_String_o *)StringLiteral_10553/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_19991/*"img_bg_shutter"*/,
    0LL);
  v30 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__47470892(
                                                     v4,
                                                     (System_String_o *)StringLiteral_16973/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  if ( !v30 )
    goto LABEL_42;
  v30->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v30->fields.photoCampaignCameraEffect, (int32_t)this, v31, v32);
  v33 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__47470892(
                                                     v4,
                                                     (System_String_o *)StringLiteral_16974/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  if ( !v33 )
    goto LABEL_42;
  v33->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v33->fields.photoCampaignShutterEffect, (int32_t)this, v34, v35);
  v36 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__47470892(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10491/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  v37 = v5->fields.__4__this;
  if ( !v37 )
    goto LABEL_42;
  v38 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v37->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__48061460(
                                                     v38,
                                                     transform,
                                                     (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v36 )
    goto LABEL_42;
  v36->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v36->fields.photoTargetSelectDialog, (int32_t)this, v40, v41);
  v42 = v5->fields.__4__this;
  if ( !v42 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v42->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_42;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v43 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__47470892(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10490/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  v44 = v5->fields.__4__this;
  if ( !v44 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__48061460(
                                                     (Il2CppObject *)this,
                                                     v44->fields.panelRoot,
                                                     (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v43 )
    goto LABEL_42;
  v43->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v43->fields.photoSettingButtonComponent, (int32_t)this, v45, v46);
  assetData = (AssetData_o *)v5->fields.__4__this;
  if ( !assetData )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)assetData[14].fields.name;
  if ( !this )
    goto LABEL_42;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v47 = v5->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__47470892(
                                                     v4,
                                                     (System_String_o *)StringLiteral_8797/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  v48 = v5->fields.__4__this;
  if ( !v48 )
    goto LABEL_42;
  v49 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v48->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__48061460(
                                                     v49,
                                                     v50,
                                                     (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v47 )
    goto LABEL_42;
  v47->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->fields.masterEquipSettingDialog, (int32_t)this, v51, v52);
  v53 = v5->fields.__4__this;
  if ( !v53
    || (this = (MyRoomControl___c__DisplayClass393_0_o *)v53->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v54 = v5->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__47470892(
                                                           v4,
                                                           (System_String_o *)StringLiteral_8261/*"LayerChangeButton"*/,
                                                           (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936),
        !v54)
    || (v54->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v54->fields.photoLayerChangeObj, (int32_t)this, v55, v56),
        (this = (MyRoomControl___c__DisplayClass393_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_42:
    sub_1B00F28(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v5->fields.callBack, 0LL);
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
  int32_t v3; // w3
  MyRoomControl___c__DisplayClass394_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v12; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v14; // x8
  struct MyRoomControl_o *v15; // x8
  struct EquipEntity_o *v16; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterMaleEquipTexture; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v5 = this;
  if ( (byte_48DE4AB & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1B00CCC(&AssetManager_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AssetData__Add__, v8);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1B00CCC(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v9);
    byte_48DE4AB = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass394_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v12 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v14[4] = (EquipEntity_c *)assetData;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)assetData, (int32_t)method, v3);
        }
        v15 = v5->fields.__4__this;
        if ( v15 )
        {
          v16 = v5->fields.equipEnt;
          if ( v16 )
          {
            masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v15->fields.masterMaleEquipTexture;
            v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v21.fields.currentCryptoKey = v19;
            *(_QWORD *)&v21.fields.fakeValue = v18;
            this = (MyRoomControl___c__DisplayClass394_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v21,
                                                               0LL);
            if ( assetData )
            {
              v20 = (int)this;
              this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2D45824 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v20,
                  (Il2CppObject *)this,
                  (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B00F28(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_36589816(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass394_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  MyRoomControl___c__DisplayClass394_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v12; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v14; // x8
  struct MyRoomControl_o *v15; // x8
  struct EquipEntity_o *v16; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterFemaleEquipTexture; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v5 = this;
  if ( (byte_48DE4AC & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1B00CCC(&AssetManager_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_AssetData__Add__, v8);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1B00CCC(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v9);
    byte_48DE4AC = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass394_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v12 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v14[4] = (EquipEntity_c *)assetData;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)assetData, (int32_t)method, v3);
        }
        v15 = v5->fields.__4__this;
        if ( v15 )
        {
          v16 = v5->fields.equipEnt;
          if ( v16 )
          {
            masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v15->fields.masterFemaleEquipTexture;
            v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v21.fields.currentCryptoKey = v19;
            *(_QWORD *)&v21.fields.fakeValue = v18;
            this = (MyRoomControl___c__DisplayClass394_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v21,
                                                               0LL);
            if ( assetData )
            {
              v20 = (int)this;
              this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2D45824 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v20,
                  (Il2CppObject *)this,
                  (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B00F28(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_36589816(assetData, 0LL);
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
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x21
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *data; // x20
  EventDelegate_Callback_o *v19; // x22
  EventDelegate_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  v2 = this;
  if ( (byte_48DE4AD & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_Callback_TypeInfo, method);
    sub_1B00CCC(&EventDelegate_TypeInfo, v3);
    sub_1B00CCC(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1B00CCC(&Method_MyRoomControl_OnClickPhotoServant__, v6);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v7);
    this = (MyRoomControl___c__DisplayClass400_0_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    byte_48DE4AD = 1;
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
  v12 = UnityEngine_Object__Instantiate_object__48061460(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       (UnityEngine_GameObject_o *)v12,
                       (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)Component_object;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.photoSvtTouchPress,
    (int32_t)Component_object,
    v14,
    v15);
  v16 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_17;
  klass = v16[84].klass;
  if ( !klass )
    goto LABEL_17;
  data = (System_Collections_Generic_List_object__o *)klass->_1.byval_arg.data;
  v19 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v19, v16, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL);
  v20 = (EventDelegate_o *)sub_1B00F18(EventDelegate_TypeInfo);
  EventDelegate___ctor_45649980(v20, v19, 0LL);
  if ( !data
    || (items = data->fields._items,
        v24 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++data->fields._version,
        !items) )
  {
LABEL_17:
    sub_1B00F28(this, method);
  }
  size = data->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      data,
      (Il2CppObject *)v20,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    data->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v20;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
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
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct MyRoomControl_o *v19; // x8
  struct MyRoomControl_o *v20; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x21
  void *monitor; // x8
  System_Collections_Generic_List_object__o *v29; // x20
  EventDelegate_Callback_o *v30; // x22
  EventDelegate_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_48DE4AE & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_Callback_TypeInfo, method);
    sub_1B00CCC(&EventDelegate_TypeInfo, v3);
    sub_1B00CCC(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___, v4);
    sub_1B00CCC(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1B00CCC(&Method_MyRoomControl_OnclickPhotoMaster__, v7);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v8);
    this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v9);
    byte_48DE4AE = 1;
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
  v38.fields.z = v11->fields.defaultPhotoServantPos.fields.z + 0.0;
  v38.fields.y = v11->fields.defaultPhotoServantPos.fields.y + 0.0;
  v38.fields.x = v11->fields.defaultPhotoServantPos.fields.x + flt_B6F8C8[!v11->fields._IsMasterRight_k__BackingField];
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v38, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v12->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32537472(gameObject, 0.9, 0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v14->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v15,
                       (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  v14->fields.photoMasterPanel = (struct UIPanel_o *)Component_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields.photoMasterPanel, (int32_t)Component_object, v17, v18);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v19->fields.photoMasterPanel;
  if ( !this )
    goto LABEL_26;
  UIPanel__set_depth((UIPanel_o *)this, 15, 0LL);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v20->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  photoLayerChangeObj = (Il2CppObject *)v20->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass401_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__Instantiate_object__48061460(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  v24 = GameObjectExtensions__SafeGetComponent_object_(
          (UnityEngine_GameObject_o *)v23,
          (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  v20->fields.photoMasterTouchPress = (struct UITouchPress_o *)v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v20->fields.photoMasterTouchPress, (int32_t)v24, v25, v26);
  v27 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_26;
  monitor = v27[84].monitor;
  if ( !monitor )
    goto LABEL_26;
  v29 = (System_Collections_Generic_List_object__o *)*((_QWORD *)monitor + 4);
  v30 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v30, v27, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL);
  v31 = (EventDelegate_o *)sub_1B00F18(EventDelegate_TypeInfo);
  EventDelegate___ctor_45649980(v31, v30, 0LL);
  if ( !v29
    || (items = v29->fields._items,
        v35 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v29->fields._version,
        !items) )
  {
LABEL_26:
    sub_1B00F28(this, method);
  }
  size = v29->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)v31,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v29->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v31;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
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
    sub_1B00F30(_4__this, method);
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
        GameObjectExtensions__SetLocalScale_32537472(v9, scale, 0LL),
        v10 = this->fields.__4__this,
        v12 = *(_QWORD *)&position.fields.x,
        !v10) )
  {
LABEL_11:
    sub_1B00F28(_4__this, method);
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
  if ( (byte_48DE4AF & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass424_0_o *)sub_1B00CCC(
                                                       &Method_MyRoomControl__ChangeMasterSetting_b__424_2__,
                                                       v3);
    byte_48DE4AF = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (UIMasterFigureTextureOld_o *)_4__this[81].monitor,
        genderType = v2->fields.genderType,
        equipId = v2->fields.equipId,
        v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(v8, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__424_2__, 0LL),
        !monitor) )
  {
    sub_1B00F28(this, method);
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
  if ( (byte_48DE4B0 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass425_0_o *)sub_1B00CCC(
                                                       &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                       v3);
    byte_48DE4B0 = 1;
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
  GameObjectExtensions__SetLocalScale_32537472(v7, v2->fields.svtMoveScale, 0LL);
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
  this = (MyRoomControl___c__DisplayClass425_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_15:
    sub_1B00F28(this, method);
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
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_48DE4B8 & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_bool__TypeInfo, method);
    sub_1B00CCC(&Method_MyRoomControl__initMaterial_b__285_0__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&UnityEngine_WaitUntil_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, v6);
    byte_48DE4B8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1B00F28(Instance, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v12, _4__this, Method_MyRoomControl__initMaterial_b__285_0__, 0LL);
  v13 = (UnityEngine_WaitUntil_o *)sub_1B00F18(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v13, v15, v16);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__initMaterial_d__285_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct MyRoomControl_o *v28; // x1
  CommonUI_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  bool result; // w0
  System_Collections_Generic_List_T__o *v38; // x21
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v43; // x22
  System_String_o *VoiceAssetName; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct MaterialEventLogListViewItem_Info_o *v51; // x8
  System_String_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_38502072; // x0
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  struct MaterialEventLogListViewItem_Info_o *v60; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_38501360; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct MyRoomControl___c__DisplayClass341_0_o *_8__1; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  struct MyRoomControl___c__DisplayClass341_0_o *v67; // x8
  struct MyRoomControl___c__DisplayClass341_0_o *v68; // x8
  struct MaterialEventLogListViewItem_Info_o *v69; // x8
  int32_t v70; // w22
  struct MaterialEventLogListViewItem_Info_o *v71; // x8
  int32_t v72; // w23
  int32_t voiceCondValue; // w24
  int32_t Form; // w23
  struct MyRoomControl_o *v75; // x8
  struct MyRoomControl_o *v76; // x8
  struct MaterialEventLogListViewItem_Info_o *v77; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  Il2CppObject *v80; // x26
  System_Action_o *v81; // x25
  struct MyRoomControl___c__DisplayClass341_0_o *v82; // x8
  __int64 v83; // x0
  ServantStatusBattleListViewItem_o *v84; // x19
  int32_t v85; // w2
  int32_t v86; // w3
  int v87; // w8
  __int64 v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w21
  MyRoomControl__svtVoicePlayAct_d__341_o *v92; // x22
  struct MyRoomControl_o *v93; // x8
  CommonUI_o *v94; // x21
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  CommonUI_o *v104; // x21
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  __int64 v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  struct MyRoomControl___c__DisplayClass341_0_o *v111; // x8
  CommonUI_o *v112; // x20
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  int v122; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_48DE4B9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v6);
    sub_1B00CCC(&char_TypeInfo, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v8);
    sub_1B00CCC(&int_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v14);
    sub_1B00CCC(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_1B00CCC(&Method_MyRoomControl___c__DisplayClass341_0__svtVoicePlayAct_b__0__, v19);
    sub_1B00CCC(&MyRoomControl___c__DisplayClass341_0_TypeInfo, v20);
    this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1B00CCC(&UIStandFigureRender_TypeInfo, v21);
    byte_48DE4B9 = 1;
  }
  _4__this = v5->fields.__4__this;
  switch ( v5->fields.__1__state )
  {
    case 0:
      v5->fields.__1__state = -1;
      v23 = (Il2CppObject *)sub_1B00F18(MyRoomControl___c__DisplayClass341_0_TypeInfo);
      System_Object___ctor(v23, 0LL);
      v5->fields.__8__1 = (struct MyRoomControl___c__DisplayClass341_0_o *)v23;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__8__1, (int32_t)v23, v24, v25);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v5->fields.__8__1;
      if ( !this )
        goto LABEL_129;
      v28 = v5->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v28;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v28, v26, v27);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v29 )
        goto LABEL_129;
      CommonUI__maskFadeout(v29, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v122 = 0;
        v33 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v30, v31, v32);
        v5->fields.__2__current = (Il2CppObject *)v33;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(p__2__current, v33, v35, v36);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
      v38 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v38,
        (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v38 )
        goto LABEL_129;
      items = v38->fields._items;
      v40 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v38->fields._version;
      if ( !items )
        goto LABEL_129;
      size = v38->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v38,
          81,
          *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
      v43 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v5->fields._voiceAssetName_5__2 = VoiceAssetName;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v5->fields._voiceAssetName_5__2,
        (int32_t)VoiceAssetName,
        v45,
        v46);
      v47 = (Il2CppObject *)System_Int32__ToString((int)v43 + 20, 0LL);
      LOWORD(v122) = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)j_il2cpp_value_box_0(char_TypeInfo, &v122, v48, v49, v50);
      v51 = v5->fields.item;
      if ( !v51 )
        goto LABEL_129;
      v52 = System_String__Concat_60336760(v47, (Il2CppObject *)this, (Il2CppObject *)v51->fields.voiceId, 0LL);
      v5->fields._playSvtVoiceId_5__3 = v52;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields._playSvtVoiceId_5__3, (int32_t)v52, v53, v54);
      v55 = v5->fields.item;
      if ( !v55 )
        goto LABEL_129;
      VoiceList_38502072 = ServantVoiceEntity__getVoiceList_38502072(
                             v43,
                             v55->fields.svtVoiceType,
                             v5->fields._playSvtVoiceId_5__3,
                             (System_Collections_Generic_List_CondType_Kind__o *)v38,
                             0,
                             0LL);
      v5->fields._svtVoiceDataList_5__4 = VoiceList_38502072;
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v5->fields._svtVoiceDataList_5__4;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v5->fields._svtVoiceDataList_5__4,
        (int32_t)VoiceList_38502072,
        v58,
        v59);
      if ( v5->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v60 = v5->fields.item;
      if ( !v60 )
        goto LABEL_129;
      VoiceList_38501360 = ServantVoiceEntity__getVoiceList_38501360(
                             v43,
                             v60->fields.svtVoiceType,
                             3,
                             v60->fields.voiceCondValue,
                             0LL,
                             -1,
                             0LL);
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)VoiceList_38501360;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v5->fields._svtVoiceDataList_5__4,
        (int32_t)VoiceList_38501360,
        v62,
        v63);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_8__1->fields.bondsSvtObj, (int32_t)this, v65, v66);
      v67 = v5->fields.__8__1;
      if ( !v67 )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v67->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v68 = v5->fields.__8__1;
      if ( !v68 )
        goto LABEL_129;
      v68->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
      v69 = v5->fields.item;
      if ( !v69 )
        goto LABEL_129;
      v70 = (int)this;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)ServantScriptMaster__getId(
                                                          v69->fields.svt_id,
                                                          (int32_t)this,
                                                          0LL);
      v71 = v5->fields.item;
      if ( !v71 )
        goto LABEL_129;
      v72 = (int)this;
      voiceCondValue = v71->fields.voiceCondValue;
      if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      Form = UIStandFigureRender__GetForm(v72, 1, voiceCondValue, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_62;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_129;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_130;
      v75 = this->fields.__4__this;
      if ( !v75 )
        goto LABEL_129;
      if ( !HIDWORD(v75->fields.myRoomListCtr) )
        goto LABEL_62;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_129;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_130:
        sub_1B00F30(this, method);
      v76 = this->fields.__4__this;
      if ( !v76 )
        goto LABEL_129;
      Form = (int32_t)v76->fields.myRoomListCtr;
LABEL_62:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_129;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v77 = v5->fields.item;
      if ( !v77 )
        goto LABEL_129;
      svt_id = v77->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v80 = (Il2CppObject *)v5->fields.__8__1;
      v81 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v81, v80, Method_MyRoomControl___c__DisplayClass341_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_129;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v70, 1, 0, Form, 10, v81, 0, 0LL);
LABEL_66:
      v82 = v5->fields.__8__1;
      if ( !v82 )
        goto LABEL_129;
      if ( !v82->fields.createStandEnd )
      {
        v122 = 0;
        v88 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v2, v3, v4);
        v5->fields.__2__current = (Il2CppObject *)v88;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, v88, v89, v90);
        v87 = 2;
        goto LABEL_128;
      }
      if ( !_4__this )
        goto LABEL_129;
      MyRoomControl__voiceLoad(_4__this, v5->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_70:
      if ( _4__this->fields.isVoiceLoading )
      {
        v122 = 0;
        v83 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v2, v3, v4);
        v5->fields.__2__current = (Il2CppObject *)v83;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, v83, v85, v86);
        v87 = 3;
        goto LABEL_128;
      }
      method = (const MethodInfo *)v5->fields._svtVoiceDataList_5__4;
      if ( !method )
        goto LABEL_129;
      if ( SLODWORD(method->name) >= 2 )
      {
        v91 = 0;
        while ( 1 )
        {
          this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v91,
                                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_129;
          v92 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_130;
          v93 = this->fields.__4__this;
          if ( !v93 )
            goto LABEL_129;
          this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_String__op_Equality(
                                                              *(System_String_o **)&v93->fields.m_CachedPtr,
                                                              v5->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          method = (const MethodInfo *)v5->fields._svtVoiceDataList_5__4;
          if ( !method )
            goto LABEL_129;
          if ( ++v91 >= SLODWORD(method->name) )
            goto LABEL_87;
        }
        this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_129;
        MyRoomSvtControl__setSvtVoice_30666588(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v92,
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
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v94 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v94 )
        goto LABEL_129;
      CommonUI__maskFadein(v94, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_93:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v122 = 0;
        v98 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v95, v96, v97);
        v5->fields.__2__current = (Il2CppObject *)v98;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, v98, v99, v100);
        v87 = 4;
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
        v122 = 0;
        v119 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v101, v102, v103);
        v5->fields.__2__current = (Il2CppObject *)v119;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, v119, v120, v121);
        v87 = 5;
        goto LABEL_128;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v104 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v104 )
        goto LABEL_129;
      CommonUI__maskFadeout(v104, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_104:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v122 = 0;
        v108 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v105, v106, v107);
        v5->fields.__2__current = (Il2CppObject *)v108;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, v108, v109, v110);
        v87 = 6;
        goto LABEL_128;
      }
      if ( !_4__this )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_129;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_129;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v5->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_129;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v111 = v5->fields.__8__1;
      if ( !v111 )
        goto LABEL_129;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v111->fields.bondsSvtObj;
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
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v112 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v112 )
        goto LABEL_129;
      CommonUI__maskFadein(v112, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_123:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_129:
        sub_1B00F28(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v122 = 0;
      v116 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v113, v114, v115);
      v5->fields.__2__current = (Il2CppObject *)v116;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, v116, v117, v118);
      v87 = 7;
LABEL_128:
      *(_DWORD *)&v84[-1].fields.isMine = v87;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomControl__svtVoicePlayAct_d__341_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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