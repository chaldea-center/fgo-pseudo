void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  struct MyRoomControl_StaticFields *static_fields; // x8

  if ( (byte_4BD7BB5 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&StringLiteral_3066/*"BGM_MYROOM_1"*/);
    byte_4BD7BB5 = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_3066/*"BGM_MYROOM_1"*/;
  sub_1C21DDC(MyRoomControl_TypeInfo->static_fields, StringLiteral_3066/*"BGM_MYROOM_1"*/);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_BFE600;
  *(_QWORD *)&static_fields->BUTTON_MULTIPLE_VIEW = 0x2000000010LL;
  *(_QWORD *)&static_fields->BUTTON_OUT_X = 0x2C4480000LL;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomStateMaterial_o *v3; // x20
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct System_Int64_array *v11; // x0
  struct System_Int32_array *v12; // x0

  if ( (byte_4BD7BB4 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&MyRoomStateMaterial_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3___TypeInfo);
    byte_4BD7BB4 = 1;
  }
  v3 = (MyRoomStateMaterial_o *)sub_1C22084(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v3, 0LL);
  this->fields.mStateMaterial = v3;
  sub_1C21DDC(&this->fields.mStateMaterial, v3);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v4;
  sub_1C21DDC(&this->fields.imageIdList, v4);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v5;
  sub_1C21DDC(&this->fields.materialImageIdList, v5);
  v6 = sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v6 )
    sub_1C22094(0LL, v7);
  v8 = *(_DWORD *)(v6 + 24);
  if ( !v8 || (*(_DWORD *)(v6 + 40) = 0, *(_QWORD *)(v6 + 32) = 0x43900000C4000000LL, v8 == 1) )
    sub_1C2209C(v6, v6);
  *(_DWORD *)(v6 + 52) = 0;
  *(_QWORD *)(v6 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v6;
  sub_1C21DDC(&this->fields.defaultMultipleServantPoses, v6);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  v11 = (struct System_Int64_array *)sub_1C21EE0(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v11;
  sub_1C21DDC(&this->fields.multipleServantUsrIds, v11);
  v12 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v12;
  sub_1C21DDC(&this->fields.multipleLimitCounts, v12);
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
    sub_1C22094(0LL, method);
  AccountLinkageComponent__LinkageStatusCheck(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__AccountLinkageStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B62 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_LinkageStatusCheckCallback__);
    sub_1C21E38(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4BD7B62 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C22094(0LL, v5);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall MyRoomControl__AddSpecialImageLimitCount(
        MyRoomControl_o *this,
        System_Collections_Generic_List_int__o **imageLimitCountList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v6; // x20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  MyroomServantSpecialImageMaster_o *v9; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t current; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  MyroomServantSpecialImageEntity_array *EntitiesByBaseLimitCount; // x0
  __int64 v17; // x1
  MyroomServantSpecialImageEntity_array *v18; // x23
  int max_length; // w8
  int i; // w29
  MyroomServantSpecialImageEntity_o *v21; // x8
  int32_t num; // w24
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD7BB2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD7BB2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  if ( !*imageLimitCountList )
    sub_1C22094(Master_object, v8);
  v9 = (MyroomServantSpecialImageMaster_o *)Master_object;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    *imageLimitCountList,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v10 )
      break;
    if ( !v6 )
      sub_1C22094(v10, v11);
    current = v27.fields._current;
    items = v6->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !items )
      sub_1C22094(v10, v11);
    size = v6->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        current,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
    if ( !v9 )
      sub_1C22094(v10, v11);
    EntitiesByBaseLimitCount = MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(v9, svtId, current, 0LL);
    v18 = EntitiesByBaseLimitCount;
    if ( !EntitiesByBaseLimitCount )
      sub_1C22094(0LL, v17);
    max_length = EntitiesByBaseLimitCount->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C2209C(EntitiesByBaseLimitCount, v17);
        v21 = v18->m_Items[i];
        if ( !v21 )
          sub_1C22094(EntitiesByBaseLimitCount, v17);
        num = v21->fields.num;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        EntitiesByBaseLimitCount = (MyroomServantSpecialImageEntity_array *)ImageLimitCount__SpecialNumToSpecialImageLimitCount(
                                                                              num,
                                                                              0LL);
        v17 = (unsigned int)EntitiesByBaseLimitCount;
        v23 = v6->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !v23 )
          sub_1C22094(EntitiesByBaseLimitCount, (unsigned int)EntitiesByBaseLimitCount);
        v25 = v6->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            (int32_t)EntitiesByBaseLimitCount,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = v25 + 1;
          v23->m_Items[v25 + 1] = (int)EntitiesByBaseLimitCount;
        }
        max_length = v18->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *imageLimitCountList = v6;
  sub_1C21DDC(imageLimitCountList, v6);
}


void __fastcall MyRoomControl__AutoDelinkAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v12; // 0:x3.8
  System_Nullable_int__o v13; // 0:x4.8

  if ( (byte_4BD7B65 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageComponent_TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__319_0__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_2005/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    sub_1C21E38(&StringLiteral_3452/*"CAN_CONTINUE_DEVICE"*/);
    byte_4BD7B65 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__319_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v13 = msgFontSize,
        v12 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v12, v13, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1C22094(myRoomFsm, v8);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3452/*"CAN_CONTINUE_DEVICE"*/, 0LL);
  MyRoomControl__HideContinueDeviceMenu(this, v9);
}


void __fastcall MyRoomControl__BlockTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UIWidget_o *changeBGBtnImg; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v10; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7B74 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7B74 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v3->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v4);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v12, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v13, 0LL);
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
  v8 = *(_QWORD *)&changeBGBtnImg->fields.mChanged;
  v7 = *(_QWORD *)&changeBGBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v11, 0LL);
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
    v14.fields.r = 0.5;
    v14.fields.g = 0.5;
    v14.fields.b = 0.5;
    v14.fields.a = 1.0;
    UIWidget__set_color(changeBGBtnImg, v14, 0LL);
    v10 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v10 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v10->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.mBlocker;
  if ( !changeBGBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeBGBtnImg, 1, 0LL),
        (changeBGBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_25:
    sub_1C22094(changeBGBtnImg, v5);
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

  if ( (byte_4BD7BA2 & 1) == 0 )
  {
    sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BD7BA2 = 1;
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


System_Collections_IEnumerator_o *__fastcall MyRoomControl__CaptureServant(
        MyRoomControl_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  MyRoomControl__CaptureServant_d__411_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BD7B9D & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__CaptureServant_d__411_TypeInfo);
    byte_4BD7B9D = 1;
  }
  v7 = (MyRoomControl__CaptureServant_d__411_o *)sub_1C22084(MyRoomControl__CaptureServant_d__411_TypeInfo);
  MyRoomControl__CaptureServant_d__411___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  v7->fields.__4__this = this;
  sub_1C21DDC(&v7->fields.__4__this, this);
  v7->fields.width = width;
  v7->fields.height = height;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeDisp(MyRoomControl_o *this, bool isSePlay, const MethodInfo *method)
{
  char v3; // vf
  MyRoomControl_c *v6; // x0
  const MethodInfo *v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v15; // s0
  float v16; // s9
  float v17; // s1
  float v18; // s8
  const MethodInfo *v19; // x2
  float v20; // s2
  float v21; // s10
  MyRoomControl_o *v22; // x0
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x2
  float v25; // s9
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  int32_t v28; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x3
  MyRoomControl_c *v32; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  StandFigureBack_o *v43; // x20
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x1
  UnityEngine_Vector3_o v52; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7B71 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_ChangeDisp__);
    sub_1C21E38(&Method_MyRoomControl__ChangeDisp_b__341_0__);
    sub_1C21E38(&Method_MyRoomControl__ChangeDisp_b__341_1__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&StringLiteral_11482/*"ReleaseTouch"*/);
    byte_4BD7B71 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_29;
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v6->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v6->static_fields->BUTTON_DISP_CHANGE) == 0) )
  {
LABEL_29:
    v29 = Method_MyRoomControl_ChangeDisp__;
    if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_ChangeDisp__);
    v30 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v7);
    if ( isSePlay )
    {
      v8 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_ChangeDisp__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    }
    mShowPos = this->fields.mShowPos;
    moveTarget = this->fields.mMainObj;
    moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
    moveHidePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    v52 = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    switch ( this->fields.type )
    {
      case 1:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v13);
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
          &v52,
          v13);
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
        v15 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v16 = *(float *)&v15,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v17 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v18 = v17,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_53:
          sub_1C22094(soundPlayerComp, v12);
        }
        *(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)soundPlayerComp,
                                                 0LL);
        switch ( this->fields.mState )
        {
          case 0:
            v21 = v20;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v19);
            MyRoomControl__setupSortWindowUIMoveData(
              v22,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v23);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, v52, v24);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_53;
            v25 = -v16;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v26);
            v57.fields.x = v25;
            v57.fields.y = v18;
            v57.fields.z = v21;
            MyRoomControl__moveControl(this, this->fields.svtObj, v57, (System_String_o *)StringLiteral_11482/*"ReleaseTouch"*/, v27);
            v28 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_53;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v32 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v32 = MyRoomControl_TypeInfo;
            }
            v58.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v58.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v58.fields.x = v32->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v58, 0LL, v31);
            v59.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v59.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v59.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v59, 0LL, v34);
            v60.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v60.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v60.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v60, 0LL, v35);
            v61.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v61.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v61.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v61, 0LL, v36);
            v62.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v62.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v62.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v62, (System_String_o *)StringLiteral_11482/*"ReleaseTouch"*/, v37);
            v63.fields.y = this->fields.helpBtnInitPos.fields.y;
            v63.fields.z = this->fields.helpBtnInitPos.fields.z;
            v63.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v63, 0LL, v38);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v28 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v12);
            standFigureBack = this->fields.standFigureBack;
            v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(v40, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__341_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_53;
            StandFigureBack__Fadeout(standFigureBack, v40, 0LL);
            v28 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v19);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v41);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v42);
            v43 = this->fields.standFigureBack;
            v44 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(v44, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__341_1__, 0LL);
            if ( !v43 )
              goto LABEL_53;
            StandFigureBack__Fadein(v43, v44, 0LL);
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
              v45);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v46);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v47);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v48);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v49);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v50);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0LL);
            v28 = 0;
            break;
          default:
            goto LABEL_48;
        }
        this->fields.mState = v28;
LABEL_48:
        MyRoomControl__SetMultipleViewButtonColor(this, v12);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v51);
        break;
      default:
        goto LABEL_14;
    }
  }
}


void __fastcall MyRoomControl__ChangeMasterSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_int__int__o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4BD7BAA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__int__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__ChangeMasterSetting_b__426_0__);
    byte_4BD7BAA = 1;
  }
  v3 = (System_Action_int__int__o *)sub_1C22084(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__ChangeMasterSetting_b__426_0__, 0LL);
  MyRoomControl__OpenMasterEquipSettingDialog(this, v3, 0LL, v4);
}


void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass407_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  int32_t v7; // w9
  il2cpp_array_size_t max_length; // w10
  struct ServantPhotoEntity_FaceData_o *v9; // x1
  ServantPhotoEntity_FaceData_o *faceData; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4BD7B9C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass407_0__ChangePhotoCampaignServantFace_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass407_0_TypeInfo);
    byte_4BD7B9C = 1;
  }
  v3 = (MyRoomControl___c__DisplayClass407_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass407_0_TypeInfo);
  MyRoomControl___c__DisplayClass407_0___ctor(v3, 0LL);
  if ( !v3
    || (v3->fields.__4__this = this,
        v4 = sub_1C21DDC(&v3->fields, this),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v7 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v7,
        !photoCampaignFaceList) )
  {
    sub_1C22094(v4, v5);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v7 >= (int)max_length )
  {
    v7 = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  if ( v7 >= max_length )
    sub_1C2209C(v4, v5);
  v9 = photoCampaignFaceList->m_Items[v7];
  v3->fields.faceData = v9;
  sub_1C21DDC(&v3->fields.faceData, v9);
  faceData = v3->fields.faceData;
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v3,
    Method_MyRoomControl___c__DisplayClass407_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  MyRoomControl__SetFacePhotoServant(this, faceData, v11, v12);
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

  if ( (byte_4BD7B78 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B78 = 1;
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
    sub_1C22094(playBtnImg, isSet);
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

  if ( (byte_4BD7B77 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7B77 = 1;
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
    sub_1C22094(standFigureBack, isSet);
  }
LABEL_10:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckCsUnlink(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *SelfUserAccountLinkage; // x0
  __int64 v4; // x1
  int32_t type; // w8
  AccountLinkageComponent_c *v6; // x0
  struct AccountLinkageComponent_StaticFields *v7; // x8
  AccountLinkageComponent_c *v8; // x0
  __int64 *v9; // x8
  AccountLinkageComponent_c *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Instance; // x21
  MyRoomControl___c_c *v13; // x8
  System_Action_o *_9__320_0; // x22
  Il2CppObject *v15; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v20; // 0:x3.8
  System_Nullable_int__o v21; // 0:x4.8

  if ( (byte_4BD7B66 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageComponent_TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__CheckCsUnlink_b__320_0__);
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3451/*"CANNOT_CONTINUE_DEVICE"*/);
    sub_1C21E38(&StringLiteral_2014/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/);
    sub_1C21E38(&StringLiteral_3452/*"CAN_CONTINUE_DEVICE"*/);
    byte_4BD7B66 = 1;
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
      v10 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v10 = AccountLinkageComponent_TypeInfo;
      }
      v10->static_fields->isLinked = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v13 = MyRoomControl___c_TypeInfo;
      }
      _9__320_0 = v13->static_fields->__9__320_0;
      if ( !_9__320_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = MyRoomControl___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__320_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__320_0, v15, Method_MyRoomControl___c__CheckCsUnlink_b__320_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__320_0 = _9__320_0;
        sub_1C21DDC(&static_fields->__9__320_0, _9__320_0);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v21 = msgFontSize;
        v20 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, _9__320_0, v20, v21, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v9 = &StringLiteral_3451/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1C22094(SelfUserAccountLinkage, v4);
    }
    if ( !type )
    {
      v6 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v6 = AccountLinkageComponent_TypeInfo;
      }
      v7 = v6->static_fields;
LABEL_15:
      v7->isLinked = 0;
      goto LABEL_16;
    }
  }
  v8 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v8 = AccountLinkageComponent_TypeInfo;
  }
  v7 = v8->static_fields;
  if ( v7->isLinked )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v7 = AccountLinkageComponent_TypeInfo->static_fields;
    }
    goto LABEL_15;
  }
LABEL_16:
  SelfUserAccountLinkage = this->fields.myRoomFsm;
  if ( !SelfUserAccountLinkage )
    goto LABEL_32;
  v9 = &StringLiteral_3452/*"CAN_CONTINUE_DEVICE"*/;
LABEL_18:
  PlayMakerFSM__SendEvent(SelfUserAccountLinkage, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v5; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v7; // x9

  v2 = this;
  if ( (byte_4BD7B7D & 1) == 0 )
  {
    sub_1C21E38(&MyRoomRootComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_3605/*"CLICK_MATERIAL"*/);
    this = (MyRoomControl_o *)sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7B7D = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v7 = &StringLiteral_7114/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C22094(this, method);
  }
  name = sceneJumpInfo->fields.name;
  v5 = MyRoomRootComponent_TypeInfo;
  if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v5 = MyRoomRootComponent_TypeInfo;
  }
  this = (MyRoomControl_o *)System_String__op_Equality(name, v5->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  myRoomFsm = v2->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  v7 = &StringLiteral_7114/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v7 = &StringLiteral_3605/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C22094(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C22094(0LL, method);
  ExchangeSvtCoinComponent__CloseMenu(exchangeSvtCoinComp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4BD7B8A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__CloseMultipleView_b__386_0__);
    byte_4BD7B8A = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__386_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 0, v5);
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

  if ( (byte_4BD7B88 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6875/*"FinishedCloseMultiServant"*/);
    byte_4BD7B88 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1C22094(mBlocker, method);
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
      sub_1C2209C(mBlocker, method);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6875/*"FinishedCloseMultiServant"*/ : 0LL;
              v19.fields.y = v15;
              v19.fields.x = flt_BFD640[(_DWORD)v7 == 4] + y;
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
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4BD7BA6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__420_0__);
    byte_4BD7BA6 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__420_0__, 0LL);
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
  float v16; // s9
  float v17; // s10
  UnityEngine_GameObject_o *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7BA4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6876/*"FinishedClosePhotoCampaignServant"*/);
    byte_4BD7BA4 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v6 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  v7 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v8 = this->fields.currentPhotoServantPos.fields.x + flt_BFD0B0[!this->fields._IsMasterRight_k__BackingField];
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v20.fields.x = v8;
  v20.fields.y = v7;
  v20.fields.z = v6;
  MyRoomControl__moveControl(this, gameObject, v20, (System_String_o *)StringLiteral_6876/*"FinishedClosePhotoCampaignServant"*/, v10);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(v11, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_1C22094(photoCampaignStandFigureBack, v4);
  }
  v15 = v14 + 0.0;
  v16 = v13 + 0.0;
  v17 = v12 + flt_BFCFA8[!this->fields._IsMasterRight_k__BackingField];
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
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD7B61 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_TypeInfo);
    byte_4BD7B61 = 1;
  }
  v5 = (MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *)sub_1C22084(MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__292___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  v5->fields.__4__this = this;
  sub_1C21DDC(&v5->fields.__4__this, this);
  v5->fields.setEndAction = setEndAction;
  sub_1C21DDC(&v5->fields.setEndAction, setEndAction);
  return (System_Collections_IEnumerator_o *)v5;
}


CRIMoviePlayer_o *__fastcall MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1

  if ( (byte_4BD7B7A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C21E38(&StringLiteral_4025/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4BD7B7A = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_4025/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v3,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        System_Action_o *func,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass403_0_o *v5; // x20
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v12; // x23
  System_Action_o *v13; // x24
  struct UIMasterFigureTextureOld_o *Prefab_39164620; // x1

  if ( (byte_4BD7B98 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass403_0__CreatePhotoMasterFigure_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass403_0_TypeInfo);
    byte_4BD7B98 = 1;
  }
  v5 = (MyRoomControl___c__DisplayClass403_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass403_0_TypeInfo);
  MyRoomControl___c__DisplayClass403_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.__4__this = this;
  sub_1C21DDC(&v5->fields, this);
  v5->fields.func = func;
  sub_1C21DDC(&v5->fields.func, func);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    ActionExtensions__Call(v5->fields.func, 0LL);
    return;
  }
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C22094(photoCampaignStandFigureBack, v7);
  }
  v9 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v12 = v9;
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass403_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  Prefab_39164620 = MasterFigureManagerOld__CreatePrefab_39164620(
                      v12,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v13,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0,
                      0LL);
  this->fields.photoMasterTexture = Prefab_39164620;
  sub_1C21DDC(&this->fields.photoMasterTexture, Prefab_39164620);
}


void __fastcall MyRoomControl__DestroyExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomListControl_o *myRoomListCtr; // x0

  myRoomListCtr = this->fields.myRoomListCtr;
  if ( !myRoomListCtr
    || (MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(myRoomListCtr, 0LL),
        (myRoomListCtr = (MyRoomListControl_o *)this->fields.exchangeSvtCoinComp) == 0LL) )
  {
    sub_1C22094(myRoomListCtr, method);
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
  MyRoomControl___c__DisplayClass384_0_o *v9; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  _BOOL8 v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v15; // x23
  StandFigureBack_o *v16; // x21
  System_Action_o *v17; // x23
  _BOOL4 v18; // w8
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  UnityEngine_Vector3_o *p_moveShowPos; // x10
  float *p_z; // x8
  float x; // s0
  float *p_y; // x10
  int v27; // s1
  int v28; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4BD7B89 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass384_0__DispDefaultMyRoom_b__0__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass384_0__DispDefaultMyRoom_b__1__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass384_0_TypeInfo);
    byte_4BD7B89 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v9 = (MyRoomControl___c__DisplayClass384_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass384_0_TypeInfo);
  MyRoomControl___c__DisplayClass384_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_39;
  v9->fields.callback = callback;
  sub_1C21DDC(&v9->fields, callback);
  v9->fields.__4__this = this;
  sub_1C21DDC(&v9->fields.__4__this, this);
  MyRoomControl__stopSvtVoice(this, v12);
  MyRoomControl__BlockTouch(this, v13);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)v9,
        Method_MyRoomControl___c__DisplayClass384_0__DispDefaultMyRoom_b__0__,
        0LL);
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, v15, 0LL);
    }
    frontObjectManager = this->fields.frontObjectManager;
    if ( frontObjectManager )
    {
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
      goto LABEL_13;
    }
LABEL_39:
    sub_1C22094(frontObjectManager, v11);
  }
  v16 = this->fields.standFigureBack;
  v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass384_0__DispDefaultMyRoom_b__1__,
    0LL);
  if ( !v16 )
    goto LABEL_39;
  StandFigureBack__Fadeout(v16, v17, 0LL);
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
  v18 = isDispDefault && this->fields.isEnableMultipleView;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v18, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  v11 = isDispDefault && (unsigned __int64)this->fields.isEnablePhotoCampaign;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v11, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v22);
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
      v27 = *(_DWORD *)p_y;
      v28 = *(_DWORD *)p_z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v21);
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
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_4BD7B96 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD7B96 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( Instance )
      {
        UIPanel__set_depth((UIPanel_o *)Instance, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_1C22094(Instance, v12);
  }
LABEL_8:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 svtCtr; // x0
  const MethodInfo *v4; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v6; // x20
  MyRoomSvtControl_o *v7; // x21
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  Il2CppObject *v12; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4BD7B45 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__EndLoad_b__240_0__);
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_8445/*"LOAD_END"*/);
    byte_4BD7B45 = 1;
  }
  svtCtr = (__int64)this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_21;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v4);
  if ( SvtVoiceEnt )
  {
    v6 = SvtVoiceEnt;
    svtCtr = (__int64)this->fields.imageIdList;
    if ( !svtCtr )
      goto LABEL_21;
    v7 = this->fields.svtCtr;
    svtCtr = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)svtCtr,
               this->fields.figureSvtDispIdx,
               (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v7 )
      goto LABEL_21;
    MyRoomSvtControl__initFirstPlayVoiceList(v7, v6, svtCtr, 0LL);
  }
  if ( this->fields.sceneJumpInfo )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  svtCtr = (__int64)MyRoomControl___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    svtCtr = (__int64)MyRoomControl___c_TypeInfo;
  }
  v11 = *(System_Action_o **)(*(_QWORD *)(svtCtr + 184) + 24LL);
  if ( !v11 )
  {
    if ( !*(_DWORD *)(svtCtr + 224) )
    {
      j_il2cpp_runtime_class_init_0(svtCtr);
      svtCtr = (__int64)MyRoomControl___c_TypeInfo;
    }
    v12 = **(Il2CppObject ***)(svtCtr + 184);
    v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v11, v12, Method_MyRoomControl___c__EndLoad_b__240_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__240_0 = v11;
    svtCtr = sub_1C21DDC(&static_fields->__9__240_0, v11);
  }
  if ( !Instance )
