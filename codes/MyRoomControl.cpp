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

  if ( (byte_40FC0C5 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2544, v8);
    byte_40FC0C5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2544;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2544;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MyRoomStateMaterial_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_int__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w8
  __int64 v49; // x2
  struct System_Int64_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x2
  struct System_Int32_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_40FC0C4 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&MyRoomStateMaterial_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v10);
    byte_40FC0C4 = 1;
  }
  *(_OWORD *)&this->fields.photoFrameWidth = xmmword_3137C80;
  this->fields.photoFramePosY = 11.0;
  v11 = (MyRoomStateMaterial_o *)sub_B170CC(MyRoomStateMaterial_TypeInfo, method, v2, v3, v4);
  MyRoomStateMaterial___ctor(v11, 0LL);
  this->fields.mStateMaterial = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mStateMaterial,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialImageIdList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v41 = sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v40);
  if ( !v41 )
    sub_B170D4();
  v48 = *(_DWORD *)(v41 + 24);
  if ( !v48 || (*(_DWORD *)(v41 + 40) = 0, *(_QWORD *)(v41 + 32) = 0x43900000C4000000LL, v48 == 1) )
  {
    sub_B17100(v41, v41, v42);
    sub_B170A0();
  }
  *(_DWORD *)(v41 + 52) = 0;
  *(_QWORD *)(v41 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defaultMultipleServantPoses,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.voicePlayButtonDefaultPos = UnityEngine_Vector3__get_zero(0LL);
  this->fields.multipleViewFinishedTime = -1LL;
  v50 = (struct System_Int64_array *)sub_B17014(long___TypeInfo, 2LL, v49);
  this->fields.multipleServantUsrIds = v50;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v58 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v57);
  this->fields.multipleLimitCounts = v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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
  int v8; // s0
  UIWidget_o *helpButtonImg; // x20
  int v13; // s0
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t v21; // w0
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v24; // s0
  MyRoomControl_c *v28; // x0
  UnityEngine_GameObject_o *mBlocker; // x0
  UnityEngine_Collider_o *maskBoxCollider; // x0
  SoundPlayerComponent_o *soundPlayerComp; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FC096 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B16FFC(&MyRoomControl_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_40FC096 = 1;
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
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    goto LABEL_28;
  v20 = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v19 = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v20;
  *(_QWORD *)&v32.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_28;
    v21 = materialImageIdList->fields._size - 1;
  }
  if ( v21 >= 1 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_28;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v24, 0LL);
    v28 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v28 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v28->static_fields->BUTTON_LIMIT_CHANGE;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_28:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  if ( this->fields.type == 10 )
  {
    soundPlayerComp = this->fields.soundPlayerComp;
    if ( soundPlayerComp )
    {
      SoundPlayerComponent__SetEnableBlockTouch(soundPlayerComp, 1, 0LL);
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

  if ( (byte_40FC0BD & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40FC0BD = 1;
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC0B8 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__CaptureServant_d__350_TypeInfo, *(_QWORD *)&width);
    byte_40FC0B8 = 1;
  }
  v8 = sub_B170CC(MyRoomControl__CaptureServant_d__350_TypeInfo, *(_QWORD *)&width, *(_QWORD *)&height, method, v4);
  MyRoomControl__CaptureServant_d__350___ctor((MyRoomControl__CaptureServant_d__350_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 32) = width;
  *(_DWORD *)(v8 + 48) = height;
  return (System_Collections_IEnumerator_o *)v8;
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
  StandFigureBack_o *standFigureBack; // x0
  UIStandFigureR_o *SvtStandFigure; // x0
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int v20; // s0
  UnityEngine_GameObject_o *svtObj; // x0
  float v22; // s9
  UnityEngine_Transform_o *v23; // x0
  float v24; // s1
  UnityEngine_GameObject_o *v25; // x0
  float v26; // s8
  UnityEngine_Transform_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  float v30; // s2
  float v31; // s10
  MyRoomControl_o *v32; // x0
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  UnityEngine_GameObject_o *sortWindowObj; // x0
  float v36; // s9
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  int32_t v39; // w8
  StandFigureBack_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x21
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v47; // x3
  MyRoomControl_c *v48; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  UnityEngine_GameObject_o *changeDispTouch; // x0
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  StandFigureBack_o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Action_o *v63; // x21
  TitleInfoControl_o *v64; // x0
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  UnityEngine_GameObject_o *v71; // x0
  const MethodInfo *v72; // x1
  UnityEngine_Component_o *soundPlayerComp; // x0
  UnityEngine_Vector3_o movePos; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC093 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isSePlay);
    sub_B16FFC(&Method_MyRoomControl__ChangeDisp_b__291_0__, v6);
    sub_B16FFC(&Method_MyRoomControl__ChangeDisp_b__291_1__, v7);
    sub_B16FFC(&MyRoomControl_TypeInfo, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_11353, v10);
    byte_40FC093 = 1;
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
    goto LABEL_56;
  v11 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v11->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v11->static_fields->BUTTON_DISP_CHANGE) == 0) )
  {
LABEL_56:
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
          goto LABEL_53;
        gameObject = UnityEngine_Component__get_gameObject(soundPlayerComp, 0LL);
        moveTarget = gameObject;
LABEL_16:
        MyRoomControl__setupServantListUIMoveData(
          (MyRoomControl_o *)gameObject,
          this->fields.servantListObj,
          &LocalPosition,
          &movePos,
          v15);
        standFigureBack = this->fields.standFigureBack;
        if ( !standFigureBack )
          goto LABEL_53;
        SvtStandFigure = StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
        if ( !SvtStandFigure )
          goto LABEL_53;
        bodyTexture = (UnityEngine_Component_o *)SvtStandFigure->fields.bodyTexture;
        if ( !bodyTexture )
          goto LABEL_53;
        transform = UnityEngine_Component__get_transform(bodyTexture, 0LL);
        if ( !transform )
          goto LABEL_53;
        v20 = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
        svtObj = this->fields.svtObj;
        if ( !svtObj
          || (v22 = *(float *)&v20, (v23 = UnityEngine_GameObject__get_transform(svtObj, 0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v24 - 1) = UnityEngine_Transform__get_localPosition(v23, 0LL),
              (v25 = this->fields.svtObj) == 0LL)
          || (v26 = v24, (v27 = UnityEngine_GameObject__get_transform(v25, 0LL)) == 0LL) )
        {
LABEL_53:
          sub_B170D4();
        }
        *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(v27, 0LL);
        switch ( this->fields.mState )
        {
          case 0:
            v31 = v30;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v29);
            MyRoomControl__setupSortWindowUIMoveData(
              v32,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v33);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, movePos, v34);
            sortWindowObj = this->fields.sortWindowObj;
            if ( !sortWindowObj )
              goto LABEL_53;
            v36 = -v22;
            if ( UnityEngine_GameObject__get_activeSelf(sortWindowObj, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v37);
            v79.fields.x = v36;
            v79.fields.y = v26;
            v79.fields.z = v31;
            MyRoomControl__moveControl(this, this->fields.svtObj, v79, (System_String_o *)StringLiteral_11353, v38);
            v39 = 1;
            break;
          case 1:
            titleInfo = this->fields.titleInfo;
            if ( !titleInfo )
              goto LABEL_53;
            TitleInfoControl__FrameOut(titleInfo, 0, 0LL);
            MainMenuBar__FrameOut(0, 0LL);
            v48 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v48 = MyRoomControl_TypeInfo;
            }
            v80.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v80.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v80.fields.x = v48->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v80, 0LL, v47);
            v81.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v81.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v81.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v81, 0LL, v50);
            v82.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v82.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v82.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v82, 0LL, v51);
            v83.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v83.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v83.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v83, 0LL, v52);
            v84.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v84.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v84.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v84, (System_String_o *)StringLiteral_11353, v53);
            v85.fields.y = this->fields.helpBtnInitPos.fields.y;
            v85.fields.z = this->fields.helpBtnInitPos.fields.z;
            v85.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v85, 0LL, v54);
            changeDispTouch = this->fields.changeDispTouch;
            if ( !changeDispTouch )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive(changeDispTouch, 1, 0LL);
            v39 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v28);
            v40 = this->fields.standFigureBack;
            v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
            System_Action___ctor(v45, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__291_0__, 0LL);
            if ( !v40 )
              goto LABEL_53;
            StandFigureBack__Fadeout(v40, v45, 0LL);
            v39 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v29);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v56);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v57);
            v58 = this->fields.standFigureBack;
            v63 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v59, v60, v61, v62);
            System_Action___ctor(v63, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__291_1__, 0LL);
            if ( !v58 )
              goto LABEL_53;
            StandFigureBack__Fadein(v58, v63, 0LL);
            v64 = this->fields.titleInfo;
            if ( !v64 )
              goto LABEL_53;
            TitleInfoControl__FrameIn(v64, 0, 0LL);
            MainMenuBar__FrameIn(0, 0LL);
            MyRoomControl__moveControl(
              this,
              this->fields.multipleViewButton,
              this->fields.multipleViewButtonInitPos,
              0LL,
              v65);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v66);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v67);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v68);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v69);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v70);
            v71 = this->fields.changeDispTouch;
            if ( !v71 )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive(v71, 0, 0LL);
            v39 = 0;
            break;
          default:
            goto LABEL_48;
        }
        this->fields.mState = v39;
LABEL_48:
        MyRoomControl__SetMultipleViewButtonColor(this, v28);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v72);
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
  int v6; // s0
  MyRoomControl_c *v10; // x0
  int32_t buttonFlag; // w9
  UIWidget_o *changeBtnImg; // x21
  int32_t BUTTON_VOICE_PLAY; // w8
  int v14; // w10
  int v15; // w8
  int v16; // s0
  MyRoomControl_c *v20; // x0
  int32_t v21; // w9
  UIWidget_o *changeBGBtnImg; // x21
  int32_t BUTTON_LIMIT_CHANGE; // w8
  int v24; // w10
  int v25; // w8
  int v26; // s0
  MyRoomControl_c *v30; // x0
  int32_t v31; // w9
  int32_t BUTTON_DISP_CHANGE; // w8
  int v33; // w10
  int v34; // w8

  if ( (byte_40FC09A & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, isSet);
    byte_40FC09A = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
    if ( !playBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v6, 0LL);
  v10 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v10 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
  BUTTON_VOICE_PLAY = v10->static_fields->BUTTON_VOICE_PLAY;
  v14 = buttonFlag & ~BUTTON_VOICE_PLAY;
  v15 = buttonFlag | BUTTON_VOICE_PLAY;
  if ( !isSet )
    v15 = v14;
  this->fields.buttonFlag = v15;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  else
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v16, 0LL);
  v20 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v20 = MyRoomControl_TypeInfo;
  }
  v21 = this->fields.buttonFlag;
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  BUTTON_LIMIT_CHANGE = v20->static_fields->BUTTON_LIMIT_CHANGE;
  v24 = v21 & ~BUTTON_LIMIT_CHANGE;
  v25 = v21 | BUTTON_LIMIT_CHANGE;
  if ( !isSet )
    v25 = v24;
  this->fields.buttonFlag = v25;
  if ( isSet )
  {
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
    if ( !changeBGBtnImg )
LABEL_31:
      sub_B170D4();
  }
  else
  {
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
    if ( !changeBGBtnImg )
      goto LABEL_31;
  }
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v26, 0LL);
  v30 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v30 = MyRoomControl_TypeInfo;
  }
  v31 = this->fields.buttonFlag;
  BUTTON_DISP_CHANGE = v30->static_fields->BUTTON_DISP_CHANGE;
  v33 = v31 & ~BUTTON_DISP_CHANGE;
  v34 = v31 | BUTTON_DISP_CHANGE;
  if ( !isSet )
    v34 = v33;
  this->fields.buttonFlag = v34;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeSetStandFigureObj(
        MyRoomControl_o *this,
        bool isSet,
        bool isTouch,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  UnityEngine_Component_o *SvtStandFigure; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *svtClickCollider; // x0

  if ( (byte_40FC099 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isSet);
    byte_40FC099 = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_13;
  SvtStandFigure = (UnityEngine_Component_o *)StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SvtStandFigure, 0LL, 0LL) )
  {
    if ( SvtStandFigure )
    {
      gameObject = UnityEngine_Component__get_gameObject(SvtStandFigure, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, isSet, 0LL);
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_11:
  svtClickCollider = (UnityEngine_Collider_o *)this->fields.svtClickCollider;
  if ( !svtClickCollider )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(svtClickCollider, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v7; // x0
  bool v8; // w0
  __int64 *v9; // x9
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *v11; // x1

  if ( (byte_40FC09F & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3056, v3);
    sub_B16FFC(&StringLiteral_6864, v4);
    byte_40FC09F = 1;
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v11 = (System_String_o *)StringLiteral_6864;
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  name = sceneJumpInfo->fields.name;
  v7 = MyRoomRootComponent_TypeInfo;
  if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v7 = MyRoomRootComponent_TypeInfo;
  }
  v8 = System_String__op_Equality(name, v7->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_15;
  if ( v8 )
    v9 = &StringLiteral_3056;
  else
    v9 = &StringLiteral_6864;
  v11 = (System_String_o *)*v9;
  myRoomFsm = this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent(myRoomFsm, v11, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_40FC0AC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__CloseMultipleView_b__336_0__, v3);
    byte_40FC0AC = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__336_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v9, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int max_length; // w9
  il2cpp_array_size_t v12; // w24
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x10
  UnityEngine_Component_o *v14; // x0
  float y; // s10
  float x; // s11
  UnityEngine_Transform_o *transform; // x0
  float v18; // s1
  struct StandFigureBack_array *v19; // x8
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x3
  struct StandFigureBack_array *v24; // x8
  System_String_o *v25; // x2
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC0AA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6662, method);
    byte_40FC0AA = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  v9 = 0LL;
  v10 = 4LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      break;
    defaultMultipleServantPoses = this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_20;
    if ( v12 >= defaultMultipleServantPoses->max_length || v12 >= max_length )
    {
LABEL_22:
      sub_B17100(v5, v6, v7);
      sub_B170A0();
    }
    v14 = (UnityEngine_Component_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v10);
    if ( v14 )
    {
      y = defaultMultipleServantPoses->m_Items[v9].fields.y;
      x = defaultMultipleServantPoses->m_Items[v9 + 1].fields.x;
      transform = UnityEngine_Component__get_transform(v14, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
        v19 = this->fields.multipleStandFigureBacks;
        if ( v19 )
        {
          if ( v12 >= v19->max_length )
            goto LABEL_22;
          v20 = (UnityEngine_Component_o *)*((_QWORD *)&v19->obj.klass + v10);
          if ( v20 )
          {
            v21 = v18;
            gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
            v24 = this->fields.multipleStandFigureBacks;
            if ( v24 )
            {
              v25 = v12 == v24->max_length - 1 ? (System_String_o *)StringLiteral_6662 : 0LL;
              v26.fields.y = v21;
              v26.fields.x = flt_3137B90[(_DWORD)v10 == 4] + y;
              v26.fields.z = x + 0.0;
              MyRoomControl__moveControl(this, gameObject, v26, v25, v23);
              multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
              ++v10;
              ++v9;
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
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_40FC0C0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_0__, v4);
    byte_40FC0C0 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v9, 0, v10);
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

  if ( (byte_40FC0BE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6663, method);
    byte_40FC0BE = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    sub_B170D4();
  v5 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v6 = this->fields.currentPhotoServantPos.fields.x + -1300.0;
  v7 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v10.fields.x = v6;
  v10.fields.y = v5;
  v10.fields.z = v7;
  MyRoomControl__moveControl(this, gameObject, v10, (System_String_o *)StringLiteral_6663, v9);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FC088 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_TypeInfo, setEndAction);
    byte_40FC088 = 1;
  }
  v7 = sub_B170CC(MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_TypeInfo, setEndAction, method, v3, v4);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__253___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = setEndAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)setEndAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


CRIMoviePlayer_o *__fastcall MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_40FC09C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_B16FFC(&StringLiteral_3423, v5);
    byte_40FC09C = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_3423,
                                                        (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     UIAtlas,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_B170D4();
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v7,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
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
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  StandFigureBack_o *v31; // x21
  System_Action_o *v32; // x23
  MyRoomFrontObjectManager_o *v33; // x0
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v35; // x23
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x0
  UnityEngine_GameObject_o *photoCampaignButton; // x0
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x4
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Component_o *soundPlayerComp; // x0
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40FC0AB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDispDefault);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__0__, v9);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__1__, v10);
    sub_B16FFC(&MyRoomControl___c__DisplayClass334_0_TypeInfo, v11);
    byte_40FC0AB = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = sub_B170CC(MyRoomControl___c__DisplayClass334_0_TypeInfo, isDispDefault, callback, isFadein, method);
  MyRoomControl___c__DisplayClass334_0___ctor((MyRoomControl___c__DisplayClass334_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_29;
  *(_QWORD *)(v12 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  MyRoomControl__stopSvtVoice(this, v25);
  MyRoomControl__BlockTouch(this, v26);
  if ( !isDispDefault )
  {
    standFigureBack = this->fields.standFigureBack;
    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v12,
      Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__1__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadeout(standFigureBack, v35, 0LL);
      frontObjectManager = this->fields.frontObjectManager;
      if ( frontObjectManager )
      {
        MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
        goto LABEL_13;
      }
    }
LABEL_29:
    sub_B170D4();
  }
  if ( isFadein )
  {
    v31 = this->fields.standFigureBack;
    v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v12,
      Method_MyRoomControl___c__DisplayClass334_0__DispDefaultMyRoom_b__0__,
      0LL);
    if ( !v31 )
      goto LABEL_29;
    StandFigureBack__Fadein(v31, v32, 0LL);
  }
  v33 = this->fields.frontObjectManager;
  if ( !v33 )
    goto LABEL_29;
  MyRoomFrontObjectManager__FrameIn(v33, 0LL);
LABEL_13:
  MainMenuBar__setMenuActive(isDispDefault, 0LL, 0LL);
  voicePlayBtn = this->fields.voicePlayBtn;
  if ( !voicePlayBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(voicePlayBtn, isDispDefault, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  if ( !moveBtnObj )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(moveBtnObj, isDispDefault, 0LL);
  changeLimitBtn = this->fields.changeLimitBtn;
  if ( !changeLimitBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(changeLimitBtn, isDispDefault, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, isDispDefault, 0LL);
  multipleViewButton = this->fields.multipleViewButton;
  if ( !multipleViewButton )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(multipleViewButton, isDispDefault, 0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  if ( !photoCampaignButton )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(photoCampaignButton, isDispDefault, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v46);
      mMainObj = moveTarget;
      goto LABEL_21;
    case 6:
      mMainObj = this->fields.noticeObj;
      moveTarget = mMainObj;
      if ( !isDispDefault )
        goto LABEL_27;
      goto LABEL_22;
    case 0xA:
      soundPlayerComp = (UnityEngine_Component_o *)this->fields.soundPlayerComp;
      if ( !soundPlayerComp )
        goto LABEL_29;
      mMainObj = UnityEngine_Component__get_gameObject(soundPlayerComp, 0LL);
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
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v45);
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

  if ( (byte_40FC0B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, usrSvtId);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    byte_40FC0B5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B170D4();
  MissionNotifyManager__StartPause(v8, 0LL);
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v9; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v11; // x1
  MyRoomSvtControl_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  MyRoomControl___c_c *v19; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__201_0; // x21
  Il2CppObject *v23; // x22
  struct MyRoomControl___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC06C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_MyRoomControl___c__EndLoad_b__201_0__, v5);
    sub_B16FFC(&MyRoomControl___c_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8378, v7);
    byte_40FC06C = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_23;
  MyRoomSvtControl__setSvtVoice(svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v9);
  if ( SvtVoiceEnt )
  {
    v11 = SvtVoiceEnt;
    v12 = this->fields.svtCtr;
    if ( !v12 )
      goto LABEL_23;
    MyRoomSvtControl__initFirstPlayVoiceList(v12, v11, 0LL);
  }
  if ( !this->fields.sceneJumpInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    v19 = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      v19 = MyRoomControl___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__201_0 = static_fields->__9__201_0;
    if ( !_9__201_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__201_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
      System_Action___ctor(_9__201_0, v23, Method_MyRoomControl___c__EndLoad_b__201_0__, 0LL);
      v24 = MyRoomControl___c_TypeInfo->static_fields;
      v24->__9__201_0 = _9__201_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v24->__9__201_0,
        (System_Int32_array **)_9__201_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__201_0, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_21:
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_23;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8378, 0LL);
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
  CommonUI_o *Instance; // x19

  if ( (byte_40FC0A0 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40FC0A0 = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.sceneJumpInfo, 0LL, v2, v3, v4, v5, v6, v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !Instance )
      sub_B170D4();
    CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_B170D4();
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__FingerGestures_OnGestureEvent(
        MyRoomControl_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *startSelection; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x10

  if ( (byte_40FC09E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, gesture);
    sub_B16FFC(&SwipeGesture_TypeInfo, v5);
    byte_40FC09E = 1;
  }
  if ( !gesture )
    sub_B170D4();
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
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL) )
    {
      v8 = *(&SwipeGesture_TypeInfo->_2.bitflags2 + 1);
      if ( *(&gesture->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[v8 - 1] == SwipeGesture_TypeInfo )
      {
        if ( (this->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(this, 0, v7);
        if ( this->fields.multipleViewState == 3 )
        {
          this->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(this, 1, v7);
        }
      }
    }
  }
}


void __fastcall MyRoomControl__FinishedCloseFullScreenPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  struct UISprite_o *photoCampaignBackGroundSprite; // x0
  struct UISprite_o *photoCampaignFadeSprite; // x0
  const MethodInfo *v6; // x2

  photoCampaignProduction = this->fields.photoCampaignProduction;
  if ( !photoCampaignProduction
    || (UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0LL),
        (photoCampaignBackGroundSprite = this->fields.photoCampaignBackGroundSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))photoCampaignBackGroundSprite->klass->vtable._8_set_alpha.method)(
          photoCampaignBackGroundSprite,
          photoCampaignBackGroundSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        (photoCampaignFadeSprite = this->fields.photoCampaignFadeSprite) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))photoCampaignFadeSprite->klass->vtable._8_set_alpha.method)(
    photoCampaignFadeSprite,
    photoCampaignFadeSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  MyRoomControl__SetBackButtonIgnore(this, 0, v6);
}


void __fastcall MyRoomControl__FinishedCloseMultiServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v8; // x20
  int max_length; // w9
  StandFigureBack_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  TitleInfoControl_o *titleInfo; // x0
  MultipleViewComponent_o *multipleViewComponent; // x0
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *mBlocker; // x0

  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    v10 = multipleStandFigureBacks->m_Items[v8];
    if ( v10 )
    {
      StandFigureBack__Init(v10, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v8;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_8;
  }
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v6);
  v11 = this->fields.multipleViewCloseButton;
  if ( !v11
    || (UnityEngine_GameObject__SetActive(v11, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL), (multipleViewComponent = this->fields.multipleViewComponent) == 0LL)
    || (MultipleViewComponent__Open(multipleViewComponent, 0, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 0, v14),
        (mBlocker = this->fields.mBlocker) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  UnityEngine_Component_o *headerBgImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoControl_o *v9; // x0
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  MissionNotifyManager_o *v22; // x0
  TitleInfoControl_o *v23; // x0
  PhotoCampaignComponent_o *photoCampaignComponent; // x0
  const MethodInfo *v25; // x2

  if ( (byte_40FC0BF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_40FC0BF = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_21;
  StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_21;
  headerBgImg = (UnityEngine_Component_o *)titleInfo->fields.headerBgImg;
  if ( !headerBgImg )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(headerBgImg, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v9 = this->fields.titleInfo;
  if ( !v9 )
    goto LABEL_21;
  TitleInfoControl__setDispParticleObj(v9, 1, 0LL);
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 0, 0LL);
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !v18 )
    goto LABEL_21;
  v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, this->fields.defaultPhotoServantPos, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !v20 )
    goto LABEL_21;
  v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(v21, 1.0, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v22 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v22
    || (MissionNotifyManager__EndPause(v22, 0LL), (v23 = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(v23, 1, 0LL), (photoCampaignComponent = this->fields.photoCampaignComponent) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  PhotoCampaignComponent__Open(photoCampaignComponent, 0, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v25);
}


void __fastcall MyRoomControl__FinishedFadeMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v5; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_B170D4();
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC0B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC0B7 = 1;
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
                                            (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  this->fields.photoCampaignInstantiateCameraEffect = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.photoCampaignInstantiateCameraEffect,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        v16 = this->fields.photoCampaignCameraButton,
        this->fields.currentPhotoServantPos = LocalPosition,
        !v16) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v17);
}


void __fastcall MyRoomControl__FormChangeCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  MyRoomSvtControl_o *v5; // x0
  ServantVoiceData_o *FirstServantVoiceData; // x0
  ServantVoiceData_o *v7; // x20
  MyRoomSvtControl_o *v8; // x0
  int32_t FormId; // w0
  __int64 *v10; // x9
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *v12; // x1

  if ( (byte_40FC078 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9295, method);
    sub_B16FFC(&StringLiteral_2941, v3);
    byte_40FC078 = 1;
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 0;
  if ( !svtCtr )
    goto LABEL_17;
  if ( !MyRoomSvtControl__SetVoiceData(svtCtr, 0LL) )
    goto LABEL_12;
  v5 = this->fields.svtCtr;
  if ( !v5 )
    goto LABEL_17;
  FirstServantVoiceData = MyRoomSvtControl__GetFirstServantVoiceData(v5, 0LL);
  if ( !FirstServantVoiceData || (v7 = FirstServantVoiceData, !FirstServantVoiceData->fields.changeEffect) )
  {
LABEL_12:
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v12 = (System_String_o *)StringLiteral_9295;
      goto LABEL_14;
    }
LABEL_17:
    sub_B170D4();
  }
  v8 = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !v8 )
    goto LABEL_17;
  FormId = MyRoomSvtControl__GetFormId(v8, 0LL);
  if ( !this->fields.myRoomFsm )
    goto LABEL_17;
  if ( v7->fields.form == FormId )
    v10 = &StringLiteral_9295;
  else
    v10 = &StringLiteral_2941;
  v12 = (System_String_o *)*v10;
  myRoomFsm = this->fields.myRoomFsm;
LABEL_14:
  PlayMakerFSM__SendEvent(myRoomFsm, v12, 0LL);
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
  if ( (byte_40FC0BC & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B16FFC(&ManagerConfig_TypeInfo, localScale);
    byte_40FC0BC = 1;
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
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x20
  __int64 materialFigureSvtDispIdx; // x19

  if ( (byte_40FC09D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_40FC09D = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_B170D4();
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  WebViewManager_o *Instance; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCostumeEntity_array *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int max_length; // w8
  ServantCostumeEntity_array *v18; // x20
  unsigned int v19; // w21
  ServantCostumeEntity_o *v20; // x8

  if ( (byte_40FC0A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FC0A1 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&servantId,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  v14 = ServantCostumeMaster__releasedCostumeEntityList(MasterData_WarQuestSelectionMaster, servantId, 1, 0LL);
  if ( !v14 )
    goto LABEL_14;
  max_length = v14->max_length;
  v18 = v14;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v20 = v18->m_Items[v19];
      if ( !v20 || !v11 )
        break;
      System_Collections_Generic_List_int___Add(
        v11,
        v20->fields.id,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_12:
  if ( !v11 )
    goto LABEL_14;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  if ( (byte_40FC065 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_40FC065 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  __int64 v15; // x3
  __int64 v16; // x4
  CommonConfirmDialog_ClickDelegate_o *v17; // x23

  if ( (byte_40FC08D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_MyRoomControl__GoToTitle_b__281_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8860, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FC08D = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v10 = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8860, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v13,
                                                 v14,
                                                 v15,
                                                 v16);
  CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__281_0__, 0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenConfirmDialog(
    Instance,
    v10,
    v11,
    v17,
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC085 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__InitMaterialOnBackground_d__247_TypeInfo, method);
    byte_40FC085 = 1;
  }
  v6 = sub_B170CC(MyRoomControl__InitMaterialOnBackground_d__247_TypeInfo, method, v2, v3, v4);
  MyRoomControl__InitMaterialOnBackground_d__247___ctor((MyRoomControl__InitMaterialOnBackground_d__247_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC087 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__InitServantMenu_d__250_TypeInfo, method);
    byte_40FC087 = 1;
  }
  v6 = sub_B170CC(MyRoomControl__InitServantMenu_d__250_TypeInfo, method, v2, v3, v4);
  MyRoomControl__InitServantMenu_d__250___ctor((MyRoomControl__InitServantMenu_d__250_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall MyRoomControl__IsEnableButton(MyRoomControl_o *this, int32_t button, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.buttonFlag & button) < 0) ^ v3 | ((this->fields.buttonFlag & button) == 0));
}


bool __fastcall MyRoomControl__IsEnableMultipleViewButton(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0

  if ( (byte_40FC0AE & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    byte_40FC0AE = 1;
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

  if ( (byte_40FC0C1 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    byte_40FC0C1 = 1;
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
  UnityEngine_Component_o *v6; // x0
  WebViewObject_o *Component_WebViewObject; // x0

  v4 = this;
  if ( (byte_40FC0A7 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_40FC0A7 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  v6 = (UnityEngine_Component_o *)multipleStandFigureBacks->m_Items[index];
  if ( !v6
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v6,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_B170D4();
  }
  return Component_WebViewObject[2].fields.mMarginBottom > 15;
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
  PlayMakerFSM_o *v6; // x0
  System_String_o *v7; // x0
  UnityEngine_Component_o *myRoomListCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  UnityEngine_GameObject_o *mShowPos; // x0
  float v15; // s8
  float v16; // s9
  float v17; // s10
  UnityEngine_Transform_o *v18; // x0
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FC074 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15336, method);
    sub_B16FFC(&StringLiteral_7117, v3);
    byte_40FC074 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336, 0LL) )
  {
    v6 = this->fields.myRoomFsm;
    if ( !v6 )
      goto LABEL_16;
    v7 = PlayMakerFSM__get_ActiveStateName(v6, 0LL);
    if ( System_String__op_Inequality(v7, (System_String_o *)StringLiteral_7117, 0LL) )
      return 0;
  }
  myRoomListCtr = (UnityEngine_Component_o *)this->fields.myRoomListCtr;
  if ( !myRoomListCtr )
    goto LABEL_16;
  transform = UnityEngine_Component__get_transform(myRoomListCtr, 0LL);
  if ( !transform )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(transform, 0LL);
  mShowPos = this->fields.mShowPos;
  if ( !mShowPos )
    goto LABEL_16;
  v15 = v11;
  v16 = v12;
  v17 = v13;
  v18 = UnityEngine_GameObject__get_transform(mShowPos, 0LL);
  if ( !v18 )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position(v18, 0LL);
  v20.fields.x = v15;
  v20.fields.y = v16;
  v20.fields.z = v17;
  if ( UnityEngine_Vector3__op_Equality(v20, position, 0LL) )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC0A9 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__LoadMultipleServant_d__330_TypeInfo, method);
    byte_40FC0A9 = 1;
  }
  v6 = sub_B170CC(MyRoomControl__LoadMultipleServant_d__330_TypeInfo, method, v2, v3, v4);
  MyRoomControl__LoadMultipleServant_d__330___ctor((MyRoomControl__LoadMultipleServant_d__330_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  AssetLoader_LoadEndDataHandler_o *v24; // x20

  if ( (byte_40FC0B3 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__0__, v8);
    sub_B16FFC(&MyRoomControl___c__DisplayClass345_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6184, v10);
    byte_40FC0B3 = 1;
  }
  v11 = sub_B170CC(MyRoomControl___c__DisplayClass345_0_TypeInfo, *(_QWORD *)&eventId, method, v3, v4);
  MyRoomControl___c__DisplayClass345_0___ctor((MyRoomControl___c__DisplayClass345_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = eventId;
  v18 = System_Int32__ToString((int)v11 + 24, 0LL);
  v19 = System_String__Concat_43743732((System_String_o *)StringLiteral_6184, v18, 0LL);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v19, v24, 1, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC0B6 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__LoadPhotoCampaignServant_d__348_TypeInfo, method);
    byte_40FC0B6 = 1;
  }
  v6 = sub_B170CC(MyRoomControl__LoadPhotoCampaignServant_d__348_TypeInfo, method, v2, v3, v4);
  MyRoomControl__LoadPhotoCampaignServant_d__348___ctor((MyRoomControl__LoadPhotoCampaignServant_d__348_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC060 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, method);
    byte_40FC060 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FC07C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__LoadServantForm_b__228_0__, v6);
    byte_40FC07C = 1;
  }
  svtCtr = this->fields.svtCtr;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__228_0__, 0LL);
  if ( !svtCtr )
    sub_B170D4();
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x20
  int v5; // s0
  const MethodInfo *v9; // x1
  MyRoomControl_c *v10; // x0
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC07D & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8378, v3);
    byte_40FC07D = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_9;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v5, 0LL);
  v10 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v10 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v10->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v9);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
LABEL_9:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8378, 0LL);
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
  if ( (byte_40FC095 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9234, target);
    byte_40FC095 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9234, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
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
  MyRoomStateMaterial_o *mStateMaterial; // x0
  MethodInfo *v38; // x1
  char v39; // w8
  __int64 v40; // x20
  __int64 *v41; // x8
  __int64 *v42; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  TitleInfoControl_o *titleInfo; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  UserServantEntity_o *v50; // x8
  __int64 v51; // x20
  UIWidget_o *changeBtnImg; // x20
  int v53; // s0
  MyRoomControl_c *v57; // x0
  __int64 value; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_40FC092 & 1) == 0 )
  {
    sub_B16FFC(&Method_MyRoomControl_OnClickBack__, method);
    sub_B16FFC(&MyRoomControl_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_3092, v7);
    sub_B16FFC(&StringLiteral_3091, v8);
    sub_B16FFC(&StringLiteral_3103, v9);
    sub_B16FFC(&StringLiteral_3034, v10);
    sub_B16FFC(&StringLiteral_3095, v11);
    sub_B16FFC(&StringLiteral_3089, v12);
    sub_B16FFC(&StringLiteral_3090, v13);
    sub_B16FFC(&StringLiteral_3093, v14);
    sub_B16FFC(&StringLiteral_3086, v15);
    sub_B16FFC(&StringLiteral_3081, v16);
    sub_B16FFC(&StringLiteral_13004, v17);
    sub_B16FFC(&StringLiteral_3098, v18);
    sub_B16FFC(&StringLiteral_3083, v19);
    sub_B16FFC(&StringLiteral_3099, v20);
    sub_B16FFC(&StringLiteral_3088, v21);
    byte_40FC092 = 1;
  }
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
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
      && !this->fields.isMyRoomUIAnimation
      && !this->fields.isBackBtnIgnore
      && !this->fields.isSvtLoading )
    {
      multipleViewState = this->fields.multipleViewState;
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
          this->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(this, v30);
        }
        else if ( multipleViewState == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(1, 0LL);
          this->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(this, v25);
        }
        return;
      }
      photoCampaignState = this->fields.photoCampaignState;
      if ( photoCampaignState )
      {
        if ( photoCampaignState == 2 )
        {
          v34 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
            v34 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickBack__);
          v35 = (System_Reflection_MethodBase_o *)sub_B16FE0(v34, v34[3]);
          OverwriteAssetSoundName__PlaySystemSe(v35, 1, 0LL);
          this->fields.photoCampaignState = 1;
          MyRoomControl__ClosePhotoCampaignServant(this, v36);
        }
        else if ( photoCampaignState == 1 )
        {
          v27 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 75) & 2) != 0 )
            v27 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickBack__);
          v28 = (System_Reflection_MethodBase_o *)sub_B16FE0(v27, v27[3]);
          OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0LL);
          this->fields.photoCampaignState = 0;
          MyRoomControl__ClosePhotoCampaignPanel(this, v29);
        }
        return;
      }
      if ( !MyRoomControl__GetState(this, v23) || (type = this->fields.type, type == 10) )
      {
        mState = this->fields.mState;
        this->fields.IsMaterialEventBack = 1;
        if ( mState )
        {
          MyRoomControl__setDefSvtPos(this, v31);
          return;
        }
        mStateMaterial = this->fields.mStateMaterial;
        if ( !mStateMaterial )
          goto LABEL_81;
        if ( MyRoomStateMaterial__Back(mStateMaterial, 0LL) )
          return;
        type = this->fields.type;
      }
      v38 = (MethodInfo *)StringLiteral_3034;
      v39 = 0;
      switch ( type )
      {
        case 0:
          v40 = StringLiteral_3034;
          MyRoomControl__ReleaseAsset(this, (const MethodInfo *)StringLiteral_3034);
          v38 = (MethodInfo *)v40;
          goto LABEL_61;
        case 1:
          v41 = &StringLiteral_3091;
          goto LABEL_52;
        case 2:
          v42 = &StringLiteral_3092;
          goto LABEL_60;
        case 3:
          v42 = &StringLiteral_3090;
          goto LABEL_60;
        case 4:
          v42 = &StringLiteral_3083;
          goto LABEL_60;
        case 5:
          optionComp = this->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v39 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              v38 = (MethodInfo *)StringLiteral_3081;
          }
          else
          {
            v42 = &StringLiteral_3089;
LABEL_60:
            v38 = (MethodInfo *)*v42;
LABEL_61:
            v39 = 0;
          }
LABEL_62:
          if ( ((unsigned __int8)v39 & (this->fields.mState != 0)) != 0 )
          {
            MyRoomControl__setDefSvtPos(this, v38);
          }
          else
          {
            titleInfo = this->fields.titleInfo;
            if ( !titleInfo )
              break;
            TitleInfoControl__sendEvent(titleInfo, (System_String_o *)v38, 0LL);
          }
          myRoomFsm = this->fields.myRoomFsm;
          if ( myRoomFsm )
          {
            ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13004, 0LL) )
              return;
            myRoomData = this->fields.myRoomData;
            if ( myRoomData )
            {
              UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
              if ( UsrSvtData )
              {
                v50 = UsrSvtData;
                *(_QWORD *)&v59.fields.currentCryptoKey = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.currentCryptoKey;
                v51 = *(_QWORD *)&v50->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = *(_QWORD *)&v59.fields.currentCryptoKey;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v59.fields.currentCryptoKey = value;
                }
                *(_QWORD *)&v59.fields.fakeValue = v51;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL) < 1
                  || this->fields.isHeroine && this->fields.isHeroineReave )
                {
                  return;
                }
                changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
                *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_white(0LL);
                if ( changeBtnImg )
                {
                  UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v53, 0LL);
                  v57 = MyRoomControl_TypeInfo;
                  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                    v57 = MyRoomControl_TypeInfo;
                  }
                  this->fields.buttonFlag |= v57->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 6:
          v41 = &StringLiteral_3095;
