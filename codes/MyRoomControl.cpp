void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct MyRoomControl_StaticFields *static_fields; // x8

  if ( (byte_4C1D51D & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_3053/*"Bad array index: "*/, v2);
    byte_4C1D51D = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_3053/*"Bad array index: "*/;
  sub_1C3B708(MyRoomControl_TypeInfo->static_fields);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_C0DA00;
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
  __int64 v8; // x1
  MyRoomStateMaterial_o *v9; // x20
  System_Collections_Generic_List_int__o *v10; // x20
  System_Collections_Generic_List_int__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // w8
  __int64 v15; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4C1D51C & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&long___TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C3B764(&MyRoomStateMaterial_TypeInfo, v6);
    sub_1C3B764(&PhotoStandFigureComponent___TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Vector3___TypeInfo, v8);
    byte_4C1D51C = 1;
  }
  this->fields.photoStandFigures = (struct PhotoStandFigureComponent_array *)sub_1C3B80C(
                                                                               PhotoStandFigureComponent___TypeInfo,
                                                                               2LL);
  sub_1C3B708(&this->fields.photoStandFigures);
  v9 = (MyRoomStateMaterial_o *)sub_1C3B9B0(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v9, 0LL);
  this->fields.mStateMaterial = v9;
  sub_1C3B708(&this->fields.mStateMaterial);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v10;
  sub_1C3B708(&this->fields.imageIdList);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v11;
  sub_1C3B708(&this->fields.materialImageIdList);
  v12 = sub_1C3B80C(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v12 )
    sub_1C3B9C0(0LL, v13);
  v14 = *(_DWORD *)(v12 + 24);
  if ( !v14 || (*(_DWORD *)(v12 + 40) = 0, *(_QWORD *)(v12 + 32) = 0x43900000C4000000LL, v14 == 1) )
    sub_1C3B9C8(v12, v12);
  *(_DWORD *)(v12 + 52) = 0;
  *(_QWORD *)(v12 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v12;
  sub_1C3B708(&this->fields.defaultMultipleServantPoses);
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4C1C511 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  this->fields.multipleServantUsrIds = (struct System_Int64_array *)sub_1C3B80C(long___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.multipleLimitCounts);
  this->fields.photoTargetFaceListIndex = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.photoTargetFaceListIndex);
  this->fields.photoCampaignFinishedTime = -1LL;
  *(_QWORD *)&this->fields.defaultPhotoServantPos.fields.x = 0x4390000000000000LL;
  this->fields.defaultPhotoServantPos.fields.z = 0.0;
  this->fields.isOneShot = 1;
  this->fields.temporaryPhotoUserSvtId = (struct System_Int64_array *)sub_1C3B80C(long___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.temporaryPhotoUserSvtId);
  this->fields.temporaryPhotoSvtLimitCount = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.temporaryPhotoSvtLimitCount);
  this->fields.temporaryStaffImageId = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.temporaryStaffImageId);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomControl__AccountLinkageServerStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C3B9C0(0LL, method);
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

  if ( (byte_4C1D4C2 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_LinkageStatusCheckCallback__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4C1D4C2 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v8);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall MyRoomControl__AddSpecialImageLimitCount(
        MyRoomControl_o *this,
        System_Collections_Generic_List_int__o **imageLimitCountList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x20
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  MyroomServantSpecialImageMaster_o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t current; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  MyroomServantSpecialImageEntity_array *EntitiesByBaseLimitCount; // x0
  __int64 v26; // x1
  MyroomServantSpecialImageEntity_array *v27; // x23
  int max_length; // w8
  int i; // w29
  MyroomServantSpecialImageEntity_o *v30; // x8
  int32_t num; // w24
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C1D51A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageLimitCountList);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4C1D51A = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v15 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  if ( !*imageLimitCountList )
    sub_1C3B9C0(Master_object, v17);
  v18 = (MyroomServantSpecialImageMaster_o *)Master_object;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    *imageLimitCountList,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v36,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v15 )
      sub_1C3B9C0(v19, v20);
    current = v36.fields._current;
    items = v15->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1C3B9C0(v19, v20);
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v15,
        current,
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
    if ( !v18 )
      sub_1C3B9C0(v19, v20);
    EntitiesByBaseLimitCount = MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(v18, svtId, current, 0LL);
    v27 = EntitiesByBaseLimitCount;
    if ( !EntitiesByBaseLimitCount )
      sub_1C3B9C0(0LL, v26);
    max_length = EntitiesByBaseLimitCount->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C3B9C8(EntitiesByBaseLimitCount, v26);
        v30 = v27->m_Items[i];
        if ( !v30 )
          sub_1C3B9C0(EntitiesByBaseLimitCount, v26);
        num = v30->fields.num;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        EntitiesByBaseLimitCount = (MyroomServantSpecialImageEntity_array *)ImageLimitCount__SpecialNumToSpecialImageLimitCount(
                                                                              num,
                                                                              0LL);
        v26 = (unsigned int)EntitiesByBaseLimitCount;
        v32 = v15->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v32 )
          sub_1C3B9C0(EntitiesByBaseLimitCount, (unsigned int)EntitiesByBaseLimitCount);
        v34 = v15->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            (int32_t)EntitiesByBaseLimitCount,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = v34 + 1;
          v32->m_Items[v34 + 1] = (int)EntitiesByBaseLimitCount;
        }
        max_length = v27->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v36,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *imageLimitCountList = v15;
  sub_1C3B708(imageLimitCountList);
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

  if ( (byte_4C1D4C5 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__305_0__, v5);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_1980/*"ANRException: Blocked thread detected."*/, v8);
    sub_1C3B764(&StringLiteral_3440/*"CLICK_GAMEOPTION"*/, v9);
    byte_4C1D4C5 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1980/*"ANRException: Blocked thread detected."*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__305_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1C3B9C0(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3440/*"CLICK_GAMEOPTION"*/, 0LL);
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

  if ( (byte_4C1D4D4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1C3B764(&MyRoomControl_TypeInfo, v3);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4C1D4D4 = 1;
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
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v13, 0LL);
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
    sub_1C3B9C0(changeBGBtnImg, v7);
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

  if ( (byte_4C1D50A & 1) == 0 )
  {
    sub_1C3B764(&ManagerConfig_TypeInfo, method);
    byte_4C1D50A = 1;
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
  MyRoomControl__CaptureServant_d__403_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C1D505 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__CaptureServant_d__403_TypeInfo, *(_QWORD *)&width);
    byte_4C1D505 = 1;
  }
  v7 = (MyRoomControl__CaptureServant_d__403_o *)sub_1C3B9B0(MyRoomControl__CaptureServant_d__403_TypeInfo);
  MyRoomControl__CaptureServant_d__403___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  v7->fields.__4__this = this;
  sub_1C3B708(&v7->fields.__4__this);
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

  if ( (byte_4C1D4D1 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isSePlay);
    sub_1C3B764(&Method_MyRoomControl_ChangeDisp__, v6);
    sub_1C3B764(&Method_MyRoomControl__ChangeDisp_b__327_0__, v7);
    sub_1C3B764(&Method_MyRoomControl__ChangeDisp_b__327_1__, v8);
    sub_1C3B764(&MyRoomControl_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/, v10);
    byte_4C1D4D1 = 1;
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
      v34 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_ChangeDisp__);
    v35 = (System_Reflection_MethodBase_o *)sub_1C3B748(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v12);
    if ( isSePlay )
    {
      v13 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_ChangeDisp__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C3B748(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
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
          sub_1C3B9C0(soundPlayerComp, v17);
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
            MyRoomControl__moveControl(this, this->fields.svtObj, v62, (System_String_o *)StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/, v32);
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
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v67, (System_String_o *)StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/, v42);
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
            v45 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(v45, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__327_0__, 0LL);
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
            v49 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(v49, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__327_1__, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(
        MyRoomControl_o *this,
        int32_t figureIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MyRoomControl___c__DisplayClass401_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v11; // x19
  System_Action_o *v12; // x20

  if ( (byte_4C1D504 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&figureIndex);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass401_0__ChangePhotoCampaignServantFace_b__0__, v5);
    sub_1C3B764(&MyRoomControl___c__DisplayClass401_0_TypeInfo, v6);
    byte_4C1D504 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass401_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass401_0_TypeInfo);
  MyRoomControl___c__DisplayClass401_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  v7->fields.__4__this = this;
  v8 = sub_1C3B708(&v7->fields);
  v7->fields.figureIndex = figureIndex;
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_8;
  if ( photoStandFigures->max_length <= figureIndex )
    sub_1C3B9C8(v8, v9);
  v11 = photoStandFigures->m_Items[figureIndex];
  v12 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass401_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  if ( !v11 )
LABEL_8:
    sub_1C3B9C0(v8, v9);
  PhotoStandFigureComponent__SetFacePhotoServant(v11, 1, v12, -1, 0LL);
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

  if ( (byte_4C1D4D8 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, isSet);
    byte_4C1D4D8 = 1;
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
    sub_1C3B9C0(playBtnImg, isSet);
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

  if ( (byte_4C1D4D7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isSet);
    byte_4C1D4D7 = 1;
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
    sub_1C3B9C0(standFigureBack, isSet);
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
  System_Action_o *_9__306_0; // x22
  Il2CppObject *v24; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v29; // 0:x3.8
  System_Nullable_int__o v30; // 0:x4.8

  if ( (byte_4C1D4C6 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_MyRoomControl___c__CheckCsUnlink_b__306_0__, v7);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_3439/*"CLICK_FOLLOWER"*/, v9);
    sub_1C3B764(&StringLiteral_1989/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v10);
    sub_1C3B764(&StringLiteral_3440/*"CLICK_GAMEOPTION"*/, v11);
    byte_4C1D4C6 = 1;
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
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1989/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v22 = MyRoomControl___c_TypeInfo;
      }
      _9__306_0 = v22->static_fields->__9__306_0;
      if ( !_9__306_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = MyRoomControl___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__306_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(_9__306_0, v24, Method_MyRoomControl___c__CheckCsUnlink_b__306_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__306_0 = _9__306_0;
        sub_1C3B708(&static_fields->__9__306_0);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v30 = msgFontSize;
        v29 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v20, _9__306_0, v29, v30, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v18 = &StringLiteral_3439/*"CLICK_FOLLOWER"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1C3B9C0(SelfUserAccountLinkage, v13);
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
  v18 = &StringLiteral_3440/*"CLICK_GAMEOPTION"*/;
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
  if ( (byte_4C1D4DD & 1) == 0 )
  {
    sub_1C3B764(&MyRoomRootComponent_TypeInfo, method);
    sub_1C3B764(&StringLiteral_3593/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v3);
    this = (MyRoomControl_o *)sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, v4);
    byte_4C1D4DD = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = &StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C3B9C0(this, method);
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
  v9 = &StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = &StringLiteral_3593/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C3B9C0(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C3B9C0(0LL, method);
  ExchangeSvtCoinComponent__CloseMenu(exchangeSvtCoinComp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4C1D4EA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__CloseMultipleView_b__372_0__, v3);
    byte_4C1D4EA = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1C3B9C0(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__372_0__, 0LL);
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

  if ( (byte_4C1D4E8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6869/*"GameObject requires RigidBody/Collider!\n"*/, method);
    byte_4C1D4E8 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1C3B9C0(mBlocker, method);
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
      sub_1C3B9C8(mBlocker, method);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6869/*"GameObject requires RigidBody/Collider!\n"*/ : 0LL;
              v19.fields.y = v15;
              v19.fields.x = flt_C0CA30[(_DWORD)v7 == 4] + y;
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


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1D4C1 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_TypeInfo, setEndAction);
    byte_4C1D4C1 = 1;
  }
  v5 = (MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *)sub_1C3B9B0(MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__278___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1C3B9C0(v6, v7);
  v5->fields.__4__this = this;
  sub_1C3B708(&v5->fields.__4__this);
  v5->fields.setEndAction = setEndAction;
  sub_1C3B708(&v5->fields.setEndAction);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__CompletedTargetSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 v6; // x11
  char v7; // w14
  char v8; // w12
  struct System_Int64_array *temporaryPhotoUserSvtId; // x14
  PhotoStandFigureComponent_o *v10; // x13
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x14
  struct System_Int32_array *temporaryStaffImageId; // x15
  System_Collections_Generic_IEnumerable_TSource__o *temporaryPhotoTargetList; // x0
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v15; // x8
  int v16; // w9

  v2 = this;
  if ( (byte_4C1D4F9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_PhotoUtility_TargetType___, method);
    this = (MyRoomControl_o *)sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Clear__, v3);
    byte_4C1D4F9 = 1;
  }
  photoStandFigures = v2->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_17;
  max_length = photoStandFigures->max_length;
  v6 = 0LL;
  v7 = 1;
  do
  {
    if ( v6 >= max_length )
      goto LABEL_16;
    v8 = v7;
    temporaryPhotoUserSvtId = v2->fields.temporaryPhotoUserSvtId;
    if ( !temporaryPhotoUserSvtId )
      goto LABEL_17;
    if ( v6 >= temporaryPhotoUserSvtId->max_length )
LABEL_16:
      sub_1C3B9C8(this, method);
    v10 = photoStandFigures->m_Items[v6];
    if ( !v10 )
      goto LABEL_17;
    v10->fields._UserSvtId_k__BackingField = temporaryPhotoUserSvtId->m_Items[v6];
    temporaryPhotoSvtLimitCount = v2->fields.temporaryPhotoSvtLimitCount;
    if ( !temporaryPhotoSvtLimitCount )
      goto LABEL_17;
    if ( v6 >= temporaryPhotoSvtLimitCount->max_length )
      goto LABEL_16;
    v10->fields._ImageLimitCount_k__BackingField = temporaryPhotoSvtLimitCount->m_Items[v6 + 1];
    temporaryStaffImageId = v2->fields.temporaryStaffImageId;
    if ( !temporaryStaffImageId )
      goto LABEL_17;
    if ( v6 >= temporaryStaffImageId->max_length )
      goto LABEL_16;
    v7 = 0;
    v10->fields._StandFigureImageId_k__BackingField = temporaryStaffImageId->m_Items[v6 + 1];
    v6 = 1LL;
  }
  while ( (v8 & 1) != 0 );
  temporaryPhotoTargetList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.temporaryPhotoTargetList;
  *(_QWORD *)&v2->fields.photoMasterEquipId = *(_QWORD *)&v2->fields.temporaryMasterEquipId;
  v2->fields.photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)System_Linq_Enumerable__ToList_Int32Enum_(temporaryPhotoTargetList, (const MethodInfo_302E8BC *)Method_System_Linq_Enumerable_ToList_PhotoUtility_TargetType___);
  this = (MyRoomControl_o *)sub_1C3B708(&v2->fields.photoTargetList);
  v15 = v2->fields.temporaryPhotoTargetList;
  if ( !v15 )
LABEL_17:
    sub_1C3B9C0(this, method);
  v16 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v16;
  MyRoomControl__DispPhotoCampaign(v2, 1, 1, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ConfirmTargetSelectState(
        MyRoomControl_o *this,
        bool isChangeTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  MyRoomControl___c__DisplayClass389_0_o *v12; // x20
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x0
  const MethodInfo *v14; // x1
  int32_t size; // w8
  bool v16; // w21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x5
  int32_t v19; // w1
  int32_t v20; // w3
  MyRoomControl_o *v21; // x0
  bool v22; // w2
  System_Action_o *v23; // x4
  int32_t Item; // w0
  bool v25; // w21
  int32_t v26; // w22
  System_Action_o *v27; // x23
  System_Action_o *v28; // x21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3

  if ( (byte_4C1D4F8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isChangeTarget);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v6);
    sub_1C3B764(&Method_MyRoomControl_CompletedTargetSetting__, v7);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__0__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__1__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__2__, v10);
    sub_1C3B764(&MyRoomControl___c__DisplayClass389_0_TypeInfo, v11);
    byte_4C1D4F8 = 1;
  }
  v12 = (MyRoomControl___c__DisplayClass389_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass389_0_TypeInfo);
  MyRoomControl___c__DisplayClass389_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.__4__this = this,
        v12->fields.isChangeTarget = isChangeTarget,
        sub_1C3B708(&v12->fields.__4__this),
        (temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)this->fields.temporaryPhotoTargetList) == 0LL) )
  {
    sub_1C3B9C0(temporaryPhotoTargetList, v14);
  }
  size = temporaryPhotoTargetList->fields._size;
  if ( size == 2 )
  {
    if ( v12->fields.isChangeTarget )
    {
      MyRoomControl__CompletedTargetSetting(this, v14);
    }
    else
    {
      v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_MyRoomControl_CompletedTargetSetting__, 0LL);
      v29 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__1__,
        0LL);
      MyRoomControl__OpenPhotoFrameSelectDialog(this, v28, v29, v30);
    }
  }
  else
  {
    if ( size )
    {
      Item = System_Collections_Generic_List_Int32Enum___get_Item(
               temporaryPhotoTargetList,
               0,
               (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      v25 = v12->fields.isChangeTarget;
      v26 = Item;
      v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__2__,
        0LL);
      v20 = 2;
      v21 = this;
      v19 = v26;
      v22 = v25;
      v23 = v27;
    }
    else
    {
      v16 = v12->fields.isChangeTarget;
      v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__0__,
        0LL);
      v19 = 3;
      v20 = 1;
      v21 = this;
      v22 = v16;
      v23 = v17;
    }
    MyRoomControl__OpenTargetSelectDialog(v21, v19, v22, v20, v23, v18);
  }
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

  if ( (byte_4C1D4DA & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1C3B764(&StringLiteral_4013/*"Cannot be nominated as the {substitution group affiliation} of any other declaration."*/, v5);
    byte_4C1D4DA = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_4013/*"Cannot be nominated as the {substitution group affiliation} of any other declaration."*/,
             (const MethodInfo_308660C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1C3B9C0(0LL, v8);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v7,
                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        int32_t targetIndex,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomControl___c__DisplayClass396_0_o *v9; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v11; // x1
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v17; // x23
  System_Action_o *v18; // x24

  if ( (byte_4C1D4FF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&targetIndex);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass396_0__CreatePhotoMasterFigure_b__0__, v7);
    sub_1C3B764(&MyRoomControl___c__DisplayClass396_0_TypeInfo, v8);
    byte_4C1D4FF = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass396_0_TypeInfo);
  MyRoomControl___c__DisplayClass396_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.__4__this = this;
  sub_1C3B708(&v9->fields);
  v9->fields.func = func;
  v9->fields.targetIndex = targetIndex;
  Parent = (UnityEngine_Component_o *)sub_1C3B708(&v9->fields.func);
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_9;
  if ( !photoStandFigures->max_length )
    sub_1C3B9C8(Parent, v11);
  Parent = (UnityEngine_Component_o *)photoStandFigures->m_Items[0];
  if ( !Parent
    || (gameObject = UnityEngine_Component__get_gameObject(Parent, 0LL),
        (Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C3B9C0(Parent, v11);
  }
  v14 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v17 = v14;
  v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass396_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  this->fields.photoMasterTexture = MasterFigureManagerOld__CreatePrefab_39342852(
                                      v17,
                                      2,
                                      photoMasterGenderType,
                                      photoMasterEquipId,
                                      1,
                                      v18,
                                      0,
                                      (System_Nullable_Vector3__o)0,
                                      0,
                                      0LL);
  sub_1C3B708(&this->fields.photoMasterTexture);
}


void __fastcall MyRoomControl__DestroyExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomListControl_o *myRoomListCtr; // x0

  myRoomListCtr = this->fields.myRoomListCtr;
  if ( !myRoomListCtr
    || (MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(myRoomListCtr, 0LL),
        (myRoomListCtr = (MyRoomListControl_o *)this->fields.exchangeSvtCoinComp) == 0LL) )
  {
    sub_1C3B9C0(myRoomListCtr, method);
  }
  ExchangeSvtCoinComponent__ExitMenu((ExchangeSvtCoinComponent_o *)myRoomListCtr, 0LL);
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
  MyRoomControl___c__DisplayClass370_0_o *v12; // x22
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

  if ( (byte_4C1D4E9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDispDefault);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__0__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__1__, v10);
    sub_1C3B764(&MyRoomControl___c__DisplayClass370_0_TypeInfo, v11);
    byte_4C1D4E9 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = (MyRoomControl___c__DisplayClass370_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass370_0_TypeInfo);
  MyRoomControl___c__DisplayClass370_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.callback = callback;
  sub_1C3B708(&v12->fields);
  v12->fields.__4__this = this;
  sub_1C3B708(&v12->fields.__4__this);
  MyRoomControl__stopSvtVoice(this, v15);
  MyRoomControl__BlockTouch(this, v16);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__0__,
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
    sub_1C3B9C0(frontObjectManager, v14);
  }
  v19 = this->fields.standFigureBack;
  v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass370_0__DispDefaultMyRoom_b__1__,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__DispPhotoCampaign(
        MyRoomControl_o *this,
        bool isTargetUpdate,
        bool isPositionChangeUpdate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *photoFrameSprite; // x8
  const MethodInfo *v11; // x2
  struct System_Int32_array *photoTargetFaceListIndex; // x11
  unsigned __int64 max_length; // x8
  unsigned __int64 v14; // x9
  int32_t *v15; // x11
  System_Collections_IEnumerator_o *PhotoTarget; // x1

  if ( (byte_4C1D4FC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Contains__, isTargetUpdate);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    byte_4C1D4FC = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MissionNotifyManager__StartPause(Instance, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.photoTargetList;
  if ( !Instance )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)Instance,
                                         3,
                                         (const MethodInfo_36717EC *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__Contains__);
  photoFrameSprite = (UnityEngine_Component_o *)this->fields.photoFrameSprite;
  this->fields.isOneShot = (unsigned __int8)Instance & 1;
  if ( !photoFrameSprite )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(photoFrameSprite, 0LL);
  if ( !Instance )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isOneShot, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.photoFrameWideSprite;
  if ( !Instance )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !this->fields.isOneShot, 0LL);
  if ( !isPositionChangeUpdate )
    goto LABEL_15;
  photoTargetFaceListIndex = this->fields.photoTargetFaceListIndex;
  this->fields.isChangePhotoPosition = 0;
  if ( !photoTargetFaceListIndex )
LABEL_17:
    sub_1C3B9C0(Instance, v9);
  max_length = photoTargetFaceListIndex->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v14 = 0LL;
    v15 = &photoTargetFaceListIndex->m_Items[1];
    do
    {
      if ( v14 >= max_length )
        sub_1C3B9C8(Instance, v9);
      v15[v14++] = -1;
    }
    while ( (__int64)v14 < (int)max_length );
  }
LABEL_15:
  PhotoTarget = MyRoomControl__LoadPhotoTarget(this, isTargetUpdate, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, PhotoTarget, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 svtCtr; // x0
  const MethodInfo *v10; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v12; // x20
  MyRoomSvtControl_o *v13; // x21
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  Il2CppObject *v18; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4C1D4A5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_MyRoomControl___c__EndLoad_b__226_0__, v6);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_8438/*"MENU_QUEST_START"*/, v8);
    byte_4C1D4A5 = 1;
  }
  svtCtr = (__int64)this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_21;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v10);
  if ( SvtVoiceEnt )
  {
    v12 = SvtVoiceEnt;
    svtCtr = (__int64)this->fields.imageIdList;
    if ( !svtCtr )
      goto LABEL_21;
    v13 = this->fields.svtCtr;
    svtCtr = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)svtCtr,
               this->fields.figureSvtDispIdx,
               (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v13 )
      goto LABEL_21;
    MyRoomSvtControl__initFirstPlayVoiceList(v13, v12, svtCtr, 0LL);
  }
  if ( this->fields.sceneJumpInfo )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  svtCtr = (__int64)MyRoomControl___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    svtCtr = (__int64)MyRoomControl___c_TypeInfo;
  }
  v17 = *(System_Action_o **)(*(_QWORD *)(svtCtr + 184) + 32LL);
  if ( !v17 )
  {
    if ( !*(_DWORD *)(svtCtr + 224) )
    {
      j_il2cpp_runtime_class_init_0(svtCtr);
      svtCtr = (__int64)MyRoomControl___c_TypeInfo;
    }
    v18 = **(Il2CppObject ***)(svtCtr + 184);
    v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_MyRoomControl___c__EndLoad_b__226_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__226_0 = v17;
    svtCtr = sub_1C3B708(&static_fields->__9__226_0);
  }
  if ( !Instance )