LABEL_21:
    sub_1C22094(svtCtr, method);
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v11, 0LL);
LABEL_19:
  svtCtr = (__int64)this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8445/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  System_Action_T__o *v5; // x21

  if ( (byte_4BD7B94 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__EndLoadPhotoAsset_b__399_0__);
    byte_4BD7B94 = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v5 = (System_Action_T__o *)sub_1C22084(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo),
        System_Action_Int32Enum____ctor(
          v5,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__399_0__,
          0LL),
        !photoTargetSelectDialog) )
  {
    sub_1C22094(photoCampaignStandFigureBack, method);
  }
  PhotoTargetSelectDialog__Open(photoTargetSelectDialog, (System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *)v5, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4BD7B7E & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7B7E = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1C21DDC(&this->fields.sceneJumpInfo, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v5 )
      sub_1C22094(Instance, v4);
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
    sub_1C22094(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass427_0_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  _BOOL4 IsMasterRight_k__BackingField; // w9
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  bool v9; // zf
  bool v10; // w9
  int32_t v11; // w10
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *v13; // x8
  struct System_Int32_array *multiForm; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4BD7BAB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass427_0__ExchangePosition_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass427_0_TypeInfo);
    byte_4BD7BAB = 1;
  }
  v3 = (MyRoomControl___c__DisplayClass427_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass427_0_TypeInfo);
  MyRoomControl___c__DisplayClass427_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_16;
  v3->fields.__4__this = this;
  v4 = sub_1C21DDC(&v3->fields, this);
  IsMasterRight_k__BackingField = this->fields._IsMasterRight_k__BackingField;
  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v9 = !IsMasterRight_k__BackingField;
  v10 = !IsMasterRight_k__BackingField;
  v11 = v9 ? 2 : 1;
  this->fields.photoMasterPosition = v11;
  this->fields._IsMasterRight_k__BackingField = v10;
  if ( !photoCampaignFaceList )
    goto LABEL_16;
  photoCampaignFaceListIndex = this->fields.photoCampaignFaceListIndex;
  if ( (unsigned int)photoCampaignFaceListIndex >= photoCampaignFaceList->max_length )
    goto LABEL_17;
  v13 = photoCampaignFaceList->m_Items[photoCampaignFaceListIndex];
  if ( !v13 )
    goto LABEL_16;
  multiForm = v13->fields.multiForm;
  if ( !multiForm )
    goto LABEL_16;
  if ( !multiForm->max_length )
LABEL_17:
    sub_1C2209C(v4, v5);
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    &v3->fields.svtMovePos,
    &v3->fields.svtMoveScale,
    v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v3,
    Method_MyRoomControl___c__DisplayClass427_0__ExchangePosition_b__0__,
    0LL);
  if ( !v17 )
LABEL_16:
    sub_1C22094(v4, v5);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall MyRoomControl__FingerGestures_OnGestureEvent(
        MyRoomControl_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  UnityEngine_Object_o *startSelection; // x21
  const MethodInfo *v6; // x2
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4BD7B7C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl_o *)sub_1C21E38(&SwipeGesture_TypeInfo);
    byte_4BD7B7C = 1;
  }
  if ( !gesture )
    sub_1C22094(this, gesture);
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

  if ( (byte_4BD7BA3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7BA3 = 1;
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
  UnityEngine_Object__Destroy_70869612(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_11:
    sub_1C22094(photoCampaignProduction, method);
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
      sub_1C2209C(multipleViewCloseButton, method);
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
    sub_1C22094(multipleViewCloseButton, method);
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
  const MethodInfo *v11; // x2

  if ( (byte_4BD7BA5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD7BA5 = 1;
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
  MyRoomControl__SetPhotoCampaignUi(this, 0, v5);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_34799788(v7, 1.0, 0LL);
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
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v10, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1C21DDC(&this->fields.photoMasterTexture, 0LL);
  }
  if ( (photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL
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
    sub_1C22094(photoCampaignStandFigureBack, method);
  }
  PhotoCampaignComponent__Open(
    (PhotoCampaignComponent_o *)photoCampaignStandFigureBack,
    (int32_t)method,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v11);
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
    sub_1C22094(0LL, v4);
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
    sub_1C22094(photoCampaignStandFigureBack, method);
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
  MyRoomSvtControl_o *v4; // x20
  PlayMakerFSM_o *myRoomFsm; // x8
  System_String_o **v6; // x9

  if ( (byte_4BD7B51 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9459/*"NORMAL_FORM"*/);
    sub_1C21E38(&StringLiteral_3482/*"CHANGE_FORM"*/);
    byte_4BD7B51 = 1;
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
  if ( !svtCtr || (v4 = svtCtr, !HIDWORD(svtCtr->fields.asstName)) )
  {
LABEL_13:
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v6 = (System_String_o **)&StringLiteral_9459/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C22094(svtCtr, method);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  if ( LODWORD(v4->fields.asstName) == (_DWORD)svtCtr )
    v6 = (System_String_o **)&StringLiteral_9459/*"NORMAL_FORM"*/;
  else
    v6 = (System_String_o **)&StringLiteral_3482/*"CHANGE_FORM"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myRoomFsm, *v6, 0LL);
}


UnityEngine_Camera_o *__fastcall MyRoomControl__GetCamera2DUI(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mCamera2DUI;
}


int32_t __fastcall MyRoomControl__GetImageLimitCount(
        MyRoomControl_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD7BB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BD7BB3 = 1;
  }
  entity = 0LL;
  if ( imageLimitCount >= 201 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v7 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0LL);
    if ( !Master_object )
      goto LABEL_13;
    v7 = MyroomServantSpecialImageMaster__TryGetEntity(
           (MyroomServantSpecialImageMaster_o *)Master_object,
           &entity,
           svtId,
           v7,
           0LL);
    if ( (v7 & 1) != 0 )
    {
      if ( entity )
        return entity->fields.baseLimitCount;
LABEL_13:
      sub_1C22094(v7, v8);
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
  struct UISprite_o *photoCampaignFrameSprite; // x8
  float v11; // s8
  float v12; // s9
  struct ManagerConfig_StaticFields *static_fields; // x9
  int *p_WIDTH; // x9
  int *p_mHeight; // x8
  float v16; // s0

  v6 = this;
  if ( (byte_4BD7BA1 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BD7BA1 = 1;
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
    sub_1C22094(v7, v8);
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
    sub_1C22094(v4, method);
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

  if ( (byte_4BD7B7B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BD7B7B = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1C22094(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
}


UnityEngine_Vector3_o __fastcall MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MasterPhotoMaster_o *Master_object; // x0
  __int64 v4; // x1
  float y; // s8
  float offsetX; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v9; // s0
  float v10; // s1
  MasterPhotoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7B9A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_MasterPhotoMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD7B9A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MasterPhotoMaster___);
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
    sub_1C22094(Master_object, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
  v9 = offsetX;
  v10 = y;
  result.fields.z = LocalPositionZ;
  result.fields.y = v10;
  result.fields.x = v9;
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
  float LocalPositionX; // s0
  float v14; // s8
  float v15; // s1
  float y; // s9
  int v17; // w9
  System_Int32_array *v18; // x22
  int v19; // w10
  int v20; // w8
  int32_t photoCampaignType; // w8
  float PhotoSvtScale; // s0
  System_Int32_array *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  float LocalPositionZ; // s0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD7B99 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantScriptMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BD7B99 = 1;
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
    v14 = -LocalPositionX;
  }
  else
  {
    v15 = -256.0;
    if ( !this->fields._IsMasterRight_k__BackingField )
      v15 = 256.0;
    v14 = v15 - LocalPositionX;
  }
  y = this->fields.defaultPhotoServantPos.fields.y;
  photoCampaignStandFigureBack = sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v17 = *(_DWORD *)(photoCampaignStandFigureBack + 24);
  v18 = (System_Int32_array *)photoCampaignStandFigureBack;
  if ( !v17 )
    goto LABEL_42;
  v19 = (int)v14;
  if ( v14 == INFINITY )
    v19 = 0x80000000;
  *(_DWORD *)(photoCampaignStandFigureBack + 32) = v19;
  if ( v17 == 1 )
LABEL_42:
    sub_1C2209C(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  if ( y == INFINITY )
    v20 = 0x80000000;
  else
    v20 = (int)y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = v20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantScriptMaster___);
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
      photoCampaignStandFigureBack = (__int64)ServantScriptEntity__GetPhotoSvtPosition(entity, v18, 0LL);
      if ( entity )
      {
        v18 = (System_Int32_array *)photoCampaignStandFigureBack;
        PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0LL);
        goto LABEL_36;
      }
    }
LABEL_41:
    sub_1C22094(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  }
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  v23 = this->fields._IsMasterRight_k__BackingField
      ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, v18, 0LL)
      : ServantScriptEntity__GetPhotoSvtPositionRight(entity, v18, 0LL);
  v18 = v23;
  photoCampaignStandFigureBack = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  if ( this->fields._IsMasterRight_k__BackingField )
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0LL);
  else
    PhotoSvtScale = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0LL);
LABEL_36:
  *scale = PhotoSvtScale;
  if ( !v18 )
    goto LABEL_41;
LABEL_37:
  if ( v18->max_length < 2 )
    goto LABEL_42;
  v14 = (float)v18->m_Items[1];
  y = (float)v18->m_Items[2];
LABEL_39:
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v24, 0LL);
  position->fields.x = v14;
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
  ServantCostumeEntity_array *Instance; // x0
  __int64 id; // x1
  int max_length; // w8
  ServantCostumeEntity_array *v8; // x20
  unsigned int v9; // w21
  ServantCostumeEntity_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4BD7B7F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7B7F = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C2209C(Instance, id);
      v10 = v8->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v4 )
        break;
      id = (unsigned int)v10->fields.id;
      items = v4->fields._items;
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C22094(Instance, id);
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BD7B3E & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C21E38(&Method_CStateManager_MyRoomControl__getState__);
    byte_4BD7B3E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(this, method);
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
    sub_1C22094(v6, v7);
  return ServantVoiceEntity__getMyRoomVoiceList(svtVoiceEnt, v6, 0LL);
}


void __fastcall MyRoomControl__GoToTitle(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v8; // x23
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0

  if ( (byte_4BD7B6B & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_GoToTitle__);
    sub_1C21E38(&Method_MyRoomControl__GoToTitle_b__331_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_9006/*"MYROOM_TITLE_CONFIRM"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7B6B = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v3 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_GoToTitle__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9006/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__331_0__, 0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1C22094(v10, v9);
  CommonUI__OpenConfirmDialog(
    (CommonUI_o *)Instance,
    v5,
    v6,
    v8,
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
    sub_1C22094(continueDeviceComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceComp, 0, 0LL);
}


void __fastcall MyRoomControl__HideExchangeSvtCoinMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C22094(0LL, method);
  ExchangeSvtCoinComponent__HideMenu(exchangeSvtCoinComp, 0LL);
}


void __fastcall MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BD7BAC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7BAC = 1;
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
    sub_1C22094(gameObject, v4);
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
  MyRoomControl__InitMaterialOnBackground_d__286_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B5E & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__InitMaterialOnBackground_d__286_TypeInfo);
    byte_4BD7B5E = 1;
  }
  v3 = (MyRoomControl__InitMaterialOnBackground_d__286_o *)sub_1C22084(MyRoomControl__InitMaterialOnBackground_d__286_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__286___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v3->fields.__4__this = this;
  sub_1C21DDC(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitServantMenu_d__289_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B60 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__InitServantMenu_d__289_TypeInfo);
    byte_4BD7B60 = 1;
  }
  v3 = (MyRoomControl__InitServantMenu_d__289_o *)sub_1C22084(MyRoomControl__InitServantMenu_d__289_TypeInfo);
  MyRoomControl__InitServantMenu_d__289___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v3->fields.__4__this = this;
  sub_1C21DDC(&v3->fields.__4__this, this);
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

  if ( (byte_4BD7B8C & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B8C = 1;
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

  if ( (byte_4BD7BA7 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7BA7 = 1;
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
  if ( (byte_4BD7B85 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4BD7B85 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1C2209C(this, *(_QWORD *)&index);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1C22094(this, *(_QWORD *)&index);
  }
  return SLODWORD(this->fields.changeLimitBtnInitPos.fields.y) > 15;
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7B4D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15834/*"Wait_Action"*/);
    sub_1C21E38(&StringLiteral_7388/*"Help"*/);
    byte_4BD7B4D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15834/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7388/*"Help"*/, 0LL) )
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
  if ( (float)((float)((float)(v12 - position.fields.z) * (float)(v12 - position.fields.z))
             + (float)((float)((float)(v10 - position.fields.x) * (float)(v10 - position.fields.x))
                     + (float)((float)(v11 - position.fields.y) * (float)(v11 - position.fields.y)))) < 1.0e-10 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_1C22094(myRoomFsm, method);
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
  const MethodInfo *v5; // x1
  int32_t notificationType; // w8

  if ( (byte_4BD7B63 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD7B63 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22632/*"ok"*/, 0LL) )
  {
    notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
    if ( notificationType == 2 )
    {
      MyRoomControl__OverrideAccountLinkage(this, v5);
    }
    else if ( notificationType == 1 )
    {
      MyRoomControl__AutoDelinkAccountLinkage(this, v5);
    }
    else
    {
      MyRoomControl__CheckCsUnlink(this, v5);
    }
  }
}


void __fastcall MyRoomControl__LoadMasterEquip(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Master_object; // x20
  __int64 MasterData_object; // x0
  UserEquipEntity_array *List; // x20
  long double v6; // q0
  __int64 v7; // x8
  __int64 v8; // x0
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v10; // x29
  __int64 *v11; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  unsigned int v13; // w27
  UserEquipEntity_o *v14; // x28
  __int64 v15; // x22
  __int64 v16; // x24
  __int64 v17; // x25
  __int64 v18; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v20; // x0
  UserEquipEntity_array *v21; // x29
  const MethodInfo_32B5A4C **v22; // x20
  __int64 v23; // x25
  __int64 v24; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v30; // x0
  Il2CppObject *v31; // x0
  System_String_o *v32; // x24
  AssetLoader_LoadEndDataHandler_o *v33; // x25
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v37; // x0
  Il2CppObject *v38; // x0
  System_String_o *v39; // x23
  AssetLoader_LoadEndDataHandler_o *v40; // x24
  __int128 v42; // [xsp+10h] [xbp-80h] BYREF
  __int128 v43; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4BD7B92 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass396_0__LoadMasterEquip_b__0__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass396_0__LoadMasterEquip_b__1__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass396_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9090/*"MasterFace/equip{0:D5}"*/);
    byte_4BD7B92 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C73D14(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C73D14(v6);
  MasterData_object = **(_QWORD **)(v8 + 184);
  if ( !MasterData_object )
    goto LABEL_37;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_37;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v10 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v11 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C2209C(MasterData_object, v2);
      v14 = List->m_Items[v13];
      v15 = sub_1C22084(MyRoomControl___c__DisplayClass396_0_TypeInfo);
      MyRoomControl___c__DisplayClass396_0___ctor((MyRoomControl___c__DisplayClass396_0_o *)v15, 0LL);
      if ( !v15 )
        break;
      *(_QWORD *)(v15 + 24) = this;
      MasterData_object = sub_1C21DDC(v15 + 24, this);
      if ( !v14 )
        break;
      v17 = *(_QWORD *)&v14->fields.equipId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v14->fields.equipId.fields.fakeValue;
      if ( !(*v10)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v10);
      *(_QWORD *)&v44.fields.currentCryptoKey = v17;
      *(_QWORD *)&v44.fields.fakeValue = v16;
      MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v44, 0LL);
      if ( !v12 )
        break;
      v18 = v15 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v12,
              (Il2CppObject **)(v15 + 16),
              MasterData_object,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v19 = v10;
      v20 = *v10;
      v21 = List;
      v22 = (const MethodInfo_32B5A4C **)v11;
      v24 = *(_QWORD *)&v14->fields.equipId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v14->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20);
      *(_QWORD *)&v45.fields.currentCryptoKey = v24;
      *(_QWORD *)&v45.fields.fakeValue = v23;
      MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v11 = (__int64 *)v22;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        MasterData_object,
        0LL,
        *v22);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        MasterData_object,
        0LL,
        *v22);
      if ( !*(_QWORD *)v18 )
        break;
      v30 = *v19;
      List = v21;
      v10 = v19;
      v43 = *(_OWORD *)(*(_QWORD *)v18 + 64LL);
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(v30, &v43, v27, v28, v29);
      v32 = System_String__Format((System_String_o *)StringLiteral_9090/*"MasterFace/equip{0:D5}"*/, v31, 0LL);
      v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v33,
        (Il2CppObject *)v15,
        Method_MyRoomControl___c__DisplayClass396_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      MasterData_object = AssetManager__loadAssetStorage(v32, v33, 10, 0LL);
      if ( !*(_QWORD *)v18 )
        break;
      v37 = *v19;
      v42 = *(_OWORD *)(*(_QWORD *)v18 + 80LL);
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(v37, &v42, v34, v35, v36);
      v39 = System_String__Format((System_String_o *)StringLiteral_9090/*"MasterFace/equip{0:D5}"*/, v38, 0LL);
      v40 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v40,
        (Il2CppObject *)v15,
        Method_MyRoomControl___c__DisplayClass396_0__LoadMasterEquip_b__1__,
        0LL);
      MasterData_object = AssetManager__loadAssetStorage(v39, v40, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_37:
    sub_1C22094(MasterData_object, v2);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadMultipleServant_d__380_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B87 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__LoadMultipleServant_d__380_TypeInfo);
    byte_4BD7B87 = 1;
  }
  v3 = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C22084(MyRoomControl__LoadMultipleServant_d__380_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__380___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v3->fields.__4__this = this;
  sub_1C21DDC(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass395_0_o *v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AssetLoader_LoadEndDataHandler_o *v8; // x19

  if ( (byte_4BD7B91 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass395_0__LoadPhotoCampaignAssets_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass395_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9389/*"MyRoom/PhotoCampaign"*/);
    byte_4BD7B91 = 1;
  }
  v5 = (MyRoomControl___c__DisplayClass395_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass395_0_TypeInfo);
  MyRoomControl___c__DisplayClass395_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  v5->fields.__4__this = this;
  sub_1C21DDC(&v5->fields, this);
  v5->fields.callBack = callBack;
  sub_1C21DDC(&v5->fields.callBack, callBack);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass395_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9389/*"MyRoom/PhotoCampaign"*/, v8, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(Instance, v7);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__402_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B97 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__LoadPhotoCampaignServant_d__402_TypeInfo);
    byte_4BD7B97 = 1;
  }
  v3 = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C22084(MyRoomControl__LoadPhotoCampaignServant_d__402_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__402___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v3->fields.__4__this = this;
  sub_1C21DDC(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7B39 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7B39 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD7B55 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__LoadServantForm_b__267_0__);
    byte_4BD7B55 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__267_0__, 0LL);
  if ( !svtCtr )
    sub_1C22094(v5, v6);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v4, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7B56 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&StringLiteral_8445/*"LOAD_END"*/);
    byte_4BD7B56 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v6.fields.r = 1.0;
  v6.fields.g = 1.0;
  v6.fields.b = 1.0;
  v6.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v6, 0LL);
  v5 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v5->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v4);
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
LABEL_8:
    sub_1C22094(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8445/*"LOAD_END"*/, 0LL);
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
  if ( (byte_4BD7B73 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9397/*"MyRoomUIAnimationEnd"*/);
    byte_4BD7B73 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9397/*"MyRoomUIAnimationEnd"*/, v4);
}


void __fastcall MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  const MethodInfo *v4; // x1
  int32_t multipleViewState; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x5
  int32_t photoCampaignState; // w8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x1
  int32_t type; // w8
  int32_t mState; // w8
  int v19; // w9
  char v20; // w8
  __int64 *v21; // x8
  __int64 *v22; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  bool IsOpenFolder; // w0
  System_String_o *ActiveStateName; // x0
  struct NoticeInfoComponent_o *noticeComp; // x8
  struct MaterialCollectionComponent_o *materialCollectionComp; // x20
  MyRoomControl_c *v29; // x0
  struct NoticeInfoComponent_o *v30; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BD7B70 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickBack__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_3633/*"CLOSE_ACCOUNT_LINKAGE"*/);
    sub_1C21E38(&StringLiteral_3641/*"CLOSE_EXCHANGE_SVT_COIN"*/);
    sub_1C21E38(&StringLiteral_3647/*"CLOSE_MATERIAL_COLLECTION"*/);
    sub_1C21E38(&StringLiteral_3646/*"CLOSE_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_3658/*"CLOSE_USER_SERVANT_COIN"*/);
    sub_1C21E38(&StringLiteral_3578/*"CLICK_BACK"*/);
    sub_1C21E38(&StringLiteral_3650/*"CLOSE_NOTICE"*/);
    sub_1C21E38(&StringLiteral_3644/*"CLOSE_GAMEOPTION"*/);
    sub_1C21E38(&StringLiteral_3645/*"CLOSE_ITEMLIST"*/);
    sub_1C21E38(&StringLiteral_3648/*"CLOSE_MATERIAL_COSTUME"*/);
    sub_1C21E38(&StringLiteral_3639/*"CLOSE_CONTINUE_DEVICE"*/);
    sub_1C21E38(&StringLiteral_3634/*"CLOSE_BLACKLIST"*/);
    sub_1C21E38(&StringLiteral_13227/*"State 5"*/);
    sub_1C21E38(&StringLiteral_3653/*"CLOSE_SERIAL_CODE"*/);
    sub_1C21E38(&StringLiteral_3636/*"CLOSE_CHANGE_PROFILE"*/);
    sub_1C21E38(&StringLiteral_3642/*"CLOSE_EXCHANGE_SVT_COIN_LIST"*/);
    sub_1C21E38(&StringLiteral_3654/*"CLOSE_SOUND_PLAYER"*/);
    this = (MyRoomControl_o *)sub_1C21E38(&StringLiteral_3643/*"CLOSE_FAVORITE_CHANGE"*/);
    byte_4BD7B70 = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_79;
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
          v14 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickBack__);
          v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v16);
        }
        else if ( multipleViewState == 1 )
        {
          v6 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v6 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickBack__);
          v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
          v2->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v2, v8);
        }
        return;
      }
      if ( v2->fields.photoCampaignState )
      {
        v9 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickBack__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0LL);
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
              v12);
            break;
          case 2:
            v2->fields.photoCampaignServantUsrId = 0LL;
            v2->fields.photoCampaignState = 1;
            v2->fields.photoCampaignLimitCount = 0;
            MyRoomControl__ClosePhotoCampaignServant(v2, v11);
            break;
          case 1:
            v2->fields.photoCampaignState = 0;
            MyRoomControl__ClosePhotoCampaignPanel(v2, v11);
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
      method = (const MethodInfo *)StringLiteral_3578/*"CLICK_BACK"*/;
      v19 = type - 1;
      v20 = 0;
      switch ( v19 )
      {
        case 0:
          v21 = &StringLiteral_3646/*"CLOSE_MATERIAL"*/;
          goto LABEL_48;
        case 1:
          v22 = &StringLiteral_3647/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_61;
        case 2:
          v22 = &StringLiteral_3645/*"CLOSE_ITEMLIST"*/;
          goto LABEL_61;
        case 3:
          v22 = &StringLiteral_3636/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_61;
        case 4:
          optionComp = v2->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v20 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              method = (const MethodInfo *)StringLiteral_3634/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v22 = &StringLiteral_3644/*"CLOSE_GAMEOPTION"*/;
LABEL_61:
            method = (const MethodInfo *)*v22;
            v20 = 0;
          }
LABEL_62:
          if ( ((unsigned __int8)v20 & (v2->fields.mState != 0)) != 0 )
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
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13227/*"State 5"*/, 0LL) )
              return;
            this = (MyRoomControl_o *)v2->fields.myRoomData;
            if ( this )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0LL);
              if ( this )
              {
                noticeComp = this->fields.noticeComp;
                *(_QWORD *)&v31.fields.fakeValue = this->fields.materialCollectionComp;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  v30 = this->fields.noticeComp;
                  materialCollectionComp = this->fields.materialCollectionComp;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  noticeComp = v30;
                  *(_QWORD *)&v31.fields.fakeValue = materialCollectionComp;
                }
                *(_QWORD *)&v31.fields.currentCryptoKey = noticeComp;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v31, 0LL) < 1
                  || v2->fields.isHeroine && v2->fields.isHeroineReave )
                {
                  return;
                }
                this = (MyRoomControl_o *)v2->fields.changeBtnImg;
                if ( this )
                {
                  v32.fields.r = 1.0;
                  v32.fields.g = 1.0;
                  v32.fields.b = 1.0;
                  v32.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)this, v32, 0LL);
                  v29 = MyRoomControl_TypeInfo;
                  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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
          v21 = &StringLiteral_3650/*"CLOSE_NOTICE"*/;