LABEL_52:
          v38 = (MethodInfo *)*v41;
          v39 = 1;
          goto LABEL_62;
        case 7:
          v42 = &StringLiteral_3098;
          goto LABEL_60;
        case 8:
          v42 = &StringLiteral_3086;
          goto LABEL_60;
        case 9:
          v42 = &StringLiteral_3088;
          goto LABEL_60;
        case 10:
          v42 = &StringLiteral_3099;
          goto LABEL_60;
        case 11:
          v42 = &StringLiteral_3093;
          goto LABEL_60;
        case 17:
          v42 = &StringLiteral_3103;
          goto LABEL_60;
        default:
          goto LABEL_62;
      }
LABEL_81:
      sub_B170D4();
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
  PlayMakerFSM_o *v18; // x0
  System_String_o *v19; // x0
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  WebViewManager_o *v24; // x0
  WarQuestSelectionMaster_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  ServantEntity_o *Entity; // x21
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t size; // w10
  int32_t v35; // w8
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v38; // x20
  __int64 v39; // x21
  PlayMakerFSM_o *v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40FC073 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B16FFC(&MyRoomControl_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_15336, v11);
    sub_B16FFC(&StringLiteral_2945, v12);
    sub_B16FFC(&StringLiteral_7117, v13);
    byte_40FC073 = 1;
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
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336, 0LL) )
  {
    v18 = this->fields.myRoomFsm;
    if ( !v18 )
      goto LABEL_50;
    v19 = PlayMakerFSM__get_ActiveStateName(v18, 0LL);
    if ( System_String__op_Inequality(v19, (System_String_o *)StringLiteral_7117, 0LL) )
      return;
  }
  if ( !this->fields.isServantMaterial )
  {
    if ( !this->fields.isHeroine || !this->fields.isHeroineReave )
    {
      if ( !MyRoomControl__IsScrollviewInShowPosition(this, v17) )
        goto LABEL_45;
      myRoomData = this->fields.myRoomData;
      if ( !myRoomData )
        goto LABEL_50;
      UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
      if ( !UsrSvtData )
        goto LABEL_50;
      v39 = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v38 = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = v39;
      *(_QWORD *)&v42.fields.fakeValue = v38;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL) > 0 || this->fields.isHeroine )
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_50;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       usrData->fields.userId,
                       this->fields.materialServantId,
                       0LL);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
    goto LABEL_50;
  v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v24,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_50;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)v25;
  v28 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v28;
  *(_QWORD *)&v41.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
  if ( !v26 )
    goto LABEL_50;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v26,
                                v29,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( MyRoomControl__IsScrollviewInShowPosition(this, v31) )
  {
    if ( EntityDefinitely->fields.maxLimitCount > 0 )
      goto LABEL_25;
    if ( !Entity )
      goto LABEL_50;
    if ( ServantEntity__checkIsHeroineSvt(Entity, 0LL) )
    {
LABEL_25:
      materialImageIdList = this->fields.materialImageIdList;
      if ( !materialImageIdList )
        goto LABEL_50;
      size = materialImageIdList->fields._size;
      v35 = this->fields.materialFigureSvtDispIdx + 1;
      if ( v35 >= size )
        v35 = 0;
      else
        this->fields.materialFigureSvtDispIdx = v35;
      this->fields.materialFigureSvtDispIdx = v35;
LABEL_45:
      MyRoomControl__BlockTouch(this, v32);
      this->fields.isSvtLoading = 1;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v40 = this->fields.myRoomFsm;
      if ( v40 )
      {
        PlayMakerFSM__SendEvent(v40, (System_String_o *)StringLiteral_2945, 0LL);
        return;
      }
LABEL_50:
      sub_B170D4();
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FC0A4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC0A4 = 1;
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
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x0

  if ( (byte_40FC0B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_40FC0B2 = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
    sub_B170D4();
  }
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_10;
  MaterialEventLogListViewManager__EventLogSortKind(
    mMaterialEventLogListViewManager,
    this->fields.eventLogServantSortSelectMenu,
    0LL);
}


void __fastcall MyRoomControl__OnClickLeftServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_40FC0A5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC0A5 = 1;
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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // kr00_8
  float v12; // s11
  UnityEngine_GameObject_o *v13; // x20
  float v14; // s5
  float v15; // s6
  float v16; // s7
  float v17; // s4
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  float x; // s12
  float v21; // s13
  float v22; // s14
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x20
  float v25; // s4
  float v26; // s5
  float v27; // s3
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x20
  float v30; // s5
  float v31; // s6
  float v32; // s7
  float v33; // s4
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  float v38; // s4
  float v39; // s5
  float v40; // s3
  UnityEngine_Collider_o *v41; // x0
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  UnityEngine_Component_o *photoCampaignFrameSprite; // x0
  float photoFramePosY; // s8
  UnityEngine_GameObject_o *gameObject; // x20
  float y; // s5
  float z; // s6
  float w; // s7
  float v50; // s4
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *photoCampaignScreenshot; // x0
  UnityEngine_GameObject_o *v56; // x20
  float v57; // s5
  float v58; // s6
  float v59; // s7
  float v60; // s4
  UnityEngine_Component_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_Component_o *photoCampaignBackGroundSprite; // x0
  UnityEngine_GameObject_o *v66; // x0
  TweenAlpha_o *v67; // x20
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UnityEngine_Vector3_o v83; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v88; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v89; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v90; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v91; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v92; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40FC0BB & 1) == 0 )
  {
    sub_B16FFC(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_B16FFC(&StringLiteral_6661, v3);
    byte_40FC0BB = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v83.fields.z = 0.0;
  *(_QWORD *)&v83.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_28;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  if ( photoCampaignState == 4 )
  {
    v42 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
      v42 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    v43 = (System_Reflection_MethodBase_o *)sub_B16FE0(v42, v42[3]);
    OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0LL);
    photoCampaignFrameSprite = (UnityEngine_Component_o *)this->fields.photoCampaignFrameSprite;
    this->fields.photoCampaignState = 2;
    if ( !photoCampaignFrameSprite )
      goto LABEL_28;
    photoFramePosY = this->fields.photoFramePosY;
    gameObject = UnityEngine_Component__get_gameObject(photoCampaignFrameSprite, 0LL);
    v95 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
    y = v95.fields.y;
    z = v95.fields.z;
    w = v95.fields.w;
    v95.fields.y = v95.fields.x;
    v95.fields.z = y;
    v95.fields.w = z;
    v50 = w;
    TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v95.fields.y, 0LL);
    v51 = (UnityEngine_Component_o *)this->fields.photoCampaignFrameSprite;
    if ( !v51 )
      goto LABEL_28;
    v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
    v89.fields.x = 1.0;
    v89.fields.y = 1.0;
    v89.fields.z = 1.0;
    TweenScale__Begin(v52, 0.2, v89, 0LL);
    v53 = (UnityEngine_Component_o *)this->fields.photoCampaignFrameSprite;
    if ( !v53 )
      goto LABEL_28;
    v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
    v90.fields.x = 0.0;
    v90.fields.z = 0.0;
    v90.fields.y = photoFramePosY;
    TweenPosition__Begin(v54, 0.2, v90, 0LL);
    photoCampaignScreenshot = (UnityEngine_Component_o *)this->fields.photoCampaignScreenshot;
    if ( !photoCampaignScreenshot )
      goto LABEL_28;
    v56 = UnityEngine_Component__get_gameObject(photoCampaignScreenshot, 0LL);
    v96 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
    v57 = v96.fields.y;
    v58 = v96.fields.z;
    v59 = v96.fields.w;
    v96.fields.y = v96.fields.x;
    v96.fields.z = v57;
    v96.fields.w = v58;
    v60 = v59;
    TweenRotation__Begin(v56, 0.2, *(UnityEngine_Quaternion_o *)&v96.fields.y, 0LL);
    v61 = (UnityEngine_Component_o *)this->fields.photoCampaignScreenshot;
    if ( !v61 )
      goto LABEL_28;
    v62 = UnityEngine_Component__get_gameObject(v61, 0LL);
    v91.fields.x = 1.0;
    v91.fields.y = 1.0;
    v91.fields.z = 1.0;
    TweenScale__Begin(v62, 0.2, v91, 0LL);
    v63 = (UnityEngine_Component_o *)this->fields.photoCampaignScreenshot;
    if ( !v63 )
      goto LABEL_28;
    v64 = UnityEngine_Component__get_gameObject(v63, 0LL);
    v92.fields.x = 0.0;
    v92.fields.z = 0.0;
    v92.fields.y = photoFramePosY;
    TweenPosition__Begin(v64, 0.2, v92, 0LL);
    photoCampaignBackGroundSprite = (UnityEngine_Component_o *)this->fields.photoCampaignBackGroundSprite;
    if ( !photoCampaignBackGroundSprite )
      goto LABEL_28;
    v66 = UnityEngine_Component__get_gameObject(photoCampaignBackGroundSprite, 0LL);
    v67 = TweenAlpha__Begin(v66, 0.2, 0.0, 0LL);
    v68 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v67 )
      goto LABEL_28;
    v67->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v68;
    p_eventReceiver = &v67->fields.eventReceiver;
    sub_B16F98((BattleServantConfConponent_o *)p_eventReceiver, v68, v69, v70, v71, v72, v73, v74);
    v76 = (System_Int32_array **)StringLiteral_6661;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6661;
    sub_B16F98((BattleServantConfConponent_o *)(p_eventReceiver + 1), v76, v77, v78, v79, v80, v81, v82);
  }
  else if ( photoCampaignState == 3 )
  {
    v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    this->fields.photoCampaignState = 4;
    MyRoomControl__GetMaximTransformValues(this, &localScale, &v83, v8);
    v9 = (UnityEngine_Component_o *)this->fields.photoCampaignFrameSprite;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      v11 = *(_QWORD *)&v83.fields.x;
      v12 = v83.fields.z;
      v13 = v10;
      v93 = UnityEngine_Quaternion__Euler_34841604(v83, 0LL);
      v14 = v93.fields.y;
      v15 = v93.fields.z;
      v16 = v93.fields.w;
      v93.fields.y = v93.fields.x;
      v93.fields.z = v14;
      v93.fields.w = v15;
      v17 = v16;
      TweenRotation__Begin(v13, 0.2, *(UnityEngine_Quaternion_o *)&v93.fields.y, 0LL);
      v18 = (UnityEngine_Component_o *)this->fields.photoCampaignFrameSprite;
      if ( v18 )
      {
        v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
        x = localScale.fields.x;
        v21 = localScale.fields.y;
        v22 = localScale.fields.z;
        TweenScale__Begin(v19, 0.2, localScale, 0LL);
        v23 = (UnityEngine_Component_o *)this->fields.photoCampaignFrameSprite;
        if ( v23 )
        {
          v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
          zero = UnityEngine_Vector3__get_zero(0LL);
          v25 = zero.fields.y;
          v26 = zero.fields.z;
          zero.fields.y = zero.fields.x;
          zero.fields.z = v25;
          v27 = v26;
          TweenPosition__Begin(v24, 0.2, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
          v28 = (UnityEngine_Component_o *)this->fields.photoCampaignScreenshot;
          if ( v28 )
          {
            v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
            *(_QWORD *)&v86.fields.x = v11;
            v86.fields.z = v12;
            v94 = UnityEngine_Quaternion__Euler_34841604(v86, 0LL);
            v30 = v94.fields.y;
            v31 = v94.fields.z;
            v32 = v94.fields.w;
            v94.fields.y = v94.fields.x;
            v94.fields.z = v30;
            v94.fields.w = v31;
            v33 = v32;
            TweenRotation__Begin(v29, 0.2, *(UnityEngine_Quaternion_o *)&v94.fields.y, 0LL);
            v34 = (UnityEngine_Component_o *)this->fields.photoCampaignScreenshot;
            if ( v34 )
            {
              v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
              v88.fields.x = x;
              v88.fields.y = v21;
              v88.fields.z = v22;
              TweenScale__Begin(v35, 0.2, v88, 0LL);
              v36 = (UnityEngine_Component_o *)this->fields.photoCampaignScreenshot;
              if ( v36 )
              {
                v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
                v87 = UnityEngine_Vector3__get_zero(0LL);
                v38 = v87.fields.y;
                v39 = v87.fields.z;
                v87.fields.y = v87.fields.x;
                v87.fields.z = v38;
                v40 = v39;
                TweenPosition__Begin(v37, 0.2, *(UnityEngine_Vector3_o *)&v87.fields.y, 0LL);
                v41 = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
                if ( v41 )
                {
                  UnityEngine_Collider__set_enabled(v41, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B170D4();
  }
}


void __fastcall MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  const MethodInfo *v4; // x2
  MyRoomControl_c *klass; // x9
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_40FC0B9 & 1) == 0 )
  {
    sub_B16FFC(&TouchEffectManager_TypeInfo, method);
    byte_40FC0B9 = 1;
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(1, 0LL);
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 0, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 1, v4);
  klass = this->klass;
  this->fields.photoCampaignState = 3;
  v6 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, _QWORD, _QWORD, void *))klass->vtable._4_CaptureServant.method)(
                                             this,
                                             (unsigned int)this->fields.photoSvtShotWidth,
                                             (unsigned int)this->fields.photoSvtShotHeight,
                                             klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_40FC0A6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC0A6 = 1;
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
  PlayMakerFSM_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v18; // x20
  int max_length; // w9
  StandFigureBack_o *v20; // x0
  struct System_Int64_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x2
  struct System_Int32_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x20
  const MethodInfo *v41; // x4

  if ( (byte_40FC0A2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&long___TypeInfo, v4);
    sub_B16FFC(&Method_MyRoomControl__OnClickSelectMultipleServant_b__322_0__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15336, v7);
    sub_B16FFC(&StringLiteral_7117, v8);
    byte_40FC0A2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_17;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336, 0LL) )
  {
    v12 = this->fields.myRoomFsm;
    if ( !v12 )
      goto LABEL_17;
    v13 = PlayMakerFSM__get_ActiveStateName(v12, 0LL);
    if ( System_String__op_Inequality(v13, (System_String_o *)StringLiteral_7117, 0LL) )
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
    sub_B170D4();
  v18 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v18 >= max_length )
      break;
    if ( (unsigned int)v18 >= max_length )
    {
      sub_B17100(v14, v15, v16);
      sub_B170A0();
    }
    v20 = multipleStandFigureBacks->m_Items[v18];
    if ( v20 )
    {
      StandFigureBack__Init(v20, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v18;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_17;
  }
  v21 = (struct System_Int64_array *)sub_B17014(long___TypeInfo, 2LL, v16);
  this->fields.multipleServantUsrIds = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v29 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v28);
  this->fields.multipleLimitCounts = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__322_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v40, 1, v41);
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
  PlayMakerFSM_o *v10; // x0
  System_String_o *v11; // x0
  bool IsEnablePhotoCampaignButton; // w20
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x4

  if ( (byte_40FC0B4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v3);
    sub_B16FFC(&Method_MyRoomControl__OnClickSelectPhotoCampaign_b__346_0__, v4);
    sub_B16FFC(&StringLiteral_15336, v5);
    sub_B16FFC(&StringLiteral_7117, v6);
    byte_40FC0B4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336, 0LL) )
  {
    v10 = this->fields.myRoomFsm;
    if ( !v10 )
      goto LABEL_13;
    v11 = PlayMakerFSM__get_ActiveStateName(v10, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7117, 0LL) )
      return;
  }
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, v9);
  v13 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 75) & 2) != 0 )
    v13 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v14 = (System_Reflection_MethodBase_o *)sub_B16FE0(v13, v13[3]);
  if ( IsEnablePhotoCampaignButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
      this->fields.photoCampaignServantUsrId = 0LL;
      this->fields.photoCampaignLimitCount = 0;
      v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectPhotoCampaign_b__346_0__, 0LL);
      MyRoomControl__DispDefaultMyRoom(this, 0, v20, 1, v21);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  struct UIPanel_o *basePanel; // x8
  __int64 v6; // x11
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x0

  if ( (byte_40FC0B1 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_40FC0B1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  basePanel = Instance->fields.basePanel;
  if ( !basePanel )
    goto LABEL_13;
  v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v6 - 1] != MyRoomRootComponent_TypeInfo
    || !*(_QWORD *)&basePanel->fields.updateAnchors )
  {
    goto LABEL_13;
  }
  if ( this->fields.IsListActive )
  {
    materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
    if ( materialCollectionServantListViewManager )
    {
      MaterialCollectionServantListViewManager__SortAscendingOrder(materialCollectionServantListViewManager, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder(mMaterialEventLogListViewManager, 0LL);
}


void __fastcall MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomControl_c *v6; // x0
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v8; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC077 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_10424, v5);
    byte_40FC077 = 1;
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
        MyRoomControl__setNormalFace_28791144(this, 1, v8);
        return;
      }
    }
    else
    {
      myRoomFsm = this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_10424, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FC0A3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC0A3 = 1;
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
  WebViewManager_o *Instance; // x0
  struct UIPanel_o *basePanel; // x8
  __int64 v8; // x11
  __int64 v9; // x8
  MyRoomStateMaterial_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  _BOOL4 IsListActive; // w8
  UnityEngine_GameObject_o *listLabelObject; // x0
  UnityEngine_GameObject_o *servantListLabelObject; // x0
  const MethodInfo *v16; // x2
  _BOOL4 v17; // w19

  if ( (byte_40FC0B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v3);
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_40FC0B0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  basePanel = Instance->fields.basePanel;
  if ( !basePanel )
    goto LABEL_17;
  v8 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    goto LABEL_17;
  if ( (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v8 - 1] != MyRoomRootComponent_TypeInfo )
    goto LABEL_17;
  v9 = *(_QWORD *)&basePanel->fields.updateAnchors;
  if ( !v9 )
    goto LABEL_17;
  v10 = *(MyRoomStateMaterial_o **)(v9 + 856);
  v11 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B17004(Method_MyRoomControl_OnClickValentineListChange__);
  v12 = (System_Reflection_MethodBase_o *)sub_B16FE0(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v10
    || (MyRoomStateMaterial__ValentineListMomentChange(v10, !IsListActive, 0LL),
        (listLabelObject = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(listLabelObject, this->fields.IsListActive, 0LL),
        (servantListLabelObject = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(servantListLabelObject, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v16);
  v17 = this->fields.IsListActive;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__SaveIsListActive(v17, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Gesture_EventHandler_o *v8; // x20

  if ( (byte_40FC063 & 1) == 0 )
  {
    sub_B16FFC(&Gesture_EventHandler_TypeInfo, method);
    sub_B16FFC(&FingerGestures_TypeInfo, v6);
    sub_B16FFC(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v7);
    byte_40FC063 = 1;
  }
  v8 = (Gesture_EventHandler_o *)sub_B170CC(Gesture_EventHandler_TypeInfo, method, v2, v3, v4);
  Gesture_EventHandler___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v8, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.multipleServantUsrIds,
    (System_Int32_array **)usrSvtIds,
    (System_String_array **)imageLimitCounts,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.multipleLimitCounts,
    (System_Int32_array **)imageLimitCounts,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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

  if ( (byte_40FC0AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, *(_QWORD *)&type);
    sub_B16FFC(&System_Action_bool__TypeInfo, v11);
    sub_B16FFC(&Method_MyRoomControl_SetMaskCollider__, v12);
    byte_40FC0AD = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v14 = (System_Action_bool__o *)sub_B170CC(
                                   System_Action_bool__TypeInfo,
                                   *(_QWORD *)&type,
                                   usrSvtId,
                                   callback,
                                   *(_QWORD *)&index);
  System_Action_bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_MyRoomControl_SetMaskCollider__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !selectImageLimitDialog )
    sub_B170D4();
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v14, callback, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CRIMoviePlayer_o **v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CRIMoviePlayer_o *v26; // x23
  BgmManager_c *v27; // x0
  float masterVolume; // s8
  System_Action_o *v29; // x25

  if ( (byte_40FC09B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, fileName);
    sub_B16FFC(&BgmManager_TypeInfo, v8);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass309_0__PlayOpening_b__0__, v9);
    sub_B16FFC(&MyRoomControl___c__DisplayClass309_0_TypeInfo, v10);
    byte_40FC09B = 1;
  }
  v11 = sub_B170CC(MyRoomControl___c__DisplayClass309_0_TypeInfo, fileName, assetPath, isCanSkip, method);
  MyRoomControl___c__DisplayClass309_0___ctor((MyRoomControl___c__DisplayClass309_0_o *)v11, 0LL);
  CriMoviePlayerObject = (System_Int32_array **)MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = CriMoviePlayerObject;
  v21 = (CRIMoviePlayer_o **)(v11 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), CriMoviePlayerObject, v15, v16, v17, v18, v19, v20);
  v26 = *(CRIMoviePlayer_o **)(v11 + 16);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_40F6390 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v22);
    byte_40F6390 = 1;
  }
  v27 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v27 = BgmManager_TypeInfo;
  }
  masterVolume = v27->static_fields->masterVolume;
  v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(v29, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass309_0__PlayOpening_b__0__, 0LL);
  if ( !v26
    || (CRIMoviePlayer__Initialize(v26, fileName, assetPath, masterVolume, isCanSkip, 0LL, v29, 1, 0LL, 0, 0, 1, 0LL),
        !*v21) )
  {
LABEL_15:
    sub_B170D4();
  }
  CRIMoviePlayer__MoviePlay(*v21, 1, 1, 1, 0LL);
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
  struct UITexture_o *photoCampaignScreenshot; // x0
  AssetData_o *photoCampaignAssetData; // x20
  BattleServantConfConponent_o *p_photoCampaignAssetData; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FC0C3 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FC0C3 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.photoCampaignShutterEffect, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.photoCampaignCameraEffect, 0LL, v9, v10, v11, v12, v13, v14);
  photoCampaignScreenshot = this->fields.photoCampaignScreenshot;
  if ( !photoCampaignScreenshot )
    sub_B170D4();
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
    AssetManager__releaseAsset_29947376(photoCampaignAssetData, 0LL);
    p_photoCampaignAssetData->klass = 0LL;
    sub_B16F98(p_photoCampaignAssetData, 0LL, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_40FC061 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC061 = 1;
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
    sub_B16F98(p_asstName, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v17; // s0
  UIWidget_o *helpButtonImg; // x20
  int v22; // s0
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v28; // x20
  __int64 v29; // x21
  int32_t v30; // w0
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v32; // w20
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  bool v35; // w0
  UIWidget_o *changeBtnImg; // x20
  int v37; // s0
  MyRoomControl_c *v41; // x0
  UIWidget_o *changeBGBtnImg; // x20
  int v43; // s0
  MyRoomControl_c *v47; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *mBlocker; // x0
  UnityEngine_Collider_o *maskBoxCollider; // x0
  SoundPlayerComponent_o *soundPlayerComp; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_40FC097 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B16FFC(&MyRoomControl_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_13004, v5);
    byte_40FC097 = 1;
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
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
  if ( !playBtnImg )
    goto LABEL_39;
  UIWidget__set_color(playBtnImg, *(UnityEngine_Color_o *)&v17, 0LL);
  helpButtonImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
  if ( !helpButtonImg )
    goto LABEL_39;
  UIWidget__set_color(helpButtonImg, *(UnityEngine_Color_o *)&v22, 0LL);
  myRoomData = this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !myRoomData )
    goto LABEL_39;
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    goto LABEL_39;
  v29 = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v28 = *(_QWORD *)&UsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v29;
  *(_QWORD *)&v52.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_39;
    v32 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v32 = v30;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_39;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  v35 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13004, 0LL);
  if ( v32 >= 1 && v35 )
  {
    changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
    if ( !changeBtnImg )
      goto LABEL_39;
    UIWidget__set_color(changeBtnImg, *(UnityEngine_Color_o *)&v37, 0LL);
    v41 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v41 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v41->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_white(0LL);
  if ( !changeBGBtnImg )
    goto LABEL_39;
  UIWidget__set_color(changeBGBtnImg, *(UnityEngine_Color_o *)&v43, 0LL);
  v47 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v47 = MyRoomControl_TypeInfo;
  }
  static_fields = v47->static_fields;
  mBlocker = this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_39:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
  if ( this->fields.type == 10 )
  {
    soundPlayerComp = this->fields.soundPlayerComp;
    if ( soundPlayerComp )
    {
      SoundPlayerComponent__SetEnableBlockTouch(soundPlayerComp, 0, 0LL);
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
    sub_B170D4();
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
  __int64 v3; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  UIWidget_o *changeBtnImg; // x20
  int v6; // s0
  MyRoomControl_c *v10; // x0
  int v11; // w8
  int v12; // s0
  MyRoomControl_c *v16; // x0

  if ( (byte_40FC071 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B16FFC(&MyRoomControl_TypeInfo, v3);
    byte_40FC071 = 1;
  }
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_19:
      sub_B170D4();
  }
  else
  {
    materialImageIdList = this->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_19;
  }
  changeBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
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
    v11 = this->fields.buttonFlag | v16->static_fields->BUTTON_LIMIT_CHANGE;
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
    v11 = this->fields.buttonFlag & ~v10->static_fields->BUTTON_LIMIT_CHANGE;
  }
  this->fields.buttonFlag = v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetEnableMultipleViewUi(MyRoomControl_o *this, bool isEnable, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *multipleFaceChangeButtons; // x8
  __int64 v6; // x21
  int max_length; // w9
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  UnityEngine_GameObject_o *multipleViewDisableUiButton; // x0
  TitleInfoControl_o *titleInfo; // x0

  multipleFaceChangeButtons = this->fields.multipleFaceChangeButtons;
  if ( !multipleFaceChangeButtons )
    goto LABEL_7;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleFaceChangeButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = multipleFaceChangeButtons->m_Items[v6];
    if ( v8 )
    {
      UnityEngine_GameObject__SetActive(v8, isEnable, 0LL);
      multipleFaceChangeButtons = this->fields.multipleFaceChangeButtons;
      ++v6;
      if ( multipleFaceChangeButtons )
        continue;
    }
    goto LABEL_7;
  }
  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton
    || (UnityEngine_GameObject__SetActive(multipleViewCloseButton, !isEnable, 0LL),
        (multipleViewDisableUiButton = this->fields.multipleViewDisableUiButton) == 0LL)
    || (UnityEngine_GameObject__SetActive(multipleViewDisableUiButton, isEnable, 0LL),
        (titleInfo = this->fields.titleInfo) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  if ( isEnable )
    TitleInfoControl__FrameIn(titleInfo, 0, 0LL);
  else
    TitleInfoControl__FrameOut(titleInfo, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
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
  const MethodInfo *v28; // x2
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  CommonUI_o *Instance; // x0
  const MethodInfo *v42; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x24
  __int64 figureSvtDispIdx; // x25
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_o *asstName; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Action_o *v64; // x23
  const MethodInfo *v65; // x3
  System_Action_o *v66; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x20
  const MethodInfo *v78; // x2

  if ( (byte_40FC08A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__0__, v10);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__1__, v11);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__2__, v12);
    sub_B16FFC(&MyRoomControl___c__DisplayClass274_0_TypeInfo, v13);
    byte_40FC08A = 1;
  }
  v14 = sub_B170CC(MyRoomControl___c__DisplayClass274_0_TypeInfo, callback, IsActSetMyRoomStandFigre, method, v4);
  MyRoomControl___c__DisplayClass274_0___ctor((MyRoomControl___c__DisplayClass274_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 32) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  MyRoomControl__setupSvtImageIdList(this, v27);
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, 0, v28);
  v30 = (ServantVoiceEntity_o **)(v14 + 24);
  *(_QWORD *)(v14 + 24) = SvtVoiceEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), SvtVoiceEnt, v31, v32, v33, v34, v35, v36);
  if ( *(_QWORD *)(v14 + 24) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v42);
      imageIdList = this->fields.imageIdList;
      if ( imageIdList )
      {
        figureSvtDispIdx = this->fields.figureSvtDispIdx;
        if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( *v30 )
        {
          MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                              *v30,
                              imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                              0LL);
          this->fields.voiceList = MyRoomVoiceList;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.voiceList,
            (System_Int32_array **)MyRoomVoiceList,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
          if ( *v30 )
          {
            VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(*v30, 0LL);
            this->fields.asstName = VoiceAssetName;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.asstName,
              (System_Int32_array **)VoiceAssetName,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            asstName = this->fields.asstName;
            v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
            System_Action___ctor(
              v64,
              (Il2CppObject *)v14,
              Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__0__,
              0LL);
            MyRoomControl__voiceLoad(this, asstName, v64, v65);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
  this->fields.isExistVoiceData = 0;
LABEL_13:
  v66 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v14,
    Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__1__,
    0LL);
  *(_QWORD *)(v14 + 40) = v66;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
  if ( IsActSetMyRoomStandFigre )
  {
    v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v14,
      Method_MyRoomControl___c__DisplayClass274_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v77, v78);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 40), 0LL);
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
  UnityEngine_Component_o *v8; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  int32_t v10; // w1

  v4 = this;
  if ( (byte_40FC0A8 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_40FC0A8 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_B170D4();
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&frontIndex, method);
      sub_B170A0();
    }
    v8 = (UnityEngine_Component_o *)multipleStandFigureBacks->m_Items[v6];
    if ( v8 )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v8,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( Component_WebViewObject )
      {
        v10 = frontIndex == (_DWORD)v6 ? 16 : 15;
        UIPanel__set_depth((UIPanel_o *)Component_WebViewObject, v10, 0LL);
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
    sub_B170D4();
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
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
  const MethodInfo *v26; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x23
  __int64 materialFigureSvtDispIdx; // x24
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t v32; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w0
  struct System_Collections_Generic_List_int__o *v34; // x22
  __int64 v35; // x23
  int32_t Id; // w22
  int32_t Form; // w0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Collections_Generic_List_int__o *v42; // x23
  __int64 v43; // x24
  int32_t v44; // w22
  StandFigureBack_o *standFigureBack; // x20
  int32_t v46; // w23
  System_Action_o *v47; // x24

  if ( (byte_40FC070 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__0__, v10);
    sub_B16FFC(&MyRoomControl___c__DisplayClass205_0_TypeInfo, v11);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v12);
    byte_40FC070 = 1;
  }
  v13 = sub_B170CC(MyRoomControl___c__DisplayClass205_0_TypeInfo, *(_QWORD *)&servantId, end_act, method, v4);
  MyRoomControl___c__DisplayClass205_0___ctor((MyRoomControl___c__DisplayClass205_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)end_act, v20, v21, v22, v23, v24, v25);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v26);
    MyRoomControl__SetChangeBtn(this, v28);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_24;
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  mStateMaterial = this->fields.mStateMaterial;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v32 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v32, 0LL);
  if ( !mStateMaterial )
    goto LABEL_24;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, LimitCountByImageLimitCostumeIn, 0LL);
  v34 = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !v34 )
    goto LABEL_24;
  v35 = this->fields.materialFigureSvtDispIdx;
  if ( v34->fields._size <= (unsigned int)v35 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  Id = ServantScriptMaster__getId(servantId, v34->fields._items->m_Items[v35 + 1], 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
  v42 = this->fields.materialImageIdList;
  if ( !v42 )
    goto LABEL_24;
  v43 = this->fields.materialFigureSvtDispIdx;
  v44 = Form;
  if ( v42->fields._size <= (unsigned int)v43 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  standFigureBack = this->fields.standFigureBack;
  v46 = v42->fields._items->m_Items[v43 + 1];
  v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_24:
    sub_B170D4();
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v46, 1, 0, v44, 10, v47, 0LL);
}


void __fastcall MyRoomControl__SetMultipleViewButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v7; // x1
  UIWidget_o *multipleViewButtonSprite; // x0
  UIWidget_o *multipleViewButtonLabel; // x0
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
        (multipleViewButtonLabel = (UIWidget_o *)this->fields.multipleViewButtonLabel) == 0LL) )
  {
    sub_B170D4();
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color(multipleViewButtonLabel, v13, 0LL);
}