LABEL_21:
    sub_1C3B9C0(svtCtr, method);
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v17, 0LL);
LABEL_19:
  svtCtr = (__int64)this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8438/*"MENU_QUEST_START"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MyRoomControl___c_c *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x20
  System_Action_object__o *_9__386_0; // x21
  Il2CppObject *v13; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4C1D4F5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_PhotoStandFigureComponent__TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___, v5);
    sub_1C3B764(&Method_MyRoomControl__EndLoadPhotoAsset_b__386_1__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_MyRoomControl___c__EndLoadPhotoAsset_b__386_0__, v8);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v9);
    byte_4C1D4F5 = 1;
  }
  v10 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v10 = MyRoomControl___c_TypeInfo;
  }
  _9__386_0 = (System_Action_object__o *)v10->static_fields->__9__386_0;
  if ( !_9__386_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__386_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__386_0, v13, Method_MyRoomControl___c__EndLoadPhotoAsset_b__386_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__386_0 = (struct System_Action_PhotoStandFigureComponent__o *)_9__386_0;
    sub_1C3B708(&static_fields->__9__386_0);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__386_0,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__386_1__, 0LL);
  if ( !v17 )
    sub_1C3B9C0(v20, v21);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
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

  if ( (byte_4C1D4DE & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4C1D4DE = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1C3B708(&this->fields.sceneJumpInfo);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1C3B9C0(Instance, v5);
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
    sub_1C3B9C0(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4C1D515 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_MyRoomControl__ExchangePosition_b__421_0__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1D515 = 1;
  }
  this->fields.isChangePhotoPosition ^= 1u;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__ExchangePosition_b__421_0__, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__FadeInPhotoTarget(
        MyRoomControl_o *this,
        System_String_o *finishedFadeCallback,
        bool isFadeOut,
        const MethodInfo *method)
{
  MyRoomControl_o *v6; // x21
  unsigned __int64 i; // x22
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v9; // x24
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x5
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s10
  float v20; // s9
  float v21; // s8
  _BOOL4 v22; // w25
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x2
  float v26; // s0
  float v27; // s1
  float v28; // s2
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  System_String_o *v31; // x2
  __int64 v32; // [xsp+0h] [xbp-A0h] BYREF
  float scale[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Vector3_o position; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C1D4FE & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C3B764(
                                &Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__,
                                finishedFadeCallback);
    byte_4C1D4FE = 1;
  }
  position.fields.z = 0.0;
  *(_QWORD *)scale = 0LL;
  *(_QWORD *)&position.fields.x = 0LL;
  v32 = 0LL;
  for ( i = 0LL; i != 2; ++i )
  {
    photoStandFigures = v6->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_33;
    if ( i >= photoStandFigures->max_length )
      sub_1C3B9C8(this, finishedFadeCallback);
    this = (MyRoomControl_o *)v6->fields.photoTargetList;
    if ( !this )
LABEL_33:
      sub_1C3B9C0(this, finishedFadeCallback);
    v9 = photoStandFigures->m_Items[i];
    this = (MyRoomControl_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                (System_Collections_Generic_List_T__o *)this,
                                i,
                                (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    if ( (_DWORD)this == 2 )
    {
      if ( isFadeOut )
        goto LABEL_14;
      MyRoomControl__GetPhotoStaffPosition(v6, v9, i, (UnityEngine_Vector3_o *)&v32, v10);
      if ( !v9 )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( !byte_4C1C516 )
      {
        sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v29);
        byte_4C1C516 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      y = *((float *)&v32 + 1);
      z = scale[0];
      x = *(float *)&v32;
    }
    else if ( (_DWORD)this == 1 )
    {
      this = (MyRoomControl_o *)v6->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_33;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v23 = v24;
      if ( !isFadeOut )
      {
        PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v6, i, v25);
        x = PhotoCampaignMasterPosition.fields.x;
        y = PhotoCampaignMasterPosition.fields.y;
        z = PhotoCampaignMasterPosition.fields.z;
        goto LABEL_27;
      }
      *(UnityEngine_Vector3_o *)&v26 = GameObjectExtensions__GetLocalPosition(v24, 0LL);
      this = (MyRoomControl_o *)v6->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_33;
      z = v28 + 0.0;
      y = v27 + 0.0;
      x = v26 + flt_C0C388[v6->fields.isChangePhotoPosition == (i == 1)];
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    }
    else
    {
      if ( (_DWORD)this )
        continue;
      if ( isFadeOut )
      {
LABEL_14:
        if ( !v9 )
          goto LABEL_33;
        this = (MyRoomControl_o *)v9->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_33;
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition(v18, 0LL);
        v19 = LocalPosition.fields.x;
        v20 = LocalPosition.fields.y;
        v21 = LocalPosition.fields.z;
        v22 = v6->fields.isChangePhotoPosition == (i == 1);
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
        z = v21 + 0.0;
        y = v20 + 0.0;
        x = v19 + flt_C0C388[v22];
        goto LABEL_27;
      }
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(v6, v9, i, &position, &scale[1], v11);
      if ( !v9 )
        goto LABEL_33;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      GameObjectExtensions__SetLocalScale_34965512(v12, scale[1], 0LL);
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      y = position.fields.y;
      z = position.fields.z;
      x = position.fields.x;
    }
    v23 = v13;
LABEL_27:
    if ( i )
      v31 = 0LL;
    else
      v31 = finishedFadeCallback;
    v37.fields.x = x;
    v37.fields.y = y;
    v37.fields.z = z;
    MyRoomControl__moveControl(v6, v23, v37, v31, v14);
  }
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
  if ( (byte_4C1D4DC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_1C3B764(&SwipeGesture_TypeInfo, v5);
    byte_4C1D4DC = 1;
  }
  if ( !gesture )
    sub_1C3B9C0(this, gesture);
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
        if ( v4->fields.photoState == 3 )
        {
          v4->fields.photoState = 2;
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

  if ( (byte_4C1D50B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D50B = 1;
  }
  photoCampaignProduction = this->fields.photoCampaignProduction;
  this->fields.photoState = 2;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoFrameSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  photoCampaignProduction = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)photoCampaignProduction,
                              0LL);
  if ( !photoCampaignProduction )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, this->fields.isOneShot, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoFrameWideSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  photoCampaignProduction = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)photoCampaignProduction,
                              0LL);
  if ( !photoCampaignProduction )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, !this->fields.isOneShot, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignBackGroundSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignFadeSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.castClass)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.declaringType,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))photoCampaignProduction->klass[1].vtable._3_ToString.method)(
                                 photoCampaignProduction,
                                 photoCampaignProduction->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_15:
    sub_1C3B9C0(photoCampaignProduction, method);
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
      sub_1C3B9C8(multipleViewCloseButton, method);
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
    sub_1C3B9C0(multipleViewCloseButton, method);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedFadeInPhotoTarget(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PhotoSettingButtonComponent_o *photoSettingButtonComponent; // x0
  const MethodInfo *v6; // x2

  MyRoomControl__SetPhotoCampaignUi(this, 1, v2);
  photoSettingButtonComponent = this->fields.photoSettingButtonComponent;
  if ( !photoSettingButtonComponent )
    sub_1C3B9C0(0LL, v4);
  PhotoSettingButtonComponent__DispSettingButton(
    photoSettingButtonComponent,
    this->fields.photoTargetList,
    this->fields.photoStandFigures,
    this->fields.isChangePhotoPosition,
    this->fields.isOneShot,
    0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v6);
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
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0LL);
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v6);
}


void __fastcall MyRoomControl__FormChangeCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x0
  MyRoomSvtControl_o *v5; // x20
  PlayMakerFSM_o *myRoomFsm; // x8
  System_String_o **v7; // x9

  if ( (byte_4C1D4B1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_9455/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/, method);
    sub_1C3B764(&StringLiteral_3470/*"CLICK_USESPELL"*/, v3);
    byte_4C1D4B1 = 1;
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
      v7 = (System_String_o **)&StringLiteral_9455/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C3B9C0(svtCtr, method);
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
    v7 = (System_String_o **)&StringLiteral_9455/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  else
    v7 = (System_String_o **)&StringLiteral_3470/*"CLICK_USESPELL"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myRoomFsm, *v7, 0LL);
}


UnityEngine_Camera_o *__fastcall MyRoomControl__GetCamera2DUI(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mCamera2DUI;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomControl__GetImageLimitCount(
        MyRoomControl_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1D51B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v7);
    byte_4C1D51B = 1;
  }
  entity = 0LL;
  if ( imageLimitCount >= 201 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0LL);
    if ( !Master_object )
      goto LABEL_13;
    v9 = MyroomServantSpecialImageMaster__TryGetEntity(
           (MyroomServantSpecialImageMaster_o *)Master_object,
           &entity,
           svtId,
           v9,
           0LL);
    if ( (v9 & 1) != 0 )
    {
      if ( entity )
        return entity->fields.baseLimitCount;
LABEL_13:
      sub_1C3B9C0(v9, v10);
    }
  }
  return imageLimitCount;
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
  struct UISprite_o *takingPhotoFrameSprite; // x8
  float v11; // s8
  float v12; // s9
  struct ManagerConfig_StaticFields *static_fields; // x9
  int *p_WIDTH; // x9
  int *p_mHeight; // x8
  float v16; // s0

  v6 = this;
  if ( (byte_4C1D509 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C3B764(&ManagerConfig_TypeInfo, localScale);
    byte_4C1D509 = 1;
  }
  v9 = MyRoomControl__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  takingPhotoFrameSprite = v6->fields.takingPhotoFrameSprite;
  if ( !takingPhotoFrameSprite )
    goto LABEL_12;
  v11 = v9;
  v7 = ManagerConfig_TypeInfo;
  v12 = (float)takingPhotoFrameSprite->fields.mHeight / (float)takingPhotoFrameSprite->fields.mWidth;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
    takingPhotoFrameSprite = v6->fields.takingPhotoFrameSprite;
  }
  static_fields = v7->static_fields;
  if ( v11 >= v12 )
  {
    if ( takingPhotoFrameSprite )
    {
      p_WIDTH = &static_fields->WIDTH;
      p_mHeight = &takingPhotoFrameSprite->fields.mHeight;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C3B9C0(v7, v8);
  }
  if ( !takingPhotoFrameSprite )
    goto LABEL_12;
  p_WIDTH = &static_fields->HEIGHT;
  p_mHeight = &takingPhotoFrameSprite->fields.mWidth;
LABEL_11:
  v16 = (float)*p_WIDTH / (float)*p_mHeight;
  localScale->fields.z = 1.0;
  localScale->fields.x = v16;
  localScale->fields.y = v16;
  *(_QWORD *)&localEulerAngle->fields.x = 0LL;
  localEulerAngle->fields.z = 90.0;
}


int32_t __fastcall MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *materialImageIdList; // x0

  if ( (byte_4C1D4DB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4C1D4DB = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1C3B9C0(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MasterPhotoMaster_o *Master_object; // x0
  __int64 v7; // x1
  MyRoomControl_o *v8; // x8
  MyRoomControl_o *v9; // x9
  float offsetX; // s8
  int isChangePhotoPosition; // w9
  int v12; // w13
  bool v13; // zf
  int v14; // w9
  float y; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v18; // s0
  float v19; // s1
  MasterPhotoEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1D503 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MasterPhotoMaster___, *(_QWORD *)&targetIndex);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C1D503 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MasterPhotoMaster___);
  if ( this->fields.isOneShot )
    v8 = 0LL;
  else
    v8 = this;
  if ( this->fields.isOneShot )
    v9 = this;
  else
    v9 = 0LL;
  if ( this->fields.isOneShot )
  {
    if ( !v9 )
      goto LABEL_28;
    v9->fields.masterPosition = 0;
    offsetX = -300.0;
    if ( !Master_object )
      goto LABEL_28;
  }
  else
  {
    if ( !v8 )
      goto LABEL_28;
    isChangePhotoPosition = this->fields.isChangePhotoPosition;
    v12 = targetIndex == 1;
    v13 = isChangePhotoPosition == v12;
    v14 = isChangePhotoPosition == v12 ? 1 : 2;
    offsetX = v13 ? -600.0 : -150.0;
    v8->fields.masterPosition = v14;
    if ( !Master_object )
      goto LABEL_28;
  }
  y = this->fields.defaultPhotoServantPos.fields.y;
  Master_object = (MasterPhotoMaster_o *)MasterPhotoMaster__TryGetEntity(
                                           Master_object,
                                           &entity,
                                           this->fields.photoMasterEquipId,
                                           this->fields.photoMasterGenderType,
                                           this->fields.masterPosition,
                                           0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    offsetX = (float)entity->fields.offsetX;
    y = (float)entity->fields.offsetY;
  }
  Master_object = (MasterPhotoMaster_o *)this->fields.photoMasterTexture;
  if ( !Master_object )
LABEL_28:
    sub_1C3B9C0(Master_object, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
  v18 = offsetX;
  v19 = y;
  result.fields.z = LocalPositionZ;
  result.fields.y = v19;
  result.fields.x = v18;
  return result;
}


void __fastcall MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        MyRoomControl_o *this,
        PhotoStandFigureComponent_o *photoStandFigure,
        int32_t targetIndex,
        UnityEngine_Vector3_o *position,
        float *scale,
        const MethodInfo *method)
{
  MyRoomControl_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float myRoomData_low; // s8
  float v16; // s1
  float y; // s9
  int m_CancellationTokenSource; // w9
  MyRoomControl_o *v19; // x24
  int v20; // w10
  int v21; // w8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  __int64 FaceListIndex_k__BackingField; // x9
  ServantPhotoEntity_FaceData_o *v24; // x8
  struct System_Int32_array *multiForm; // x8
  MyRoomControl_o *v26; // x22
  float PhotoSvtScaleLeft; // s0
  _BOOL4 v28; // w23
  System_Int32_array *v29; // x0
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  UnityEngine_GameObject_o *v31; // x0
  float LocalPositionZ; // s0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_4C1D501 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantScriptMaster___, photoStandFigure);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    this = (MyRoomControl_o *)sub_1C3B764(&int___TypeInfo, v12);
    byte_4C1D501 = 1;
  }
  entity = 0LL;
  if ( !photoStandFigure )
    goto LABEL_48;
  this = (MyRoomControl_o *)photoStandFigure->fields.photoStandFigureBack;
  if ( !this )
    goto LABEL_48;
  this = (MyRoomControl_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  if ( !this )
    goto LABEL_48;
  this = (MyRoomControl_o *)this->fields.myRoomData;
  if ( !this )
    goto LABEL_48;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( v10->fields.isOneShot )
  {
    myRoomData_low = -LocalPositionX;
  }
  else
  {
    v16 = 256.0;
    if ( v10->fields.isChangePhotoPosition == (targetIndex == 1) )
      v16 = -256.0;
    myRoomData_low = v16 - LocalPositionX;
  }
  y = v10->fields.defaultPhotoServantPos.fields.y;
  this = (MyRoomControl_o *)sub_1C3B80C(int___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_48;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( !m_CancellationTokenSource )
    goto LABEL_49;
  v20 = (int)myRoomData_low;
  if ( myRoomData_low == INFINITY )
    v20 = 0x80000000;
  LODWORD(this->fields.myRoomData) = v20;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_49;
  if ( y == INFINITY )
    v21 = 0x80000000;
  else
    v21 = (int)y;
  HIDWORD(this->fields.myRoomData) = v21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantScriptMaster___);
  *scale = 1.0;
  FaceList_k__BackingField = photoStandFigure->fields._FaceList_k__BackingField;
  if ( !FaceList_k__BackingField )
    goto LABEL_48;
  FaceListIndex_k__BackingField = photoStandFigure->fields._FaceListIndex_k__BackingField;
  if ( (unsigned int)FaceListIndex_k__BackingField >= FaceList_k__BackingField->max_length )
    goto LABEL_49;
  v24 = FaceList_k__BackingField->m_Items[FaceListIndex_k__BackingField];
  if ( !v24 )
    goto LABEL_48;
  multiForm = v24->fields.multiForm;
  if ( !multiForm )
    goto LABEL_48;
  if ( !multiForm->max_length )
    goto LABEL_49;
  if ( !this )
    goto LABEL_48;
  this = (MyRoomControl_o *)ServantScriptMaster__TryGetEntity(
                              (ServantScriptMaster_o *)this,
                              &entity,
                              photoStandFigure->fields._StandFigureImageId_k__BackingField,
                              multiForm->m_Items[1],
                              0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_44;
  if ( !v10->fields.isOneShot )
  {
    this = (MyRoomControl_o *)entity;
    v28 = targetIndex == 1;
    if ( entity )
    {
      v29 = v10->fields.isChangePhotoPosition == v28
          ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, (System_Int32_array *)v19, 0LL)
          : ServantScriptEntity__GetPhotoSvtPositionRight(entity, (System_Int32_array *)v19, 0LL);
      v26 = (MyRoomControl_o *)v29;
      this = (MyRoomControl_o *)entity;
      if ( entity )
      {
        if ( v10->fields.isChangePhotoPosition == v28 )
          PhotoSvtScaleLeft = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0LL);
        else
          PhotoSvtScaleLeft = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0LL);
        goto LABEL_41;
      }
    }
LABEL_48:
    sub_1C3B9C0(this, photoStandFigure);
  }
  this = (MyRoomControl_o *)entity;
  if ( !entity )
    goto LABEL_48;
  this = (MyRoomControl_o *)ServantScriptEntity__GetPhotoSvtPosition(entity, (System_Int32_array *)v19, 0LL);
  if ( !entity )
    goto LABEL_48;
  v26 = this;
  PhotoSvtScaleLeft = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0LL);
LABEL_41:
  *scale = PhotoSvtScaleLeft;
  if ( !v26 )
    goto LABEL_48;
  if ( LODWORD(v26->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_49;
  myRoomData_low = (float)SLODWORD(v26->fields.myRoomData);
  y = (float)SHIDWORD(v26->fields.myRoomData);
LABEL_44:
  photoStandFigures = v10->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_48;
  if ( !photoStandFigures->max_length )
LABEL_49:
    sub_1C3B9C8(this, photoStandFigure);
  this = (MyRoomControl_o *)photoStandFigures->m_Items[0];
  if ( !this )
    goto LABEL_48;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v31, 0LL);
  position->fields.x = myRoomData_low;
  position->fields.y = y;
  position->fields.z = LocalPositionZ;
}


void __fastcall MyRoomControl__GetPhotoStaffPosition(
        MyRoomControl_o *this,
        PhotoStandFigureComponent_o *photoStandFigure,
        int32_t targetIndex,
        UnityEngine_Vector3_o *position,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  StaffPhotoCostumeMaster_o *Master_object; // x0
  __int64 v12; // x1
  StaffPhotoCostumeMaster_o *v13; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float revision; // s8
  float v17; // s1
  float y; // s9
  int MasterName_k__BackingField; // w9
  System_Int32_array *v20; // x24
  int v21; // w10
  unsigned int v22; // w8
  UnityEngine_GameObject_o *v23; // x0
  float LocalPositionZ; // s0
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C1D502 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, photoStandFigure);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&int___TypeInfo, v10);
    byte_4C1D502 = 1;
  }
  costumeEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !photoStandFigure )
    goto LABEL_35;
  v13 = Master_object;
  Master_object = (StaffPhotoCostumeMaster_o *)photoStandFigure->fields.photoStandFigureBack;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (StaffPhotoCostumeMaster_o *)StandFigureBack__GetSvtStandFigure(
                                                 (StandFigureBack_o *)Master_object,
                                                 0,
                                                 0LL);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = *(StaffPhotoCostumeMaster_o **)&Master_object->fields.revision;
  if ( !Master_object )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( this->fields.isOneShot )
  {
    revision = -LocalPositionX;
  }
  else
  {
    v17 = 256.0;
    if ( this->fields.isChangePhotoPosition == (targetIndex == 1) )
      v17 = -256.0;
    revision = v17 - LocalPositionX;
  }
  y = this->fields.defaultPhotoServantPos.fields.y;
  Master_object = (StaffPhotoCostumeMaster_o *)sub_1C3B80C(int___TypeInfo, 2LL);
  if ( !Master_object )
    goto LABEL_35;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  v20 = (System_Int32_array *)Master_object;
  if ( !MasterName_k__BackingField )
    goto LABEL_36;
  v21 = (int)revision;
  if ( revision == INFINITY )
    v21 = 0x80000000;
  Master_object->fields.revision = v21;
  if ( MasterName_k__BackingField == 1 )
    goto LABEL_36;
  v22 = y == INFINITY ? 0x80000000 : (int)y;
  *(&Master_object->fields.revision + 1) = v22;
  if ( !v13 )
    goto LABEL_35;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(
         v13,
         &costumeEntity,
         photoStandFigure->fields._StandFigureImageId_k__BackingField,
         0LL) )
  {
    Master_object = (StaffPhotoCostumeMaster_o *)costumeEntity;
    if ( this->fields.isOneShot )
    {
      if ( !costumeEntity )
        goto LABEL_35;
      Master_object = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeEntity__GetPhotoPositionCenter(
                                                     costumeEntity,
                                                     v20,
                                                     0LL);
    }
    else
    {
      if ( !costumeEntity )
        goto LABEL_35;
      if ( this->fields.isChangePhotoPosition == (targetIndex == 1) )
        Master_object = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeEntity__GetPhotoPositionLeft(
                                                       costumeEntity,
                                                       v20,
                                                       0LL);
      else
        Master_object = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeEntity__GetPhotoPositionRight(
                                                       costumeEntity,
                                                       v20,
                                                       0LL);
    }
    if ( Master_object )
    {
      if ( LODWORD(Master_object->fields._MasterName_k__BackingField) >= 2 )
      {
        revision = (float)Master_object->fields.revision;
        y = (float)*(&Master_object->fields.revision + 1);
        goto LABEL_34;
      }
LABEL_36:
      sub_1C3B9C8(Master_object, v12);
    }
LABEL_35:
    sub_1C3B9C0(Master_object, v12);
  }
LABEL_34:
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoStandFigure, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v23, 0LL);
  position->fields.x = revision;
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

  if ( (byte_4C1D4DF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C1D4DF = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
        sub_1C3B9C8(Instance, id);
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
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
    sub_1C3B9C0(Instance, id);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C1D49E & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C3B764(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_4C1D49E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(this, method);
  return mFSM->fields.m_state;
}


MyRoomStateMaterial_o *__fastcall MyRoomControl__GetStateMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mStateMaterial;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall MyRoomControl__GetVoiceList(
        MyRoomControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1

  v6 = MyRoomControl__GetImageLimitCount(this, svtId, imageLimitCount, *(const MethodInfo **)&imageLimitCount);
  if ( !svtVoiceEnt )
    sub_1C3B9C0(v6, v7);
  return ServantVoiceEntity__getMyRoomVoiceList(svtVoiceEnt, v6, 0LL);
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

  if ( (byte_4C1D4CB & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_MyRoomControl_GoToTitle__, v5);
    sub_1C3B764(&Method_MyRoomControl__GoToTitle_b__317_0__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_9002/*"MyRoomHelpListPanel/BaseWindow/UpperCloseButton"*/, v8);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C1D4CB = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v10 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_GoToTitle__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C3B748(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9002/*"MyRoomHelpListPanel/BaseWindow/UpperCloseButton"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__317_0__, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1C3B9C0(v17, v16);
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
    sub_1C3B9C0(continueDeviceComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceComp, 0, 0LL);
}


void __fastcall MyRoomControl__HideExchangeSvtCoinMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C3B9C0(0LL, method);
  ExchangeSvtCoinComponent__HideMenu(exchangeSvtCoinComp, 0LL);
}


void __fastcall MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *photoCampaignDispUiMask; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v8; // x21
  Il2CppObject *v9; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C1D516 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v3);
    sub_1C3B764(&Method_MyRoomControl___c__HidePhotoUi_b__422_0__, v4);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v5);
    byte_4C1D516 = 1;
  }
  this->fields.photoState = 3;
  photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  }
  v8 = *(System_Action_object__o **)(*((_QWORD *)photoCampaignDispUiMask + 23) + 88LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)photoCampaignDispUiMask + 56) )
    {
      j_il2cpp_runtime_class_init_0(photoCampaignDispUiMask);
      photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)photoCampaignDispUiMask + 23);
    v8 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_MyRoomControl___c__HidePhotoUi_b__422_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__422_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v8;
    photoCampaignDispUiMask = (void *)sub_1C3B708(&static_fields->__9__422_0);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v8,
          (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (photoCampaignDispUiMask = this->fields.photoCampaignDispUiMask) == 0LL) )
  {
    sub_1C3B9C0(photoCampaignDispUiMask, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignDispUiMask, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v11);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitMaterialOnBackground_d__272_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C1D4BE & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__InitMaterialOnBackground_d__272_TypeInfo, method);
    byte_4C1D4BE = 1;
  }
  v3 = (MyRoomControl__InitMaterialOnBackground_d__272_o *)sub_1C3B9B0(MyRoomControl__InitMaterialOnBackground_d__272_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__272___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  v3->fields.__4__this = this;
  sub_1C3B708(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitServantMenu_d__275_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C1D4C0 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__InitServantMenu_d__275_TypeInfo, method);
    byte_4C1D4C0 = 1;
  }
  v3 = (MyRoomControl__InitServantMenu_d__275_o *)sub_1C3B9B0(MyRoomControl__InitServantMenu_d__275_TypeInfo);
  MyRoomControl__InitServantMenu_d__275___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  v3->fields.__4__this = this;
  sub_1C3B708(&v3->fields.__4__this);
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

  if ( (byte_4C1D4EC & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, method);
    byte_4C1D4EC = 1;
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

  if ( (byte_4C1D50D & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, method);
    byte_4C1D50D = 1;
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
  if ( (byte_4C1D4E5 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_4C1D4E5 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1C3B9C8(this, *(_QWORD *)&index);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1C3B9C0(this, *(_QWORD *)&index);
  }
  return SLODWORD(this->fields.changeLimitBtnInitPos.fields.y) > 15;
}


bool __fastcall MyRoomControl__IsRightPosPhotoTarget(
        MyRoomControl_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  return this->fields.isChangePhotoPosition != (targetIndex == 1);
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

  if ( (byte_4C1D4AD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15875/*"_FarMinLength"*/, method);
    sub_1C3B764(&StringLiteral_7381/*"Incomplete DTD content."*/, v3);
    byte_4C1D4AD = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15875/*"_FarMinLength"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7381/*"Incomplete DTD content."*/, 0LL) )
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
    sub_1C3B9C0(myRoomFsm, method);
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

  if ( (byte_4C1D4C3 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageParams_TypeInfo, result);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    byte_4C1D4C3 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
  __int64 v15; // x1
  Il2CppObject *Master_object; // x20
  __int64 MasterData_object; // x0
  UserEquipEntity_array *List; // x20
  long double v19; // q0
  __int64 v20; // x8
  __int64 v21; // x0
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v23; // x29
  __int64 *v24; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x19
  unsigned int v26; // w27
  UserEquipEntity_o *v27; // x28
  __int64 v28; // x22
  __int64 v29; // x24
  __int64 v30; // x25
  __int64 v31; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v33; // x0
  UserEquipEntity_array *v34; // x29
  const MethodInfo_32F4B9C **v35; // x20
  __int64 v36; // x25
  __int64 v37; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v43; // x0
  Il2CppObject *v44; // x0
  System_String_o *v45; // x24
  AssetLoader_LoadEndDataHandler_o *v46; // x25
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v50; // x0
  Il2CppObject *v51; // x0
  System_String_o *v52; // x23
  AssetLoader_LoadEndDataHandler_o *v53; // x24
  __int128 v55; // [xsp+10h] [xbp-80h] BYREF
  __int128 v56; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4C1D4F2 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipMaster___, v2);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEquipMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v6);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__0__, v11);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__1__, v12);
    sub_1C3B764(&MyRoomControl___c__DisplayClass382_0_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_9086/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v14);
    byte_4C1D4F2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  MasterData_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    MasterData_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_37;
  List = UserEquipMaster__getList(
           (UserEquipMaster_o *)Master_object,
           *(_QWORD *)(*(_QWORD *)(MasterData_object + 184) + 64LL),
           0LL);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C8D640(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C8D640(v19);
  MasterData_object = **(_QWORD **)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_37;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_37;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v23 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v24 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1C3B9C8(MasterData_object, v15);
      v27 = List->m_Items[v26];
      v28 = sub_1C3B9B0(MyRoomControl___c__DisplayClass382_0_TypeInfo);
      MyRoomControl___c__DisplayClass382_0___ctor((MyRoomControl___c__DisplayClass382_0_o *)v28, 0LL);
      if ( !v28 )
        break;
      *(_QWORD *)(v28 + 24) = this;
      MasterData_object = sub_1C3B708(v28 + 24);
      if ( !v27 )
        break;
      v30 = *(_QWORD *)&v27->fields.equipId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v27->fields.equipId.fields.fakeValue;
      if ( !(*v23)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v23);
      *(_QWORD *)&v57.fields.currentCryptoKey = v30;
      *(_QWORD *)&v57.fields.fakeValue = v29;
      MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v57, 0LL);
      if ( !v25 )
        break;
      v31 = v28 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v25,
              (Il2CppObject **)(v28 + 16),
              MasterData_object,
              (const MethodInfo_329AE94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v32 = v23;
      v33 = *v23;
      v34 = List;
      v35 = (const MethodInfo_32F4B9C **)v24;
      v37 = *(_QWORD *)&v27->fields.equipId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v27->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v33->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v33);
      *(_QWORD *)&v58.fields.currentCryptoKey = v37;
      *(_QWORD *)&v58.fields.fakeValue = v36;
      MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v58, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v24 = (__int64 *)v35;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        MasterData_object,
        0LL,
        *v35);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v27->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        MasterData_object,
        0LL,
        *v35);
      if ( !*(_QWORD *)v31 )
        break;
      v43 = *v32;
      List = v34;
      v23 = v32;
      v56 = *(_OWORD *)(*(_QWORD *)v31 + 64LL);
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(v43, &v56, v40, v41, v42);
      v45 = System_String__Format((System_String_o *)StringLiteral_9086/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v44, 0LL);
      v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v46,
        (Il2CppObject *)v28,
        Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      MasterData_object = AssetManager__loadAssetStorage(v45, v46, 10, 0LL);
      if ( !*(_QWORD *)v31 )
        break;
      v50 = *v32;
      v55 = *(_OWORD *)(*(_QWORD *)v31 + 80LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(v50, &v55, v47, v48, v49);
      v52 = System_String__Format((System_String_o *)StringLiteral_9086/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v51, 0LL);
      v53 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v53,
        (Il2CppObject *)v28,
        Method_MyRoomControl___c__DisplayClass382_0__LoadMasterEquip_b__1__,
        0LL);
      MasterData_object = AssetManager__loadAssetStorage(v52, v53, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
LABEL_37:
    sub_1C3B9C0(MasterData_object, v15);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadMultipleServant_d__366_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C1D4E7 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__LoadMultipleServant_d__366_TypeInfo, method);
    byte_4C1D4E7 = 1;
  }
  v3 = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B9B0(MyRoomControl__LoadMultipleServant_d__366_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__366___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  v3->fields.__4__this = this;
  sub_1C3B708(&v3->fields.__4__this);
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
  MyRoomControl___c__DisplayClass381_0_o *v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4C1D4F1 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, callBack);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass381_0__LoadPhotoCampaignAssets_b__0__, v7);
    sub_1C3B764(&MyRoomControl___c__DisplayClass381_0_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_9385/*"OBJECT DESCRIPTOR"*/, v9);
    byte_4C1D4F1 = 1;
  }
  v10 = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass381_0_TypeInfo);
  MyRoomControl___c__DisplayClass381_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  v10->fields.__4__this = this;
  sub_1C3B708(&v10->fields);
  v10->fields.callBack = callBack;
  sub_1C3B708(&v10->fields.callBack);
  if ( this->fields.photoCampaignAssetData )
  {
    ActionExtensions__Call(v10->fields.callBack, 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass381_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9385/*"OBJECT DESCRIPTOR"*/, v13, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1C3B9C0(Instance, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoTarget(
        MyRoomControl_o *this,
        bool isUpdate,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoTarget_d__394_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1D4FD & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__LoadPhotoTarget_d__394_TypeInfo, isUpdate);
    byte_4C1D4FD = 1;
  }
  v5 = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B9B0(MyRoomControl__LoadPhotoTarget_d__394_TypeInfo);
  MyRoomControl__LoadPhotoTarget_d__394___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1C3B9C0(v6, v7);
  v5->fields.__4__this = this;
  sub_1C3B708(&v5->fields.__4__this);
  v5->fields.isUpdate = isUpdate;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C1D499 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, method);
    byte_4C1D499 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1D4B5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__LoadServantForm_b__253_0__, v3);
    byte_4C1D4B5 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__253_0__, 0LL);
  if ( !svtCtr )
    sub_1C3B9C0(v6, v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v5, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v5; // x1
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1D4B6 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, method);
    sub_1C3B764(&StringLiteral_8438/*"MENU_QUEST_START"*/, v3);
    byte_4C1D4B6 = 1;
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
    sub_1C3B9C0(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8438/*"MENU_QUEST_START"*/, 0LL);
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
  if ( (byte_4C1D4D3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_9393/*"OK_CONTINUE_ITEM"*/, target);
    byte_4C1D4D3 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9393/*"OK_CONTINUE_ITEM"*/, v4);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  const MethodInfo *v30; // x1
  int32_t multipleViewState; // w8
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x1
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  const MethodInfo *v37; // x2
  int photoState; // w8
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x21
  System_Action_o *v40; // x0
  __int64 *v41; // x8
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  const MethodInfo *v44; // x1
  int32_t type; // w8
  int32_t mState; // w8
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *temporaryPhotoTargetList; // x8
  int32_t size; // w8
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v49; // x8
  int32_t v50; // w8
  System_Action_o *v51; // x20
  int v52; // w9
  char v53; // w8
  __int64 *v54; // x8
  bool v55; // w1
  MyRoomControl_o *v56; // x0
  __int64 *v57; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  bool IsOpenFolder; // w0
  System_String_o *ActiveStateName; // x0
  struct NoticeInfoComponent_o *noticeComp; // x8
  struct MaterialCollectionComponent_o *materialCollectionComp; // x20
  MyRoomControl_c *v64; // x0
  struct NoticeInfoComponent_o *v65; // [xsp+8h] [xbp-28h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C1D4D0 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v3);
    sub_1C3B764(&Method_MyRoomControl_OnClickBack__, v4);
    sub_1C3B764(&Method_MyRoomControl__OnClickBack_b__324_0__, v5);
    sub_1C3B764(&Method_MyRoomControl__OnClickBack_b__324_1__, v6);
    sub_1C3B764(&Method_MyRoomControl__OnClickBack_b__324_2__, v7);
    sub_1C3B764(&MyRoomControl_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_3621/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, v11);
    sub_1C3B764(&StringLiteral_3629/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, v12);
    sub_1C3B764(&StringLiteral_3635/*"COMMAND_CODE_UNIT"*/, v13);
    sub_1C3B764(&StringLiteral_3634/*"COMMAND_CODE_TAKE"*/, v14);
    sub_1C3B764(&StringLiteral_3646/*"COMMAND_SPELL_TXT"*/, v15);
    sub_1C3B764(&StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, v16);
    sub_1C3B764(&StringLiteral_3638/*"COMMAND_CODE_UNLOCK_TITLE"*/, v17);
    sub_1C3B764(&StringLiteral_3632/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v18);
    sub_1C3B764(&StringLiteral_3633/*"COMMAND_CODE_REMOVE_TITLE"*/, v19);
    sub_1C3B764(&StringLiteral_3636/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, v20);
    sub_1C3B764(&StringLiteral_3627/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, v21);
    sub_1C3B764(&StringLiteral_3622/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, v22);
    sub_1C3B764(&StringLiteral_13265/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v23);
    sub_1C3B764(&StringLiteral_3641/*"COMMAND_SPELL_BATTLE_SAVEKEY"*/, v24);
    sub_1C3B764(&StringLiteral_3624/*"COMMAND_CODE_LOCK_TITLE"*/, v25);
    sub_1C3B764(&StringLiteral_3630/*"COMMAND_CODE_REMOVE_MSG"*/, v26);
    sub_1C3B764(&StringLiteral_3642/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, v27);
    this = (MyRoomControl_o *)sub_1C3B764(&StringLiteral_3631/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v28);
    byte_4C1D4D0 = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_93;
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
          v42 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v42 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickBack__);
          v43 = (System_Reflection_MethodBase_o *)sub_1C3B748(v42, v42[4]);
          OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v44);
        }
        else if ( multipleViewState == 1 )
        {
          v32 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v32 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickBack__);
          v33 = (System_Reflection_MethodBase_o *)sub_1C3B748(v32, v32[4]);
          OverwriteAssetSoundName__PlaySystemSe(v33, 1, 0, 0LL);
          v2->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v2, v34);
        }
        return;
      }
      if ( v2->fields.photoState )
      {
        v35 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickBack__);
        v36 = (System_Reflection_MethodBase_o *)sub_1C3B748(v35, v35[4]);
        OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0, 0LL);
        photoState = v2->fields.photoState;
        if ( photoState > 2 )
        {
          if ( photoState != 7 )
          {
            if ( photoState != 8 )
              return;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            v41 = &Method_MyRoomControl__OnClickBack_b__324_2__;
LABEL_43:
            v51 = v40;
            System_Action___ctor(v40, (Il2CppObject *)v2, *v41, 0LL);
            if ( photoServantSelectMenu )
            {
              PhotoServantSelectMenu__Close(photoServantSelectMenu, v51, 0LL);
              return;
            }
            goto LABEL_93;
          }
          temporaryPhotoTargetList = v2->fields.temporaryPhotoTargetList;
          if ( !temporaryPhotoTargetList )
            goto LABEL_93;
          size = temporaryPhotoTargetList->fields._size;
          if ( size != 1 )
          {
            if ( size )
              return;
            v2->fields.photoState = 2;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            v41 = &Method_MyRoomControl__OnClickBack_b__324_1__;
            goto LABEL_43;
          }
          v55 = 1;
          v56 = v2;
LABEL_52:
          MyRoomControl__ConfirmTargetSelectState(v56, v55, v37);
          return;
        }
        if ( photoState != 1 )
        {
          if ( photoState == 2 )
            MyRoomControl__TransitionMyRoomTop(v2, method);
          return;
        }
        v49 = v2->fields.temporaryPhotoTargetList;
        if ( v49 )
        {
          v50 = v49->fields._size;
          if ( v50 != 1 )
          {
            if ( v50 )
              return;
            v2->fields.photoState = 0;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            v41 = &Method_MyRoomControl__OnClickBack_b__324_0__;
            goto LABEL_43;
          }
          v56 = v2;
          v55 = 0;
          goto LABEL_52;
        }
      }
      else
      {
        this = (MyRoomControl_o *)MyRoomControl__GetState(v2, v30);
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
            goto LABEL_93;
          this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return;
          type = v2->fields.type;
        }
        method = (const MethodInfo *)StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/;
        v52 = type - 1;
        v53 = 0;
        switch ( v52 )
        {
          case 0:
            v54 = &StringLiteral_3634/*"COMMAND_CODE_TAKE"*/;
            goto LABEL_62;
          case 1:
            v57 = &StringLiteral_3635/*"COMMAND_CODE_UNIT"*/;
            goto LABEL_75;
          case 2:
            v57 = &StringLiteral_3633/*"COMMAND_CODE_REMOVE_TITLE"*/;
            goto LABEL_75;
          case 3:
            v57 = &StringLiteral_3624/*"COMMAND_CODE_LOCK_TITLE"*/;
            goto LABEL_75;
          case 4:
            optionComp = v2->fields.optionComp;
            if ( !optionComp )
              break;
            optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
            if ( optionSceneType_k__BackingField )
            {
              v53 = 0;
              if ( optionSceneType_k__BackingField == 1 )
                method = (const MethodInfo *)StringLiteral_3622/*"COMMAND_CODE_LOCK_RETURN_MSG"*/;
            }
            else
            {
              v57 = &StringLiteral_3632/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/;
LABEL_75:
              method = (const MethodInfo *)*v57;
              v53 = 0;
            }
LABEL_76:
            if ( ((unsigned __int8)v53 & (v2->fields.mState != 0)) != 0 )
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
              if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13265/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL) )
                return;
              this = (MyRoomControl_o *)v2->fields.myRoomData;
              if ( this )
              {
                this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0LL);
                if ( this )
                {
                  noticeComp = this->fields.noticeComp;
                  materialCollectionComp = this->fields.materialCollectionComp;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    v65 = this->fields.noticeComp;
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    noticeComp = v65;
                  }
                  *(_QWORD *)&v66.fields.currentCryptoKey = noticeComp;
                  *(_QWORD *)&v66.fields.fakeValue = materialCollectionComp;
                  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v66, 0LL) < 1
                    || v2->fields.isHeroine && v2->fields.isHeroineReave )
                  {
                    return;
                  }
                  this = (MyRoomControl_o *)v2->fields.changeBtnImg;
                  if ( this )
                  {
                    v67.fields.r = 1.0;
                    v67.fields.g = 1.0;
                    v67.fields.b = 1.0;
                    v67.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)this, v67, 0LL);
                    v64 = MyRoomControl_TypeInfo;
                    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                      v64 = MyRoomControl_TypeInfo;
                    }
                    v2->fields.buttonFlag |= v64->static_fields->BUTTON_LIMIT_CHANGE;
                    return;
                  }
                }
              }
            }
            break;
          case 5:
            v54 = &StringLiteral_3638/*"COMMAND_CODE_UNLOCK_TITLE"*/;
LABEL_62:
            method = (const MethodInfo *)*v54;
            v53 = 1;
            goto LABEL_76;
          case 6:
            v57 = &StringLiteral_3641/*"COMMAND_SPELL_BATTLE_SAVEKEY"*/;
            goto LABEL_75;
          case 7:
            v57 = &StringLiteral_3627/*"COMMAND_CODE_REATTACH_SELF_MSG"*/;
            goto LABEL_75;
          case 8:
            v57 = &StringLiteral_3631/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/;
            goto LABEL_75;
          case 9:
            v57 = &StringLiteral_3642/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/;
            goto LABEL_75;
          case 10:
            v57 = &StringLiteral_3636/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/;
            goto LABEL_75;
          case 16:
            v57 = &StringLiteral_3646/*"COMMAND_SPELL_TXT"*/;
            goto LABEL_75;
          case 17:
            v57 = &StringLiteral_3621/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/;
            goto LABEL_75;
          case 18:
            this = (MyRoomControl_o *)v2->fields.exchangeSvtCoinComp;
            if ( !this )
              break;
            IsOpenFolder = ExchangeSvtCoinComponent__IsOpenFolder((ExchangeSvtCoinComponent_o *)this, 0LL);
            v57 = (__int64 *)&StringLiteral_3630/*"COMMAND_CODE_REMOVE_MSG"*/;
            if ( !IsOpenFolder )
              v57 = (__int64 *)&StringLiteral_3629/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/;
            goto LABEL_75;
          default:
            goto LABEL_76;
        }
      }