LABEL_48:
          method = (const MethodInfo *)*v21;
          v20 = 1;
          goto LABEL_62;
        case 6:
          v22 = &StringLiteral_3653/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_61;
        case 7:
          v22 = &StringLiteral_3639/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_61;
        case 8:
          v22 = &StringLiteral_3643/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_61;
        case 9:
          v22 = &StringLiteral_3654/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_61;
        case 10:
          v22 = &StringLiteral_3648/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_61;
        case 16:
          v22 = &StringLiteral_3658/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_61;
        case 17:
          v22 = &StringLiteral_3633/*"CLOSE_ACCOUNT_LINKAGE"*/;
          goto LABEL_61;
        case 18:
          this = (MyRoomControl_o *)v2->fields.exchangeSvtCoinComp;
          if ( !this )
            break;
          IsOpenFolder = ExchangeSvtCoinComponent__IsOpenFolder((ExchangeSvtCoinComponent_o *)this, 0LL);
          v22 = (__int64 *)&StringLiteral_3642/*"CLOSE_EXCHANGE_SVT_COIN_LIST"*/;
          if ( !IsOpenFolder )
            v22 = (__int64 *)&StringLiteral_3641/*"CLOSE_EXCHANGE_SVT_COIN"*/;
          goto LABEL_61;
        default:
          goto LABEL_62;
      }
LABEL_79:
      sub_1C22094(this, method);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  Il2CppObject *Entity; // x21
  const MethodInfo *v14; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t materialFigureSvtDispIdx; // w9
  int32_t v17; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct FsmTemplate_o *fsmTemplate; // x20
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x21
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4BD7B4C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_MyRoomControl_OnClickChangeLimit__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_15834/*"Wait_Action"*/);
    sub_1C21E38(&StringLiteral_3486/*"CHANGE_LIMIT"*/);
    sub_1C21E38(&StringLiteral_7388/*"Help"*/);
    byte_4BD7B4C = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2 | ((this->fields.buttonFlag & v4->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
    goto LABEL_30;
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15834/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v7 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v7, (System_String_o *)StringLiteral_7388/*"Help"*/, 0LL) )
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
      *(_QWORD *)&v25.fields.currentCryptoKey = fsm;
      *(_QWORD *)&v25.fields.fakeValue = fsmTemplate;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v25, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v18 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickChangeLimit__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v12 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v12;
  *(_QWORD *)&v24.fields.fakeValue = v11;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v24, 0LL);
  if ( !v10 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v10,
             (int32_t)myRoomFsm,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v14);
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
        v17 = materialFigureSvtDispIdx + 1;
      else
        v17 = 0;
      this->fields.materialFigureSvtDispIdx = v17;
LABEL_40:
      MyRoomControl__BlockTouch(this, method);
      this->fields.isSvtLoading = 1;
      v22 = Method_MyRoomControl_OnClickChangeLimit__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickChangeLimit__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3486/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1C22094(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD7B82 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickCloseMultipleView__);
    byte_4BD7B82 = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
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

  if ( (byte_4BD7BAD & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickDispPhotoUi__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7BAD = 1;
  }
  v3 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickDispPhotoUi__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C22094(gameObject, v6);
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v9);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4BD7B90 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickEventLogSortKind__);
    byte_4BD7B90 = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
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
    sub_1C22094(materialCollectionServantListViewManager, v5);
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

  if ( (byte_4BD7B83 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickLeftServant__);
    byte_4BD7B83 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
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
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t photoCampaignState; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *v8; // x20
  float v9; // s11
  float v10; // s10
  float v11; // s9
  float v12; // s5
  float v13; // s6
  float v14; // s7
  float v15; // s4
  UnityEngine_GameObject_o *v16; // x0
  float x; // s12
  float v18; // s13
  float v19; // s14
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x20
  float v22; // s5
  float v23; // s6
  float v24; // s7
  float v25; // s4
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float y; // s5
  float z; // s6
  float w; // s7
  float v36; // s4
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x20
  float v40; // s5
  float v41; // s6
  float v42; // s7
  float v43; // s4
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  TweenAlpha_o *v47; // x20
  __int64 v48; // x1
  UnityEngine_Vector3_o v49; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v56; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v57; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v58; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v59; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4BD7BA0 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    sub_1C21E38(&StringLiteral_6874/*"FinishedCloseFullScreenPhotoCampaign"*/);
    byte_4BD7BA0 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v49.fields.z = 0.0;
  *(_QWORD *)&v49.fields.x = 0LL;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_37;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0LL);
  photoCampaignState = this->fields.photoCampaignState;
  switch ( photoCampaignState )
  {
    case 6:
      v28 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v29 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v30 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v31 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 1, 0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v53.fields.x = 0.0;
      v53.fields.y = 0.0;
      v53.fields.z = 0.0;
      v62 = UnityEngine_Quaternion__Internal_FromEulerRad(v53, 0LL);
      y = v62.fields.y;
      z = v62.fields.z;
      w = v62.fields.w;
      v62.fields.y = v62.fields.x;
      v62.fields.z = y;
      v62.fields.w = z;
      v36 = w;
      TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v62.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v56.fields.x = 1.0;
      v56.fields.y = 1.0;
      v56.fields.z = 1.0;
      TweenScale__Begin(v37, 0.2, v56, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v57.fields.x = 0.0;
      v57.fields.y = 11.0;
      v57.fields.z = 0.0;
      TweenPosition__Begin(v38, 0.2, v57, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v54.fields.x = 0.0;
      v54.fields.y = 0.0;
      v54.fields.z = 0.0;
      v63 = UnityEngine_Quaternion__Internal_FromEulerRad(v54, 0LL);
      v40 = v63.fields.y;
      v41 = v63.fields.z;
      v42 = v63.fields.w;
      v63.fields.y = v63.fields.x;
      v63.fields.z = v40;
      v63.fields.w = v41;
      v43 = v42;
      TweenRotation__Begin(v39, 0.2, *(UnityEngine_Quaternion_o *)&v63.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v58.fields.x = 1.0;
      v58.fields.y = 1.0;
      v58.fields.z = 1.0;
      TweenScale__Begin(v44, 0.2, v58, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v59.fields.x = 0.0;
      v59.fields.y = 11.0;
      v59.fields.z = 0.0;
      TweenPosition__Begin(v45, 0.2, v59, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
LABEL_34:
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v47 = TweenAlpha__Begin(v46, 0.2, 0.0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !v47 )
        goto LABEL_37;
      v47->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
      sub_1C21DDC(&v47->fields.eventReceiver, maskBoxCollider);
      v48 = StringLiteral_6874/*"FinishedCloseFullScreenPhotoCampaign"*/;
      v47->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6874/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1C21DDC(&v47->fields.callWhenFinished, v48);
      return;
    case 4:
      v5 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
      this->fields.photoCampaignState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v49, v7);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        v9 = v49.fields.x * 0.017453;
        v10 = v49.fields.y * 0.017453;
        v11 = v49.fields.z * 0.017453;
        v51.fields.x = v49.fields.x * 0.017453;
        v51.fields.y = v49.fields.y * 0.017453;
        v51.fields.z = v49.fields.z * 0.017453;
        v60 = UnityEngine_Quaternion__Internal_FromEulerRad(v51, 0LL);
        v12 = v60.fields.y;
        v13 = v60.fields.z;
        v14 = v60.fields.w;
        v60.fields.y = v60.fields.x;
        v60.fields.z = v12;
        v60.fields.w = v13;
        v15 = v14;
        TweenRotation__Begin(v8, 0.2, *(UnityEngine_Quaternion_o *)&v60.fields.y, 0LL);
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
            if ( !byte_4BD6BB1 )
            {
              sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB1 = 1;
            }
            TweenPosition__Begin(v20, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              v52.fields.x = v9;
              v52.fields.y = v10;
              v52.fields.z = v11;
              v61 = UnityEngine_Quaternion__Internal_FromEulerRad(v52, 0LL);
              v22 = v61.fields.y;
              v23 = v61.fields.z;
              v24 = v61.fields.w;
              v61.fields.y = v61.fields.x;
              v61.fields.z = v22;
              v61.fields.w = v23;
              v25 = v24;
              TweenRotation__Begin(v21, 0.2, *(UnityEngine_Quaternion_o *)&v61.fields.y, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v55.fields.x = x;
                v55.fields.y = v18;
                v55.fields.z = v19;
                TweenScale__Begin(v26, 0.2, v55, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                  if ( !byte_4BD6BB1 )
                  {
                    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB1 = 1;
                  }
                  TweenPosition__Begin(v27, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
      sub_1C22094(maskBoxCollider, method);
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

  if ( (byte_4BD7B9E & 1) == 0 )
  {
    sub_1C21E38(&TouchEffectManager_TypeInfo);
    byte_4BD7B9E = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1C22094(backBtn, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall MyRoomControl__OnClickPhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct UIPanel_o *v8; // x8

  if ( (byte_4BD7BAE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C21E38(&Method_MyRoomControl_OnClickPhotoServant__);
    byte_4BD7BAE = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        photoMasterPanel = this->fields.photoMasterPanel;
        if ( photoMasterPanel )
        {
          v5 = (UIPanel_o *)photoCampaignStandFigureBack;
          if ( SLODWORD(photoCampaignStandFigureBack[13].monitor) > photoMasterPanel->fields.mDepth )
            return;
          v6 = Method_MyRoomControl_OnClickPhotoServant__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoServant__ + 83) & 2) != 0 )
            v6 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickPhotoServant__);
          v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
          v8 = this->fields.photoMasterPanel;
          if ( v8 )
          {
            UIPanel__set_depth(v5, v8->fields.mDepth + 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1C22094(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD7B84 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickRightServant__);
    byte_4BD7B84 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 1, v6);
  }
}


void __fastcall MyRoomControl__OnClickSelectMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  bool IsEnableMultipleViewButton; // w0
  _QWORD *v7; // x8
  bool v8; // w20
  System_Reflection_MethodBase_o *v9; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v11; // x20
  int max_length; // w9
  struct System_Int64_array *v13; // x0
  struct System_Int32_array *v14; // x0
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x4

  if ( (byte_4BD7B80 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_OnClickSelectMultipleServant__);
    sub_1C21E38(&Method_MyRoomControl__OnClickSelectMultipleServant_b__372_0__);
    sub_1C21E38(&StringLiteral_15834/*"Wait_Action"*/);
    sub_1C21E38(&StringLiteral_7388/*"Help"*/);
    byte_4BD7B80 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15834/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7388/*"Help"*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v7 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v8 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
  if ( !v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1C22094(myRoomFsm, method);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_1C2209C(myRoomFsm, method);
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v11];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v11;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_16;
  }
  v13 = (struct System_Int64_array *)sub_1C21EE0(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v13;
  sub_1C21DDC(&this->fields.multipleServantUsrIds, v13);
  v14 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v14;
  sub_1C21DDC(&this->fields.multipleLimitCounts, v14);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__372_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v15, 1, v16);
}


void __fastcall MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  bool IsEnablePhotoCampaignButton; // w0
  _QWORD *v7; // x8
  bool v8; // w20
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4BD7B93 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_EndLoadPhotoAsset__);
    sub_1C21E38(&Method_MyRoomControl_OnClickSelectPhotoCampaign__);
    sub_1C21E38(&StringLiteral_15834/*"Wait_Action"*/);
    sub_1C21E38(&StringLiteral_7388/*"Help"*/);
    byte_4BD7B93 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15834/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7388/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1C22094(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v7 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v8 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
  if ( v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndLoadPhotoAsset__, 0LL);
    MyRoomControl__LoadPhotoCampaignAssets(this, v10, v11);
    if ( !this->fields.isLoadMasterEquip )
    {
      this->fields.isLoadMasterEquip = 1;
      MyRoomControl__LoadMasterEquip(this, v12);
    }
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BD7B8F & 1) == 0 )
  {
    sub_1C21E38(&MyRoomRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD7B8F = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C22094(Instance, v4);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4BD7B50 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickSvt__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&StringLiteral_10601/*"PLAY_VOICE"*/);
    byte_4BD7B50 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_12;
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2 | ((this->fields.buttonFlag & v4->static_fields->BUTTON_VOICE_PLAY) == 0) )
  {
LABEL_12:
    v6 = Method_MyRoomControl_OnClickSvt__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickSvt__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickSvt__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
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
        MyRoomControl__setNormalFace_32260212(this, 1, v9);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10601/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_1C22094(svtCtr, v5);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD7B81 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickUiDisableMultipleView__);
    byte_4BD7B81 = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v5);
}


void __fastcall MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v4; // x1
  _QWORD *monitor; // x8
  __int64 methodPtr_low; // x11
  __int64 v7; // x8
  MyRoomStateMaterial_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v12; // x2
  _BOOL4 v13; // w19

  if ( (byte_4BD7B8E & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_OnClickValentineListChange__);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&MyRoomRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD7B8E = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v7 = monitor[8];
  if ( !v7 )
    goto LABEL_16;
  v8 = *(MyRoomStateMaterial_o **)(v7 + 888);
  v9 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnClickValentineListChange__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v8
    || (MyRoomStateMaterial__ValentineListMomentChange(v8, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_16:
    sub_1C22094(Instance, v4);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v12);
  v13 = this->fields.IsListActive;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SaveIsListActive(v13, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4BD7B3C & 1) == 0 )
  {
    sub_1C21E38(&Gesture_EventHandler_TypeInfo);
    sub_1C21E38(&FingerGestures_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_FingerGestures_OnGestureEvent__);
    byte_4BD7B3C = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C22084(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
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

  if ( (byte_4BD7BAF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C21E38(&Method_MyRoomControl_OnclickPhotoMaster__);
    byte_4BD7BAF = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      photoMasterPanel = this->fields.photoMasterPanel;
      if ( photoMasterPanel )
      {
        v5 = (UIPanel_o *)photoCampaignStandFigureBack;
        if ( photoCampaignStandFigureBack )
        {
          if ( photoMasterPanel->fields.mDepth > SLODWORD(photoCampaignStandFigureBack[13].monitor) )
            return;
          v6 = Method_MyRoomControl_OnclickPhotoMaster__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnclickPhotoMaster__ + 83) & 2) != 0 )
            v6 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_OnclickPhotoMaster__);
          v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
          v8 = this->fields.photoMasterPanel;
          if ( v8 )
          {
            UIPanel__set_depth(v5, v8->fields.mDepth - 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1C22094(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C22094(0LL, method);
  AccountLinkageComponent__OpenMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__OpenExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C22094(0LL, method);
  ExchangeSvtCoinComponent__OpenMenu(exchangeSvtCoinComp, 0LL);
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

  if ( (byte_4BD7B95 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_SetMaskCollider__);
    byte_4BD7B95 = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v10 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1C22094(v11, v12);
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
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *MultipleServant; // x1

  this->fields.multipleServantUsrIds = usrSvtIds;
  sub_1C21DDC(&this->fields.multipleServantUsrIds, usrSvtIds);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1C21DDC(&this->fields.multipleLimitCounts, imageLimitCounts);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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
  const MethodInfo *v15; // x6

  if ( (byte_4BD7B8B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_SetMaskCollider__);
    byte_4BD7B8B = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v12 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v12, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1C22094(v13, v14);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v12, callback, index, v15);
}


void __fastcall MyRoomControl__OverrideAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v12; // 0:x3.8
  System_Nullable_int__o v13; // 0:x4.8

  if ( (byte_4BD7B64 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageComponent_TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__OverrideAccountLinkage_b__318_0__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_2016/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_3452/*"CAN_CONTINUE_DEVICE"*/);
    byte_4BD7B64 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__318_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v13 = msgFontSize,
        v12 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v12, v13, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1C22094(myRoomFsm, v8);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3452/*"CAN_CONTINUE_DEVICE"*/, 0LL);
  MyRoomControl__HideContinueDeviceMenu(this, v9);
}


void __fastcall MyRoomControl__PlayOpening(
        MyRoomControl_o *this,
        System_String_o *fileName,
        System_String_o *assetPath,
        bool isCanSkip,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass359_0_o *v8; // x24
  MyRoomControl_o *v9; // x0
  const MethodInfo *v10; // x1
  CRIMoviePlayer_o *CriMoviePlayerObject; // x0
  __int64 v12; // x1
  CRIMoviePlayer_o **p_player; // x22
  CRIMoviePlayer_o *player; // x23
  BgmManager_c *v15; // x0
  float masterVolume; // s8
  System_Action_o *v17; // x25

  if ( (byte_4BD7B79 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass359_0__PlayOpening_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass359_0_TypeInfo);
    byte_4BD7B79 = 1;
  }
  v8 = (MyRoomControl___c__DisplayClass359_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass359_0_TypeInfo);
  MyRoomControl___c__DisplayClass359_0___ctor(v8, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v9, v10);
  if ( !v8 )
    goto LABEL_13;
  v8->fields.player = CriMoviePlayerObject;
  p_player = &v8->fields.player;
  sub_1C21DDC(&v8->fields, CriMoviePlayerObject);
  player = v8->fields.player;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4BD7BC6 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BD7BC6 = 1;
  }
  v15 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v15 = BgmManager_TypeInfo;
  }
  masterVolume = v15->static_fields->masterVolume;
  v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v8, Method_MyRoomControl___c__DisplayClass359_0__PlayOpening_b__0__, 0LL);
  if ( !player
    || (CRIMoviePlayer__Initialize(player, fileName, assetPath, masterVolume, isCanSkip, 0LL, v17, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *p_player) == 0LL) )
  {
LABEL_13:
    sub_1C22094(CriMoviePlayerObject, v12);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  AssetData_o *photoCampaignAssetData; // x20
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v11; // x21
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  System_Object_array *v13; // x21
  UnityEngine_Object_o *photoMasterTexture; // x20
  AssetData_o *combineAssetData; // x20
  struct AssetData_o **p_combineAssetData; // x19

  if ( (byte_4BD7BB0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__ToArray__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7BB0 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1C21DDC(&this->fields.photoCampaignShutterEffect, 0LL);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1C21DDC(&this->fields.photoCampaignCameraEffect, 0LL);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1C21DDC(&this->fields.photoLayerChangeObj, 0LL);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39034872(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1C21DDC(&this->fields.photoCampaignAssetData, 0LL);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !v6 )
      goto LABEL_42;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1C21DDC(&this->fields.photoTargetSelectDialog, 0LL);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !v6 )
      goto LABEL_42;
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v9, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1C21DDC(&this->fields.photoSettingButtonComponent, 0LL);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !v6 )
      goto LABEL_42;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v11, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1C21DDC(&this->fields.masterEquipSettingDialog, 0LL);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v13 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39035080((AssetData_array *)v13, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1C21DDC(&this->fields.masterEquipAssetData, 0LL);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
    if ( v6 )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)v6, 0LL);
      this->fields.photoMasterTexture = 0LL;
      sub_1C21DDC(&this->fields.photoMasterTexture, 0LL);
      goto LABEL_37;
    }
LABEL_42:
    sub_1C22094(v6, v5);
  }
LABEL_37:
  combineAssetData = this->fields.combineAssetData;
  if ( combineAssetData )
  {
    p_combineAssetData = &this->fields.combineAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39034872(combineAssetData, 0LL);
    *p_combineAssetData = 0LL;
    sub_1C21DDC(p_combineAssetData, 0LL);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  struct System_String_o **p_asstName; // x20

  if ( (byte_4BD7B3A & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD7B3A = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = &this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    *p_asstName = 0LL;
    sub_1C21DDC(p_asstName, 0LL);
  }
}


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
  __int64 v13; // x1
  UIWidget_o *playBtnImg; // x0
  __int64 v15; // x20
  __int64 v16; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v18; // w20
  System_String_o *ActiveStateName; // x0
  bool v20; // w0
  MyRoomControl_c *v21; // x0
  MyRoomControl_c *v22; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7B75 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_13227/*"State 5"*/);
    byte_4BD7B75 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
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
  if ( !playBtnImg )
    goto LABEL_35;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v25, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  if ( !playBtnImg )
    goto LABEL_35;
  v26.fields.r = 1.0;
  v26.fields.g = 1.0;
  v26.fields.b = 1.0;
  v26.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v26, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !playBtnImg )
    goto LABEL_35;
  playBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)playBtnImg, this->fields.fvrUsrSvtId, 0LL);
  if ( !playBtnImg )
    goto LABEL_35;
  v16 = *(_QWORD *)&playBtnImg->fields.mChanged;
  v15 = *(_QWORD *)&playBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v16;
  *(_QWORD *)&v24.fields.fakeValue = v15;
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v24, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_35;
    v18 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v18 = (int)playBtnImg;
  }
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
    goto LABEL_35;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)playBtnImg, 0LL);
  v20 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13227/*"State 5"*/, 0LL);
  if ( v18 >= 1 && v20 )
  {
    playBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !playBtnImg )
      goto LABEL_35;
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    UIWidget__set_color(playBtnImg, v27, 0LL);
    v21 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v21 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v21->static_fields->BUTTON_LIMIT_CHANGE;
  }
  playBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !playBtnImg )
    goto LABEL_35;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v28, 0LL);
  v22 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v22 = MyRoomControl_TypeInfo;
  }
  static_fields = v22->static_fields;
  playBtnImg = (UIWidget_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !playBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playBtnImg, 0, 0LL),
        (playBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_35:
    sub_1C22094(playBtnImg, v13);
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
    sub_1C22094(0LL, v3);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 90, 0, 0LL);
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
    sub_1C22094(0LL, v5);
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
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v4; // x0
  int v5; // w8
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BD7B4A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (MyRoomControl_o *)sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B4A = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1C22094(this, method);
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
    v8.fields.r = 0.5;
    v8.fields.g = 0.5;
    v8.fields.b = 0.5;
    v8.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v8, 0LL);
    v6 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v6 = MyRoomControl_TypeInfo;
    }
    v5 = v2->fields.buttonFlag & ~v6->static_fields->BUTTON_LIMIT_CHANGE;
  }
  else
  {
    if ( !this )
      goto LABEL_17;
    v7.fields.r = 1.0;
    v7.fields.g = 1.0;
    v7.fields.b = 1.0;
    v7.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v7, 0LL);
    v4 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v4 = MyRoomControl_TypeInfo;
    }
    v5 = v2->fields.buttonFlag | v4->static_fields->BUTTON_LIMIT_CHANGE;
  }
  v2->fields.buttonFlag = v5;
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
      sub_1C2209C(this, isEnable);
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
    sub_1C22094(this, isEnable);
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
    sub_1C22094(0LL, v3);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 93, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5);
}