void __fastcall MyRoomControl__SetMyRoomStandFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
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
  bool _28023340; // w0
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 figureSvtDispIdx; // x23
  int32_t Id; // w0
  int32_t v30; // w21
  int32_t Form; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct System_Collections_Generic_List_int__o *v36; // x22
  __int64 v37; // x23
  int32_t v38; // w21
  struct System_Int32_array *items; // x8
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w19
  int32_t v42; // w23
  System_Action_o *v43; // x24

  if ( (byte_40FC06E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&TutorialFlag_TypeInfo, v8);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__0__, v9);
    sub_B16FFC(&MyRoomControl___c__DisplayClass203_0_TypeInfo, v10);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v11);
    byte_40FC06E = 1;
  }
  v12 = sub_B170CC(MyRoomControl___c__DisplayClass203_0_TypeInfo, end_act, method, v3, v4);
  MyRoomControl___c__DisplayClass203_0___ctor((MyRoomControl___c__DisplayClass203_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)end_act, v19, v20, v21, v22, v23, v24);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v12 + 24), v25);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _28023340;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_21;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  Id = ServantScriptMaster__getId(
         this->fields.figureSvtId,
         imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
         0LL);
  if ( !this->fields.myRoomData )
    goto LABEL_21;
  v30 = Id;
  MyRoomData__getUsrSvtData(this->fields.myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  Form = UIStandFigureRender__GetForm(v30, 1, -1, 0LL);
  v36 = this->fields.imageIdList;
  if ( !v36 )
    goto LABEL_21;
  v37 = this->fields.figureSvtDispIdx;
  v38 = Form;
  if ( v36->fields._size <= (unsigned int)v37 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  items = v36->fields._items;
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v42 = items->m_Items[v37 + 1];
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_21:
    sub_B170D4();
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v42, 1, 0, v38, 10, v43, 0LL);
}


void __fastcall MyRoomControl__SetMySvtFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x2

  if ( (byte_40FC06F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v8);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass204_0__SetMySvtFigure_b__0__, v9);
    sub_B16FFC(&MyRoomControl___c__DisplayClass204_0_TypeInfo, v10);
    byte_40FC06F = 1;
  }
  v11 = sub_B170CC(MyRoomControl___c__DisplayClass204_0_TypeInfo, end_act, method, v3, v4);
  MyRoomControl___c__DisplayClass204_0___ctor((MyRoomControl___c__DisplayClass204_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v11 + 24) = end_act,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 24),
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
    sub_B170D4();
  }
  materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
  materialServantId = this->fields.materialServantId;
  if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass204_0__SetMySvtFigure_b__0__,
    0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v33, v34);
}


void __fastcall MyRoomControl__SetPhotoCampaignButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v7; // x1
  UIWidget_o *photoCampaignButtonSprite; // x0
  UIWidget_o *photoCampaignButtonLabel; // x0
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
        (photoCampaignButtonLabel = (UIWidget_o *)this->fields.photoCampaignButtonLabel) == 0LL) )
  {
    sub_B170D4();
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color(photoCampaignButtonLabel, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  srcLineSprite_o *v15; // x20
  srcLineSprite_o *v16; // x0
  srcLineSprite_o *v17; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_40FC079 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC079 = 1;
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
    v8 = this->fields.voicePlayEffect;
    if ( !v8 )
      goto LABEL_20;
    transform = UnityEngine_GameObject__get_transform(v8, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
          (v13 = this->fields.voicePlayEffect) == 0LL)
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v13,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v15 = Component_srcLineSprite,
          v16 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                  this->fields.voicePlayEffect,
                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v15)
      || (v17 = v16, UITweener__set_tweenFactor((UITweener_o *)v15, 0.0, 0LL), !v17) )
    {
LABEL_20:
      sub_B170D4();
    }
    UITweener__set_tweenFactor((UITweener_o *)v17, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      HIDWORD(v15->fields.mFSM) = 1;
      HIDWORD(v17->fields.mFSM) = 1;
    }
    else
    {
      HIDWORD(v15->fields.mFSM) = 0;
      HIDWORD(v17->fields.mFSM) = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_45022212((UITweener_o *)v15, 1, 0LL);
    UITweener__Play_45022212((UITweener_o *)v17, 1, 0LL);
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
  sub_B16F98(
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
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v4);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B170D4();
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_40FC066 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_40FC066 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  MyRoomAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w0
  int32_t v8; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_40FC05A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FC05A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MyRoomAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (v7 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(MasterData_WarQuestSelectionMaster, -1, v6),
        !this->fields.frontObjectManager) )
  {
    sub_B170D4();
  }
  v8 = v7;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v8 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v8, 0LL);
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
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w21
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  WebViewManager_o *v17; // x0
  UserServantCollectionMaster_o *v18; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  const MethodInfo *v21; // x2
  UserServantCollectionEntity_o *v22; // x22
  int32_t v23; // w23
  int32_t v24; // w26
  int32_t ImageLimitCount; // w24
  WebViewManager_o *v26; // x0
  ServantLimitImageMaster_o *v27; // x0
  int32_t v28; // w0
  int32_t v29; // w24
  System_Collections_Generic_List_int__o *v30; // x0
  System_Int32_array *SortedCostumeIds; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x20
  unsigned __int64 v36; // x23
  int32_t v37; // w22
  System_Collections_Generic_List_int__o *v38; // x0

  if ( (byte_40FC05C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FC05C = 1;
  }
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 servantId,
                                 LimitCount,
                                 0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_40;
  System_Collections_Generic_List_int___Clear(
    materialImageIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_40;
  v18 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v17,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_40;
  if ( !v18 )
    goto LABEL_40;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, usrData->fields.userId, servantId, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_40;
  v22 = EntityDefinitely;
  if ( (EntityDefinitely->fields.maxLimitCount & 0x80000000) == 0 )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v23, 0LL);
      v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v26 )
        goto LABEL_40;
      v27 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v26,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !v27 )
        goto LABEL_40;
      v28 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v27, servantId, ImageLimitCount, 0LL);
      if ( !this->fields.materialImageIdList )
        goto LABEL_40;
      v29 = v28;
      EntityDefinitely = (UserServantCollectionEntity_o *)System_Collections_Generic_List_int___Contains(
                                                            this->fields.materialImageIdList,
                                                            v28,
                                                            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)EntityDefinitely & 1) == 0 )
      {
        v30 = this->fields.materialImageIdList;
        if ( !v30 )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          v30,
          v29,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v29 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v24;
        ++v24;
      }
      if ( ++v23 > v22->fields.maxLimitCount )
        goto LABEL_29;
    }
  }
  v24 = 0;
LABEL_29:
  SortedCostumeIds = MyRoomControl__GetSortedCostumeIds((MyRoomControl_o *)EntityDefinitely, servantId, v21);
  if ( !SortedCostumeIds )