LABEL_93:
      sub_1C3B9C0(this, method);
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

  if ( (byte_4C1D4AC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1C3B764(&Method_MyRoomControl_OnClickChangeLimit__, v7);
    sub_1C3B764(&MyRoomControl_TypeInfo, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&StringLiteral_15875/*"_FarMinLength"*/, v11);
    sub_1C3B764(&StringLiteral_3474/*"CLOSE_BLACKLIST"*/, v12);
    sub_1C3B764(&StringLiteral_7381/*"Incomplete DTD content."*/, v13);
    byte_4C1D4AC = 1;
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
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15875/*"_FarMinLength"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v17 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_7381/*"Incomplete DTD content."*/, 0LL) )
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v35, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v28 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickChangeLimit__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C3B748(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v34, 0LL);
  if ( !v20 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)myRoomFsm,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v32 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickChangeLimit__);
      v33 = (System_Reflection_MethodBase_o *)sub_1C3B748(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3474/*"CLOSE_BLACKLIST"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1C3B9C0(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1D4E2 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickCloseMultipleView__, method);
    byte_4C1D4E2 = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
}


void __fastcall MyRoomControl__OnClickDispPhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  void *photoCampaignDispUiMask; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v12; // x21
  Il2CppObject *v13; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4C1D517 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v3);
    sub_1C3B764(&Method_MyRoomControl_OnClickDispPhotoUi__, v4);
    sub_1C3B764(&Method_MyRoomControl___c__OnClickDispPhotoUi_b__423_0__, v5);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v6);
    byte_4C1D517 = 1;
  }
  v7 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickDispPhotoUi__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  this->fields.photoState = 2;
  photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  }
  v12 = *(System_Action_object__o **)(*((_QWORD *)photoCampaignDispUiMask + 23) + 96LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)photoCampaignDispUiMask + 56) )
    {
      j_il2cpp_runtime_class_init_0(photoCampaignDispUiMask);
      photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)photoCampaignDispUiMask + 23);
    v12 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v12, v13, Method_MyRoomControl___c__OnClickDispPhotoUi_b__423_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__423_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v12;
    photoCampaignDispUiMask = (void *)sub_1C3B708(&static_fields->__9__423_0);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v12,
          (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (photoCampaignDispUiMask = this->fields.photoCampaignDispUiMask) == 0LL) )
  {
    sub_1C3B9C0(photoCampaignDispUiMask, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignDispUiMask, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v15);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4C1D4F0 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_4C1D4F0 = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C3B9C0(materialCollectionServantListViewManager, v5);
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

  if ( (byte_4C1D4E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickLeftServant__, method);
    byte_4C1D4E3 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
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
  int32_t photoState; // w8
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

  if ( (byte_4C1D508 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_1C3B764(&StringLiteral_6868/*"GameObject must be a root "*/, v3);
    byte_4C1D508 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v51.fields.z = 0.0;
  *(_QWORD *)&v51.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_37;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoState = this->fields.photoState;
  switch ( photoState )
  {
    case 6:
      v31 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v32 = (System_Reflection_MethodBase_o *)sub_1C3B748(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 1, 0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v33 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v34 = (System_Reflection_MethodBase_o *)sub_1C3B748(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
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
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v58.fields.x = 1.0;
      v58.fields.y = 1.0;
      v58.fields.z = 1.0;
      TweenScale__Begin(v40, 0.2, v58, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
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
      sub_1C3B708(&v50->fields.eventReceiver);
      v50->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6868/*"GameObject must be a root "*/;
      sub_1C3B708(&v50->fields.callWhenFinished);
      return;
    case 4:
      v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      this->fields.photoState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v51, v8);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
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
        maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
        if ( maskBoxCollider )
        {
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
          x = localScale.fields.x;
          v19 = localScale.fields.y;
          v20 = localScale.fields.z;
          TweenScale__Begin(v17, 0.2, localScale, 0LL);
          maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
          if ( maskBoxCollider )
          {
            v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
            if ( !byte_4C1C511 )
            {
              sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v21);
              byte_4C1C511 = 1;
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
                  if ( !byte_4C1C511 )
                  {
                    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v29);
                    byte_4C1C511 = 1;
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
      sub_1C3B9C0(maskBoxCollider, method);
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

  if ( (byte_4C1D506 & 1) == 0 )
  {
    sub_1C3B764(&TouchEffectManager_TypeInfo, method);
    byte_4C1D506 = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1C3B9C0(backBtn, v4);
  UnityEngine_GameObject__SetActive(backBtn, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v6);
  MyRoomControl__SetBackButtonIgnore(this, 1, v7);
  klass = this->klass;
  v9 = !this->fields.isOneShot;
  if ( this->fields.isOneShot )
    v10 = 4;
  else
    v10 = 6;
  this->fields.photoState = v10;
  if ( v9 )
    v11 = 870LL;
  else
    v11 = 362LL;
  v12 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, __int64, __int64, void *))klass->vtable._4_CaptureServant.method)(
                                              this,
                                              v11,
                                              552LL,
                                              klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C1D4E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickRightServant__, method);
    byte_4C1D4E4 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
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

  if ( (byte_4C1D4E0 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&int___TypeInfo, v3);
    sub_1C3B764(&long___TypeInfo, v4);
    sub_1C3B764(&Method_MyRoomControl_OnClickSelectMultipleServant__, v5);
    sub_1C3B764(&Method_MyRoomControl__OnClickSelectMultipleServant_b__358_0__, v6);
    sub_1C3B764(&StringLiteral_15875/*"_FarMinLength"*/, v7);
    sub_1C3B764(&StringLiteral_7381/*"Incomplete DTD content."*/, v8);
    byte_4C1D4E0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15875/*"_FarMinLength"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v11 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7381/*"Incomplete DTD content."*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v13 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v14 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C3B748(v13, v13[4]);
  if ( !v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1C3B9C0(myRoomFsm, method);
  v17 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v17 >= max_length )
      break;
    if ( (unsigned int)v17 >= max_length )
      sub_1C3B9C8(myRoomFsm, method);
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
  this->fields.multipleServantUsrIds = (struct System_Int64_array *)sub_1C3B80C(long___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  sub_1C3B708(&this->fields.multipleLimitCounts);
  v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__358_0__, 0LL);
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

  if ( (byte_4C1D4F4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl_EndLoadPhotoAsset__, v3);
    sub_1C3B764(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v4);
    sub_1C3B764(&StringLiteral_15875/*"_FarMinLength"*/, v5);
    sub_1C3B764(&StringLiteral_7381/*"Incomplete DTD content."*/, v6);
    byte_4C1D4F4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15875/*"_FarMinLength"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_7381/*"Incomplete DTD content."*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1C3B9C0(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v11 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v12 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
    v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0LL);
  }
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCollectionServantListViewManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C1D4EF & 1) == 0 )
  {
    sub_1C3B764(&MyRoomRootComponent_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4C1D4EF = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C3B9C0(Instance, v5);
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

  if ( (byte_4C1D4B0 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickSvt__, method);
    sub_1C3B764(&MyRoomControl_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_10614/*"QUEST_CONFIRM_CONSUME_AP_WARNING"*/, v5);
    byte_4C1D4B0 = 1;
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
      v8 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickSvt__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
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
        MyRoomControl__setNormalFace_32365084(this, 1, v11);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10614/*"QUEST_CONFIRM_CONSUME_AP_WARNING"*/, 0LL);
        return;
      }
    }
    sub_1C3B9C0(svtCtr, v7);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1D4E1 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickUiDisableMultipleView__, method);
    byte_4C1D4E1 = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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

  if ( (byte_4C1D4EE & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_1C3B764(&MyRoomParamsManager_TypeInfo, v3);
    sub_1C3B764(&MyRoomRootComponent_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4C1D4EE = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v11 = *(MyRoomStateMaterial_o **)(v10 + 904);
  v12 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_OnClickValentineListChange__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C3B748(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v11
    || (MyRoomStateMaterial__ValentineListMomentChange(v11, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_16:
    sub_1C3B9C0(Instance, v7);
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

  if ( (byte_4C1D49C & 1) == 0 )
  {
    sub_1C3B764(&Gesture_EventHandler_TypeInfo, method);
    sub_1C3B764(&FingerGestures_TypeInfo, v3);
    sub_1C3B764(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4C1D49C = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1C3B9B0(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v5, 0LL);
}


void __fastcall MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C3B9C0(0LL, method);
  AccountLinkageComponent__OpenMenu(accountLinkageComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OpenChangeTargetSelectDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isLeft,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MyRoomControl___c__DisplayClass418_0_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x8
  int32_t v17; // w12
  __int64 v18; // x10
  struct System_Int32_array *photoTargetFaceListIndex; // x8
  unsigned int max_length; // w9
  int FaceListIndex_k__BackingField; // w11
  __int64 anotherIndex; // x10
  struct PhotoStandFigureComponent_array *photoStandFigures; // x11
  PhotoStandFigureComponent_o *v24; // x11
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x21
  int32_t v26; // w22
  System_Action_T__o *v27; // x23
  System_Action_o *v28; // x20
  System_Action_bool__o *v29; // x24

  if ( (byte_4C1D512 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1C3B764(&System_Action_PhotoUtility_TargetType__TypeInfo, v9);
    sub_1C3B764(&Method_MyRoomControl_SetMaskCollider__, v10);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__0__, v11);
    sub_1C3B764(&MyRoomControl___c__DisplayClass418_0_TypeInfo, v12);
    byte_4C1D512 = 1;
  }
  v13 = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass418_0_TypeInfo);
  MyRoomControl___c__DisplayClass418_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  v13->fields.__4__this = this;
  sub_1C3B708(&v13->fields);
  v13->fields.cancelCallback = cancelCallback;
  v13->fields.anotherTargetType = anotherTargetType;
  v13->fields.isLeft = isLeft;
  v14 = sub_1C3B708(&v13->fields.cancelCallback);
  v16 = v13->fields.isLeft;
  v17 = v13->fields.anotherTargetType;
  v18 = !v16;
  v13->fields.anotherIndex = v16;
  v13->fields.targetIndex = !v16;
  v13->fields.isSelectedAnotherSvt = v17 == 0;
  photoTargetFaceListIndex = this->fields.photoTargetFaceListIndex;
  if ( !photoTargetFaceListIndex )
LABEL_14:
    sub_1C3B9C0(v14, v15);
  max_length = photoTargetFaceListIndex->max_length;
  if ( (unsigned int)v18 >= max_length )
    goto LABEL_15;
  FaceListIndex_k__BackingField = -1;
  photoTargetFaceListIndex->m_Items[v18 + 1] = -1;
  anotherIndex = v13->fields.anotherIndex;
  if ( v17 )
    goto LABEL_11;
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_14;
  if ( (unsigned int)anotherIndex >= photoStandFigures->max_length )
LABEL_15:
    sub_1C3B9C8(v14, v15);
  v24 = photoStandFigures->m_Items[anotherIndex];
  if ( !v24 )
    goto LABEL_14;
  FaceListIndex_k__BackingField = v24->fields._FaceListIndex_k__BackingField;
LABEL_11:
  if ( (unsigned int)anotherIndex >= max_length )
    goto LABEL_15;
  photoTargetFaceListIndex->m_Items[anotherIndex + 1] = FaceListIndex_k__BackingField;
  photoTargetSelectDialog = this->fields.photoTargetSelectDialog;
  v26 = v13->fields.anotherTargetType;
  v27 = (System_Action_T__o *)sub_1C3B9B0(System_Action_PhotoUtility_TargetType__TypeInfo);
  System_Action_Int32Enum____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__0__,
    0LL);
  v28 = v13->fields.cancelCallback;
  v29 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v29, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !photoTargetSelectDialog )
    goto LABEL_14;
  PhotoTargetSelectDialog__Open(
    photoTargetSelectDialog,
    v26,
    0,
    (System_Action_PhotoUtility_TargetType__o *)v27,
    v28,
    v29,
    0LL);
}


void __fastcall MyRoomControl__OpenExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C3B9C0(0LL, method);
  ExchangeSvtCoinComponent__OpenMenu(exchangeSvtCoinComp, 0LL);
}


void __fastcall MyRoomControl__OpenMasterEquipSettingDialog(
        MyRoomControl_o *this,
        System_Action_int__int__o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MasterEquipSettingDialog_o *masterEquipSettingDialog; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x23
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  System_Action_bool__o *v11; // x25
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4C1D4FA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, callBack);
    sub_1C3B764(&Method_MyRoomControl_SetMaskCollider__, v7);
    byte_4C1D4FA = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v11 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1C3B9C0(v12, v13);
  MasterEquipSettingDialog__Open(
    masterEquipSettingDialog,
    masterMaleEquipTexture,
    masterFemaleEquipTexture,
    callBack,
    cancelCallBack,
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
  sub_1C3B708(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1C3B708(&this->fields.multipleLimitCounts);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
}


void __fastcall MyRoomControl__OpenPhotoFrameSelectDialog(
        MyRoomControl_o *this,
        System_Action_o *decideCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MyRoomControl___c__DisplayClass392_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  PhotoFrameSelectDialog_o *photoFrameSelectDialog; // x21
  PhotoFrameSelectDialog_DecideDelegate_o *v15; // x23
  System_Action_bool__o *v16; // x22

  if ( (byte_4C1D4FB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, decideCallback);
    sub_1C3B764(&PhotoFrameSelectDialog_DecideDelegate_TypeInfo, v7);
    sub_1C3B764(&Method_MyRoomControl_SetMaskCollider__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass392_0__OpenPhotoFrameSelectDialog_b__0__, v9);
    sub_1C3B764(&MyRoomControl___c__DisplayClass392_0_TypeInfo, v10);
    byte_4C1D4FB = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass392_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass392_0_TypeInfo);
  MyRoomControl___c__DisplayClass392_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  v11->fields.__4__this = this;
  sub_1C3B708(&v11->fields);
  v11->fields.decideCallback = decideCallback;
  sub_1C3B708(&v11->fields.decideCallback);
  photoFrameSelectDialog = this->fields.photoFrameSelectDialog;
  v15 = (PhotoFrameSelectDialog_DecideDelegate_o *)sub_1C3B9B0(PhotoFrameSelectDialog_DecideDelegate_TypeInfo);
  PhotoFrameSelectDialog_DecideDelegate___ctor(
    v15,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass392_0__OpenPhotoFrameSelectDialog_b__0__,
    0LL);
  v16 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v16, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !photoFrameSelectDialog )
LABEL_6:
    sub_1C3B9C0(v12, v13);
  PhotoFrameSelectDialog__Open(photoFrameSelectDialog, v15, cancelCallback, v16, 0LL);
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

  if ( (byte_4C1D4EB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&Method_MyRoomControl_SetMaskCollider__, v11);
    byte_4C1D4EB = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v13 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1C3B9C0(v14, v15);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v13, callback, index, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OpenStaffChangeDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isLeft,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  MyRoomControl___c__DisplayClass419_0_o *v15; // x20
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x0
  __int64 v17; // x1
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  _BOOL8 v19; // x8
  PhotoStandFigureComponent_o *v20; // x9
  int32_t StandFigureImageId_k__BackingField; // w21
  struct PhotoStandFigureComponent_array *v22; // x8
  __int64 targetIndex; // x9
  PhotoStandFigureComponent_o *v24; // x8
  int32_t v25; // w22
  System_Action_o *v26; // x23
  System_Action_int__o *v27; // x24
  System_Action_o *v28; // x25
  const MethodInfo *v29; // x6

  if ( (byte_4C1D513 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1C3B764(&System_Action_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v10);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass419_0__OpenStaffChangeDialog_b__0__, v11);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass419_0__OpenStaffChangeDialog_b__1__, v12);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass419_0__OpenStaffChangeDialog_b__2__, v13);
    sub_1C3B764(&MyRoomControl___c__DisplayClass419_0_TypeInfo, v14);
    byte_4C1D513 = 1;
  }
  v15 = (MyRoomControl___c__DisplayClass419_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass419_0_TypeInfo);
  MyRoomControl___c__DisplayClass419_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  v15->fields.__4__this = this;
  sub_1C3B708(&v15->fields);
  v15->fields.cancelCallback = cancelCallback;
  v15->fields.anotherTargetType = anotherTargetType;
  v15->fields.isLeft = isLeft;
  photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)sub_1C3B708(&v15->fields.cancelCallback);
  if ( v15->fields.anotherTargetType == 2 )
  {
    photoStandFigures = this->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_18;
    v19 = v15->fields.isLeft;
    if ( (unsigned int)v19 >= photoStandFigures->max_length )
LABEL_19:
      sub_1C3B9C8(photoTargetList, v17);
    v20 = photoStandFigures->m_Items[v19];
    if ( !v20 )
      goto LABEL_18;
    StandFigureImageId_k__BackingField = v20->fields._StandFigureImageId_k__BackingField;
  }
  else
  {
    LODWORD(v19) = v15->fields.isLeft;
    StandFigureImageId_k__BackingField = -1;
  }
  v17 = (unsigned int)v19 ^ 1;
  v15->fields.targetIndex = v17;
  photoTargetList = this->fields.photoTargetList;
  if ( !photoTargetList )
    goto LABEL_18;
  photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                                           (System_Collections_Generic_List_T__o *)photoTargetList,
                                                                                           v17,
                                                                                           (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  if ( (_DWORD)photoTargetList != 2 )
  {
    v25 = -1;
    goto LABEL_17;
  }
  v22 = this->fields.photoStandFigures;
  if ( !v22 )
LABEL_18:
    sub_1C3B9C0(photoTargetList, v17);
  targetIndex = v15->fields.targetIndex;
  if ( (unsigned int)targetIndex >= v22->max_length )
    goto LABEL_19;
  v24 = v22->m_Items[targetIndex];
  if ( !v24 )
    goto LABEL_18;
  v25 = v24->fields._StandFigureImageId_k__BackingField;
LABEL_17:
  v26 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass419_0__OpenStaffChangeDialog_b__0__,
    0LL);
  v27 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass419_0__OpenStaffChangeDialog_b__1__,
    0LL);
  v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass419_0__OpenStaffChangeDialog_b__2__,
    0LL);
  MyRoomControl__OpenStaffDialog(this, v26, v27, v28, StandFigureImageId_k__BackingField, v25, v29);
}


void __fastcall MyRoomControl__OpenStaffDialog(
        MyRoomControl_o *this,
        System_Action_o *staffSelectCancelAction,
        System_Action_int__o *staffCostumeSelectDecideAction,
        System_Action_o *staffCostumeSelectCancelAction,
        int32_t selectedStaffImageId,
        int32_t baseStaffImageId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  MyRoomControl___c__DisplayClass420_0_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  PhotoCampaignStaffSelectDialog_o *photoStaffSelectDialog; // x20
  System_Action_T1__T2__T3__o *v19; // x21

  if ( (byte_4C1D514 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__int__List_StaffPhotoCostumeEntity___TypeInfo, staffSelectCancelAction);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass420_0__OpenStaffDialog_b__0__, v13);
    sub_1C3B764(&MyRoomControl___c__DisplayClass420_0_TypeInfo, v14);
    byte_4C1D514 = 1;
  }
  v15 = (MyRoomControl___c__DisplayClass420_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass420_0_TypeInfo);
  MyRoomControl___c__DisplayClass420_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_6;
  v15->fields.staffCostumeSelectDecideAction = staffCostumeSelectDecideAction;
  sub_1C3B708(&v15->fields);
  v15->fields.baseStaffImageId = baseStaffImageId;
  v15->fields.__4__this = this;
  sub_1C3B708(&v15->fields.__4__this);
  v15->fields.staffCostumeSelectCancelAction = staffCostumeSelectCancelAction;
  sub_1C3B708(&v15->fields.staffCostumeSelectCancelAction);
  v15->fields.staffSelectCancelAction = staffSelectCancelAction;
  sub_1C3B708(&v15->fields.staffSelectCancelAction);
  photoStaffSelectDialog = this->fields.photoStaffSelectDialog;
  v19 = (System_Action_T1__T2__T3__o *)sub_1C3B9B0(System_Action_bool__int__List_StaffPhotoCostumeEntity___TypeInfo);
  System_Action_bool__int__object____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass420_0__OpenStaffDialog_b__0__,
    0LL);
  if ( !photoStaffSelectDialog )
LABEL_6:
    sub_1C3B9C0(v16, v17);
  PhotoCampaignStaffSelectDialog__Open(
    photoStaffSelectDialog,
    (System_Action_bool__int__List_StaffPhotoCostumeEntity___o *)v19,
    selectedStaffImageId,
    v15->fields.baseStaffImageId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OpenStaffSelectDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isChangeTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  MyRoomControl___c__DisplayClass388_0_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_Int32_array *temporaryStaffImageId; // x8
  int32_t v16; // w22
  int32_t StandFigureImageId_k__BackingField; // w21
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v19; // x8
  System_Action_o *v20; // x23
  System_Action_int__o *v21; // x24
  System_Action_o *v22; // x25
  const MethodInfo *v23; // x6

  if ( (byte_4C1D4F7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1C3B764(&System_Action_TypeInfo, v7);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass388_0__OpenStaffSelectDialog_b__0__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass388_0__OpenStaffSelectDialog_b__1__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass388_0__OpenStaffSelectDialog_b__2__, v10);
    sub_1C3B764(&MyRoomControl___c__DisplayClass388_0_TypeInfo, v11);
    byte_4C1D4F7 = 1;
  }
  v12 = (MyRoomControl___c__DisplayClass388_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass388_0_TypeInfo);
  MyRoomControl___c__DisplayClass388_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_15;
  v12->fields.__4__this = this;
  v13 = sub_1C3B708(&v12->fields);
  v12->fields.isChangeTarget = isChangeTarget;
  v12->fields.anotherTargetType = anotherTargetType;
  if ( anotherTargetType != 2 )
  {
    v16 = -1;
    if ( !isChangeTarget )
      goto LABEL_8;
    goto LABEL_10;
  }
  temporaryStaffImageId = this->fields.temporaryStaffImageId;
  if ( !temporaryStaffImageId )
    goto LABEL_15;
  if ( !temporaryStaffImageId->max_length )
    goto LABEL_16;
  v16 = temporaryStaffImageId->m_Items[1];
  if ( isChangeTarget )
  {
LABEL_10:
    photoStandFigures = this->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_15;
    if ( photoStandFigures->max_length )
    {
      v19 = photoStandFigures->m_Items[0];
      if ( v19 )
      {
        StandFigureImageId_k__BackingField = v19->fields._StandFigureImageId_k__BackingField;
        goto LABEL_14;
      }
LABEL_15:
      sub_1C3B9C0(v13, v14);
    }
LABEL_16:
    sub_1C3B9C8(v13, v14);
  }
LABEL_8:
  StandFigureImageId_k__BackingField = -1;
LABEL_14:
  v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass388_0__OpenStaffSelectDialog_b__0__,
    0LL);
  v21 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v21,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass388_0__OpenStaffSelectDialog_b__1__,
    0LL);
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass388_0__OpenStaffSelectDialog_b__2__,
    0LL);
  MyRoomControl__OpenStaffDialog(this, v20, v21, v22, v16, StandFigureImageId_k__BackingField, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OpenTargetSelectDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isChangeTarget,
        int32_t index,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  MyRoomControl___c__DisplayClass387_0_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x23
  System_Action_T__o *v19; // x25
  System_Action_bool__o *v20; // x24

  if ( (byte_4C1D4F6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1C3B764(&System_Action_PhotoUtility_TargetType__TypeInfo, v11);
    sub_1C3B764(&Method_MyRoomControl_SetMaskCollider__, v12);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__0__, v13);
    sub_1C3B764(&MyRoomControl___c__DisplayClass387_0_TypeInfo, v14);
    byte_4C1D4F6 = 1;
  }
  v15 = (MyRoomControl___c__DisplayClass387_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass387_0_TypeInfo);
  MyRoomControl___c__DisplayClass387_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_6;
  v15->fields.__4__this = this;
  sub_1C3B708(&v15->fields);
  v15->fields.isChangeTarget = isChangeTarget;
  v15->fields.anotherTargetType = anotherTargetType;
  photoTargetSelectDialog = this->fields.photoTargetSelectDialog;
  v19 = (System_Action_T__o *)sub_1C3B9B0(System_Action_PhotoUtility_TargetType__TypeInfo);
  System_Action_Int32Enum____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__0__,
    0LL);
  v20 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !photoTargetSelectDialog )
LABEL_6:
    sub_1C3B9C0(v16, v17);
  PhotoTargetSelectDialog__Open(
    photoTargetSelectDialog,
    anotherTargetType,
    index,
    (System_Action_PhotoUtility_TargetType__o *)v19,
    cancelCallback,
    v20,
    0LL);
}


void __fastcall MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t Item; // w0
  _BOOL4 isChangePhotoPosition; // w22
  int32_t v10; // w20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x4

  if ( (byte_4C1D510 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v4);
    sub_1C3B764(&Method_MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode_b__416_0__, v5);
    byte_4C1D510 = 1;
  }
  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider
    || (UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoTargetList) == 0LL) )
  {
    sub_1C3B9C0(maskBoxCollider, v6);
  }
  Item = System_Collections_Generic_List_Int32Enum___get_Item(
           (System_Collections_Generic_List_T__o *)maskBoxCollider,
           !this->fields.isChangePhotoPosition,
           (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  isChangePhotoPosition = this->fields.isChangePhotoPosition;
  v10 = Item;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode_b__416_0__,
    0LL);
  MyRoomControl__OpenChangeTargetSelectDialog(this, v10, !isChangePhotoPosition, v11, v12);
}


void __fastcall MyRoomControl__OpenTargetSelectDialogOnPhotoMode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Collider_o *maskBoxCollider; // x0
  const MethodInfo *v6; // x2

  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_1C3B9C0(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
  MyRoomControl__ConfirmTargetSelectState(this, 1, v6);
}


void __fastcall MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t Item; // w0
  bool isChangePhotoPosition; // w20
  int32_t v10; // w21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_4C1D511 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v4);
    sub_1C3B764(&Method_MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode_b__417_0__, v5);
    byte_4C1D511 = 1;
  }
  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider
    || (UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoTargetList) == 0LL) )
  {
    sub_1C3B9C0(maskBoxCollider, v6);
  }
  Item = System_Collections_Generic_List_Int32Enum___get_Item(
           (System_Collections_Generic_List_T__o *)maskBoxCollider,
           this->fields.isChangePhotoPosition,
           (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  isChangePhotoPosition = this->fields.isChangePhotoPosition;
  v10 = Item;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode_b__417_0__,
    0LL);
  MyRoomControl__OpenChangeTargetSelectDialog(this, v10, isChangePhotoPosition, v11, v12);
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

  if ( (byte_4C1D4C4 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_MyRoomControl__OverrideAccountLinkage_b__304_0__, v5);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, v8);
    sub_1C3B764(&StringLiteral_3440/*"CLICK_GAMEOPTION"*/, v9);
    byte_4C1D4C4 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__304_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1C3B9C0(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3440/*"CLICK_GAMEOPTION"*/, 0LL);
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
  MyRoomControl___c__DisplayClass345_0_o *v11; // x24
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

  if ( (byte_4C1D4D9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, fileName);
    sub_1C3B764(&BgmManager_TypeInfo, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass345_0__PlayOpening_b__0__, v9);
    sub_1C3B764(&MyRoomControl___c__DisplayClass345_0_TypeInfo, v10);
    byte_4C1D4D9 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass345_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass345_0_TypeInfo);
  MyRoomControl___c__DisplayClass345_0___ctor(v11, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.player = CriMoviePlayerObject;
  p_player = &v11->fields.player;
  sub_1C3B708(&v11->fields);
  player = v11->fields.player;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4C1D531 )
  {
    sub_1C3B764(&BgmManager_TypeInfo, v17);
    byte_4C1D531 = 1;
  }
  v19 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v19 = BgmManager_TypeInfo;
  }
  masterVolume = v19->static_fields->masterVolume;
  v21 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass345_0__PlayOpening_b__0__, 0LL);
  if ( !player
    || (CRIMoviePlayer__Initialize(player, fileName, assetPath, masterVolume, isCanSkip, 0LL, v21, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *p_player) == 0LL) )
  {
LABEL_13:
    sub_1C3B9C0(CriMoviePlayerObject, v15);
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
  UnityEngine_Object_o *photoStaffSelectDialog; // x20
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *photoStaffCostumeSelectDialog; // x20
  UnityEngine_Object_o *v17; // x21
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  System_Object_array *v19; // x21
  UnityEngine_Object_o *photoFrameSelectDialog; // x20
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *photoMasterTexture; // x20
  AssetData_o *combineAssetData; // x20
  struct AssetData_o **p_combineAssetData; // x19

  if ( (byte_4C1D518 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetData__ToArray__, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1D518 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1C3B708(&this->fields.photoCampaignShutterEffect);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1C3B708(&this->fields.photoCampaignCameraEffect);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1C3B708(&this->fields.photoLayerChangeObj);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39213104(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1C3B708(&this->fields.photoCampaignAssetData);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !v8 )
      goto LABEL_63;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1C3B708(&this->fields.photoTargetSelectDialog);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !v8 )
      goto LABEL_63;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v11, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1C3B708(&this->fields.photoSettingButtonComponent);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !v8 )
      goto LABEL_63;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v13, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1C3B708(&this->fields.masterEquipSettingDialog);
  }
  photoStaffSelectDialog = (UnityEngine_Object_o *)this->fields.photoStaffSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoStaffSelectDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoStaffSelectDialog;
    if ( !v8 )
      goto LABEL_63;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v15, 0LL);
    this->fields.photoStaffSelectDialog = 0LL;
    sub_1C3B708(&this->fields.photoStaffSelectDialog);
  }
  photoStaffCostumeSelectDialog = (UnityEngine_Object_o *)this->fields.photoStaffCostumeSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoStaffCostumeSelectDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoStaffCostumeSelectDialog;
    if ( !v8 )
      goto LABEL_63;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v17, 0LL);
    this->fields.photoStaffCostumeSelectDialog = 0LL;
    sub_1C3B708(&this->fields.photoStaffCostumeSelectDialog);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v19 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39213312((AssetData_array *)v19, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1C3B708(&this->fields.masterEquipAssetData);
  }
  photoFrameSelectDialog = (UnityEngine_Object_o *)this->fields.photoFrameSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoFrameSelectDialog, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoFrameSelectDialog;
    if ( !v8 )
      goto LABEL_63;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v21, 0LL);
    this->fields.photoFrameSelectDialog = 0LL;
    sub_1C3B708(&this->fields.photoFrameSelectDialog);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
    if ( v8 )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)v8, 0LL);
      this->fields.photoMasterTexture = 0LL;
      sub_1C3B708(&this->fields.photoMasterTexture);
      goto LABEL_58;
    }
LABEL_63:
    sub_1C3B9C0(v8, v7);
  }
LABEL_58:
  combineAssetData = this->fields.combineAssetData;
  if ( combineAssetData )
  {
    p_combineAssetData = &this->fields.combineAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39213104(combineAssetData, 0LL);
    *p_combineAssetData = 0LL;
    sub_1C3B708(p_combineAssetData);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  struct System_String_o **p_asstName; // x20

  if ( (byte_4C1D49A & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, method);
    byte_4C1D49A = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = &this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    *p_asstName = 0LL;
    sub_1C3B708(p_asstName);
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

  if ( (byte_4C1D4D5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1C3B764(&MyRoomControl_TypeInfo, v3);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_13265/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v5);
    byte_4C1D4D5 = 1;
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
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v27, 0LL);
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
  v23 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13265/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
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
    sub_1C3B9C0(playBtnImg, v16);
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
    sub_1C3B9C0(0LL, v3);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 90, 0, 0LL);
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
    sub_1C3B9C0(0LL, v5);
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
  if ( (byte_4C1D4AA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_1C3B764(&MyRoomControl_TypeInfo, v3);
    byte_4C1D4AA = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1C3B9C0(this, method);
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
      sub_1C3B9C8(this, isEnable);
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
    sub_1C3B9C0(this, isEnable);
  }
  if ( isEnable )
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0LL);
  else
    TitleInfoControl__FrameOut((TitleInfoControl_o *)this, 0, 0LL);
}


void __fastcall MyRoomControl__SetExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 19;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, v3);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 93, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5);
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
  MyRoomControl___c__DisplayClass310_0_o *v13; // x21
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  ServantVoiceEntity_o **p_svtVoiceEnt; // x22
  const MethodInfo *v19; // x1
  int32_t figureSvtId; // w23
  ServantVoiceEntity_o *v21; // x24
  int32_t Item; // w0
  const MethodInfo *v23; // x4
  System_String_o *asstName; // x22
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x23
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2

  if ( (byte_4C1D4C8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__0__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__1__, v10);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__2__, v11);
    sub_1C3B764(&MyRoomControl___c__DisplayClass310_0_TypeInfo, v12);
    byte_4C1D4C8 = 1;
  }
  v13 = (MyRoomControl___c__DisplayClass310_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass310_0_TypeInfo);
  MyRoomControl___c__DisplayClass310_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  v13->fields.__4__this = this;
  sub_1C3B708(&v13->fields);
  v13->fields.callback = callback;
  sub_1C3B708(&v13->fields.callback);
  MyRoomControl__setupSvtImageIdList(this, v16);
  v13->fields.svtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v17);
  p_svtVoiceEnt = &v13->fields.svtVoiceEnt;
  sub_1C3B708(&v13->fields.svtVoiceEnt);
  if ( v13->fields.svtVoiceEnt )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v19);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        figureSvtId = this->fields.figureSvtId;
        v21 = *p_svtVoiceEnt;
        Item = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)Instance,
                 this->fields.figureSvtDispIdx,
                 (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
        this->fields.voiceList = MyRoomControl__GetVoiceList(this, v21, figureSvtId, Item, v23);
        sub_1C3B708(&this->fields.voiceList);
        Instance = (CommonUI_o *)*p_svtVoiceEnt;
        if ( *p_svtVoiceEnt )
        {
          this->fields.asstName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
          sub_1C3B708(&this->fields.asstName);
          asstName = this->fields.asstName;
          v25 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v13,
            Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__0__,
            0LL);
          MyRoomControl__voiceLoad(this, asstName, v25, v26);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    sub_1C3B9C0(Instance, v15);
  }
  this->fields.isExistVoiceData = 0;
LABEL_10:
  v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__1__,
    0LL);
  v13->fields.action = v27;
  sub_1C3B708(&v13->fields.action);
  if ( IsActSetMyRoomStandFigre )
  {
    v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass310_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v28, v29);
  }
  else
  {
    ActionExtensions__Call(v13->fields.action, 0LL);
  }
}


void __fastcall MyRoomControl__SetImageIdAndFormId(
        MyRoomControl_o *this,
        int32_t *imageId,
        int32_t *formId,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t Id; // w23
  int32_t v14; // w22
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  int32_t form; // w0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1D519 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageId);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v11);
    sub_1C3B764(&UIStandFigureRender_TypeInfo, v12);
    byte_4C1D519 = 1;
  }
  entity = 0LL;
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  *imageId = Id;
  if ( imageLimitCount >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v14 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v14,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        form = entity->fields.form;
        goto LABEL_16;
      }