void __fastcall MyRoomControl__SetFacePhotoServant(
        MyRoomControl_o *this,
        ServantPhotoEntity_FaceData_o *faceData,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MyRoomControl_o *v6; // x21
  struct StandFigureBack_o *photoCampaignStandFigureBack; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  __int64 size; // x25
  unsigned __int64 v10; // x22
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v13; // w23
  int32_t v14; // w24
  System_Action_o *v15; // x3

  v6 = this;
  if ( (byte_4BD7B9B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    this = (MyRoomControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4BD7B9B = 1;
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
      v10 = 0LL;
      while ( 1 )
      {
        multiFace = faceData->fields.multiFace;
        if ( !multiFace )
          break;
        if ( v10 >= multiFace->max_length )
          goto LABEL_20;
        multiForm = faceData->fields.multiForm;
        if ( !multiForm )
          break;
        if ( v10 >= multiForm->max_length )
LABEL_20:
          sub_1C2209C(this, faceData);
        v13 = multiFace->m_Items[v10 + 1];
        v14 = multiForm->m_Items[v10 + 1];
        this = (MyRoomControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    v10,
                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (MyRoomControl_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v10 )
          v15 = 0LL;
        else
          v15 = callbackFunc;
        UIStandFigureR__SetFace_42326132((UIStandFigureR_o *)this, v13, v14, v15, 0.0, 0LL);
        if ( size == ++v10 )
          return;
      }
    }
LABEL_19:
    sub_1C22094(this, faceData);
  }
}


void __fastcall MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass324_0_o *v7; // x21
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **p_svtVoiceEnt; // x22
  const MethodInfo *v14; // x1
  int32_t figureSvtId; // w23
  ServantVoiceEntity_o *v16; // x24
  int32_t Item; // w0
  const MethodInfo *v18; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x23
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_4BD7B68 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass324_0__SetFavoriteSvt_b__0__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass324_0__SetFavoriteSvt_b__1__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass324_0__SetFavoriteSvt_b__2__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass324_0_TypeInfo);
    byte_4BD7B68 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass324_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass324_0_TypeInfo);
  MyRoomControl___c__DisplayClass324_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  v7->fields.__4__this = this;
  sub_1C21DDC(&v7->fields, this);
  v7->fields.callback = callback;
  sub_1C21DDC(&v7->fields.callback, callback);
  MyRoomControl__setupSvtImageIdList(this, v10);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v11);
  v7->fields.svtVoiceEnt = SvtVoiceEnt;
  p_svtVoiceEnt = &v7->fields.svtVoiceEnt;
  sub_1C21DDC(&v7->fields.svtVoiceEnt, SvtVoiceEnt);
  if ( v7->fields.svtVoiceEnt )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v14);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        figureSvtId = this->fields.figureSvtId;
        v16 = *p_svtVoiceEnt;
        Item = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)Instance,
                 this->fields.figureSvtDispIdx,
                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        VoiceList = MyRoomControl__GetVoiceList(this, v16, figureSvtId, Item, v18);
        this->fields.voiceList = VoiceList;
        sub_1C21DDC(&this->fields.voiceList, VoiceList);
        Instance = (CommonUI_o *)*p_svtVoiceEnt;
        if ( *p_svtVoiceEnt )
        {
          VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
          this->fields.asstName = VoiceAssetName;
          sub_1C21DDC(&this->fields.asstName, VoiceAssetName);
          asstName = this->fields.asstName;
          v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v7,
            Method_MyRoomControl___c__DisplayClass324_0__SetFavoriteSvt_b__0__,
            0LL);
          MyRoomControl__voiceLoad(this, asstName, v22, v23);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    sub_1C22094(Instance, v9);
  }
  this->fields.isExistVoiceData = 0;
LABEL_10:
  v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass324_0__SetFavoriteSvt_b__1__, 0LL);
  v7->fields.action = v24;
  sub_1C21DDC(&v7->fields.action, v24);
  if ( IsActSetMyRoomStandFigre )
  {
    v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_MyRoomControl___c__DisplayClass324_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v25, v26);
  }
  else
  {
    ActionExtensions__Call(v7->fields.action, 0LL);
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
  int32_t Id; // w23
  int32_t v11; // w22
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t form; // w0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD7BB1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    byte_4BD7BB1 = 1;
  }
  entity = 0LL;
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  *imageId = Id;
  if ( imageLimitCount >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v11 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v11,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        form = entity->fields.form;
        goto LABEL_16;
      }
LABEL_17:
      sub_1C22094(Master_object, v13);
    }
    Id = *imageId;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  form = UIStandFigureRender__GetForm(Id, 1, -1, 0LL);
LABEL_16:
  *formId = form;
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
  if ( (byte_4BD7B86 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4BD7B86 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1C22094(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(this, *(_QWORD *)&frontIndex);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C22094(0LL, flag);
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0LL);
}


void __fastcall MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass244_0_o *v7; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v12; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  MyRoomControl_o *v15; // x0
  int32_t v16; // w3
  const MethodInfo *v17; // x5
  StandFigureBack_o *standFigureBack; // x19
  int32_t v19; // w21
  int32_t imageLimitCount; // w22
  int32_t formId; // w23
  System_Action_o *v22; // x24
  CombineRootComponent_c *v23; // x0
  System_String_o *COMBINE_ASSET_PATH; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BD7B49 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&CombineRootComponent_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_b__1__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_g__OnEnd_0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass244_0_TypeInfo);
    byte_4BD7B49 = 1;
  }
  imageId = 0;
  v7 = (MyRoomControl___c__DisplayClass244_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass244_0_TypeInfo);
  MyRoomControl___c__DisplayClass244_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_19;
  v7->fields.__4__this = this;
  sub_1C21DDC(&v7->fields, this);
  v7->fields.end_act = end_act;
  sub_1C21DDC(&v7->fields.end_act, end_act);
  v7->fields.servantId = servantId;
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v10);
    MyRoomControl__SetChangeBtn(this, v12);
    servantId = v7->fields.servantId;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_19;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                    Item,
                                                                    0LL);
  if ( !mStateMaterial )
    goto LABEL_19;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, (int32_t)materialImageIdList, 0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !materialImageIdList )
    goto LABEL_19;
  v15 = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                             materialImageIdList,
                             this->fields.materialFigureSvtDispIdx,
                             (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  v16 = v7->fields.servantId;
  v7->fields.imageLimitCount = (int)v15;
  MyRoomControl__SetImageIdAndFormId(v15, &imageId, &v7->fields.formId, v16, (int32_t)v15, v17);
  if ( this->fields.combineAssetData )
  {
    standFigureBack = this->fields.standFigureBack;
    v19 = v7->fields.servantId;
    imageLimitCount = v7->fields.imageLimitCount;
    formId = v7->fields.formId;
    v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v7,
      Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_g__OnEnd_0__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__SetMyRoomStandFigure(standFigureBack, v19, imageLimitCount, 1, 0, formId, 10, v22, 0, 0LL);
      return;
    }
LABEL_19:
    sub_1C22094(materialImageIdList, v9);
  }
  v23 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v23 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v23->static_fields->COMBINE_ASSET_PATH;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v25, 1, 0LL);
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
    sub_1C22094(multipleViewButtonSprite, v3);
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
  MyRoomControl___c__DisplayClass242_0_o *v5; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  bool _38930984; // w8
  MyRoomControl_o *Item; // x0
  int32_t v11; // w21
  const MethodInfo *v12; // x5
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w23
  int32_t v15; // w19
  System_Action_o *v16; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BD7B47 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass242_0__SetMyRoomStandFigure_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass242_0_TypeInfo);
    byte_4BD7B47 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v5 = (MyRoomControl___c__DisplayClass242_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass242_0_TypeInfo);
  MyRoomControl___c__DisplayClass242_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  v5->fields.__4__this = this;
  sub_1C21DDC(&v5->fields, this);
  v5->fields.end_act = end_act;
  sub_1C21DDC(&v5->fields.end_act, end_act);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, v5->fields.end_act, v8);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38930984 = TutorialFlag__Get_38930984(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _38930984;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_11;
  Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                              imageIdList,
                              this->fields.figureSvtDispIdx,
                              (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  v11 = (int)Item;
  MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], this->fields.figureSvtId, (int32_t)Item, v12);
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v15 = formId[1];
  v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass242_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_11:
    sub_1C22094(imageIdList, v7);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v11, 1, 0, v15, 10, v16, 0, 0LL);
}


void __fastcall MyRoomControl__SetMySvtFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass243_0_o *v5; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v7; // x1
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4BD7B48 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass243_0__SetMySvtFigure_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass243_0_TypeInfo);
    byte_4BD7B48 = 1;
  }
  v5 = (MyRoomControl___c__DisplayClass243_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass243_0_TypeInfo);
  MyRoomControl___c__DisplayClass243_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.__4__this = this,
        sub_1C21DDC(&v5->fields, this),
        v5->fields.end_act = end_act,
        sub_1C21DDC(&v5->fields.end_act, end_act),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1C22094(materialImageIdList, v7);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v10);
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v5, Method_MyRoomControl___c__DisplayClass243_0__SetMySvtFigure_b__0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v11, v12);
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
    sub_1C22094(photoCampaignButtonSprite, v3);
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
    sub_1C22094(photoCampaignAtlas, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v8; // x0
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21

  if ( (byte_4BD7BA9 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7BA9 = 1;
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
      v8 = UnityEngine_Object__Instantiate_object__50551272(
             photoCampaignCameraEffect,
             transform,
             (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v8;
      sub_1C21DDC(&this->fields.photoCampaignInstantiateCameraEffect, v8);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1C22094(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1C21DDC(&this->fields.photoCampaignInstantiateCameraEffect, 0LL);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
}


void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *v6; // x20
  UITweener_o *v7; // x20
  UITweener_o *v8; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4BD7B52 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7B52 = 1;
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
    v6 = (UnityEngine_Transform_o *)voicePlayEffect;
    if ( !byte_4BD6BB6 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v6
      || (UnityEngine_Transform__set_localScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v7 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v7)
      || (v8 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v7, 0.0, 0LL), !v8) )
    {
LABEL_21:
      sub_1C22094(voicePlayEffect, v4);
    }
    UITweener__set_tweenFactor(v8, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      v7->fields.style = 1;
      v8->fields.style = 1;
    }
    else
    {
      v7->fields.style = 0;
      v8->fields.style = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_48139976(v7, 1, 0LL);
    UITweener__Play_48139976(v8, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_1C22094(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_70829352(
                                              0,
                                              photoCampaignFaceList->max_length,
                                              0LL);
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  this->fields.sceneJumpInfo = info;
  sub_1C21DDC(&this->fields.sceneJumpInfo, info);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, v3);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C22094(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BD7B3F & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_MyRoomControl__setState__);
    byte_4BD7B3F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4BD7B33 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7B33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, 0LL),
        !this->fields.frontObjectManager) )
  {
    sub_1C22094(Instance, v4);
  }
  v5 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v5 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetupMaterialSvtImageIdList(
        MyRoomControl_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  MyRoomControl_o *v4; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v6; // w9
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v8; // x2
  MyRoomControl_o *v9; // x21
  int32_t v10; // w22
  int32_t ImageLimitCount; // w23
  int32_t v12; // w23
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MyRoomControl_o *v17; // x21
  unsigned __int64 v18; // x22
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  int32_t LimitCount; // w21
  System_Collections_Generic_List_int__o *v23; // x8
  int v24; // w20
  int32_t v25; // w21

  v3 = servantId;
  v4 = this;
  if ( (byte_4BD7B35 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&MaterialServantLimitCountManager_TypeInfo);
    this = (MyRoomControl_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7B35 = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  v4->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_43;
  v6 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v6;
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v9 = this;
  if ( ((__int64)this->fields.myRoomListCtr & 0x80000000) == 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v3, v10, 0LL);
      this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this )
        break;
      this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                  (ServantLimitImageMaster_o *)this,
                                  v3,
                                  ImageLimitCount,
                                  0LL);
      if ( !v4->fields.materialImageIdList )
        break;
      v12 = (int)this;
      this = (MyRoomControl_o *)System_Collections_Generic_List_int___Contains(
                                  v4->fields.materialImageIdList,
                                  (int32_t)this,
                                  (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          break;
        v13 = *(_QWORD *)&this->fields.m_CachedPtr;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v13 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v12,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v13 + 4 * m_CancellationTokenSource_low + 32) = v12;
        }
      }
      if ( ++v10 > SLODWORD(v9->fields.myRoomListCtr) )
        goto LABEL_22;
    }
LABEL_43:
    sub_1C22094(this, *(_QWORD *)&servantId);
  }
LABEL_22:
  this = (MyRoomControl_o *)MyRoomControl__GetSortedCostumeIds(this, v3, v8);
  if ( !this )
    goto LABEL_43;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v17 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(this, *(_QWORD *)&servantId);
      *(_QWORD *)&servantId = *((unsigned int *)&v17->fields.myRoomData + v18);
      if ( servantId >= 1 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          goto LABEL_43;
        v19 = *(_QWORD *)&this->fields.m_CachedPtr;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v19 )
          goto LABEL_43;
        v21 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            servantId,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v21 + 1;
          *(_DWORD *)(v19 + 4 * v21 + 32) = servantId;
        }
      }
      LODWORD(m_CancellationTokenSource) = v17->fields.m_CancellationTokenSource;
    }
    while ( (__int64)++v18 < (int)m_CancellationTokenSource );
  }
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(v3, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)this,
                              v3,
                              LimitCount,
                              0LL);
  v23 = v4->fields.materialImageIdList;
  if ( !v23 )
    goto LABEL_43;
  v24 = (int)this;
  v25 = 0;
  while ( v25 < v23->fields._size )
  {
    this = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                v23,
                                v25,
                                (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)this == v24 )
    {
      v4->fields.materialFigureSvtDispIdx = v25;
      return;
    }
    v23 = v4->fields.materialImageIdList;
    ++v25;
    if ( !v23 )
      goto LABEL_43;
  }
}


void __fastcall MyRoomControl__ShowContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1C22094(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4BD7B3B & 1) == 0 )
  {
    sub_1C21E38(&Gesture_EventHandler_TypeInfo);
    sub_1C21E38(&FingerGestures_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_FingerGestures_OnGestureEvent__);
    byte_4BD7B3B = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C22084(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__StartCameraEffect_d__413_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B9F & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__StartCameraEffect_d__413_TypeInfo);
    byte_4BD7B9F = 1;
  }
  v3 = (MyRoomControl__StartCameraEffect_d__413_o *)sub_1C22084(MyRoomControl__StartCameraEffect_d__413_TypeInfo);
  MyRoomControl__StartCameraEffect_d__413___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v3->fields.__4__this = this;
  sub_1C21DDC(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BD7B3D & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_MyRoomControl__update__);
    byte_4BD7B3D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_31E6B30 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_4BD7B8D & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7B8D = 1;
  }
  if ( (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    multipleViewButtonRemainTimeLabel = this->fields.multipleViewButtonRemainTimeLabel;
    multipleViewFinishedTime = this->fields.multipleViewFinishedTime;
    v6 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v6, 0LL);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_1C22094(RestTime6, v8);
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

  if ( (byte_4BD7BA8 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7BA8 = 1;
  }
  if ( (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    photoCampaignButtonRemainTimeLabel = this->fields.photoCampaignButtonRemainTimeLabel;
    photoCampaignFinishedTime = this->fields.photoCampaignFinishedTime;
    v6 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v6, 0LL);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_1C22094(RestTime6, v8);
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
    sub_1C22094(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__319_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD7BBB & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7BBB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1C22094(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__426_0(
        MyRoomControl_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass426_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x20

  if ( (byte_4BD7BC1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass426_0__ChangeMasterSetting_b__1__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass426_0_TypeInfo);
    byte_4BD7BC1 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass426_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass426_0_TypeInfo);
  MyRoomControl___c__DisplayClass426_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  v7->fields.__4__this = this;
  sub_1C21DDC(&v7->fields.__4__this, this);
  v7->fields.genderType = genderType;
  v7->fields.equipId = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass426_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !v12 )
LABEL_8:
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__426_2(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *photoMasterTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  CommonUI_o *v6; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7BC2 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7BC2 = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v5);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)photoMasterTexture;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1C22094(photoMasterTexture, method);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__386_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BD7BBE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__CloseMultipleView_b__386_1__);
    byte_4BD7BBE = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__386_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1C22094(v5, v6);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v4, v7);
}


void __fastcall MyRoomControl___CloseMultipleView_b__386_1(MyRoomControl_o *this, const MethodInfo *method)
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
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 41, 0, 0LL);
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
      sub_1C2209C(titleInfo, method);
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
    sub_1C22094(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__420_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD7BC0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__420_1__);
    byte_4BD7BC0 = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__420_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_1C22094(v5, v6);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v4, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__420_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 41, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_1C22094(titleInfo, method);
  }
  StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v6);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__292_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C22094(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__399_0(
        MyRoomControl_o *this,
        int32_t photoType,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x4

  if ( (byte_4BD7BBF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__EndLoadPhotoAsset_b__399_1__);
    byte_4BD7BBF = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__399_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v5, 1, v6);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__399_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_1C22094(this, method);
  PhotoCampaignComponent__Open(
    photoCampaignComponent,
    this->fields.photoCampaignType,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
}


void __fastcall MyRoomControl___GoToTitle_b__331_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  MyRoomControl_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x19
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x20
  Il2CppObject *v12; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4BD7BBD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__GoToTitle_b__331_1__);
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    byte_4BD7BBD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v6, v7);
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      Instance = MyRoomControl___c_TypeInfo;
    }
    v11 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 40LL);
    if ( !v11 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MyRoomControl___c_TypeInfo;
      }
      v12 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, v12, Method_MyRoomControl___c__GoToTitle_b__331_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__331_1 = v11;
      Instance = (void *)sub_1C21DDC(&static_fields->__9__331_1, v11);
    }
    if ( v8 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v8, 1, DEFAULT_FADE_TIME, v11, 0LL);
      return;
    }
LABEL_16:
    sub_1C22094(Instance, v5);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__289_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C22094(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__267_0(MyRoomControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BD7BB9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__LoadServantForm_b__267_1__);
    sub_1C21E38(&StringLiteral_8631/*"LoadServantFormEnd"*/);
    byte_4BD7BB9 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__267_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v6, 0LL);
      return;
    }
LABEL_18:
    sub_1C22094(SvtStandFigure, method);
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
  MyRoomControl__moveControl(this, this->fields.svtObj, v13, (System_String_o *)StringLiteral_8631/*"LoadServantFormEnd"*/, v12);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__372_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1C22094(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__318_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD7BBA & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7BBA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1C22094(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__323_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7BBC & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3649/*"CLOSE_MENU"*/);
    byte_4BD7BBC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3649/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__250_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7BB8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7328/*"HIDE_END"*/);
    byte_4BD7BB8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7328/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__287_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C22094(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__241_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4BD7BB7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8445/*"LOAD_END"*/);
    sub_1C21E38(&StringLiteral_8446/*"LOAD_END_TO_HELP"*/);
    byte_4BD7BB7 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  if ( this->fields.type == 6 )
    v4 = (System_String_o **)&StringLiteral_8446/*"LOAD_END_TO_HELP"*/;
  else
    v4 = (System_String_o **)&StringLiteral_8445/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v4, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__223_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7BB6 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7BB6 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MyRoomControl_o **v4; // x19
  __int64 *v5; // x8

  v4 = (MyRoomControl_o **)this;
  if ( (byte_4BD7B5B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    this = (MyRoomControl_o *)sub_1C21E38(&StringLiteral_11272/*"REQUEST_NG"*/);
    byte_4BD7B5B = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_63123792(result, (System_String_o *)StringLiteral_22632/*"ok"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v5 = &StringLiteral_11272/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C22094(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v5 = &StringLiteral_11274/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4BD7B6C & 1) == 0 )
  {
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD7B6C = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1C22094(0LL, v3);
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
    sub_1C22094(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1C22094(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *svtCtr; // x0

  svtCtr = (StandFigureBack_o *)this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.baseCallbackFunc = 0LL,
        sub_1C21DDC(&svtCtr->fields.baseCallbackFunc, 0LL),
        (svtCtr = this->fields.standFigureBack) == 0LL) )
  {
    sub_1C22094(svtCtr, method);
  }
  StandFigureBack__DestroyFigure(svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7B59 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11665/*"SAVE_END"*/);
    byte_4BD7B59 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11665/*"SAVE_END"*/, 0LL);
}


System_String_o *__fastcall MyRoomControl__getChangeMyRoomBgm(const MethodInfo *method)
{
  MyRoomControl_c *v1; // x0
  System_String_o *DEFAULT_BGM_NAME; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w0
  int32_t v6; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD7B37 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7B37 = 1;
  }
  v1 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v1 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v1->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_14;
  v5 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v5 )
  {
    v6 = v5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v6,
                                 (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1C22094(Instance, v4);
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

  if ( (byte_4BD7B38 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B38 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1C22094(v4, v5);
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
    sub_1C22094(0LL, method);
  return StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
}


ServantVoiceEntity_o *__fastcall MyRoomControl__getSvtVoiceEnt(
        MyRoomControl_o *this,
        bool limitCntReset,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v11; // w8
  struct System_Collections_Generic_List_int__o *v13; // x8
  MyRoomControl_c *v14; // x0
  int v15; // w8
  MyRoomControl_c *v16; // x0
  int32_t v17; // w20
  int32_t Item; // w0
  StandFigureBack_c *v19; // x8
  int32_t v20; // w22
  int32_t LimitCountByImageLimit; // w21
  Il2CppObject *Master_object; // x0
  int32_t figureSvtId; // w19
  MyroomServantSpecialImageMaster_o *v24; // x23
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7B4B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StandFigureBack_TypeInfo);
    byte_4BD7B4B = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  myRoomData = (MyRoomData_o *)sub_1C21DDC(&this->fields.usrData, SelfUserGame);
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
        v11 = figureSvtDispIdx + 1;
      else
        v11 = 0;
      this->fields.figureSvtDispIdx = v11;
    }
    else
    {
      v13 = this->fields.imageIdList;
      if ( !v13 )
        goto LABEL_45;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v13->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_45;
        v27.fields.r = 0.5;
        v27.fields.g = 0.5;
        v27.fields.b = 0.5;
        v27.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v27, 0LL);
        v16 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v16 = MyRoomControl_TypeInfo;
        }
        v15 = this->fields.buttonFlag & ~v16->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_45;
        v26.fields.r = 1.0;
        v26.fields.g = 1.0;
        v26.fields.b = 1.0;
        v26.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v26, 0LL);
        v14 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v14 = MyRoomControl_TypeInfo;
        }
        v15 = this->fields.buttonFlag | v14->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v15;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_45;
  v17 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  v19 = StandFigureBack_TypeInfo;
  v20 = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v19 = StandFigureBack_TypeInfo;
  }
  LimitCountByImageLimit = v20;
  if ( v20 < v19->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v20, 0LL);
  }
  if ( v20 < 201 )
    goto LABEL_41;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  figureSvtId = this->fields.figureSvtId;
  v24 = (MyroomServantSpecialImageMaster_o *)Master_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  myRoomData = (MyRoomData_o *)ImageLimitCount__SpecialImageLimitCountToSpecialNum(v20, 0LL);
  if ( !v24 )