LABEL_40:
    sub_B170D4();
  v34 = *(_QWORD *)&SortedCostumeIds->max_length;
  v35 = SortedCostumeIds;
  if ( (int)v34 >= 1 )
  {
    v36 = 0LL;
    do
    {
      if ( v36 >= (unsigned int)v34 )
      {
        sub_B17100(SortedCostumeIds, v32, v33);
        sub_B170A0();
      }
      v37 = v35->m_Items[v36 + 1];
      if ( v37 >= 1 )
      {
        v38 = this->fields.materialImageIdList;
        if ( !v38 )
          goto LABEL_40;
        System_Collections_Generic_List_int___Add(
          v38,
          v37,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v37 == ServantImageLimitSealAfter )
          this->fields.materialFigureSvtDispIdx = v24;
        ++v24;
      }
      LODWORD(v34) = v35->max_length;
      ++v36;
    }
    while ( (__int64)v36 < (int)v34 );
  }
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Gesture_EventHandler_o *v8; // x20

  if ( (byte_40FC062 & 1) == 0 )
  {
    sub_B16FFC(&Gesture_EventHandler_TypeInfo, method);
    sub_B16FFC(&FingerGestures_TypeInfo, v6);
    sub_B16FFC(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v7);
    byte_40FC062 = 1;
  }
  v8 = (Gesture_EventHandler_o *)sub_B170CC(Gesture_EventHandler_TypeInfo, method, v2, v3, v4);
  Gesture_EventHandler___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v8, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC0BA & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__StartCameraEffect_d__352_TypeInfo, method);
    byte_40FC0BA = 1;
  }
  v6 = sub_B170CC(MyRoomControl__StartCameraEffect_d__352_TypeInfo, method, v2, v3, v4);
  MyRoomControl__StartCameraEffect_d__352___ctor((MyRoomControl__StartCameraEffect_d__352_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  struct CStateManager_MyRoomControl__o *mFSM; // x0

  if ( (byte_40FC064 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MyRoomControl__update__, method);
    byte_40FC064 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_40FC0AF & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FC0AF = 1;
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
      sub_B170D4();
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

  if ( (byte_40FC0C2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FC0C2 = 1;
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
      sub_B170D4();
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
  struct UIPanel_o *MaterialEventLogItemListPanel; // x0
  void (__fastcall *v5)(float); // x9
  long double v6; // q0
  struct UIPanel_o *valentineListObj; // x0
  UIPanel_c *klass; // x8
  struct UIPanel_o *v9; // x0
  UnityEngine_GameObject_o *servantListBg; // x0
  UnityEngine_GameObject_o *listLabelObject; // x0
  UnityEngine_GameObject_o *servantListLabelObject; // x0

  MaterialEventLogItemListPanel = this->fields.MaterialEventLogItemListPanel;
  if ( !MaterialEventLogItemListPanel )
    goto LABEL_11;
  v5 = (void (__fastcall *)(float))MaterialEventLogItemListPanel->klass->vtable._8_set_alpha.method;
  if ( isActive )
  {
    v5(0.0);
    valentineListObj = this->fields.valentineListObj;
    if ( !valentineListObj )
      goto LABEL_11;
    klass = valentineListObj->klass;
    LODWORD(v6) = 1.0;
  }
  else
  {
    v5(1.0);
    v9 = this->fields.valentineListObj;
    if ( !v9 )
      goto LABEL_11;
    klass = v9->klass;
    LODWORD(v6) = 0;
  }
  ((void (__fastcall *)(long double))klass->vtable._8_set_alpha.method)(v6);
  servantListBg = this->fields.servantListBg;
  if ( !servantListBg
    || (UnityEngine_GameObject__SetActive(servantListBg, this->fields.IsListActive, 0LL),
        (listLabelObject = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(listLabelObject, this->fields.IsListActive, 0LL),
        (servantListLabelObject = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(servantListLabelObject, !this->fields.IsListActive, 0LL);
}


void __fastcall MyRoomControl__WaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = MyRoomControl__CoWaitForConstructingRecordWithServant(this, setEndAction, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__336_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FC0CC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__CloseMultipleView_b__336_1__, v6);
    byte_40FC0CC = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__336_1__, 0LL);
  if ( !multipleViewComponent )
    sub_B170D4();
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v8, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__336_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v4; // x0
  const MethodInfo *v5; // x4
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v11; // x20
  int max_length; // w9
  StandFigureBack_o *v13; // x0
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v15; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 40, 0, 0LL);
  v4 = this->fields.titleInfo;
  if ( !v4 )
    goto LABEL_10;
  TitleInfoControl__FrameIn(v4, 1, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v5);
  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_10;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
    {
      sub_B17100(v7, v8, v9);
      sub_B170A0();
    }
    v13 = multipleStandFigureBacks->m_Items[v11];
    if ( v13 )
    {
      StandFigureBack__Init(v13, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v11;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_10;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
LABEL_10:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v15);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__359_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FC0CD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_1__, v6);
    byte_40FC0CD = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__359_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_B170D4();
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v8, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__359_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v4; // x0
  const MethodInfo *v5; // x4
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 40, 0, 0LL), (v4 = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(v4, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v5),
        (photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_B170D4();
  }
  StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v7);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__253_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B170D4();
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___GoToTitle_b__281_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  MyRoomControl_o *v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  CommonUI_o *v15; // x19
  AvalonSceneManager_c *v16; // x8
  MyRoomControl___c_c *v17; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__281_1; // x20
  Il2CppObject *v21; // x21
  struct MyRoomControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FC0CB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_MyRoomControl___c__GoToTitle_b__281_1__, v6);
    sub_B16FFC(&MyRoomControl___c_TypeInfo, v7);
    byte_40FC0CB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v9, v10);
    v15 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    v17 = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      v17 = MyRoomControl___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__281_1 = static_fields->__9__281_1;
    if ( !_9__281_1 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__281_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      System_Action___ctor(_9__281_1, v21, Method_MyRoomControl___c__GoToTitle_b__281_1__, 0LL);
      v22 = MyRoomControl___c_TypeInfo->static_fields;
      v22->__9__281_1 = _9__281_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v22->__9__281_1,
        (System_Int32_array **)_9__281_1,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( v15 )
    {
      CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, _9__281_1, 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__250_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  StandFigureBack_o *v13; // x0
  StandFigureBack_o *v14; // x0
  UIStandFigureR_o *SvtStandFigure; // x0
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_GameObject_o *svtObj; // x0
  float v20; // s8
  UnityEngine_Transform_o *v21; // x0
  float v22; // s1
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s9
  UnityEngine_Transform_o *v25; // x0
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC0C9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__LoadServantForm_b__228_1__, v4);
    sub_B16FFC(&StringLiteral_8533, v5);
    byte_40FC0C9 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__228_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v12, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( (unsigned int)(mState - 1) > 1 )
  {
    MyRoomControl__LoadServantFormEnd(this, method);
    return;
  }
  v13 = this->fields.standFigureBack;
  if ( !v13 )
    goto LABEL_18;
  StandFigureBack__Fadein(v13, 0LL, 0LL);
  v14 = this->fields.standFigureBack;
  if ( !v14 )
    goto LABEL_18;
  SvtStandFigure = StandFigureBack__GetSvtStandFigure(v14, 0, 0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  bodyTexture = (UnityEngine_Component_o *)SvtStandFigure->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_18;
  transform = UnityEngine_Component__get_transform(bodyTexture, 0LL);
  if ( !transform )
    goto LABEL_18;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  svtObj = this->fields.svtObj;
  if ( !svtObj )
    goto LABEL_18;
  v20 = *(float *)&localPosition;
  v21 = UnityEngine_GameObject__get_transform(svtObj, 0LL);
  if ( !v21 )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)(&v22 - 1) = UnityEngine_Transform__get_localPosition(v21, 0LL);
  v23 = this->fields.svtObj;
  if ( !v23 )
    goto LABEL_18;
  v24 = v22;
  v25 = UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !v25 )
    goto LABEL_18;
  v27 = UnityEngine_Transform__get_localPosition(v25, 0LL);
  v27.fields.x = -v20;
  v27.fields.y = v24;
  MyRoomControl__moveControl(this, this->fields.svtObj, v27, (System_String_o *)StringLiteral_8533, v26);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__322_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_B170D4();
  MultipleViewComponent__Open(multipleViewComponent, 1, 0LL);
}


void __fastcall MyRoomControl___OnClickSelectPhotoCampaign_b__346_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x0

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_B170D4();
  PhotoCampaignComponent__Open(photoCampaignComponent, 1, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__273_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC0CA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094, method);
    byte_40FC0CA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__211_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC0C8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7053, method);
    byte_40FC0C8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7053, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__248_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B170D4();
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__202_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v5; // x8

  if ( (byte_40FC0C7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8378, method);
    sub_B16FFC(&StringLiteral_8379, v3);
    byte_40FC0C7 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  if ( this->fields.type == 6 )
    v5 = &StringLiteral_8379;
  else
    v5 = &StringLiteral_8378;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__184_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC0C6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, result);
    byte_40FC0C6 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MyRoomData_o *myRoomData; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v9; // x8
  MstProfileComponent_o *mstPfComp; // x0

  if ( (byte_40FC082 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11043, result);
    sub_B16FFC(&StringLiteral_21129, v5);
    sub_B16FFC(&StringLiteral_11041, v6);
    byte_40FC082 = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129, 0LL) )
  {
    mstPfComp = this->fields.mstPfComp;
    if ( mstPfComp )
    {
      MstProfileComponent__resetInput(mstPfComp, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        v9 = &StringLiteral_11041;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_12;
  MyRoomData__setUserInfoData(myRoomData, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_12;
  v9 = &StringLiteral_11043;
LABEL_11:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_40FC08E & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FC08E = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_B170D4();
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
    sub_B170D4();
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_B170D4();
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
  struct MyRoomSvtControl_o *svtCtr; // x0
  StandFigureBack_o *standFigureBack; // x0

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.standFigureCollectList = 0LL,
        sub_B16F98((BattleServantConfConponent_o *)&svtCtr->fields.standFigureCollectList, 0LL, v2, v3, v4, v5, v6, v7),
        (standFigureBack = this->fields.standFigureBack) == 0LL) )
  {
    sub_B170D4();
  }
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC080 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11540, method);
    byte_40FC080 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11540, 0LL);
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
  WebViewManager_o *Instance; // x0
  MyRoomAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  int32_t v12; // w20
  WebViewManager_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC05E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&MyRoomControl_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC05E = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (MyRoomAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  v11 = MyRoomAddMaster__GetChangeMyRoomBgm(MasterData_WarQuestSelectionMaster, v10);
  if ( v11 )
  {
    v12 = v11;
    v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v13 )
      goto LABEL_15;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v13,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v14 )
      goto LABEL_15;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v14,
           &entity,
           v12,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    {
      if ( entity )
        return entity->fields.age;
LABEL_15:
      sub_B170D4();
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

  if ( (byte_40FC05F & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    byte_40FC05F = 1;
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
    sub_B170D4();
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
    sub_B170D4();
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
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x1
  MyRoomData_o *myRoomData; // x0
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
  int32_t SvtVoiceId; // w0
  struct System_Collections_Generic_List_int__o *v39; // x21
  __int64 figureSvtDispIdx; // x19
  int32_t v41; // w20
  int32_t LimitCountByImageLimit; // w19
  StandFigureBack_c *v43; // x0
  WebViewManager_o *Instance; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FC072 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&MyRoomControl_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StandFigureBack_TypeInfo, v10);
    byte_40FC072 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B16F98(
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
  if ( MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0LL) )
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
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  v39 = this->fields.imageIdList;
  if ( !v39 )
    goto LABEL_41;
  figureSvtDispIdx = this->fields.figureSvtDispIdx;
  v41 = SvtVoiceId;
  if ( v39->fields._size <= (unsigned int)figureSvtDispIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  LimitCountByImageLimit = v39->fields._items->m_Items[figureSvtDispIdx + 1];
  v43 = StandFigureBack_TypeInfo;
  if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v43 = StandFigureBack_TypeInfo;
  }
  if ( LimitCountByImageLimit < v43->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(LimitCountByImageLimit, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_41:
    sub_B170D4();
  }
  return ServantVoiceMaster__getEntity(MasterData_WarQuestSelectionMaster, 1, v41, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_40FC07B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FC07B = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_B170D4();
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FC091 & 1) == 0 )
  {
    sub_B16FFC(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21129, v7);
    byte_40FC091 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10, v11);
  NetworkManager_ResultCallbackFunc___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v13,
                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_14;
  TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 128, 0LL);
  EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall MyRoomControl__hideContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_B170D4();
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_40FC089 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__hideFavoriteSvt_b__273_0__, v6);
    byte_40FC089 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__273_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v7, 1, v8);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_B170D4();
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_B170D4();
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_B170D4();
  SetGameOptionComponent__hideGameOption(optionComp, 0LL);
}


void __fastcall MyRoomControl__hideProfile(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0
  UnityEngine_GameObject_o *mstpfObj; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp || (MstProfileComponent__hideMstProfile(mstPfComp, 0LL), (mstpfObj = this->fields.mstpfObj) == 0LL) )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(mstpfObj, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_B170D4();
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FC08B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094, method);
    byte_40FC08B = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  SoundPlayerComponent_o *v4; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v6; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_40FC08C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC08C = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (v4 = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_B170D4();
  }
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(v4, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
  {
    MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v6);
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
  int v6; // s0
  const MethodInfo *v10; // x1
  MyRoomControl_c *v11; // x0
  StandFigureBack_o *standFigureBack; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21

  if ( (byte_40FC075 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__hideSvtFigure_b__211_0__, v3);
    sub_B16FFC(&MyRoomControl_TypeInfo, v4);
    byte_40FC075 = 1;
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
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__211_0__, 0LL);
  if ( !standFigureBack )
LABEL_9:
    sub_B170D4();
  StandFigureBack__Fadeout(standFigureBack, v17, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_B170D4();
  UserServantCoinComponent__hideMenu(userServantCoinComp, 0LL);
}


void __fastcall MyRoomControl__hideUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserItemListViewManager_o *usrItemListViewManager; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  usrItemListViewManager = this->fields.usrItemListViewManager;
  if ( !usrItemListViewManager
    || (UserItemListViewManager__DestroyList(usrItemListViewManager, 0LL),
        (v4 = (UnityEngine_Component_o *)this->fields.usrItemListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC086 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__initMaterial_d__248_TypeInfo, method);
    byte_40FC086 = 1;
  }
  v6 = sub_B170CC(MyRoomControl__initMaterial_d__248_TypeInfo, method, v2, v3, v4);
  MyRoomControl__initMaterial_d__248___ctor((MyRoomControl__initMaterial_d__248_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v26; // x3
  __int64 v27; // x4
  PlayMakerFSM_o *myRoomFsm; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct CStateManager_MyRoomControl__o *mFSM; // x0
  struct CStateManager_MyRoomControl__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  MyRoomControl_StateEtc_o *v42; // x21
  MyRoomStateMaterial_o *mStateMaterial; // x0
  MyRoomData_o *myRoomData; // x0
  WebViewManager_o *Instance; // x0
  struct EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMaster_o **p_eventMaster; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v55; // x0
  MyRoomListControl_o *myRoomListCtr; // x0
  UnityEngine_Collider_o *svtClickCollider; // x0
  UnityEngine_Collider_o *voiceClickCollider; // x0
  const MethodInfo *v59; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  MyRoomControl___c_c *v66; // x0
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__179_0; // x22
  Il2CppObject *v69; // x23
  struct MyRoomControl___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  _BOOL8 v77; // x0
  const MethodInfo *v78; // x4
  MyRoomControl_o *v79; // x0
  const MethodInfo *v80; // x4
  __int64 v81; // x1
  MyRoomParamsManager_c *v82; // x0
  struct MyRoomParamsManager_StaticFields *v83; // x8
  SoundPlayerComponent_o *soundPlayerComp; // x0
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Action_o *v93; // x22
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  float x; // w8
  float y; // w9
  float z; // w10
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_GameObject_o *changeDispTouch; // x0
  const MethodInfo *v107; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct UISprite_o *v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  System_String_array **v113; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v115; // x21
  int max_length; // w9
  StandFigureBack_o *v117; // x0
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  UnityEngine_GameObject_o *multipleViewDisableUiButton; // x0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  int v122; // w8
  UnityEngine_GameObject_o *multipleViewButton; // x0
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  System_String_o *v126; // x0
  const MethodInfo *v127; // x1
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  EventMaster_o *v133; // x0
  EventEntity_array *EnableEntityList; // x20
  bool IsNullOrEmpty; // w0
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v143; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x20
  UILabel_o *photoCampaignButtonLabel; // x21
  System_String_o *v146; // x0
  const MethodInfo *v147; // x2
  struct EventEntity_o *photoCampaignEntity; // x8
  EventMaster_o *eventMaster; // x0
  const MethodInfo *v150; // x1
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x1
  UnityEngine_Vector3_o v153; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC059 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_CStateManager_MyRoomControl___ctor__, v4);
    sub_B16FFC(&Method_CStateManager_MyRoomControl__add__, v5);
    sub_B16FFC(&CStateManager_MyRoomControl__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_MyRoomControl_LoadScriptFileListAssetData__, v12);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&MyRoomControl_StateEtc_TypeInfo, v16);
    sub_B16FFC(&Method_MyRoomControl___c__initMyRoom_b__179_0__, v17);
    sub_B16FFC(&MyRoomControl___c_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_10403, v19);
    sub_B16FFC(&StringLiteral_16896, v20);
    sub_B16FFC(&StringLiteral_6864, v21);
    sub_B16FFC(&StringLiteral_8827, v22);
    byte_40FC059 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v153.fields.z = 0.0;
  *(_QWORD *)&v153.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( !this->fields.mFSM )
  {
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_MyRoomControl__TypeInfo,
                                                                v24,
                                                                v25,
                                                                v26,
                                                                v27);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v29,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2907EF0 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v29;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    mFSM = this->fields.mFSM;
    if ( !mFSM )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_2907FBC *)Method_CStateManager_MyRoomControl__add__);
    v37 = this->fields.mFSM;
    v42 = (MyRoomControl_StateEtc_o *)sub_B170CC(MyRoomControl_StateEtc_TypeInfo, v38, v39, v40, v41);
    MyRoomControl_StateEtc___ctor(v42, 0LL);
    if ( !v37 )
      goto LABEL_59;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v37,
      1,
      (IState_T__o *)v42,
      (const MethodInfo_2907FBC *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v25);
  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    goto LABEL_59;
  MyRoomStateMaterial__PreInit(mStateMaterial, this, 0LL);
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_59;
  MyRoomData__initMyRoomData(myRoomData, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (struct EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_59;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myRoomFsm, 1, 0LL, 40, 0LL);
  v55 = this->fields.titleInfo;
  if ( !v55 )
    goto LABEL_59;
  TitleInfoControl__setBackBtnDepth(v55, 30, 0LL);
  myRoomListCtr = this->fields.myRoomListCtr;
  if ( !myRoomListCtr )
    goto LABEL_59;
  MyRoomListControl__Setup(myRoomListCtr, 0LL);
  svtClickCollider = (UnityEngine_Collider_o *)this->fields.svtClickCollider;
  if ( !svtClickCollider )
    goto LABEL_59;
  UnityEngine_Collider__set_enabled(svtClickCollider, 0, 0LL);
  voiceClickCollider = (UnityEngine_Collider_o *)this->fields.voiceClickCollider;
  if ( !voiceClickCollider )
    goto LABEL_59;
  UnityEngine_Collider__set_enabled(voiceClickCollider, 0, 0LL);
  this->fields.isHeroineReave = 0;
  *(_WORD *)&this->fields.isServantMaterial = 0;
  *(_DWORD *)&this->fields.isVoiceLoading = 0;
  this->fields.isExistVoiceData = 1;
  this->fields.materialServantId = -1;
  MyRoomControl__setUserStInfoView(this, v59);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(mMainObj, LocalPosition, 0LL);
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  v66 = MyRoomControl___c_TypeInfo;
  if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v66 = MyRoomControl___c_TypeInfo;
  }
  static_fields = v66->static_fields;
  _9__179_0 = static_fields->__9__179_0;
  if ( !_9__179_0 )
  {
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
    }
    v69 = (Il2CppObject *)static_fields->__9;
    _9__179_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v61, v62, v63, v64);
    System_Action___ctor(_9__179_0, v69, Method_MyRoomControl___c__initMyRoom_b__179_0__, 0LL);
    v70 = MyRoomControl___c_TypeInfo->static_fields;
    v70->__9__179_0 = _9__179_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v70->__9__179_0,
      (System_Int32_array **)_9__179_0,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_59;
  v77 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, _9__179_0, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v77,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v78);
  MyRoomControl__setupSortWindowUIMoveData(v79, this->fields.sortWindowObj, &v, &v153, v80);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_40FC0CE )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v81);
    byte_40FC0CE = 1;
  }
  v82 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v82 = MyRoomParamsManager_TypeInfo;
  }
  v83 = v82->static_fields;
  soundPlayerComp = this->fields.soundPlayerComp;
  this->fields.IsListActive = v83->_IsListActive_k__BackingField;
  if ( !soundPlayerComp )
    goto LABEL_59;
  SoundPlayerComponent__initMenu(soundPlayerComp, 0LL);
  MyRoomControl__SetupFrontObject(this, v85);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v86);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v93 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v89, v90, v91, v92);
  System_Action___ctor(v93, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_59;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v93, v94);
  MyRoomControl__setupSvtImageIdList(this, v95);
  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    goto LABEL_59;
  MyRoomHelpListViewManager__LoadBaseSprite(helpListViewManager, 0LL);
  changeLimitBtn = this->fields.changeLimitBtn;
  this->fields.mState = 0;
  if ( !changeLimitBtn )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(changeLimitBtn, 1, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  if ( !moveBtnObj )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(moveBtnObj, 1, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  if ( this->fields.isSetVoicePlayButtonDefaultPos )
  {
    x = this->fields.voicePlayButtonDefaultPos.fields.x;
    y = this->fields.voicePlayButtonDefaultPos.fields.y;
    z = this->fields.voicePlayButtonDefaultPos.fields.z;
  }
  else
  {
    v158 = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    x = v158.fields.x;
    y = v158.fields.y;
    z = v158.fields.z;
    this->fields.voicePlayButtonDefaultPos = v158;
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  v103 = this->fields.changeLimitBtn;
  this->fields.voicePlayBtnInitPos.fields.x = x;
  this->fields.voicePlayBtnInitPos.fields.y = y;
  this->fields.voicePlayBtnInitPos.fields.z = z;
  v159 = GameObjectExtensions__GetLocalPosition(v103, 0LL);
  v104 = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v159;
  v160 = GameObjectExtensions__GetLocalPosition(v104, 0LL);
  v105 = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v160;
  v161 = GameObjectExtensions__GetLocalPosition(v105, 0LL);
  changeDispTouch = this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v161;
  if ( !changeDispTouch )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(changeDispTouch, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v107);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_16896, 0LL);
  v110 = this->fields.changeServantListBtnSprite;
  if ( !v110 )
    goto LABEL_59;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v110->klass->vtable._33_MakePixelPerfect.method)(
    v110,
    v110->klass->vtable._34_get_minWidth.methodPtr);
  v162 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v162;
  if ( !multipleStandFigureBacks )
    goto LABEL_59;
  v115 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v115 >= max_length )
      break;
    if ( (unsigned int)v115 >= max_length )
      goto LABEL_96;
    v117 = multipleStandFigureBacks->m_Items[v115];
    if ( v117 )
    {
      StandFigureBack__Init(v117, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v115;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_59;
  }
  multipleViewCloseButton = this->fields.multipleViewCloseButton;
  if ( !multipleViewCloseButton )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
  multipleViewDisableUiButton = this->fields.multipleViewDisableUiButton;
  if ( !multipleViewDisableUiButton )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(multipleViewDisableUiButton, 0, 0LL);
  if ( !*p_eventMaster )
    goto LABEL_59;
  this->fields.isEnableMultipleView = EventMaster__IsEnableMyRoomMultipleView(*p_eventMaster, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (OrganizationList = UserServantMaster__getOrganizationList(Master_WarQuestSelectionMaster, 0LL)) == 0LL
    || (v122 = OrganizationList->max_length,
        multipleViewButton = this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = v122 > 1,
        !multipleViewButton) )
  {
LABEL_59:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnableMultipleView, 0LL);
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
    v126 = LocalizationManager__Get((System_String_o *)StringLiteral_8827, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_59;
    UILabel__set_text(multipleViewButtonLabel, v126, 0LL);
    if ( !*p_eventMaster )
      goto LABEL_59;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(*p_eventMaster, 0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v127);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v128);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v129);
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_59;
  StandFigureBack__Init(photoCampaignStandFigureBack, 0LL);
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 0, 0LL);
  photoCampaignProduction = this->fields.photoCampaignProduction;
  if ( !photoCampaignProduction )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v133 = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v133 )
    goto LABEL_59;
  EnableEntityList = EventMaster__GetEnableEntityList(v133, 26, 1, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntityList, 0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  this->fields.isEnablePhotoCampaign = !IsNullOrEmpty;
  if ( !photoCampaignButton )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(photoCampaignButton, !IsNullOrEmpty, 0LL);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoCampaignState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_59;
    if ( !EnableEntityList->max_length )
    {
LABEL_96:
      sub_B17100(v111, v112, v113);
      sub_B170A0();
    }
    v143 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v143;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.photoCampaignEntity,
      (System_Int32_array **)v143,
      v113,
      v137,
      v138,
      v139,
      v140,
      v141);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v146 = LocalizationManager__Get((System_String_o *)StringLiteral_10403, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_59;
    UILabel__set_text(photoCampaignButtonLabel, v146, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_59;
    MyRoomControl__LoadPhotoCampaignAssets(this, (*p_photoCampaignEntity)->fields.id, v147);
    photoCampaignEntity = this->fields.photoCampaignEntity;
    if ( !photoCampaignEntity )
      goto LABEL_59;
    eventMaster = this->fields.eventMaster;
    if ( !eventMaster )
      goto LABEL_59;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               eventMaster,
                                               photoCampaignEntity->fields.id,
                                               0LL);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v150);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v151);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v152);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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

  z = movePos.fields.z;
  movePos.fields.z = movePos.fields.y;
  movePos.fields.y = movePos.fields.x;
  v8 = TweenPosition__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&movePos.fields.y, 0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v8 )
    sub_B170D4();
  v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.eventReceiver, gameObject, v10, v11, v12, v13, v14, v15);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v8->fields.callWhenFinished,
      (System_Int32_array **)callwhenFinished,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v8->fields.style = 3;
}