LABEL_17:
      sub_1C3B9C0(Master_object, v16);
    }
    Id = *imageId;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
LABEL_16:
  *formId = form;
}


void __fastcall MyRoomControl__SetLayerChangeObj(MyRoomControl_o *this, const MethodInfo *method)
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
  __int64 photoTargetList; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  unsigned __int64 v21; // x20
  char v22; // w8
  char v23; // w28
  UnityEngine_Transform_o *transform; // x0
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v26; // x8
  UnityEngine_Transform_o *v27; // x21
  Il2CppObject *photoLayerChangeObj; // x22
  Il2CppObject *v29; // x21
  struct PhotoStandFigureComponent_array *v30; // x8
  PhotoStandFigureComponent_o *v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  __int64 v36; // x20
  __int64 v37; // x20

  if ( (byte_4C1D500 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__, v8);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_PhotoLayerChangeComponent___, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&Method_MyRoomControl___c__SetLayerChangeObj_b__397_0__, v11);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v12);
    byte_4C1D500 = 1;
  }
  photoTargetList = (__int64)MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoTargetList = (__int64)MyRoomControl___c_TypeInfo;
  }
  v15 = *(System_Action_object__o **)(*(_QWORD *)(photoTargetList + 184) + 64LL);
  if ( !v15 )
  {
    if ( !*(_DWORD *)(photoTargetList + 224) )
    {
      j_il2cpp_runtime_class_init_0(photoTargetList);
      photoTargetList = (__int64)MyRoomControl___c_TypeInfo;
    }
    v16 = **(Il2CppObject ***)(photoTargetList + 184);
    v15 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v15, v16, Method_MyRoomControl___c__SetLayerChangeObj_b__397_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__397_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v15;
    photoTargetList = sub_1C3B708(&static_fields->__9__397_0);
  }
  if ( !instantiateLayerChangeObjList )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    instantiateLayerChangeObjList,
    (System_Action_T__o *)v15,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
  v18 = this->fields.instantiateLayerChangeObjList;
  if ( !v18 )
    goto LABEL_53;
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  if ( !this->fields.isOneShot )
  {
    v21 = 0LL;
    v22 = 1;
    do
    {
      photoTargetList = (__int64)this->fields.photoTargetList;
      if ( !photoTargetList )
        goto LABEL_53;
      v23 = v22;
      photoTargetList = System_Collections_Generic_List_Int32Enum___get_Item(
                          (System_Collections_Generic_List_T__o *)photoTargetList,
                          v21,
                          (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      if ( (_DWORD)photoTargetList == 1 )
      {
        photoTargetList = (__int64)this->fields.photoMasterTexture;
        if ( !photoTargetList )
          goto LABEL_53;
        photoTargetList = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)photoTargetList,
                                     0LL);
        if ( !photoTargetList )
          goto LABEL_53;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)photoTargetList, 0LL);
      }
      else
      {
        photoStandFigures = this->fields.photoStandFigures;
        if ( !photoStandFigures )
          goto LABEL_53;
        if ( v21 >= photoStandFigures->max_length )
          goto LABEL_54;
        v26 = photoStandFigures->m_Items[v21];
        if ( !v26 )
          goto LABEL_53;
        photoTargetList = (__int64)v26->fields.photoStandFigureBack;
        if ( !photoTargetList )
          goto LABEL_53;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)photoTargetList, 0LL);
      }
      v27 = transform;
      photoLayerChangeObj = (Il2CppObject *)this->fields.photoLayerChangeObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      photoTargetList = (__int64)UnityEngine_Object__Instantiate_object__50818788(
                                   photoLayerChangeObj,
                                   v27,
                                   (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_PhotoLayerChangeComponent___);
      if ( !this->fields.photoTargetList )
        goto LABEL_53;
      v29 = (Il2CppObject *)photoTargetList;
      photoTargetList = System_Collections_Generic_List_Int32Enum___get_Item(
                          (System_Collections_Generic_List_T__o *)this->fields.photoTargetList,
                          v21,
                          (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      if ( (_DWORD)photoTargetList == 1 )
      {
        method = (const MethodInfo *)this->fields.photoMasterPanel;
      }
      else
      {
        v30 = this->fields.photoStandFigures;
        if ( !v30 )
          goto LABEL_53;
        if ( v21 >= v30->max_length )
LABEL_54:
          sub_1C3B9C8(photoTargetList, method);
        v31 = v30->m_Items[v21];
        if ( !v31 )
          goto LABEL_53;
        photoTargetList = (__int64)v31->fields.photoStandFigureBack;
        if ( !photoTargetList )
          goto LABEL_53;
        photoTargetList = (__int64)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)photoTargetList,
                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        method = (const MethodInfo *)photoTargetList;
      }
      if ( !v29 )
        goto LABEL_53;
      v29[2].klass = (Il2CppClass *)method;
      sub_1C3B708(&v29[2]);
      photoTargetList = (__int64)this->fields.instantiateLayerChangeObjList;
      if ( !photoTargetList )
        goto LABEL_53;
      v32 = *(_QWORD *)(photoTargetList + 16);
      v33 = Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Add__;
      ++*(_DWORD *)(photoTargetList + 28);
      if ( !v32 )
        goto LABEL_53;
      v34 = *(int *)(photoTargetList + 24);
      if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)photoTargetList,
          v29,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = v32 + 8 * v34;
        *(_DWORD *)(photoTargetList + 24) = v34 + 1;
        *(_QWORD *)(v35 + 32) = v29;
        sub_1C3B708(v35 + 32);
      }
      v22 = 0;
      v21 = 1LL;
    }
    while ( (v23 & 1) != 0 );
    photoTargetList = (__int64)this->fields.instantiateLayerChangeObjList;
    if ( photoTargetList )
    {
      photoTargetList = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)photoTargetList,
                                   0,
                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
      if ( this->fields.instantiateLayerChangeObjList )
      {
        v36 = photoTargetList;
        photoTargetList = (__int64)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList,
                                     1,
                                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
        if ( photoTargetList )
        {
          if ( v36 )
          {
            *(_QWORD *)(v36 + 40) = *(_QWORD *)(photoTargetList + 32);
            sub_1C3B708(v36 + 40);
            photoTargetList = (__int64)this->fields.instantiateLayerChangeObjList;
            if ( photoTargetList )
            {
              photoTargetList = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)photoTargetList,
                                           1,
                                           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
              if ( this->fields.instantiateLayerChangeObjList )
              {
                v37 = photoTargetList;
                photoTargetList = (__int64)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList,
                                             0,
                                             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
                if ( photoTargetList )
                {
                  if ( v37 )
                  {
                    *(_QWORD *)(v37 + 40) = *(_QWORD *)(photoTargetList + 32);
                    sub_1C3B708(v37 + 40);
                    photoTargetList = (__int64)this->fields.instantiateLayerChangeObjList;
                    if ( photoTargetList )
                    {
                      photoTargetList = (__int64)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)photoTargetList,
                                                   this->fields.isChangePhotoPosition,
                                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
                      if ( photoTargetList )
                      {
                        PhotoLayerChangeComponent__InitDepth((PhotoLayerChangeComponent_o *)photoTargetList, 0LL);
                        return;
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
LABEL_53:
    sub_1C3B9C0(photoTargetList, method);
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
  if ( (byte_4C1D4E6 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_4C1D4E6 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1C3B9C0(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C3B9C8(this, *(_QWORD *)&frontIndex);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C3B9C0(0LL, flag);
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  MyRoomControl___c__DisplayClass230_0_o *v15; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v20; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  MyRoomControl_o *v23; // x0
  int32_t v24; // w3
  const MethodInfo *v25; // x5
  StandFigureBack_o *standFigureBack; // x19
  int32_t v27; // w21
  int32_t imageLimitCount; // w22
  int32_t formId; // w23
  System_Action_o *v30; // x24
  CombineRootComponent_c *v31; // x0
  System_String_o *COMBINE_ASSET_PATH; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x21
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = servantId;
  if ( (byte_4C1D4A9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_1C3B764(&AssetManager_TypeInfo, v7);
    sub_1C3B764(&CombineRootComponent_TypeInfo, v8);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_b__1__, v12);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_g__OnEnd_0__, v13);
    sub_1C3B764(&MyRoomControl___c__DisplayClass230_0_TypeInfo, v14);
    byte_4C1D4A9 = 1;
  }
  imageId = 0;
  v15 = (MyRoomControl___c__DisplayClass230_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass230_0_TypeInfo);
  MyRoomControl___c__DisplayClass230_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  v15->fields.__4__this = this;
  sub_1C3B708(&v15->fields);
  v15->fields.end_act = end_act;
  sub_1C3B708(&v15->fields.end_act);
  v15->fields.servantId = v5;
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = v5;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, v5, v18);
    MyRoomControl__SetChangeBtn(this, v20);
    v5 = v15->fields.servantId;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_19;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                    Item,
                                                                    0LL);
  if ( !mStateMaterial )
    goto LABEL_19;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, v5, (int32_t)materialImageIdList, 0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !materialImageIdList )
    goto LABEL_19;
  v23 = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                             materialImageIdList,
                             this->fields.materialFigureSvtDispIdx,
                             (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
  v24 = v15->fields.servantId;
  v15->fields.imageLimitCount = (int)v23;
  MyRoomControl__SetImageIdAndFormId(v23, &imageId, &v15->fields.formId, v24, (int32_t)v23, v25);
  if ( this->fields.combineAssetData )
  {
    standFigureBack = this->fields.standFigureBack;
    v27 = v15->fields.servantId;
    imageLimitCount = v15->fields.imageLimitCount;
    formId = v15->fields.formId;
    v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v15,
      Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_g__OnEnd_0__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__SetMyRoomStandFigure(standFigureBack, v27, imageLimitCount, 1, 0, formId, 10, v30, 0, 0LL);
      return;
    }
LABEL_19:
    sub_1C3B9C0(materialImageIdList, v17);
  }
  v31 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v31 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v31->static_fields->COMBINE_ASSET_PATH;
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v33, 1, 0LL);
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
    sub_1C3B9C0(multipleViewButtonSprite, v3);
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
  MyRoomControl___c__DisplayClass228_0_o *v9; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  bool _39109112; // w8
  MyRoomControl_o *Item; // x0
  int32_t v15; // w21
  const MethodInfo *v16; // x5
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w23
  int32_t v19; // w19
  System_Action_o *v20; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C1D4A7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, end_act);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C3B764(&TutorialFlag_TypeInfo, v6);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass228_0__SetMyRoomStandFigure_b__0__, v7);
    sub_1C3B764(&MyRoomControl___c__DisplayClass228_0_TypeInfo, v8);
    byte_4C1D4A7 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v9 = (MyRoomControl___c__DisplayClass228_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass228_0_TypeInfo);
  MyRoomControl___c__DisplayClass228_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  v9->fields.__4__this = this;
  sub_1C3B708(&v9->fields);
  v9->fields.end_act = end_act;
  sub_1C3B708(&v9->fields.end_act);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, v9->fields.end_act, v12);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39109112 = TutorialFlag__Get_39109112(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _39109112;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_11;
  Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                              imageIdList,
                              this->fields.figureSvtDispIdx,
                              (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
  v15 = (int)Item;
  MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], this->fields.figureSvtId, (int32_t)Item, v16);
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v19 = formId[1];
  v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass228_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_11:
    sub_1C3B9C0(imageIdList, v11);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v15, 1, 0, v19, 10, v20, 0, 0LL);
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
  MyRoomControl___c__DisplayClass229_0_o *v9; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v11; // x1
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C1D4A8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, end_act);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C3B764(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass229_0__SetMySvtFigure_b__0__, v7);
    sub_1C3B764(&MyRoomControl___c__DisplayClass229_0_TypeInfo, v8);
    byte_4C1D4A8 = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass229_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass229_0_TypeInfo);
  MyRoomControl___c__DisplayClass229_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.__4__this = this,
        sub_1C3B708(&v9->fields),
        v9->fields.end_act = end_act,
        sub_1C3B708(&v9->fields.end_act),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1C3B9C0(materialImageIdList, v11);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v14);
  v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v9, Method_MyRoomControl___c__DisplayClass229_0__SetMySvtFigure_b__0__, 0LL);
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
    sub_1C3B9C0(photoCampaignButtonSprite, v3);
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
    sub_1C3B9C0(photoCampaignAtlas, sprite);
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

  if ( (byte_4C1D50F & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, isActive);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1D50F = 1;
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
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                                                               photoCampaignCameraEffect,
                                                                                               transform,
                                                                                               (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      sub_1C3B708(&this->fields.photoCampaignInstantiateCameraEffect);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1C3B9C0(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1C3B708(&this->fields.photoCampaignInstantiateCameraEffect);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
}


void __fastcall MyRoomControl__SetPhotoFrameSprite(
        MyRoomControl_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *photoFrameAtlas; // x22
  __int64 v8; // x1
  UIAtlas_o *v9; // x0

  if ( (byte_4C1D4F3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, sprite);
    byte_4C1D4F3 = 1;
  }
  photoFrameAtlas = (UnityEngine_Object_o *)this->fields.photoFrameAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoFrameAtlas, 0LL, 0LL) )
  {
    v9 = this->fields.photoFrameAtlas;
    if ( !v9 )
      goto LABEL_11;
    v9 = (UIAtlas_o *)UIAtlas__GetSprite(v9, name, 0LL);
    if ( v9 )
    {
      if ( sprite )
      {
        UISprite__set_atlas(sprite, this->fields.photoFrameAtlas, 0LL);
        UISprite__set_spriteName(sprite, name, 0LL);
        return;
      }
LABEL_11:
      sub_1C3B9C0(v9, v8);
    }
  }
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

  if ( (byte_4C1D4B2 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1D4B2 = 1;
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
    if ( !byte_4C1C516 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4C1C516 = 1;
    }
    if ( !v9
      || (UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v10 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v10)
      || (v11 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v10, 0.0, 0LL), !v11) )
    {
LABEL_21:
      sub_1C3B9C0(voicePlayEffect, v7);
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
    UITweener__Play_48401172(v10, 1, 0LL);
    UITweener__Play_48401172(v11, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  this->fields.sceneJumpInfo = info;
  sub_1C3B708(&this->fields.sceneJumpInfo);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, v3);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C3B9C0(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C1D49F & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_4C1D49F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3225C7C *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4C1D493 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C1D493 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, 0LL),
        !this->fields.frontObjectManager) )
  {
    sub_1C3B9C0(Instance, v5);
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
  int32_t v3; // w20
  MyRoomControl_o *v4; // x19
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
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v17; // w9
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v19; // x2
  MyRoomControl_o *v20; // x21
  int32_t v21; // w22
  int32_t ImageLimitCount; // w23
  int32_t v23; // w23
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MyRoomControl_o *v28; // x21
  unsigned __int64 v29; // x22
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int32_t LimitCount; // w21
  System_Collections_Generic_List_int__o *v34; // x8
  int v35; // w20
  int32_t v36; // w21

  v3 = servantId;
  v4 = this;
  if ( (byte_4C1D495 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1C3B764(&MaterialServantLimitCountManager_TypeInfo, v14);
    this = (MyRoomControl_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4C1D495 = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  v4->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_43;
  v17 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v17;
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = v4->fields.usrData;
  if ( !usrData )
    goto LABEL_43;
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)UserServantCollectionMaster__GetEntityDefinitely(
                              (UserServantCollectionMaster_o *)this,
                              usrData->fields.userId,
                              v3,
                              0LL);
  if ( !this )
    goto LABEL_43;
  v20 = this;
  if ( ((__int64)this->fields.myRoomListCtr & 0x80000000) == 0 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v3, v21, 0LL);
      this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this )
        break;
      this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                  (ServantLimitImageMaster_o *)this,
                                  v3,
                                  ImageLimitCount,
                                  0LL);
      if ( !v4->fields.materialImageIdList )
        break;
      v23 = (int)this;
      this = (MyRoomControl_o *)System_Collections_Generic_List_int___Contains(
                                  v4->fields.materialImageIdList,
                                  (int32_t)this,
                                  (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          break;
        v24 = *(_QWORD *)&this->fields.m_CachedPtr;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v24 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v23,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v24 + 4 * m_CancellationTokenSource_low + 32) = v23;
        }
      }
      if ( ++v21 > SLODWORD(v20->fields.myRoomListCtr) )
        goto LABEL_22;
    }
LABEL_43:
    sub_1C3B9C0(this, *(_QWORD *)&servantId);
  }
LABEL_22:
  this = (MyRoomControl_o *)MyRoomControl__GetSortedCostumeIds(this, v3, v19);
  if ( !this )
    goto LABEL_43;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v28 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)m_CancellationTokenSource )
        sub_1C3B9C8(this, *(_QWORD *)&servantId);
      *(_QWORD *)&servantId = *((unsigned int *)&v28->fields.myRoomData + v29);
      if ( servantId >= 1 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          goto LABEL_43;
        v30 = *(_QWORD *)&this->fields.m_CachedPtr;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v30 )
          goto LABEL_43;
        v32 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            servantId,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v32 + 1;
          *(_DWORD *)(v30 + 4 * v32 + 32) = servantId;
        }
      }
      LODWORD(m_CancellationTokenSource) = v28->fields.m_CancellationTokenSource;
    }
    while ( (__int64)++v29 < (int)m_CancellationTokenSource );
  }
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(v3, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)this,
                              v3,
                              LimitCount,
                              0LL);
  v34 = v4->fields.materialImageIdList;
  if ( !v34 )
    goto LABEL_43;
  v35 = (int)this;
  v36 = 0;
  while ( v36 < v34->fields._size )
  {
    this = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                v34,
                                v36,
                                (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)this == v35 )
    {
      v4->fields.materialFigureSvtDispIdx = v36;
      return;
    }
    v34 = v4->fields.materialImageIdList;
    ++v36;
    if ( !v34 )
      goto LABEL_43;
  }
}


void __fastcall MyRoomControl__ShowContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1C3B9C0(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4C1D49B & 1) == 0 )
  {
    sub_1C3B764(&Gesture_EventHandler_TypeInfo, method);
    sub_1C3B764(&FingerGestures_TypeInfo, v3);
    sub_1C3B764(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4C1D49B = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1C3B9B0(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__StartCameraEffect_d__405_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C1D507 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__StartCameraEffect_d__405_TypeInfo, method);
    byte_4C1D507 = 1;
  }
  v3 = (MyRoomControl__StartCameraEffect_d__405_o *)sub_1C3B9B0(MyRoomControl__StartCameraEffect_d__405_TypeInfo);
  MyRoomControl__StartCameraEffect_d__405___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  v3->fields.__4__this = this;
  sub_1C3B708(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__TransitionMyRoomTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x8
  int v12; // w9
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *temporaryPhotoTargetList; // x8
  int v14; // w9
  Il2CppObject *v15; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4C1D50C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Clear__, v5);
    sub_1C3B764(&Method_MyRoomControl__TransitionMyRoomTop_b__410_0__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    byte_4C1D50C = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoTargetList = this->fields.photoTargetList;
  if ( !photoTargetList )
    goto LABEL_10;
  v12 = photoTargetList->fields._version + 1;
  photoTargetList->fields._size = 0;
  photoTargetList->fields._version = v12;
  temporaryPhotoTargetList = this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_10;
  v14 = temporaryPhotoTargetList->fields._version + 1;
  temporaryPhotoTargetList->fields._size = 0;
  temporaryPhotoTargetList->fields._version = v14;
  this->fields.isChangePhotoPosition = 0;
  this->fields.photoState = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)v15;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__410_0__, 0LL);
  if ( !v17 )
LABEL_10:
    sub_1C3B9C0(Instance, v10);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C1D49D & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_MyRoomControl__update__, method);
    byte_4C1D49D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3225C58 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_4C1D4ED & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    byte_4C1D4ED = 1;
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
      sub_1C3B9C0(RestTime6, v9);
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

  if ( (byte_4C1D50E & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    byte_4C1D50E = 1;
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
      sub_1C3B9C0(RestTime6, v9);
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
    sub_1C3B9C0(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__305_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1D523 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D523 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__372_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C1D527 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__CloseMultipleView_b__372_1__, v3);
    byte_4C1D527 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__372_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1C3B9C0(v6, v7);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v5, v8);
}


void __fastcall MyRoomControl___CloseMultipleView_b__372_1(MyRoomControl_o *this, const MethodInfo *method)
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
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 41, 0, 0LL);
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
      sub_1C3B9C8(titleInfo, method);
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
    sub_1C3B9C0(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__278_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C3B9C0(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__386_1(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_4C1D528 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__EndLoadPhotoAsset_b__386_2__, v3);
    byte_4C1D528 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__386_2__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v4, 1, v5);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__386_2(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  struct TitleInfoControl_o *v7; // x8
  struct TitleInfoControl_o *v8; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4C1D529 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_MyRoomControl__EndLoadPhotoAsset_b__386_3__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1D529 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 0, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setBackBtnSprite(titleInfo, 3, 1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)TitleInfoControl__FrameOut(titleInfo, 0, 0LL);
  v7 = this->fields.titleInfo;
  if ( !v7 )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)v7->fields.titleImg;
  if ( !titleInfo )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v8 = this->fields.titleInfo;
  if ( !v8 )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)v8->fields.headerBgImg;
  if ( !titleInfo )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setDispParticleObj(titleInfo, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__386_3__, 0LL);
  if ( !v11 )
LABEL_17:
    sub_1C3B9C0(titleInfo, method);
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__386_3(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 0, v2);
}


void __fastcall MyRoomControl___ExchangePosition_b__421_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned __int64 v5; // x21
  char v6; // w9
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  char v8; // w28
  PhotoStandFigureComponent_o *v9; // x22
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x5
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_GameObject_o *v17; // x22
  const MethodInfo *v18; // x2
  CommonUI_o *v19; // x19
  UnityEngine_Vector3_o v20; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o position; // [xsp+10h] [xbp-70h] BYREF
  float scale; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C1D52D & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v3);
    this = (MyRoomControl_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4C1D52D = 1;
  }
  position.fields.z = 0.0;
  *(_QWORD *)&position.fields.x = 0LL;
  scale = 0.0;
  v20.fields.z = 0.0;
  *(_QWORD *)&v20.fields.x = 0LL;
  v5 = 0LL;
  v6 = 1;
  do
  {
    photoStandFigures = v2->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_28;
    v8 = v6;
    if ( v5 >= photoStandFigures->max_length )
      sub_1C3B9C8(this, method);
    this = (MyRoomControl_o *)v2->fields.photoTargetList;
    if ( !this )
      goto LABEL_28;
    v9 = photoStandFigures->m_Items[v5];
    this = (MyRoomControl_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                (System_Collections_Generic_List_T__o *)this,
                                v5,
                                (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    switch ( (_DWORD)this )
    {
      case 2:
        MyRoomControl__GetPhotoStaffPosition(v2, v9, v5, &v20, v10);
        if ( !v9 )
          goto LABEL_28;
        this = (MyRoomControl_o *)v9->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPosition(gameObject, v20, 0LL);
        this = (MyRoomControl_o *)v9->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4C1C516 )
        {
          sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4C1C516 = 1;
        }
        GameObjectExtensions__SetLocalScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        break;
      case 1:
        this = (MyRoomControl_o *)v2->fields.photoMasterTexture;
        if ( !this )
          goto LABEL_28;
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v2, v5, v18);
        GameObjectExtensions__SetLocalPosition(v17, PhotoCampaignMasterPosition, 0LL);
        break;
      case 0:
        MyRoomControl__GetPhotoCampaignServantPositionAndScale(v2, v9, v5, &position, &scale, v11);
        if ( !v9 )
          goto LABEL_28;
        this = (MyRoomControl_o *)v9->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPosition(v12, position, 0LL);
        this = (MyRoomControl_o *)v9->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScale_34965512(v13, scale, 0LL);
        break;
    }
    v6 = 0;
    v5 = 1LL;
  }
  while ( (v8 & 1) != 0 );
  this = (MyRoomControl_o *)v2->fields.photoSettingButtonComponent;
  if ( !this )
    goto LABEL_28;
  PhotoSettingButtonComponent__DispSettingButton(
    (PhotoSettingButtonComponent_o *)this,
    v2->fields.photoTargetList,
    v2->fields.photoStandFigures,
    v2->fields.isChangePhotoPosition,
    v2->fields.isOneShot,
    0LL);
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v19 )
LABEL_28:
    sub_1C3B9C0(this, method);
  CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___GoToTitle_b__317_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
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

  if ( (byte_4C1D525 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_MyRoomControl___c__GoToTitle_b__317_1__, v6);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v7);
    byte_4C1D525 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v10, v11);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v15 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 48LL);
    if ( !v15 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MyRoomControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v15, v16, Method_MyRoomControl___c__GoToTitle_b__317_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__317_1 = v15;
      Instance = (void *)sub_1C3B708(&static_fields->__9__317_1);
    }
    if ( v12 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v12, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_16:
    sub_1C3B9C0(Instance, v9);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__275_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C3B9C0(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__253_0(MyRoomControl_o *this, const MethodInfo *method)
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

  if ( (byte_4C1D521 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__LoadServantForm_b__253_1__, v4);
    sub_1C3B764(&StringLiteral_8624/*"MYROOM_MENU_NAME_2"*/, v5);
    byte_4C1D521 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__253_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1C3B9C0(SvtStandFigure, method);
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
  MyRoomControl__moveControl(this, this->fields.svtObj, v15, (System_String_o *)StringLiteral_8624/*"MYROOM_MENU_NAME_2"*/, v14);
}


void __fastcall MyRoomControl___OnClickBack_b__324_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 0, v2);
}


void __fastcall MyRoomControl___OnClickBack_b__324_1(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 1, v2);
}


void __fastcall MyRoomControl___OnClickBack_b__324_2(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t targetChangeAnotherTargetType; // w20
  bool targetChangeIsLeft; // w21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x4

  if ( (byte_4C1D526 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__OnClickBack_b__324_3__, v3);
    byte_4C1D526 = 1;
  }
  targetChangeAnotherTargetType = this->fields.targetChangeAnotherTargetType;
  targetChangeIsLeft = this->fields.targetChangeIsLeft;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__OnClickBack_b__324_3__, 0LL);
  MyRoomControl__OpenChangeTargetSelectDialog(this, targetChangeAnotherTargetType, targetChangeIsLeft, v6, v7);
}