LABEL_45:
    sub_1C22094(myRoomData, favoriteUserSvtId);
  myRoomData = (MyRoomData_o *)MyroomServantSpecialImageMaster__TryGetEntity(
                                 v24,
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
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !myRoomData )
    goto LABEL_45;
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v17, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4BD7B54 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7B54 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1C22094(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL);
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

  if ( (byte_4BD7B6F & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_EndTurorialRequest__);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD7B6F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1C22094(helpListViewManager, v3);
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v5,
                                                         (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_1C22094(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4BD7B67 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__hideFavoriteSvt_b__323_0__);
    byte_4BD7B67 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__323_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v3, 1, v4);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1C22094(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1C22094(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1C22094(0LL, method);
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
    sub_1C22094(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1C22094(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7B69 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3649/*"CLOSE_MENU"*/);
    byte_4BD7B69 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3649/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4BD7B6A & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD7B6A = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1C22094(soundPlayerComp, method);
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
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v7; // x21
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7B4E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__hideSvtFigure_b__250_0__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B4E = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v8, 0LL);
  v5 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v5->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v4);
  standFigureBack = this->fields.standFigureBack;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__250_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1C22094(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v7, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1C22094(0LL, method);
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
    sub_1C22094(usrItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__initMaterial_d__287_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD7B5F & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__initMaterial_d__287_TypeInfo);
    byte_4BD7B5F = 1;
  }
  v3 = (MyRoomControl__initMaterial_d__287_o *)sub_1C22084(MyRoomControl__initMaterial_d__287_TypeInfo);
  MyRoomControl__initMaterial_d__287___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v3->fields.__4__this = this;
  sub_1C21DDC(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__initMyRoom(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 standFigureBack; // x0
  const MethodInfo *v4; // x2
  CStateManager_T__o *v5; // x21
  CStateManager_T__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v7; // x21
  Il2CppObject *MasterData_object; // x0
  struct EventMaster_o **p_eventMaster; // x20
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v13; // x22
  Il2CppObject *v14; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x4
  MyRoomControl_o *v18; // x0
  const MethodInfo *v19; // x4
  MyRoomParamsManager_c *v20; // x0
  struct MyRoomParamsManager_StaticFields *v21; // x8
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x1
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v31; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v35; // x21
  int max_length; // w9
  int v37; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v46; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_object__o *v48; // x22
  System_Collections_Generic_Dictionary_int__object__o *v49; // x22
  System_Collections_Generic_Dictionary_int__object__o *v50; // x22
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  UnityEngine_Vector3_o v55; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7B32 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_CStateManager_MyRoomControl___ctor__);
    sub_1C21E38(&Method_CStateManager_MyRoomControl__add__);
    sub_1C21E38(&CStateManager_MyRoomControl__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_LoadScriptFileListAssetData__);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&MyRoomControl_StateEtc_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__initMyRoom_b__218_0__);
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_10573/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/);
    sub_1C21E38(&StringLiteral_17765/*"btn_bg_12"*/);
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    sub_1C21E38(&StringLiteral_8969/*"MULTIPLE_VIEW_BUTTON_TEXT"*/);
    byte_4BD7B32 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v55.fields.z = 0.0;
  *(_QWORD *)&v55.fields.x = 0LL;
  standFigureBack = (__int64)this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (__int64)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_52;
  }
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_1C22084(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_31E6A20 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v5;
    sub_1C21DDC(&this->fields.mFSM, v5);
    standFigureBack = (__int64)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_52;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v7 = (MyRoomControl_StateEtc_o *)sub_1C22084(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v7, 0LL);
    if ( !mFSM )
      goto LABEL_52;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v7,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v4);
  standFigureBack = (__int64)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (__int64)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)standFigureBack,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)MasterData_object;
  sub_1C21DDC(&this->fields.eventMaster, MasterData_object);
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
  MyRoomControl__setUserStInfoView(this, v10);
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
  v13 = *(System_Action_o **)(*(_QWORD *)(standFigureBack + 184) + 8LL);
  if ( !v13 )
  {
    if ( !*(_DWORD *)(standFigureBack + 224) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
    }
    v14 = **(Il2CppObject ***)(standFigureBack + 184);
    v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v13, v14, Method_MyRoomControl___c__initMyRoom_b__218_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__218_0 = v13;
    standFigureBack = sub_1C21DDC(&static_fields->__9__218_0, v13);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_52;
  v16 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v13, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v16,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v17);
  MyRoomControl__setupSortWindowUIMoveData(v18, this->fields.sortWindowObj, &v, &v55, v19);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_4BD7BC4 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7BC4 = 1;
  }
  v20 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  v21 = v20->static_fields;
  standFigureBack = (__int64)this->fields.soundPlayerComp;
  this->fields.IsListActive = v21->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_52;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v22);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v23);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_52;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v26, 0LL);
  MyRoomControl__setupSvtImageIdList(this, v27);
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
  v60 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v60;
  v61 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v61;
  v62 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (__int64)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v62;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v31);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17765/*"btn_bg_12"*/, 0LL);
  standFigureBack = (__int64)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_52;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)standFigureBack + 840LL))(
    standFigureBack,
    *(_QWORD *)(*(_QWORD *)standFigureBack + 848LL));
  v63 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v63;
  if ( !multipleStandFigureBacks )
    goto LABEL_52;
  v35 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v35 >= max_length )
      break;
    if ( (unsigned int)v35 >= max_length )
      goto LABEL_84;
    standFigureBack = (__int64)multipleStandFigureBacks->m_Items[v35];
    if ( standFigureBack )
    {
      StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v35;
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
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)standFigureBack, 0LL)) == 0
    || (v37 = *(_DWORD *)(standFigureBack + 24),
        standFigureBack = (__int64)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = v37 > 1,
        !standFigureBack) )
  {
LABEL_52:
    sub_1C22094(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8969/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_52;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (__int64)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v40);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v41);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v42);
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
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
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
  this->fields.photoCampaignState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_52;
    if ( !EnableEntityList->max_length )
LABEL_84:
      sub_1C2209C(standFigureBack, method);
    v46 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v46;
    sub_1C21DDC(&this->fields.photoCampaignEntity, v46);
    v48 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v48,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v48;
    sub_1C21DDC(&this->fields.masterEquipAssetData, v48);
    v49 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v49,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v49;
    sub_1C21DDC(&this->fields.masterMaleEquipTexture, v49);
    v50 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v50,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v50;
    sub_1C21DDC(&this->fields.masterFemaleEquipTexture, v50);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10573/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
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
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v52);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v53);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v54);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_1C22094(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1C21DDC(&v8->fields.eventReceiver, gameObject);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1C21DDC(&v8->fields.callWhenFinished, callwhenFinished);
  }
  v8->fields.method = 3;
}