void __fastcall MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v4; // x1
  MyRoomControl_c *v5; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_40FC08F & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC08F = 1;
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
        sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  MyRoomHelpListViewManager_CallbackFunc2_o *v10; // x21

  if ( (byte_40FC090 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl_helpClose__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC090 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v10 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_B170CC(
                                                       MyRoomHelpListViewManager_CallbackFunc2_TypeInfo,
                                                       v6,
                                                       v7,
                                                       v8,
                                                       v9);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_B170D4();
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v10, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_B170D4();
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_B170D4();
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
  ClientMissionManager_o *Instance; // x0
  ClientMissionManager_o *v14; // x0
  WebViewManager_o *v15; // x0
  VoiceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t FlagRequestNumber; // w0
  int32_t v18; // w20
  TopMyRoomRequest_o *Request_WarBoardWallAttackRequest; // x21
  __int64 v20; // x2
  System_Int32_array_array *v21; // x22
  __int64 v22; // x2
  System_Int32_array **v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  int v26; // w8
  System_Int32_array **v27; // x23
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FC07E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_B16FFC(&int_____TypeInfo, v3);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FC07E = 1;
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
      Instance = (ClientMissionManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      ClientMissionManager__MyRoomPlayVoice(Instance, v10, 0LL);
      v14 = (ClientMissionManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !v14 )
        goto LABEL_23;
      ClientMissionManager__SendRequest(v14, 0LL, 0LL);
      v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v15 )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = (VoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v15,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber(MasterData_WarQuestSelectionMaster, v10, v12, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v18 = FlagRequestNumber;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TopMyRoomRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    0LL,
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v21 = (System_Int32_array_array *)sub_B17014(int_____TypeInfo, 1LL, v20);
        v23 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v22);
        if ( v23 )
        {
          v26 = *((_DWORD *)v23 + 6);
          v27 = v23;
          if ( !v26 )
            goto LABEL_24;
          *((_DWORD *)v23 + 8) = v10;
          if ( v26 == 1 )
            goto LABEL_24;
          *((_DWORD *)v23 + 9) = v18;
          if ( !v21 )
            goto LABEL_23;
          v23 = (System_Int32_array **)sub_B170BC(v23, v21->obj.klass->_1.element_class);
          if ( !v23 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
          if ( !v21->max_length )
          {
LABEL_24:
            sub_B17100(v23, v24, v25);
            sub_B170A0();
          }
          v21->m_Items[0] = (System_Int32_array *)v27;
          sub_B16F98((BattleServantConfConponent_o *)v21->m_Items, v27, v25, v28, v29, v30, v31, v32);
          if ( Request_WarBoardWallAttackRequest )
          {
            TopMyRoomRequest__beginRequest(Request_WarBoardWallAttackRequest, v21, 0LL);
            return;
          }
        }
LABEL_23:
        sub_B170D4();
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  int32_t materialServantId; // w20
  int32_t v7; // w21
  SoundPlayerComponent_o *soundPlayerComp; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  MyRoomBackGroundManager_o *backGroundManager; // x0
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  MyRoomHelpListViewManager_o *v15; // x0
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  struct UIPanel_o *MaterialEventLogItemListPanel; // x0

  v2 = this;
  if ( (byte_40FC069 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_40FC069 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v7 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, v7, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  soundPlayerComp = v2->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    goto LABEL_19;
  SoundPlayerComponent__DestroyMenu(soundPlayerComp, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v2, v9);
  MyRoomControl__destroySvtFigure(v2, v10);
  backGroundManager = v2->fields.backGroundManager;
  if ( !backGroundManager )
    goto LABEL_19;
  MyRoomBackGroundManager__QuitBackGround(backGroundManager, v11);
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_19;
  MaterialEventLogListViewManager__DestroyList(mMaterialEventLogListViewManager, 0LL);
  helpListViewManager = v2->fields.helpListViewManager;
  if ( !helpListViewManager
    || (MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL), (v15 = v2->fields.helpListViewManager) == 0LL)
    || (MyRoomHelpListViewManager__ReleaseBaseSprite(v15, 0LL),
        (frontObjectManager = v2->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL),
        (MaterialEventLogItemListPanel = v2->fields.MaterialEventLogItemListPanel) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))MaterialEventLogItemListPanel->klass->vtable._8_set_alpha.method)(
    MaterialEventLogItemListPanel,
    MaterialEventLogItemListPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FC07F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl_endReflectionGameOption__, v6);
    byte_40FC07F = 1;
  }
  optionComp = this->fields.optionComp;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_B170D4();
  SetGameOptionComponent__reflectionGameOption(optionComp, v8, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t genderType; // w19
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x20
  UserGameEntity_o *v19; // x0

  if ( (byte_40FC081 & 1) == 0 )
  {
    sub_B16FFC(&Method_MyRoomControl_callbackChangeName__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3899, v6);
    byte_40FC081 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_14;
  if ( !this->fields.myRoomFsm )
    goto LABEL_14;
  genderType = SelfUserGame->fields.genderType;
  Fsm = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !Fsm )
    goto LABEL_14;
  variables = Fsm->fields.variables;
  if ( !variables )
    goto LABEL_14;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(variables, (System_String_o *)StringLiteral_3899, 0LL);
  if ( !FsmString )
    goto LABEL_14;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v13,
                                                 v14,
                                                 v15,
                                                 v16);
  NetworkManager_ResultCallbackFunc___ctor(v17, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v17,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  v19 = UserGameMaster__getSelfUserGame(0LL);
  if ( !v19 || !Request_WarBoardWallAttackRequest )
LABEL_14:
    sub_B170D4();
  UserNameChangeRequest__beginRequest(Request_WarBoardWallAttackRequest, Value, genderType, v19->fields.message, 0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_B170D4();
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  System_Int32_array **SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 figureSvtDispIdx; // x24
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
  System_String_o *asstName; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x3

  if ( (byte_40FC076 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isReset);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass212_0__resetSvtVoiceData_b__0__, v8);
    sub_B16FFC(&MyRoomControl___c__DisplayClass212_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_8378, v10);
    byte_40FC076 = 1;
  }
  v11 = sub_B170CC(MyRoomControl___c__DisplayClass212_0_TypeInfo, isReset, method, v3, v4);
  MyRoomControl___c__DisplayClass212_0___ctor((MyRoomControl___c__DisplayClass212_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8378, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  SvtVoiceEnt = (System_Int32_array **)MyRoomControl__getSvtVoiceEnt(this, isReset, v18);
  *(_QWORD *)(v11 + 24) = SvtVoiceEnt;
  v21 = (ServantVoiceEntity_o **)(v11 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), SvtVoiceEnt, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v11 + 24) )
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                      *v21,
                      imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                      0LL);
  this->fields.voiceList = MyRoomVoiceList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceList,
    (System_Int32_array **)MyRoomVoiceList,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !*v21 )
    goto LABEL_15;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(*v21, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)VoiceAssetName,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  asstName = this->fields.asstName;
  v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass212_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v49, v50);
}


void __fastcall MyRoomControl__setContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 8;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (continueDeviceComp = this->fields.continueDeviceComp) == 0LL) )
  {
    sub_B170D4();
  }
  ContinueDeviceComponent__showMenu(continueDeviceComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setDefSvtPos(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  _BOOL4 isServantMaterial; // w23
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  UnityEngine_GameObject_o *mMainObj; // x20
  const MethodInfo *v8; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x0
  float v14; // s2
  UnityEngine_GameObject_o *servantListObj; // x22
  UnityEngine_GameObject_o *sortWindowObj; // x21
  UnityEngine_Transform_o *v17; // x0
  float v18; // s10
  UnityEngine_Transform_o *v19; // x0
  float v20; // s2
  float v21; // s11
  UnityEngine_Transform_o *v22; // x0
  float v23; // s12
  UnityEngine_Transform_o *v24; // x0
  float v25; // s13
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  int32_t mState; // w8
  StandFigureBack_o *standFigureBack; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *svtObj; // x0
  UnityEngine_Transform_o *v32; // x0
  float v33; // s1
  UnityEngine_GameObject_o *v34; // x0
  float v35; // s11
  UnityEngine_Transform_o *v36; // x0
  const MethodInfo *v37; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC098 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC098 = 1;
  }
  voicePlayBtn = this->fields.voicePlayBtn;
  if ( !voicePlayBtn )
    goto LABEL_35;
  isServantMaterial = this->fields.isServantMaterial;
  UnityEngine_GameObject__SetActive(voicePlayBtn, !this->fields.isServantMaterial, 0LL);
  changeLimitBtn = this->fields.changeLimitBtn;
  if ( !changeLimitBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(changeLimitBtn, 1, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
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
      transform = UnityEngine_GameObject__get_transform(this->fields.materialObj, 0LL);
      if ( !transform )
        goto LABEL_35;
      v39 = UnityEngine_Transform__get_localPosition(transform, 0LL);
      y = v39.fields.y;
      v13 = UnityEngine_GameObject__get_transform(mMainObj, 0LL);
      if ( !v13 )
        goto LABEL_35;
      *(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(v13, 0LL);
      servantListObj = this->fields.servantListObj;
      if ( !servantListObj )
        goto LABEL_35;
      sortWindowObj = this->fields.sortWindowObj;
      z = v14;
      v17 = UnityEngine_GameObject__get_transform(this->fields.servantListObj, 0LL);
      if ( !v17 )
        goto LABEL_35;
      v40 = UnityEngine_Transform__get_localPosition(v17, 0LL);
      v18 = v40.fields.y;
      v19 = UnityEngine_GameObject__get_transform(servantListObj, 0LL);
      if ( !v19 )
        goto LABEL_35;
      *(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_localPosition(v19, 0LL);
      if ( !sortWindowObj )
        goto LABEL_35;
      v21 = v20;
      v22 = UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !v22 )
        goto LABEL_35;
      v41 = UnityEngine_Transform__get_localPosition(v22, 0LL);
      v23 = v41.fields.y;
      v24 = UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !v24 )
        goto LABEL_35;
      v42 = UnityEngine_Transform__get_localPosition(v24, 0LL);
      v25 = v42.fields.z;
      v42.fields.x = -7.0;
      v42.fields.y = v18;
      v42.fields.z = v21;
      MyRoomControl__MyRoomlUIAnimationStart(this, servantListObj, v42, v26);
      v43.fields.x = 0.0;
      v43.fields.y = v23;
      v43.fields.z = v25;
      MyRoomControl__MyRoomlUIAnimationStart(this, sortWindowObj, v43, v27);
      x = 250.0;
LABEL_21:
      mState = this->fields.mState;
      if ( (unsigned int)(mState - 1) < 2 )
      {
        svtObj = this->fields.svtObj;
        if ( svtObj )
        {
          v32 = UnityEngine_GameObject__get_transform(svtObj, 0LL);
          if ( v32 )
          {
            *(UnityEngine_Vector3_o *)(&v33 - 1) = UnityEngine_Transform__get_localPosition(v32, 0LL);
            v34 = this->fields.svtObj;
            if ( v34 )
            {
              v35 = v33;
              v36 = UnityEngine_GameObject__get_transform(v34, 0LL);
              if ( v36 )
              {
                v44 = UnityEngine_Transform__get_localPosition(v36, 0LL);
                v44.fields.x = -512.0;
                v44.fields.y = v35;
                MyRoomControl__moveControl(this, this->fields.svtObj, v44, 0LL, v37);
                goto LABEL_31;
              }
            }
          }
        }
        goto LABEL_35;
      }
      if ( mState == 3 )
      {
        standFigureBack = this->fields.standFigureBack;
        if ( standFigureBack )
        {
          StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
          v30 = this->fields.voicePlayBtn;
          if ( v30 )
          {
            UnityEngine_GameObject__SetActive(v30, !isServantMaterial, 0LL);
            goto LABEL_31;
          }
        }
LABEL_35:
        sub_B170D4();
      }
LABEL_31:
      v45.fields.x = x;
      v45.fields.y = y;
      v45.fields.z = z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, v45, v8);
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
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *helpBtn; // x0

  moveBtnObj = this->fields.moveBtnObj;
  if ( !moveBtnObj
    || (v5 = isDisp,
        UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0LL),
        (changeLimitBtn = this->fields.changeLimitBtn) == 0LL)
    || (UnityEngine_GameObject__SetActive(changeLimitBtn, v5, 0LL), (helpBtn = this->fields.helpBtn) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(helpBtn, isDisp, 0LL);
}


void __fastcall MyRoomControl__setEnalbeTitleBtn(MyRoomControl_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_Collider_o *titleBtnCollider; // x0
  UnityEngine_Collider_o *maskBoxCollider; // x0
  bool v7; // w20
  struct SetGameOptionComponent_o *optionComp; // x0

  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.titleBtnCollider;
  if ( !titleBtnCollider )
    goto LABEL_8;
  UnityEngine_Collider__set_enabled(titleBtnCollider, isEnabled, 0LL);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_8;
  v7 = !isEnabled;
  UnityEngine_Collider__set_enabled(maskBoxCollider, v7, 0LL);
  if ( this->fields.type != 5 )
    return;
  optionComp = this->fields.optionComp;
  if ( !optionComp )
LABEL_8:
    sub_B170D4();
  if ( !optionComp->fields._optionSceneType_k__BackingField )
    SetGameOptionComponent__SetMaskEnabled(optionComp, v7, 0LL);
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
  SetGameOptionComponent_o *optionComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 5;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (optionComp = this->fields.optionComp) == 0LL) )
  {
    sub_B170D4();
  }
  SetGameOptionComponent__showGameOption(optionComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40FC084 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, isPlayDecideSe);
    byte_40FC084 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 41, 0, 0LL);
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
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v4),
        (materialCollectionComp = this->fields.materialCollectionComp) == 0LL) )
  {
    sub_B170D4();
  }
  MaterialCollectionComponent__showMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__setMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v4),
        (materialCostumeComp = this->fields.materialCostumeComp) == 0LL) )
  {
    sub_B170D4();
  }
  MaterialCostumeComponent__showMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 55, 0, 0LL);
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
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_B170D4();
  mStateMaterial->fields.isServantMenuTop = 0;
  MyRoomControl__SetState(this, 0, v2);
}


void __fastcall MyRoomControl__setMaterialUIMove(MyRoomControl_o *this, bool isDisp, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x2
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
    sub_B170D4();
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &moveHidePos;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v6);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FC06D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl__setMySvtFigure_b__202_0__, v6);
    byte_40FC06D = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__202_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v7, v8);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_28791144(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_28791144(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x21
  __int64 materialFigureSvtDispIdx; // x22
  unsigned int size; // w8
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  MyRoomSvtControl_o *v12; // x0
  int32_t Form; // w0
  int32_t Id; // w20
  int32_t v15; // w2
  StandFigureBack_o *standFigureBack; // x0
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0

  if ( (byte_40FC07A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v6);
    byte_40FC07A = 1;
  }
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_32;
    materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
    size = materialImageIdList->fields._size;
    materialServantId = this->fields.materialServantId;
LABEL_16:
    if ( size <= (unsigned int)materialFigureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    v15 = Form;
    goto LABEL_23;
  }
  if ( !isCurrent || !this->fields.isServantFormKeep )
  {
    materialImageIdList = this->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_32;
    materialFigureSvtDispIdx = this->fields.figureSvtDispIdx;
    size = materialImageIdList->fields._size;
    materialServantId = this->fields.figureSvtId;
    goto LABEL_16;
  }
  svtCtr = (UnityEngine_Object_o *)this->fields.svtCtr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtCtr, 0LL, 0LL) )
  {
    v12 = this->fields.svtCtr;
    if ( !v12 )
      goto LABEL_32;
    Form = MyRoomSvtControl__GetFormId(v12, 0LL);
    goto LABEL_22;
  }
  v15 = 0;
LABEL_23:
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_32;
  StandFigureBack__SetFaceTypeAndForm(standFigureBack, 0, v15, 0LL);
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( voicePlayEffect )
    {
      UnityEngine_GameObject__SetActive(voicePlayEffect, 0, 0LL);
      return;
    }
LABEL_32:
    sub_B170D4();
  }
}


void __fastcall MyRoomControl__setNoticeInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3
  NoticeInfoComponent_o *noticeComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 6;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (noticeComp = this->fields.noticeComp) == 0LL) )
  {
    sub_B170D4();
  }
  NoticeInfoComponent__setNoticeInfo(noticeComp, 0LL);
}


void __fastcall MyRoomControl__setProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mstpfObj; // x0
  const MethodInfo *v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v6; // x3
  MstProfileComponent_o *mstPfComp; // x0

  mstpfObj = this->fields.mstpfObj;
  if ( !mstpfObj
    || (UnityEngine_GameObject__SetActive(mstpfObj, 1, 0LL),
        MyRoomControl__stopSvtVoice(this, v4),
        titleInfo = this->fields.titleInfo,
        this->fields.type = 4,
        !titleInfo)
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v6),
        (mstPfComp = this->fields.mstPfComp) == 0LL) )
  {
    sub_B170D4();
  }
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
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
    sub_B170D4();
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
  StandFigureBack_o *v6; // x0
  MyRoomFrontObjectManager_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  int v12; // w20
  bool isEnableMultipleView; // w1
  StandFigureBack_o *standFigureBack; // x0
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v20; // x3
  StandFigureBack_o *v21; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x0
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *photoCampaignButton; // x0
  bool isEnablePhotoCampaign; // w1
  const MethodInfo *v26; // x1

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
      frontObjectManager = this->fields.frontObjectManager;
      if ( !frontObjectManager )
        goto LABEL_33;
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
LABEL_14:
      voicePlayBtn = this->fields.voicePlayBtn;
      if ( !voicePlayBtn )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(voicePlayBtn, !this->fields.isServantMaterial, 0LL);
      moveBtnObj = this->fields.moveBtnObj;
      if ( !moveBtnObj )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(moveBtnObj, 1, 0LL);
      changeLimitBtn = this->fields.changeLimitBtn;
      if ( !changeLimitBtn )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(changeLimitBtn, 1, 0LL);
      helpBtn = this->fields.helpBtn;
      if ( !helpBtn )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
      if ( this->fields.fvrUsrSvtId >= 1 && this->fields.isHeroine && this->fields.isHeroineReave )
        MyRoomControl__ChangeSetStandFigureObj(this, 0, 1, v20);
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
      v6 = this->fields.standFigureBack;
      if ( !v6 )
        goto LABEL_33;
      StandFigureBack__Fadeout(v6, 0LL, 0LL);
      v7 = this->fields.frontObjectManager;
      if ( !v7 )
        goto LABEL_33;
      MyRoomFrontObjectManager__FrameOut(v7, 0LL);
LABEL_5:
      v8 = this->fields.voicePlayBtn;
      if ( !v8 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v8, 0, 0LL);
      v9 = this->fields.moveBtnObj;
      if ( !v9 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      v10 = this->fields.changeLimitBtn;
      if ( !v10 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v10, 0, 0LL);
      v11 = this->fields.helpBtn;
      if ( !v11 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v11, 0, 0LL);
      v12 = 0;
      isEnableMultipleView = 0;
      goto LABEL_26;
    case 6:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      if ( !callFadeIn )
        goto LABEL_25;
      v21 = this->fields.standFigureBack;
      if ( !v21 )
        goto LABEL_33;
      StandFigureBack__Fadein(v21, 0LL, 0LL);
LABEL_25:
      v12 = 1;
      isEnableMultipleView = this->fields.isEnableMultipleView;
LABEL_26:
      multipleViewButton = this->fields.multipleViewButton;
      if ( !multipleViewButton )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(multipleViewButton, isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(this, v23);
      photoCampaignButton = this->fields.photoCampaignButton;
      if ( v12 )
      {
        isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
        if ( !photoCampaignButton )
LABEL_33:
          sub_B170D4();
      }
      else
      {
        isEnablePhotoCampaign = 0;
        if ( !photoCampaignButton )
          goto LABEL_33;
      }
      UnityEngine_GameObject__SetActive(photoCampaignButton, isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(this, v26);
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
    sub_B170D4();
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
  PlayMakerFSM_o *myRoomFsm; // x0
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 figureSvtDispIdx; // x22
  ServantVoiceEntity_o *v15; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *MyRoomVoiceList; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *asstName; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v43; // x8
  MyRoomControl___c_c *v44; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MyRoomControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__200_0; // x21
  Il2CppObject *v48; // x22
  struct MyRoomControl___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  PlayMakerFSM_o *v56; // x0

  if ( (byte_40FC06B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B16FFC(&Method_MyRoomControl_EndLoad__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_MyRoomControl___c__setSvtVoiceData_b__200_0__, v8);
    sub_B16FFC(&MyRoomControl___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_8378, v10);
    byte_40FC06B = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8378, 0LL);
      return;
    }
LABEL_27:
    sub_B170D4();
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( SvtVoiceEnt )
  {
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_27;
    figureSvtDispIdx = this->fields.figureSvtDispIdx;
    v15 = SvtVoiceEnt;
    if ( imageIdList->fields._size <= (unsigned int)figureSvtDispIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    MyRoomVoiceList = ServantVoiceEntity__getMyRoomVoiceList(
                        SvtVoiceEnt,
                        imageIdList->fields._items->m_Items[figureSvtDispIdx + 1],
                        0LL);
    this->fields.voiceList = MyRoomVoiceList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)MyRoomVoiceList,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v15, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    asstName = this->fields.asstName;
    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v35, v36);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v43 = AvalonSceneManager_TypeInfo;
      }
      v44 = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
      if ( (BYTE3(MyRoomControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v44 = MyRoomControl___c_TypeInfo;
      }
      static_fields = v44->static_fields;
      _9__200_0 = static_fields->__9__200_0;
      if ( !_9__200_0 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          static_fields = MyRoomControl___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)static_fields->__9;
        _9__200_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
        System_Action___ctor(_9__200_0, v48, Method_MyRoomControl___c__setSvtVoiceData_b__200_0__, 0LL);
        v49 = MyRoomControl___c_TypeInfo->static_fields;
        v49->__9__200_0 = _9__200_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v49->__9__200_0,
          (System_Int32_array **)_9__200_0,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      if ( !Instance )
        goto LABEL_27;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__200_0, 0LL);
    }
    v56 = this->fields.myRoomFsm;
    if ( !v56 )
      goto LABEL_27;
    PlayMakerFSM__SendEvent(v56, (System_String_o *)StringLiteral_8378, 0LL);
    this->fields.isVoicePlaying = 0;
  }
}


void __fastcall MyRoomControl__setUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3
  UserServantCoinComponent_o *userServantCoinComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v4),
        (userServantCoinComp = this->fields.userServantCoinComp) == 0LL) )
  {
    sub_B170D4();
  }
  UserServantCoinComponent__showMenu(userServantCoinComp, 0LL);
}


void __fastcall MyRoomControl__setUserStInfoView(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *multipleViewButton; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  UnityEngine_GameObject_o *photoCampaignButton; // x0
  const MethodInfo *v7; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v9; // x3

  if ( (byte_40FC083 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl_TypeInfo, method);
    byte_40FC083 = 1;
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
  photoCampaignButton = this->fields.photoCampaignButton;
  if ( !photoCampaignButton
    || (UnityEngine_GameObject__SetActive(photoCampaignButton, this->fields.isEnablePhotoCampaign, 0LL),
        this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN,
        MyRoomControl__SetPhotoCampaignButtonColor(this, v7),
        (titleInfo = this->fields.titleInfo) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 40, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v9);
}


void __fastcall MyRoomControl__setUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3
  UserItemListViewManager_o *usrItemListViewManager; // x0
  UserItemListViewManager_o *v6; // x0

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 3;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (usrItemListViewManager = this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList(usrItemListViewManager, 0LL),
        (v6 = this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  UserItemListViewManager__SetMode_24035896(v6, 1, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  materialObj = this->fields.materialObj;
  *moveTarget = materialObj;
  sub_B16F98(
    (BattleServantConfConponent_o *)moveTarget,
    (System_Int32_array **)materialObj,
    (System_String_array **)moveShowPos,
    (System_String_array **)moveHidePos,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !*moveTarget || (transform = UnityEngine_GameObject__get_transform(*moveTarget, 0LL)) == 0LL )
    sub_B170D4();
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !moveTarget || (transform = UnityEngine_GameObject__get_transform(moveTarget, 0LL)) == 0LL )
    sub_B170D4();
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !moveTarget || (transform = UnityEngine_GameObject__get_transform(moveTarget, 0LL)) == 0LL )
    sub_B170D4();
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
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
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x8
  System_Collections_Generic_List_int__o *imageIdList; // x0
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  UserServantEntity_o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w21
  int32_t figureSvtId; // w22
  int32_t ImageLimitCount; // w22
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w0
  int32_t v32; // w22
  System_Collections_Generic_List_int__o *v33; // x0
  __int64 v34; // x22
  __int64 v35; // x23
  __int64 v36; // x21
  __int64 v37; // x22
  MyRoomControl_o *v38; // x0
  const MethodInfo *v39; // x2
  System_Int32_array *SortedCostumeIds; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x8
  System_Int32_array *v44; // x21
  unsigned __int64 v45; // x22
  System_Collections_Generic_List_int__o *v46; // x0
  int32_t FigureImageLimitCount; // w20
  WebViewManager_o *v48; // x0
  ServantLimitImageMaster_o *v49; // x0
  int32_t v50; // w0
  struct System_Collections_Generic_List_int__o *v51; // x22
  __int64 v52; // x21
  int size; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40FC05B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FC05B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B16F98(
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
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_48;
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, this->fields.fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    goto LABEL_48;
  v23 = UsrSvtData;
  v25 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v25;
  *(_QWORD *)&v54.fields.fakeValue = v24;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
  v26 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine(v23, 0LL);
  while ( 1 )
  {
    v35 = *(_QWORD *)&v23->fields.limitCount.fields.currentCryptoKey;
    v34 = *(_QWORD *)&v23->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v55.fields.currentCryptoKey = v35;
    *(_QWORD *)&v55.fields.fakeValue = v34;
    if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v26, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.figureSvtId,
                                   ImageLimitCount,
                                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v32 = ServantImageLimitSealAfter;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            ServantImageLimitSealAfter,
            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v33 = this->fields.imageIdList;
      if ( !v33 )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        v33,
        v32,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    ++v26;
  }
  if ( UserServantEntity__IsHeroine(v23, 0LL) || UserServantEntity__isLimitCountMax(v23, 0LL) )
  {
    v37 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v37;
    *(_QWORD *)&v56.fields.fakeValue = v36;
    v38 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
    SortedCostumeIds = MyRoomControl__GetSortedCostumeIds(v38, (int32_t)v38, v39);
    if ( SortedCostumeIds )
    {
      v43 = *(_QWORD *)&SortedCostumeIds->max_length;
      v44 = SortedCostumeIds;
      if ( (int)v43 >= 1 )
      {
        v45 = 0LL;
        do
        {
          if ( v45 >= (unsigned int)v43 )
          {
            sub_B17100(SortedCostumeIds, v41, v42);
            sub_B170A0();
          }
          v41 = (unsigned int)v44->m_Items[v45 + 1];
          if ( (int)v41 >= 1 )
          {
            v46 = this->fields.imageIdList;
            if ( !v46 )
              goto LABEL_48;
            System_Collections_Generic_List_int___Add(
              v46,
              v41,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          LODWORD(v43) = v44->max_length;
          ++v45;
        }
        while ( (__int64)v45 < (int)v43 );
      }
      goto LABEL_39;
    }
LABEL_48:
    sub_B170D4();
  }
LABEL_39:
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v23, 0, 0LL);
  v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v48 )
    goto LABEL_48;
  v49 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v48,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !v49 )
    goto LABEL_48;
  v50 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
          v49,
          this->fields.figureSvtId,
          FigureImageLimitCount,
          0LL);
  v51 = this->fields.imageIdList;
  if ( !v51 )
    goto LABEL_48;
  v52 = 0LL;
  while ( 1 )
  {
    size = v51->fields._size;
    if ( (int)v52 >= size )
      break;
    if ( size <= (unsigned int)v52 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( v51->fields._items->m_Items[v52 + 1] == v50 )
    {
      this->fields.figureSvtDispIdx = v52;
      return;
    }
    v51 = this->fields.imageIdList;
    ++v52;
    if ( !v51 )
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
  PlayMakerFSM_o *myRoomFsm; // x0
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  int32_t max_length; // w22
  UserServantEntity_array *v18; // x19
  __int64 IsLeave; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  il2cpp_array_size_t v22; // w20
  Il2CppClass **v23; // x24
  UserServantEntity_o *v24; // x0
  UserServantEntity_o **v25; // x24
  UserServantEntity_o *v26; // t1
  __int64 v27; // x3
  __int64 v28; // x4
  UserServantEntity_o *v29; // x20
  NetworkManager_ResultCallbackFunc_o *v30; // x19
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *v39; // x0
  WarQuestSelectionMaster_o *v40; // x0
  UserServantCollectionMaster_o *v41; // x19
  int64_t userId; // x21
  __int64 v43; // x23
  __int64 v44; // x24
  int32_t v45; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int128 v47; // q1
  UserServantCollectionEntity_o *v48; // x25
  __int128 v49; // q0
  int32_t v50; // w24
  int32_t v51; // w26
  int32_t v52; // w27
  int32_t v53; // w28
  bool IsLock; // w19
  bool IsChoice; // w0
  bool v56; // w21
  int32_t commonFlag; // w23
  int32_t battleVoice; // w25
  int32_t randomSettingOwn; // w22
  int32_t v60; // w0
  __int64 v61; // x8
  int32_t randomSettingSupport; // w20
  int32_t limitCountSupport; // w0
  int64_t v64; // [xsp+48h] [xbp-E8h]
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v66; // [xsp+58h] [xbp-D8h]
  int64_t pushUserSvtId; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_WarBoardWallAttackRequest; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40FC05D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_MyRoomControl__setupSvtRand_b__184_0__, v4);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&OptionManager_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_6864, v12);
    byte_40FC05D = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL);
      return;
    }