void __fastcall MyRoomControl___OnClickBack_b__324_3(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__358_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1C3B9C0(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OpenTargetSelectDialogLeftOnPhotoMode_b__416_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void __fastcall MyRoomControl___OpenTargetSelectDialogRightOnPhotoMode_b__417_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__304_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1D522 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D522 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__410_0(MyRoomControl_o *this, const MethodInfo *method)
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
  void *titleInfo; // x0
  struct TitleInfoControl_o *v14; // x8
  const MethodInfo *v15; // x2
  MyRoomControl___c_c *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x20
  System_Action_object__o *_9__410_1; // x21
  Il2CppObject *v19; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct MyRoomControl___c_StaticFields *v27; // x0
  struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  System_Action_o *v31; // x20
  const MethodInfo *v32; // x4

  if ( (byte_4C1D52A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1C3B764(&System_Action_PhotoStandFigureComponent__TypeInfo, v3);
    sub_1C3B764(&System_Action_TypeInfo, v4);
    sub_1C3B764(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v7);
    sub_1C3B764(&Method_MyRoomControl__TransitionMyRoomTop_b__410_3__, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&Method_MyRoomControl___c__TransitionMyRoomTop_b__410_1__, v10);
    sub_1C3B764(&Method_MyRoomControl___c__TransitionMyRoomTop_b__410_2__, v11);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v12);
    byte_4C1D52A = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__changeTitleInfo_38564436((TitleInfoControl_o *)titleInfo, 1, 41, 0, 0LL);
  v14 = this->fields.titleInfo;
  if ( !v14 )
    goto LABEL_34;
  titleInfo = v14->fields.headerBgImg;
  if ( !titleInfo )
    goto LABEL_34;
  titleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)titleInfo, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v15);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)titleInfo, 1, 0LL);
  v16 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v16 = MyRoomControl___c_TypeInfo;
  }
  _9__410_1 = (System_Action_object__o *)v16->static_fields->__9__410_1;
  if ( !_9__410_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomControl___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__410_1 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__410_1, v19, Method_MyRoomControl___c__TransitionMyRoomTop_b__410_1__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__410_1 = (struct System_Action_PhotoStandFigureComponent__o *)_9__410_1;
    sub_1C3B708(&static_fields->__9__410_1);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__410_1,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = &this->fields.photoMasterTexture;
    titleInfo = this->fields.photoMasterTexture;
    if ( !titleInfo )
      goto LABEL_34;
    UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)titleInfo, 0LL);
    titleInfo = *p_photoMasterTexture;
    if ( !*p_photoMasterTexture )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)titleInfo,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1C3B708(&this->fields.photoMasterTexture);
  }
  titleInfo = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    titleInfo = MyRoomControl___c_TypeInfo;
  }
  v25 = *(System_Action_object__o **)(*((_QWORD *)titleInfo + 23) + 80LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)titleInfo + 56) )
    {
      j_il2cpp_runtime_class_init_0(titleInfo);
      titleInfo = MyRoomControl___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)titleInfo + 23);
    v25 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v25, v26, Method_MyRoomControl___c__TransitionMyRoomTop_b__410_2__, 0LL);
    v27 = MyRoomControl___c_TypeInfo->static_fields;
    v27->__9__410_2 = (struct System_Action_PhotoLayerChangeComponent__o *)v25;
    titleInfo = (void *)sub_1C3B708(&v27->__9__410_2);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v25,
          (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (v28 = this->fields.instantiateLayerChangeObjList) == 0LL) )
  {
LABEL_34:
    sub_1C3B9C0(titleInfo, method);
  }
  size = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
  v31 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__410_3__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 1, v31, 1, v32);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__410_3(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C1D52B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__TransitionMyRoomTop_b__410_4__, v3);
    byte_4C1D52B = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__410_4__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__410_4(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4C1D52C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_MyRoomControl__TransitionMyRoomTop_b__410_5__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1D52C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__410_5__, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__410_5(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__309_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C1D524 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3637/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, method);
    byte_4C1D524 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3637/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__236_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C1D520 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_7321/*"Icelandic (Iceland)"*/, method);
    byte_4C1D520 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7321/*"Icelandic (Iceland)"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__273_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C3B9C0(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__227_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v5; // x8

  if ( (byte_4C1D51F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8438/*"MENU_QUEST_START"*/, method);
    sub_1C3B764(&StringLiteral_8439/*"MENU_SELECT_BULK_ITEM"*/, v3);
    byte_4C1D51F = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, method);
  if ( this->fields.type == 6 )
    v5 = (System_String_o **)&StringLiteral_8439/*"MENU_SELECT_BULK_ITEM"*/;
  else
    v5 = (System_String_o **)&StringLiteral_8438/*"MENU_QUEST_START"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__209_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C1D51E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, result);
    byte_4C1D51E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, 0LL);
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
  if ( (byte_4C1D4BB & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, result);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    this = (MyRoomControl_o *)sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v6);
    byte_4C1D4BB = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v7 = &StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C3B9C0(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v7 = &StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4C1D4CC & 1) == 0 )
  {
    sub_1C3B764(&TutorialFlag_TypeInfo, method);
    byte_4C1D4CC = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39109112(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1C3B9C0(0LL, v3);
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
    sub_1C3B9C0(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1C3B9C0(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *svtCtr; // x0

  svtCtr = (StandFigureBack_o *)this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.baseCallbackFunc = 0LL,
        sub_1C3B708(&svtCtr->fields.baseCallbackFunc),
        (svtCtr = this->fields.standFigureBack) == 0LL) )
  {
    sub_1C3B9C0(svtCtr, method);
  }
  StandFigureBack__DestroyFigure(svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C1D4B9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_11682/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, method);
    byte_4C1D4B9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11682/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
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

  if ( (byte_4C1D497 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_1C3B764(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_1C3B764(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&MyRoomControl_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C1D497 = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v6->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_14;
  v10 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v10 )
  {
    v11 = v10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v11,
                                 (const MethodInfo_329AE94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1C3B9C0(Instance, v9);
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

  if ( (byte_4C1D498 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, method);
    byte_4C1D498 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1C3B9C0(v4, v5);
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
    sub_1C3B9C0(0LL, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v18; // w8
  struct System_Collections_Generic_List_int__o *v20; // x8
  MyRoomControl_c *v21; // x0
  int v22; // w8
  MyRoomControl_c *v23; // x0
  int32_t v24; // w20
  int32_t Item; // w0
  StandFigureBack_c *v26; // x8
  int32_t v27; // w22
  int32_t LimitCountByImageLimit; // w21
  Il2CppObject *Master_object; // x0
  int32_t figureSvtId; // w19
  MyroomServantSpecialImageMaster_o *v31; // x23
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1D4AB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_1C3B764(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_1C3B764(&MyRoomControl_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&StandFigureBack_TypeInfo, v12);
    byte_4C1D4AB = 1;
  }
  entity = 0LL;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  myRoomData = (MyRoomData_o *)sub_1C3B708(&this->fields.usrData);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_45;
  favoriteUserSvtId = usrData->fields.favoriteUserSvtId;
  this->fields.fvrUsrSvtId = favoriteUserSvtId;
  if ( favoriteUserSvtId < 1 )
    return 0LL;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0LL);
  if ( myRoomData )
  {
    if ( limitCntReset )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_45;
      figureSvtDispIdx = this->fields.figureSvtDispIdx;
      if ( figureSvtDispIdx + 1 < imageIdList->fields._size )
        v18 = figureSvtDispIdx + 1;
      else
        v18 = 0;
      this->fields.figureSvtDispIdx = v18;
    }
    else
    {
      v20 = this->fields.imageIdList;
      if ( !v20 )
        goto LABEL_45;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v20->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_45;
        v34.fields.r = 0.5;
        v34.fields.g = 0.5;
        v34.fields.b = 0.5;
        v34.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v34, 0LL);
        v23 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v23 = MyRoomControl_TypeInfo;
        }
        v22 = this->fields.buttonFlag & ~v23->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_45;
        v33.fields.r = 1.0;
        v33.fields.g = 1.0;
        v33.fields.b = 1.0;
        v33.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v33, 0LL);
        v21 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v21 = MyRoomControl_TypeInfo;
        }
        v22 = this->fields.buttonFlag | v21->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v22;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_45;
  v24 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
  v26 = StandFigureBack_TypeInfo;
  v27 = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v26 = StandFigureBack_TypeInfo;
  }
  LimitCountByImageLimit = v27;
  if ( v27 < v26->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v27, 0LL);
  }
  if ( v27 < 201 )
    goto LABEL_41;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  figureSvtId = this->fields.figureSvtId;
  v31 = (MyroomServantSpecialImageMaster_o *)Master_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  myRoomData = (MyRoomData_o *)ImageLimitCount__SpecialImageLimitCountToSpecialNum(v27, 0LL);
  if ( !v31 )
LABEL_45:
    sub_1C3B9C0(myRoomData, favoriteUserSvtId);
  myRoomData = (MyRoomData_o *)MyroomServantSpecialImageMaster__TryGetEntity(
                                 v31,
                                 &entity,
                                 figureSvtId,
                                 (int32_t)myRoomData,
                                 0LL);
  if ( ((unsigned __int8)myRoomData & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_45;
    LimitCountByImageLimit = entity->fields.baseLimitCount;
  }
LABEL_41:
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !myRoomData )
    goto LABEL_45;
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v24, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C1D4B4 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4C1D4B4 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1C3B9C0(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v9, 0LL);
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

  if ( (byte_4C1D4CF & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C3B764(&TutorialFlag_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v7);
    byte_4C1D4CF = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39109112(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1C3B9C0(helpListViewManager, v8);
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v10,
                                                         (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_1C3B9C0(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C1D4C7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__hideFavoriteSvt_b__309_0__, v3);
    byte_4C1D4C7 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__309_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1C3B9C0(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1C3B9C0(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1C3B9C0(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C1D4C9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3637/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, method);
    byte_4C1D4C9 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C3B9C0(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3637/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4C1D4CA & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, method);
    byte_4C1D4CA = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1C3B9C0(soundPlayerComp, method);
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

  if ( (byte_4C1D4AE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__hideSvtFigure_b__236_0__, v3);
    sub_1C3B764(&MyRoomControl_TypeInfo, v4);
    byte_4C1D4AE = 1;
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
  v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__236_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1C3B9C0(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v9, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(usrItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__initMaterial_d__273_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C1D4BF & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__initMaterial_d__273_TypeInfo, method);
    byte_4C1D4BF = 1;
  }
  v3 = (MyRoomControl__initMaterial_d__273_o *)sub_1C3B9B0(MyRoomControl__initMaterial_d__273_TypeInfo);
  MyRoomControl__initMaterial_d__273___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  v3->fields.__4__this = this;
  sub_1C3B708(&v3->fields.__4__this);
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 standFigureBack; // x0
  const MethodInfo *v35; // x2
  CStateManager_T__o *v36; // x21
  CStateManager_T__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v38; // x21
  struct EventMaster_o **p_eventMaster; // x20
  const MethodInfo *v40; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v43; // x22
  Il2CppObject *v44; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
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
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v65; // x21
  int max_length; // w9
  int v67; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x1
  MyRoomControl___c_c *v73; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x21
  System_Action_object__o *_9__204_1; // x22
  Il2CppObject *v76; // x23
  struct MyRoomControl___c_StaticFields *v77; // x0
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v81; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_object__o *v83; // x22
  System_Collections_Generic_Dictionary_int__object__o *v84; // x22
  System_Collections_Generic_Dictionary_int__object__o *v85; // x22
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v87; // x1
  System_Collections_Generic_List_T__o *v88; // x20
  System_Collections_Generic_List_T__o *v89; // x20
  System_Collections_Generic_List_object__o *v90; // x20
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

  if ( (byte_4C1D492 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_PhotoStandFigureComponent__TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&AtlasManager_TypeInfo, v4);
    sub_1C3B764(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___, v5);
    sub_1C3B764(&Method_CStateManager_MyRoomControl___ctor__, v6);
    sub_1C3B764(&Method_CStateManager_MyRoomControl__add__, v7);
    sub_1C3B764(&CStateManager_MyRoomControl__TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetData___ctor__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent___ctor__, v17);
    sub_1C3B764(&System_Collections_Generic_List_PhotoLayerChangeComponent__TypeInfo, v18);
    sub_1C3B764(&System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo, v19);
    sub_1C3B764(&System_Collections_Generic_List_AssetData__TypeInfo, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&Method_MyRoomControl_LoadScriptFileListAssetData__, v22);
    sub_1C3B764(&MyRoomParamsManager_TypeInfo, v23);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C3B764(&SoundManager_TypeInfo, v25);
    sub_1C3B764(&MyRoomControl_StateEtc_TypeInfo, v26);
    sub_1C3B764(&Method_MyRoomControl___c__initMyRoom_b__204_0__, v27);
    sub_1C3B764(&Method_MyRoomControl___c__initMyRoom_b__204_1__, v28);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v29);
    sub_1C3B764(&StringLiteral_10572/*"QUESTPHASEID"*/, v30);
    sub_1C3B764(&StringLiteral_17810/*"commandCode/setStatus"*/, v31);
    sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, v32);
    sub_1C3B764(&StringLiteral_8965/*"Multi dimension array is not supported on this operation."*/, v33);
    byte_4C1D492 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v93.fields.z = 0.0;
  *(_QWORD *)&v93.fields.x = 0LL;
  standFigureBack = (__int64)this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (__int64)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, 0LL);
      return;
    }
    goto LABEL_52;
  }
  if ( !this->fields.mFSM )
  {
    v36 = (CStateManager_T__o *)sub_1C3B9B0(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v36,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3225B48 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v36;
    sub_1C3B708(&this->fields.mFSM);
    standFigureBack = (__int64)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_52;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_3225BF0 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v38 = (MyRoomControl_StateEtc_o *)sub_1C3B9B0(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v38, 0LL);
    if ( !mFSM )
      goto LABEL_52;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v38,
      (const MethodInfo_3225BF0 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v35);
  standFigureBack = (__int64)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (__int64)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_52;
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)standFigureBack,
                                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  sub_1C3B708(&this->fields.eventMaster);
  standFigureBack = (__int64)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)standFigureBack, this->fields.myRoomFsm, 1, 0LL, 41, 0LL);
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
  MyRoomControl__setUserStInfoView(this, v40);
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
  v43 = *(System_Action_o **)(*(_QWORD *)(standFigureBack + 184) + 8LL);
  if ( !v43 )
  {
    if ( !*(_DWORD *)(standFigureBack + 224) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
    }
    v44 = **(Il2CppObject ***)(standFigureBack + 184);
    v43 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v43, v44, Method_MyRoomControl___c__initMyRoom_b__204_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__204_0 = v43;
    standFigureBack = sub_1C3B708(&static_fields->__9__204_0);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_52;
  v46 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v43, 0LL);
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
  if ( !byte_4C1D52F )
  {
    sub_1C3B764(&MyRoomParamsManager_TypeInfo, method);
    byte_4C1D52F = 1;
  }
  v50 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v50 = MyRoomParamsManager_TypeInfo;
  }
  v51 = v50->static_fields;
  standFigureBack = (__int64)this->fields.soundPlayerComp;
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
  v56 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_52;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v56, 0LL);
  MyRoomControl__setupSvtImageIdList(this, v57);
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
  v98 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v98;
  v99 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v99;
  v100 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (__int64)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v100;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v61);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17810/*"commandCode/setStatus"*/, 0LL);
  standFigureBack = (__int64)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_52;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)standFigureBack + 840LL))(
    standFigureBack,
    *(_QWORD *)(*(_QWORD *)standFigureBack + 848LL));
  v101 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v101;
  if ( !multipleStandFigureBacks )
    goto LABEL_52;
  v65 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v65 >= max_length )
      break;
    if ( (unsigned int)v65 >= max_length )
      goto LABEL_89;
    standFigureBack = (__int64)multipleStandFigureBacks->m_Items[v65];
    if ( standFigureBack )
    {
      StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v65;
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
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)standFigureBack, 0LL)) == 0
    || (v67 = *(_DWORD *)(standFigureBack + 24),
        standFigureBack = (__int64)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = v67 > 1,
        !standFigureBack) )
  {
LABEL_52:
    sub_1C3B9C0(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"Multi dimension array is not supported on this operation."*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_52;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (__int64)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v70);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v71);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v72);
  }
  v73 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v73 = MyRoomControl___c_TypeInfo;
  }
  _9__204_1 = (System_Action_object__o *)v73->static_fields->__9__204_1;
  if ( !_9__204_1 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = MyRoomControl___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v73->static_fields->__9;
    _9__204_1 = (System_Action_object__o *)sub_1C3B9B0(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__204_1, v76, Method_MyRoomControl___c__initMyRoom_b__204_1__, 0LL);
    v77 = MyRoomControl___c_TypeInfo->static_fields;
    v77->__9__204_1 = (struct System_Action_PhotoStandFigureComponent__o *)_9__204_1;
    sub_1C3B708(&v77->__9__204_1);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__204_1,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
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
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_52;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0, 0LL);
  standFigureBack = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntityList, 0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  method = (const MethodInfo *)(((unsigned int)standFigureBack ^ 1) & 1);
  this->fields.isEnablePhotoCampaign = (standFigureBack ^ 1) & 1;
  if ( !photoCampaignButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(photoCampaignButton, (standFigureBack ^ 1) & 1, 0LL);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_52;
    if ( !EnableEntityList->max_length )
LABEL_89:
      sub_1C3B9C8(standFigureBack, method);
    v81 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v81;
    sub_1C3B708(&this->fields.photoCampaignEntity);
    v83 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v83,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v83;
    sub_1C3B708(&this->fields.masterEquipAssetData);
    v84 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v84,
      (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v84;
    sub_1C3B708(&this->fields.masterMaleEquipTexture);
    v85 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v85,
      (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v85;
    sub_1C3B708(&this->fields.masterFemaleEquipTexture);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10572/*"QUESTPHASEID"*/, 0LL);
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
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v87);
    v88 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v88,
      (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    this->fields.photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v88;
    sub_1C3B708(&this->fields.photoTargetList);
    v89 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v89,
      (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    this->fields.temporaryPhotoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v89;
    sub_1C3B708(&this->fields.temporaryPhotoTargetList);
    v90 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PhotoLayerChangeComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v90,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent___ctor__);
    this->fields.instantiateLayerChangeObjList = (struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *)v90;
    sub_1C3B708(&this->fields.instantiateLayerChangeObjList);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_1C3B9C0(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1C3B708(&v8->fields.eventReceiver);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1C3B708(&v8->fields.callWhenFinished);
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

  if ( (byte_4C1D4CD & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_onClickHelp__, method);
    sub_1C3B764(&MyRoomControl_TypeInfo, v3);
    byte_4C1D4CD = 1;
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
    v6 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_onClickHelp__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  if ( v7 <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    if ( this->fields.isServantMaterial )
    {
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 61, 0LL, 0LL);
    }
    else
    {
      helpListViewManager = this->fields.helpListViewManager;
      if ( !helpListViewManager )
        sub_1C3B9C0(0LL, v9);
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

  if ( (byte_4C1D4CE & 1) == 0 )
  {
    sub_1C3B764(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl_helpClose__, v3);
    sub_1C3B764(&Method_MyRoomControl_onClickHelpClose__, v4);
    byte_4C1D4CE = 1;
  }
  v5 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_onClickHelpClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1C3B9B0(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1C3B9C0(v9, v10);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1C3B9C0(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1C3B9C0(0LL, method);
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

  if ( (byte_4C1D4B7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1C3B764(&int_____TypeInfo, v3);
    sub_1C3B764(&int___TypeInfo, v4);
    sub_1C3B764(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C1D4B7 = 1;
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
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v11, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                           (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v17 = (System_Int32_array_array *)sub_1C3B80C(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1C3B80C(int___TypeInfo, 2LL);
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
            sub_1C3B9C8(svtCtr, svtCtr);
          v17->m_Items[0] = (System_Int32_array *)svtCtr;
          svtCtr = (MyRoomSvtControl_o *)sub_1C3B708(v17->m_Items);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, v17, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1C3B9C0(svtCtr, v10);
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
  if ( (byte_4C1D4A2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_1C3B764(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4C1D4A2 = 1;
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
             (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1C3B9C0(materialImageIdList, v4);
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

  if ( (byte_4C1D4B8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl_endReflectionGameOption__, v3);
    byte_4C1D4B8 = 1;
  }
  optionComp = this->fields.optionComp;
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1C3B9C0(v6, v7);
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

  if ( (byte_4C1D4BA & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_callbackChangeName__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_4493/*"Column must belong to a table."*/, v6);
    byte_4C1D4BA = 1;
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
                   (System_String_o *)StringLiteral_4493/*"Column must belong to a table."*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1C3B9C0(SelfUserGame, v8);
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
    sub_1C3B9C0(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomControl___c__DisplayClass237_0_o *v9; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  PlayMakerFSM_o **p_svtVoiceEnt; // x21
  ServantVoiceEntity_o *svtVoiceEnt; // x22
  int32_t figureSvtId; // w23
  int32_t Item; // w0
  const MethodInfo *v17; // x4
  System_String_o *asstName; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_4C1D4AF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isReset);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass237_0__resetSvtVoiceData_b__0__, v6);
    sub_1C3B764(&MyRoomControl___c__DisplayClass237_0_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_8438/*"MENU_QUEST_START"*/, v8);
    byte_4C1D4AF = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass237_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass237_0_TypeInfo);
  MyRoomControl___c__DisplayClass237_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9->fields.__4__this = this;
  sub_1C3B708(&v9->fields);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8438/*"MENU_QUEST_START"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1C3B9C0(myRoomFsm, v11);
  }
  v9->fields.svtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v12);
  p_svtVoiceEnt = (PlayMakerFSM_o **)&v9->fields.svtVoiceEnt;
  sub_1C3B708(&v9->fields.svtVoiceEnt);
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
  figureSvtId = this->fields.figureSvtId;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)myRoomFsm,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
  this->fields.voiceList = MyRoomControl__GetVoiceList(this, svtVoiceEnt, figureSvtId, Item, v17);
  sub_1C3B708(&this->fields.voiceList);
  myRoomFsm = *p_svtVoiceEnt;
  if ( !*p_svtVoiceEnt )
    goto LABEL_13;
  this->fields.asstName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  sub_1C3B708(&this->fields.asstName);
  asstName = this->fields.asstName;
  v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass237_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v19, v20);
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 50, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
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

  if ( (byte_4C1D4D6 & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_setDefSvtPos__, method);
    byte_4C1D4D6 = 1;
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
    v5 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
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
        sub_1C3B9C0(voicePlayBtn, method);
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
    sub_1C3B9C0(moveBtnObj, isDisp);
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
    sub_1C3B9C0(titleBtnCollider, isEnabled);
  if ( !LODWORD(titleBtnCollider[11].klass) )
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
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

  if ( (byte_4C1D4BD & 1) == 0 )
  {
    sub_1C3B764(&Method_MyRoomControl_setMaterial__, isPlayDecideSe);
    byte_4C1D4BD = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, v5);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C3B77C(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 55, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, method);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, method);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 60, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, method);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 56, 0, 0LL);
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
    sub_1C3B9C0(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 57, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3B9C0(0LL, method);
  TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(v6, v7);
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

  if ( (byte_4C1D4A6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__setMySvtFigure_b__227_0__, v3);
    byte_4C1D4A6 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__227_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v4, v5);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_32365084(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_32365084(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialFigureSvtDispIdx; // w1
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  MyRoomControl_o *Item; // x0
  const MethodInfo *v11; // x5
  UnityEngine_Object_o *playBtnImg; // x20
  int32_t formId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1D4B3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1D4B3 = 1;
  }
  *(_QWORD *)formId = 0LL;
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_23;
    materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
    materialServantId = this->fields.materialServantId;
LABEL_15:
    Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                materialImageIdList,
                                materialFigureSvtDispIdx,
                                (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
    MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], materialServantId, (int32_t)Item, v11);
    goto LABEL_16;
  }
  if ( !isCurrent || !this->fields.isServantFormKeep )
  {
    materialImageIdList = this->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_23;
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
      goto LABEL_23;
    formId[1] = MyRoomSvtControl__GetFormId((MyRoomSvtControl_o *)materialImageIdList, 0LL);
  }
LABEL_16:
  materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.standFigureBack;
  if ( !materialImageIdList )
    goto LABEL_23;
  StandFigureBack__SetFaceTypeAndForm((StandFigureBack_o *)materialImageIdList, 0, formId[1], 0LL);
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
LABEL_23:
    sub_1C3B9C0(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 48, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_38564436((TitleInfoControl_o *)mstpfObj, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1C3B9C0(mstpfObj, method);
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
    sub_1C3B9C0(0LL, v4);
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
  bool v6; // w0
  _BOOL8 isEnableMultipleView; // x1
  StandFigureBack_o *standFigureBack; // x0
  int v9; // w20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  switch ( type )
  {
    case 0:
    case 1:
    case 10:
      MainMenuBar__setMenuActive(1, 0LL, 0LL);
      if ( !callFadeIn )
        goto LABEL_15;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_35;
      StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_35;
      MyRoomFrontObjectManager__FrameIn((MyRoomFrontObjectManager_o *)standFigureBack, 0LL);
LABEL_15:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)standFigureBack,
        !this->fields.isServantMaterial,
        0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      if ( this->fields.fvrUsrSvtId >= 1 && this->fields.isHeroine && this->fields.isHeroineReave )
        MyRoomControl__ChangeSetStandFigureObj(this, 0, 1, v10);
      goto LABEL_26;
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 11:
    case 17:
    case 18:
      v6 = 0;
      goto LABEL_3;
    case 6:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      if ( !callFadeIn )
        goto LABEL_26;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_35;
      StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
LABEL_26:
      v9 = 1;
      isEnableMultipleView = this->fields.isEnableMultipleView;
      break;
    case 7:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      goto LABEL_6;
    case 19:
      v6 = 1;
LABEL_3:
      MainMenuBar__setMenuActive(v6, 0LL, 0LL);
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_35;
      StandFigureBack__Fadeout(standFigureBack, 0LL, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_35;
      MyRoomFrontObjectManager__FrameOut((MyRoomFrontObjectManager_o *)standFigureBack, 0LL);
LABEL_6:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      v9 = 0;
      isEnableMultipleView = 0LL;
      break;
    default:
      goto LABEL_26;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton;
  if ( !standFigureBack
    || ((UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL),
         MyRoomControl__SetMultipleViewButtonColor(this, v11),
         standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignButton,
         !v9)
      ? (isEnableMultipleView = 0LL)
      : (isEnableMultipleView = this->fields.isEnablePhotoCampaign),
        !standFigureBack) )
  {
LABEL_35:
    sub_1C3B9C0(standFigureBack, isEnableMultipleView);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
  MyRoomControl__SetPhotoCampaignButtonColor(this, v12);
}


int32_t __fastcall MyRoomControl__setSvtFriendShipLv(MyRoomControl_o *this, int32_t hSvtId, const MethodInfo *method)
{
  MyRoomData_o *myRoomData; // x0

  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1C3B9C0(0LL, hSvtId);
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
  int32_t figureSvtId; // w21
  int32_t Item; // w0
  const MethodInfo *v16; // x4
  System_String_o *asstName; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21
  Il2CppObject *v25; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4C1D4A4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C3B764(&Method_MyRoomControl_EndLoad__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_MyRoomControl___c__setSvtVoiceData_b__225_0__, v8);
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_8438/*"MENU_QUEST_START"*/, v10);
    byte_4C1D4A4 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8438/*"MENU_QUEST_START"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1C3B9C0(myRoomFsm, method);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( SvtVoiceEnt )
  {
    v13 = SvtVoiceEnt;
    myRoomFsm = this->fields.imageIdList;
    if ( !myRoomFsm )
      goto LABEL_22;
    figureSvtId = this->fields.figureSvtId;
    Item = System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)myRoomFsm,
             this->fields.figureSvtDispIdx,
             (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
    this->fields.voiceList = MyRoomControl__GetVoiceList(this, v13, figureSvtId, Item, v16);
    sub_1C3B708(&this->fields.voiceList);
    this->fields.asstName = ServantVoiceEntity__getVoiceAssetName(v13, 0LL);
    sub_1C3B708(&this->fields.asstName);
    asstName = this->fields.asstName;
    v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v18, v19);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v22 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v24 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 24LL);
      if ( !v24 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v25 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v24 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(v24, v25, Method_MyRoomControl___c__setSvtVoiceData_b__225_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__225_0 = v24;
        myRoomFsm = (void *)sub_1C3B708(&static_fields->__9__225_0);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v24, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8438/*"MENU_QUEST_START"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 45, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
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

  if ( (byte_4C1D4BC & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl_TypeInfo, method);
    byte_4C1D4BC = 1;
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
    sub_1C3B9C0(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_38564436((TitleInfoControl_o *)multipleViewButton, 1, 41, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38564436(titleInfo, 1, 44, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1C3B9C0(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_32160208((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  sub_1C3B708(moveTarget);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1C3B9C0(transform, v8);
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
    sub_1C3B9C0(this, moveTarget);
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
    sub_1C3B9C0(this, moveTarget);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  moveShowPos->fields.x = 0.0;
  moveShowPos->fields.y = localPosition.fields.y;
  moveShowPos->fields.z = localPosition.fields.z;
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
  __int64 v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Collections_Generic_List_int__o **p_imageIdList; // x20
  int32_t v20; // w22
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t figureSvtId; // w23
  int32_t ImageLimitCount; // w23
  int32_t v25; // w23
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  const MethodInfo *v29; // x3
  __int64 v30; // x22
  __int64 v31; // x23
  MyRoomControl_o *v32; // x0
  const MethodInfo *v33; // x2
  __int64 v34; // x8
  __int64 v35; // x22
  unsigned __int64 v36; // x23
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  int32_t FigureImageLimitCount; // w21
  struct System_Collections_Generic_List_int__o *v41; // x8
  int v42; // w21
  int32_t v43; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C1D494 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C1D494 = 1;
  }
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  myRoomData = sub_1C3B708(&this->fields.usrData);
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
  *(_QWORD *)&v44.fields.currentCryptoKey = v18;
  *(_QWORD *)&v44.fields.fakeValue = v17;
  p_imageIdList = &this->fields.imageIdList;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v44, 0LL);
  v20 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v16, 0LL);
  while ( 1 )
  {
    v22 = *(_QWORD *)(v16 + 96);
    v21 = *(_QWORD *)(v16 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v22;
    *(_QWORD *)&v45.fields.fakeValue = v21;
    if ( v20 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v45, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v20, 0LL);
    myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)myRoomData,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)myRoomData,
                   this->fields.figureSvtId,
                   ImageLimitCount,
                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v25 = myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            myRoomData,
            (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      myRoomData = (__int64)*p_imageIdList;
      if ( !*p_imageIdList )
        goto LABEL_48;
      v26 = *(_QWORD *)(myRoomData + 16);
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++*(_DWORD *)(myRoomData + 28);
      if ( !v26 )
        goto LABEL_48;
      v28 = *(int *)(myRoomData + 24);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)myRoomData,
          v25,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(myRoomData + 24) = v28 + 1;
        *(_DWORD *)(v26 + 4 * v28 + 32) = v25;
      }
    }
    ++v20;
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v16, 0LL)
    || (myRoomData = UserServantEntity__isLimitCountMax((UserServantEntity_o *)v16, 0LL), (myRoomData & 1) != 0) )
  {
    v31 = *(_QWORD *)(v16 + 80);
    v30 = *(_QWORD *)(v16 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = v31;
    *(_QWORD *)&v46.fields.fakeValue = v30;
    v32 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v46, 0LL);
    myRoomData = (__int64)MyRoomControl__GetSortedCostumeIds(v32, (int32_t)v32, v33);
    if ( myRoomData )
    {
      v34 = *(_QWORD *)(myRoomData + 24);
      v35 = myRoomData;
      if ( (int)v34 >= 1 )
      {
        v36 = 0LL;
        while ( 1 )
        {
          if ( v36 >= (unsigned int)v34 )
            sub_1C3B9C8(myRoomData, favoriteUserSvtId);
          favoriteUserSvtId = *(unsigned int *)(v35 + 32 + 4 * v36);
          if ( (int)favoriteUserSvtId >= 1 )
          {
            myRoomData = (__int64)*p_imageIdList;
            if ( !*p_imageIdList )
              goto LABEL_48;
            v37 = *(_QWORD *)(myRoomData + 16);
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(myRoomData + 28);
            if ( !v37 )
              goto LABEL_48;
            v39 = *(int *)(myRoomData + 24);
            if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)myRoomData,
                favoriteUserSvtId,
                *(const MethodInfo_366EC48 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(myRoomData + 24) = v39 + 1;
              *(_DWORD *)(v37 + 4 * v39 + 32) = favoriteUserSvtId;
            }
          }
          LODWORD(v34) = *(_DWORD *)(v35 + 24);
          if ( (__int64)++v36 >= (int)v34 )
            goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
LABEL_48:
    sub_1C3B9C0(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  MyRoomControl__AddSpecialImageLimitCount(
    (MyRoomControl_o *)myRoomData,
    &this->fields.imageIdList,
    this->fields.figureSvtId,
    v29);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v16, 0, 0LL);
  myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)myRoomData,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)myRoomData,
                 this->fields.figureSvtId,
                 FigureImageLimitCount,
                 0LL);
  v41 = this->fields.imageIdList;
  if ( !v41 )
    goto LABEL_48;
  v42 = myRoomData;
  v43 = 0;
  while ( v43 < v41->fields._size )
  {
    myRoomData = System_Collections_Generic_List_int___get_Item(
                   v41,
                   v43,
                   (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v42 )
    {
      this->fields.figureSvtDispIdx = v43;
      return;
    }
    v41 = *p_imageIdList;
    ++v43;
    if ( !*p_imageIdList )
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

  if ( (byte_4C1D496 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C3B764(&Method_MyRoomControl__setupSvtRand_b__209_0__, v4);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&OptionManager_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, v12);
    byte_4C1D496 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1C3B9C0(limitCountSupport, v13);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v15 = *((_DWORD *)limitCountSupport + 6);
  v16 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_71082488(0, v15, 0LL);
    if ( (unsigned int)IsLeave >= v16[6] )
LABEL_35:
      sub_1C3B9C8(IsLeave, v13);
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
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__209_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v23,
                                              (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  sub_1C3B708(&this->fields.usrData);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v54, 0LL);
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
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v52, 0LL);
  v33 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v34 = v32;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v33;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v51, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                      v22->fields.imageLimitCount,
                      0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v22->fields.dispLimitCount, 0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v22->fields.commandCardLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v22->fields.iconLimitCount, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v22->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v22, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v22, 0LL);
  if ( !v30 )
    goto LABEL_36;
  v40 = (char)limitCountSupport;
  commonFlag = v30[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v22->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       v22->fields.randomLimitCount,
                       0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v22->fields.randomLimitCountSupport, 0LL);
  v45 = *(_QWORD *)&v22->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&v22->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v44;
  *(_QWORD *)&v55.fields.currentCryptoKey = v45;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v55, 0LL);
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

  if ( (byte_4C1D4A1 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4C1D4A1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D4A0 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4C1D4A0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1C3B9C0(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_32365084(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__329_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1D4D2 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl__svtVoicePlayAct_d__329_TypeInfo, item);
    byte_4C1D4D2 = 1;
  }
  v5 = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_1C3B9B0(MyRoomControl__svtVoicePlayAct_d__329_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__329___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1C3B9C0(v6, v7);
  v5->fields.__4__this = this;
  sub_1C3B708(&v5->fields.__4__this);
  v5->fields.item = item;
  sub_1C3B708(&v5->fields.item);
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
  MyRoomControl___c__DisplayClass224_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  NetworkManager_c *v15; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v17; // x22

  if ( (byte_4C1D4A3 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, assetName);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass224_0__voiceLoad_b__0__, v9);
    sub_1C3B764(&MyRoomControl___c__DisplayClass224_0_TypeInfo, v10);
    byte_4C1D4A3 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass224_0_o *)sub_1C3B9B0(MyRoomControl___c__DisplayClass224_0_TypeInfo);
  MyRoomControl___c__DisplayClass224_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_1C3B708(&v11->fields);
  v11->fields.endCallback = endCallback;
  sub_1C3B708(&v11->fields.endCallback);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1D530 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v14);
    byte_4C1D530 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  if ( !v15->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass224_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v17, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1C3B9C0(v12, v13);
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


void __fastcall MyRoomControl__CaptureServant_d__403___ctor(
        MyRoomControl__CaptureServant_d__403_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__403__MoveNext(
        MyRoomControl__CaptureServant_d__403_o *this,
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
  _BOOL4 isOneShot; // w26
  int v26; // w27
  int v27; // w24
  int v28; // w25
  int v29; // w27
  int32_t v30; // w0
  int v31; // w8
  UnityEngine_Color_array *Pixels_71009800; // x25
  UnityEngine_Texture2D_o *v33; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v35; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4C1D613 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Texture2D_TypeInfo, v3);
    sub_1C3B764(&TouchEffectManager_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_4C1D613 = 1;
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
    isOneShot = _4__this->fields.isOneShot;
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
    v31 = isOneShot ? 11 : 1;
    Pixels_71009800 = UnityEngine_Texture2D__GetPixels_71009800(v12, v28, v31 * v27 / v30 + v29, v20, v21, 0LL);
    v33 = (UnityEngine_Texture2D_o *)sub_1C3B9B0(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71010924(v33, v20, v21, 3, 0, 0LL);
    if ( !v33 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_71012004(v33, Pixels_71009800, 0LL);
    UnityEngine_Texture2D__Apply_71012776(v33, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v33,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)v12, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v35 = 11.0;
    if ( !_4__this->fields.isOneShot )
      v35 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v35, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1C3B9C0(height, v14);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C3B708(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__403__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__403_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__403__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__403_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__CaptureServant_d__403_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__403__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__403_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__403__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__403_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__278___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__278__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *this,
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

  if ( (byte_4C1D614 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__278_0__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4C1D614 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C3B9C0(Instance, v9);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v11, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__278_0__, 0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__278__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__278__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__278__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__278__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__278_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__272___ctor(
        MyRoomControl__InitMaterialOnBackground_d__272_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitMaterialOnBackground_d__272__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__272_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MyRoomControl__InitMaterialOnBackground_d__272_o *v3; // x20
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
  if ( (byte_4C1D615 & 1) == 0 )
  {
    sub_1C3B764(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__272_o *)sub_1C3B764(&TerminalSceneComponent_TypeInfo, v6);
    byte_4C1D615 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    terminal_5__2 = v3->fields._terminal_5__2;
    v3->fields.__1__state = -1;
    if ( !terminal_5__2 )
      goto LABEL_26;
    this = (MyRoomControl__InitMaterialOnBackground_d__272_o *)terminal_5__2->fields.mTerminalMap;
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
    this = (MyRoomControl__InitMaterialOnBackground_d__272_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_26;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, v2);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
      byte_4C1CAE3 = 1;
    }
    v10 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    v3->fields._terminal_5__2 = v10->static_fields->mInstance;
    sub_1C3B708(&v3->fields._terminal_5__2);
    v11 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__272_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v3->fields.__2__current = (Il2CppObject *)QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
        p__2__current = &v3->fields.__2__current;
        sub_1C3B708(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_26:
      sub_1C3B9C0(this, method);
    }
  }
  v15 = (BackTaskAmountAdjuster_o *)sub_1C3B9B0(BackTaskAmountAdjuster_TypeInfo);
  BackTaskAmountAdjuster___ctor(v15, 0LL);
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__272_o *)_4__this->fields.mStateMaterial;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__272_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                               (MyRoomStateMaterial_o *)this,
                                                               method);
  if ( !v15 )
    goto LABEL_26;
  v16 = BackTaskAmountAdjuster__Execute(v15, (System_Collections_IEnumerator_o *)this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0LL);
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__272__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__272_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitMaterialOnBackground_d__272__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__272_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__InitMaterialOnBackground_d__272_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__272__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__272_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__272__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__272_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitServantMenu_d__275___ctor(
        MyRoomControl__InitServantMenu_d__275_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitServantMenu_d__275__MoveNext(
        MyRoomControl__InitServantMenu_d__275_o *this,
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

  if ( (byte_4C1D616 & 1) == 0 )
  {
    sub_1C3B764(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1C3B764(&System_Func_bool__TypeInfo, v3);
    sub_1C3B764(&Method_MyRoomControl__InitServantMenu_b__275_0__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, v7);
    byte_4C1D616 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v16 = (BackTaskAmountAdjuster_o *)sub_1C3B9B0(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v16, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v11);
          if ( !v16 )
            goto LABEL_17;
          v17 = BackTaskAmountAdjuster__Execute(v16, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1C3B9C0(Instance, v11);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__275_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v12;
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__275__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__275_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitServantMenu_d__275__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__275_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__InitServantMenu_d__275_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__275__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__275_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitServantMenu_d__275__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__275_o *this,
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
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  bool result; // w0
  Il2CppObject *v17; // x22
  Il2CppObject **p__8__1; // x27
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  struct StandFigureBack_array *v20; // x8
  __int64 v21; // x19
  __int64 v22; // x22
  __int64 v23; // x24
  int max_length; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v26; // x8
  const MethodInfo *v27; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v30; // w20
  int32_t v31; // w23
  struct ServantScriptMultipleEntity_array *v32; // x26
  ServantScriptMultipleEntity_o *v33; // x25
  struct StandFigureBack_array *v34; // x8
  __int64 v35; // x25
  __int64 v36; // x19
  struct MyRoomControl_o *v37; // x24
  Il2CppObject *v38; // x28
  Il2CppObject **v39; // x21
  int32_t v40; // w5
  StandFigureBack_o *v41; // x26
  System_Action_o *monitor; // x27
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *v44; // x8
  __int64 v45; // x19
  int v46; // w9
  unsigned int v47; // w25
  struct StandFigureBack_array *v48; // x8
  UnityEngine_Component_o *v49; // x8
  UnityEngine_Component_o *v50; // x21
  float v51; // s2
  float v52; // s1
  float v53; // s8
  float v54; // s10
  float v55; // s9
  float v56; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v58; // x8
  float v59; // s10
  struct StandFigureBack_array *v60; // x9
  int v61; // s14
  int v62; // s15
  float v63; // s0
  float v64; // s2
  struct StandFigureBack_array *v65; // x8
  float v66; // s11
  float v67; // s12
  struct StandFigureBack_array *v68; // x8
  struct StandFigureBack_array *v69; // x8
  System_String_o *v70; // x2
  struct MyRoomControl___c__DisplayClass366_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v73; // x22
  Il2CppObject *v74; // x20
  System_Func_bool__o *v75; // x21
  UnityEngine_WaitWhile_o *v76; // x20
  struct ServantScriptMultipleEntity_array *v77; // x8
  unsigned int v78; // w9
  ServantScriptMultipleEntity_o *v79; // x10
  ServantScriptMultipleEntity_o *v80; // x8
  Il2CppObject *v81; // x20
  System_Func_bool__o *v82; // x21
  UnityEngine_WaitWhile_o *v83; // x20
  __int64 v84; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-C8h]
  int32_t v86; // [xsp+24h] [xbp-BCh]
  MyRoomControl__LoadMultipleServant_d__366_o *v87; // [xsp+28h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+30h] [xbp-B0h] BYREF
  __int64 formId; // [xsp+38h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v87 = this;
  if ( (byte_4C1D617 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v2);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&System_Func_bool__TypeInfo, v4);
    sub_1C3B764(&int___TypeInfo, v5);
    sub_1C3B764(&ServantScriptMultipleEntity___TypeInfo, v6);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__0__, v7);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__1__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__2__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__3__, v10);
    sub_1C3B764(&MyRoomControl___c__DisplayClass366_0_TypeInfo, v11);
    sub_1C3B764(&UnityEngine_WaitWhile_TypeInfo, v12);
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B764(&StringLiteral_6871/*"GameObject.Find return null"*/, v13);
    byte_4C1D617 = 1;
  }
  entity = 0LL;
  formId = 0LL;
  _1__state = v87->fields.__1__state;
  _4__this = v87->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      _8__1 = v87->fields.__8__1;
      v87->fields.__1__state = -1;
      if ( _8__1 )
      {
        _8__1->fields.wait = 1;
        if ( _4__this )
        {
          multipleViewComponent = _4__this->fields.multipleViewComponent;
          v73 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v73,
            (Il2CppObject *)_8__1,
            Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__1__,
            0LL);
          if ( multipleViewComponent )
          {
            MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v73, 0LL);
            v74 = (Il2CppObject *)v87->fields.__8__1;
            v75 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v75,
              v74,
              Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__2__,
              0LL);
            v76 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v76, v75, 0LL);
            v87->fields.__2__current = (Il2CppObject *)v76;
            sub_1C3B708(&v87->fields.__2__current);
            v87->fields.__1__state = 2;
            return 1;
          }
        }
      }
    }
    else
    {
      result = 0;
      if ( _1__state )
        return result;
      v87->fields.__1__state = -1;
      v17 = (Il2CppObject *)sub_1C3B9B0(MyRoomControl___c__DisplayClass366_0_TypeInfo);
      System_Object___ctor(v17, 0LL);
      v87->fields.__8__1 = (struct MyRoomControl___c__DisplayClass366_0_o *)v17;
      p__8__1 = (Il2CppObject **)&v87->fields.__8__1;
      sub_1C3B708(&v87->fields.__8__1);
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)v87->fields.__8__1;
      if ( this )
      {
        this->fields.__2__current = (Il2CppObject *)v87->fields.__4__this;
        this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B708(&this->fields.__2__current);
        if ( _4__this )
        {
          this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.mBlocker;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
            if ( *p__8__1 )
            {
              LODWORD((*p__8__1)[1].klass) = 0;
              multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
              if ( multipleStandFigureBacks )
              {
                v87->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)sub_1C3B80C(
                                                                                                   ServantScriptMultipleEntity___TypeInfo,
                                                                                                   multipleStandFigureBacks->max_length);
                p_multipleEntities_5__2 = &v87->fields._multipleEntities_5__2;
                this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B708(&v87->fields._multipleEntities_5__2);
                v20 = _4__this->fields.multipleStandFigureBacks;
                if ( v20 )
                {
                  v21 = 0LL;
                  v22 = 0LL;
                  v23 = 32LL;
                  while ( 1 )
                  {
                    max_length = v20->max_length;
                    if ( (int)v22 >= max_length )
                      break;
                    if ( (unsigned int)v22 >= max_length )
                      goto LABEL_104;
                    this = (MyRoomControl__LoadMultipleServant_d__366_o *)v20->m_Items[v22];
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
                    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
                    if ( !defaultMultipleServantPoses )
                      goto LABEL_83;
                    if ( (unsigned int)v22 >= defaultMultipleServantPoses->max_length )
                      goto LABEL_104;
                    if ( !this )
                      goto LABEL_83;
                    v26 = (float *)((char *)defaultMultipleServantPoses + v21);
                    v90.fields.z = v26[10] + 0.0;
                    v90.fields.y = v26[9] + 0.0;
                    v90.fields.x = flt_C0CA30[(_DWORD)v22 == 0] + v26[8];
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v90, 0LL);
                    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
                    if ( !multipleServantUsrIds )
                      goto LABEL_83;
                    if ( (unsigned int)v22 >= multipleServantUsrIds->max_length )
                      goto LABEL_104;
                    if ( !_4__this->fields.myRoomData )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__366_o *)MyRoomData__getUsrSvtData(
                                                                            (MyRoomData_o *)this,
                                                                            multipleServantUsrIds->m_Items[v22],
                                                                            v27);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UserServantEntity__getSvtId(
                                                                            (UserServantEntity_o *)this,
                                                                            0LL);
                    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
                    if ( !multipleLimitCounts )
                      goto LABEL_83;
                    if ( (unsigned int)v22 >= multipleLimitCounts->max_length )
                      goto LABEL_104;
                    v30 = multipleLimitCounts->m_Items[v22 + 1];
                    v31 = (int)this;
                    MyRoomControl__SetImageIdAndFormId(
                      _4__this,
                      (int32_t *)&formId + 1,
                      (int32_t *)&formId,
                      (int32_t)this,
                      v30,
                      0LL);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (MyRoomControl__LoadMultipleServant_d__366_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__366_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                                            (ServantScriptMultipleMaster_o *)this,
                                                                            &entity,
                                                                            SHIDWORD(formId),
                                                                            formId,
                                                                            v22 + 1,
                                                                            0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v32 = *p_multipleEntities_5__2;
                      if ( !*p_multipleEntities_5__2 )
                        goto LABEL_83;
                      v33 = entity;
                      if ( entity )
                      {
                        this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B8A0(
                                                                                entity,
                                                                                v32->obj.klass->_1.element_class);
                        if ( !this )
                        {
                          v84 = sub_1C3B9E4();
                          sub_1C3B88C(v84, 0LL);
                        }
                      }
                      if ( (unsigned int)v22 >= v32->max_length )
                        goto LABEL_104;
                      v32->m_Items[v22] = v33;
                      this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B708((char *)v32 + v23);
                    }
                    v34 = _4__this->fields.multipleStandFigureBacks;
                    if ( !v34 )
                      goto LABEL_83;
                    if ( (unsigned int)v22 >= v34->max_length )
                      goto LABEL_104;
                    v35 = v21;
                    v36 = v23;
                    v37 = _4__this;
                    v38 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v39 = p__8__1;
                      v40 = formId;
                      v41 = v34->m_Items[v22];
                      monitor = (System_Action_o *)v38[2].monitor;
                      if ( !monitor )
                      {
                        v86 = formId;
                        monitor = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                        System_Action___ctor(
                          monitor,
                          v38,
                          Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__3__,
                          0LL);
                        v38[2].monitor = monitor;
                        this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B708(&v38[2].monitor);
                        v40 = v86;
                      }
                      if ( v41 )
                      {
                        StandFigureBack__SetMyRoomStandFigure(v41, v31, v30, 1, 0, v40, 10, monitor, 0, 0LL);
                        v20 = v37->fields.multipleStandFigureBacks;
                        _4__this = v37;
                        v23 = v36 + 8;
                        ++v22;
                        v21 = v35 + 12;
                        p__8__1 = v39;
                        if ( v20 )
                          continue;
                      }
                    }
                    goto LABEL_83;
                  }
                  this = (MyRoomControl__LoadMultipleServant_d__366_o *)sub_1C3B80C(int___TypeInfo, 2LL);
                  v77 = *p_multipleEntities_5__2;
                  if ( *p_multipleEntities_5__2 )
                  {
                    v78 = v77->max_length;
                    if ( !v78 )
                      goto LABEL_104;
                    v79 = v77->m_Items[0];
                    if ( v79 )
                    {
                      if ( !this )
                        goto LABEL_83;
                      if ( !LODWORD(this->fields.__2__current) )
                        goto LABEL_104;
                      LODWORD(this->fields.__4__this) = v79->fields.depth;
                    }
                    if ( v78 <= 1 )
                      goto LABEL_104;
                    v80 = v77->m_Items[1];
                    if ( v80 )
                    {
                      if ( this )
                      {
                        if ( LODWORD(this->fields.__2__current) <= 1 )
                          goto LABEL_104;
                        HIDWORD(this->fields.__4__this) = v80->fields.depth;
LABEL_101:
                        if ( LODWORD(this->fields.__2__current) >= 2 )
                        {
                          MyRoomControl__SetLayerMultipleServant(
                            _4__this,
                            SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
                            0LL);
                          v81 = (Il2CppObject *)v87->fields.__8__1;
                          v82 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v82,
                            v81,
                            Method_MyRoomControl___c__DisplayClass366_0__LoadMultipleServant_b__0__,
                            0LL);
                          v83 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
                          UnityEngine_WaitWhile___ctor(v83, v82, 0LL);
                          v87->fields.__2__current = (Il2CppObject *)v83;
                          sub_1C3B708(&v87->fields.__2__current);
                          result = 1;
                          v87->fields.__1__state = 1;
                          return result;
                        }
LABEL_104:
                        sub_1C3B9C8(this, method);
                      }
                    }
                    else if ( this )
                    {
                      goto LABEL_101;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_83:
    sub_1C3B9C0(this, method);
  }
  v87->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.titleInfo;
  if ( !this )
    goto LABEL_83;
  TitleInfoControl__changeTitleInfo_38564436((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
  titleInfo = _4__this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)titleInfo->fields.titleImg;
  if ( !this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MyRoomControl__LoadMultipleServant_d__366_o *)_4__this->fields.multipleViewCloseButton;
  _4__this->fields.multipleViewState = 2;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v44 = _4__this->fields.multipleStandFigureBacks;
  if ( !v44 )
    goto LABEL_83;
  v45 = 4LL;
  while ( 1 )
  {
    v46 = v44->max_length;
    v47 = v45 - 4;
    if ( (int)v45 - 4 >= v46 )
      return 0;
    if ( v47 >= v46 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v44->obj.klass + v45);
    if ( !this )
      goto LABEL_83;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)StandFigureBack__GetSvtStandFigure(
                                                            (StandFigureBack_o *)this,
                                                            0,
                                                            0LL);
    if ( !this )
      goto LABEL_83;
    v48 = _4__this->fields.multipleStandFigureBacks;
    if ( !v48 )
      goto LABEL_83;
    if ( v47 >= v48->max_length )
      goto LABEL_104;
    v49 = (UnityEngine_Component_o *)*((_QWORD *)&v48->obj.klass + v45);
    if ( !v49 )
      goto LABEL_83;
    v50 = (UnityEngine_Component_o *)this->fields.__4__this;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(v49, 0LL);
    if ( !this )
      goto LABEL_83;
    *(UnityEngine_Vector3_o *)(&v51 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v53 = v52;
    v54 = (_DWORD)v45 == 4 ? -256.0 : 256.0;
    if ( !v50 )
      goto LABEL_83;
    v55 = v51;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(v50, 0LL);
    if ( !this )
      goto LABEL_83;
    LODWORD(v56) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    multipleEntities_5__2 = v87->fields._multipleEntities_5__2;
    if ( !multipleEntities_5__2 )
      goto LABEL_83;
    if ( v47 >= multipleEntities_5__2->max_length )
      goto LABEL_104;
    v58 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v45);
    v59 = v54 - v56;
    if ( v58 )
    {
      v60 = _4__this->fields.multipleStandFigureBacks;
      if ( !v60 )
        goto LABEL_83;
      if ( v47 >= v60->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v60->obj.klass + v45);
      if ( !this )
        goto LABEL_83;
      v61 = *(_DWORD *)(v58 + 28);
      v62 = *(_DWORD *)(v58 + 32);
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      *(UnityEngine_Vector3_o *)&v63 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v65 = _4__this->fields.multipleStandFigureBacks;
      if ( !v65 )
        goto LABEL_83;
      if ( v47 >= v65->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v65->obj.klass + v45);
      if ( !this )
        goto LABEL_83;
      v66 = v63;
      v67 = v64;
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      v53 = v53 + (float)v62;
      v59 = v59 + (float)v61;
      v91.fields.x = v66;
      v91.fields.y = v53;
      v91.fields.z = v67;
      v55 = v55 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v91, 0LL);
    }
    v68 = _4__this->fields.multipleStandFigureBacks;
    if ( !v68 )
      goto LABEL_83;
    if ( v47 >= v68->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__366_o *)*((_QWORD *)&v68->obj.klass + v45);
    if ( this )
    {
      this = (MyRoomControl__LoadMultipleServant_d__366_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v69 = _4__this->fields.multipleStandFigureBacks;
      if ( v69 )
      {
        v70 = v47 == v69->max_length - 1 ? (System_String_o *)StringLiteral_6871/*"GameObject.Find return null"*/ : 0LL;
        v92.fields.x = v59;
        v92.fields.y = v53;
        v92.fields.z = v55;
        MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v92, v70, 0LL);
        v44 = _4__this->fields.multipleStandFigureBacks;
        ++v45;
        if ( v44 )
          continue;
      }
    }
    goto LABEL_83;
  }
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__LoadMultipleServant_d__366_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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


void __fastcall MyRoomControl__LoadPhotoTarget_d__394___ctor(
        MyRoomControl__LoadPhotoTarget_d__394_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoTarget_d__394__MoveNext(
        MyRoomControl__LoadPhotoTarget_d__394_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoTarget_d__394_o *v2; // x19
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v25; // x22
  struct MyRoomControl___c__DisplayClass394_0_o **p__8__1; // x21
  UnityEngine_Object_o *photoMasterTexture; // x21
  MyRoomControl__LoadPhotoTarget_d__394_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_WaitForFixedUpdate_o *v30; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct PhotoStandFigureComponent_o *photoStandFigure_5__3; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  MyRoomControl__LoadPhotoTarget_d__394_o *v37; // x21
  float v38; // s0
  struct MyRoomControl___c__DisplayClass394_0_o *_8__1; // x8
  Il2CppObject *v40; // x21
  PhotoStandFigureComponent_o *v41; // x20
  System_Action_o *monitor; // x22
  Il2CppObject *v43; // x21
  System_Func_bool__o *klass; // x20
  UnityEngine_WaitWhile_o *v45; // x21
  Il2CppObject **v46; // x19
  int v47; // w8
  struct MyRoomControl___c__DisplayClass394_0_o *v48; // x23
  System_Action_o *_9__6; // x22
  PhotoStandFigureComponent_o *v50; // x21
  struct System_Int32_array *photoTargetFaceListIndex; // x8
  __int64 i_5__2; // x9
  Il2CppObject *v53; // x21
  System_Func_bool__o *v54; // x20
  UnityEngine_WaitWhile_o *v55; // x21
  struct PhotoStandFigureComponent_o *photoStaffFigure_5__5; // x8
  float v57; // s8
  float v58; // s9
  float v59; // s10
  MyRoomControl__LoadPhotoTarget_d__394_o *v60; // x21
  float v61; // s0
  struct MyRoomControl___c__DisplayClass394_0_o *v62; // x21
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x20
  System_Action_o *v64; // x22
  Il2CppObject *v65; // x20
  System_Func_bool__o *v66; // x21
  UnityEngine_WaitWhile_o *v67; // x20
  struct PhotoStandFigureComponent_array *v68; // x8
  __int64 v69; // x9
  struct PhotoStandFigureComponent_o **p_photoStaffFigure_5__5; // x20
  int32_t faceId; // w21
  struct MyRoomControl___c__DisplayClass394_0_o *v72; // x22
  System_Action_o *_9__10; // x24
  int32_t v74; // w21
  Il2CppObject *v75; // x21
  System_Func_bool__o *v76; // x20
  UnityEngine_WaitWhile_o *v77; // x21
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  __int64 v79; // x9
  struct PhotoStandFigureComponent_o **p_photoStandFigure_5__3; // x21
  const MethodInfo *v81; // x2
  int32_t ImageLimitCount_k__BackingField; // w22
  int32_t v83; // w21
  struct PhotoStandFigureComponent_o *v84; // x8
  Il2CppObject *v85; // x26
  StandFigureBack_o *photoStandFigureBack; // x24
  int32_t formId_5__4; // w23
  System_Action_o *v88; // x25
  Il2CppObject *v89; // x21
  System_Func_bool__o *v90; // x20
  UnityEngine_WaitWhile_o *v91; // x21
  struct MyRoomControl___c__DisplayClass394_0_o *v92; // x23
  struct PhotoStandFigureComponent_o *v93; // x8
  StandFigureBack_o *v94; // x20
  int32_t StandFigureImageId_k__BackingField; // w22
  System_Action_o *_9__8; // x24
  Il2CppObject *v97; // x21
  System_Func_bool__o *v98; // x20
  UnityEngine_WaitWhile_o *v99; // x21
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+18h] [xbp-78h] BYREF
  int32_t imageId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C1D618 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&System_Func_bool__TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__0__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__10__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__11__, v10);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__1__, v11);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__2__, v12);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__3__, v13);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__4__, v14);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__5__, v15);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__6__, v16);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__7__, v17);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__8__, v18);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__9__, v19);
    sub_1C3B764(&MyRoomControl___c__DisplayClass394_0_TypeInfo, v20);
    sub_1C3B764(&UnityEngine_WaitForFixedUpdate_TypeInfo, v21);
    sub_1C3B764(&UnityEngine_WaitWhile_TypeInfo, v22);
    this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B764(&StringLiteral_6870/*"GameObject requires a RigidBody2D or Collider2D component!\n"*/, v23);
    byte_4C1D618 = 1;
  }
  imageId = 0;
  costumeEntity = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v25 = (Il2CppObject *)sub_1C3B9B0(MyRoomControl___c__DisplayClass394_0_TypeInfo);
      System_Object___ctor(v25, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass394_0_o *)v25;
      p__8__1 = &v2->fields.__8__1;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v2->fields.__8__1);
      if ( !_4__this )
        goto LABEL_113;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_113;
      (*p__8__1)->fields.flag = 1;
      if ( !v2->fields.isUpdate )
        goto LABEL_64;
      photoMasterTexture = (UnityEngine_Object_o *)_4__this->fields.photoMasterTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
        goto LABEL_16;
      p_photoMasterTexture = (MyRoomControl__LoadPhotoTarget_d__394_o **)&_4__this->fields.photoMasterTexture;
      this = *p_photoMasterTexture;
      if ( !*p_photoMasterTexture )
        goto LABEL_113;
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)this, 0LL);
      this = *p_photoMasterTexture;
      if ( !*p_photoMasterTexture )
        goto LABEL_113;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
      *p_photoMasterTexture = 0LL;
      sub_1C3B708(p_photoMasterTexture);