void __fastcall MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  _QWORD *v5; // x0
  int v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4BD7B6D & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_onClickHelp__);
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B6D = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = Method_MyRoomControl_onClickHelp__;
  v6 = this->fields.buttonFlag & static_fields->BUTTON_HELP;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelp__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_onClickHelp__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  if ( v6 <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    if ( this->fields.isServantMaterial )
    {
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 61, 0LL, 0LL);
    }
    else
    {
      helpListViewManager = this->fields.helpListViewManager;
      if ( !helpListViewManager )
        sub_1C22094(0LL, v8);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  MyRoomHelpListViewManager_CallbackFunc2_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BD7B6E & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_helpClose__);
    sub_1C21E38(&Method_MyRoomControl_onClickHelpClose__);
    byte_4BD7B6E = 1;
  }
  v3 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_onClickHelpClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v6 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1C22084(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1C22094(v7, v8);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v6, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1C22094(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1C22094(0LL, method);
  SoundPlayerComponent__openMenu(soundPlayerComp, 0LL);
}


void __fastcall MyRoomControl__playSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t VoiceSvtId; // w0
  MyRoomSvtControl_o *v4; // x1
  int32_t v5; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v7; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v9; // w20
  Il2CppObject *Request_object; // x21
  System_Int32_array_array *v11; // x22
  int m_CancellationTokenSource; // w8

  if ( (byte_4BD7B57 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C21E38(&int_____TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7B57 = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v5 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_21;
    v7 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v7, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v5, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_21;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v5, v7, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v9 = FlagRequestNumber;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0LL,
                           (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v11 = (System_Int32_array_array *)sub_1C21EE0(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1C21EE0(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          m_CancellationTokenSource = (int)svtCtr->fields.m_CancellationTokenSource;
          v4 = svtCtr;
          if ( !m_CancellationTokenSource )
            goto LABEL_22;
          LODWORD(svtCtr->fields.fsm) = v5;
          if ( m_CancellationTokenSource == 1 )
            goto LABEL_22;
          HIDWORD(svtCtr->fields.fsm) = v9;
          if ( !v11 )
            goto LABEL_21;
          if ( !v11->max_length )
LABEL_22:
            sub_1C2209C(svtCtr, svtCtr);
          v11->m_Items[0] = (System_Int32_array *)svtCtr;
          svtCtr = (MyRoomSvtControl_o *)sub_1C21DDC(v11->m_Items, svtCtr);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, v11, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1C22094(svtCtr, v4);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialServantId; // w20
  int32_t Item; // w21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  v2 = this;
  if ( (byte_4BD7B42 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (MyRoomControl_o *)sub_1C21E38(&MaterialServantLimitCountManager_TypeInfo);
    byte_4BD7B42 = 1;
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
             (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.soundPlayerComp;
  if ( !materialImageIdList )
    goto LABEL_17;
  SoundPlayerComponent__DestroyMenu((SoundPlayerComponent_o *)materialImageIdList, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v2, v7);
  MyRoomControl__destroySvtFigure(v2, v8);
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
        MyRoomControl__ReleasePhotoAsset(v2, v9),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.MaterialEventLogItemListPanel) == 0LL)
    || (((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
          materialImageIdList,
          materialImageIdList->klass->vtable._9_unknown.methodPtr,
          1.0),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.valentineListObj) == 0LL) )
  {
LABEL_17:
    sub_1C22094(materialImageIdList, v3);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
    materialImageIdList,
    materialImageIdList->klass->vtable._9_unknown.methodPtr,
    0.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD7B58 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl_endReflectionGameOption__);
    byte_4BD7B58 = 1;
  }
  optionComp = this->fields.optionComp;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1C22094(v5, v6);
  SetGameOptionComponent__reflectionGameOption(optionComp, v4, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  System_String_o *Value; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x22
  Il2CppObject *Request_object; // x19

  if ( (byte_4BD7B5A & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_callbackChangeName__);
    sub_1C21E38(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&StringLiteral_4505/*"ChangeUserName"*/);
    byte_4BD7B5A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( !this->fields.myRoomFsm )
    goto LABEL_13;
  v5 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_4505/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1C22094(SelfUserGame, v4);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    Value,
    v5,
    *((System_String_o **)SelfUserGame + 30),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_1C22094(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass251_0_o *v5; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  PlayMakerFSM_o **p_svtVoiceEnt; // x21
  ServantVoiceEntity_o *v11; // x22
  int32_t figureSvtId; // w23
  int32_t Item; // w0
  const MethodInfo *v14; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_4BD7B4F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass251_0__resetSvtVoiceData_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass251_0_TypeInfo);
    sub_1C21E38(&StringLiteral_8445/*"LOAD_END"*/);
    byte_4BD7B4F = 1;
  }
  v5 = (MyRoomControl___c__DisplayClass251_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass251_0_TypeInfo);
  MyRoomControl___c__DisplayClass251_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.__4__this = this;
  sub_1C21DDC(&v5->fields, this);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8445/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1C22094(myRoomFsm, v7);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v8);
  v5->fields.svtVoiceEnt = SvtVoiceEnt;
  p_svtVoiceEnt = (PlayMakerFSM_o **)&v5->fields.svtVoiceEnt;
  sub_1C21DDC(&v5->fields.svtVoiceEnt, SvtVoiceEnt);
  v11 = v5->fields.svtVoiceEnt;
  if ( !v11 )
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
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  VoiceList = MyRoomControl__GetVoiceList(this, v11, figureSvtId, Item, v14);
  this->fields.voiceList = VoiceList;
  sub_1C21DDC(&this->fields.voiceList, VoiceList);
  myRoomFsm = *p_svtVoiceEnt;
  if ( !*p_svtVoiceEnt )
    goto LABEL_13;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_1C21DDC(&this->fields.asstName, VoiceAssetName);
  asstName = this->fields.asstName;
  v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass251_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v18, v19);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 50, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
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

  if ( (byte_4BD7B76 & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_setDefSvtPos__);
    byte_4BD7B76 = 1;
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
    v5 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
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
        sub_1C22094(voicePlayBtn, method);
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
    sub_1C22094(moveBtnObj, isDisp);
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
    sub_1C22094(titleBtnCollider, isEnabled);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
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

  if ( (byte_4BD7B5D & 1) == 0 )
  {
    sub_1C21E38(&Method_MyRoomControl_setMaterial__);
    byte_4BD7B5D = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, v5);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C21E50(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 55, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 60, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 56, 0, 0LL);
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
    sub_1C22094(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 57, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C22094(this, method);
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
    sub_1C22094(v6, v7);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &v10;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v8);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BD7B46 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__setMySvtFigure_b__241_0__);
    byte_4BD7B46 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__241_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v3, v4);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_32260212(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_32260212(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialFigureSvtDispIdx; // w1
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  MyRoomControl_o *Item; // x0
  const MethodInfo *v10; // x5
  UnityEngine_Object_o *playBtnImg; // x20
  int32_t formId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD7B53 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7B53 = 1;
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
                                (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], materialServantId, (int32_t)Item, v10);
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
    sub_1C22094(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 48, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_38387828((TitleInfoControl_o *)mstpfObj, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1C22094(mstpfObj, method);
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
    sub_1C22094(0LL, v4);
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
    sub_1C22094(standFigureBack, isEnableMultipleView);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
  MyRoomControl__SetPhotoCampaignButtonColor(this, v12);
}


int32_t __fastcall MyRoomControl__setSvtFriendShipLv(MyRoomControl_o *this, int32_t hSvtId, const MethodInfo *method)
{
  MyRoomData_o *myRoomData; // x0

  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1C22094(0LL, hSvtId);
  return MyRoomData__getSvtFriendshipLv(myRoomData, hSvtId, 0LL);
}


void __fastcall MyRoomControl__setSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *myRoomFsm; // x0
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v6; // x20
  int32_t figureSvtId; // w21
  int32_t Item; // w0
  const MethodInfo *v9; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  Il2CppObject *v20; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4BD7B44 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_MyRoomControl_EndLoad__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__setSvtVoiceData_b__239_0__);
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_8445/*"LOAD_END"*/);
    byte_4BD7B44 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8445/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1C22094(myRoomFsm, method);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( SvtVoiceEnt )
  {
    v6 = SvtVoiceEnt;
    myRoomFsm = this->fields.imageIdList;
    if ( !myRoomFsm )
      goto LABEL_22;
    figureSvtId = this->fields.figureSvtId;
    Item = System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)myRoomFsm,
             this->fields.figureSvtDispIdx,
             (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    VoiceList = MyRoomControl__GetVoiceList(this, v6, figureSvtId, Item, v9);
    this->fields.voiceList = VoiceList;
    sub_1C21DDC(&this->fields.voiceList, VoiceList);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v6, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1C21DDC(&this->fields.asstName, VoiceAssetName);
    asstName = this->fields.asstName;
    v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v13, v14);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v17 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v19 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 16LL);
      if ( !v19 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v20 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v19, v20, Method_MyRoomControl___c__setSvtVoiceData_b__239_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__239_0 = v19;
        myRoomFsm = (void *)sub_1C21DDC(&static_fields->__9__239_0, v19);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v19, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8445/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 45, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
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

  if ( (byte_4BD7B5C & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl_TypeInfo);
    byte_4BD7B5C = 1;
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
    sub_1C22094(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_38387828((TitleInfoControl_o *)multipleViewButton, 1, 41, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38387828(titleInfo, 1, 44, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1C22094(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_32056028((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  sub_1C21DDC(moveTarget, materialObj);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1C22094(transform, v9);
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
    sub_1C22094(this, moveTarget);
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
    sub_1C22094(this, moveTarget);
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
  struct UserGameEntity_o *SelfUserGame; // x0
  __int64 myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  __int64 favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v8; // w9
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  struct System_Collections_Generic_List_int__o **p_imageIdList; // x20
  int32_t v13; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t figureSvtId; // w23
  int32_t ImageLimitCount; // w23
  int32_t v18; // w23
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  const MethodInfo *v22; // x3
  __int64 v23; // x22
  __int64 v24; // x23
  MyRoomControl_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x8
  __int64 v28; // x22
  unsigned __int64 v29; // x23
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int32_t FigureImageLimitCount; // w21
  struct System_Collections_Generic_List_int__o *v34; // x8
  int v35; // w21
  int32_t v36; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4BD7B34 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7B34 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  myRoomData = sub_1C21DDC(&this->fields.usrData, SelfUserGame);
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
  v8 = imageIdList->fields._version + 1;
  imageIdList->fields._size = 0;
  imageIdList->fields._version = v8;
  myRoomData = (__int64)this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomData, favoriteUserSvtId, 0LL);
  if ( !myRoomData )
    goto LABEL_48;
  v9 = myRoomData;
  v11 = *(_QWORD *)(myRoomData + 80);
  v10 = *(_QWORD *)(myRoomData + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v11;
  *(_QWORD *)&v37.fields.fakeValue = v10;
  p_imageIdList = &this->fields.imageIdList;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v37, 0LL);
  v13 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v9, 0LL);
  while ( 1 )
  {
    v15 = *(_QWORD *)(v9 + 96);
    v14 = *(_QWORD *)(v9 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v38.fields.currentCryptoKey = v15;
    *(_QWORD *)&v38.fields.fakeValue = v14;
    if ( v13 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v38, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v13, 0LL);
    myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)myRoomData,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)myRoomData,
                   this->fields.figureSvtId,
                   ImageLimitCount,
                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v18 = myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            myRoomData,
            (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      myRoomData = (__int64)*p_imageIdList;
      if ( !*p_imageIdList )
        goto LABEL_48;
      v19 = *(_QWORD *)(myRoomData + 16);
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++*(_DWORD *)(myRoomData + 28);
      if ( !v19 )
        goto LABEL_48;
      v21 = *(int *)(myRoomData + 24);
      if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)myRoomData,
          v18,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(myRoomData + 24) = v21 + 1;
        *(_DWORD *)(v19 + 4 * v21 + 32) = v18;
      }
    }
    ++v13;
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v9, 0LL)
    || (myRoomData = UserServantEntity__isLimitCountMax((UserServantEntity_o *)v9, 0LL), (myRoomData & 1) != 0) )
  {
    v24 = *(_QWORD *)(v9 + 80);
    v23 = *(_QWORD *)(v9 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v24;
    *(_QWORD *)&v39.fields.fakeValue = v23;
    v25 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v39, 0LL);
    myRoomData = (__int64)MyRoomControl__GetSortedCostumeIds(v25, (int32_t)v25, v26);
    if ( myRoomData )
    {
      v27 = *(_QWORD *)(myRoomData + 24);
      v28 = myRoomData;
      if ( (int)v27 >= 1 )
      {
        v29 = 0LL;
        while ( 1 )
        {
          if ( v29 >= (unsigned int)v27 )
            sub_1C2209C(myRoomData, favoriteUserSvtId);
          favoriteUserSvtId = *(unsigned int *)(v28 + 32 + 4 * v29);
          if ( (int)favoriteUserSvtId >= 1 )
          {
            myRoomData = (__int64)*p_imageIdList;
            if ( !*p_imageIdList )
              goto LABEL_48;
            v30 = *(_QWORD *)(myRoomData + 16);
            v31 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(myRoomData + 28);
            if ( !v30 )
              goto LABEL_48;
            v32 = *(int *)(myRoomData + 24);
            if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)myRoomData,
                favoriteUserSvtId,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(myRoomData + 24) = v32 + 1;
              *(_DWORD *)(v30 + 4 * v32 + 32) = favoriteUserSvtId;
            }
          }
          LODWORD(v27) = *(_DWORD *)(v28 + 24);
          if ( (__int64)++v29 >= (int)v27 )
            goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
LABEL_48:
    sub_1C22094(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  MyRoomControl__AddSpecialImageLimitCount(
    (MyRoomControl_o *)myRoomData,
    &this->fields.imageIdList,
    this->fields.figureSvtId,
    v22);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v9, 0, 0LL);
  myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)myRoomData,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)myRoomData,
                 this->fields.figureSvtId,
                 FigureImageLimitCount,
                 0LL);
  v34 = this->fields.imageIdList;
  if ( !v34 )
    goto LABEL_48;
  v35 = myRoomData;
  v36 = 0;
  while ( v36 < v34->fields._size )
  {
    myRoomData = System_Collections_Generic_List_int___get_Item(
                   v34,
                   v36,
                   (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v35 )
    {
      this->fields.figureSvtDispIdx = v36;
      return;
    }
    v34 = *p_imageIdList;
    ++v36;
    if ( !*p_imageIdList )
      goto LABEL_48;
  }
}


void __fastcall MyRoomControl__setupSvtRand(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *limitCountSupport; // x0
  int32_t v5; // w22
  _DWORD *v6; // x20
  __int64 IsLeave; // x0
  char *v8; // x25
  unsigned int v9; // w23
  void **v10; // x25
  void *v11; // t1
  UserServantEntity_o *v12; // x19
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  UserServantCollectionMaster_o *v16; // x20
  int64_t userId; // x21
  __int64 v18; // x23
  __int64 v19; // x24
  __int128 v20; // q1
  _DWORD *v21; // x26
  int64_t pushUserSvtId; // x8
  int64_t v23; // x0
  __int128 v24; // q1
  int64_t v25; // x23
  int32_t v26; // w24
  int32_t v27; // w25
  int32_t v28; // w27
  int32_t v29; // w28
  bool IsLock; // w29
  char v31; // w20
  int32_t commonFlag; // w22
  int32_t battleVoice; // w26
  int32_t randomSettingOwn; // w21
  int32_t v35; // w0
  __int64 v36; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v39; // [xsp+58h] [xbp-D8h]
  int64_t v40; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_object; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4BD7B36 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_MyRoomControl__setupSvtRand_b__223_0__);
    sub_1C21E38(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7B36 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1C22094(limitCountSupport, v3);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v5 = *((_DWORD *)limitCountSupport + 6);
  v6 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_70829352(0, v5, 0LL);
    if ( (unsigned int)IsLeave >= v6[6] )
LABEL_35:
      sub_1C2209C(IsLeave, v3);
    v8 = (char *)&v6[2 * (int)IsLeave];
    v9 = IsLeave;
    v11 = (void *)*((_QWORD *)v8 + 4);
    v10 = (void **)(v8 + 32);
    limitCountSupport = v11;
    if ( !v11 )
      goto LABEL_36;
    IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    v12 = 0LL;
    if ( (IsLeave & 1) == 0 )
    {
      if ( v9 >= v6[6] )
        goto LABEL_35;
      limitCountSupport = *v10;
      if ( !*v10 )
        goto LABEL_36;
      IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
      v12 = 0LL;
      if ( (IsLeave & 1) == 0 )
      {
        if ( v9 >= v6[6] )
          goto LABEL_35;
        v12 = (UserServantEntity_o *)*v10;
      }
    }
  }
  while ( !v12 );
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__223_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v13,
                                              (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_1C21DDC(&this->fields.usrData, SelfUserGame);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData )
    goto LABEL_36;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v19 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v19;
  *(_QWORD *)&v45.fields.fakeValue = v18;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL);
  if ( !v16 )
    goto LABEL_36;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v16, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_36;
  v20 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
  v21 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v20;
  v40 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v43, 0LL);
  v24 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
  v25 = v23;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v24;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v42, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                      v12->fields.imageLimitCount,
                      0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12->fields.dispLimitCount, 0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12->fields.commandCardLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12->fields.iconLimitCount, 0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v12, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v12, 0LL);
  if ( !v21 )
    goto LABEL_36;
  v31 = (char)limitCountSupport;
  commonFlag = v21[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                       v12->fields.randomLimitCount,
                       0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12->fields.randomLimitCountSupport, 0LL);
  v36 = *(_QWORD *)&v12->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&v12->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v35;
  *(_QWORD *)&v46.fields.currentCryptoKey = v36;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v46, 0LL);
  if ( !Request_object )
    goto LABEL_36;
  CardFavoriteRequest__beginRequest(
    Request_object,
    v39,
    imageLimitCount,
    v26,
    v27,
    v28,
    v29,
    1,
    IsLock,
    v31 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 == v25,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7B41 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD7B41 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7B40 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD7B40 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1C22094(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_32260212(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__343_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD7B72 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl__svtVoicePlayAct_d__343_TypeInfo);
    byte_4BD7B72 = 1;
  }
  v5 = (MyRoomControl__svtVoicePlayAct_d__343_o *)sub_1C22084(MyRoomControl__svtVoicePlayAct_d__343_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__343___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  v5->fields.__4__this = this;
  sub_1C21DDC(&v5->fields.__4__this, this);
  v5->fields.item = item;
  sub_1C21DDC(&v5->fields.item, item);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass238_0_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v12; // x22

  if ( (byte_4BD7B43 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass238_0__voiceLoad_b__0__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass238_0_TypeInfo);
    byte_4BD7B43 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass238_0_o *)sub_1C22084(MyRoomControl___c__DisplayClass238_0_TypeInfo);
  MyRoomControl___c__DisplayClass238_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  v7->fields.__4__this = this;
  sub_1C21DDC(&v7->fields, this);
  v7->fields.endCallback = endCallback;
  sub_1C21DDC(&v7->fields.endCallback, endCallback);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD7BC5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7BC5 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !v10->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass238_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v12, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1C22094(v8, v9);
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


void __fastcall MyRoomControl__CaptureServant_d__411___ctor(
        MyRoomControl__CaptureServant_d__411_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__411__MoveNext(
        MyRoomControl__CaptureServant_d__411_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v7; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v9; // x21
  UIRect_o *height; // x0
  __int64 v11; // x1
  int v12; // w22
  int32_t activeHeight; // w0
  int32_t v14; // w26
  int32_t v15; // w23
  int v16; // w24
  int v17; // w22
  int v18; // w23
  int v19; // w8
  int v20; // w25
  int v21; // w0
  _BOOL4 IsOnlyServant_k__BackingField; // w26
  int v23; // w27
  int v24; // w24
  int v25; // w25
  int v26; // w27
  int32_t v27; // w0
  int v28; // w8
  UnityEngine_Color_array *Pixels_70756664; // x25
  UnityEngine_Texture2D_o *v30; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v32; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4BD7CCE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    sub_1C21E38(&TouchEffectManager_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BD7CCE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v7 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0LL);
    width = this->fields.width;
    v9 = v7;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this )
      goto LABEL_35;
    v12 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_35;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v14 = this->fields.height;
    v15 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v16 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v9 )
      goto LABEL_35;
    v17 = v12 * width / v15;
    v18 = v16 * v14 / (int)height;
    v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v9->klass->vtable._4_get_width.method)(
            v9,
            v9->klass->vtable._5_set_width.methodPtr)
        - v17;
    v20 = v19 >= 0 ? v19 : v19 + 1;
    v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_height.method)(
            v9,
            v9->klass->vtable._7_set_height.methodPtr);
    IsOnlyServant_k__BackingField = _4__this->fields._IsOnlyServant_k__BackingField;
    v23 = v21 - v18 >= 0 ? v21 - v18 : v21 - v18 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v24 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    v25 = v20 >> 1;
    v26 = v23 >> 1;
    v27 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v28 = IsOnlyServant_k__BackingField ? 11 : 1;
    Pixels_70756664 = UnityEngine_Texture2D__GetPixels_70756664(v9, v25, v28 * v24 / v27 + v26, v17, v18, 0LL);
    v30 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70757788(v30, v17, v18, 3, 0, 0LL);
    if ( !v30 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_70758868(v30, Pixels_70756664, 0LL);
    UnityEngine_Texture2D__Apply_70759640(v30, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v30,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v9, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v32 = 11.0;
    if ( !_4__this->fields._IsOnlyServant_k__BackingField )
      v32 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v32, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1C22094(height, v11);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C21DDC(&this->fields.__2__current, v4);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__411__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__411_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__411__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__411_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__CaptureServant_d__411_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__411__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__411_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__411__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__411_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__292___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool v7; // w20
  System_Func_bool__o *v8; // x22
  UnityEngine_WaitUntil_o *v9; // x21
  Il2CppObject **p__2__current; // x19

  if ( (byte_4BD7CCF & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__292_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BD7CCF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C22094(Instance, v6);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v7 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v8 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v8, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__292_0__, 0LL);
  v9 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC(p__2__current, v9);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__286___ctor(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitMaterialOnBackground_d__286__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MyRoomControl__InitMaterialOnBackground_d__286_o *v3; // x20
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  UnityEngine_Object_o *v9; // x21
  System_Collections_IEnumerator_o *v10; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct TerminalSceneComponent_o *terminal_5__2; // x8
  BackTaskAmountAdjuster_o *v14; // x20
  System_Collections_IEnumerator_o *v15; // x0

  v3 = this;
  if ( (byte_4BD7CD0 & 1) == 0 )
  {
    sub_1C21E38(&BackTaskAmountAdjuster_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7CD0 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    terminal_5__2 = v3->fields._terminal_5__2;
    v3->fields.__1__state = -1;
    if ( !terminal_5__2 )
      goto LABEL_26;
    this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)terminal_5__2->fields.mTerminalMap;
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
    this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_26;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, v2);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v6->static_fields;
    mInstance = static_fields->mInstance;
    v3->fields._terminal_5__2 = static_fields->mInstance;
    sub_1C21DDC(&v3->fields._terminal_5__2, mInstance);
    v9 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v10 = QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = &v3->fields.__2__current;
        sub_1C21DDC(p__2__current, v10);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_26:
      sub_1C22094(this, method);
    }
  }
  v14 = (BackTaskAmountAdjuster_o *)sub_1C22084(BackTaskAmountAdjuster_TypeInfo);
  BackTaskAmountAdjuster___ctor(v14, 0LL);
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)_4__this->fields.mStateMaterial;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                               (MyRoomStateMaterial_o *)this,
                                                               method);
  if ( !v14 )
    goto LABEL_26;
  v15 = BackTaskAmountAdjuster__Execute(v14, (System_Collections_IEnumerator_o *)this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v15, 0LL);
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__286__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitMaterialOnBackground_d__286__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__InitMaterialOnBackground_d__286_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__286__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__286__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitServantMenu_d__289___ctor(
        MyRoomControl__InitServantMenu_d__289_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitServantMenu_d__289__MoveNext(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  bool v7; // w21
  System_Func_bool__o *v8; // x22
  UnityEngine_WaitUntil_o *v9; // x19
  Il2CppObject **p__2__current; // x20
  BackTaskAmountAdjuster_o *v11; // x20
  System_Collections_IEnumerator_o *v12; // x0

  if ( (byte_4BD7CD1 & 1) == 0 )
  {
    sub_1C21E38(&BackTaskAmountAdjuster_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__InitServantMenu_b__289_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7CD1 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v11 = (BackTaskAmountAdjuster_o *)sub_1C22084(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v11, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v6);
          if ( !v11 )
            goto LABEL_17;
          v12 = BackTaskAmountAdjuster__Execute(v11, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v12, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1C22094(Instance, v6);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v7 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v8 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v8, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__289_0__, 0LL);
  v9 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC(p__2__current, v9);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__289__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitServantMenu_d__289__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__InitServantMenu_d__289_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__289__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitServantMenu_d__289__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__380___ctor(
        MyRoomControl__LoadMultipleServant_d__380_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__LoadMultipleServant_d__380__MoveNext(
        MyRoomControl__LoadMultipleServant_d__380_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  bool result; // w0
  Il2CppObject *v5; // x22
  Il2CppObject **p__8__1; // x27
  Il2CppObject *v7; // x1
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v9; // x0
  struct StandFigureBack_array *v10; // x8
  __int64 v11; // x19
  __int64 v12; // x22
  __int64 v13; // x24
  int max_length; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v16; // x8
  const MethodInfo *v17; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v20; // w20
  int32_t v21; // w23
  struct ServantScriptMultipleEntity_array *v22; // x26
  ServantScriptMultipleEntity_o *v23; // x25
  struct StandFigureBack_array *v24; // x8
  __int64 v25; // x25
  __int64 v26; // x19
  struct MyRoomControl_o *v27; // x24
  Il2CppObject *v28; // x28
  Il2CppObject **v29; // x21
  int32_t v30; // w5
  StandFigureBack_o *v31; // x26
  System_Action_o *monitor; // x27
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *v34; // x8
  __int64 v35; // x19
  int v36; // w9
  unsigned int v37; // w25
  struct StandFigureBack_array *v38; // x8
  UnityEngine_Component_o *v39; // x8
  UnityEngine_Component_o *v40; // x21
  float v41; // s2
  float v42; // s1
  float v43; // s8
  float v44; // s10
  float v45; // s9
  float v46; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v48; // x8
  float v49; // s10
  struct StandFigureBack_array *v50; // x9
  int v51; // s14
  int v52; // s15
  float v53; // s0
  float v54; // s2
  struct StandFigureBack_array *v55; // x8
  float v56; // s11
  float v57; // s12
  struct StandFigureBack_array *v58; // x8
  struct StandFigureBack_array *v59; // x8
  System_String_o *v60; // x2
  struct MyRoomControl___c__DisplayClass380_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v63; // x22
  Il2CppObject *v64; // x20
  System_Func_bool__o *v65; // x21
  UnityEngine_WaitWhile_o *v66; // x20
  struct ServantScriptMultipleEntity_array *v67; // x8
  unsigned int v68; // w9
  ServantScriptMultipleEntity_o *v69; // x10
  ServantScriptMultipleEntity_o *v70; // x8
  Il2CppObject *v71; // x20
  System_Func_bool__o *v72; // x21
  UnityEngine_WaitWhile_o *v73; // x20
  __int64 v74; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-C8h]
  int32_t v76; // [xsp+24h] [xbp-BCh]
  MyRoomControl__LoadMultipleServant_d__380_o *v77; // [xsp+28h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+30h] [xbp-B0h] BYREF
  __int64 formId; // [xsp+38h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v77 = this;
  if ( (byte_4BD7CD2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&ServantScriptMultipleEntity___TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__0__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__1__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__2__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__3__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass380_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21E38(&StringLiteral_6877/*"FinishedFadeMultipleServant"*/);
    byte_4BD7CD2 = 1;
  }
  entity = 0LL;
  formId = 0LL;
  _1__state = v77->fields.__1__state;
  _4__this = v77->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      _8__1 = v77->fields.__8__1;
      v77->fields.__1__state = -1;
      if ( _8__1 )
      {
        _8__1->fields.wait = 1;
        if ( _4__this )
        {
          multipleViewComponent = _4__this->fields.multipleViewComponent;
          v63 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v63,
            (Il2CppObject *)_8__1,
            Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__1__,
            0LL);
          if ( multipleViewComponent )
          {
            MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v63, 0LL);
            v64 = (Il2CppObject *)v77->fields.__8__1;
            v65 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v65,
              v64,
              Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__2__,
              0LL);
            v66 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v66, v65, 0LL);
            v77->fields.__2__current = (Il2CppObject *)v66;
            sub_1C21DDC(&v77->fields.__2__current, v66);
            v77->fields.__1__state = 2;
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
      v77->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_1C22084(MyRoomControl___c__DisplayClass380_0_TypeInfo);
      System_Object___ctor(v5, 0LL);
      v77->fields.__8__1 = (struct MyRoomControl___c__DisplayClass380_0_o *)v5;
      p__8__1 = (Il2CppObject **)&v77->fields.__8__1;
      sub_1C21DDC(&v77->fields.__8__1, v5);
      this = (MyRoomControl__LoadMultipleServant_d__380_o *)v77->fields.__8__1;
      if ( this )
      {
        v7 = (Il2CppObject *)v77->fields.__4__this;
        this->fields.__2__current = v7;
        this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21DDC(&this->fields.__2__current, v7);
        if ( _4__this )
        {
          this = (MyRoomControl__LoadMultipleServant_d__380_o *)_4__this->fields.mBlocker;
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
                v9 = sub_1C21EE0(ServantScriptMultipleEntity___TypeInfo, multipleStandFigureBacks->max_length);
                v77->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v9;
                p_multipleEntities_5__2 = &v77->fields._multipleEntities_5__2;
                this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21DDC(
                                                                        &v77->fields._multipleEntities_5__2,
                                                                        v9);
                v10 = _4__this->fields.multipleStandFigureBacks;
                if ( v10 )
                {
                  v11 = 0LL;
                  v12 = 0LL;
                  v13 = 32LL;
                  while ( 1 )
                  {
                    max_length = v10->max_length;
                    if ( (int)v12 >= max_length )
                      break;
                    if ( (unsigned int)v12 >= max_length )
                      goto LABEL_104;
                    this = (MyRoomControl__LoadMultipleServant_d__380_o *)v10->m_Items[v12];
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
                    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
                    if ( !defaultMultipleServantPoses )
                      goto LABEL_83;
                    if ( (unsigned int)v12 >= defaultMultipleServantPoses->max_length )
                      goto LABEL_104;
                    if ( !this )
                      goto LABEL_83;
                    v16 = (float *)((char *)defaultMultipleServantPoses + v11);
                    v80.fields.z = v16[10] + 0.0;
                    v80.fields.y = v16[9] + 0.0;
                    v80.fields.x = flt_BFD640[(_DWORD)v12 == 0] + v16[8];
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v80, 0LL);
                    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
                    if ( !multipleServantUsrIds )
                      goto LABEL_83;
                    if ( (unsigned int)v12 >= multipleServantUsrIds->max_length )
                      goto LABEL_104;
                    if ( !_4__this->fields.myRoomData )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__380_o *)MyRoomData__getUsrSvtData(
                                                                            (MyRoomData_o *)this,
                                                                            multipleServantUsrIds->m_Items[v12],
                                                                            v17);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__380_o *)UserServantEntity__getSvtId(
                                                                            (UserServantEntity_o *)this,
                                                                            0LL);
                    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
                    if ( !multipleLimitCounts )
                      goto LABEL_83;
                    if ( (unsigned int)v12 >= multipleLimitCounts->max_length )
                      goto LABEL_104;
                    v20 = multipleLimitCounts->m_Items[v12 + 1];
                    v21 = (int)this;
                    MyRoomControl__SetImageIdAndFormId(
                      _4__this,
                      (int32_t *)&formId + 1,
                      (int32_t *)&formId,
                      (int32_t)this,
                      v20,
                      0LL);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (MyRoomControl__LoadMultipleServant_d__380_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__380_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                                            (ServantScriptMultipleMaster_o *)this,
                                                                            &entity,
                                                                            SHIDWORD(formId),
                                                                            formId,
                                                                            v12 + 1,
                                                                            0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v22 = *p_multipleEntities_5__2;
                      if ( !*p_multipleEntities_5__2 )
                        goto LABEL_83;
                      v23 = entity;
                      if ( entity )
                      {
                        this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21F74(
                                                                                entity,
                                                                                v22->obj.klass->_1.element_class);
                        if ( !this )
                        {
                          v74 = sub_1C220B8();
                          sub_1C21F60(v74, 0LL);
                        }
                      }
                      if ( (unsigned int)v12 >= v22->max_length )
                        goto LABEL_104;
                      v22->m_Items[v12] = v23;
                      this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21DDC((char *)v22 + v13, v23);
                    }
                    v24 = _4__this->fields.multipleStandFigureBacks;
                    if ( !v24 )
                      goto LABEL_83;
                    if ( (unsigned int)v12 >= v24->max_length )
                      goto LABEL_104;
                    v25 = v11;
                    v26 = v13;
                    v27 = _4__this;
                    v28 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v29 = p__8__1;
                      v30 = formId;
                      v31 = v24->m_Items[v12];
                      monitor = (System_Action_o *)v28[2].monitor;
                      if ( !monitor )
                      {
                        v76 = formId;
                        monitor = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                        System_Action___ctor(
                          monitor,
                          v28,
                          Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__3__,
                          0LL);
                        v28[2].monitor = monitor;
                        this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21DDC(&v28[2].monitor, monitor);
                        v30 = v76;
                      }
                      if ( v31 )
                      {
                        StandFigureBack__SetMyRoomStandFigure(v31, v21, v20, 1, 0, v30, 10, monitor, 0, 0LL);
                        v10 = v27->fields.multipleStandFigureBacks;
                        _4__this = v27;
                        v13 = v26 + 8;
                        ++v12;
                        v11 = v25 + 12;
                        p__8__1 = v29;
                        if ( v10 )
                          continue;
                      }
                    }
                    goto LABEL_83;
                  }
                  this = (MyRoomControl__LoadMultipleServant_d__380_o *)sub_1C21EE0(int___TypeInfo, 2LL);
                  v67 = *p_multipleEntities_5__2;
                  if ( *p_multipleEntities_5__2 )
                  {
                    v68 = v67->max_length;
                    if ( !v68 )
                      goto LABEL_104;
                    v69 = v67->m_Items[0];
                    if ( v69 )
                    {
                      if ( !this )
                        goto LABEL_83;
                      if ( !LODWORD(this->fields.__2__current) )
                        goto LABEL_104;
                      LODWORD(this->fields.__4__this) = v69->fields.depth;
                    }
                    if ( v68 <= 1 )
                      goto LABEL_104;
                    v70 = v67->m_Items[1];
                    if ( v70 )
                    {
                      if ( this )
                      {
                        if ( LODWORD(this->fields.__2__current) <= 1 )
                          goto LABEL_104;
                        HIDWORD(this->fields.__4__this) = v70->fields.depth;
LABEL_101:
                        if ( LODWORD(this->fields.__2__current) >= 2 )
                        {
                          MyRoomControl__SetLayerMultipleServant(
                            _4__this,
                            SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
                            0LL);
                          v71 = (Il2CppObject *)v77->fields.__8__1;
                          v72 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v72,
                            v71,
                            Method_MyRoomControl___c__DisplayClass380_0__LoadMultipleServant_b__0__,
                            0LL);
                          v73 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
                          UnityEngine_WaitWhile___ctor(v73, v72, 0LL);
                          v77->fields.__2__current = (Il2CppObject *)v73;
                          sub_1C21DDC(&v77->fields.__2__current, v73);
                          result = 1;
                          v77->fields.__1__state = 1;
                          return result;
                        }
LABEL_104:
                        sub_1C2209C(this, method);
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
    sub_1C22094(this, method);
  }
  v77->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__380_o *)_4__this->fields.titleInfo;
  if ( !this )
    goto LABEL_83;
  TitleInfoControl__changeTitleInfo_38387828((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
  titleInfo = _4__this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__380_o *)titleInfo->fields.titleImg;
  if ( !this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MyRoomControl__LoadMultipleServant_d__380_o *)_4__this->fields.multipleViewCloseButton;
  _4__this->fields.multipleViewState = 2;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v34 = _4__this->fields.multipleStandFigureBacks;
  if ( !v34 )
    goto LABEL_83;
  v35 = 4LL;
  while ( 1 )
  {
    v36 = v34->max_length;
    v37 = v35 - 4;
    if ( (int)v35 - 4 >= v36 )
      return 0;
    if ( v37 >= v36 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__380_o *)*((_QWORD *)&v34->obj.klass + v35);
    if ( !this )
      goto LABEL_83;
    this = (MyRoomControl__LoadMultipleServant_d__380_o *)StandFigureBack__GetSvtStandFigure(
                                                            (StandFigureBack_o *)this,
                                                            0,
                                                            0LL);
    if ( !this )
      goto LABEL_83;
    v38 = _4__this->fields.multipleStandFigureBacks;
    if ( !v38 )
      goto LABEL_83;
    if ( v37 >= v38->max_length )
      goto LABEL_104;
    v39 = (UnityEngine_Component_o *)*((_QWORD *)&v38->obj.klass + v35);
    if ( !v39 )
      goto LABEL_83;
    v40 = (UnityEngine_Component_o *)this->fields.__4__this;
    this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_transform(v39, 0LL);
    if ( !this )
      goto LABEL_83;
    *(UnityEngine_Vector3_o *)(&v41 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v43 = v42;
    v44 = (_DWORD)v35 == 4 ? -256.0 : 256.0;
    if ( !v40 )
      goto LABEL_83;
    v45 = v41;
    this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_transform(v40, 0LL);
    if ( !this )
      goto LABEL_83;
    LODWORD(v46) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    multipleEntities_5__2 = v77->fields._multipleEntities_5__2;
    if ( !multipleEntities_5__2 )
      goto LABEL_83;
    if ( v37 >= multipleEntities_5__2->max_length )
      goto LABEL_104;
    v48 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v35);
    v49 = v44 - v46;
    if ( v48 )
    {
      v50 = _4__this->fields.multipleStandFigureBacks;
      if ( !v50 )
        goto LABEL_83;
      if ( v37 >= v50->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__380_o *)*((_QWORD *)&v50->obj.klass + v35);
      if ( !this )
        goto LABEL_83;
      v51 = *(_DWORD *)(v48 + 28);
      v52 = *(_DWORD *)(v48 + 32);
      this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v55 = _4__this->fields.multipleStandFigureBacks;
      if ( !v55 )
        goto LABEL_83;
      if ( v37 >= v55->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__380_o *)*((_QWORD *)&v55->obj.klass + v35);
      if ( !this )
        goto LABEL_83;
      v56 = v53;
      v57 = v54;
      this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      v43 = v43 + (float)v52;
      v49 = v49 + (float)v51;
      v81.fields.x = v56;
      v81.fields.y = v43;
      v81.fields.z = v57;
      v45 = v45 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v81, 0LL);
    }
    v58 = _4__this->fields.multipleStandFigureBacks;
    if ( !v58 )
      goto LABEL_83;
    if ( v37 >= v58->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__380_o *)*((_QWORD *)&v58->obj.klass + v35);
    if ( this )
    {
      this = (MyRoomControl__LoadMultipleServant_d__380_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v59 = _4__this->fields.multipleStandFigureBacks;
      if ( v59 )
      {
        v60 = v37 == v59->max_length - 1 ? (System_String_o *)StringLiteral_6877/*"FinishedFadeMultipleServant"*/ : 0LL;
        v82.fields.x = v49;
        v82.fields.y = v43;
        v82.fields.z = v45;
        MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v82, v60, 0LL);
        v34 = _4__this->fields.multipleStandFigureBacks;
        ++v35;
        if ( v34 )
          continue;
      }
    }
    goto LABEL_83;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__380__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__380_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadMultipleServant_d__380__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__380_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__LoadMultipleServant_d__380_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__380__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__380_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__380__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__380_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__402___ctor(
        MyRoomControl__LoadPhotoCampaignServant_d__402_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoCampaignServant_d__402__MoveNext(
        MyRoomControl__LoadPhotoCampaignServant_d__402_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__402_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v4; // x22
  struct MyRoomControl___c__DisplayClass402_0_o **p__8__1; // x21
  struct MyRoomControl_o *v6; // x1
  const MethodInfo *v7; // x2
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v10; // w21
  int32_t photoCampaignType; // w26
  StandFigureBack_o *photoCampaignStandFigureBack; // x23
  int32_t formId_5__3; // w24
  Il2CppObject *_8__1; // x20
  System_Action_o *v15; // x25
  bool v16; // w20
  Il2CppObject *v17; // x21
  System_Func_bool__o *v18; // x22
  UnityEngine_WaitWhile_o *v19; // x21
  Il2CppObject **p__2__current; // x19
  struct MyRoomControl___c__DisplayClass402_0_o *v21; // x21
  System_Action_o *v22; // x22
  Il2CppObject *v23; // x20
  System_Func_bool__o *v24; // x21
  UnityEngine_WaitWhile_o *v25; // x20
  Il2CppObject **v26; // x19
  int v27; // w8
  MyRoomControl__LoadPhotoCampaignServant_d__402_o *v28; // x1
  struct ServantPhotoEntity_FaceData_array **p_photoCampaignFaceList; // x0
  struct ServantPhotoEntity_FaceData_array *v30; // x8
  __int64 photoCampaignFaceListIndex; // x9
  struct ServantPhotoEntity_FaceData_o *v32; // x1
  ServantPhotoEntity_FaceData_o *faceData_5__4; // x21
  Il2CppObject *v34; // x22
  System_Action_o *v35; // x23
  Il2CppObject *v36; // x20
  System_Func_bool__o *v37; // x21
  UnityEngine_WaitWhile_o *v38; // x20
  struct ServantPhotoEntity_FaceData_o *v39; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl___c__DisplayClass402_0_o *v42; // x21
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v44; // x22
  Il2CppObject *v45; // x20
  System_Func_bool__o *v46; // x21
  UnityEngine_WaitWhile_o *v47; // x20
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v49; // x8
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x19
  struct StandFigureBack_o *v52; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  ServantPhotoEntity_FaceData_o *v55; // x21
  ServantPhotoEntity_FaceData_Fields *p_fields; // x24
  __int64 v57; // x0
  struct System_Int32_array **p_multiForm; // x23
  struct System_Int32_array *multiFace; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v61; // x8
  int32_t *v62; // x10
  struct System_Int32_array *v63; // x11
  __int64 v64; // x11
  MyRoomControl__LoadPhotoCampaignServant_d__402_o *v65; // x22
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v67; // x0
  System_Func_object__object__o *_9__402_4; // x22
  Il2CppObject *v69; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  struct MyRoomControl___c__DisplayClass402_0_o *v73; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__402_o *v74; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v76; // x23
  UIStandFigureR_o *v77; // x20
  System_Action_o *v78; // x22
  Il2CppObject *v79; // x20
  System_Func_bool__o *v80; // x21
  UnityEngine_WaitWhile_o *v81; // x20
  __int64 v83; // x0
  float scale; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD7CD3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_1C21E38(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C21E38(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__402_4__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__0__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__10__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__1__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__2__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__3__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__5__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__6__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__7__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__8__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__9__);
    sub_1C21E38(&MyRoomControl___c__DisplayClass402_0_TypeInfo);
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C21E38(&StringLiteral_6878/*"FinishedFadePhotoServant"*/);
    byte_4BD7CD3 = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_1C22084(MyRoomControl___c__DisplayClass402_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass402_0_o *)v4;
      p__8__1 = &v2->fields.__8__1;
      sub_1C21DDC(&v2->fields.__8__1, v4);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_77;
      v6 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v6;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C21DDC(&this->fields, v6);
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_77;
      (*p__8__1)->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      v86.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      v86.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v86.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x
                   + flt_BFD0B0[!_4__this->fields._IsMasterRight_k__BackingField];
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v86, 0LL);
      if ( !_4__this->fields.myRoomData )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)MyRoomData__getUsrSvtData(
                                                                   (MyRoomData_o *)this,
                                                                   _4__this->fields.photoCampaignServantUsrId,
                                                                   v7);
      if ( !this )
        goto LABEL_77;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
      photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
      v10 = SvtId;
      MyRoomControl__SetImageIdAndFormId(
        _4__this,
        &v2->fields._imageId_5__2,
        &v2->fields._formId_5__3,
        SvtId,
        photoCampaignLimitCount,
        0LL);
      photoCampaignType = _4__this->fields.photoCampaignType;
      photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignServantImageId = v2->fields._imageId_5__2;
      formId_5__3 = v2->fields._formId_5__3;
      _8__1 = (Il2CppObject *)v2->fields.__8__1;
      v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        _8__1,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_77;
      v16 = 1;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v10,
        photoCampaignLimitCount,
        1,
        0,
        formId_5__3,
        10,
        v15,
        photoCampaignType == 1,
        0LL);
      v17 = (Il2CppObject *)v2->fields.__8__1;
      v18 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v18,
        v17,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__1__,
        0LL);
      v19 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v19, v18, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = &v2->fields.__2__current;
      sub_1C21DDC(p__2__current, v19);
      *((_DWORD *)p__2__current - 2) = 1;
      return v16;
    case 1:
      v21 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v21 )
        goto LABEL_77;
      v21->fields.flag = 1;
      v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v21,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__2__,
        0LL);
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v22, 0LL);
      v23 = (Il2CppObject *)v2->fields.__8__1;
      v24 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v24,
        v23,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__3__,
        0LL);
      v25 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v25, v24, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v25;
      v26 = &v2->fields.__2__current;
      sub_1C21DDC(v26, v25);
      v27 = 2;
      goto LABEL_75;
    case 2:
      v2->fields.__1__state = -1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   &entity,
                                                                   v2->fields._imageId_5__2,
                                                                   (const MethodInfo_325E370 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !_4__this )
          goto LABEL_77;
        v52 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v52 )
          goto LABEL_77;
        standFigureCollectList = v52->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_77;
        size = (unsigned int)standFigureCollectList->fields._size;
        v55 = (ServantPhotoEntity_FaceData_o *)sub_1C22084(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor(v55, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C21EE0(int___TypeInfo, (unsigned int)size);
        if ( !v55 )
          goto LABEL_77;
        v55->fields.multiFace = (struct System_Int32_array *)this;
        p_fields = &v55->fields;
        sub_1C21DDC(&v55->fields, this);
        v57 = sub_1C21EE0(int___TypeInfo, (unsigned int)size);
        v55->fields.multiForm = (struct System_Int32_array *)v57;
        p_multiForm = &v55->fields.multiForm;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C21DDC(&v55->fields.multiForm, v57);
        if ( (int)size < 1 )
        {
LABEL_61:
          this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C21EE0(
                                                                       ServantPhotoEntity_FaceData___TypeInfo,
                                                                       1LL);
          if ( !this )
            goto LABEL_77;
          v65 = this;
          this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)sub_1C21F74(v55, this->klass->_1.element_class);
          if ( !this )
          {
            v83 = sub_1C220B8();
            sub_1C21F60(v83, 0LL);
          }
          if ( LODWORD(v65->fields.__2__current) )
          {
            v65->fields.__4__this = (struct MyRoomControl_o *)v55;
            sub_1C21DDC(&v65->fields.__4__this, v55);
            p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
            v28 = v65;
            _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v65;
            goto LABEL_65;
          }
        }
        else
        {
          multiFace = p_fields->multiFace;
          if ( !p_fields->multiFace )
            goto LABEL_77;
          max_length = multiFace->max_length;
          v61 = 0LL;
          v62 = &multiFace->m_Items[1];
          while ( v61 < max_length )
          {
            v62[v61] = 0;
            v63 = *p_multiForm;
            if ( !*p_multiForm )
              goto LABEL_77;
            if ( v61 >= v63->max_length )
              break;
            v64 = (__int64)v63 + 4 * v61++;
            *(_DWORD *)(v64 + 32) = v2->fields._formId_5__3;
            if ( size == v61 )
              goto LABEL_61;
          }
        }
LABEL_78:
        sub_1C2209C(this, method);
      }
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)entity;
      if ( !entity )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)ServantPhotoEntity__GetFaceList(
                                                                   (ServantPhotoEntity_o *)entity,
                                                                   v2->fields._formId_5__3,
                                                                   0LL);
      if ( !_4__this )
        goto LABEL_77;
      v28 = this;
      p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
      _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v28;