LABEL_40:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_40;
  max_length = OrganizationList->max_length;
  v18 = OrganizationList;
  while ( 1 )
  {
    do
    {
      IsLeave = UnityEngine_Random__RandomRange(0, max_length, 0LL);
      v22 = IsLeave;
      if ( (unsigned int)IsLeave >= v18->max_length )
      {
LABEL_39:
        sub_B17100(IsLeave, v20, v21);
        sub_B170A0();
      }
      v23 = &v18->obj.klass + (int)IsLeave;
      v26 = (UserServantEntity_o *)v23[4];
      v25 = (UserServantEntity_o **)(v23 + 4);
      v24 = v26;
      if ( !v26 )
        goto LABEL_40;
      IsLeave = UserServantEntity__IsLeave(v24, 0LL);
    }
    while ( (IsLeave & 1) != 0 );
    if ( v22 >= v18->max_length )
      goto LABEL_39;
    if ( !*v25 )
      goto LABEL_40;
    IsLeave = UserServantEntity__IsEventJoin(*v25, 0LL);
    if ( (IsLeave & 1) == 0 )
    {
      if ( v22 >= v18->max_length )
        goto LABEL_39;
      v29 = *v25;
      if ( *v25 )
        break;
    }
  }
  v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v20,
                                                 v21,
                                                 v27,
                                                 v28);
  NetworkManager_ResultCallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__184_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CardFavoriteRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v30,
                                                                 (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v39 )
    goto LABEL_40;
  v40 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v39,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData || !v29 )
    goto LABEL_40;
  v41 = (UserServantCollectionMaster_o *)v40;
  userId = (*p_usrData)->fields.userId;
  v44 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v44;
  *(_QWORD *)&v72.fields.fakeValue = v43;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
  if ( !v41 )
    goto LABEL_40;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v41, userId, v45, 0LL);
  if ( !*p_usrData )
    goto LABEL_40;
  v47 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  v48 = EntityDefinitely;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v71.fields.fakeValue = v47;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v70 = v71;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v70, 0LL);
  v49 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v49;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v69, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                      v29->fields.imageLimitCount,
                      0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.dispLimitCount, 0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.commandCardLimitCount, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.iconLimitCount, 0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v29, 0LL);
  IsChoice = UserServantEntity__IsChoice(v29, 0LL);
  if ( !v48 )
    goto LABEL_40;
  v56 = IsChoice;
  commonFlag = v48->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       v29->fields.randomLimitCount,
                       0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.randomLimitCountSupport, 0LL);
  v61 = *(_QWORD *)&v29->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v73.fields.fakeValue = *(_QWORD *)&v29->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v60;
  *(_QWORD *)&v73.fields.currentCryptoKey = v61;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_40;
  CardFavoriteRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v66,
    imageLimitCount,
    v50,
    v51,
    v52,
    v53,
    1,
    IsLock,
    v56,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    pushUserSvtId == v64,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0

  if ( (byte_40FC068 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_40FC068 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B170D4();
  MissionNotifyManager__RemoveNoDisplayMissionCondType(v3, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0

  if ( (byte_40FC067 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_40FC067 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B170D4();
  MissionNotifyManager__AddNoDisplayMissionCondType(v3, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_B170D4();
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_28791144(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FC094 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl__svtVoicePlayAct_d__293_TypeInfo, item);
    byte_40FC094 = 1;
  }
  v7 = sub_B170CC(MyRoomControl__svtVoicePlayAct_d__293_TypeInfo, item, method, v3, v4);
  MyRoomControl__svtVoicePlayAct_d__293___ctor((MyRoomControl__svtVoicePlayAct_d__293_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = item;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
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
  __int64 v25; // x1
  NetworkManager_c *v26; // x0
  SoundManager_o *Instance; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *v32; // x22

  if ( (byte_40FC06A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetName);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v9);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass199_0__voiceLoad_b__0__, v10);
    sub_B16FFC(&MyRoomControl___c__DisplayClass199_0_TypeInfo, v11);
    byte_40FC06A = 1;
  }
  v12 = sub_B170CC(MyRoomControl___c__DisplayClass199_0_TypeInfo, assetName, endCallback, method, v4);
  MyRoomControl___c__DisplayClass199_0___ctor((MyRoomControl___c__DisplayClass199_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_15;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)endCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.isVoiceLoading = 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40F7166 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v25);
    byte_40F7166 = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v26 = NetworkManager_TypeInfo;
  }
  if ( !v26->static_fields->isRebootBlock )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
    System_Action___ctor(v32, (Il2CppObject *)v12, Method_MyRoomControl___c__DisplayClass199_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage(Instance, assetName, v32, 1, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x19
  UnityEngine_Texture2D_o *v18; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v20; // x20
  int32_t height; // w0
  int32_t v22; // w23
  UIRect_o *photoCampaignScreenshot; // x0
  UIRoot_o *root; // x0
  int32_t activeHeight; // w0
  int32_t v26; // w26
  int32_t v27; // w21
  int32_t v28; // w0
  int32_t v29; // w22
  UIRoot_o *v30; // x0
  int32_t v31; // w0
  int32_t v32; // w24
  int v33; // w21
  int v34; // w8
  int v35; // w27
  int v36; // w0
  float photoFramePosY; // s8
  int v38; // w25
  int32_t v39; // w0
  int32_t v40; // w23
  UIRoot_o *v41; // x0
  int v42; // w24
  int32_t v43; // w0
  double v44; // d0
  UnityEngine_Color_array *Pixels_34911264; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  UnityEngine_Texture2D_o *v50; // x20
  struct UITexture_o *v51; // x0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_40F865F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, method);
    sub_B16FFC(&TouchEffectManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v7);
    byte_40F865F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v18 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v20 = v18;
    height = UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_27;
    v22 = height;
    photoCampaignScreenshot = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !photoCampaignScreenshot )
      goto LABEL_27;
    root = UIRect__get_root(photoCampaignScreenshot, 0LL);
    if ( !root )
      goto LABEL_27;
    activeHeight = UIRoot__get_activeHeight(root, 0LL);
    v26 = this->fields.height;
    v27 = activeHeight;
    v28 = UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_27;
    v29 = v28;
    v30 = UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !v30 )
      goto LABEL_27;
    v31 = UIRoot__get_activeHeight(v30, 0LL);
    if ( !v20 )
      goto LABEL_27;
    v32 = v31;
    v33 = v22 * width / v27;
    v34 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v20->klass->vtable._4_get_width.method)(
            v20,
            v20->klass->vtable._5_set_width.methodPtr)
        - v33;
    v35 = v34 >= 0 ? v34 : v34 + 1;
    v36 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v20->klass->vtable._6_get_height.method)(
            v20,
            v20->klass->vtable._7_set_height.methodPtr);
    photoFramePosY = _4__this->fields.photoFramePosY;
    v38 = v36;
    v39 = UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_27;
    v40 = v39;
    v41 = UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !v41 )
      goto LABEL_27;
    v42 = v29 * v26 / v32;
    v43 = UIRoot__get_activeHeight(v41, 0LL);
    v44 = photoFramePosY == INFINITY ? -photoFramePosY : photoFramePosY;
    Pixels_34911264 = UnityEngine_Texture2D__GetPixels_34911264(
                        v20,
                        v35 >> 1,
                        v40 * (int)v44 / v43 + (v38 - v42) / 2,
                        v33,
                        v42,
                        0LL);
    v50 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v46, v47, v48, v49);
    UnityEngine_Texture2D___ctor_34911944(v50, v33, v42, 3, 0, 0LL);
    if ( !v50
      || (UnityEngine_Texture2D__SetPixels_34912992(v50, Pixels_34911264, 0LL),
          UnityEngine_Texture2D__Apply_34913820(v50, 0LL),
          (v51 = _4__this->fields.photoCampaignScreenshot) == 0LL) )
    {
LABEL_27:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))v51->klass->vtable._27_set_mainTexture.method)(
      v51,
      v50,
      v51->klass->vtable._28_get_shader.methodPtr);
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__CaptureServant_d__350_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  CommonUI_o *v9; // x0
  bool v10; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_WaitUntil_o *v20; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0

  if ( (byte_40F8660 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v3);
    sub_B16FFC(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__253_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_40F8660 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_B170D4();
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode(v9, 1, 0LL);
  v15 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v11, v12, v13, v14);
  System_Func_bool____ctor(
    v15,
    _4__this,
    Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__253_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v20 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v16, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__253_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  QuestTree_o *v6; // x0
  Il2CppObject *v7; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  MyRoomStateMaterial_o *mStateMaterial; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BackTaskAmountAdjuster_o *v22; // x19
  MyRoomStateMaterial_o *v23; // x0
  System_Collections_IEnumerator_o *v24; // x0
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_40F8661 & 1) == 0 )
  {
    sub_B16FFC(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v4);
    byte_40F8661 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
    mStateMaterial = _4__this->fields.mStateMaterial;
    if ( !mStateMaterial )
      goto LABEL_16;
    MyRoomStateMaterial__Init(mStateMaterial, _4__this, 0LL);
    v22 = (BackTaskAmountAdjuster_o *)sub_B170CC(BackTaskAmountAdjuster_TypeInfo, v18, v19, v20, v21);
    BackTaskAmountAdjuster___ctor(v22, 0LL);
    v23 = _4__this->fields.mStateMaterial;
    if ( !v23 )
      goto LABEL_16;
    v24 = MyRoomStateMaterial__ConstructMaterialDataGradually(v23, 0LL);
    if ( !v22 )
      goto LABEL_16;
    v25 = BackTaskAmountAdjuster__Execute(v22, v24, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v25, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v6 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v6 )
    {
      v7 = (Il2CppObject *)QuestTree__Init(v6, 0LL, 0LL);
      this->fields.__2__current = v7;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_16:
    sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__InitMaterialOnBackground_d__247_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  CommonUI_o *v11; // x0
  bool v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Func_bool__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  UnityEngine_WaitUntil_o *v22; // x19
  Il2CppObject **p__2__current; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CommonUI_o *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  BackTaskAmountAdjuster_o *v35; // x20
  MyRoomStateMaterial_o *mStateMaterial; // x0
  System_Collections_IEnumerator_o *inited; // x0
  System_Collections_IEnumerator_o *v38; // x0
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F8662 & 1) == 0 )
  {
    sub_B16FFC(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v3);
    sub_B16FFC(&System_Func_bool__TypeInfo, v4);
    sub_B16FFC(&Method_MyRoomControl__InitServantMenu_b__250_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_6864, v8);
    byte_40F8662 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v35 = (BackTaskAmountAdjuster_o *)sub_B170CC(BackTaskAmountAdjuster_TypeInfo, v31, v32, v33, v34);
          BackTaskAmountAdjuster___ctor(v35, 0LL);
          mStateMaterial = _4__this->fields.mStateMaterial;
          if ( !mStateMaterial )
            goto LABEL_17;
          inited = MyRoomStateMaterial__InitRecordWithServant(mStateMaterial, 0LL);
          if ( !v35 )
            goto LABEL_17;
          v38 = BackTaskAmountAdjuster__Execute(v35, inited, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v38, 0LL);
        }
        myRoomFsm = _4__this->fields.myRoomFsm;
        if ( myRoomFsm )
        {
          PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v11 )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(v11, 1, 0LL);
  v17 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v13, v14, v15, v16);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)_4__this,
    Method_MyRoomControl__InitServantMenu_b__250_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v22 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v18, v19, v20, v21);
  UnityEngine_WaitUntil___ctor(v22, v17, 0LL);
  this->fields.__2__current = (Il2CppObject *)v22;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__InitServantMenu_d__250_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  Il2CppObject *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct MyRoomControl___c__DisplayClass330_0_o *v35; // x0
  System_Int32_array **v36; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  __int64 v38; // x2
  struct StandFigureBack_array *v39; // x8
  struct ServantScriptMultipleEntity_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 SvtStandFigure; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  struct StandFigureBack_array *v50; // x8
  __int64 v51; // x27
  __int64 v52; // x21
  __int64 v53; // x25
  int v54; // w9
  UnityEngine_Component_o *v55; // x0
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v57; // x8
  struct System_Int64_array *multipleServantUsrIds; // x8
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v62; // w24
  int32_t v63; // w20
  MyRoomControl__LoadMultipleServant_d__330_o *v64; // x19
  int32_t Id; // w26
  int32_t Form; // w23
  ServantScriptMultipleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct ServantScriptMultipleEntity_array *v73; // x22
  System_Int32_array **v74; // x26
  struct StandFigureBack_array *v75; // x8
  struct MyRoomControl_o *v76; // x25
  struct MyRoomControl___c__DisplayClass330_0_o *v77; // x28
  StandFigureBack_o *v78; // x26
  System_Action_o *_9__3; // x27
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  TitleInfoControl_o *titleInfo; // x0
  struct TitleInfoControl_o *v87; // x8
  UnityEngine_Component_o *titleImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *multipleViewCloseButton; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v92; // x19
  int max_length; // w9
  il2cpp_array_size_t v94; // w23
  StandFigureBack_o *v95; // x0
  struct StandFigureBack_array *v96; // x8
  UnityEngine_Component_o *v97; // x8
  UnityEngine_Component_o *v98; // x21
  UnityEngine_Transform_o *transform; // x0
  float v100; // s1
  float v101; // s2
  float v102; // s8
  float v103; // s9
  UnityEngine_Transform_o *v104; // x0
  float v105; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v107; // x8
  float v108; // s10
  struct StandFigureBack_array *v109; // x9
  UnityEngine_Component_o *v110; // x0
  int v111; // s14
  int v112; // s15
  UnityEngine_Transform_o *v113; // x0
  float v114; // s0
  float v115; // s2
  struct StandFigureBack_array *v116; // x8
  UnityEngine_Component_o *v117; // x0
  float v118; // s11
  float v119; // s12
  UnityEngine_Transform_o *v120; // x0
  struct StandFigureBack_array *v121; // x8
  UnityEngine_Component_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  struct StandFigureBack_array *v124; // x8
  System_String_o *v125; // x2
  bool result; // w0
  struct MyRoomControl___c__DisplayClass330_0_o *_8__1; // x8
  MultipleViewComponent_o *multipleViewComponent; // x20
  Il2CppObject *v129; // x22
  System_Action_o *v130; // x21
  Il2CppObject *v131; // x20
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  System_Func_bool__o *v136; // x21
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  UnityEngine_WaitWhile_o *v141; // x20
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct ServantScriptMultipleEntity_array *v148; // x8
  ServantScriptMultipleEntity_o *v149; // x9
  ServantScriptMultipleEntity_o *v150; // x8
  Il2CppObject *v151; // x20
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  System_Func_bool__o *v156; // x21
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  UnityEngine_WaitWhile_o *v161; // x20
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+8h] [xbp-B8h]
  struct MyRoomControl___c__DisplayClass330_0_o **p__8__1; // [xsp+10h] [xbp-B0h]
  __int64 v170; // [xsp+18h] [xbp-A8h]
  __int64 v171; // [xsp+20h] [xbp-A0h]
  ServantScriptMultipleEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8663 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v8);
    sub_B16FFC(&System_Func_bool__TypeInfo, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&ServantScriptMultipleEntity___TypeInfo, v11);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__0__, v12);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__1__, v13);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__2__, v14);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__3__, v15);
    sub_B16FFC(&MyRoomControl___c__DisplayClass330_0_TypeInfo, v16);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_6664, v19);
    byte_40F8663 = 1;
  }
  entity = 0LL;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_84;
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_84;
    TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 0, 0, 0LL);
    v87 = _4__this->fields.titleInfo;
    if ( !v87 )
      goto LABEL_84;
    titleImg = (UnityEngine_Component_o *)v87->fields.titleImg;
    if ( !titleImg )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject(titleImg, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    multipleViewCloseButton = _4__this->fields.multipleViewCloseButton;
    _4__this->fields.multipleViewState = 2;
    if ( !multipleViewCloseButton )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
    multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
    if ( !multipleStandFigureBacks )
      goto LABEL_84;
    v92 = 4LL;
    while ( 1 )
    {
      max_length = multipleStandFigureBacks->max_length;
      v94 = v92 - 4;
      if ( (int)v92 - 4 >= max_length )
        return 0;
      if ( v94 >= max_length )
        goto LABEL_104;
      v95 = (StandFigureBack_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v92);
      if ( !v95 )
        goto LABEL_84;
      SvtStandFigure = (__int64)StandFigureBack__GetSvtStandFigure(v95, 0, 0LL);
      if ( !SvtStandFigure )
        goto LABEL_84;
      v96 = _4__this->fields.multipleStandFigureBacks;
      if ( !v96 )
        goto LABEL_84;
      if ( v94 >= v96->max_length )
        goto LABEL_104;
      v97 = (UnityEngine_Component_o *)*((_QWORD *)&v96->obj.klass + v92);
      if ( !v97 )
        goto LABEL_84;
      v98 = *(UnityEngine_Component_o **)(SvtStandFigure + 24);
      transform = UnityEngine_Component__get_transform(v97, 0LL);
      if ( !transform )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v100 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
      if ( !v98 )
        goto LABEL_84;
      v102 = v100;
      v103 = v101;
      v104 = UnityEngine_Component__get_transform(v98, 0LL);
      if ( !v104 )
        goto LABEL_84;
      LODWORD(v105) = (unsigned int)UnityEngine_Transform__get_localPosition(v104, 0LL);
      multipleEntities_5__2 = this->fields._multipleEntities_5__2;
      if ( !multipleEntities_5__2 )
        goto LABEL_84;
      if ( v94 >= multipleEntities_5__2->max_length )
        goto LABEL_104;
      v107 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v92);
      v108 = flt_313411C[(_DWORD)v92 == 4] - v105;
      if ( v107 )
      {
        v109 = _4__this->fields.multipleStandFigureBacks;
        if ( !v109 )
          goto LABEL_84;
        if ( v94 >= v109->max_length )
          goto LABEL_104;
        v110 = (UnityEngine_Component_o *)*((_QWORD *)&v109->obj.klass + v92);
        if ( !v110 )
          goto LABEL_84;
        v111 = *(_DWORD *)(v107 + 28);
        v112 = *(_DWORD *)(v107 + 32);
        v113 = UnityEngine_Component__get_transform(v110, 0LL);
        if ( !v113 )
          goto LABEL_84;
        *(UnityEngine_Vector3_o *)&v114 = UnityEngine_Transform__get_localPosition(v113, 0LL);
        v116 = _4__this->fields.multipleStandFigureBacks;
        if ( !v116 )
          goto LABEL_84;
        if ( v94 >= v116->max_length )
          goto LABEL_104;
        v117 = (UnityEngine_Component_o *)*((_QWORD *)&v116->obj.klass + v92);
        if ( !v117 )
          goto LABEL_84;
        v118 = v114;
        v119 = v115;
        v120 = UnityEngine_Component__get_transform(v117, 0LL);
        if ( !v120 )
          goto LABEL_84;
        v102 = v102 + (float)v112;
        v108 = v108 + (float)v111;
        v174.fields.x = v118;
        v174.fields.y = v102;
        v174.fields.z = v119;
        v103 = v103 + 0.0;
        UnityEngine_Transform__set_localPosition(v120, v174, 0LL);
      }
      v121 = _4__this->fields.multipleStandFigureBacks;
      if ( !v121 )
        goto LABEL_84;
      if ( v94 >= v121->max_length )
        goto LABEL_104;
      v122 = (UnityEngine_Component_o *)*((_QWORD *)&v121->obj.klass + v92);
      if ( v122 )
      {
        v123 = UnityEngine_Component__get_gameObject(v122, 0LL);
        v124 = _4__this->fields.multipleStandFigureBacks;
        if ( v124 )
        {
          v125 = v94 == v124->max_length - 1 ? (System_String_o *)StringLiteral_6664 : 0LL;
          v175.fields.x = v108;
          v175.fields.y = v102;
          v175.fields.z = v103;
          MyRoomControl__moveControl(_4__this, v123, v175, v125, 0LL);
          multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
          ++v92;
          if ( multipleStandFigureBacks )
            continue;
        }
      }
      goto LABEL_84;
    }
  }
  if ( _1__state == 1 )
  {
    _8__1 = this->fields.__8__1;
    this->fields.__1__state = -1;
    if ( _8__1 )
    {
      _8__1->fields.wait = 1;
      if ( _4__this )
      {
        multipleViewComponent = _4__this->fields.multipleViewComponent;
        v129 = (Il2CppObject *)this->fields.__8__1;
        v130 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
        System_Action___ctor(v130, v129, Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__1__, 0LL);
        if ( multipleViewComponent )
        {
          MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v130, 0LL);
          v131 = (Il2CppObject *)this->fields.__8__1;
          v136 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v132, v133, v134, v135);
          System_Func_bool____ctor(
            v136,
            v131,
            Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__2__,
            (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
          v141 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v137, v138, v139, v140);
          UnityEngine_WaitWhile___ctor(v141, v136, 0LL);
          this->fields.__2__current = (Il2CppObject *)v141;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            (System_Int32_array **)v141,
            v142,
            v143,
            v144,
            v145,
            v146,
            v147);
          this->fields.__1__state = 2;
          return 1;
        }
      }
    }
    goto LABEL_84;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v22 = (Il2CppObject *)sub_B170CC(MyRoomControl___c__DisplayClass330_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v22, 0LL);
  this->fields.__8__1 = (struct MyRoomControl___c__DisplayClass330_0_o *)v22;
  p__8__1 = &this->fields.__8__1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__8__1,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v35 = this->fields.__8__1;
  if ( !v35 )
    goto LABEL_84;
  v36 = (System_Int32_array **)this->fields.__4__this;
  v35->fields.__4__this = (struct MyRoomControl_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)&v35->fields.__4__this, v36, v29, v30, v31, v32, v33, v34);
  if ( !_4__this )
    goto LABEL_84;
  mBlocker = _4__this->fields.mBlocker;
  if ( !mBlocker )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_84;
  (*p__8__1)->fields.loadedCount = 0;
  v39 = _4__this->fields.multipleStandFigureBacks;
  if ( !v39 )
    goto LABEL_84;
  v40 = (struct ServantScriptMultipleEntity_array *)sub_B17014(
                                                      ServantScriptMultipleEntity___TypeInfo,
                                                      v39->max_length,
                                                      v38);
  this->fields._multipleEntities_5__2 = v40;
  p_multipleEntities_5__2 = &this->fields._multipleEntities_5__2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._multipleEntities_5__2,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v50 = _4__this->fields.multipleStandFigureBacks;
  if ( !v50 )
    goto LABEL_84;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 32LL;
  while ( 1 )
  {
    v54 = v50->max_length;
    if ( (int)v52 >= v54 )
      break;
    if ( (unsigned int)v52 >= v54 )
      goto LABEL_104;
    v55 = (UnityEngine_Component_o *)v50->m_Items[v52];
    if ( !v55 )
      goto LABEL_84;
    SvtStandFigure = (__int64)UnityEngine_Component__get_transform(v55, 0LL);
    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_84;
    if ( (unsigned int)v52 >= defaultMultipleServantPoses->max_length )
      goto LABEL_104;
    if ( !SvtStandFigure )
      goto LABEL_84;
    v57 = (float *)((char *)defaultMultipleServantPoses + v51);
    v173.fields.x = flt_3134124[(_DWORD)v52 == 0] + v57[8];
    v173.fields.y = v57[9] + 0.0;
    v173.fields.z = v57[10] + 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtStandFigure, v173, 0LL);
    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
    if ( !multipleServantUsrIds )
      goto LABEL_84;
    if ( (unsigned int)v52 >= multipleServantUsrIds->max_length )
      goto LABEL_104;
    myRoomData = _4__this->fields.myRoomData;
    if ( !myRoomData )
      goto LABEL_84;
    UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, multipleServantUsrIds->m_Items[v52], 0LL);
    if ( !UsrSvtData )
      goto LABEL_84;
    SvtStandFigure = UserServantEntity__getSvtId(UsrSvtData, 0LL);
    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
    if ( !multipleLimitCounts )
      goto LABEL_84;
    if ( (unsigned int)v52 >= multipleLimitCounts->max_length )
      goto LABEL_104;
    v62 = multipleLimitCounts->m_Items[v52 + 1];
    v63 = SvtStandFigure;
    v64 = this;
    Id = ServantScriptMaster__getId(SvtStandFigure, v62, 0LL);
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantScriptMultipleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_84;
    SvtStandFigure = ServantScriptMultipleMaster__TryGetEntity(
                       Master_WarQuestSelectionMaster,
                       &entity,
                       Id,
                       Form,
                       v52 + 1,
                       0LL);
    if ( (SvtStandFigure & 1) != 0 )
    {
      v73 = *p_multipleEntities_5__2;
      if ( !*p_multipleEntities_5__2 )
        goto LABEL_84;
      v74 = (System_Int32_array **)entity;
      if ( entity )
      {
        SvtStandFigure = sub_B170BC(entity, v73->obj.klass->_1.element_class);
        if ( !SvtStandFigure )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( (unsigned int)v52 >= v73->max_length )
        goto LABEL_104;
      v73->m_Items[v52] = (ServantScriptMultipleEntity_o *)v74;
      sub_B16F98((BattleServantConfConponent_o *)((char *)v73 + v53), v74, v49, v68, v69, v70, v71, v72);
    }
    v170 = v53;
    v171 = v51;
    v75 = _4__this->fields.multipleStandFigureBacks;
    if ( !v75 )
      goto LABEL_84;
    if ( (unsigned int)v52 >= v75->max_length )
      goto LABEL_104;
    v76 = _4__this;
    v77 = *p__8__1;
    if ( *p__8__1 )
    {
      v78 = v75->m_Items[v52];
      _9__3 = v77->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v68, v69);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v77,
          Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__3__,
          0LL);
        v77->fields.__9__3 = _9__3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v77->fields.__9__3,
          (System_Int32_array **)_9__3,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
      if ( v78 )
      {
        StandFigureBack__SetMyRoomStandFigure(v78, v63, v62, 1, 0, Form, 10, _9__3, 0LL);
        _4__this = v76;
        v50 = v76->fields.multipleStandFigureBacks;
        ++v52;
        this = v64;
        v53 = v170 + 8;
        v51 = v171 + 12;
        if ( v50 )
          continue;
      }
    }
    goto LABEL_84;
  }
  SvtStandFigure = sub_B17014(int___TypeInfo, 2LL, v49);
  v148 = *p_multipleEntities_5__2;
  if ( !*p_multipleEntities_5__2 )
    goto LABEL_84;
  if ( !v148->max_length )
    goto LABEL_104;
  v149 = v148->m_Items[0];
  if ( v149 )
  {
    if ( !SvtStandFigure )
      goto LABEL_84;
    if ( !*(_DWORD *)(SvtStandFigure + 24) )
      goto LABEL_104;
    *(_DWORD *)(SvtStandFigure + 32) = v149->fields.depth;
    v148 = *p_multipleEntities_5__2;
    if ( !*p_multipleEntities_5__2 )
      goto LABEL_84;
  }
  if ( v148->max_length <= 1 )
    goto LABEL_104;
  v150 = v148->m_Items[1];
  if ( !v150 )
  {
    if ( SvtStandFigure )
      goto LABEL_102;
LABEL_84:
    sub_B170D4();
  }
  if ( !SvtStandFigure )
    goto LABEL_84;
  if ( *(_DWORD *)(SvtStandFigure + 24) <= 1u )
    goto LABEL_104;
  *(_DWORD *)(SvtStandFigure + 36) = v150->fields.depth;