LABEL_16:
      v30 = (UnityEngine_WaitForFixedUpdate_o *)sub_1C3B9B0(UnityEngine_WaitForFixedUpdate_TypeInfo);
      UnityEngine_WaitForFixedUpdate___ctor(v30, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v30;
      p__2__current = &v2->fields.__2__current;
      sub_1C3B708(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      method = 0LL;
      v2->fields.__1__state = -1;
      v2->fields._i_5__2 = 0;
      goto LABEL_61;
    case 2:
      photoStandFigure_5__3 = v2->fields._photoStandFigure_5__3;
      v2->fields.__1__state = -1;
      if ( !photoStandFigure_5__3 )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)photoStandFigure_5__3->fields.photoStandFigureBack;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_4__this )
        goto LABEL_113;
      x = _4__this->fields.defaultPhotoServantPos.fields.x;
      y = _4__this->fields.defaultPhotoServantPos.fields.y;
      z = _4__this->fields.defaultPhotoServantPos.fields.z;
      v37 = this;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                          _4__this,
                                                          v2->fields._i_5__2,
                                                          0LL);
      if ( !v37 )
        goto LABEL_113;
      v38 = ((unsigned __int8)this & 1) != 0 ? 1300.0 : -1812.0;
      v102.fields.x = x + v38;
      v102.fields.y = y + 0.0;
      v102.fields.z = z + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v37, v102, 0LL);
      _8__1 = v2->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_113;
      _8__1->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)v2->fields._photoStandFigure_5__3;
      if ( !this )
        goto LABEL_113;
      PhotoStandFigureComponent__GetPhotoTargetFaceList(
        (PhotoStandFigureComponent_o *)this,
        v2->fields._formId_5__4,
        0LL);
      v40 = (Il2CppObject *)v2->fields.__8__1;
      if ( !v40 )
        goto LABEL_113;
      v41 = v2->fields._photoStandFigure_5__3;
      monitor = (System_Action_o *)v40[2].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(monitor, v40, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__4__, 0LL);
        v40[2].monitor = monitor;
        this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v40[2].monitor);
      }
      if ( !v41 )
        goto LABEL_113;
      PhotoStandFigureComponent__PreLoadFormAssets(v41, monitor, 0LL);
      v43 = (Il2CppObject *)v2->fields.__8__1;
      if ( !v43 )
        goto LABEL_113;
      klass = (System_Func_bool__o *)v43[3].klass;
      if ( !klass )
      {
        klass = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(klass, v43, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__5__, 0LL);
        v43[3].klass = (Il2CppClass *)klass;
        sub_1C3B708(&v43[3]);
      }
      v45 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v45, klass, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v45;
      v46 = &v2->fields.__2__current;
      sub_1C3B708(v46);
      v47 = 3;
      goto LABEL_112;
    case 3:
      v48 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v48 )
        goto LABEL_113;
      _9__6 = v48->fields.__9__6;
      v48->fields.flag = 1;
      v50 = v2->fields._photoStandFigure_5__3;
      if ( !_9__6 )
      {
        _9__6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__6,
          (Il2CppObject *)v48,
          Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__6__,
          0LL);
        v48->fields.__9__6 = _9__6;
        this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v48->fields.__9__6);
      }
      if ( !_4__this )
        goto LABEL_113;
      photoTargetFaceListIndex = _4__this->fields.photoTargetFaceListIndex;
      if ( !photoTargetFaceListIndex )
        goto LABEL_113;
      i_5__2 = v2->fields._i_5__2;
      if ( (unsigned int)i_5__2 >= photoTargetFaceListIndex->max_length )
        goto LABEL_114;
      if ( !v50 )
        goto LABEL_113;
      PhotoStandFigureComponent__SetFacePhotoServant(v50, 0, _9__6, photoTargetFaceListIndex->m_Items[i_5__2 + 1], 0LL);
      v53 = (Il2CppObject *)v2->fields.__8__1;
      if ( !v53 )
        goto LABEL_113;
      v54 = (System_Func_bool__o *)v53[4].klass;
      if ( !v54 )
      {
        v54 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v54, v53, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__7__, 0LL);
        v53[4].klass = (Il2CppClass *)v54;
        sub_1C3B708(&v53[4]);
      }
      v55 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v55, v54, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v55;
      v46 = &v2->fields.__2__current;
      sub_1C3B708(v46);
      v47 = 4;
      goto LABEL_112;
    case 4:
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_60;
    case 5:
      photoStaffFigure_5__5 = v2->fields._photoStaffFigure_5__5;
      v2->fields.__1__state = -1;
      if ( !photoStaffFigure_5__5 )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)photoStaffFigure_5__5->fields.photoStandFigureBack;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_4__this )
        goto LABEL_113;
      v57 = _4__this->fields.defaultPhotoServantPos.fields.x;
      v58 = _4__this->fields.defaultPhotoServantPos.fields.y;
      v59 = _4__this->fields.defaultPhotoServantPos.fields.z;
      v60 = this;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                          _4__this,
                                                          v2->fields._i_5__2,
                                                          0LL);
      if ( !v60 )
        goto LABEL_113;
      if ( ((unsigned __int8)this & 1) != 0 )
        v61 = 1300.0;
      else
        v61 = -1812.0;
      v103.fields.x = v57 + v61;
      v103.fields.y = v58 + 0.0;
      v103.fields.z = v59 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v60, v103, 0LL);
      break;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_113;
      goto LABEL_69;
    default:
      return 0;
  }
  while ( 1 )
  {
LABEL_60:
    v2->fields._photoStandFigure_5__3 = 0LL;
    sub_1C3B708(&v2->fields._photoStandFigure_5__3);
    v2->fields._photoStaffFigure_5__5 = 0LL;
    this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v2->fields._photoStaffFigure_5__5);
    method = (const MethodInfo *)(unsigned int)(v2->fields._i_5__2 + 1);
    v2->fields._i_5__2 = (int)method;
LABEL_61:
    if ( !_4__this )
      goto LABEL_113;
    if ( (int)method >= 2 )
    {
      MyRoomControl__SetLayerChangeObj(_4__this, 0LL);
LABEL_64:
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)_4__this->fields.photoServantSelectMenu;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__394_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                          (UnityEngine_Behaviour_o *)this,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v62 = v2->fields.__8__1;
        if ( !v62 )
          goto LABEL_113;
        v62->fields.flag = 1;
        photoServantSelectMenu = _4__this->fields.photoServantSelectMenu;
        v64 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          v64,
          (Il2CppObject *)v62,
          Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__0__,
          0LL);
        if ( !photoServantSelectMenu )
          goto LABEL_113;
        PhotoServantSelectMenu__Close(photoServantSelectMenu, v64, 0LL);
        v65 = (Il2CppObject *)v2->fields.__8__1;
        v66 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v66, v65, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__1__, 0LL);
        v67 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v67, v66, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v67;
        v46 = &v2->fields.__2__current;
        sub_1C3B708(v46);
        v47 = 7;
        goto LABEL_112;
      }
LABEL_69:
      _4__this->fields.photoState = 2;
      MyRoomControl__FadeInPhotoTarget(_4__this, (System_String_o *)StringLiteral_6870/*"GameObject requires a RigidBody2D or Collider2D component!\n"*/, 0, 0LL);
      return 0;
    }
    this = (MyRoomControl__LoadPhotoTarget_d__394_o *)_4__this->fields.photoTargetList;
    if ( !this )
      goto LABEL_113;
    this = (MyRoomControl__LoadPhotoTarget_d__394_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)this,
                                                        (int32_t)method,
                                                        (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    if ( (_DWORD)this == 2 )
      break;
    if ( (_DWORD)this == 1 )
    {
      v72 = v2->fields.__8__1;
      if ( !v72 )
        goto LABEL_113;
      _9__10 = v72->fields.__9__10;
      v72->fields.flag = 1;
      v74 = v2->fields._i_5__2;
      if ( !_9__10 )
      {
        _9__10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__10,
          (Il2CppObject *)v72,
          Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__10__,
          0LL);
        v72->fields.__9__10 = _9__10;
        sub_1C3B708(&v72->fields.__9__10);
      }
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v74, _9__10, 0LL);
      v75 = (Il2CppObject *)v2->fields.__8__1;
      if ( !v75 )
        goto LABEL_113;
      v76 = (System_Func_bool__o *)v75[6].klass;
      if ( !v76 )
      {
        v76 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v76, v75, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__11__, 0LL);
        v75[6].klass = (Il2CppClass *)v76;
        sub_1C3B708(&v75[6]);
      }
      v77 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v77, v76, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v77;
      v46 = &v2->fields.__2__current;
      sub_1C3B708(v46);
      v47 = 6;
      goto LABEL_112;
    }
    if ( !(_DWORD)this )
    {
      photoStandFigures = _4__this->fields.photoStandFigures;
      if ( !photoStandFigures )
        goto LABEL_113;
      v79 = v2->fields._i_5__2;
      if ( (unsigned int)v79 < photoStandFigures->max_length )
      {
        v2->fields._photoStandFigure_5__3 = photoStandFigures->m_Items[v79];
        p_photoStandFigure_5__3 = &v2->fields._photoStandFigure_5__3;
        this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v2->fields._photoStandFigure_5__3);
        if ( !v2->fields._photoStandFigure_5__3 )
          goto LABEL_113;
        if ( !_4__this->fields.myRoomData )
          goto LABEL_113;
        this = (MyRoomControl__LoadPhotoTarget_d__394_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            v2->fields._photoStandFigure_5__3->fields._UserSvtId_k__BackingField,
                                                            v81);
        if ( !this )
          goto LABEL_113;
        this = (MyRoomControl__LoadPhotoTarget_d__394_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
        if ( !*p_photoStandFigure_5__3 )
          goto LABEL_113;
        ImageLimitCount_k__BackingField = (*p_photoStandFigure_5__3)->fields._ImageLimitCount_k__BackingField;
        v83 = (int)this;
        MyRoomControl__SetImageIdAndFormId(
          _4__this,
          &imageId,
          &v2->fields._formId_5__4,
          (int32_t)this,
          ImageLimitCount_k__BackingField,
          0LL);
        v84 = v2->fields._photoStandFigure_5__3;
        if ( !v84 )
          goto LABEL_113;
        v84->fields._StandFigureImageId_k__BackingField = imageId;
        v85 = (Il2CppObject *)v2->fields.__8__1;
        if ( !v85 )
          goto LABEL_113;
        photoStandFigureBack = v84->fields.photoStandFigureBack;
        formId_5__4 = v2->fields._formId_5__4;
        v88 = (System_Action_o *)v85[1].monitor;
        if ( !v88 )
        {
          v88 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(v88, v85, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__2__, 0LL);
          v85[1].monitor = v88;
          this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v85[1].monitor);
        }
        if ( !photoStandFigureBack )
          goto LABEL_113;
        StandFigureBack__SetMyRoomStandFigure(
          photoStandFigureBack,
          v83,
          ImageLimitCount_k__BackingField,
          1,
          0,
          formId_5__4,
          10,
          v88,
          !_4__this->fields.isOneShot,
          0LL);
        v89 = (Il2CppObject *)v2->fields.__8__1;
        if ( !v89 )
          goto LABEL_113;
        v90 = (System_Func_bool__o *)v89[2].klass;
        if ( !v90 )
        {
          v90 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(v90, v89, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__3__, 0LL);
          v89[2].klass = (Il2CppClass *)v90;
          sub_1C3B708(&v89[2]);
        }
        v91 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v91, v90, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v91;
        v46 = &v2->fields.__2__current;
        sub_1C3B708(v46);
        v47 = 2;
        goto LABEL_112;
      }
LABEL_114:
      sub_1C3B9C8(this, method);
    }
  }
  v68 = _4__this->fields.photoStandFigures;
  if ( !v68 )
    goto LABEL_113;
  v69 = v2->fields._i_5__2;
  if ( (unsigned int)v69 >= v68->max_length )
    goto LABEL_114;
  v2->fields._photoStaffFigure_5__5 = v68->m_Items[v69];
  p_photoStaffFigure_5__5 = &v2->fields._photoStaffFigure_5__5;
  sub_1C3B708(&v2->fields._photoStaffFigure_5__5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl__LoadPhotoTarget_d__394_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !*p_photoStaffFigure_5__5 || !this )
    goto LABEL_113;
  this = (MyRoomControl__LoadPhotoTarget_d__394_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                      (StaffPhotoCostumeMaster_o *)this,
                                                      &costumeEntity,
                                                      (*p_photoStaffFigure_5__5)->fields._StandFigureImageId_k__BackingField,
                                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( costumeEntity )
    {
      faceId = costumeEntity->fields.faceId;
      goto LABEL_103;
    }
    goto LABEL_113;
  }
  faceId = 0;
LABEL_103:
  v92 = v2->fields.__8__1;
  if ( !v92 )
    goto LABEL_113;
  v92->fields.flag = 1;
  v93 = *p_photoStaffFigure_5__5;
  if ( !*p_photoStaffFigure_5__5 )
    goto LABEL_113;
  v94 = v93->fields.photoStandFigureBack;
  StandFigureImageId_k__BackingField = v93->fields._StandFigureImageId_k__BackingField;
  _9__8 = v92->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__8,
      (Il2CppObject *)v92,
      Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__8__,
      0LL);
    v92->fields.__9__8 = _9__8;
    this = (MyRoomControl__LoadPhotoTarget_d__394_o *)sub_1C3B708(&v92->fields.__9__8);
  }
  if ( !v94
    || (StandFigureBack__SetMyRoomStandFigureForImageId(
          v94,
          StandFigureImageId_k__BackingField,
          1,
          faceId,
          10,
          _9__8,
          0LL),
        (v97 = (Il2CppObject *)v2->fields.__8__1) == 0LL) )
  {
LABEL_113:
    sub_1C3B9C0(this, method);
  }
  v98 = (System_Func_bool__o *)v97[5].klass;
  if ( !v98 )
  {
    v98 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v98, v97, Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoTarget_b__9__, 0LL);
    v97[5].klass = (Il2CppClass *)v98;
    sub_1C3B708(&v97[5]);
  }
  v99 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v99, v98, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v99;
  v46 = &v2->fields.__2__current;
  sub_1C3B708(v46);
  v47 = 5;