LABEL_65:
      sub_1C21DDC(p_photoCampaignFaceList, v28);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v67 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v67 = MyRoomControl___c_TypeInfo;
      }
      _9__402_4 = (System_Func_object__object__o *)v67->static_fields->__9__402_4;
      if ( !_9__402_4 )
      {
        if ( !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67);
          v67 = MyRoomControl___c_TypeInfo;
        }
        v69 = (Il2CppObject *)v67->static_fields->__9;
        _9__402_4 = (System_Func_object__object__o *)sub_1C22084(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__402_4,
          v69,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__402_4__,
          0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__402_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__402_4;
        sub_1C21DDC(&static_fields->__9__402_4, _9__402_4);
      }
      v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   photoCampaignFaceList,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__402_4,
                                                                   (const MethodInfo_2FE3ACC *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v72 = System_Linq_Enumerable__Distinct_int_(
              v71,
              (const MethodInfo_2FCD204 *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v72,
                                                                   (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
      v73 = v2->fields.__8__1;
      if ( !v73 )
        goto LABEL_77;
      v73->fields.flag = 1;
      v74 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this
        || (SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL),
            v76 = (Il2CppObject *)v2->fields.__8__1,
            v77 = SvtStandFigure,
            v78 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
            System_Action___ctor(
              v78,
              v76,
              Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__5__,
              0LL),
            !v77) )
      {
LABEL_77:
        sub_1C22094(this, method);
      }
      UIStandFigureR__PreloadFormAssets(v77, (System_Collections_Generic_List_int__o *)v74, v78, 0LL);
      v79 = (Il2CppObject *)v2->fields.__8__1;
      v80 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v80,
        v79,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__6__,
        0LL);
      v81 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v81, v80, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v81;
      v26 = &v2->fields.__2__current;
      sub_1C21DDC(v26, v81);
      v27 = 3;
LABEL_75:
      *((_DWORD *)v26 - 2) = v27;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v30 = _4__this->fields.photoCampaignFaceList;
      if ( !v30 )
        goto LABEL_77;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v30->max_length )
        goto LABEL_78;
      v32 = v30->m_Items[photoCampaignFaceListIndex];
      v2->fields._faceData_5__4 = v32;
      sub_1C21DDC(&v2->fields._faceData_5__4, v32);
      faceData_5__4 = v2->fields._faceData_5__4;
      v34 = (Il2CppObject *)v2->fields.__8__1;
      v35 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v35, v34, Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__7__, 0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, faceData_5__4, v35, 0LL);
      v36 = (Il2CppObject *)v2->fields.__8__1;
      v37 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v37,
        v36,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__8__,
        0LL);
      v38 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v38, v37, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v38;
      v26 = &v2->fields.__2__current;
      sub_1C21DDC(v26, v38);
      v27 = 4;
      goto LABEL_75;
    case 4:
      v39 = v2->fields._faceData_5__4;
      v2->fields.__1__state = -1;
      if ( !v39 )
        goto LABEL_77;
      multiForm = v39->fields.multiForm;
      if ( !multiForm )
        goto LABEL_77;
      if ( !multiForm->max_length )
        goto LABEL_78;
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        _4__this,
        v2->fields._imageId_5__2,
        multiForm->m_Items[1],
        &v2->fields._svtMovePos_5__5,
        &scale,
        0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_77;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScale_34799788(gameObject, scale, 0LL);
      v42 = v2->fields.__8__1;
      if ( !v42 )
        goto LABEL_77;
      v42->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v44 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v42,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__9__,
        0LL);
      if ( !photoCampaignComponent )
        goto LABEL_77;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v44, 0LL);
      v45 = (Il2CppObject *)v2->fields.__8__1;
      v46 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v46,
        v45,
        Method_MyRoomControl___c__DisplayClass402_0__LoadPhotoCampaignServant_b__10__,
        0LL);
      v47 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v47, v46, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v47;
      v26 = &v2->fields.__2__current;
      sub_1C21DDC(v26, v47);
      v27 = 5;
      goto LABEL_75;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__changeTitleInfo_38387828((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 1, 0LL);
      titleInfo = _4__this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)titleInfo->fields.titleImg;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v49 = _4__this->fields.titleInfo;
      if ( !v49 )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)v49->fields.headerBgImg;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignState = 2;
      if ( !this )
        goto LABEL_77;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(_4__this, v50, v2->fields._svtMovePos_5__5, (System_String_o *)StringLiteral_6878/*"FinishedFadePhotoServant"*/, 0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__402_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_77;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v51, PhotoCampaignMasterPosition, 0LL, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__402__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__402_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoCampaignServant_d__402__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoCampaignServant_d__402_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__LoadPhotoCampaignServant_d__402_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__402__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__402_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__402__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoCampaignServant_d__402_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__413___ctor(
        MyRoomControl__StartCameraEffect_d__413_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__413__MoveNext(
        MyRoomControl__StartCameraEffect_d__413_o *this,
        const MethodInfo *method)
{
  MyRoomControl__StartCameraEffect_d__413_o *v2; // x20
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *v6; // x22
  bool v7; // w21
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_WaitForSeconds_o *v9; // x19
  Il2CppObject **v10; // x20
  int32_t v11; // w1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x0
  Il2CppObject **p__2__current; // x20

  v2 = this;
  if ( (byte_4BD7CD4 & 1) == 0 )
  {
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl__StartCameraEffect_d__413_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BD7CD4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignFrameSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__413_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      _4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignFrameWideSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__413_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      !_4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_34;
    if ( _4__this->fields._IsOnlyServant_k__BackingField )
      v11 = 362;
    else
      v11 = 870;
    UIWidget__set_width((UIWidget_o *)this, v11, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(
      photoCampaignProduction,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          this = (MyRoomControl__StartCameraEffect_d__413_o *)TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL),
          (titleInfo = _4__this->fields.titleInfo) == 0LL)
      || (this = (MyRoomControl__StartCameraEffect_d__413_o *)titleInfo->fields.backBtn) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          MyRoomControl__SetPhotoCampaignUi(_4__this, 1, 0LL),
          (this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignCameraButton) == 0LL) )
    {
LABEL_34:
      sub_1C22094(this, method);
    }
    photoCampaignCameraEffect = (Il2CppObject *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__Instantiate_object__50551272(
            photoCampaignCameraEffect,
            transform,
            (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v17;
    sub_1C21DDC(&_4__this->fields.photoCampaignInstantiateCameraEffect, v17);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1C21DDC(p__2__current, 0LL);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_34;
  this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_34;
  photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
  v6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__50551272(
    photoCampaignShutterEffect,
    v6,
    (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignProduction;
  if ( !this )
    goto LABEL_34;
  v7 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__413_o *)_4__this->fields.photoCampaignFadeSprite;
  if ( !this )
    goto LABEL_34;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_object_(
    v8,
    (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v9 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v9, 0.066, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v9;
  v10 = &v2->fields.__2__current;
  sub_1C21DDC(v10, v9);
  *((_DWORD *)v10 - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__413__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__413_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__413__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__413_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__StartCameraEffect_d__413_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__413__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__413_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__413__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__413_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7CBB & 1) == 0 )
  {
    sub_1C21E38(&MyRoomControl___c_TypeInfo);
    byte_4BD7CBB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v1;
  sub_1C21DDC(MyRoomControl___c_TypeInfo->static_fields, v1);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__320_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7CBE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7CBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__240_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7CBD & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7CBD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__331_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7CBF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BD7CBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__402_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1C22094(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void __fastcall MyRoomControl___c___initMyRoom_b__218_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__239_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7CBC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7CBC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass238_0___ctor(
        MyRoomControl___c__DisplayClass238_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass238_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass238_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass242_0___ctor(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass242_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass242_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v6; // x8
  struct MyRoomControl_o *v7; // x8
  struct MyRoomControl_o *v8; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22

  v2 = this;
  if ( (byte_4BD7CC0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1C21E38(&Method_MyRoomControl___c__DisplayClass242_0__SetMyRoomStandFigure_b__1__);
    byte_4BD7CC0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass242_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  standFigureCollectList = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  this[1].fields.__9__1 = standFigureCollectList;
  sub_1C21DDC(&this[1].fields.__9__1, standFigureCollectList);
  this = (MyRoomControl___c__DisplayClass242_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[19].fields.__4__this, 0, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v6->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6->fields.isExistVoiceData, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass242_0_o *)v7->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v7->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass242_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].fields.__9__2) )
    MyRoomControl__setNormalFace_32260212((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_20;
  favoriteChangeComp = v8->fields.favoriteChangeComp;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MyRoomControl___c__DisplayClass242_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1C21DDC(&v2->fields.__9__1, _9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1C22094(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass242_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  struct MyRoomControl_o *v5; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  struct MyRoomControl_o *v8; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v10; // x8
  float v11; // s8
  int v12; // s1
  struct MyRoomControl_o *v13; // x8
  int v14; // s9
  int v15; // s2
  float v16; // s0
  int v17; // s1
  struct MyRoomControl_o *v18; // x8

  if ( (byte_4BD7CC1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass242_0__SetMyRoomStandFigure_b__2__);
    sub_1C21E38(&StringLiteral_11482/*"ReleaseTouch"*/);
    byte_4BD7CC1 = 1;
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
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v8->fields.standFigureBack;
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
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v10->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v11 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v13->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v14 = v12;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v15 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v16 = -v11;
    v17 = v14;
    MyRoomControl__moveControl(
      _4__this,
      _4__this->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v15 - 2),
      (System_String_o *)StringLiteral_11482/*"ReleaseTouch"*/,
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
            _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass242_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _4__this = (MyRoomControl_o *)sub_1C21DDC(&this->fields.__9__2, _9__2);
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
    sub_1C22094(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_30;
  v18->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass242_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x0
  _BOOL4 isHeroine; // w8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_1C22094(_4__this, v3);
  isHeroine = _4__this->fields.isHeroine;
  _4__this->fields.isSvtLoading = 0;
  if ( isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass243_0___ctor(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass243_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass243_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass243_0_o *)_4__this->fields.svtClickCollider) == 0LL)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0LL),
        !voicePlayBtn) )
  {
    sub_1C22094(this, method);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass244_0___ctor(
        MyRoomControl___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass244_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass244_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass244_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v6; // x8
  StandFigureBack_o *standFigureBack; // x20
  int32_t servantId; // w21
  int32_t imageLimitCount; // w22
  int32_t formId; // w23
  System_Action_o *v11; // x24

  v4 = this;
  if ( (byte_4BD7CC3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass244_0_o *)sub_1C21E38(&Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_g__OnEnd_0__);
    byte_4BD7CC3 = 1;
  }
  if ( assetData )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_9;
    _4__this->fields.combineAssetData = assetData;
    this = (MyRoomControl___c__DisplayClass244_0_o *)sub_1C21DDC(&_4__this->fields.combineAssetData, assetData);
  }
  v6 = v4->fields.__4__this;
  if ( !v6
    || (standFigureBack = v6->fields.standFigureBack,
        servantId = v4->fields.servantId,
        imageLimitCount = v4->fields.imageLimitCount,
        formId = v4->fields.formId,
        v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_g__OnEnd_0__,
          0LL),
        !standFigureBack) )
  {
LABEL_9:
    sub_1C22094(this, assetData);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, imageLimitCount, 1, 0, formId, 10, v11, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass244_0___SetMaterialSvtFigure_b__2(
        MyRoomControl___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_1C22094(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass244_0___SetMaterialSvtFigure_g__OnEnd_0(
        MyRoomControl___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass244_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  struct MyRoomControl_o *v6; // x8
  struct MyRoomControl_o *v7; // x8
  struct MyRoomControl_o *v8; // x8
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  int monitor; // w8
  struct MyRoomControl_o *v13; // x8
  StandFigureBack_o *v14; // x20
  System_Action_o *v15; // x21
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

  v2 = this;
  if ( (byte_4BD7CC2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_b__2__);
    this = (MyRoomControl___c__DisplayClass244_0_o *)sub_1C21E38(&StringLiteral_11482/*"ReleaseTouch"*/);
    byte_4BD7CC2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_44;
  standFigureCollectList = standFigureBack->fields.standFigureCollectList;
  *(_QWORD *)&this[1].fields.formId = standFigureCollectList;
  sub_1C21DDC(&this[1].fields.formId, standFigureCollectList);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)v6->fields.moveBtnObj;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)v7->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)v8->fields.helpBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)v9->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)v10->fields.svtClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass244_0_o *)v11->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass244_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  if ( LOBYTE(this[18].fields.servantId) )
    MyRoomControl__setNormalFace_32260212((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass244_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  monitor = (int)this[18].monitor;
  if ( monitor == 1 )
  {
    this = (MyRoomControl___c__DisplayClass244_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_44;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v16 = v2->fields.__4__this;
    if ( !v16 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass244_0_o *)v16->fields.standFigureBack;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass244_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    this = *(MyRoomControl___c__DisplayClass244_0_o **)&this->fields.servantId;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass244_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v18 = v2->fields.__4__this;
    if ( !v18 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass244_0_o *)v18->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v19 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass244_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v21 = v2->fields.__4__this;
    if ( !v21 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass244_0_o *)v21->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v22 = v20;
    this = (MyRoomControl___c__DisplayClass244_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass244_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_44;
    v24 = -v19;
    v25 = v22;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].monitor,
      *(UnityEngine_Vector3_o *)(&v23 - 2),
      (System_String_o *)StringLiteral_11482/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !monitor )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v13 = v2->fields.__4__this;
    if ( v13 )
    {
      v14 = v13->fields.standFigureBack;
      v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_MyRoomControl___c__DisplayClass244_0__SetMaterialSvtFigure_b__2__,
        0LL);
      if ( v14 )
      {
        StandFigureBack__Fadein(v14, v15, 0LL);
        return;
      }
    }
LABEL_44:
    sub_1C22094(this, method);
  }
  ActionExtensions__Call(v2->fields.end_act, 0LL);
  v26 = v2->fields.__4__this;
  if ( !v26 )
    goto LABEL_44;
  v26->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass251_0___ctor(
        MyRoomControl___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass251_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass251_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v7; // x8

  v2 = this;
  if ( (byte_4BD7CC4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (MyRoomControl___c__DisplayClass251_0_o *)sub_1C21E38(&StringLiteral_8445/*"LOAD_END"*/);
    byte_4BD7CC4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (MyRoomControl___c__DisplayClass251_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_11;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (MyRoomControl___c__DisplayClass251_0_o *)v4->fields.imageIdList) == 0LL
    || (svtCtr = v4->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass251_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.figureSvtDispIdx,
                                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0LL),
        (v7 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass251_0_o *)v7->fields.myRoomFsm) == 0LL )
  {
LABEL_11:
    sub_1C22094(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8445/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass324_0___ctor(
        MyRoomControl___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass324_0___SetFavoriteSvt_b__0(
        MyRoomControl___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass324_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v7; // x8

  v2 = this;
  if ( (byte_4BD7CC5 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass324_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BD7CC5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass324_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_10;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (MyRoomControl___c__DisplayClass324_0_o *)v4->fields.imageIdList) == 0LL
    || (svtCtr = v4->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass324_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.figureSvtDispIdx,
                                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0LL),
        (v7 = v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1C22094(this, method);
  }
  v7->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass324_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4BD7CC6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7CC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall MyRoomControl___c__DisplayClass324_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass343_0___ctor(
        MyRoomControl___c__DisplayClass343_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass343_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass343_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass343_0_o *v4; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
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
  this = (MyRoomControl___c__DisplayClass343_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = bondsStandFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1C21DDC(&this[2].monitor, standFigureCollectList);
  this = (MyRoomControl___c__DisplayClass343_0_o *)v4->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass343_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass343_0_o *)v8->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v9 = v6;
  v10 = v7;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11
    || (this = (MyRoomControl___c__DisplayClass343_0_o *)v11->fields.bondsStandFigureBack) == 0LL
    || (this = (MyRoomControl___c__DisplayClass343_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0LL)) == 0LL
    || (this = *(MyRoomControl___c__DisplayClass343_0_o **)&this->fields.createStandEnd) == 0LL
    || (this = (MyRoomControl___c__DisplayClass343_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_1C22094(this, method);
  }
  v12.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v12.fields.y = v9;
  v12.fields.z = v10;
  GameObjectExtensions__SetLocalPosition(v4->fields.bondsSvtObj, v12, 0LL);
  v4->fields.createStandEnd = 1;
}


void __fastcall MyRoomControl___c__DisplayClass359_0___ctor(
        MyRoomControl___c__DisplayClass359_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass359_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass359_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1C22094(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass380_0___ctor(
        MyRoomControl___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass380_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0LL )
    sub_1C22094(this, method);
  return this->fields.loadedCount < (signed int)multipleStandFigureBacks->max_length;
}


void __fastcall MyRoomControl___c__DisplayClass380_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass380_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass380_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void __fastcall MyRoomControl___c__DisplayClass384_0___ctor(
        MyRoomControl___c__DisplayClass384_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass384_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass384_0_o *this,
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
    sub_1C22094(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass384_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass384_0_o *this,
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
    sub_1C22094(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass395_0___ctor(
        MyRoomControl___c__DisplayClass395_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass395_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass395_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  AssetData_o *v3; // x20
  MyRoomControl___c__DisplayClass395_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  Il2CppObject *Object_object__49880776; // x21
  Il2CppObject *Component_object; // x21
  struct MyRoomControl_o *v8; // x8
  struct MyRoomControl_o *v9; // x21
  struct MyRoomControl_o *v10; // x21
  struct MyRoomControl_o *v11; // x25
  struct MyRoomControl_o *v12; // x8
  Il2CppObject *v13; // x21
  UnityEngine_Transform_o *transform; // x22
  struct MyRoomControl_o *v15; // x8
  struct MyRoomControl_o *v16; // x21
  struct MyRoomControl_o *v17; // x8
  struct MyRoomControl_o *v18; // x22
  struct MyRoomControl_o *v19; // x8
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *v21; // x0
  struct MyRoomControl_o *v22; // x8
  struct MyRoomControl_o *v23; // x21

  v3 = assetData;
  v4 = this;
  if ( (byte_4BD7CC7 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_20625/*"img_bg_shutter"*/);
    sub_1C21E38(&StringLiteral_10897/*"Polaroid_img_frame_wide"*/);
    sub_1C21E38(&StringLiteral_8532/*"LayerChangeButton"*/);
    sub_1C21E38(&StringLiteral_10826/*"PhotoSettingButton"*/);
    sub_1C21E38(&StringLiteral_9089/*"MasterEquipSettingDialog"*/);
    sub_1C21E38(&StringLiteral_5503/*"DownloadPhotoCampaignAtlas"*/);
    sub_1C21E38(&StringLiteral_17500/*"bit_camera_shutter"*/);
    sub_1C21E38(&StringLiteral_17499/*"bit_camera_iconblink"*/);
    sub_1C21E38(&StringLiteral_10895/*"Polaroid_btn_shutter"*/);
    sub_1C21E38(&StringLiteral_10896/*"Polaroid_img_frame"*/);
    this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1C21E38(&StringLiteral_10827/*"PhotoTargetSelectDialog"*/);
    byte_4BD7CC7 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_42;
  _4__this->fields.photoCampaignAssetData = v3;
  this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1C21DDC(&_4__this->fields.photoCampaignAssetData, v3);
  if ( !v3 )
    goto LABEL_42;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              v3,
                              (System_String_o *)StringLiteral_5503/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__49880776,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__49880776 )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__49880776,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v4->fields.__4__this;
      if ( !v8 )
        goto LABEL_42;
      v8->fields.photoCampaignAtlas = (struct UIAtlas_o *)Component_object;
      sub_1C21DDC(&v8->fields.photoCampaignAtlas, Component_object);
    }
  }
  this = (MyRoomControl___c__DisplayClass395_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.__4__this,
    (System_String_o *)StringLiteral_10896/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass395_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.callBack,
    (System_String_o *)StringLiteral_10897/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass395_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_10895/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass395_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].klass,
    (System_String_o *)StringLiteral_20625/*"img_bg_shutter"*/,
    0LL);
  v9 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object__49880776(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17499/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !v9 )
    goto LABEL_42;
  v9->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1C21DDC(&v9->fields.photoCampaignCameraEffect, this);
  v10 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object__49880776(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17500/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !v10 )
    goto LABEL_42;
  v10->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1C21DDC(&v10->fields.photoCampaignShutterEffect, this);
  v11 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object__49880776(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10827/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_42;
  v13 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)v12->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_Object__Instantiate_object__50551272(
                                                     v13,
                                                     transform,
                                                     (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v11 )
    goto LABEL_42;
  v11->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1C21DDC(&v11->fields.photoTargetSelectDialog, this);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass395_0_o *)v15->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_42;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v16 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object__49880776(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10826/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_Object__Instantiate_object__50551272(
                                                     (Il2CppObject *)this,
                                                     v17->fields.panelRoot,
                                                     (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v16 )
    goto LABEL_42;
  v16->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1C21DDC(&v16->fields.photoSettingButtonComponent, this);
  assetData = (AssetData_o *)v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass395_0_o *)assetData[14].fields.attrib;
  if ( !this )
    goto LABEL_42;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v18 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object__49880776(
                                                     v3,
                                                     (System_String_o *)StringLiteral_9089/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_42;
  v20 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)v19->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_Object__Instantiate_object__50551272(
                                                     v20,
                                                     v21,
                                                     (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass395_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v18 )
    goto LABEL_42;
  v18->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1C21DDC(&v18->fields.masterEquipSettingDialog, this);
  v22 = v4->fields.__4__this;
  if ( !v22
    || (this = (MyRoomControl___c__DisplayClass395_0_o *)v22->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v23 = v4->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object__49880776(
                                                           v3,
                                                           (System_String_o *)StringLiteral_8532/*"LayerChangeButton"*/,
                                                           (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288),
        !v23)
    || (v23->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_1C21DDC(&v23->fields.photoLayerChangeObj, this),
        (this = (MyRoomControl___c__DisplayClass395_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_42:
    sub_1C22094(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callBack, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass396_0___ctor(
        MyRoomControl___c__DisplayClass396_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass396_0___LoadMasterEquip_b__0(
        MyRoomControl___c__DisplayClass396_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass396_0_o *v4; // x20
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v7; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct EquipEntity_o *v11; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterMaleEquipTexture; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4BD7CC8 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D___);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7CC8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass396_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v7 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
        }
        else
        {
          v9 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v9[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C21DDC(v9 + 4, assetData);
        }
        v10 = v4->fields.__4__this;
        if ( v10 )
        {
          v11 = v4->fields.equipEnt;
          if ( v11 )
          {
            masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.masterMaleEquipTexture;
            v14 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = v14;
            *(_QWORD *)&v16.fields.fakeValue = v13;
            this = (MyRoomControl___c__DisplayClass396_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v16,
                                                               0LL);
            if ( assetData )
            {
              v15 = (int)this;
              this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v15,
                  (Il2CppObject *)this,
                  (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C22094(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39034872(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass396_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass396_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass396_0_o *v4; // x20
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v7; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct EquipEntity_o *v11; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterFemaleEquipTexture; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4BD7CC9 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D___);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7CC9 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass396_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v7 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
        }
        else
        {
          v9 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v9[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C21DDC(v9 + 4, assetData);
        }
        v10 = v4->fields.__4__this;
        if ( v10 )
        {
          v11 = v4->fields.equipEnt;
          if ( v11 )
          {
            masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.masterFemaleEquipTexture;
            v14 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = v14;
            *(_QWORD *)&v16.fields.fakeValue = v13;
            this = (MyRoomControl___c__DisplayClass396_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v16,
                                                               0LL);
            if ( assetData )
            {
              v15 = (int)this;
              this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v15,
                  (Il2CppObject *)this,
                  (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C22094(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39034872(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass402_0___ctor(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__0(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass402_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x21
  void *monitor; // x8
  System_Collections_Generic_List_object__o *v10; // x20
  EventDelegate_Callback_o *v11; // x22
  EventDelegate_o *v12; // x21
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  v2 = this;
  if ( (byte_4BD7CCA & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&Method_MyRoomControl_OnClickPhotoServant__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7CCA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass402_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_17;
  photoLayerChangeObj = (Il2CppObject *)_4__this->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass402_0_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  if ( !this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass402_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object__50551272(
         photoLayerChangeObj,
         transform,
         (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       (UnityEngine_GameObject_o *)v6,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)Component_object;
  this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1C21DDC(&_4__this->fields.photoSvtTouchPress, Component_object);
  v8 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_17;
  monitor = v8[84].monitor;
  if ( !monitor )
    goto LABEL_17;
  v10 = (System_Collections_Generic_List_object__o *)*((_QWORD *)monitor + 4);
  v11 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, v8, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL);
  v12 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
  EventDelegate___ctor_47961380(v12, v11, 0LL);
  if ( !v10
    || (items = v10->fields._items,
        v14 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_17:
    sub_1C22094(this, method);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v12;
    sub_1C21DDC(v16 + 4, v12);
  }
  v2->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__1(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


bool __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__10(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__2(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__3(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__5(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__6(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__7(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__8(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass402_0___LoadPhotoCampaignServant_b__9(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void __fastcall MyRoomControl___c__DisplayClass403_0___ctor(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass403_0___CreatePhotoMasterFigure_b__0(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass403_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  Il2CppObject *Component_object; // x0
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *data; // x20
  EventDelegate_Callback_o *v19; // x22
  EventDelegate_o *v20; // x21
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD7CCB & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&Method_MyRoomControl_OnclickPhotoMaster__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this = (MyRoomControl___c__DisplayClass403_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7CCB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass403_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass403_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_26;
  if ( !this )
    goto LABEL_26;
  v25.fields.z = v4->fields.defaultPhotoServantPos.fields.z + 0.0;
  v25.fields.y = v4->fields.defaultPhotoServantPos.fields.y + 0.0;
  v25.fields.x = v4->fields.defaultPhotoServantPos.fields.x + flt_BFCFA8[!v4->fields._IsMasterRight_k__BackingField];
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass403_0_o *)v5->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34799788(gameObject, 0.9, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass403_0_o *)v7->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v8,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  v7->fields.photoMasterPanel = (struct UIPanel_o *)Component_object;
  this = (MyRoomControl___c__DisplayClass403_0_o *)sub_1C21DDC(&v7->fields.photoMasterPanel, Component_object);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass403_0_o *)v10->fields.photoMasterPanel;
  if ( !this )
    goto LABEL_26;
  UIPanel__set_depth((UIPanel_o *)this, 15, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass403_0_o *)v11->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  photoLayerChangeObj = (Il2CppObject *)v11->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass403_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object__50551272(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  v15 = GameObjectExtensions__SafeGetComponent_object_(
          (UnityEngine_GameObject_o *)v14,
          (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  v11->fields.photoMasterTouchPress = (struct UITouchPress_o *)v15;
  this = (MyRoomControl___c__DisplayClass403_0_o *)sub_1C21DDC(&v11->fields.photoMasterTouchPress, v15);
  v16 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  klass = v16[85].klass;
  if ( !klass )
    goto LABEL_26;
  data = (System_Collections_Generic_List_object__o *)klass->_1.byval_arg.data;
  v19 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v19, v16, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL);
  v20 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
  EventDelegate___ctor_47961380(v20, v19, 0LL);
  if ( !data
    || (items = data->fields._items,
        v22 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++data->fields._version,
        !items) )
  {
LABEL_26:
    sub_1C22094(this, method);
  }
  size = data->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      data,
      (Il2CppObject *)v20,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    data->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v20;
    sub_1C21DDC(v24 + 4, v20);
  }
  ActionExtensions__Call(v2->fields.func, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass407_0___ctor(
        MyRoomControl___c__DisplayClass407_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass407_0___ChangePhotoCampaignServantFace_b__0(
        MyRoomControl___c__DisplayClass407_0_o *this,
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
    sub_1C2209C(_4__this, method);
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
        GameObjectExtensions__SetLocalScale_34799788(v9, scale, 0LL),
        v10 = this->fields.__4__this,
        v12 = *(_QWORD *)&position.fields.x,
        !v10) )
  {
LABEL_11:
    sub_1C22094(_4__this, method);
  }
  p_currentPhotoServantPos = &v10->fields.currentPhotoServantPos;
  p_currentPhotoServantPos->fields.z = position.fields.z;
  *(_QWORD *)&p_currentPhotoServantPos->fields.x = v12;
}


void __fastcall MyRoomControl___c__DisplayClass426_0___ctor(
        MyRoomControl___c__DisplayClass426_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass426_0___ChangeMasterSetting_b__1(
        MyRoomControl___c__DisplayClass426_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass426_0_o *v2; // x21
  Il2CppObject *_4__this; // x23
  UIMasterFigureTextureOld_o *klass; // x19
  int32_t genderType; // w20
  int32_t equipId; // w21
  System_Action_o *v7; // x22

  v2 = this;
  if ( (byte_4BD7CCC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass426_0_o *)sub_1C21E38(&Method_MyRoomControl__ChangeMasterSetting_b__426_2__);
    byte_4BD7CCC = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (UIMasterFigureTextureOld_o *)_4__this[82].klass,
        genderType = v2->fields.genderType,
        equipId = v2->fields.equipId,
        v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v7, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__426_2__, 0LL),
        !klass) )
  {
    sub_1C22094(this, method);
  }
  UIMasterFigureTextureOld__SetCharacter(klass, 2, genderType, equipId, v7, 0, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass427_0___ctor(
        MyRoomControl___c__DisplayClass427_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass427_0___ExchangePosition_b__0(
        MyRoomControl___c__DisplayClass427_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass427_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v5; // x8
  UnityEngine_GameObject_o *v6; // x0
  struct MyRoomControl_o *v7; // x8
  struct UnityEngine_Vector3_o *p_currentPhotoServantPos; // x8
  struct MyRoomControl_o *v9; // x8
  MyRoomControl_o *v10; // x8
  MyRoomControl___c__DisplayClass427_0_o *v11; // x19
  CommonUI_o *v12; // x19
  __int64 v13; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD7CCD & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    this = (MyRoomControl___c__DisplayClass427_0_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7CCD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass427_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, v2->fields.svtMovePos, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass427_0_o *)v5->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_15;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34799788(v6, v2->fields.svtMoveScale, 0LL);
  v7 = v2->fields.__4__this;
  v13 = *(_QWORD *)&v2->fields.svtMovePos.fields.x;
  if ( !v7 )
    goto LABEL_15;
  p_currentPhotoServantPos = &v7->fields.currentPhotoServantPos;
  p_currentPhotoServantPos->fields.z = v2->fields.svtMovePos.fields.z;
  *(_QWORD *)&p_currentPhotoServantPos->fields.x = v13;
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass427_0_o *)v9->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass427_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_15;
  v11 = this;
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v10, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v11, PhotoCampaignMasterPosition, 0LL);
  this = (MyRoomControl___c__DisplayClass427_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v12 )
LABEL_15:
    sub_1C22094(this, method);
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl__initMaterial_d__287___ctor(
        MyRoomControl__initMaterial_d__287_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__initMaterial_d__287__MoveNext(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool v7; // w21
  System_Func_bool__o *v8; // x22
  UnityEngine_WaitUntil_o *v9; // x20
  Il2CppObject **p__2__current; // x19

  if ( (byte_4BD7CD5 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_MyRoomControl__initMaterial_b__287_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7CD5 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1C22094(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v7 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v8 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v8, _4__this, Method_MyRoomControl__initMaterial_b__287_0__, 0LL);
  v9 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC(p__2__current, v9);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__287__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__initMaterial_d__287__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__initMaterial_d__287_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__287__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__initMaterial_d__287__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__343___ctor(
        MyRoomControl__svtVoicePlayAct_d__343_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__svtVoicePlayAct_d__343__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__343_o *this,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__343_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v4; // x22
  struct MyRoomControl_o *v5; // x1
  CommonUI_o *v6; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_T__o *v9; // x21
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v14; // x22
  System_String_o *VoiceAssetName; // x0
  Il2CppObject *v16; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  System_String_o *v21; // x0
  struct MaterialEventLogListViewItem_Info_o *v22; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_41126004; // x0
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  struct MaterialEventLogListViewItem_Info_o *v25; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_41125276; // x0
  struct MyRoomControl___c__DisplayClass343_0_o *_8__1; // x22
  struct MyRoomControl___c__DisplayClass343_0_o *v28; // x8
  struct MyRoomControl___c__DisplayClass343_0_o *v29; // x8
  struct MaterialEventLogListViewItem_Info_o *v30; // x8
  int32_t v31; // w22
  struct MyRoomControl_o *v32; // x8
  struct MyRoomControl_o *v33; // x8
  struct MaterialEventLogListViewItem_Info_o *v34; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  int32_t v37; // w23
  Il2CppObject *v38; // x26
  System_Action_o *v39; // x25
  struct MyRoomControl___c__DisplayClass343_0_o *v40; // x8
  Il2CppObject **v41; // x19
  int v42; // w8
  int32_t v43; // w21
  MyRoomControl__svtVoicePlayAct_d__343_o *v44; // x22
  struct MyRoomControl_o *v45; // x8
  CommonUI_o *v46; // x21
  CommonUI_o *v47; // x21
  struct MyRoomControl___c__DisplayClass343_0_o *v48; // x8
  CommonUI_o *v49; // x20
  __int16 v50; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t formId[2]; // [xsp+28h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BD7CD6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Method_MyRoomControl___c__DisplayClass343_0__svtVoicePlayAct_b__0__);
    this = (MyRoomControl__svtVoicePlayAct_d__343_o *)sub_1C21E38(&MyRoomControl___c__DisplayClass343_0_TypeInfo);
    byte_4BD7CD6 = 1;
  }
  *(_QWORD *)formId = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_1C22084(MyRoomControl___c__DisplayClass343_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass343_0_o *)v4;
      sub_1C21DDC(&v2->fields.__8__1, v4);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_126;
      v5 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v5;
      sub_1C21DDC(&this->fields, v5);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v6 )
        goto LABEL_126;
      CommonUI__maskFadeout(v6, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_1C21DDC(p__2__current, 0LL);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v9 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v9,
        (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v9 )
        goto LABEL_126;
      items = v9->fields._items;
      v11 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_126;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v9,
          81,
          *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v2->fields.item;
      if ( !item )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      v14 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v2->fields._voiceAssetName_5__2 = VoiceAssetName;
      sub_1C21DDC(&v2->fields._voiceAssetName_5__2, VoiceAssetName);
      v16 = (Il2CppObject *)System_Int32__ToString((int)v14 + 20, 0LL);
      v50 = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)j_il2cpp_value_box_0(char_TypeInfo, &v50, v17, v18, v19);
      v20 = v2->fields.item;
      if ( !v20 )
        goto LABEL_126;
      v21 = System_String__Concat_63126488(v16, (Il2CppObject *)this, (Il2CppObject *)v20->fields.voiceId, 0LL);
      v2->fields._playSvtVoiceId_5__3 = v21;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)sub_1C21DDC(&v2->fields._playSvtVoiceId_5__3, v21);
      v22 = v2->fields.item;
      if ( !v22 )
        goto LABEL_126;
      VoiceList_41126004 = ServantVoiceEntity__getVoiceList_41126004(
                             v14,
                             v22->fields.svtVoiceType,
                             v2->fields._playSvtVoiceId_5__3,
                             (System_Collections_Generic_List_CondType_Kind__o *)v9,
                             0,
                             0LL);
      v2->fields._svtVoiceDataList_5__4 = VoiceList_41126004;
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v2->fields._svtVoiceDataList_5__4;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)sub_1C21DDC(
                                                          &v2->fields._svtVoiceDataList_5__4,
                                                          VoiceList_41126004);
      if ( v2->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v25 = v2->fields.item;
      if ( !v25 )
        goto LABEL_126;
      VoiceList_41125276 = ServantVoiceEntity__getVoiceList_41125276(
                             v14,
                             v25->fields.svtVoiceType,
                             3,
                             v25->fields.voiceCondValue,
                             0LL,
                             -1,
                             0LL);
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)VoiceList_41125276;
      sub_1C21DDC(&v2->fields._svtVoiceDataList_5__4, VoiceList_41125276);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      _8__1 = v2->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_126;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)sub_1C21DDC(&_8__1->fields.bondsSvtObj, this);
      v28 = v2->fields.__8__1;
      if ( !v28 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)v28->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v29 = v2->fields.__8__1;
      if ( !v29 )
        goto LABEL_126;
      v29->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      v30 = v2->fields.item;
      if ( !v30 )
        goto LABEL_126;
      v31 = (int)this;
      MyRoomControl__SetImageIdAndFormId(_4__this, formId, &formId[1], v30->fields.svt_id, (int32_t)this, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_127;
      v32 = this->fields.__4__this;
      if ( !v32 )
        goto LABEL_126;
      if ( !HIDWORD(v32->fields.myRoomListCtr) )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_127:
        sub_1C2209C(this, method);
      v33 = this->fields.__4__this;
      if ( !v33 )
        goto LABEL_126;
      formId[1] = (int32_t)v33->fields.myRoomListCtr;
LABEL_59:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v34 = v2->fields.item;
      if ( !v34 )
        goto LABEL_126;
      svt_id = v34->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v37 = formId[1];
      v38 = (Il2CppObject *)v2->fields.__8__1;
      v39 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v39, v38, Method_MyRoomControl___c__DisplayClass343_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_126;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v31, 1, 0, v37, 10, v39, 0, 0LL);
LABEL_63:
      v40 = v2->fields.__8__1;
      if ( !v40 )
        goto LABEL_126;
      if ( !v40->fields.createStandEnd )
      {
        v2->fields.__2__current = 0LL;
        v41 = &v2->fields.__2__current;
        sub_1C21DDC(v41, 0LL);
        v42 = 2;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__voiceLoad(_4__this, v2->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_67:
      if ( _4__this->fields.isVoiceLoading )
      {
        v2->fields.__2__current = 0LL;
        v41 = &v2->fields.__2__current;
        sub_1C21DDC(v41, 0LL);
        v42 = 3;
        goto LABEL_125;
      }
      method = (const MethodInfo *)v2->fields._svtVoiceDataList_5__4;
      if ( !method )
        goto LABEL_126;
      if ( SLODWORD(method->name) >= 2 )
      {
        v43 = 0;
        while ( 1 )
        {
          this = (MyRoomControl__svtVoicePlayAct_d__343_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v43,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_126;
          v44 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_127;
          v45 = this->fields.__4__this;
          if ( !v45 )
            goto LABEL_126;
          this = (MyRoomControl__svtVoicePlayAct_d__343_o *)System_String__op_Equality(
                                                              *(System_String_o **)&v45->fields.m_CachedPtr,
                                                              v2->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          method = (const MethodInfo *)v2->fields._svtVoiceDataList_5__4;
          if ( !method )
            goto LABEL_126;
          if ( ++v43 >= SLODWORD(method->name) )
            goto LABEL_84;
        }
        this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice_32606676(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v44,
          v2->fields._voiceAssetName_5__2,
          0LL);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)method,
          v2->fields._voiceAssetName_5__2,
          0LL);
      }
LABEL_84:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v46 )
        goto LABEL_126;
      CommonUI__maskFadein(v46, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_90:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v41 = &v2->fields.__2__current;
        sub_1C21DDC(v41, 0LL);
        v42 = 4;
        goto LABEL_125;
      }
LABEL_93:
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v2->fields.__2__current = 0LL;
        v41 = &v2->fields.__2__current;
        sub_1C21DDC(v41, 0LL);
        v42 = 5;
        goto LABEL_125;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v47 )
        goto LABEL_126;
      CommonUI__maskFadeout(v47, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_101:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v41 = &v2->fields.__2__current;
        sub_1C21DDC(v41, 0LL);
        v42 = 6;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v2->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v48 = v2->fields.__8__1;
      if ( !v48 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)v48->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v49 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v49 )
        goto LABEL_126;
      CommonUI__maskFadein(v49, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_120:
      this = (MyRoomControl__svtVoicePlayAct_d__343_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_126:
        sub_1C22094(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v2->fields.__2__current = 0LL;
      v41 = &v2->fields.__2__current;
      sub_1C21DDC(v41, 0LL);
      v42 = 7;
LABEL_125:
      *((_DWORD *)v41 - 2) = v42;
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


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__343__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__343_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__svtVoicePlayAct_d__343__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__343_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomControl__svtVoicePlayAct_d__343_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__343__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__343_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__343__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__343_o *this,
        const MethodInfo *method)
{
  ;
}