LABEL_102:
  if ( *(_DWORD *)(SvtStandFigure + 24) < 2u )
  {
LABEL_104:
    sub_B17100(SvtStandFigure, v48, v49);
    sub_B170A0();
  }
  MyRoomControl__SetLayerMultipleServant(
    _4__this,
    *(_DWORD *)(SvtStandFigure + 32) < *(_DWORD *)(SvtStandFigure + 36),
    0LL);
  v151 = (Il2CppObject *)this->fields.__8__1;
  v156 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v152, v153, v154, v155);
  System_Func_bool____ctor(
    v156,
    v151,
    Method_MyRoomControl___c__DisplayClass330_0__LoadMultipleServant_b__0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v161 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v157, v158, v159, v160);
  UnityEngine_WaitWhile___ctor(v161, v156, 0LL);
  this->fields.__2__current = (Il2CppObject *)v161;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  result = 1;
  this->fields.__1__state = 1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__LoadMultipleServant_d__330_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v20; // x22
  struct MyRoomControl___c__DisplayClass348_0_o **p__8__1; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Transform_o *transform; // x0
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v34; // w23
  int32_t Id; // w0
  int32_t v36; // w24
  bool v37; // w21
  int32_t Form; // w0
  Il2CppObject *v39; // x26
  int32_t v40; // w24
  StandFigureBack_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x25
  Il2CppObject *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Func_bool__o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  UnityEngine_WaitWhile_o *v57; // x20
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  StandFigureBack_o *v64; // x0
  UIStandFigureR_o *SvtStandFigure; // x0
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_GameObject_o *v67; // x0
  ServantScriptMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Int32_array *PhotoSvtPosition; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x21
  float PhotoSvtScale; // s0
  struct MyRoomControl___c__DisplayClass348_0_o *_8__1; // x8
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  Il2CppObject *v82; // x22
  System_Action_o *v83; // x21
  Il2CppObject *v84; // x20
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Func_bool__o *v89; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  UnityEngine_WaitWhile_o *v94; // x20
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  TitleInfoControl_o *titleInfo; // x0
  struct TitleInfoControl_o *v102; // x8
  UnityEngine_Component_o *titleImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *v105; // x8
  UnityEngine_Component_o *headerBgImg; // x0
  UnityEngine_GameObject_o *v107; // x0
  TitleInfoControl_o *v108; // x0
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  float svtPosX_5__4; // s8
  float svtPosY_5__5; // s9
  UnityEngine_GameObject_o *v112; // x0
  float LocalPositionZ; // s0
  UnityEngine_Component_o *v114; // x0
  float v115; // s10
  UnityEngine_GameObject_o *v116; // x0
  ServantScriptEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8664 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantScriptMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v8);
    sub_B16FFC(&System_Func_bool__TypeInfo, v9);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__0__, v10);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__1__, v11);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__2__, v12);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__3__, v13);
    sub_B16FFC(&MyRoomControl___c__DisplayClass348_0_TypeInfo, v14);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_6665, v17);
    byte_40F8664 = 1;
  }
  entity = 0LL;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_53;
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_53;
    TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 0, 0, 0LL);
    v102 = _4__this->fields.titleInfo;
    if ( !v102 )
      goto LABEL_53;
    titleImg = (UnityEngine_Component_o *)v102->fields.titleImg;
    if ( !titleImg )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject(titleImg, 0LL);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v105 = _4__this->fields.titleInfo;
    if ( !v105 )
      goto LABEL_53;
    headerBgImg = (UnityEngine_Component_o *)v105->fields.headerBgImg;
    if ( !headerBgImg )
      goto LABEL_53;
    v107 = UnityEngine_Component__get_gameObject(headerBgImg, 0LL);
    if ( !v107 )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(v107, 0, 0LL);
    v108 = _4__this->fields.titleInfo;
    if ( !v108 )
      goto LABEL_53;
    TitleInfoControl__setDispParticleObj(v108, 0, 0LL);
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)_4__this->fields.photoCampaignStandFigureBack;
    _4__this->fields.photoCampaignState = 2;
    if ( !photoCampaignStandFigureBack )
      goto LABEL_53;
    svtPosX_5__4 = this->fields._svtPosX_5__4;
    svtPosY_5__5 = this->fields._svtPosY_5__5;
    v112 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
    LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v112, 0LL);
    v114 = (UnityEngine_Component_o *)_4__this->fields.photoCampaignStandFigureBack;
    if ( !v114 )
      goto LABEL_53;
    v115 = LocalPositionZ;
    v116 = UnityEngine_Component__get_gameObject(v114, 0LL);
    v120.fields.x = svtPosX_5__4;
    v120.fields.y = svtPosY_5__5;
    v120.fields.z = v115;
    MyRoomControl__moveControl(_4__this, v116, v120, (System_String_o *)StringLiteral_6665, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v64 = _4__this->fields.photoCampaignStandFigureBack;
      if ( v64 )
      {
        SvtStandFigure = StandFigureBack__GetSvtStandFigure(v64, 0, 0LL);
        if ( SvtStandFigure )
        {
          bodyTexture = (UnityEngine_Component_o *)SvtStandFigure->fields.bodyTexture;
          if ( bodyTexture )
          {
            v67 = UnityEngine_Component__get_gameObject(bodyTexture, 0LL);
            this->fields._svtPosX_5__4 = -GameObjectExtensions__GetLocalPositionX(v67, 0LL);
            this->fields._svtPosY_5__5 = _4__this->fields.defaultPhotoServantPos.fields.y;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ServantScriptMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantScriptMaster___);
            if ( Master_WarQuestSelectionMaster )
            {
              if ( ServantScriptMaster__TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     this->fields._imageId_5__2,
                     this->fields._formId_5__3,
                     0LL) )
              {
                if ( !entity )
                  goto LABEL_53;
                if ( ServantScriptEntity__IsPhotoSvtPosition(entity, 0LL) )
                {
                  if ( !entity )
                    goto LABEL_53;
                  PhotoSvtPosition = ServantScriptEntity__GetPhotoSvtPosition(entity, 0LL);
                  if ( !PhotoSvtPosition )
                    goto LABEL_53;
                  if ( !PhotoSvtPosition->max_length
                    || (this->fields._svtPosX_5__4 = (float)PhotoSvtPosition->m_Items[1],
                        PhotoSvtPosition->max_length <= 1) )
                  {
                    sub_B17100(PhotoSvtPosition, v74, v75);
                    sub_B170A0();
                  }
                  this->fields._svtPosY_5__5 = (float)PhotoSvtPosition->m_Items[2];
                }
                v76 = (UnityEngine_Component_o *)_4__this->fields.photoCampaignStandFigureBack;
                if ( !v76 )
                  goto LABEL_53;
                v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
                if ( !entity )
                  goto LABEL_53;
                v78 = v77;
                PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 0LL);
                GameObjectExtensions__SetLocalScale_27422124(v78, PhotoSvtScale, 0LL);
              }
              _8__1 = this->fields.__8__1;
              if ( _8__1 )
              {
                _8__1->fields.wait = 1;
                photoCampaignComponent = _4__this->fields.photoCampaignComponent;
                v82 = (Il2CppObject *)this->fields.__8__1;
                v83 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v69, v70, v71, v72);
                System_Action___ctor(
                  v83,
                  v82,
                  Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__2__,
                  0LL);
                if ( photoCampaignComponent )
                {
                  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v83, 0LL);
                  v84 = (Il2CppObject *)this->fields.__8__1;
                  v89 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v85, v86, v87, v88);
                  System_Func_bool____ctor(
                    v89,
                    v84,
                    Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__3__,
                    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
                  v94 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v90, v91, v92, v93);
                  UnityEngine_WaitWhile___ctor(v94, v89, 0LL);
                  this->fields.__2__current = (Il2CppObject *)v94;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.__2__current,
                    (System_Int32_array **)v94,
                    v95,
                    v96,
                    v97,
                    v98,
                    v99,
                    v100);
                  this->fields.__1__state = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v20 = (Il2CppObject *)sub_B170CC(MyRoomControl___c__DisplayClass348_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v20, 0LL);
  p__8__1 = &this->fields.__8__1;
  this->fields.__8__1 = (struct MyRoomControl___c__DisplayClass348_0_o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__8__1,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !_4__this )
    goto LABEL_53;
  MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
  if ( !*p__8__1 )
    goto LABEL_53;
  (*p__8__1)->fields.flag = 1;
  v28 = (UnityEngine_Component_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !v28 )
    goto LABEL_53;
  transform = UnityEngine_Component__get_transform(v28, 0LL);
  if ( !transform )
    goto LABEL_53;
  v119.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
  v119.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x + -1300.0;
  v119.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(transform, v119, 0LL);
  myRoomData = _4__this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_53;
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, _4__this->fields.photoCampaignServantUsrId, 0LL);
  if ( !UsrSvtData )
    goto LABEL_53;
  SvtId = UserServantEntity__getSvtId(UsrSvtData, 0LL);
  photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
  v34 = SvtId;
  Id = ServantScriptMaster__getId(SvtId, photoCampaignLimitCount, 0LL);
  this->fields._imageId_5__2 = Id;
  v36 = Id;
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  v37 = 1;
  Form = UIStandFigureRender__GetForm(v36, 1, -1, 0LL);
  this->fields._formId_5__3 = Form;
  v39 = (Il2CppObject *)this->fields.__8__1;
  v40 = Form;
  v41 = _4__this->fields.photoCampaignStandFigureBack;
  v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
  System_Action___ctor(v46, v39, Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__0__, 0LL);
  if ( !v41 )
    goto LABEL_53;
  StandFigureBack__SetMyRoomStandFigure(v41, v34, photoCampaignLimitCount, 1, 0, v40, 10, v46, 0LL);
  v47 = (Il2CppObject *)this->fields.__8__1;
  v52 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v48, v49, v50, v51);
  System_Func_bool____ctor(
    v52,
    v47,
    Method_MyRoomControl___c__DisplayClass348_0__LoadPhotoCampaignServant_b__1__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v57 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v53, v54, v55, v56);
  UnityEngine_WaitWhile___ctor(v57, v52, 0LL);
  this->fields.__2__current = (Il2CppObject *)v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.__1__state = 1;
  return v37;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__LoadPhotoCampaignServant_d__348_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  UnityEngine_GameObject_o *shutterEffect; // x0
  UILabel_o *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_GameObject_o *v17; // x0
  bool v18; // w21
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_WaitForSeconds_o *v25; // x19
  Il2CppObject **v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppObject **p__2__current; // x20
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_Component_o *photoCampaignFadeSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8665 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    byte_40F8665 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    zero = UnityEngine_Vector3__get_zero(0LL);
    GameObjectExtensions__SetLocalPosition(photoCampaignProduction, zero, 0LL);
    photoCampaignFadeSprite = (UnityEngine_Component_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !photoCampaignFadeSprite )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject(photoCampaignFadeSprite, 0LL);
    TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL);
    photoCampaignCameraButton = _4__this->fields.photoCampaignCameraButton;
    if ( !photoCampaignCameraButton )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(photoCampaignCameraButton, 1, 0LL);
    v38 = _4__this->fields.photoCampaignCameraButton;
    if ( !v38 )
      goto LABEL_25;
    photoCampaignCameraEffect = (UILabel_o *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform(v38, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v41 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                   photoCampaignCameraEffect,
                                   transform,
                                   (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v41;
    sub_B16F98(
      (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignInstantiateCameraEffect,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  shutterEffect = _4__this->fields.shutterEffect;
  if ( !shutterEffect )
    goto LABEL_25;
  photoCampaignShutterEffect = (UILabel_o *)_4__this->fields.photoCampaignShutterEffect;
  v16 = UnityEngine_GameObject__get_transform(shutterEffect, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    photoCampaignShutterEffect,
    v16,
    (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  v17 = _4__this->fields.photoCampaignProduction;
  if ( !v17
    || (v18 = 1,
        UnityEngine_GameObject__SetActive(v17, 1, 0LL),
        (v19 = (UnityEngine_Component_o *)_4__this->fields.photoCampaignFadeSprite) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
  GameObjectExtensions__SafeGetComponent_UIWidget_(
    v20,
    (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v25 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v21, v22, v23, v24);
  UnityEngine_WaitForSeconds___ctor(v25, 0.066, 0LL);
  this->fields.__2__current = (Il2CppObject *)v25;
  v26 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v26, (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
  *((_DWORD *)v26 - 2) = 1;
  return v18;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__StartCameraEffect_d__352_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8654 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomControl___c_TypeInfo, v1);
    byte_40F8654 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MyRoomControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__201_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F8656 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8656 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__281_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0

  if ( (byte_40F8657 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_40F8657 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___initMyRoom_b__179_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__200_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F8655 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8655 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v9; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomSvtControl_o *svtCtr; // x0
  System_Int32_array **standFigureCollectList; // x1
  struct MyRoomControl_o *v14; // x0
  struct MyRoomControl_o *v15; // x8
  UnityEngine_Collider_o *svtClickCollider; // x0
  struct MyRoomControl_o *v17; // x8
  UnityEngine_Collider_o *voiceClickCollider; // x0
  struct MyRoomControl_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct MyRoomControl_o *v24; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F8658 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__1__, v9);
    byte_40F8658 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  svtCtr = _4__this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_20;
  standFigureCollectList = (System_Int32_array **)standFigureBack->fields.standFigureCollectList;
  svtCtr->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)standFigureCollectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&svtCtr->fields.standFigureCollectList,
    standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive(v14, v14->fields.type, 0, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_20;
  svtClickCollider = (UnityEngine_Collider_o *)v15->fields.svtClickCollider;
  if ( !svtClickCollider )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled(svtClickCollider, v15->fields.isExistVoiceData, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_20;
  voiceClickCollider = (UnityEngine_Collider_o *)v17->fields.voiceClickCollider;
  if ( !voiceClickCollider )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled(voiceClickCollider, v17->fields.isExistVoiceData, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_20;
  if ( v19->fields.isExistVoiceData )
    MyRoomControl__setNormalFace_28791144(v19, 0, 0LL);
  else
    MyRoomControl__setFaceType(v19, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_20;
  favoriteChangeComp = v24->fields.favoriteChangeComp;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_B170D4();
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass203_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct MyRoomControl_o *v12; // x8
  StandFigureBack_o *v13; // x20
  System_Action_o *_9__2; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  StandFigureBack_o *standFigureBack; // x0
  struct MyRoomControl_o *v22; // x8
  StandFigureBack_o *v23; // x0
  UIStandFigureR_o *SvtStandFigure; // x0
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v28; // x8
  UnityEngine_GameObject_o *svtObj; // x0
  float v30; // s8
  UnityEngine_Transform_o *v31; // x0
  int v32; // s1
  struct MyRoomControl_o *v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  int v35; // s9
  UnityEngine_Transform_o *v36; // x0
  int v37; // s2
  struct MyRoomControl_o *v38; // x0
  float v39; // s0
  int v40; // s1
  struct MyRoomControl_o *v41; // x8

  if ( (byte_40F8659 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__2__, v3);
    sub_B16FFC(&StringLiteral_11353, v4);
    byte_40F8659 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  mState = _4__this->fields.mState;
  if ( mState == 1 )
  {
    standFigureBack = _4__this->fields.standFigureBack;
    if ( !standFigureBack )
      goto LABEL_30;
    StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_30;
    v23 = v22->fields.standFigureBack;
    if ( !v23 )
      goto LABEL_30;
    SvtStandFigure = StandFigureBack__GetSvtStandFigure(v23, 0, 0LL);
    if ( !SvtStandFigure )
      goto LABEL_30;
    bodyTexture = (UnityEngine_Component_o *)SvtStandFigure->fields.bodyTexture;
    if ( !bodyTexture )
      goto LABEL_30;
    transform = UnityEngine_Component__get_transform(bodyTexture, 0LL);
    if ( !transform )
      goto LABEL_30;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v28 = this->fields.__4__this;
    if ( !v28 )
      goto LABEL_30;
    svtObj = v28->fields.svtObj;
    if ( !svtObj )
      goto LABEL_30;
    v30 = *(float *)&localPosition;
    v31 = UnityEngine_GameObject__get_transform(svtObj, 0LL);
    if ( !v31 )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v32 - 1) = UnityEngine_Transform__get_localPosition(v31, 0LL);
    v33 = this->fields.__4__this;
    if ( !v33 )
      goto LABEL_30;
    v34 = v33->fields.svtObj;
    if ( !v34 )
      goto LABEL_30;
    v35 = v32;
    v36 = UnityEngine_GameObject__get_transform(v34, 0LL);
    if ( !v36 )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v37 - 2) = UnityEngine_Transform__get_localPosition(v36, 0LL);
    v38 = this->fields.__4__this;
    if ( !v38 )
      goto LABEL_30;
    v39 = -v30;
    v40 = v35;
    MyRoomControl__moveControl(
      v38,
      v38->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v37 - 2),
      (System_String_o *)StringLiteral_11353,
      0LL);
  }
  else if ( !mState )
  {
    if ( !_4__this->fields.isHeroineReave
      || (MyRoomControl__ChangeSetStandFigureObj(_4__this, !_4__this->fields.isHeroine, 1, 0LL),
          (_4__this = this->fields.__4__this) != 0LL) )
    {
      frontObjectManager = _4__this->fields.frontObjectManager;
      if ( frontObjectManager )
      {
        MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          v13 = v12->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass203_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.__9__2,
              (System_Int32_array **)_9__2,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
          if ( v13 )
          {
            StandFigureBack__Fadein(v13, _9__2, 0LL);
            return;
          }
        }
      }
    }
LABEL_30:
    sub_B170D4();
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_30;
  v41->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass203_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass203_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x0

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.isSvtLoading = 0, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  if ( v5->fields.isHeroine && v5->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(v5, 0, 0LL);
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
  UnityEngine_Collider_o *svtClickCollider; // x0
  UnityEngine_GameObject_o *voicePlayBtn; // x20
  bool enabled; // w0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (svtClickCollider = (UnityEngine_Collider_o *)_4__this->fields.svtClickCollider) == 0LL
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        enabled = UnityEngine_Collider__get_enabled(svtClickCollider, 0LL),
        !voicePlayBtn) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, enabled, 0LL);
  ActionExtensions__Call(this->fields.end_act, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomSvtControl_o *svtCtr; // x0
  System_Int32_array **standFigureCollectList; // x1
  struct MyRoomControl_o *v15; // x8
  UnityEngine_GameObject_o *moveBtnObj; // x0
  struct MyRoomControl_o *v17; // x8
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  struct MyRoomControl_o *v19; // x8
  UnityEngine_GameObject_o *helpBtn; // x0
  struct MyRoomControl_o *v21; // x8
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  struct MyRoomControl_o *v23; // x8
  UnityEngine_Collider_o *svtClickCollider; // x0
  struct MyRoomControl_o *v25; // x8
  UnityEngine_Collider_o *voiceClickCollider; // x0
  struct MyRoomControl_o *v27; // x0
  struct MyRoomControl_o *v28; // x0
  int32_t mState; // w8
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct MyRoomControl_o *v34; // x8
  StandFigureBack_o *v35; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  StandFigureBack_o *v43; // x0
  struct MyRoomControl_o *v44; // x8
  StandFigureBack_o *v45; // x0
  UIStandFigureR_o *SvtStandFigure; // x0
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v50; // x8
  UnityEngine_GameObject_o *svtObj; // x0
  float v52; // s8
  UnityEngine_Transform_o *v53; // x0
  int v54; // s1
  struct MyRoomControl_o *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  int v57; // s9
  UnityEngine_Transform_o *v58; // x0
  int v59; // s2
  struct MyRoomControl_o *v60; // x0
  float v61; // s0
  int v62; // s1
  struct MyRoomControl_o *v63; // x8

  if ( (byte_40F865A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__1__, v9);
    sub_B16FFC(&StringLiteral_11353, v10);
    byte_40F865A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  svtCtr = _4__this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_46;
  standFigureCollectList = (System_Int32_array **)standFigureBack->fields.standFigureCollectList;
  svtCtr->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)standFigureCollectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&svtCtr->fields.standFigureCollectList,
    standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  moveBtnObj = v15->fields.moveBtnObj;
  if ( !moveBtnObj )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(moveBtnObj, 1, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_46;
  changeLimitBtn = v17->fields.changeLimitBtn;
  if ( !changeLimitBtn )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(changeLimitBtn, 1, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_46;
  helpBtn = v19->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_46;
  voicePlayBtn = v21->fields.voicePlayBtn;
  if ( !voicePlayBtn )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 0, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_46;
  svtClickCollider = (UnityEngine_Collider_o *)v23->fields.svtClickCollider;
  if ( !svtClickCollider )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled(svtClickCollider, 0, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_46;
  voiceClickCollider = (UnityEngine_Collider_o *)v25->fields.voiceClickCollider;
  if ( !voiceClickCollider )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled(voiceClickCollider, 0, 0LL);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_46;
  if ( v27->fields.isExistVoiceData )
    MyRoomControl__setNormalFace_28791144(v27, 0, 0LL);
  else
    MyRoomControl__setFaceType(v27, 0LL);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_46;
  mState = v28->fields.mState;
  if ( mState == 1 )
  {
    v43 = v28->fields.standFigureBack;
    if ( !v43 )
      goto LABEL_46;
    StandFigureBack__Fadein(v43, 0LL, 0LL);
    v44 = this->fields.__4__this;
    if ( !v44 )
      goto LABEL_46;
    v45 = v44->fields.standFigureBack;
    if ( !v45 )
      goto LABEL_46;
    SvtStandFigure = StandFigureBack__GetSvtStandFigure(v45, 0, 0LL);
    if ( !SvtStandFigure )
      goto LABEL_46;
    bodyTexture = (UnityEngine_Component_o *)SvtStandFigure->fields.bodyTexture;
    if ( !bodyTexture )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform(bodyTexture, 0LL);
    if ( !transform )
      goto LABEL_46;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v50 = this->fields.__4__this;
    if ( !v50 )
      goto LABEL_46;
    svtObj = v50->fields.svtObj;
    if ( !svtObj )
      goto LABEL_46;
    v52 = *(float *)&localPosition;
    v53 = UnityEngine_GameObject__get_transform(svtObj, 0LL);
    if ( !v53 )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v54 - 1) = UnityEngine_Transform__get_localPosition(v53, 0LL);
    v55 = this->fields.__4__this;
    if ( !v55 )
      goto LABEL_46;
    v56 = v55->fields.svtObj;
    if ( !v56 )
      goto LABEL_46;
    v57 = v54;
    v58 = UnityEngine_GameObject__get_transform(v56, 0LL);
    if ( !v58 )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v59 - 2) = UnityEngine_Transform__get_localPosition(v58, 0LL);
    v60 = this->fields.__4__this;
    if ( !v60 )
      goto LABEL_46;
    v61 = -v52;
    v62 = v57;
    MyRoomControl__moveControl(
      v60,
      v60->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v59 - 2),
      (System_String_o *)StringLiteral_11353,
      0LL);
  }
  else if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(v28, 1, 0, 0LL);
    v34 = this->fields.__4__this;
    if ( v34 )
    {
      v35 = v34->fields.standFigureBack;
      _9__1 = this->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_MyRoomControl___c__DisplayClass205_0__SetMaterialSvtFigure_b__1__,
          0LL);
        this->fields.__9__1 = _9__1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__9__1,
          (System_Int32_array **)_9__1,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      if ( v35 )
      {
        StandFigureBack__Fadein(v35, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_B170D4();
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v63 = this->fields.__4__this;
  if ( !v63 )
    goto LABEL_46;
  v63->fields.isSvtLoading = 0;
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
    sub_B170D4();
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
  struct MyRoomControl_o *_4__this; // x8
  MyRoomSvtControl_o *svtCtr; // x0
  struct MyRoomControl_o *v5; // x8
  MyRoomSvtControl_o *v6; // x0
  struct MyRoomControl_o *v7; // x8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F865B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8378, method);
    byte_40F865B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (svtCtr = _4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(svtCtr, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL),
        (v5 = this->fields.__4__this) == 0LL)
    || (v6 = v5->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList(v6, this->fields.svtVoiceEnt, 0LL), (v7 = this->fields.__4__this) == 0LL)
    || (myRoomFsm = v7->fields.myRoomFsm) == 0LL )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8378, 0LL);
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
  MyRoomSvtControl_o *svtCtr; // x0
  struct MyRoomControl_o *v5; // x8
  MyRoomSvtControl_o *v6; // x0
  struct MyRoomControl_o *v7; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (svtCtr = _4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(svtCtr, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL),
        (v5 = this->fields.__4__this) == 0LL)
    || (v6 = v5->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList(v6, this->fields.svtVoiceEnt, 0LL), (v7 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v7->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass274_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  System_Action_o *callback; // x0

  if ( (byte_40F865C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F865C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  struct MyRoomSvtControl_o *bondsSvtCtr; // x0
  System_Int32_array **standFigureCollectList; // x1
  UnityEngine_GameObject_o *bondsSvtObj; // x0
  UnityEngine_Transform_o *transform; // x0
  float v15; // s1
  float v16; // s2
  struct MyRoomControl_o *v17; // x8
  StandFigureBack_o *v18; // x0
  float v19; // s8
  float v20; // s9
  struct MyRoomControl_o *v21; // x8
  StandFigureBack_o *v22; // x0
  UIStandFigureR_o *SvtStandFigure; // x0
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
  if ( !bondsStandFigureBack )
    goto LABEL_14;
  bondsSvtCtr = _4__this->fields.bondsSvtCtr;
  if ( !bondsSvtCtr )
    goto LABEL_14;
  standFigureCollectList = (System_Int32_array **)bondsStandFigureBack->fields.standFigureCollectList;
  bondsSvtCtr->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)standFigureCollectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&bondsSvtCtr->fields.standFigureCollectList,
    standFigureCollectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  bondsSvtObj = this->fields.bondsSvtObj;
  if ( !bondsSvtObj )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform(bondsSvtObj, 0LL);
  if ( !transform )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_14;
  v18 = v17->fields.bondsStandFigureBack;
  if ( !v18 )
    goto LABEL_14;
  v19 = v15;
  v20 = v16;
  StandFigureBack__Fadein(v18, 0LL, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21
    || (v22 = v21->fields.bondsStandFigureBack) == 0LL
    || (SvtStandFigure = StandFigureBack__GetSvtStandFigure(v22, 0, 0LL)) == 0LL
    || (bodyTexture = (UnityEngine_Component_o *)SvtStandFigure->fields.bodyTexture) == 0LL
    || (v25 = UnityEngine_Component__get_transform(bodyTexture, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  v26.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition(v25, 0LL));
  v26.fields.y = v19;
  v26.fields.z = v20;
  GameObjectExtensions__SetLocalPosition(this->fields.bondsSvtObj, v26, 0LL);
  this->fields.createStandEnd = 1;
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v16; // x22
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct MyRoomControl_o *v24; // x22
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40F865D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v10);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__1__, v12);
    sub_B16FFC(&StringLiteral_16676, v13);
    sub_B16FFC(&StringLiteral_16675, v14);
    byte_40F865D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.photoCampaignAssetData = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.photoCampaignAssetData,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !assetData
    || (v16 = this->fields.__4__this,
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  assetData,
                                                                  (System_String_o *)StringLiteral_16675,
                                                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        !v16)
    || (v16->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v16->fields.photoCampaignCameraEffect,
          Object_WarBoardWaitTimeSetting,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        v24 = this->fields.__4__this,
        v25 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       assetData,
                                       (System_String_o *)StringLiteral_16676,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        !v24) )
  {
LABEL_13:
    sub_B170D4();
  }
  v24->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v24->fields.photoCampaignShutterEffect, v25, v26, v27, v28, v29, v30, v31);
  _9__1 = this->fields.__9__1;
  eventId = this->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MyRoomControl___c__DisplayClass345_0__LoadPhotoCampaignAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(eventId, _9__1, 1, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass345_0___LoadPhotoCampaignAssets_b__1(
        MyRoomControl___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *photoCampaignFrameSprite; // x21
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8

  if ( (byte_40F865E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19370, v3);
    sub_B16FFC(&StringLiteral_10675, v4);
    sub_B16FFC(&StringLiteral_10676, v5);
    byte_40F865E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = this->fields.eventId;
  photoCampaignFrameSprite = _4__this->fields.photoCampaignFrameSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, photoCampaignFrameSprite, (System_String_o *)StringLiteral_10676, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9
    || (AtlasManager__SetEventUI_28584872(
          this->fields.eventId,
          v9->fields.photoCampaignCameraButtonSprite,
          (System_String_o *)StringLiteral_10675,
          0LL),
        (v10 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  AtlasManager__SetEventUI_28584872(
    this->fields.eventId,
    v10->fields.photoCampaignCameraButtonBgSprite,
    (System_String_o *)StringLiteral_19370,
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
  CommonUI_o *v10; // x0
  bool v11; // w21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Func_bool__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UnityEngine_WaitUntil_o *v21; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *klass; // x0

  if ( (byte_40F8666 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v3);
    sub_B16FFC(&Method_MyRoomControl__initMaterial_b__248_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_6864, v7);
    byte_40F8666 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), !_4__this)
      || (klass = (PlayMakerFSM_o *)_4__this[2].klass) == 0LL )
    {
LABEL_13:
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(klass, (System_String_o *)StringLiteral_6864, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v10 )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode(v10, 1, 0LL);
  v16 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v12, v13, v14, v15);
  System_Func_bool____ctor(
    v16,
    _4__this,
    Method_MyRoomControl__initMaterial_b__248_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v17, v18, v19, v20);
  UnityEngine_WaitUntil___ctor(v21, v16, 0LL);
  this->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__initMaterial_d__248_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  MyRoomControl__svtVoicePlayAct_d__293_o *v5; // x19
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
  MyRoomControl_o *_4__this; // x20
  Il2CppObject *v23; // x21
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
  struct MyRoomControl___c__DisplayClass293_0_o *_8__1; // x0
  System_Int32_array **v37; // x1
  CommonUI_o *Instance; // x21
  Il2CppObject **p__8__1; // x27
  CommonUI_o *v40; // x0
  System_Int32_array **v41; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  bool result; // w0
  UnityEngine_GameObject_o *svtObj; // x0
  UnityEngine_Component_o *SvtStandFigure; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x0
  UnityEngine_GameObject_o *photoCampaignButton; // x0
  TitleInfoControl_o *titleInfo; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v60; // x21
  WebViewManager_o *v61; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t *item; // x8
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v65; // x22
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  Il2CppObject *v73; // x23
  Il2CppObject *v74; // x0
  struct MaterialEventLogListViewItem_Info_o *v75; // x8
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct MaterialEventLogListViewItem_Info_o *v83; // x8
  System_Int32_array **VoiceList_30036932; // x0
  __int64 *p_svtVoiceDataList_5__4; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *svtVoiceDataList_5__4; // x8
  struct MaterialEventLogListViewItem_Info_o *v93; // x8
  System_Int32_array **VoiceList_30036348; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct MyRoomControl___c__DisplayClass293_0_o *v101; // x22
  UnityEngine_Component_o *bondsStandFigureBack; // x0
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  UnityEngine_GameObject_o *monitor; // x0
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x22
  __int64 materialFigureSvtDispIdx; // x23
  struct MaterialEventLogListViewItem_Info_o *v113; // x8
  int32_t v114; // w22
  int32_t Id; // w0
  struct MaterialEventLogListViewItem_Info_o *v116; // x8
  int32_t v117; // w23
  int32_t voiceCondValue; // w24
  __int64 v119; // x24
  int32_t v120; // w23
  __int64 v121; // x8
  __int64 v122; // x8
  __int64 v123; // x21
  __int64 v124; // x8
  __int64 v125; // x8
  StandFigureBack_o *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  struct MaterialEventLogListViewItem_Info_o *v131; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *v133; // x21
  Il2CppObject *v134; // x26
  System_Action_o *v135; // x25
  System_Int32_array **v136; // x0
  BattleServantConfConponent_o *v137; // x19
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  int v144; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *v145; // x21
  int size; // w8
  MyRoomSvtControl_o *v147; // x0
  MyRoomSvtControl_o **p_bondsSvtCtr; // x22
  System_Int32_array **v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  unsigned int v156; // w22
  ServantVoiceData_array *v157; // x21
  ServantVoiceData_o *v158; // x8
  MyRoomSvtControl_o *bondsSvtCtr; // x0
  CommonUI_o *v160; // x21
  CommonUI_o *v161; // x0
  System_Int32_array **v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  MyRoomSvtControl_o *v169; // x0
  CommonUI_o *v170; // x21
  CommonUI_o *v171; // x0
  System_Int32_array **v172; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  MyRoomSvtControl_o *v179; // x0
  SoundManager_o *v180; // x0
  StandFigureBack_o *v181; // x0
  struct MyRoomControl___c__DisplayClass293_0_o *v182; // x8
  UnityEngine_GameObject_o *bondsSvtObj; // x0
  UnityEngine_GameObject_o *v184; // x0
  UnityEngine_Component_o *v185; // x0
  UnityEngine_GameObject_o *v186; // x0
  UnityEngine_GameObject_o *v187; // x0
  UnityEngine_GameObject_o *v188; // x0
  TitleInfoControl_o *v189; // x0
  CommonUI_o *v190; // x20
  CommonUI_o *v191; // x0
  System_Int32_array **v192; // x0
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  System_Int32_array **v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  int v206; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_40F8667 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&char_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B16FFC(&Method_MyRoomControl___c__DisplayClass293_0__svtVoicePlayAct_b__0__, v19);
    sub_B16FFC(&MyRoomControl___c__DisplayClass293_0_TypeInfo, v20);
    this = (MyRoomControl__svtVoicePlayAct_d__293_o *)sub_B16FFC(&UIStandFigureRender_TypeInfo, v21);
    byte_40F8667 = 1;
  }
  _4__this = v5->fields.__4__this;
  switch ( v5->fields.__1__state )
  {
    case 0:
      v5->fields.__1__state = -1;
      v23 = (Il2CppObject *)sub_B170CC(MyRoomControl___c__DisplayClass293_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v23, 0LL);
      v5->fields.__8__1 = (struct MyRoomControl___c__DisplayClass293_0_o *)v23;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields.__8__1,
        (System_Int32_array **)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      _8__1 = v5->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_138;
      v37 = (System_Int32_array **)v5->fields.__4__this;
      _8__1->fields.__4__this = (struct MyRoomControl_o *)v37;
      sub_B16F98((BattleServantConfConponent_o *)&_8__1->fields, v37, v30, v31, v32, v33, v34, v35);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !Instance )
        goto LABEL_138;
      CommonUI__maskFadeout(Instance, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_13:
      v40 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v40 )
        goto LABEL_138;
      if ( CommonUI__maskFadeIsBusy(v40, 0LL) )
      {
        v206 = 0;
        v41 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
        v5->fields.__2__current = (Il2CppObject *)v41;
        p__2__current = (BattleServantConfConponent_o *)&v5->fields.__2__current;
        sub_B16F98(p__2__current, v41, v43, v44, v45, v46, v47, v48);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      svtObj = _4__this->fields.svtObj;
      if ( !svtObj )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(svtObj, 0, 0LL);
      SvtStandFigure = (UnityEngine_Component_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !SvtStandFigure )
        goto LABEL_138;
      gameObject = UnityEngine_Component__get_gameObject(SvtStandFigure, 0LL);
      if ( !gameObject )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      multipleViewButton = _4__this->fields.multipleViewButton;
      if ( !multipleViewButton )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(multipleViewButton, 0, 0LL);
      photoCampaignButton = _4__this->fields.photoCampaignButton;
      if ( !photoCampaignButton )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(photoCampaignButton, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      titleInfo = _4__this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_138;
      TitleInfoControl__setDispHeader(titleInfo, 0, 0LL);
      v60 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                       System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                       v56,
                                                                       v57,
                                                                       v58,
                                                                       v59);
      System_Collections_Generic_List_VoiceCondType_Type____ctor(
        v60,
        (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v60 )
        goto LABEL_138;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v60,
        81,
        (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
      v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v61 )
        goto LABEL_138;
      MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)v61,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v5->fields.item;
      if ( !item )
        goto LABEL_138;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_138;
      Entity = ServantVoiceMaster__getEntity(MasterData_WarQuestSelectionMaster, item[24], item[26], item[15], 0LL);
      if ( !Entity )
        goto LABEL_138;
      v65 = Entity;
      VoiceAssetName = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
      v5->fields._voiceAssetName_5__2 = (struct System_String_o *)VoiceAssetName;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._voiceAssetName_5__2,
        VoiceAssetName,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      v73 = (Il2CppObject *)System_Int32__ToString((int)v65 + 20, 0LL);
      LOWORD(v206) = 95;
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, &v206);
      v75 = v5->fields.item;
      if ( !v75 )
        goto LABEL_138;
      v76 = (System_Int32_array **)System_String__Concat_43823436(v73, v74, (Il2CppObject *)v75->fields.voiceId, 0LL);
      v5->fields._playSvtVoiceId_5__3 = (struct System_String_o *)v76;
      sub_B16F98((BattleServantConfConponent_o *)&v5->fields._playSvtVoiceId_5__3, v76, v77, v78, v79, v80, v81, v82);
      v83 = v5->fields.item;
      if ( !v83 )
        goto LABEL_138;
      VoiceList_30036932 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_30036932(
                                                    v65,
                                                    v83->fields.svtVoiceType,
                                                    v5->fields._playSvtVoiceId_5__3,
                                                    (System_Collections_Generic_List_CondType_Kind__o *)v60,
                                                    0,
                                                    0LL);
      p_svtVoiceDataList_5__4 = (__int64 *)&v5->fields._svtVoiceDataList_5__4;
      v5->fields._svtVoiceDataList_5__4 = (struct System_Collections_Generic_List_ServantVoiceData____o *)VoiceList_30036932;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._svtVoiceDataList_5__4,
        VoiceList_30036932,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      svtVoiceDataList_5__4 = v5->fields._svtVoiceDataList_5__4;
      if ( svtVoiceDataList_5__4 && svtVoiceDataList_5__4->fields._size )
        goto LABEL_39;
      v93 = v5->fields.item;
      if ( !v93 )
        goto LABEL_138;
      VoiceList_30036348 = (System_Int32_array **)ServantVoiceEntity__getVoiceList_30036348(
                                                    v65,
                                                    v93->fields.svtVoiceType,
                                                    3,
                                                    v93->fields.voiceCondValue,
                                                    0LL,
                                                    -1,
                                                    0LL);
      *p_svtVoiceDataList_5__4 = (__int64)VoiceList_30036348;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v5->fields._svtVoiceDataList_5__4,
        VoiceList_30036348,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
LABEL_39:
      p__8__1 = (Il2CppObject **)&v5->fields.__8__1;
      v101 = v5->fields.__8__1;
      bondsStandFigureBack = (UnityEngine_Component_o *)_4__this->fields.bondsStandFigureBack;
      if ( !bondsStandFigureBack )
        goto LABEL_138;
      v103 = (System_Int32_array **)UnityEngine_Component__get_gameObject(bondsStandFigureBack, 0LL);
      if ( !v101 )
        goto LABEL_138;
      v101->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)v103;
      sub_B16F98((BattleServantConfConponent_o *)&v101->fields.bondsSvtObj, v103, v104, v105, v106, v107, v108, v109);
      if ( !*p__8__1 )
        goto LABEL_138;
      monitor = (UnityEngine_GameObject_o *)(*p__8__1)[1].monitor;
      if ( !monitor )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(monitor, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_138;
      LOBYTE((*p__8__1)[2].klass) = 0;
      materialImageIdList = _4__this->fields.materialImageIdList;
      if ( !materialImageIdList )
        goto LABEL_138;
      materialFigureSvtDispIdx = _4__this->fields.materialFigureSvtDispIdx;
      if ( materialImageIdList->fields._size <= (unsigned int)materialFigureSvtDispIdx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v113 = v5->fields.item;
      if ( !v113 )
        goto LABEL_138;
      v114 = materialImageIdList->fields._items->m_Items[materialFigureSvtDispIdx + 1];
      Id = ServantScriptMaster__getId(v113->fields.svt_id, v114, 0LL);
      v116 = v5->fields.item;
      if ( !v116 )
        goto LABEL_138;
      v117 = Id;
      voiceCondValue = v116->fields.voiceCondValue;
      if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      }
      this = (MyRoomControl__svtVoicePlayAct_d__293_o *)UIStandFigureRender__GetForm(v117, 1, voiceCondValue, 0LL);
      v119 = *p_svtVoiceDataList_5__4;
      v120 = (int)this;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_66;
      if ( !*(_DWORD *)(v119 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v121 = *(_QWORD *)(*(_QWORD *)(v119 + 16) + 32LL);
      if ( !v121 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v121 + 24) )
        goto LABEL_139;
      v122 = *(_QWORD *)(v121 + 32);
      if ( !v122 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v122 + 60) )
        goto LABEL_66;
      v123 = *p_svtVoiceDataList_5__4;
      if ( !v123 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v123 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v124 = *(_QWORD *)(*(_QWORD *)(v123 + 16) + 32LL);
      if ( !v124 )
        goto LABEL_138;
      if ( !*(_DWORD *)(v124 + 24) )
      {
LABEL_139:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v125 = *(_QWORD *)(v124 + 32);
      if ( !v125 )
        goto LABEL_138;
      v120 = *(_DWORD *)(v125 + 56);
LABEL_66:
      v126 = _4__this->fields.bondsStandFigureBack;
      if ( !v126 )
        goto LABEL_138;
      StandFigureBack__Init(v126, 0LL);
      v131 = v5->fields.item;
      if ( !v131 )
        goto LABEL_138;
      svt_id = v131->fields.svt_id;
      v133 = _4__this->fields.bondsStandFigureBack;
      v134 = *p__8__1;
      v135 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v127, v128, v129, v130);
      System_Action___ctor(v135, v134, Method_MyRoomControl___c__DisplayClass293_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !v133 )
        goto LABEL_138;
      StandFigureBack__SetMyRoomStandFigure(v133, svt_id, v114, 1, 0, v120, 10, v135, 0LL);
LABEL_70:
      if ( !*p__8__1 )
        goto LABEL_138;
      if ( !LOBYTE((*p__8__1)[2].klass) )
      {
        v206 = 0;
        v149 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
        v5->fields.__2__current = (Il2CppObject *)v149;
        v137 = (BattleServantConfConponent_o *)&v5->fields.__2__current;
        sub_B16F98(v137, v149, v150, v151, v152, v153, v154, v155);
        v144 = 2;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      MyRoomControl__voiceLoad(_4__this, v5->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_74:
      if ( _4__this->fields.isVoiceLoading )
      {
        v206 = 0;
        v136 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
        v5->fields.__2__current = (Il2CppObject *)v136;
        v137 = (BattleServantConfConponent_o *)&v5->fields.__2__current;
        sub_B16F98(v137, v136, v138, v139, v140, v141, v142, v143);
        v144 = 3;
        goto LABEL_137;
      }
      v145 = v5->fields._svtVoiceDataList_5__4;
      if ( !v145 )
        goto LABEL_138;
      size = v145->fields._size;
      if ( size >= 2 )
      {
        v156 = 0;
        while ( 1 )
        {
          if ( size <= v156 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v157 = v145->fields._items->m_Items[v156];
          if ( !v157 )
            goto LABEL_138;
          if ( !v157->max_length )
            goto LABEL_139;
          v158 = v157->m_Items[0];
          if ( !v158 )
            goto LABEL_138;
          this = (MyRoomControl__svtVoicePlayAct_d__293_o *)System_String__op_Equality(
                                                              v158->fields.id,
                                                              v5->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          v145 = v5->fields._svtVoiceDataList_5__4;
          if ( !v145 )
            goto LABEL_138;
          size = v145->fields._size;
          if ( (int)++v156 >= size )
          {
            p_bondsSvtCtr = &_4__this->fields.bondsSvtCtr;
            goto LABEL_93;
          }
        }
        bondsSvtCtr = _4__this->fields.bondsSvtCtr;
        if ( bondsSvtCtr )
        {
          p_bondsSvtCtr = &_4__this->fields.bondsSvtCtr;
          MyRoomSvtControl__setSvtVoice_24532476(bondsSvtCtr, v157, v5->fields._voiceAssetName_5__2, 0LL);
          goto LABEL_93;
        }
        goto LABEL_138;
      }
      v147 = _4__this->fields.bondsSvtCtr;
      if ( !v147 )
        goto LABEL_138;
      p_bondsSvtCtr = &_4__this->fields.bondsSvtCtr;
      MyRoomSvtControl__setSvtVoice(v147, v5->fields._svtVoiceDataList_5__4, v5->fields._voiceAssetName_5__2, 0LL);
LABEL_93:
      if ( !*p_bondsSvtCtr )
        goto LABEL_138;
      MyRoomSvtControl__SetVoiceData(*p_bondsSvtCtr, 0LL);
      if ( !*p_bondsSvtCtr )
        goto LABEL_138;
      MyRoomSvtControl__playVoice(*p_bondsSvtCtr, 0LL);
      v160 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v160 )
        goto LABEL_138;
      CommonUI__maskFadein(v160, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_100:
      v161 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v161 )
        goto LABEL_138;
      if ( CommonUI__maskFadeIsBusy(v161, 0LL) )
      {
        v206 = 0;
        v162 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
        v5->fields.__2__current = (Il2CppObject *)v162;
        v137 = (BattleServantConfConponent_o *)&v5->fields.__2__current;
        sub_B16F98(v137, v162, v163, v164, v165, v166, v167, v168);
        v144 = 4;
        goto LABEL_137;
      }
LABEL_103:
      if ( !_4__this )
        goto LABEL_138;
      v169 = _4__this->fields.bondsSvtCtr;
      if ( !v169 )
        goto LABEL_138;
      if ( MyRoomSvtControl__isPlay(v169, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v206 = 0;
        v199 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
        v5->fields.__2__current = (Il2CppObject *)v199;
        v137 = (BattleServantConfConponent_o *)&v5->fields.__2__current;
        sub_B16F98(v137, v199, v200, v201, v202, v203, v204, v205);
        v144 = 5;
        goto LABEL_137;
      }
      v170 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v170 )
        goto LABEL_138;
      CommonUI__maskFadeout(v170, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_112:
      v171 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v171 )
        goto LABEL_138;
      if ( CommonUI__maskFadeIsBusy(v171, 0LL) )
      {
        v206 = 0;
        v172 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
        v5->fields.__2__current = (Il2CppObject *)v172;
        v137 = (BattleServantConfConponent_o *)&v5->fields.__2__current;
        sub_B16F98(v137, v172, v173, v174, v175, v176, v177, v178);
        v144 = 6;
        goto LABEL_137;
      }
      if ( !_4__this )
        goto LABEL_138;
      v179 = _4__this->fields.bondsSvtCtr;
      if ( !v179 )
        goto LABEL_138;
      MyRoomSvtControl__stopVoice(v179, 0LL);
      v180 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v180 )
        goto LABEL_138;
      SoundManager__ReleaseAudioAssetStorage(v180, v5->fields._voiceAssetName_5__2, 0LL);
      v181 = _4__this->fields.bondsStandFigureBack;
      if ( !v181 )
        goto LABEL_138;
      StandFigureBack__Init(v181, 0LL);
      v182 = v5->fields.__8__1;
      if ( !v182 )
        goto LABEL_138;
      bondsSvtObj = v182->fields.bondsSvtObj;
      if ( !bondsSvtObj )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(bondsSvtObj, 0, 0LL);
      v184 = _4__this->fields.svtObj;
      if ( !v184 )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(v184, 1, 0LL);
      v185 = (UnityEngine_Component_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !v185 )
        goto LABEL_138;
      v186 = UnityEngine_Component__get_gameObject(v185, 0LL);
      if ( !v186 )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(v186, 1, 0LL);
      v187 = _4__this->fields.multipleViewButton;
      if ( !v187 )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(v187, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      v188 = _4__this->fields.photoCampaignButton;
      if ( !v188 )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive(v188, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      v189 = _4__this->fields.titleInfo;
      if ( !v189 )
        goto LABEL_138;
      TitleInfoControl__setDispHeader(v189, 1, 0LL);
      v190 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v190 )
        goto LABEL_138;
      CommonUI__maskFadein(v190, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_132:
      v191 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v191 )
LABEL_138:
        sub_B170D4();
      if ( !CommonUI__maskFadeIsBusy(v191, 0LL) )
        return 0;
      v206 = 0;
      v192 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v206);
      v5->fields.__2__current = (Il2CppObject *)v192;
      v137 = (BattleServantConfConponent_o *)&v5->fields.__2__current;
      sub_B16F98(v137, v192, v193, v194, v195, v196, v197, v198);
      v144 = 7;
LABEL_137:
      *(_DWORD *)&v137[-1].fields.isOpenAfter = v144;
      return 1;
    case 1:
      v5->fields.__1__state = -1;
      goto LABEL_13;
    case 2:
      p__8__1 = (Il2CppObject **)&v5->fields.__8__1;
      v5->fields.__1__state = -1;
      goto LABEL_70;
    case 3:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_138;
      goto LABEL_74;
    case 4:
      v5->fields.__1__state = -1;
      goto LABEL_100;
    case 5:
      v5->fields.__1__state = -1;
      goto LABEL_103;
    case 6:
      v5->fields.__1__state = -1;
      goto LABEL_112;
    case 7:
      v5->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomControl__svtVoicePlayAct_d__293_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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