LABEL_112:
  *((_DWORD *)v46 - 2) = v47;
  return 1;
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoTarget_d__394__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoTarget_d__394_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoTarget_d__394__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoTarget_d__394_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__LoadPhotoTarget_d__394_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoTarget_d__394__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoTarget_d__394_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoTarget_d__394__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoTarget_d__394_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__405___ctor(
        MyRoomControl__StartCameraEffect_d__405_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__405__MoveNext(
        MyRoomControl__StartCameraEffect_d__405_o *this,
        const MethodInfo *method)
{
  MyRoomControl__StartCameraEffect_d__405_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_WaitForSeconds_o *v11; // x19
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  int32_t v14; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v16; // s0
  __int64 v17; // x1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *v19; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  Il2CppObject **v21; // x20

  v2 = this;
  if ( (byte_4C1D619 & 1) == 0 )
  {
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    this = (MyRoomControl__StartCameraEffect_d__405_o *)sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4C1D619 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.takingPhotoFrameSprite;
    if ( !this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__405_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isOneShot, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.takingPhotoFrameWideSprite;
    if ( !this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__405_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !_4__this->fields.isOneShot, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    v14 = _4__this->fields.isOneShot ? 362 : 870;
    UIWidget__set_width((UIWidget_o *)this, v14, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16 = 11.0;
    if ( !_4__this->fields.isOneShot )
      v16 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v16, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_4C1C511 )
    {
      sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4C1C511 = 1;
    }
    GameObjectExtensions__SetLocalPosition(
      photoCampaignProduction,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__405_o *)TweenAlpha__Begin(v19, 0.4, 0.0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__405_o *)titleInfo->fields.backBtn;
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    MyRoomControl__SetPhotoCampaignUi(_4__this, 1, 0LL);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.shutterEffect;
        if ( this )
        {
          photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Instantiate_object__50818788(
            photoCampaignShutterEffect,
            transform,
            (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
          GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
          this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoCampaignProduction;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoFrameSprite;
            if ( this )
            {
              this = (MyRoomControl__StartCameraEffect_d__405_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoFrameWideSprite;
                if ( this )
                {
                  this = (MyRoomControl__StartCameraEffect_d__405_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    this = (MyRoomControl__StartCameraEffect_d__405_o *)_4__this->fields.photoCampaignFadeSprite;
                    if ( this )
                    {
                      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                      GameObjectExtensions__SafeGetComponent_object_(
                        v10,
                        (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
                      v11 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
                      UnityEngine_WaitForSeconds___ctor(v11, 0.066, 0LL);
                      v2->fields.__2__current = (Il2CppObject *)v11;
                      p__2__current = &v2->fields.__2__current;
                      sub_1C3B708(p__2__current);
                      result = 1;
                      *((_DWORD *)p__2__current - 2) = 1;
                      return result;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C3B9C0(this, method);
    }
    return 0;
  }
  v2->fields.__2__current = 0LL;
  v21 = &v2->fields.__2__current;
  *((_DWORD *)v21 - 2) = -1;
  sub_1C3B708(v21);
  *((_DWORD *)v21 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__405__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__405_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__405__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__405_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__StartCameraEffect_d__405_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__405__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__405_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__405__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__405_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1D5F2 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomControl___c_TypeInfo, v1);
    byte_4C1D5F2 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v2;
  sub_1C3B708(MyRoomControl___c_TypeInfo->static_fields);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__306_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D5F5 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D5F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoadPhotoAsset_b__386_0(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (MyRoomControl___c_o *)x->fields.photoStandFigureBack) == 0LL )
    sub_1C3B9C0(this, x);
  StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__226_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D5F4 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D5F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__317_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D5F6 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4C1D5F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


void __fastcall MyRoomControl___c___HidePhotoUi_b__422_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4C1D5F9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C1D5F9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v5);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall MyRoomControl___c___OnClickDispPhotoUi_b__423_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4C1D5FA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C1D5FA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v5);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
}


void __fastcall MyRoomControl___c___SetLayerChangeObj_b__397_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C1D5F7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C1D5F7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1C3B9C0(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
}


void __fastcall MyRoomControl___c___TransitionMyRoomTop_b__410_1(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  PhotoStandFigureComponent__Init(x, 0LL);
}


void __fastcall MyRoomControl___c___TransitionMyRoomTop_b__410_2(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C1D5F8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C1D5F8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1C3B9C0(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
}


void __fastcall MyRoomControl___c___initMyRoom_b__204_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___initMyRoom_b__204_1(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (MyRoomControl___c_o *)x->fields.photoStandFigureBack) == 0LL )
    sub_1C3B9C0(this, x);
  StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__225_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D5F3 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D5F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass224_0___ctor(
        MyRoomControl___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass224_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(this, method);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass228_0___ctor(
        MyRoomControl___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass228_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass228_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct MyRoomControl_o *v6; // x8
  struct MyRoomControl_o *v7; // x8
  struct MyRoomControl_o *v8; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22

  v2 = this;
  if ( (byte_4C1D5FB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass228_0_o *)sub_1C3B764(
                                                       &Method_MyRoomControl___c__DisplayClass228_0__SetMyRoomStandFigure_b__1__,
                                                       v3);
    byte_4C1D5FB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass228_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  this[1].fields.__9__1 = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  sub_1C3B708(&this[1].fields.__9__1);
  this = (MyRoomControl___c__DisplayClass228_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[19].fields.__9__2, 0, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass228_0_o *)v6->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6->fields.isExistVoiceData, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass228_0_o *)v7->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v7->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass228_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[19].klass) )
    MyRoomControl__setNormalFace_32365084((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_20;
  favoriteChangeComp = v8->fields.favoriteChangeComp;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MyRoomControl___c__DisplayClass228_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    this = (MyRoomControl___c__DisplayClass228_0_o *)sub_1C3B708(&v2->fields.__9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1C3B9C0(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass228_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass228_0_o *this,
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

  if ( (byte_4C1D5FC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass228_0__SetMyRoomStandFigure_b__2__, v3);
    sub_1C3B764(&StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/, v4);
    byte_4C1D5FC = 1;
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
      (System_String_o *)StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/,
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
            _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass228_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _4__this = (MyRoomControl_o *)sub_1C3B708(&this->fields.__9__2);
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
    sub_1C3B9C0(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_30;
  v20->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass228_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x0
  _BOOL4 isHeroine; // w8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_1C3B9C0(_4__this, v3);
  isHeroine = _4__this->fields.isHeroine;
  _4__this->fields.isSvtLoading = 0;
  if ( isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass229_0___ctor(
        MyRoomControl___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass229_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass229_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass229_0_o *)_4__this->fields.svtClickCollider) == 0LL)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass229_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0LL),
        !voicePlayBtn) )
  {
    sub_1C3B9C0(this, method);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass230_0___ctor(
        MyRoomControl___c__DisplayClass230_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass230_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass230_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass230_0_o *v4; // x19
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v7; // x8
  StandFigureBack_o *standFigureBack; // x20
  int32_t servantId; // w21
  int32_t imageLimitCount; // w22
  int32_t formId; // w23
  System_Action_o *v12; // x24

  v4 = this;
  if ( (byte_4C1D5FE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, assetData);
    this = (MyRoomControl___c__DisplayClass230_0_o *)sub_1C3B764(
                                                       &Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_g__OnEnd_0__,
                                                       v5);
    byte_4C1D5FE = 1;
  }
  if ( assetData )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_9;
    _4__this->fields.combineAssetData = assetData;
    this = (MyRoomControl___c__DisplayClass230_0_o *)sub_1C3B708(&_4__this->fields.combineAssetData);
  }
  v7 = v4->fields.__4__this;
  if ( !v7
    || (standFigureBack = v7->fields.standFigureBack,
        servantId = v4->fields.servantId,
        imageLimitCount = v4->fields.imageLimitCount,
        formId = v4->fields.formId,
        v12 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_g__OnEnd_0__,
          0LL),
        !standFigureBack) )
  {
LABEL_9:
    sub_1C3B9C0(this, assetData);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, imageLimitCount, 1, 0, formId, 10, v12, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass230_0___SetMaterialSvtFigure_b__2(
        MyRoomControl___c__DisplayClass230_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_1C3B9C0(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass230_0___SetMaterialSvtFigure_g__OnEnd_0(
        MyRoomControl___c__DisplayClass230_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass230_0_o *v2; // x19
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
  System_Action_o *v16; // x21
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
  if ( (byte_4C1D5FD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_b__2__, v3);
    this = (MyRoomControl___c__DisplayClass230_0_o *)sub_1C3B764(&StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/, v4);
    byte_4C1D5FD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_44;
  *(_QWORD *)&this[1].fields.formId = standFigureBack->fields.standFigureCollectList;
  sub_1C3B708(&this[1].fields.formId);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)v7->fields.moveBtnObj;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)v8->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)v9->fields.helpBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)v10->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)v11->fields.svtClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass230_0_o *)v12->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass230_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  if ( LOBYTE(this[19].klass) )
    MyRoomControl__setNormalFace_32365084((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass230_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  end_act = (int)this[18].fields.end_act;
  if ( end_act == 1 )
  {
    this = (MyRoomControl___c__DisplayClass230_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_44;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v17 = v2->fields.__4__this;
    if ( !v17 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass230_0_o *)v17->fields.standFigureBack;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass230_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    this = *(MyRoomControl___c__DisplayClass230_0_o **)&this->fields.servantId;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass230_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v19 = v2->fields.__4__this;
    if ( !v19 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass230_0_o *)v19->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v20 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass230_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v22 = v2->fields.__4__this;
    if ( !v22 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass230_0_o *)v22->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v23 = v21;
    this = (MyRoomControl___c__DisplayClass230_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)(&v24 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass230_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_44;
    v25 = -v20;
    v26 = v23;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].monitor,
      *(UnityEngine_Vector3_o *)(&v24 - 2),
      (System_String_o *)StringLiteral_11499/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/,
      0LL);
  }
  else if ( !end_act )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v14 = v2->fields.__4__this;
    if ( v14 )
    {
      v15 = v14->fields.standFigureBack;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v2,
        Method_MyRoomControl___c__DisplayClass230_0__SetMaterialSvtFigure_b__2__,
        0LL);
      if ( v15 )
      {
        StandFigureBack__Fadein(v15, v16, 0LL);
        return;
      }
    }
LABEL_44:
    sub_1C3B9C0(this, method);
  }
  ActionExtensions__Call(v2->fields.end_act, 0LL);
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_44;
  v27->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass237_0___ctor(
        MyRoomControl___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass237_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass237_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v5; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v8; // x8

  v2 = this;
  if ( (byte_4C1D5FF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl___c__DisplayClass237_0_o *)sub_1C3B764(&StringLiteral_8438/*"MENU_QUEST_START"*/, v3);
    byte_4C1D5FF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (MyRoomControl___c__DisplayClass237_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_11;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5
    || (this = (MyRoomControl___c__DisplayClass237_0_o *)v5->fields.imageIdList) == 0LL
    || (svtCtr = v5->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass237_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v5->fields.figureSvtDispIdx,
                                                           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0LL),
        (v8 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass237_0_o *)v8->fields.myRoomFsm) == 0LL )
  {
LABEL_11:
    sub_1C3B9C0(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8438/*"MENU_QUEST_START"*/, 0LL);
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
  MyRoomControl___c__DisplayClass310_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v7; // x8

  v2 = this;
  if ( (byte_4C1D600 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass310_0_o *)sub_1C3B764(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       method);
    byte_4C1D600 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass310_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_10;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (MyRoomControl___c__DisplayClass310_0_o *)v4->fields.imageIdList) == 0LL
    || (svtCtr = v4->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass310_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.figureSvtDispIdx,
                                                           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0LL),
        (v7 = v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1C3B9C0(this, method);
  }
  v7->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass310_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass310_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4C1D601 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D601 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
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
  this[2].monitor = bondsStandFigureBack->fields.standFigureCollectList;
  sub_1C3B708(&this[2].monitor);
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
    || (this = *(MyRoomControl___c__DisplayClass329_0_o **)&this->fields.createStandEnd) == 0LL
    || (this = (MyRoomControl___c__DisplayClass329_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(this, method);
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
  struct System_Action_o *callback; // x8
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass370_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass370_0_o *this,
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
    sub_1C3B9C0(0LL, method);
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
  AssetData_o *v3; // x20
  MyRoomControl___c__DisplayClass381_0_o *v4; // x19
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
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass381_0_o **p_fields; // x23
  Il2CppObject *Object_object__50142412; // x21
  Il2CppObject *Component_object; // x21
  MyRoomControl___c__DisplayClass381_0_o *v33; // x8
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x21
  MyRoomControl___c__DisplayClass381_0_o *v36; // x8
  MyRoomControl___c__DisplayClass381_0_o *v37; // x21
  MyRoomControl___c__DisplayClass381_0_o *v38; // x21
  MyRoomControl___c__DisplayClass381_0_o *v39; // x26
  Il2CppObject *v40; // x21
  UnityEngine_Transform_o *transform; // x22
  MyRoomControl___c__DisplayClass381_0_o *v42; // x22
  Il2CppObject *v43; // x21
  UnityEngine_Transform_o *v44; // x0
  MyRoomControl___c__DisplayClass381_0_o *v45; // x8
  MyRoomControl___c__DisplayClass381_0_o *v46; // x22
  Il2CppObject *v47; // x21
  UnityEngine_Transform_o *v48; // x0
  MyRoomControl___c__DisplayClass381_0_o *v49; // x8
  MyRoomControl___c__DisplayClass381_0_o *v50; // x21
  MyRoomControl___c__DisplayClass381_0_o *v51; // x22
  Il2CppObject *v52; // x21
  UnityEngine_Transform_o *v53; // x0
  MyRoomControl___c__DisplayClass381_0_o *v54; // x22
  Il2CppObject *v55; // x21
  UnityEngine_Transform_o *v56; // x0
  MyRoomControl___c__DisplayClass381_0_o *v57; // x8
  MyRoomControl___c__DisplayClass381_0_o *v58; // x21

  v3 = assetData;
  v4 = this;
  if ( (byte_4C1D602 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, assetData);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffCostumeSelectDialog___, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffSelectDialog___, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameSelectDialog___, v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoLayerChangeComponent___, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v11);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v12);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C3B764(&StringLiteral_20671/*"knockdownNum"*/, v16);
    sub_1C3B764(&StringLiteral_8525/*"MOTION_501"*/, v17);
    sub_1C3B764(&StringLiteral_10842/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/, v18);
    sub_1C3B764(&StringLiteral_9085/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v19);
    sub_1C3B764(&StringLiteral_5491/*"EVENT_COOLTIME_REMAIN"*/, v20);
    sub_1C3B764(&StringLiteral_17545/*"charaMoveFSR"*/, v21);
    sub_1C3B764(&StringLiteral_10837/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v22);
    sub_1C3B764(&StringLiteral_10839/*"RESULT_BOUNDS_GETVOICE"*/, v23);
    sub_1C3B764(&StringLiteral_17544/*"charaMoveFSL"*/, v24);
    sub_1C3B764(&StringLiteral_10912/*"RarityAnimation"*/, v25);
    sub_1C3B764(&StringLiteral_10838/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/, v26);
    sub_1C3B764(&StringLiteral_5492/*"EVENT_CUSHION_VALUE"*/, v27);
    this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B764(&StringLiteral_10844/*"RESULT_BOUNDS_POWERUP"*/, v28);
    byte_4C1D602 = 1;
  }
  p_fields = (MyRoomControl___c__DisplayClass381_0_o **)&v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_68;
  _4__this->fields.photoCampaignAssetData = v3;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&_4__this->fields.photoCampaignAssetData);
  if ( !v3 )
    goto LABEL_68;
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              v3,
                              (System_String_o *)StringLiteral_5491/*"EVENT_COOLTIME_REMAIN"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__50142412,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__50142412 )
      goto LABEL_68;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__50142412,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v33 = *p_fields;
      if ( !*p_fields )
        goto LABEL_68;
      v33[43].fields.__4__this = (struct MyRoomControl_o *)Component_object;
      sub_1C3B708(&v33[43].fields);
    }
  }
  this = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_10912/*"RarityAnimation"*/,
    0LL);
  this = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].klass,
    (System_String_o *)StringLiteral_20671/*"knockdownNum"*/,
    0LL);
  v34 = AssetData__GetObject_object__50142412(
          v3,
          (System_String_o *)StringLiteral_5492/*"EVENT_CUSHION_VALUE"*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v34,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_68;
    v35 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v34,
            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v35,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v36 = *p_fields;
      if ( !*p_fields )
        goto LABEL_68;
      v36[43].fields.callBack = (struct System_Action_o *)v35;
      sub_1C3B708(&v36[43].fields.callBack);
    }
  }
  v37 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17544/*"charaMoveFSL"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v37 )
    goto LABEL_68;
  v37[38].klass = (MyRoomControl___c__DisplayClass381_0_c *)this;
  sub_1C3B708(&v37[38]);
  v38 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17545/*"charaMoveFSR"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v38 )
    goto LABEL_68;
  v38[38].fields.__4__this = (struct MyRoomControl_o *)this;
  sub_1C3B708(&v38[38].fields);
  v39 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10844/*"RESULT_BOUNDS_POWERUP"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !*p_fields )
    goto LABEL_68;
  v40 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                     v40,
                                                     transform,
                                                     (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v39 )
    goto LABEL_68;
  v39[40].monitor = this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&v39[40].monitor);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[40].monitor;
  if ( !this )
    goto LABEL_68;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v42 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10838/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_TITLE"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !*p_fields )
    goto LABEL_68;
  v43 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                     v43,
                                                     v44,
                                                     (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffSelectDialog___);
  if ( !v42 )
    goto LABEL_68;
  v42[40].fields.__4__this = (struct MyRoomControl_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&v42[40].fields);
  v45 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v45[40].fields.__4__this;
  if ( !this )
    goto LABEL_68;
  PhotoCampaignStaffSelectDialog__Init(
    (PhotoCampaignStaffSelectDialog_o *)this,
    (UIAtlas_o *)v45[43].fields.__4__this,
    0LL);
  v46 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10837/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !*p_fields )
    goto LABEL_68;
  v47 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                     v47,
                                                     v48,
                                                     (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffCostumeSelectDialog___);
  if ( !v46 )
    goto LABEL_68;
  v46[40].fields.callBack = (struct System_Action_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&v46[40].fields.callBack);
  v49 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v49[40].fields.callBack;
  if ( !this )
    goto LABEL_68;
  PhotoCampaignStaffCostumeSelectDialog__Init(
    (PhotoCampaignStaffCostumeSelectDialog_o *)this,
    (UIAtlas_o *)v49[43].fields.__4__this,
    0LL);
  v50 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10842/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                     (Il2CppObject *)this,
                                                     (UnityEngine_Transform_o *)(*p_fields)[19].fields.__4__this,
                                                     (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v50 )
    goto LABEL_68;
  v50[41].klass = (MyRoomControl___c__DisplayClass381_0_c *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&v50[41]);
  assetData = (AssetData_o *)*p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = *(MyRoomControl___c__DisplayClass381_0_o **)&assetData[14].fields.isLoadResources;
  if ( !this )
    goto LABEL_68;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v51 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_9085/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !*p_fields )
    goto LABEL_68;
  v52 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                     v52,
                                                     v53,
                                                     (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v51 )
    goto LABEL_68;
  v51[41].monitor = this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&v51[41].monitor);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[41].monitor;
  if ( !this )
    goto LABEL_68;
  MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL);
  v54 = *p_fields;
  this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10839/*"RESULT_BOUNDS_GETVOICE"*/,
                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !*p_fields )
    goto LABEL_68;
  v55 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v56 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                     v55,
                                                     v56,
                                                     (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameSelectDialog___);
  if ( !v54 )
    goto LABEL_68;
  v54[41].fields.__4__this = (struct MyRoomControl_o *)this;
  this = (MyRoomControl___c__DisplayClass381_0_o *)sub_1C3B708(&v54[41].fields);
  v57 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass381_0_o *)v57[41].fields.__4__this;
  if ( !this
    || (PhotoFrameSelectDialog__Init((PhotoFrameSelectDialog_o *)this, (UIAtlas_o *)v57[43].fields.callBack, 0LL),
        v58 = *p_fields,
        (this = (MyRoomControl___c__DisplayClass381_0_o *)AssetData__GetObject_object__50142412(
                                                            v3,
                                                            (System_String_o *)StringLiteral_8525/*"MOTION_501"*/,
                                                            (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856)) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass381_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoLayerChangeComponent___),
        !v58)
    || (v58[44].klass = (MyRoomControl___c__DisplayClass381_0_c *)this,
        sub_1C3B708(&v58[44]),
        (this = (MyRoomControl___c__DisplayClass381_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_68:
    sub_1C3B9C0(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callBack, 0LL);
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
  if ( (byte_4C1D603 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1C3B764(&AssetManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetData__Add__, v7);
    this = (MyRoomControl___c__DisplayClass382_0_o *)sub_1C3B764(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v8);
    byte_4C1D603 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass382_0_o *)_4__this->fields.masterEquipAssetData;
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
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v13[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass382_0_o *)sub_1C3B708(v13 + 4);
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
            this = (MyRoomControl___c__DisplayClass382_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                               v20,
                                                               0LL);
            if ( assetData )
            {
              v19 = (int)this;
              this = (MyRoomControl___c__DisplayClass382_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2FD1BC4 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v19,
                  (Il2CppObject *)this,
                  (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C3B9C0(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39213104(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass382_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass382_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass382_0_o *v4; // x20
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
  if ( (byte_4C1D604 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1C3B764(&AssetManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetData__Add__, v7);
    this = (MyRoomControl___c__DisplayClass382_0_o *)sub_1C3B764(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v8);
    byte_4C1D604 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass382_0_o *)_4__this->fields.masterEquipAssetData;
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
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v13[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass382_0_o *)sub_1C3B708(v13 + 4);
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
            this = (MyRoomControl___c__DisplayClass382_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                               v20,
                                                               0LL);
            if ( assetData )
            {
              v19 = (int)this;
              this = (MyRoomControl___c__DisplayClass382_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2FD1BC4 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v19,
                  (Il2CppObject *)this,
                  (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C3B9C0(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39213104(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass387_0___ctor(
        MyRoomControl___c__DisplayClass387_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass387_0___OpenTargetSelectDialog_b__0(
        MyRoomControl___c__DisplayClass387_0_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass387_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct MyRoomControl_o *_4__this; // x8
  _BOOL4 isChangeTarget; // w9
  int v13; // w10
  int32_t v14; // w20
  int64_t v15; // x21
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  PhotoStandFigureComponent_o *v17; // x9
  int64_t UserSvtId_k__BackingField; // x22
  System_Action_int__int__o *_9__2; // x21
  MyRoomControl_o *v20; // x20
  System_Action_o *_9__3; // x22
  System_Collections_Generic_List_T__o *v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  struct System_Int64_array *temporaryPhotoUserSvtId; // x10
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x11
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x23
  System_Action_long__int__o *_9__1; // x25

  v4 = this;
  if ( (byte_4C1D605 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_long__int__TypeInfo, *(_QWORD *)&targetType);
    sub_1C3B764(&System_Action_int__int__TypeInfo, v5);
    sub_1C3B764(&System_Action_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, v7);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__1__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__2__, v9);
    this = (MyRoomControl___c__DisplayClass387_0_o *)sub_1C3B764(
                                                       &Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__3__,
                                                       v10);
    byte_4C1D605 = 1;
  }
  switch ( targetType )
  {
    case 0:
      _4__this = v4->fields.__4__this;
      if ( !_4__this )
        goto LABEL_39;
      isChangeTarget = v4->fields.isChangeTarget;
      if ( v4->fields.isChangeTarget )
        v13 = 7;
      else
        v13 = 1;
      _4__this->fields.photoState = v13;
      if ( v4->fields.anotherTargetType )
      {
        v14 = -1;
        v15 = -1LL;
        if ( isChangeTarget )
          goto LABEL_10;
LABEL_34:
        UserSvtId_k__BackingField = -1LL;
        goto LABEL_35;
      }
      temporaryPhotoUserSvtId = _4__this->fields.temporaryPhotoUserSvtId;
      if ( !temporaryPhotoUserSvtId )
        goto LABEL_39;
      if ( !temporaryPhotoUserSvtId->max_length )
        goto LABEL_40;
      temporaryPhotoSvtLimitCount = _4__this->fields.temporaryPhotoSvtLimitCount;
      if ( !temporaryPhotoSvtLimitCount )
        goto LABEL_39;
      if ( !temporaryPhotoSvtLimitCount->max_length )
LABEL_40:
        sub_1C3B9C8(this, *(_QWORD *)&targetType);
      v15 = temporaryPhotoUserSvtId->m_Items[0];
      v14 = temporaryPhotoSvtLimitCount->m_Items[1];
      if ( !isChangeTarget )
        goto LABEL_34;
LABEL_10:
      photoStandFigures = _4__this->fields.photoStandFigures;
      if ( !photoStandFigures )
        goto LABEL_39;
      if ( !photoStandFigures->max_length )
        goto LABEL_40;
      v17 = photoStandFigures->m_Items[0];
      if ( !v17 )
        goto LABEL_39;
      UserSvtId_k__BackingField = v17->fields._UserSvtId_k__BackingField;
LABEL_35:
      photoServantSelectMenu = _4__this->fields.photoServantSelectMenu;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_long__int__o *)sub_1C3B9B0(System_Action_long__int__TypeInfo);
        System_Action_long__int____ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__1__,
          0LL);
        v4->fields.__9__1 = _9__1;
        this = (MyRoomControl___c__DisplayClass387_0_o *)sub_1C3B708(&v4->fields.__9__1);
      }
      if ( !photoServantSelectMenu )
LABEL_39:
        sub_1C3B9C0(this, *(_QWORD *)&targetType);
      PhotoServantSelectMenu__Open(photoServantSelectMenu, _9__1, v15, v14, UserSvtId_k__BackingField, 0LL);
      return;
    case 1:
      _9__2 = v4->fields.__9__2;
      v20 = v4->fields.__4__this;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_int__int__o *)sub_1C3B9B0(System_Action_int__int__TypeInfo);
        System_Action_int__int____ctor(
          _9__2,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__2__,
          0LL);
        v4->fields.__9__2 = _9__2;
        this = (MyRoomControl___c__DisplayClass387_0_o *)sub_1C3B708(&v4->fields.__9__2);
      }
      _9__3 = v4->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass387_0__OpenTargetSelectDialog_b__3__,
          0LL);
        v4->fields.__9__3 = _9__3;
        this = (MyRoomControl___c__DisplayClass387_0_o *)sub_1C3B708(&v4->fields.__9__3);
      }
      if ( !v20 )
        goto LABEL_39;
      MyRoomControl__OpenMasterEquipSettingDialog(v20, _9__2, _9__3, 0LL);
      return;
    case 2:
      this = (MyRoomControl___c__DisplayClass387_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_39;
      MyRoomControl__OpenStaffSelectDialog(
        (MyRoomControl_o *)this,
        v4->fields.anotherTargetType,
        v4->fields.isChangeTarget,
        0LL);
      return;
    case 3:
      this = (MyRoomControl___c__DisplayClass387_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_39;
      v22 = (System_Collections_Generic_List_T__o *)this[20].fields.__9__3;
      if ( !v22 )
        goto LABEL_39;
      items = v22->fields._items;
      v24 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
      ++v22->fields._version;
      if ( !items )
        goto LABEL_39;
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v22,
          3,
          *(const MethodInfo_3671474 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        this = (MyRoomControl___c__DisplayClass387_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_39;
      }
      else
      {
        v22->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 3;
      }
      MyRoomControl__ConfirmTargetSelectState((MyRoomControl_o *)this, v4->fields.isChangeTarget, 0LL);
      return;
    default:
      return;
  }
}


void __fastcall MyRoomControl___c__DisplayClass387_0___OpenTargetSelectDialog_b__1(
        MyRoomControl___c__DisplayClass387_0_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct MyRoomControl_o *_4__this; // x0
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v11; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v13; // x9
  struct System_Int64_array *temporaryPhotoUserSvtId; // x8
  int v15; // w9
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x8

  if ( (byte_4C1D606 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, userSvtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v7);
    byte_4C1D606 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_15;
  items = temporaryPhotoTargetList->fields._items;
  v11 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
  ++temporaryPhotoTargetList->fields._version;
  if ( !items )
    goto LABEL_15;
  size = temporaryPhotoTargetList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      temporaryPhotoTargetList,
      0,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
  }
  else
  {
    temporaryPhotoTargetList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
  }
  v13 = _4__this->fields.temporaryPhotoTargetList;
  if ( !v13 )
    goto LABEL_15;
  temporaryPhotoUserSvtId = _4__this->fields.temporaryPhotoUserSvtId;
  if ( !temporaryPhotoUserSvtId )
    goto LABEL_15;
  v15 = v13->fields._size - 1;
  if ( v15 >= temporaryPhotoUserSvtId->max_length )
    goto LABEL_16;
  temporaryPhotoUserSvtId->m_Items[v15] = userSvtId;
  temporaryPhotoSvtLimitCount = _4__this->fields.temporaryPhotoSvtLimitCount;
  if ( !temporaryPhotoSvtLimitCount )
LABEL_15:
    sub_1C3B9C0(_4__this, userSvtId);
  if ( v15 >= temporaryPhotoSvtLimitCount->max_length )
LABEL_16:
    sub_1C3B9C8(_4__this, userSvtId);
  temporaryPhotoSvtLimitCount->m_Items[v15 + 1] = limitCount;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass387_0___OpenTargetSelectDialog_b__2(
        MyRoomControl___c__DisplayClass387_0_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v10; // x10
  __int64 size; // x11

  if ( (byte_4C1D607 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, *(_QWORD *)&equipId);
    byte_4C1D607 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_10;
  items = temporaryPhotoTargetList->fields._items;
  v10 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
  ++temporaryPhotoTargetList->fields._version;
  if ( !items )
    goto LABEL_10;
  size = temporaryPhotoTargetList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      temporaryPhotoTargetList,
      1,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( _4__this )
      goto LABEL_9;
LABEL_10:
    sub_1C3B9C0(_4__this, *(_QWORD *)&equipId);
  }
  temporaryPhotoTargetList->fields._size = size + 1;
  *((_DWORD *)items->m_Items + size) = 1;
LABEL_9:
  _4__this->fields.temporaryMasterEquipId = equipId;
  _4__this->fields.temporaryMasterGenderType = genderType;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass387_0___OpenTargetSelectDialog_b__3(
        MyRoomControl___c__DisplayClass387_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass388_0___ctor(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass388_0___OpenStaffSelectDialog_b__0(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass388_0___OpenStaffSelectDialog_b__1(
        MyRoomControl___c__DisplayClass388_0_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x0
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v9; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v11; // x9
  struct System_Int32_array *temporaryStaffImageId; // x8
  int v13; // w9

  if ( (byte_4C1D608 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, *(_QWORD *)&imageId);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v5);
    byte_4C1D608 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_13;
  items = temporaryPhotoTargetList->fields._items;
  v9 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
  ++temporaryPhotoTargetList->fields._version;
  if ( !items )
    goto LABEL_13;
  size = temporaryPhotoTargetList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      temporaryPhotoTargetList,
      2,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  else
  {
    temporaryPhotoTargetList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v11 = _4__this->fields.temporaryPhotoTargetList;
  if ( !v11 || (temporaryStaffImageId = _4__this->fields.temporaryStaffImageId) == 0LL )
LABEL_13:
    sub_1C3B9C0(_4__this, *(_QWORD *)&imageId);
  v13 = v11->fields._size - 1;
  if ( v13 >= temporaryStaffImageId->max_length )
    sub_1C3B9C8(_4__this, *(_QWORD *)&imageId);
  temporaryStaffImageId->m_Items[v13 + 1] = imageId;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass388_0___OpenStaffSelectDialog_b__2(
        MyRoomControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__OpenStaffSelectDialog(_4__this, this->fields.anotherTargetType, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass389_0___ctor(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass389_0___ConfirmTargetSelectState_b__0(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  if ( this->fields.isChangeTarget )
  {
    _4__this->fields.photoState = 2;
    MyRoomControl__DispPhotoCampaign(_4__this, 0, 1, 0LL);
  }
  else
  {
    MyRoomControl__TransitionMyRoomTop(_4__this, 0LL);
  }
}


void __fastcall MyRoomControl___c__DisplayClass389_0___ConfirmTargetSelectState_b__1(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass389_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C1D609 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__, method);
    this = (MyRoomControl___c__DisplayClass389_0_o *)sub_1C3B764(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__,
                                                       v3);
    byte_4C1D609 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass389_0_o *)_4__this->fields.temporaryPhotoTargetList) == 0LL
    || (System_Collections_Generic_List_Int32Enum___RemoveAt(
          (System_Collections_Generic_List_T__o *)this,
          LODWORD(this->fields.__4__this) - 1,
          (const MethodInfo_3672BF4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__),
        (this = (MyRoomControl___c__DisplayClass389_0_o *)v2->fields.__4__this) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  MyRoomControl__ConfirmTargetSelectState((MyRoomControl_o *)this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass389_0___ConfirmTargetSelectState_b__2(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass389_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v7; // x8
  MyRoomControl_o *v8; // x8
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x20
  System_Action_o *_9__3; // x22

  v2 = this;
  if ( (byte_4C1D60A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v4);
    this = (MyRoomControl___c__DisplayClass389_0_o *)sub_1C3B764(
                                                       &Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__3__,
                                                       v5);
    byte_4C1D60A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass389_0_o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !this )
    goto LABEL_15;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    (System_Collections_Generic_List_T__o *)this,
    LODWORD(this->fields.__4__this) - 1,
    (const MethodInfo_3672BF4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass389_0_o *)v7->fields.photoServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass389_0_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                     (UnityEngine_Behaviour_o *)this,
                                                     0LL);
  v8 = v2->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      photoServantSelectMenu = v8->fields.photoServantSelectMenu;
      _9__3 = v2->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v2,
          Method_MyRoomControl___c__DisplayClass389_0__ConfirmTargetSelectState_b__3__,
          0LL);
        v2->fields.__9__3 = _9__3;
        this = (MyRoomControl___c__DisplayClass389_0_o *)sub_1C3B708(&v2->fields.__9__3);
      }
      if ( photoServantSelectMenu )
      {
        PhotoServantSelectMenu__Close(photoServantSelectMenu, _9__3, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C3B9C0(this, method);
  }
  if ( !v8 )
    goto LABEL_15;
  MyRoomControl__ConfirmTargetSelectState(v8, v2->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass389_0___ConfirmTargetSelectState_b__3(
        MyRoomControl___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass392_0___ctor(
        MyRoomControl___c__DisplayClass392_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass392_0___OpenPhotoFrameSelectDialog_b__0(
        MyRoomControl___c__DisplayClass392_0_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass392_0_o *v4; // x19
  __int64 v5; // x1
  MyRoomControl_o *_4__this; // x21
  UISprite_o *takingPhotoFrameSprite; // x22
  System_String_o *v8; // x0
  MyRoomControl_o *v9; // x21
  UISprite_o *takingPhotoFrameWideSprite; // x22
  System_String_o *v11; // x0
  MyRoomControl_o *v12; // x21
  UISprite_o *photoFrameSprite; // x22
  System_String_o *v14; // x0
  MyRoomControl_o *v15; // x21
  UISprite_o *photoFrameWideSprite; // x22
  System_String_o *v17; // x0

  v4 = this;
  if ( (byte_4C1D60B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16855/*"bit_board_disappear5"*/, spriteName);
    this = (MyRoomControl___c__DisplayClass392_0_o *)sub_1C3B764(&StringLiteral_16893/*"bit_incoming_end"*/, v5);
    byte_4C1D60B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  takingPhotoFrameSprite = _4__this->fields.takingPhotoFrameSprite;
  v8 = System_String__Concat_63368612(spriteName, (System_String_o *)StringLiteral_16893/*"bit_incoming_end"*/, 0LL);
  MyRoomControl__SetPhotoFrameSprite(_4__this, takingPhotoFrameSprite, v8, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_8;
  takingPhotoFrameWideSprite = v9->fields.takingPhotoFrameWideSprite;
  v11 = System_String__Concat_63368612(spriteName, (System_String_o *)StringLiteral_16855/*"bit_board_disappear5"*/, 0LL);
  MyRoomControl__SetPhotoFrameSprite(v9, takingPhotoFrameWideSprite, v11, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12
    || (photoFrameSprite = v12->fields.photoFrameSprite,
        v14 = System_String__Concat_63368612(spriteName, (System_String_o *)StringLiteral_16893/*"bit_incoming_end"*/, 0LL),
        MyRoomControl__SetPhotoFrameSprite(v12, photoFrameSprite, v14, 0LL),
        (v15 = v4->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1C3B9C0(this, spriteName);
  }
  photoFrameWideSprite = v15->fields.photoFrameWideSprite;
  v17 = System_String__Concat_63368612(spriteName, (System_String_o *)StringLiteral_16855/*"bit_board_disappear5"*/, 0LL);
  MyRoomControl__SetPhotoFrameSprite(v15, photoFrameWideSprite, v17, 0LL);
  ActionExtensions__Call(v4->fields.decideCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___ctor(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__0(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__1(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__10(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__11(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__2(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__3(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__4(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__5(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__6(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__7(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__8(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoTarget_b__9(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass396_0___ctor(
        MyRoomControl___c__DisplayClass396_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass396_0___CreatePhotoMasterFigure_b__0(
        MyRoomControl___c__DisplayClass396_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass396_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  float *v4; // x8
  float v5; // s8
  float v6; // s9
  float v7; // s10
  MyRoomControl___c__DisplayClass396_0_o *v8; // x20
  float v9; // s0
  struct MyRoomControl_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C1D60C & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C3B764(
                                                       &Method_GameObjectExtensions_SafeGetComponent_UIPanel___,
                                                       method);
    byte_4C1D60C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass396_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v4 = (float *)v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  v5 = v4[288];
  v6 = v4[289];
  v7 = v4[290];
  v8 = this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                     v2->fields.__4__this,
                                                     v2->fields.targetIndex,
                                                     0LL);
  if ( !v8 )
    goto LABEL_17;
  v9 = ((unsigned __int8)this & 1) != 0 ? 1300.0 : -1812.0;
  v15.fields.x = v5 + v9;
  v15.fields.y = v6 + 0.0;
  v15.fields.z = v7 + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v8, v15, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v10->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.photoMasterPanel = (struct UIPanel_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                       gameObject,
                                                       (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C3B708(&v10->fields.photoMasterPanel);
  v12 = v2->fields.__4__this;
  if ( !v12
    || (this = (MyRoomControl___c__DisplayClass396_0_o *)v12->fields.photoMasterPanel) == 0LL
    || (UIPanel__set_depth((UIPanel_o *)this, 15, 0LL), (v13 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass396_0_o *)v13->fields.photoMasterTexture) == 0LL )
  {
LABEL_17:
    sub_1C3B9C0(this, method);
  }
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34965512(v14, 0.9, 0LL);
  ActionExtensions__Call(v2->fields.func, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass401_0___ctor(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass401_0___ChangePhotoCampaignServantFace_b__0(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  __int64 figureIndex; // x2
  struct MyRoomControl_o *v6; // x8
  struct PhotoStandFigureComponent_array *v7; // x8
  __int64 v8; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v10; // x8
  struct PhotoStandFigureComponent_array *v11; // x8
  __int64 v12; // x9
  UnityEngine_GameObject_o *v13; // x0
  float scale; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o position; // [xsp+10h] [xbp-20h] BYREF

  position.fields.z = 0.0;
  *(_QWORD *)&position.fields.x = 0LL;
  scale = 0.0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  photoStandFigures = _4__this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_13;
  figureIndex = this->fields.figureIndex;
  if ( (unsigned int)figureIndex >= photoStandFigures->max_length )
    goto LABEL_14;
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    _4__this,
    photoStandFigures->m_Items[figureIndex],
    figureIndex,
    &position,
    &scale,
    0LL);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6->fields.photoStandFigures;
  if ( !v7 )
    goto LABEL_13;
  v8 = this->fields.figureIndex;
  if ( (unsigned int)v8 >= v7->max_length )
    goto LABEL_14;
  _4__this = (struct MyRoomControl_o *)v7->m_Items[v8];
  if ( !_4__this
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL),
        GameObjectExtensions__SetLocalPosition(gameObject, position, 0LL),
        (v10 = this->fields.__4__this) == 0LL)
    || (v11 = v10->fields.photoStandFigures) == 0LL )
  {
LABEL_13:
    sub_1C3B9C0(_4__this, method);
  }
  v12 = this->fields.figureIndex;
  if ( (unsigned int)v12 >= v11->max_length )
LABEL_14:
    sub_1C3B9C8(_4__this, method);
  _4__this = (struct MyRoomControl_o *)v11->m_Items[v12];
  if ( !_4__this )
    goto LABEL_13;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  GameObjectExtensions__SetLocalScale_34965512(v13, scale, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass418_0___ctor(
        MyRoomControl___c__DisplayClass418_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass418_0___OpenChangeTargetSelectDialog_b__0(
        MyRoomControl___c__DisplayClass418_0_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass418_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  __int64 anotherIndex; // x10
  PhotoStandFigureComponent_o *v15; // x9
  int64_t UserSvtId_k__BackingField; // x21
  int32_t ImageLimitCount_k__BackingField; // w20
  System_Action_int__int__o *_9__2; // x21
  MyRoomControl_o *v19; // x20
  System_Action_o *_9__3; // x22
  struct MyRoomControl_o *v21; // x8
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  int32_t Item; // w0
  struct MyRoomControl_o *v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  struct MyRoomControl_o *v28; // x8
  int64_t v29; // x22
  struct PhotoStandFigureComponent_array *v30; // x9
  __int64 targetIndex; // x10
  PhotoStandFigureComponent_o *v32; // x9
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x23
  System_Action_long__int__o *_9__1; // x25

  v4 = this;
  if ( (byte_4C1D60D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_long__int__TypeInfo, *(_QWORD *)&targetType);
    sub_1C3B764(&System_Action_int__int__TypeInfo, v5);
    sub_1C3B764(&System_Action_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__1__, v9);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__2__, v10);
    this = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B764(
                                                       &Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__3__,
                                                       v11);
    byte_4C1D60D = 1;
  }
  switch ( targetType )
  {
    case 0:
      _4__this = v4->fields.__4__this;
      if ( !_4__this )
        goto LABEL_46;
      _4__this->fields.photoState = 8;
      if ( v4->fields.isSelectedAnotherSvt )
      {
        photoStandFigures = _4__this->fields.photoStandFigures;
        if ( !photoStandFigures )
          goto LABEL_46;
        anotherIndex = v4->fields.anotherIndex;
        if ( (unsigned int)anotherIndex >= photoStandFigures->max_length )
          goto LABEL_47;
        v15 = photoStandFigures->m_Items[anotherIndex];
        if ( !v15 )
          goto LABEL_46;
        UserSvtId_k__BackingField = v15->fields._UserSvtId_k__BackingField;
        ImageLimitCount_k__BackingField = v15->fields._ImageLimitCount_k__BackingField;
      }
      else
      {
        ImageLimitCount_k__BackingField = -1;
        UserSvtId_k__BackingField = -1LL;
      }
      this = (MyRoomControl___c__DisplayClass418_0_o *)_4__this->fields.photoTargetList;
      if ( !this )
        goto LABEL_46;
      this = (MyRoomControl___c__DisplayClass418_0_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         (System_Collections_Generic_List_T__o *)this,
                                                         v4->fields.targetIndex,
                                                         (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      v28 = v4->fields.__4__this;
      if ( (_DWORD)this )
      {
        if ( !v28 )
          goto LABEL_46;
        v29 = -1LL;
        goto LABEL_42;
      }
      if ( !v28 )
        goto LABEL_46;
      v30 = v28->fields.photoStandFigures;
      if ( !v30 )
        goto LABEL_46;
      targetIndex = v4->fields.targetIndex;
      if ( (unsigned int)targetIndex >= v30->max_length )
        goto LABEL_47;
      v32 = v30->m_Items[targetIndex];
      if ( !v32 )
        goto LABEL_46;
      v29 = v32->fields._UserSvtId_k__BackingField;
LABEL_42:
      photoServantSelectMenu = v28->fields.photoServantSelectMenu;
      v28->fields.targetChangeAnotherTargetType = v4->fields.anotherTargetType;
      v28->fields.targetChangeIsLeft = v4->fields.isLeft;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_long__int__o *)sub_1C3B9B0(System_Action_long__int__TypeInfo);
        System_Action_long__int____ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__1__,
          0LL);
        v4->fields.__9__1 = _9__1;
        this = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B708(&v4->fields.__9__1);
      }
      if ( !photoServantSelectMenu )
LABEL_46:
        sub_1C3B9C0(this, *(_QWORD *)&targetType);
      PhotoServantSelectMenu__Open(
        photoServantSelectMenu,
        _9__1,
        UserSvtId_k__BackingField,
        ImageLimitCount_k__BackingField,
        v29,
        0LL);
      return;
    case 1:
      _9__2 = v4->fields.__9__2;
      v19 = v4->fields.__4__this;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_int__int__o *)sub_1C3B9B0(System_Action_int__int__TypeInfo);
        System_Action_int__int____ctor(
          _9__2,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__2__,
          0LL);
        v4->fields.__9__2 = _9__2;
        this = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B708(&v4->fields.__9__2);
      }
      _9__3 = v4->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass418_0__OpenChangeTargetSelectDialog_b__3__,
          0LL);
        v4->fields.__9__3 = _9__3;
        this = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B708(&v4->fields.__9__3);
      }
      if ( !v19 )
        goto LABEL_46;
      MyRoomControl__OpenMasterEquipSettingDialog(v19, _9__2, _9__3, 0LL);
      return;
    case 2:
      this = (MyRoomControl___c__DisplayClass418_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_46;
      MyRoomControl__OpenStaffChangeDialog(
        (MyRoomControl_o *)this,
        v4->fields.anotherTargetType,
        v4->fields.isLeft,
        v4->fields.cancelCallback,
        0LL);
      return;
    case 3:
      v21 = v4->fields.__4__this;
      if ( !v21 )
        goto LABEL_46;
      photoTargetList = (System_Collections_Generic_List_T__o *)v21->fields.photoTargetList;
      if ( v4->fields.isLeft )
      {
        if ( !photoTargetList )
          goto LABEL_46;
        Item = System_Collections_Generic_List_Int32Enum___get_Item(
                 photoTargetList,
                 1,
                 (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
        System_Collections_Generic_List_Int32Enum___set_Item(
          photoTargetList,
          0,
          Item,
          (const MethodInfo_36711D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        v24 = v4->fields.__4__this;
        if ( !v24 )
          goto LABEL_46;
        this = (MyRoomControl___c__DisplayClass418_0_o *)v24->fields.photoTargetList;
        if ( !this )
          goto LABEL_46;
        System_Collections_Generic_List_Int32Enum___set_Item(
          (System_Collections_Generic_List_T__o *)this,
          1,
          3,
          (const MethodInfo_36711D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        this = (MyRoomControl___c__DisplayClass418_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_46;
        v25 = *(_QWORD *)&this[9].fields.isSelectedAnotherSvt;
        if ( !v25 )
          goto LABEL_46;
        if ( *(_DWORD *)(v25 + 24) < 2u )
LABEL_47:
          sub_1C3B9C8(this, *(_QWORD *)&targetType);
        v26 = *(_QWORD *)(v25 + 40);
        if ( !v26 )
          goto LABEL_46;
        v27 = *(_QWORD *)(v25 + 32);
        if ( !v27 )
          goto LABEL_46;
        *(_QWORD *)(v27 + 40) = *(_QWORD *)(v26 + 40);
        *(_QWORD *)(v27 + 48) = *(_QWORD *)(v26 + 48);
      }
      else
      {
        if ( !photoTargetList )
          goto LABEL_46;
        System_Collections_Generic_List_Int32Enum___set_Item(
          photoTargetList,
          1,
          3,
          (const MethodInfo_36711D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        this = (MyRoomControl___c__DisplayClass418_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_46;
      }
      MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 1, 0LL);
      return;
    default:
      return;
  }
}


void __fastcall MyRoomControl___c__DisplayClass418_0___OpenChangeTargetSelectDialog_b__1(
        MyRoomControl___c__DisplayClass418_0_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass418_0_o *v6; // x21
  struct MyRoomControl_o *_4__this; // x8
  __int64 v8; // x8
  __int64 targetIndex; // x9
  __int64 v10; // x8

  v6 = this;
  if ( (byte_4C1D60E & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B764(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__,
                                                       userSvtId);
    byte_4C1D60E = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass418_0_o *)_4__this->fields.photoTargetList;
  if ( !this )
    goto LABEL_10;
  System_Collections_Generic_List_Int32Enum___set_Item(
    (System_Collections_Generic_List_T__o *)this,
    v6->fields.targetIndex,
    0,
    (const MethodInfo_36711D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
  this = (MyRoomControl___c__DisplayClass418_0_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  v8 = *(_QWORD *)&this[9].fields.isSelectedAnotherSvt;
  if ( !v8 )
    goto LABEL_10;
  targetIndex = v6->fields.targetIndex;
  if ( (unsigned int)targetIndex >= *(_DWORD *)(v8 + 24) )
    sub_1C3B9C8(this, userSvtId);
  v10 = *(_QWORD *)(v8 + 8 * targetIndex + 32);
  if ( !v10 )
LABEL_10:
    sub_1C3B9C0(this, userSvtId);
  *(_QWORD *)(v10 + 40) = userSvtId;
  *(_DWORD *)(v10 + 48) = limitCount;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass418_0___OpenChangeTargetSelectDialog_b__2(
        MyRoomControl___c__DisplayClass418_0_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass418_0_o *v6; // x21
  struct MyRoomControl_o *_4__this; // x8

  v6 = this;
  if ( (byte_4C1D60F & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass418_0_o *)sub_1C3B764(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__,
                                                       *(_QWORD *)&equipId);
    byte_4C1D60F = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass418_0_o *)_4__this->fields.photoTargetList) == 0LL
    || (System_Collections_Generic_List_Int32Enum___set_Item(
          (System_Collections_Generic_List_T__o *)this,
          v6->fields.targetIndex,
          1,
          (const MethodInfo_36711D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__),
        (this = (MyRoomControl___c__DisplayClass418_0_o *)v6->fields.__4__this) == 0LL) )
  {
    sub_1C3B9C0(this, *(_QWORD *)&equipId);
  }
  *(_DWORD *)&this[17].fields.isSelectedAnotherSvt = equipId;
  this[17].fields.anotherIndex = genderType;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass418_0___OpenChangeTargetSelectDialog_b__3(
        MyRoomControl___c__DisplayClass418_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__OpenChangeTargetSelectDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0LL);
}


void __fastcall MyRoomControl___c__DisplayClass419_0___ctor(
        MyRoomControl___c__DisplayClass419_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass419_0___OpenStaffChangeDialog_b__0(
        MyRoomControl___c__DisplayClass419_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__OpenChangeTargetSelectDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass419_0___OpenStaffChangeDialog_b__1(
        MyRoomControl___c__DisplayClass419_0_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass419_0_o *v4; // x20
  struct MyRoomControl_o *_4__this; // x8
  __int64 v6; // x8
  __int64 targetIndex; // x9
  __int64 v8; // x8

  v4 = this;
  if ( (byte_4C1D610 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass419_0_o *)sub_1C3B764(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__,
                                                       *(_QWORD *)&imageId);
    byte_4C1D610 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass419_0_o *)_4__this->fields.photoTargetList;
  if ( !this )
    goto LABEL_10;
  System_Collections_Generic_List_Int32Enum___set_Item(
    (System_Collections_Generic_List_T__o *)this,
    v4->fields.targetIndex,
    2,
    (const MethodInfo_36711D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
  this = (MyRoomControl___c__DisplayClass419_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  v6 = *(_QWORD *)&this[15].fields.anotherTargetType;
  if ( !v6 )
    goto LABEL_10;
  targetIndex = v4->fields.targetIndex;
  if ( (unsigned int)targetIndex >= *(_DWORD *)(v6 + 24) )
    sub_1C3B9C8(this, *(_QWORD *)&imageId);
  v8 = *(_QWORD *)(v6 + 8 * targetIndex + 32);
  if ( !v8 )
LABEL_10:
    sub_1C3B9C0(this, *(_QWORD *)&imageId);
  *(_DWORD *)(v8 + 52) = imageId;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass419_0___OpenStaffChangeDialog_b__2(
        MyRoomControl___c__DisplayClass419_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  MyRoomControl__OpenStaffChangeDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0LL);
}


void __fastcall MyRoomControl___c__DisplayClass420_0___ctor(
        MyRoomControl___c__DisplayClass420_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass420_0___OpenStaffDialog_b__0(
        MyRoomControl___c__DisplayClass420_0_o *this,
        bool isDecide,
        int32_t staffId,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_object__o **v20; // x22
  System_Collections_Generic_List_object__o *v21; // x23
  System_Action_T__o *staffCostumeSelectDecideAction; // x19
  struct System_Func_StaffPhotoCostumeEntity__bool__o *_9__1; // x25
  int32_t klass_high; // w23
  struct MyRoomControl_o *_4__this; // x8
  PhotoCampaignStaffCostumeSelectDialog_o *photoStaffCostumeSelectDialog; // x20
  System_Action_bool__int__o *v27; // x24

  if ( (byte_4C1D611 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_int___, isDecide);
    sub_1C3B764(&System_Action_bool__int__TypeInfo, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_StaffPhotoCostumeEntity___, v10);
    sub_1C3B764(&System_Func_StaffPhotoCostumeEntity__bool__TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__, v13);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass420_0__OpenStaffDialog_b__1__, v14);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass420_1__OpenStaffDialog_b__2__, v15);
    sub_1C3B764(&MyRoomControl___c__DisplayClass420_1_TypeInfo, v16);
    byte_4C1D611 = 1;
  }
  v17 = (Il2CppObject *)sub_1C3B9B0(MyRoomControl___c__DisplayClass420_1_TypeInfo);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  v17[1].monitor = this;
  sub_1C3B708(&v17[1].monitor);
  v17[1].klass = (Il2CppClass *)staffPhotoCostumeEntityList;
  v20 = (System_Collections_Generic_List_object__o **)&v17[1];
  Item = (Il2CppObject *)sub_1C3B708(&v17[1]);
  if ( isDecide )
  {
    v21 = *v20;
    if ( !*v20 )
      goto LABEL_18;
    if ( v21->fields._size == 1 )
    {
      staffCostumeSelectDecideAction = (System_Action_T__o *)this->fields.staffCostumeSelectDecideAction;
      Item = System_Collections_Generic_List_object___get_Item(
               *v20,
               0,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
      if ( Item )
      {
        ActionExtensions__Call_int_(
          staffCostumeSelectDecideAction,
          (int32_t)Item[2].monitor,
          (const MethodInfo_2F42260 *)Method_ActionExtensions_Call_int___);
        return;
      }
LABEL_18:
      sub_1C3B9C0(Item, v19);
    }
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (struct System_Func_StaffPhotoCostumeEntity__bool__o *)sub_1C3B9B0(System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        (System_Func_object__bool__o *)_9__1,
        (Il2CppObject *)this,
        Method_MyRoomControl___c__DisplayClass420_0__OpenStaffDialog_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C3B708(&this->fields.__9__1);
    }
    Item = System_Linq_Enumerable__FirstOrDefault_object__50415372(
             (System_Collections_Generic_IEnumerable_TSource__o *)v21,
             (System_Func_TSource__bool__o *)_9__1,
             (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_StaffPhotoCostumeEntity___);
    if ( Item )
      klass_high = HIDWORD(Item[1].klass);
    else
      klass_high = -1;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_18;
    photoStaffCostumeSelectDialog = _4__this->fields.photoStaffCostumeSelectDialog;
    v27 = (System_Action_bool__int__o *)sub_1C3B9B0(System_Action_bool__int__TypeInfo);
    System_Action_bool__int____ctor(v27, v17, Method_MyRoomControl___c__DisplayClass420_1__OpenStaffDialog_b__2__, 0LL);
    if ( !photoStaffCostumeSelectDialog )
      goto LABEL_18;
    PhotoCampaignStaffCostumeSelectDialog__Open(
      photoStaffCostumeSelectDialog,
      v27,
      staffId,
      klass_high,
      (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)*v20,
      0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.staffSelectCancelAction, 0LL);
  }
}


bool __fastcall MyRoomControl___c__DisplayClass420_0___OpenStaffDialog_b__1(
        MyRoomControl___c__DisplayClass420_0_o *this,
        StaffPhotoCostumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.imageId == this->fields.baseStaffImageId;
}


void __fastcall MyRoomControl___c__DisplayClass420_1___ctor(
        MyRoomControl___c__DisplayClass420_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass420_1___OpenStaffDialog_b__2(
        MyRoomControl___c__DisplayClass420_1_o *this,
        bool isCostumeDecide,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  Il2CppObject *object__50405024; // x0
  __int64 v13; // x1
  struct MyRoomControl___c__DisplayClass420_0_o *CS___8__locals1; // x8
  System_Action_T__o *staffCostumeSelectDecideAction; // x20
  struct System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList; // x19
  System_Func_object__bool__o *v17; // x21

  if ( (byte_4C1D612 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_int___, isCostumeDecide);
    sub_1C3B764(&Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity____77946368, v7);
    sub_1C3B764(&System_Func_StaffPhotoCostumeEntity__bool__TypeInfo, v8);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass420_2__OpenStaffDialog_b__3__, v9);
    sub_1C3B764(&MyRoomControl___c__DisplayClass420_2_TypeInfo, v10);
    byte_4C1D612 = 1;
  }
  v11 = sub_1C3B9B0(MyRoomControl___c__DisplayClass420_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_DWORD *)(v11 + 16) = idx;
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  if ( isCostumeDecide )
  {
    staffCostumeSelectDecideAction = (System_Action_T__o *)CS___8__locals1->fields.staffCostumeSelectDecideAction;
    staffPhotoCostumeEntityList = this->fields.staffPhotoCostumeEntityList;
    v17 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_MyRoomControl___c__DisplayClass420_2__OpenStaffDialog_b__3__,
      0LL);
    object__50405024 = System_Linq_Enumerable__First_object__50405024(
                         (System_Collections_Generic_IEnumerable_TSource__o *)staffPhotoCostumeEntityList,
                         (System_Func_TSource__bool__o *)v17,
                         (const MethodInfo_3011EA0 *)Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity____77946368);
    if ( object__50405024 )
    {
      ActionExtensions__Call_int_(
        staffCostumeSelectDecideAction,
        (int32_t)object__50405024[2].monitor,
        (const MethodInfo_2F42260 *)Method_ActionExtensions_Call_int___);
      return;
    }
LABEL_9:
    sub_1C3B9C0(object__50405024, v13);
  }
  ActionExtensions__Call(CS___8__locals1->fields.staffCostumeSelectCancelAction, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass420_2___ctor(
        MyRoomControl___c__DisplayClass420_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass420_2___OpenStaffDialog_b__3(
        MyRoomControl___c__DisplayClass420_2_o *this,
        StaffPhotoCostumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.idx == this->fields.idx;
}


void __fastcall MyRoomControl__initMaterial_d__273___ctor(
        MyRoomControl__initMaterial_d__273_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__initMaterial_d__273__MoveNext(
        MyRoomControl__initMaterial_d__273_o *this,
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

  if ( (byte_4C1D61A & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_MyRoomControl__initMaterial_b__273_0__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, v6);
    byte_4C1D61A = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1C3B9C0(Instance, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7107/*"Hidden/ACTk/WallHackTexture"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v12, _4__this, Method_MyRoomControl__initMaterial_b__273_0__, 0LL);
  v13 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v11;
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__273__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__273_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__initMaterial_d__273__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__273_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__initMaterial_d__273_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__273__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__273_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__initMaterial_d__273__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__273_o *this,
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
  MyRoomControl__svtVoicePlayAct_d__329_o *v2; // x19
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v18; // x22
  CommonUI_o *v19; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_T__o *v22; // x21
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v27; // x22
  Il2CppObject *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct MaterialEventLogListViewItem_Info_o *v32; // x8
  struct MaterialEventLogListViewItem_Info_o *v33; // x8
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  struct MaterialEventLogListViewItem_Info_o *v35; // x8
  struct MyRoomControl___c__DisplayClass329_0_o *_8__1; // x22
  struct MyRoomControl___c__DisplayClass329_0_o *v37; // x8
  struct MyRoomControl___c__DisplayClass329_0_o *v38; // x8
  struct MaterialEventLogListViewItem_Info_o *v39; // x8
  int32_t v40; // w22
  struct MyRoomControl_o *v41; // x8
  struct MyRoomControl_o *v42; // x8
  struct MaterialEventLogListViewItem_Info_o *v43; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  int32_t v46; // w23
  Il2CppObject *v47; // x26
  System_Action_o *v48; // x25
  struct MyRoomControl___c__DisplayClass329_0_o *v49; // x8
  Il2CppObject **v50; // x19
  int v51; // w8
  int32_t v52; // w21
  MyRoomControl__svtVoicePlayAct_d__329_o *v53; // x22
  struct MyRoomControl_o *v54; // x8
  CommonUI_o *v55; // x21
  CommonUI_o *v56; // x21
  struct MyRoomControl___c__DisplayClass329_0_o *v57; // x8
  CommonUI_o *v58; // x20
  __int16 v59; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t formId[2]; // [xsp+28h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C1D61B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&char_TypeInfo, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v10);
    sub_1C3B764(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14);
    sub_1C3B764(&Method_MyRoomControl___c__DisplayClass329_0__svtVoicePlayAct_b__0__, v15);
    this = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_1C3B764(&MyRoomControl___c__DisplayClass329_0_TypeInfo, v16);
    byte_4C1D61B = 1;
  }
  *(_QWORD *)formId = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v18 = (Il2CppObject *)sub_1C3B9B0(MyRoomControl___c__DisplayClass329_0_TypeInfo);
      System_Object___ctor(v18, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass329_0_o *)v18;
      sub_1C3B708(&v2->fields.__8__1);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_126;
      *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
      sub_1C3B708(&this->fields);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v19 )
        goto LABEL_126;
      CommonUI__maskFadeout(v19, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_1C3B708(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v22 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v22,
        (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v22 )
        goto LABEL_126;
      items = v22->fields._items;
      v24 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v22->fields._version;
      if ( !items )
        goto LABEL_126;
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v22,
          81,
          *(const MethodInfo_3671474 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v2->fields.item;
      if ( !item )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      v27 = (ServantVoiceEntity_o *)this;
      v2->fields._voiceAssetName_5__2 = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      sub_1C3B708(&v2->fields._voiceAssetName_5__2);
      v28 = (Il2CppObject *)System_Int32__ToString((int)v27 + 20, 0LL);
      v59 = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)j_il2cpp_value_box_0(char_TypeInfo, &v59, v29, v30, v31);
      v32 = v2->fields.item;
      if ( !v32 )
        goto LABEL_126;
      v2->fields._playSvtVoiceId_5__3 = System_String__Concat_63379624(
                                          v28,
                                          (Il2CppObject *)this,
                                          (Il2CppObject *)v32->fields.voiceId,
                                          0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_1C3B708(&v2->fields._playSvtVoiceId_5__3);
      v33 = v2->fields.item;
      if ( !v33 )
        goto LABEL_126;
      v2->fields._svtVoiceDataList_5__4 = ServantVoiceEntity__getVoiceList_41319252(
                                            v27,
                                            v33->fields.svtVoiceType,
                                            v2->fields._playSvtVoiceId_5__3,
                                            (System_Collections_Generic_List_CondType_Kind__o *)v22,
                                            0,
                                            0LL);
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v2->fields._svtVoiceDataList_5__4;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_1C3B708(&v2->fields._svtVoiceDataList_5__4);
      if ( v2->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v35 = v2->fields.item;
      if ( !v35 )
        goto LABEL_126;
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_41318524(
                                                                                v27,
                                                                                v35->fields.svtVoiceType,
                                                                                3,
                                                                                v35->fields.voiceCondValue,
                                                                                0LL,
                                                                                -1,
                                                                                0LL);
      sub_1C3B708(&v2->fields._svtVoiceDataList_5__4);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      _8__1 = v2->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_126;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)sub_1C3B708(&_8__1->fields.bondsSvtObj);
      v37 = v2->fields.__8__1;
      if ( !v37 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v37->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v38 = v2->fields.__8__1;
      if ( !v38 )
        goto LABEL_126;
      v38->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      v39 = v2->fields.item;
      if ( !v39 )
        goto LABEL_126;
      v40 = (int)this;
      MyRoomControl__SetImageIdAndFormId(_4__this, formId, &formId[1], v39->fields.svt_id, (int32_t)this, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_127;
      v41 = this->fields.__4__this;
      if ( !v41 )
        goto LABEL_126;
      if ( !HIDWORD(v41->fields.myRoomListCtr) )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_127:
        sub_1C3B9C8(this, method);
      v42 = this->fields.__4__this;
      if ( !v42 )
        goto LABEL_126;
      formId[1] = (int32_t)v42->fields.myRoomListCtr;
LABEL_59:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v43 = v2->fields.item;
      if ( !v43 )
        goto LABEL_126;
      svt_id = v43->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v46 = formId[1];
      v47 = (Il2CppObject *)v2->fields.__8__1;
      v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v48, v47, Method_MyRoomControl___c__DisplayClass329_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_126;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v40, 1, 0, v46, 10, v48, 0, 0LL);
LABEL_63:
      v49 = v2->fields.__8__1;
      if ( !v49 )
        goto LABEL_126;
      if ( !v49->fields.createStandEnd )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1C3B708(v50);
        v51 = 2;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__voiceLoad(_4__this, v2->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_67:
      if ( _4__this->fields.isVoiceLoading )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1C3B708(v50);
        v51 = 3;
        goto LABEL_125;
      }
      method = (const MethodInfo *)v2->fields._svtVoiceDataList_5__4;
      if ( !method )
        goto LABEL_126;
      if ( SLODWORD(method->name) >= 2 )
      {
        v52 = 0;
        while ( 1 )
        {
          this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v52,
                                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_126;
          v53 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_127;
          v54 = this->fields.__4__this;
          if ( !v54 )
            goto LABEL_126;
          this = (MyRoomControl__svtVoicePlayAct_d__329_o *)System_String__op_Equality(
                                                              *(System_String_o **)&v54->fields.m_CachedPtr,
                                                              v2->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          method = (const MethodInfo *)v2->fields._svtVoiceDataList_5__4;
          if ( !method )
            goto LABEL_126;
          if ( ++v52 >= SLODWORD(method->name) )
            goto LABEL_84;
        }
        this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice_32707532(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v53,
          v2->fields._voiceAssetName_5__2,
          0LL);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)method,
          v2->fields._voiceAssetName_5__2,
          0LL);
      }
LABEL_84:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v55 )
        goto LABEL_126;
      CommonUI__maskFadein(v55, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_90:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1C3B708(v50);
        v51 = 4;
        goto LABEL_125;
      }
LABEL_93:
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1C3B708(v50);
        v51 = 5;
        goto LABEL_125;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v56 )
        goto LABEL_126;
      CommonUI__maskFadeout(v56, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_101:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1C3B708(v50);
        v51 = 6;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v2->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v57 = v2->fields.__8__1;
      if ( !v57 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)v57->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v58 )
        goto LABEL_126;
      CommonUI__maskFadein(v58, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_120:
      this = (MyRoomControl__svtVoicePlayAct_d__329_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_126:
        sub_1C3B9C0(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v2->fields.__2__current = 0LL;
      v50 = &v2->fields.__2__current;
      sub_1C3B708(v50);
      v51 = 7;
LABEL_125:
      *((_DWORD *)v50 - 2) = v51;
      return 1;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_10;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_63;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_126;
      goto LABEL_67;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_90;
    case 5:
      v2->fields.__1__state = -1;
      goto LABEL_93;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_101;
    case 7:
      v2->fields.__1__state = -1;
      goto LABEL_120;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MyRoomControl__svtVoicePlayAct_d__329_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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