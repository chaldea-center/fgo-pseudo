void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct MyRoomControl_StaticFields *static_fields; // x8

  if ( (byte_4AB1550 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_3017/*"BGM_MYROOM_1"*/, v2);
    byte_4AB1550 = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_3017/*"BGM_MYROOM_1"*/;
  sub_1BAB3C0(MyRoomControl_TypeInfo->static_fields);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_BC3600;
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

  if ( (byte_4AB154F & 1) == 0 )
  {
    sub_1BAB41C(&int___TypeInfo, method);
    sub_1BAB41C(&long___TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BAB41C(&MyRoomStateMaterial_TypeInfo, v6);
    sub_1BAB41C(&UnityEngine_Vector3___TypeInfo, v7);
    byte_4AB154F = 1;
  }
  v8 = (MyRoomStateMaterial_o *)sub_1BAB668(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v8, 0LL);
  this->fields.mStateMaterial = v8;
  sub_1BAB3C0(&this->fields.mStateMaterial);
  v9 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v9;
  sub_1BAB3C0(&this->fields.imageIdList);
  v10 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v10;
  sub_1BAB3C0(&this->fields.materialImageIdList);
  v11 = sub_1BAB4C4(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v11 )
    sub_1BAB678(0LL, v12);
  v13 = *(_DWORD *)(v11 + 24);
  if ( !v13 || (*(_DWORD *)(v11 + 40) = 0, *(_QWORD *)(v11 + 32) = 0x43900000C4000000LL, v13 == 1) )
    sub_1BAB680(v11, v11);
  *(_DWORD *)(v11 + 52) = 0;
  *(_QWORD *)(v11 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v11;
  sub_1BAB3C0(&this->fields.defaultMultipleServantPoses);
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4AB0691 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  this->fields.multipleServantUsrIds = (struct System_Int64_array *)sub_1BAB4C4(long___TypeInfo, 2LL);
  sub_1BAB3C0(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = (struct System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 2LL);
  sub_1BAB3C0(&this->fields.multipleLimitCounts);
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
    sub_1BAB678(0LL, method);
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

  if ( (byte_4AB14FD & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_LinkageStatusCheckCallback__, method);
    sub_1BAB41C(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1BAB41C(&NetworkManager_TypeInfo, v4);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4AB14FD = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1BAB678(0LL, v8);
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

  if ( (byte_4AB154D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageLimitCountList);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4AB154D = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v15 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  if ( !*imageLimitCountList )
    sub_1BAB678(Master_object, v17);
  v18 = (MyroomServantSpecialImageMaster_o *)Master_object;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    *imageLimitCountList,
    (const MethodInfo_353136C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v36,
            (const MethodInfo_32C0BAC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v15 )
      sub_1BAB678(v19, v20);
    current = v36.fields._current;
    items = v15->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1BAB678(v19, v20);
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v15,
        current,
        *(const MethodInfo_3530898 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
    if ( !v18 )
      sub_1BAB678(v19, v20);
    EntitiesByBaseLimitCount = MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(v18, svtId, current, 0LL);
    v27 = EntitiesByBaseLimitCount;
    if ( !EntitiesByBaseLimitCount )
      sub_1BAB678(0LL, v26);
    max_length = EntitiesByBaseLimitCount->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1BAB680(EntitiesByBaseLimitCount, v26);
        v30 = v27->m_Items[i];
        if ( !v30 )
          sub_1BAB678(EntitiesByBaseLimitCount, v26);
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
          sub_1BAB678(EntitiesByBaseLimitCount, (unsigned int)EntitiesByBaseLimitCount);
        v34 = v15->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            (int32_t)EntitiesByBaseLimitCount,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
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
    (const MethodInfo_32C0BA8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *imageLimitCountList = v15;
  sub_1BAB3C0(imageLimitCountList);
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

  if ( (byte_4AB1500 & 1) == 0 )
  {
    sub_1BAB41C(&AccountLinkageComponent_TypeInfo, method);
    sub_1BAB41C(&System_Action_TypeInfo, v3);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v4);
    sub_1BAB41C(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__317_0__, v5);
    sub_1BAB41C(&Method_System_Nullable_int___ctor__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v8);
    sub_1BAB41C(&StringLiteral_3401/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_4AB1500 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__317_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_366A5D4 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BAB678(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3401/*"CAN_CONTINUE_DEVICE"*/, 0LL);
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

  if ( (byte_4AB150F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v3);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4AB150F = 1;
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
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v13, 0LL);
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
    sub_1BAB678(changeBGBtnImg, v7);
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

  if ( (byte_4AB153D & 1) == 0 )
  {
    sub_1BAB41C(&ManagerConfig_TypeInfo, method);
    byte_4AB153D = 1;
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

  if ( (byte_4AB1538 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__CaptureServant_d__409_TypeInfo, *(_QWORD *)&width);
    byte_4AB1538 = 1;
  }
  v7 = (MyRoomControl__CaptureServant_d__409_o *)sub_1BAB668(MyRoomControl__CaptureServant_d__409_TypeInfo);
  MyRoomControl__CaptureServant_d__409___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_1BAB678(v8, v9);
  v7->fields.__4__this = this;
  sub_1BAB3C0(&v7->fields.__4__this);
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

  if ( (byte_4AB150C & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isSePlay);
    sub_1BAB41C(&Method_MyRoomControl_ChangeDisp__, v6);
    sub_1BAB41C(&Method_MyRoomControl__ChangeDisp_b__339_0__, v7);
    sub_1BAB41C(&Method_MyRoomControl__ChangeDisp_b__339_1__, v8);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_11275/*"ReleaseTouch"*/, v10);
    byte_4AB150C = 1;
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
      v34 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_ChangeDisp__);
    v35 = (System_Reflection_MethodBase_o *)sub_1BAB400(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v12);
    if ( isSePlay )
    {
      v13 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_ChangeDisp__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BAB400(v13, v13[4]);
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
          sub_1BAB678(soundPlayerComp, v17);
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
            MyRoomControl__moveControl(this, this->fields.svtObj, v62, (System_String_o *)StringLiteral_11275/*"ReleaseTouch"*/, v32);
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
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v67, (System_String_o *)StringLiteral_11275/*"ReleaseTouch"*/, v42);
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
            v45 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
            v49 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB1545 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_int__int__TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__ChangeMasterSetting_b__424_0__, v3);
    byte_4AB1545 = 1;
  }
  v4 = (System_Action_int__int__o *)sub_1BAB668(System_Action_int__int__TypeInfo);
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

  if ( (byte_4AB1537 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass405_0__ChangePhotoCampaignServantFace_b__0__, v3);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass405_0_TypeInfo, v4);
    byte_4AB1537 = 1;
  }
  v5 = (MyRoomControl___c__DisplayClass405_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass405_0_TypeInfo);
  MyRoomControl___c__DisplayClass405_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.__4__this = this,
        v6 = sub_1BAB3C0(&v5->fields),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v9 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v9,
        !photoCampaignFaceList) )
  {
    sub_1BAB678(v6, v7);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v9 >= (int)max_length )
  {
    v9 = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  if ( v9 >= max_length )
    sub_1BAB680(v6, v7);
  v5->fields.faceData = photoCampaignFaceList->m_Items[v9];
  sub_1BAB3C0(&v5->fields.faceData);
  faceData = v5->fields.faceData;
  v12 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB1513 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, isSet);
    byte_4AB1513 = 1;
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
    sub_1BAB678(playBtnImg, isSet);
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

  if ( (byte_4AB1512 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, isSet);
    byte_4AB1512 = 1;
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
    sub_1BAB678(standFigureBack, isSet);
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

  if ( (byte_4AB1501 & 1) == 0 )
  {
    sub_1BAB41C(&AccountLinkageComponent_TypeInfo, method);
    sub_1BAB41C(&System_Action_TypeInfo, v3);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v4);
    sub_1BAB41C(&Method_System_Nullable_int___ctor__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BAB41C(&Method_MyRoomControl___c__CheckCsUnlink_b__318_0__, v7);
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_3400/*"CANNOT_CONTINUE_DEVICE"*/, v9);
    sub_1BAB41C(&StringLiteral_2005/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, v10);
    sub_1BAB41C(&StringLiteral_3401/*"CAN_CONTINUE_DEVICE"*/, v11);
    byte_4AB1501 = 1;
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
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__318_0 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(_9__318_0, v24, Method_MyRoomControl___c__CheckCsUnlink_b__318_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__318_0 = _9__318_0;
        sub_1BAB3C0(&static_fields->__9__318_0);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_366A5D4 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v30 = msgFontSize;
        v29 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v20, _9__318_0, v29, v30, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v18 = &StringLiteral_3400/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1BAB678(SelfUserAccountLinkage, v13);
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
  v18 = &StringLiteral_3401/*"CAN_CONTINUE_DEVICE"*/;
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
  if ( (byte_4AB1518 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomRootComponent_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_3551/*"CLICK_MATERIAL"*/, v3);
    this = (MyRoomControl_o *)sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, v4);
    byte_4AB1518 = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = &StringLiteral_6941/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BAB678(this, method);
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
  v9 = &StringLiteral_6941/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = &StringLiteral_3551/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1BAB678(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4AB1525 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__CloseMultipleView_b__384_0__, v3);
    byte_4AB1525 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1BAB678(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB1523 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6705/*"FinishedCloseMultiServant"*/, method);
    byte_4AB1523 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1BAB678(mBlocker, method);
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
      sub_1BAB680(mBlocker, method);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6705/*"FinishedCloseMultiServant"*/ : 0LL;
              v19.fields.y = v15;
              v19.fields.x = flt_BC25E8[(_DWORD)v7 == 4] + y;
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

  if ( (byte_4AB1541 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_0__, v4);
    byte_4AB1541 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB153F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6706/*"FinishedClosePhotoCampaignServant"*/, method);
    byte_4AB153F = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v6 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  v7 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v8 = this->fields.currentPhotoServantPos.fields.x + flt_BC2078[!this->fields._IsMasterRight_k__BackingField];
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v20.fields.x = v8;
  v20.fields.y = v7;
  v20.fields.z = v6;
  MyRoomControl__moveControl(this, gameObject, v20, (System_String_o *)StringLiteral_6706/*"FinishedClosePhotoCampaignServant"*/, v10);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(v11, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_1BAB678(photoCampaignStandFigureBack, v4);
  }
  v15 = v14 + 0.0;
  v16 = v13 + 0.0;
  v17 = v12 + flt_BC1F80[!this->fields._IsMasterRight_k__BackingField];
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

  if ( (byte_4AB14FC & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_TypeInfo, setEndAction);
    byte_4AB14FC = 1;
  }
  v5 = (MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_o *)sub_1BAB668(MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__290___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BAB678(v6, v7);
  v5->fields.__4__this = this;
  sub_1BAB3C0(&v5->fields.__4__this);
  v5->fields.setEndAction = setEndAction;
  sub_1BAB3C0(&v5->fields.setEndAction);
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

  if ( (byte_4AB1515 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1BAB41C(&StringLiteral_3931/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v5);
    byte_4AB1515 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_3931/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1BAB678(0LL, v8);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v7,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
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

  if ( (byte_4AB1533 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, func);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass401_0__CreatePhotoMasterFigure_b__0__, v5);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass401_0_TypeInfo, v6);
    byte_4AB1533 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass401_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass401_0_TypeInfo);
  MyRoomControl___c__DisplayClass401_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  v7->fields.__4__this = this;
  sub_1BAB3C0(&v7->fields);
  v7->fields.func = func;
  sub_1BAB3C0(&v7->fields.func);
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
    sub_1BAB678(photoCampaignStandFigureBack, v9);
  }
  v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v14 = v11;
  v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass401_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  this->fields.photoMasterTexture = MasterFigureManagerOld__CreatePrefab_38304192(
                                      v14,
                                      2,
                                      photoMasterGenderType,
                                      photoMasterEquipId,
                                      1,
                                      v15,
                                      0,
                                      (System_Nullable_Vector3__o)0,
                                      0LL);
  sub_1BAB3C0(&this->fields.photoMasterTexture);
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

  if ( (byte_4AB1524 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDispDefault);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__0__, v9);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass382_0__DispDefaultMyRoom_b__1__, v10);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass382_0_TypeInfo, v11);
    byte_4AB1524 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = (MyRoomControl___c__DisplayClass382_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass382_0_TypeInfo);
  MyRoomControl___c__DisplayClass382_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.callback = callback;
  sub_1BAB3C0(&v12->fields);
  v12->fields.__4__this = this;
  sub_1BAB3C0(&v12->fields.__4__this);
  MyRoomControl__stopSvtVoice(this, v15);
  MyRoomControl__BlockTouch(this, v16);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
    sub_1BAB678(frontObjectManager, v14);
  }
  v19 = this->fields.standFigureBack;
  v20 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB1531 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, usrSvtId);
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    byte_4AB1531 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                             (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( Instance )
      {
        UIPanel__set_depth((UIPanel_o *)Instance, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_1BAB678(Instance, v13);
  }
LABEL_8:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
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

  if ( (byte_4AB14E0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&Method_MyRoomControl___c__EndLoad_b__238_0__, v5);
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_8271/*"LOAD_END"*/, v7);
    byte_4AB14E0 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v14 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v14, v15, Method_MyRoomControl___c__EndLoad_b__238_0__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__238_0 = v14;
      svtCtr = (void *)sub_1BAB3C0(&static_fields->__9__238_0);
    }
    if ( Instance )
    {
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v14, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_1BAB678(svtCtr, method);
  }
LABEL_18:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_20;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8271/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  System_Action_T__o *v6; // x21

  if ( (byte_4AB152F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__EndLoadPhotoAsset_b__397_0__, v3);
    byte_4AB152F = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v6 = (System_Action_T__o *)sub_1BAB668(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo),
        System_Action_Int32Enum____ctor(
          v6,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__397_0__,
          0LL),
        !photoTargetSelectDialog) )
  {
    sub_1BAB678(photoCampaignStandFigureBack, method);
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

  if ( (byte_4AB1519 & 1) == 0 )
  {
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4AB1519 = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1BAB3C0(&this->fields.sceneJumpInfo);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1BAB678(Instance, v5);
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
    sub_1BAB678(0LL, result);
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

  if ( (byte_4AB1546 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass425_0__ExchangePosition_b__0__, v5);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass425_0_TypeInfo, v6);
    byte_4AB1546 = 1;
  }
  v7 = (MyRoomControl___c__DisplayClass425_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass425_0_TypeInfo);
  MyRoomControl___c__DisplayClass425_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  v7->fields.__4__this = this;
  v8 = sub_1BAB3C0(&v7->fields);
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
    sub_1BAB680(v8, v9);
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    &v7->fields.svtMovePos,
    &v7->fields.svtMoveScale,
    v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass425_0__ExchangePosition_b__0__,
    0LL);
  if ( !v21 )
LABEL_16:
    sub_1BAB678(v8, v9);
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
  if ( (byte_4AB1517 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_1BAB41C(&SwipeGesture_TypeInfo, v5);
    byte_4AB1517 = 1;
  }
  if ( !gesture )
    sub_1BAB678(this, gesture);
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

  if ( (byte_4AB153E & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB153E = 1;
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
  UnityEngine_Object__Destroy_69800620(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_11:
    sub_1BAB678(photoCampaignProduction, method);
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
      sub_1BAB680(multipleViewCloseButton, method);
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
    sub_1BAB678(multipleViewCloseButton, method);
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

  if ( (byte_4AB1540 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_4AB1540 = 1;
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
  GameObjectExtensions__SetLocalScale_34021820(v8, 1.0, 0LL);
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
    UnityEngine_Object__Destroy_69800620(v11, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1BAB3C0(&this->fields.photoMasterTexture);
  }
  if ( (photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL
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
    sub_1BAB678(photoCampaignStandFigureBack, method);
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
    sub_1BAB678(0LL, v4);
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
    sub_1BAB678(photoCampaignStandFigureBack, method);
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

  if ( (byte_4AB14EC & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_9271/*"NORMAL_FORM"*/, method);
    sub_1BAB41C(&StringLiteral_3431/*"CHANGE_FORM"*/, v3);
    byte_4AB14EC = 1;
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
      v7 = (System_String_o **)&StringLiteral_9271/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BAB678(svtCtr, method);
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
    v7 = (System_String_o **)&StringLiteral_9271/*"NORMAL_FORM"*/;
  else
    v7 = (System_String_o **)&StringLiteral_3431/*"CHANGE_FORM"*/;
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

  if ( (byte_4AB154E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, *(_QWORD *)&svtId);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v7);
    byte_4AB154E = 1;
  }
  entity = 0LL;
  if ( imageLimitCount >= 201 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1BAB678(v9, v10);
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
  if ( (byte_4AB153C & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BAB41C(&ManagerConfig_TypeInfo, localScale);
    byte_4AB153C = 1;
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
    sub_1BAB678(v7, v8);
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
    sub_1BAB678(v4, method);
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

  if ( (byte_4AB1516 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4AB1516 = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1BAB678(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4AB1535 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_MasterPhotoMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    byte_4AB1535 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_MasterPhotoMaster___);
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
    sub_1BAB678(Master_object, v5);
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

  if ( (byte_4AB1534 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantScriptMaster___, *(_QWORD *)&imageId);
    sub_1BAB41C(&DataManager_TypeInfo, v11);
    sub_1BAB41C(&int___TypeInfo, v12);
    byte_4AB1534 = 1;
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
  photoCampaignStandFigureBack = sub_1BAB4C4(int___TypeInfo, 2LL);
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
    sub_1BAB680(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  if ( y == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = v22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantScriptMaster___);
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
    sub_1BAB678(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
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

  if ( (byte_4AB151A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB151A = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
        sub_1BAB680(Instance, id);
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
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
    sub_1BAB678(Instance, id);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4AB14D9 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BAB41C(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_4AB14D9 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BAB678(this, method);
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
    sub_1BAB678(v6, v7);
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

  if ( (byte_4AB1506 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v4);
    sub_1BAB41C(&Method_MyRoomControl_GoToTitle__, v5);
    sub_1BAB41C(&Method_MyRoomControl__GoToTitle_b__329_0__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&StringLiteral_8820/*"MYROOM_TITLE_CONFIRM"*/, v8);
    sub_1BAB41C(&StringLiteral_1/*""*/, v9);
    byte_4AB1506 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v10 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_GoToTitle__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BAB400(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8820/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__329_0__, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1BAB678(v17, v16);
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
    sub_1BAB678(continueDeviceComp, method);
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

  if ( (byte_4AB1547 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1547 = 1;
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
    sub_1BAB678(gameObject, v4);
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

  if ( (byte_4AB14F9 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__InitMaterialOnBackground_d__284_TypeInfo, method);
    byte_4AB14F9 = 1;
  }
  v3 = (MyRoomControl__InitMaterialOnBackground_d__284_o *)sub_1BAB668(MyRoomControl__InitMaterialOnBackground_d__284_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__284___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  v3->fields.__4__this = this;
  sub_1BAB3C0(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__InitServantMenu_d__287_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4AB14FB & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__InitServantMenu_d__287_TypeInfo, method);
    byte_4AB14FB = 1;
  }
  v3 = (MyRoomControl__InitServantMenu_d__287_o *)sub_1BAB668(MyRoomControl__InitServantMenu_d__287_TypeInfo);
  MyRoomControl__InitServantMenu_d__287___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  v3->fields.__4__this = this;
  sub_1BAB3C0(&v3->fields.__4__this);
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

  if ( (byte_4AB1527 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, method);
    byte_4AB1527 = 1;
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

  if ( (byte_4AB1542 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, method);
    byte_4AB1542 = 1;
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
  if ( (byte_4AB1520 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_4AB1520 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1BAB680(this, *(_QWORD *)&index);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1BAB678(this, *(_QWORD *)&index);
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

  if ( (byte_4AB14E8 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_15597/*"Wait_Action"*/, method);
    sub_1BAB41C(&StringLiteral_7215/*"Help"*/, v3);
    byte_4AB14E8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15597/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7215/*"Help"*/, 0LL) )
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
    sub_1BAB678(myRoomFsm, method);
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

  if ( (byte_4AB14FE & 1) == 0 )
  {
    sub_1BAB41C(&AccountLinkageParams_TypeInfo, result);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v5);
    byte_4AB14FE = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22261/*"ok"*/, 0LL) )
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
  const MethodInfo_31B6E34 **v35; // x20
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

  if ( (byte_4AB152D & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EquipMaster___, v2);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserEquipMaster___, v3);
    sub_1BAB41C(&DataManager_TypeInfo, v4);
    sub_1BAB41C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v6);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BAB41C(&NetworkManager_TypeInfo, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__0__, v11);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__1__, v12);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass394_0_TypeInfo, v13);
    sub_1BAB41C(&StringLiteral_8904/*"MasterFace/equip{0:D5}"*/, v14);
    byte_4AB152D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BFD2F8(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BFD2F8(v19);
  UserId = **(_QWORD **)(v21 + 184);
  if ( !UserId )
    goto LABEL_33;
  UserId = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_33;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v23 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v24 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserId;
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1BAB680(UserId, v17);
      v27 = List->m_Items[v26];
      v28 = sub_1BAB668(MyRoomControl___c__DisplayClass394_0_TypeInfo);
      MyRoomControl___c__DisplayClass394_0___ctor((MyRoomControl___c__DisplayClass394_0_o *)v28, 0LL);
      if ( !v28 )
        break;
      *(_QWORD *)(v28 + 24) = this;
      UserId = sub_1BAB3C0(v28 + 24);
      if ( !v27 )
        break;
      v30 = *(_QWORD *)&v27->fields.equipId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v27->fields.equipId.fields.fakeValue;
      if ( !(*v23)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v23);
      *(_QWORD *)&v57.fields.currentCryptoKey = v30;
      *(_QWORD *)&v57.fields.fakeValue = v29;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v57, 0LL);
      if ( !v25 )
        break;
      v31 = v28 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v25,
              (Il2CppObject **)(v28 + 16),
              UserId,
              (const MethodInfo_3163DE4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v32 = v23;
      v33 = *v23;
      v34 = List;
      v35 = (const MethodInfo_31B6E34 **)v24;
      v37 = *(_QWORD *)&v27->fields.equipId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v27->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v33->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v33);
      *(_QWORD *)&v58.fields.currentCryptoKey = v37;
      *(_QWORD *)&v58.fields.fakeValue = v36;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v58, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v24 = (__int64 *)v35;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        UserId,
        0LL,
        *v35);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v27->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        UserId,
        0LL,
        *v35);
      if ( !*(_QWORD *)v31 )
        break;
      v43 = *v32;
      List = v34;
      v23 = v32;
      v56 = *(_OWORD *)(*(_QWORD *)v31 + 64LL);
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(v43, &v56, v40, v41, v42);
      v45 = System_String__Format((System_String_o *)StringLiteral_8904/*"MasterFace/equip{0:D5}"*/, v44, 0LL);
      v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v46,
        (Il2CppObject *)v28,
        Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UserId = AssetManager__loadAssetStorage(v45, v46, 10, 0LL);
      if ( !*(_QWORD *)v31 )
        break;
      v50 = *v32;
      v55 = *(_OWORD *)(*(_QWORD *)v31 + 80LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(v50, &v55, v47, v48, v49);
      v52 = System_String__Format((System_String_o *)StringLiteral_8904/*"MasterFace/equip{0:D5}"*/, v51, 0LL);
      v53 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v53,
        (Il2CppObject *)v28,
        Method_MyRoomControl___c__DisplayClass394_0__LoadMasterEquip_b__1__,
        0LL);
      UserId = AssetManager__loadAssetStorage(v52, v53, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
LABEL_33:
    sub_1BAB678(UserId, v17);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadMultipleServant_d__378_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4AB1522 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__LoadMultipleServant_d__378_TypeInfo, method);
    byte_4AB1522 = 1;
  }
  v3 = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB668(MyRoomControl__LoadMultipleServant_d__378_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__378___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  v3->fields.__4__this = this;
  sub_1BAB3C0(&v3->fields.__4__this);
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

  if ( (byte_4AB152C & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, callBack);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass393_0__LoadPhotoCampaignAssets_b__0__, v7);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass393_0_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_9203/*"MyRoom/PhotoCampaign"*/, v9);
    byte_4AB152C = 1;
  }
  v10 = (MyRoomControl___c__DisplayClass393_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass393_0_TypeInfo);
  MyRoomControl___c__DisplayClass393_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  v10->fields.__4__this = this;
  sub_1BAB3C0(&v10->fields);
  v10->fields.callBack = callBack;
  sub_1BAB3C0(&v10->fields.callBack);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass393_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9203/*"MyRoom/PhotoCampaign"*/, v13, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BAB678(Instance, v12);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4AB1532 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__LoadPhotoCampaignServant_d__400_TypeInfo, method);
    byte_4AB1532 = 1;
  }
  v3 = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB668(MyRoomControl__LoadPhotoCampaignServant_d__400_TypeInfo);
  MyRoomControl__LoadPhotoCampaignServant_d__400___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  v3->fields.__4__this = this;
  sub_1BAB3C0(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB14D4 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, method);
    byte_4AB14D4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6941/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4AB14F0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__LoadServantForm_b__265_0__, v3);
    byte_4AB14F0 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__265_0__, 0LL);
  if ( !svtCtr )
    sub_1BAB678(v6, v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v5, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v5; // x1
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AB14F1 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_8271/*"LOAD_END"*/, v3);
    byte_4AB14F1 = 1;
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
    sub_1BAB678(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8271/*"LOAD_END"*/, 0LL);
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
  if ( (byte_4AB150E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_9209/*"MyRoomUIAnimationEnd"*/, target);
    byte_4AB150E = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9209/*"MyRoomUIAnimationEnd"*/, v4);
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
  if ( (byte_4AB150B & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickBack__, method);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v3);
    sub_1BAB41C(&NetworkManager_TypeInfo, v4);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_3579/*"CLOSE_ACCOUNT_LINKAGE"*/, v6);
    sub_1BAB41C(&StringLiteral_3591/*"CLOSE_MATERIAL_COLLECTION"*/, v7);
    sub_1BAB41C(&StringLiteral_3590/*"CLOSE_MATERIAL"*/, v8);
    sub_1BAB41C(&StringLiteral_3602/*"CLOSE_USER_SERVANT_COIN"*/, v9);
    sub_1BAB41C(&StringLiteral_3526/*"CLICK_BACK"*/, v10);
    sub_1BAB41C(&StringLiteral_3594/*"CLOSE_NOTICE"*/, v11);
    sub_1BAB41C(&StringLiteral_3588/*"CLOSE_GAMEOPTION"*/, v12);
    sub_1BAB41C(&StringLiteral_3589/*"CLOSE_ITEMLIST"*/, v13);
    sub_1BAB41C(&StringLiteral_3592/*"CLOSE_MATERIAL_COSTUME"*/, v14);
    sub_1BAB41C(&StringLiteral_3585/*"CLOSE_CONTINUE_DEVICE"*/, v15);
    sub_1BAB41C(&StringLiteral_3580/*"CLOSE_BLACKLIST"*/, v16);
    sub_1BAB41C(&StringLiteral_13004/*"State 5"*/, v17);
    sub_1BAB41C(&StringLiteral_3597/*"CLOSE_SERIAL_CODE"*/, v18);
    sub_1BAB41C(&StringLiteral_3582/*"CLOSE_CHANGE_PROFILE"*/, v19);
    sub_1BAB41C(&StringLiteral_3598/*"CLOSE_SOUND_PLAYER"*/, v20);
    this = (MyRoomControl_o *)sub_1BAB41C(&StringLiteral_3587/*"CLOSE_FAVORITE_CHANGE"*/, v21);
    byte_4AB150B = 1;
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
            v33 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickBack__);
          v34 = (System_Reflection_MethodBase_o *)sub_1BAB400(v33, v33[4]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v35);
        }
        else if ( multipleViewState == 1 )
        {
          v25 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v25 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickBack__);
          v26 = (System_Reflection_MethodBase_o *)sub_1BAB400(v25, v25[4]);
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
          v28 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickBack__);
        v29 = (System_Reflection_MethodBase_o *)sub_1BAB400(v28, v28[4]);
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
      method = (const MethodInfo *)StringLiteral_3526/*"CLICK_BACK"*/;
      v38 = type - 1;
      v39 = 0;
      switch ( v38 )
      {
        case 0:
          v40 = &StringLiteral_3590/*"CLOSE_MATERIAL"*/;
          goto LABEL_48;
        case 1:
          v41 = &StringLiteral_3591/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_57;
        case 2:
          v41 = &StringLiteral_3589/*"CLOSE_ITEMLIST"*/;
          goto LABEL_57;
        case 3:
          v41 = &StringLiteral_3582/*"CLOSE_CHANGE_PROFILE"*/;
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
              method = (const MethodInfo *)StringLiteral_3580/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v41 = &StringLiteral_3588/*"CLOSE_GAMEOPTION"*/;
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
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13004/*"State 5"*/, 0LL) )
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
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v49, 0LL) < 1
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
          v40 = &StringLiteral_3594/*"CLOSE_NOTICE"*/;
LABEL_48:
          method = (const MethodInfo *)*v40;
          v39 = 1;
          goto LABEL_58;
        case 6:
          v41 = &StringLiteral_3597/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_57;
        case 7:
          v41 = &StringLiteral_3585/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_57;
        case 8:
          v41 = &StringLiteral_3587/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_57;
        case 9:
          v41 = &StringLiteral_3598/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_57;
        case 10:
          v41 = &StringLiteral_3592/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_57;
        case 16:
          v41 = &StringLiteral_3602/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_57;
        case 17:
          v41 = &StringLiteral_3579/*"CLOSE_ACCOUNT_LINKAGE"*/;
          goto LABEL_57;
        default:
          goto LABEL_58;
      }
LABEL_75:
      sub_1BAB678(this, method);
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

  if ( (byte_4AB14E7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1BAB41C(&Method_MyRoomControl_OnClickChangeLimit__, v7);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BAB41C(&StringLiteral_15597/*"Wait_Action"*/, v11);
    sub_1BAB41C(&StringLiteral_3435/*"CHANGE_LIMIT"*/, v12);
    sub_1BAB41C(&StringLiteral_7215/*"Help"*/, v13);
    byte_4AB14E7 = 1;
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
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15597/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v17 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_7215/*"Help"*/, 0LL) )
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v35, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v28 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickChangeLimit__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BAB400(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v34, 0LL);
  if ( !v20 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)myRoomFsm,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v32 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickChangeLimit__);
      v33 = (System_Reflection_MethodBase_o *)sub_1BAB400(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3435/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1BAB678(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AB151D & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickCloseMultipleView__, method);
    byte_4AB151D = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
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

  if ( (byte_4AB1548 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickDispPhotoUi__, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB1548 = 1;
  }
  v4 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickDispPhotoUi__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
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
    sub_1BAB678(gameObject, v7);
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

  if ( (byte_4AB152B & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_4AB152B = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
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
    sub_1BAB678(materialCollectionServantListViewManager, v5);
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

  if ( (byte_4AB151E & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickLeftServant__, method);
    byte_4AB151E = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
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

  if ( (byte_4AB153B & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_1BAB41C(&StringLiteral_6704/*"FinishedCloseFullScreenPhotoCampaign"*/, v3);
    byte_4AB153B = 1;
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
        v31 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v32 = (System_Reflection_MethodBase_o *)sub_1BAB400(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v33 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v34 = (System_Reflection_MethodBase_o *)sub_1BAB400(v33, v33[4]);
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
      sub_1BAB3C0(&v50->fields.eventReceiver);
      v50->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6704/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1BAB3C0(&v50->fields.callWhenFinished);
      return;
    case 4:
      v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
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
            if ( !byte_4AB0691 )
            {
              sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v21);
              byte_4AB0691 = 1;
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
                  if ( !byte_4AB0691 )
                  {
                    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v29);
                    byte_4AB0691 = 1;
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
      sub_1BAB678(maskBoxCollider, method);
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

  if ( (byte_4AB1539 & 1) == 0 )
  {
    sub_1BAB41C(&TouchEffectManager_TypeInfo, method);
    byte_4AB1539 = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1BAB678(backBtn, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
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

  if ( (byte_4AB1549 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1BAB41C(&Method_MyRoomControl_OnClickPhotoServant__, v3);
    byte_4AB1549 = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
            v7 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickPhotoServant__);
          v8 = (System_Reflection_MethodBase_o *)sub_1BAB400(v7, v7[4]);
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
    sub_1BAB678(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4AB151F & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickRightServant__, method);
    byte_4AB151F = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
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

  if ( (byte_4AB151B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&int___TypeInfo, v3);
    sub_1BAB41C(&long___TypeInfo, v4);
    sub_1BAB41C(&Method_MyRoomControl_OnClickSelectMultipleServant__, v5);
    sub_1BAB41C(&Method_MyRoomControl__OnClickSelectMultipleServant_b__370_0__, v6);
    sub_1BAB41C(&StringLiteral_15597/*"Wait_Action"*/, v7);
    sub_1BAB41C(&StringLiteral_7215/*"Help"*/, v8);
    byte_4AB151B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15597/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v11 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7215/*"Help"*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v13 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v14 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BAB400(v13, v13[4]);
  if ( !v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1BAB678(myRoomFsm, method);
  v17 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v17 >= max_length )
      break;
    if ( (unsigned int)v17 >= max_length )
      sub_1BAB680(myRoomFsm, method);
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
  this->fields.multipleServantUsrIds = (struct System_Int64_array *)sub_1BAB4C4(long___TypeInfo, 2LL);
  sub_1BAB3C0(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = (struct System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 2LL);
  sub_1BAB3C0(&this->fields.multipleLimitCounts);
  v19 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB152E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl_EndLoadPhotoAsset__, v3);
    sub_1BAB41C(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v4);
    sub_1BAB41C(&StringLiteral_15597/*"Wait_Action"*/, v5);
    sub_1BAB41C(&StringLiteral_7215/*"Help"*/, v6);
    byte_4AB152E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15597/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_7215/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1BAB678(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v11 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v12 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BAB400(v11, v11[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    v14 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB152A & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomRootComponent_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4AB152A = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1BAB678(Instance, v5);
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

  if ( (byte_4AB14EB & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickSvt__, method);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_10403/*"PLAY_VOICE"*/, v5);
    byte_4AB14EB = 1;
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
      v8 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickSvt__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BAB400(v8, v8[4]);
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
        MyRoomControl__setNormalFace_31618572(this, 1, v11);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10403/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_1BAB678(svtCtr, v7);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AB151C & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickUiDisableMultipleView__, method);
    byte_4AB151C = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
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

  if ( (byte_4AB1529 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_1BAB41C(&MyRoomParamsManager_TypeInfo, v3);
    sub_1BAB41C(&MyRoomRootComponent_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4AB1529 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    v12 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnClickValentineListChange__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BAB400(v12, v12[4]);
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
    sub_1BAB678(Instance, v7);
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

  if ( (byte_4AB14D7 & 1) == 0 )
  {
    sub_1BAB41C(&Gesture_EventHandler_TypeInfo, method);
    sub_1BAB41C(&FingerGestures_TypeInfo, v3);
    sub_1BAB41C(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4AB14D7 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1BAB668(Gesture_EventHandler_TypeInfo);
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

  if ( (byte_4AB154A & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1BAB41C(&Method_MyRoomControl_OnclickPhotoMaster__, v3);
    byte_4AB154A = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
            v7 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_OnclickPhotoMaster__);
          v8 = (System_Reflection_MethodBase_o *)sub_1BAB400(v7, v7[4]);
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
    sub_1BAB678(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1BAB678(0LL, method);
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

  if ( (byte_4AB1530 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_bool__TypeInfo, callBack);
    sub_1BAB41C(&Method_MyRoomControl_SetMaskCollider__, v7);
    byte_4AB1530 = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v11 = (System_Action_bool__o *)sub_1BAB668(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1BAB678(v12, v13);
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
  sub_1BAB3C0(&this->fields.multipleServantUsrIds);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1BAB3C0(&this->fields.multipleLimitCounts);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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

  if ( (byte_4AB1526 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_bool__TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&Method_MyRoomControl_SetMaskCollider__, v11);
    byte_4AB1526 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v13 = (System_Action_bool__o *)sub_1BAB668(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1BAB678(v14, v15);
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

  if ( (byte_4AB14FF & 1) == 0 )
  {
    sub_1BAB41C(&AccountLinkageComponent_TypeInfo, method);
    sub_1BAB41C(&System_Action_TypeInfo, v3);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v4);
    sub_1BAB41C(&Method_MyRoomControl__OverrideAccountLinkage_b__316_0__, v5);
    sub_1BAB41C(&Method_System_Nullable_int___ctor__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&StringLiteral_2007/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v8);
    sub_1BAB41C(&StringLiteral_3401/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_4AB14FF = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__316_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_366A5D4 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BAB678(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3401/*"CAN_CONTINUE_DEVICE"*/, 0LL);
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

  if ( (byte_4AB1514 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, fileName);
    sub_1BAB41C(&BgmManager_TypeInfo, v8);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass357_0__PlayOpening_b__0__, v9);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass357_0_TypeInfo, v10);
    byte_4AB1514 = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass357_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass357_0_TypeInfo);
  MyRoomControl___c__DisplayClass357_0___ctor(v11, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.player = CriMoviePlayerObject;
  p_player = &v11->fields.player;
  sub_1BAB3C0(&v11->fields);
  player = v11->fields.player;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4AB1563 )
  {
    sub_1BAB41C(&BgmManager_TypeInfo, v17);
    byte_4AB1563 = 1;
  }
  v19 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v19 = BgmManager_TypeInfo;
  }
  masterVolume = v19->static_fields->masterVolume;
  v21 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass357_0__PlayOpening_b__0__, 0LL);
  if ( !player
    || (CRIMoviePlayer__Initialize(player, fileName, assetPath, masterVolume, isCanSkip, 0LL, v21, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *p_player) == 0LL) )
  {
LABEL_13:
    sub_1BAB678(CriMoviePlayerObject, v15);
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

  if ( (byte_4AB154B & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData__ToArray__, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    byte_4AB154B = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1BAB3C0(&this->fields.photoCampaignShutterEffect);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1BAB3C0(&this->fields.photoCampaignCameraEffect);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1BAB3C0(&this->fields.photoLayerChangeObj);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38176016(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1BAB3C0(&this->fields.photoCampaignAssetData);
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
    UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1BAB3C0(&this->fields.photoTargetSelectDialog);
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
    UnityEngine_Object__Destroy_69800620(v11, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1BAB3C0(&this->fields.photoSettingButtonComponent);
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
    UnityEngine_Object__Destroy_69800620(v13, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1BAB3C0(&this->fields.masterEquipSettingDialog);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v15 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38176224((AssetData_array *)v15, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1BAB3C0(&this->fields.masterEquipAssetData);
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
      sub_1BAB3C0(p_photoMasterTexture);
      return;
    }
LABEL_38:
    sub_1BAB678(v8, v7);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  struct System_String_o **p_asstName; // x20

  if ( (byte_4AB14D5 & 1) == 0 )
  {
    sub_1BAB41C(&SoundManager_TypeInfo, method);
    byte_4AB14D5 = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = &this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    *p_asstName = 0LL;
    sub_1BAB3C0(p_asstName);
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

  if ( (byte_4AB1510 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v3);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_13004/*"State 5"*/, v5);
    byte_4AB1510 = 1;
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
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v27, 0LL);
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
  v23 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13004/*"State 5"*/, 0LL);
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
    sub_1BAB678(playBtnImg, v16);
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
    sub_1BAB678(0LL, v3);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 89, 0, 0LL);
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
    sub_1BAB678(0LL, v5);
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
  if ( (byte_4AB14E5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_1BAB41C(&MyRoomControl_TypeInfo, v3);
    byte_4AB14E5 = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1BAB678(this, method);
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
      sub_1BAB680(this, isEnable);
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
    sub_1BAB678(this, isEnable);
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
  if ( (byte_4AB1536 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, faceData);
    this = (MyRoomControl_o *)sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    byte_4AB1536 = 1;
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
          sub_1BAB680(this, faceData);
        v14 = multiFace->m_Items[v11 + 1];
        v15 = multiForm->m_Items[v11 + 1];
        this = (MyRoomControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    v11,
                                    (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (MyRoomControl_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v11 )
          v16 = 0LL;
        else
          v16 = callbackFunc;
        UIStandFigureR__SetFace_41430376((UIStandFigureR_o *)this, v14, v15, v16, 0.0, 0LL);
        if ( size == ++v11 )
          return;
      }
    }
LABEL_19:
    sub_1BAB678(this, faceData);
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

  if ( (byte_4AB1503 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__0__, v9);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__1__, v10);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__2__, v11);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass322_0_TypeInfo, v12);
    byte_4AB1503 = 1;
  }
  v13 = (MyRoomControl___c__DisplayClass322_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass322_0_TypeInfo);
  MyRoomControl___c__DisplayClass322_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  v13->fields.__4__this = this;
  sub_1BAB3C0(&v13->fields);
  v13->fields.callback = callback;
  sub_1BAB3C0(&v13->fields.callback);
  MyRoomControl__setupSvtImageIdList(this, v16);
  v13->fields.svtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v17);
  p_svtVoiceEnt = &v13->fields.svtVoiceEnt;
  sub_1BAB3C0(&v13->fields.svtVoiceEnt);
  if ( v13->fields.svtVoiceEnt )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                 (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        this->fields.voiceList = MyRoomControl__GetVoiceList(this, v21, figureSvtId, Item, v23);
        sub_1BAB3C0(&this->fields.voiceList);
        Instance = (CommonUI_o *)*p_svtVoiceEnt;
        if ( *p_svtVoiceEnt )
        {
          this->fields.asstName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
          sub_1BAB3C0(&this->fields.asstName);
          asstName = this->fields.asstName;
          v25 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v13,
            Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__0__,
            0LL);
          MyRoomControl__voiceLoad(this, asstName, v25, v26);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    sub_1BAB678(Instance, v15);
  }
  this->fields.isExistVoiceData = 0;
LABEL_10:
  v27 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__1__,
    0LL);
  v13->fields.action = v27;
  sub_1BAB3C0(&v13->fields.action);
  if ( IsActSetMyRoomStandFigre )
  {
    v28 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass322_0__SetFavoriteSvt_b__2__,
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

  if ( (byte_4AB154C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageId);
    sub_1BAB41C(&DataManager_TypeInfo, v10);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v11);
    sub_1BAB41C(&UIStandFigureRender_TypeInfo, v12);
    byte_4AB154C = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1BAB678(Master_object, v16);
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
  if ( (byte_4AB1521 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_4AB1521 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1BAB678(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BAB680(this, *(_QWORD *)&frontIndex);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BAB678(0LL, flag);
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
  MyRoomControl___c__DisplayClass242_0_o *v11; // x21
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v16; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  MyRoomControl_o *v19; // x0
  int32_t v20; // w22
  const MethodInfo *v21; // x5
  StandFigureBack_o *standFigureBack; // x23
  int32_t v23; // w20
  System_Action_o *v24; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AB14E4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__0__, v9);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass242_0_TypeInfo, v10);
    byte_4AB14E4 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v11 = (MyRoomControl___c__DisplayClass242_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass242_0_TypeInfo);
  MyRoomControl___c__DisplayClass242_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_1BAB3C0(&v11->fields);
  v11->fields.end_act = end_act;
  sub_1BAB3C0(&v11->fields.end_act);
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
    goto LABEL_13;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                    Item,
                                                                    0LL);
  if ( !mStateMaterial )
    goto LABEL_13;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, (int32_t)materialImageIdList, 0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !materialImageIdList
    || (v19 = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                   materialImageIdList,
                                   this->fields.materialFigureSvtDispIdx,
                                   (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__),
        v20 = (int)v19,
        MyRoomControl__SetImageIdAndFormId(v19, formId, &formId[1], servantId, (int32_t)v19, v21),
        standFigureBack = this->fields.standFigureBack,
        v23 = formId[1],
        v24 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v11,
          Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__0__,
          0LL),
        !standFigureBack) )
  {
LABEL_13:
    sub_1BAB678(materialImageIdList, v13);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v20, 1, 0, v23, 10, v24, 0, 0LL);
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
    sub_1BAB678(multipleViewButtonSprite, v3);
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
  MyRoomControl___c__DisplayClass240_0_o *v9; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  bool _38072332; // w8
  MyRoomControl_o *Item; // x0
  int32_t v15; // w21
  const MethodInfo *v16; // x5
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w23
  int32_t v19; // w19
  System_Action_o *v20; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AB14E2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, end_act);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BAB41C(&TutorialFlag_TypeInfo, v6);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__0__, v7);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass240_0_TypeInfo, v8);
    byte_4AB14E2 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v9 = (MyRoomControl___c__DisplayClass240_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass240_0_TypeInfo);
  MyRoomControl___c__DisplayClass240_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  v9->fields.__4__this = this;
  sub_1BAB3C0(&v9->fields);
  v9->fields.end_act = end_act;
  sub_1BAB3C0(&v9->fields.end_act);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, v9->fields.end_act, v12);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38072332 = TutorialFlag__Get_38072332(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _38072332;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_11;
  Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                              imageIdList,
                              this->fields.figureSvtDispIdx,
                              (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
  v15 = (int)Item;
  MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], this->fields.figureSvtId, (int32_t)Item, v16);
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v19 = formId[1];
  v20 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_11:
    sub_1BAB678(imageIdList, v11);
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
  MyRoomControl___c__DisplayClass241_0_o *v9; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v11; // x1
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4AB14E3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, end_act);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BAB41C(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass241_0__SetMySvtFigure_b__0__, v7);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass241_0_TypeInfo, v8);
    byte_4AB14E3 = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass241_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.__4__this = this,
        sub_1BAB3C0(&v9->fields),
        v9->fields.end_act = end_act,
        sub_1BAB3C0(&v9->fields.end_act),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1BAB678(materialImageIdList, v11);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v14);
  v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
    sub_1BAB678(photoCampaignButtonSprite, v3);
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
    sub_1BAB678(photoCampaignAtlas, sprite);
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

  if ( (byte_4AB1544 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, isActive);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB1544 = 1;
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
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49579268(
                                                                                               photoCampaignCameraEffect,
                                                                                               transform,
                                                                                               (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
      sub_1BAB3C0(&this->fields.photoCampaignInstantiateCameraEffect);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1BAB678(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69800620(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1BAB3C0(&this->fields.photoCampaignInstantiateCameraEffect);
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

  if ( (byte_4AB14ED & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB14ED = 1;
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
    if ( !byte_4AB0696 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4AB0696 = 1;
    }
    if ( !v9
      || (UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v10 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v10)
      || (v11 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v10, 0.0, 0LL), !v11) )
    {
LABEL_21:
      sub_1BAB678(voicePlayEffect, v7);
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
    UITweener__Play_47211688(v10, 1, 0LL);
    UITweener__Play_47211688(v11, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_1BAB678(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_69760360(
                                              0,
                                              photoCampaignFaceList->max_length,
                                              0LL);
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  this->fields.sceneJumpInfo = info;
  sub_1BAB3C0(&this->fields.sceneJumpInfo);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BAB678(0LL, v3);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BAB678(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4AB14DA & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_4AB14DA = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BAB678(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30F0C48 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4AB14CE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AB14CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, 0LL),
        !this->fields.frontObjectManager) )
  {
    sub_1BAB678(Instance, v5);
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
  if ( (byte_4AB14D0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1BAB41C(&MaterialServantLimitCountManager_TypeInfo, v14);
    this = (MyRoomControl_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4AB14D0 = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  v4->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_43;
  v17 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v17;
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
      this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                  (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
    sub_1BAB678(this, *(_QWORD *)&servantId);
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
        sub_1BAB680(this, *(_QWORD *)&servantId);
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
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                                (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1BAB678(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4AB14D6 & 1) == 0 )
  {
    sub_1BAB41C(&Gesture_EventHandler_TypeInfo, method);
    sub_1BAB41C(&FingerGestures_TypeInfo, v3);
    sub_1BAB41C(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4AB14D6 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1BAB668(Gesture_EventHandler_TypeInfo);
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

  if ( (byte_4AB153A & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__StartCameraEffect_d__411_TypeInfo, method);
    byte_4AB153A = 1;
  }
  v3 = (MyRoomControl__StartCameraEffect_d__411_o *)sub_1BAB668(MyRoomControl__StartCameraEffect_d__411_TypeInfo);
  MyRoomControl__StartCameraEffect_d__411___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  v3->fields.__4__this = this;
  sub_1BAB3C0(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4AB14D8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_MyRoomControl__update__, method);
    byte_4AB14D8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30F0C24 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_4AB1528 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    byte_4AB1528 = 1;
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
      sub_1BAB678(RestTime6, v9);
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

  if ( (byte_4AB1543 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    byte_4AB1543 = 1;
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
      sub_1BAB678(RestTime6, v9);
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
    sub_1BAB678(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__317_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AB1556 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB1556 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1BAB678(Instance, v4);
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

  if ( (byte_4AB155C & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass424_0__ChangeMasterSetting_b__1__, v9);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass424_0_TypeInfo, v10);
    byte_4AB155C = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass424_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass424_0_TypeInfo);
  MyRoomControl___c__DisplayClass424_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  v11->fields.__4__this = this;
  sub_1BAB3C0(&v11->fields.__4__this);
  v11->fields.genderType = genderType;
  v11->fields.equipId = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass424_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1BAB678(v12, v13);
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

  if ( (byte_4AB155D & 1) == 0 )
  {
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4AB155D = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v6);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)photoMasterTexture;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1BAB678(photoMasterTexture, method);
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

  if ( (byte_4AB1559 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__CloseMultipleView_b__384_1__, v3);
    byte_4AB1559 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__384_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1BAB678(v6, v7);
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
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 40, 0, 0LL);
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
      sub_1BAB680(titleInfo, method);
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
    sub_1BAB678(titleInfo, method);
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

  if ( (byte_4AB155B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_1__, v3);
    byte_4AB155B = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__418_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_1BAB678(v6, v7);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 40, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_1BAB678(titleInfo, method);
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
    sub_1BAB678(this, method);
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

  if ( (byte_4AB155A & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&photoType);
    sub_1BAB41C(&Method_MyRoomControl__EndLoadPhotoAsset_b__397_1__, v5);
    byte_4AB155A = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v6 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__397_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v6, 1, v7);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__397_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_1BAB678(this, method);
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

  if ( (byte_4AB1558 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BAB41C(&Method_MyRoomControl___c__GoToTitle_b__329_1__, v6);
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v7);
    byte_4AB1558 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v10, v11);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v15, v16, Method_MyRoomControl___c__GoToTitle_b__329_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__329_1 = v15;
      Instance = (void *)sub_1BAB3C0(&static_fields->__9__329_1);
    }
    if ( v12 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v12, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_16:
    sub_1BAB678(Instance, v9);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__287_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BAB678(this, method);
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

  if ( (byte_4AB1554 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__LoadServantForm_b__265_1__, v4);
    sub_1BAB41C(&StringLiteral_8457/*"LoadServantFormEnd"*/, v5);
    byte_4AB1554 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__265_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1BAB678(SvtStandFigure, method);
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
  MyRoomControl__moveControl(this, this->fields.svtObj, v15, (System_String_o *)StringLiteral_8457/*"LoadServantFormEnd"*/, v14);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__370_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1BAB678(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__316_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AB1555 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB1555 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1BAB678(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__321_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB1557 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_3593/*"CLOSE_MENU"*/, method);
    byte_4AB1557 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3593/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__248_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB1553 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7155/*"HIDE_END"*/, method);
    byte_4AB1553 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7155/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__285_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BAB678(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__239_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v5; // x8

  if ( (byte_4AB1552 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_8271/*"LOAD_END"*/, method);
    sub_1BAB41C(&StringLiteral_8272/*"LOAD_END_TO_HELP"*/, v3);
    byte_4AB1552 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, method);
  if ( this->fields.type == 6 )
    v5 = (System_String_o **)&StringLiteral_8272/*"LOAD_END_TO_HELP"*/;
  else
    v5 = (System_String_o **)&StringLiteral_8271/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__221_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB1551 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, result);
    byte_4AB1551 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6941/*"GO_NEXT"*/, 0LL);
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
  if ( (byte_4AB14F6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_11069/*"REQUEST_OK"*/, result);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v5);
    this = (MyRoomControl_o *)sub_1BAB41C(&StringLiteral_11067/*"REQUEST_NG"*/, v6);
    byte_4AB14F6 = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_62056444(result, (System_String_o *)StringLiteral_22261/*"ok"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v7 = &StringLiteral_11067/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BAB678(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v7 = &StringLiteral_11069/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4AB1507 & 1) == 0 )
  {
    sub_1BAB41C(&TutorialFlag_TypeInfo, method);
    byte_4AB1507 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38072332(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1BAB678(0LL, v3);
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
    sub_1BAB678(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1BAB678(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *svtCtr; // x0

  svtCtr = (StandFigureBack_o *)this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.baseCallbackFunc = 0LL,
        sub_1BAB3C0(&svtCtr->fields.baseCallbackFunc),
        (svtCtr = this->fields.standFigureBack) == 0LL) )
  {
    sub_1BAB678(svtCtr, method);
  }
  StandFigureBack__DestroyFigure(svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB14F4 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_11456/*"SAVE_END"*/, method);
    byte_4AB14F4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11456/*"SAVE_END"*/, 0LL);
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

  if ( (byte_4AB14D2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_1BAB41C(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_1BAB41C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB14D2 = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v6->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_14;
  v10 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v10 )
  {
    v11 = v10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v11,
                                 (const MethodInfo_3163DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1BAB678(Instance, v9);
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

  if ( (byte_4AB14D3 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, method);
    byte_4AB14D3 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1BAB678(v4, v5);
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
    sub_1BAB678(0LL, method);
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

  if ( (byte_4AB14E6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_1BAB41C(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&StandFigureBack_TypeInfo, v12);
    byte_4AB14E6 = 1;
  }
  entity = 0LL;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  myRoomData = (MyRoomData_o *)sub_1BAB3C0(&this->fields.usrData);
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
           (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  figureSvtId = this->fields.figureSvtId;
  v31 = (MyroomServantSpecialImageMaster_o *)Master_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  myRoomData = (MyRoomData_o *)ImageLimitCount__SpecialImageLimitCountToSpecialNum(v27, 0LL);
  if ( !v31 )
LABEL_45:
    sub_1BAB678(myRoomData, favoriteUserSvtId);
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
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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

  if ( (byte_4AB14EF & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AB14EF = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1BAB678(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v9, 0LL);
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

  if ( (byte_4AB150A & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_1BAB41C(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1BAB41C(&NetworkManager_TypeInfo, v4);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BAB41C(&TutorialFlag_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v7);
    byte_4AB150A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38072332(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1BAB678(helpListViewManager, v8);
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v10,
                                                         (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_1BAB678(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4AB1502 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__hideFavoriteSvt_b__321_0__, v3);
    byte_4AB1502 = 1;
  }
  v4 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__321_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1BAB678(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1BAB678(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1BAB678(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB1504 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_3593/*"CLOSE_MENU"*/, method);
    byte_4AB1504 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3593/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4AB1505 & 1) == 0 )
  {
    sub_1BAB41C(&SoundManager_TypeInfo, method);
    byte_4AB1505 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1BAB678(soundPlayerComp, method);
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

  if ( (byte_4AB14E9 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__hideSvtFigure_b__248_0__, v3);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v4);
    byte_4AB14E9 = 1;
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
  v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__248_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1BAB678(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v9, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(usrItemListViewManager, method);
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

  if ( (byte_4AB14FA & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__initMaterial_d__285_TypeInfo, method);
    byte_4AB14FA = 1;
  }
  v3 = (MyRoomControl__initMaterial_d__285_o *)sub_1BAB668(MyRoomControl__initMaterial_d__285_TypeInfo);
  MyRoomControl__initMaterial_d__285___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  v3->fields.__4__this = this;
  sub_1BAB3C0(&v3->fields.__4__this);
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

  if ( (byte_4AB14CD & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AtlasManager_TypeInfo, v3);
    sub_1BAB41C(&Method_CStateManager_MyRoomControl___ctor__, v4);
    sub_1BAB41C(&Method_CStateManager_MyRoomControl__add__, v5);
    sub_1BAB41C(&CStateManager_MyRoomControl__TypeInfo, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1BAB41C(&DataManager_TypeInfo, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData___ctor__, v13);
    sub_1BAB41C(&System_Collections_Generic_List_AssetData__TypeInfo, v14);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v15);
    sub_1BAB41C(&Method_MyRoomControl_LoadScriptFileListAssetData__, v16);
    sub_1BAB41C(&MyRoomParamsManager_TypeInfo, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BAB41C(&SoundManager_TypeInfo, v19);
    sub_1BAB41C(&MyRoomControl_StateEtc_TypeInfo, v20);
    sub_1BAB41C(&Method_MyRoomControl___c__initMyRoom_b__216_0__, v21);
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v22);
    sub_1BAB41C(&StringLiteral_10375/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v23);
    sub_1BAB41C(&StringLiteral_17506/*"btn_bg_12"*/, v24);
    sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, v25);
    sub_1BAB41C(&StringLiteral_8785/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v26);
    byte_4AB14CD = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6941/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_52;
  }
  if ( !this->fields.mFSM )
  {
    v29 = (CStateManager_T__o *)sub_1BAB668(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v29,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_30F0B14 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v29;
    sub_1BAB3C0(&this->fields.mFSM);
    standFigureBack = (__int64)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_52;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_30F0BBC *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v31 = (MyRoomControl_StateEtc_o *)sub_1BAB668(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v31, 0LL);
    if ( !mFSM )
      goto LABEL_52;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_30F0BBC *)Method_CStateManager_MyRoomControl__add__);
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
  standFigureBack = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_52;
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)standFigureBack,
                                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
  sub_1BAB3C0(&this->fields.eventMaster);
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
    v37 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v37, v38, Method_MyRoomControl___c__initMyRoom_b__216_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__216_0 = v37;
    standFigureBack = sub_1BAB3C0(&static_fields->__9__216_0);
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
  if ( !byte_4AB1561 )
  {
    sub_1BAB41C(&MyRoomParamsManager_TypeInfo, method);
    byte_4AB1561 = 1;
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
  v50 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17506/*"btn_bg_12"*/, 0LL);
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
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)standFigureBack, 0LL)) == 0
    || (v61 = *(_DWORD *)(standFigureBack + 24),
        standFigureBack = (__int64)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = v61 > 1,
        !standFigureBack) )
  {
LABEL_52:
    sub_1BAB678(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8785/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
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
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMaster___);
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
      sub_1BAB680(standFigureBack, method);
    v70 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v70;
    sub_1BAB3C0(&this->fields.photoCampaignEntity);
    v72 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v72,
      (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v72;
    sub_1BAB3C0(&this->fields.masterEquipAssetData);
    v73 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v73,
      (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v73;
    sub_1BAB3C0(&this->fields.masterMaleEquipTexture);
    v74 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v74,
      (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v74;
    sub_1BAB3C0(&this->fields.masterFemaleEquipTexture);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_1BAB678(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1BAB3C0(&v8->fields.eventReceiver);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1BAB3C0(&v8->fields.callWhenFinished);
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

  if ( (byte_4AB1508 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_onClickHelp__, method);
    sub_1BAB41C(&MyRoomControl_TypeInfo, v3);
    byte_4AB1508 = 1;
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
    v6 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_onClickHelp__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
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
        sub_1BAB678(0LL, v9);
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

  if ( (byte_4AB1509 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl_helpClose__, v3);
    sub_1BAB41C(&Method_MyRoomControl_onClickHelpClose__, v4);
    byte_4AB1509 = 1;
  }
  v5 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_onClickHelpClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1BAB668(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1BAB678(v9, v10);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1BAB678(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1BAB678(0LL, method);
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

  if ( (byte_4AB14F2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1BAB41C(&int_____TypeInfo, v3);
    sub_1BAB41C(&int___TypeInfo, v4);
    sub_1BAB41C(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB14F2 = 1;
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
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v11, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                           (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v17 = (System_Int32_array_array *)sub_1BAB4C4(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1BAB4C4(int___TypeInfo, 2LL);
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
            sub_1BAB680(svtCtr, svtCtr);
          v17->m_Items[0] = (System_Int32_array *)svtCtr;
          svtCtr = (MyRoomSvtControl_o *)sub_1BAB3C0(v17->m_Items);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, v17, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1BAB678(svtCtr, v10);
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
  if ( (byte_4AB14DD & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_1BAB41C(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4AB14DD = 1;
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
             (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1BAB678(materialImageIdList, v4);
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

  if ( (byte_4AB14F3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl_endReflectionGameOption__, v3);
    byte_4AB14F3 = 1;
  }
  optionComp = this->fields.optionComp;
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1BAB678(v6, v7);
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

  if ( (byte_4AB14F5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_callbackChangeName__, method);
    sub_1BAB41C(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_1BAB41C(&NetworkManager_TypeInfo, v4);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_4410/*"ChangeUserName"*/, v6);
    byte_4AB14F5 = 1;
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
                   (System_String_o *)StringLiteral_4410/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1BAB678(SelfUserGame, v8);
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
    sub_1BAB678(0LL, method);
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
  int32_t figureSvtId; // w23
  int32_t Item; // w0
  const MethodInfo *v17; // x4
  System_String_o *asstName; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_4AB14EA & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isReset);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass249_0__resetSvtVoiceData_b__0__, v6);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass249_0_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_8271/*"LOAD_END"*/, v8);
    byte_4AB14EA = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass249_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass249_0_TypeInfo);
  MyRoomControl___c__DisplayClass249_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9->fields.__4__this = this;
  sub_1BAB3C0(&v9->fields);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8271/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1BAB678(myRoomFsm, v11);
  }
  v9->fields.svtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v12);
  p_svtVoiceEnt = (PlayMakerFSM_o **)&v9->fields.svtVoiceEnt;
  sub_1BAB3C0(&v9->fields.svtVoiceEnt);
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
           (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
  this->fields.voiceList = MyRoomControl__GetVoiceList(this, svtVoiceEnt, figureSvtId, Item, v17);
  sub_1BAB3C0(&this->fields.voiceList);
  myRoomFsm = *p_svtVoiceEnt;
  if ( !*p_svtVoiceEnt )
    goto LABEL_13;
  this->fields.asstName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  sub_1BAB3C0(&this->fields.asstName);
  asstName = this->fields.asstName;
  v19 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass249_0__resetSvtVoiceData_b__0__,
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 49, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
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

  if ( (byte_4AB1511 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_setDefSvtPos__, method);
    byte_4AB1511 = 1;
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
    v5 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
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
        sub_1BAB678(voicePlayBtn, method);
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
    sub_1BAB678(moveBtnObj, isDisp);
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
    sub_1BAB678(titleBtnCollider, isEnabled);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
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

  if ( (byte_4AB14F8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MyRoomControl_setMaterial__, isPlayDecideSe);
    byte_4AB14F8 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BAB678(0LL, v5);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 41, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BAB434(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BAB400(v8, v8[4]);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 53, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BAB678(0LL, method);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 57, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BAB678(0LL, method);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BAB678(0LL, method);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 55, 0, 0LL);
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
    sub_1BAB678(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 56, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BAB678(0LL, method);
  TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BAB678(this, method);
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
    sub_1BAB678(v6, v7);
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

  if ( (byte_4AB14E1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__setMySvtFigure_b__239_0__, v3);
    byte_4AB14E1 = 1;
  }
  v4 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__239_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v4, v5);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_31618572(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_31618572(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
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

  if ( (byte_4AB14EE & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB14EE = 1;
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
                                (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1BAB678(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_37569240((TitleInfoControl_o *)mstpfObj, 1, 45, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1BAB678(mstpfObj, method);
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
    sub_1BAB678(0LL, v4);
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
        sub_1BAB678(standFigureBack, isEnableMultipleView);
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
    sub_1BAB678(0LL, hSvtId);
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

  if ( (byte_4AB14DF & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BAB41C(&Method_MyRoomControl_EndLoad__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&Method_MyRoomControl___c__setSvtVoiceData_b__237_0__, v8);
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_8271/*"LOAD_END"*/, v10);
    byte_4AB14DF = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8271/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1BAB678(myRoomFsm, method);
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
             (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
    this->fields.voiceList = MyRoomControl__GetVoiceList(this, v13, figureSvtId, Item, v16);
    sub_1BAB3C0(&this->fields.voiceList);
    this->fields.asstName = ServantVoiceEntity__getVoiceAssetName(v13, 0LL);
    sub_1BAB3C0(&this->fields.asstName);
    asstName = this->fields.asstName;
    v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v18, v19);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v24 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 16LL);
      if ( !v24 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v25 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v24 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(v24, v25, Method_MyRoomControl___c__setSvtVoiceData_b__237_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__237_0 = v24;
        myRoomFsm = (void *)sub_1BAB3C0(&static_fields->__9__237_0);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v24, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8271/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 44, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
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

  if ( (byte_4AB14F7 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl_TypeInfo, method);
    byte_4AB14F7 = 1;
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
    sub_1BAB678(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_37569240((TitleInfoControl_o *)multipleViewButton, 1, 40, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_37569240(titleInfo, 1, 43, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1BAB678(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_31415416((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  sub_1BAB3C0(moveTarget);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1BAB678(transform, v8);
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
    sub_1BAB678(this, moveTarget);
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
    sub_1BAB678(this, moveTarget);
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

  if ( (byte_4AB14CF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AB14CF = 1;
  }
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  myRoomData = sub_1BAB3C0(&this->fields.usrData);
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
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v44, 0LL);
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
    if ( v20 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v45, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v20, 0LL);
    myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)myRoomData,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
            (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__) )
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
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
    v32 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v46, 0LL);
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
            sub_1BAB680(myRoomData, favoriteUserSvtId);
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
                *(const MethodInfo_3530898 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
    sub_1BAB678(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  MyRoomControl__AddSpecialImageLimitCount(
    (MyRoomControl_o *)myRoomData,
    &this->fields.imageIdList,
    this->fields.figureSvtId,
    v29);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v16, 0, 0LL);
  myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)myRoomData,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                   (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4AB14D1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BAB41C(&Method_MyRoomControl__setupSvtRand_b__221_0__, v4);
    sub_1BAB41C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BAB41C(&OptionManager_TypeInfo, v9);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, v12);
    byte_4AB14D1 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6941/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1BAB678(limitCountSupport, v13);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v15 = *((_DWORD *)limitCountSupport + 6);
  v16 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_69760360(0, v15, 0LL);
    if ( (unsigned int)IsLeave >= v16[6] )
LABEL_35:
      sub_1BAB680(IsLeave, v13);
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
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__221_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v23,
                                              (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  sub_1BAB3C0(&this->fields.usrData);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v54, 0LL);
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
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v52, 0LL);
  v33 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v34 = v32;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v33;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v51, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                      v22->fields.imageLimitCount,
                      0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v22->fields.dispLimitCount, 0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v22->fields.commandCardLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v22->fields.iconLimitCount, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v22->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v22, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v22, 0LL);
  if ( !v30 )
    goto LABEL_36;
  v40 = (char)limitCountSupport;
  commonFlag = v30[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v22->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                       v22->fields.randomLimitCount,
                       0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v22->fields.randomLimitCountSupport, 0LL);
  v45 = *(_QWORD *)&v22->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&v22->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v44;
  *(_QWORD *)&v55.fields.currentCryptoKey = v45;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v55, 0LL);
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

  if ( (byte_4AB14DC & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AB14DC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB14DB & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AB14DB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1BAB678(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_31618572(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  MyRoomControl__svtVoicePlayAct_d__341_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4AB150D & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl__svtVoicePlayAct_d__341_TypeInfo, item);
    byte_4AB150D = 1;
  }
  v5 = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1BAB668(MyRoomControl__svtVoicePlayAct_d__341_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__341___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BAB678(v6, v7);
  v5->fields.__4__this = this;
  sub_1BAB3C0(&v5->fields.__4__this);
  v5->fields.item = item;
  sub_1BAB3C0(&v5->fields.item);
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

  if ( (byte_4AB14DE & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, assetName);
    sub_1BAB41C(&NetworkManager_TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass236_0__voiceLoad_b__0__, v9);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass236_0_TypeInfo, v10);
    byte_4AB14DE = 1;
  }
  v11 = (MyRoomControl___c__DisplayClass236_0_o *)sub_1BAB668(MyRoomControl___c__DisplayClass236_0_TypeInfo);
  MyRoomControl___c__DisplayClass236_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_1BAB3C0(&v11->fields);
  v11->fields.endCallback = endCallback;
  sub_1BAB3C0(&v11->fields.endCallback);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AB1562 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, v14);
    byte_4AB1562 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  if ( !v15->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v17 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass236_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v17, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1BAB678(v12, v13);
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
  UnityEngine_Color_array *Pixels_69687760; // x25
  UnityEngine_Texture2D_o *v33; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v35; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4AB1575 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Texture2D_TypeInfo, v3);
    sub_1BAB41C(&TouchEffectManager_TypeInfo, v4);
    sub_1BAB41C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_4AB1575 = 1;
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
    Pixels_69687760 = UnityEngine_Texture2D__GetPixels_69687760(v12, v28, v31 * v27 / v30 + v29, v20, v21, 0LL);
    v33 = (UnityEngine_Texture2D_o *)sub_1BAB668(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69688884(v33, v20, v21, 3, 0, 0LL);
    if ( !v33 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_69689964(v33, Pixels_69687760, 0LL);
    UnityEngine_Texture2D__Apply_69690736(v33, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v33,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620((UnityEngine_Object_o *)v12, 0LL);
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
      sub_1BAB678(height, v14);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1BAB3C0(&this->fields.__2__current);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__CaptureServant_d__409_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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

  if ( (byte_4AB1576 & 1) == 0 )
  {
    sub_1BAB41C(&System_Func_bool__TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__290_0__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4AB1576 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1BAB678(Instance, v9);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v11, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__290_0__, 0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1BAB668(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1BAB3C0(p__2__current);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__290_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  if ( (byte_4AB1577 & 1) == 0 )
  {
    sub_1BAB41C(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v6);
    byte_4AB1577 = 1;
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
    if ( !byte_4AB0C49 )
    {
      sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v9);
      byte_4AB0C49 = 1;
    }
    v10 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    v3->fields._terminal_5__2 = v10->static_fields->mInstance;
    sub_1BAB3C0(&v3->fields._terminal_5__2);
    v11 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__284_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v3->fields.__2__current = (Il2CppObject *)QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
        p__2__current = &v3->fields.__2__current;
        sub_1BAB3C0(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_26:
      sub_1BAB678(this, method);
    }
  }
  v15 = (BackTaskAmountAdjuster_o *)sub_1BAB668(BackTaskAmountAdjuster_TypeInfo);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0LL);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__InitMaterialOnBackground_d__284_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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

  if ( (byte_4AB1578 & 1) == 0 )
  {
    sub_1BAB41C(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1BAB41C(&System_Func_bool__TypeInfo, v3);
    sub_1BAB41C(&Method_MyRoomControl__InitServantMenu_b__287_0__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BAB41C(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, v7);
    byte_4AB1578 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v16 = (BackTaskAmountAdjuster_o *)sub_1BAB668(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v16, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v11);
          if ( !v16 )
            goto LABEL_17;
          v17 = BackTaskAmountAdjuster__Execute(v16, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6941/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1BAB678(Instance, v11);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__287_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1BAB668(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BAB3C0(p__2__current);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__InitServantMenu_d__287_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  struct MyRoomControl___c__DisplayClass378_0_o *_8__1; // x21
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
  MyRoomControl__LoadMultipleServant_d__378_o *v87; // [xsp+28h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+30h] [xbp-B0h] BYREF
  __int64 formId; // [xsp+38h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v87 = this;
  if ( (byte_4AB1579 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v2);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    sub_1BAB41C(&System_Func_bool__TypeInfo, v4);
    sub_1BAB41C(&int___TypeInfo, v5);
    sub_1BAB41C(&ServantScriptMultipleEntity___TypeInfo, v6);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__0__, v7);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__1__, v8);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__2__, v9);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__3__, v10);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass378_0_TypeInfo, v11);
    sub_1BAB41C(&UnityEngine_WaitWhile_TypeInfo, v12);
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB41C(&StringLiteral_6707/*"FinishedFadeMultipleServant"*/, v13);
    byte_4AB1579 = 1;
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
          v73 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v73,
            (Il2CppObject *)_8__1,
            Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__1__,
            0LL);
          if ( multipleViewComponent )
          {
            MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v73, 0LL);
            v74 = (Il2CppObject *)v87->fields.__8__1;
            v75 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v75,
              v74,
              Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__2__,
              0LL);
            v76 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v76, v75, 0LL);
            v87->fields.__2__current = (Il2CppObject *)v76;
            sub_1BAB3C0(&v87->fields.__2__current);
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
      v17 = (Il2CppObject *)sub_1BAB668(MyRoomControl___c__DisplayClass378_0_TypeInfo);
      System_Object___ctor(v17, 0LL);
      v87->fields.__8__1 = (struct MyRoomControl___c__DisplayClass378_0_o *)v17;
      p__8__1 = (Il2CppObject **)&v87->fields.__8__1;
      sub_1BAB3C0(&v87->fields.__8__1);
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)v87->fields.__8__1;
      if ( this )
      {
        this->fields.__2__current = (Il2CppObject *)v87->fields.__4__this;
        this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB3C0(&this->fields.__2__current);
        if ( _4__this )
        {
          this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.mBlocker;
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
                v87->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)sub_1BAB4C4(
                                                                                                   ServantScriptMultipleEntity___TypeInfo,
                                                                                                   multipleStandFigureBacks->max_length);
                p_multipleEntities_5__2 = &v87->fields._multipleEntities_5__2;
                this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB3C0(&v87->fields._multipleEntities_5__2);
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
                    this = (MyRoomControl__LoadMultipleServant_d__378_o *)v20->m_Items[v22];
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
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
                    v90.fields.x = flt_BC25E8[(_DWORD)v22 == 0] + v26[8];
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v90, 0LL);
                    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
                    if ( !multipleServantUsrIds )
                      goto LABEL_83;
                    if ( (unsigned int)v22 >= multipleServantUsrIds->max_length )
                      goto LABEL_104;
                    if ( !_4__this->fields.myRoomData )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__378_o *)MyRoomData__getUsrSvtData(
                                                                            (MyRoomData_o *)this,
                                                                            multipleServantUsrIds->m_Items[v22],
                                                                            v27);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UserServantEntity__getSvtId(
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
                    this = (MyRoomControl__LoadMultipleServant_d__378_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__378_o *)ServantScriptMultipleMaster__TryGetEntity(
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
                        this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB558(
                                                                                entity,
                                                                                v32->obj.klass->_1.element_class);
                        if ( !this )
                        {
                          v84 = sub_1BAB69C();
                          sub_1BAB544(v84, 0LL);
                        }
                      }
                      if ( (unsigned int)v22 >= v32->max_length )
                        goto LABEL_104;
                      v32->m_Items[v22] = v33;
                      this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB3C0((char *)v32 + v23);
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
                        monitor = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                        System_Action___ctor(
                          monitor,
                          v38,
                          Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__3__,
                          0LL);
                        v38[2].monitor = monitor;
                        this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB3C0(&v38[2].monitor);
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
                  this = (MyRoomControl__LoadMultipleServant_d__378_o *)sub_1BAB4C4(int___TypeInfo, 2LL);
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
                          v82 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v82,
                            v81,
                            Method_MyRoomControl___c__DisplayClass378_0__LoadMultipleServant_b__0__,
                            0LL);
                          v83 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
                          UnityEngine_WaitWhile___ctor(v83, v82, 0LL);
                          v87->fields.__2__current = (Il2CppObject *)v83;
                          sub_1BAB3C0(&v87->fields.__2__current);
                          result = 1;
                          v87->fields.__1__state = 1;
                          return result;
                        }
LABEL_104:
                        sub_1BAB680(this, method);
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
    sub_1BAB678(this, method);
  }
  v87->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.titleInfo;
  if ( !this )
    goto LABEL_83;
  TitleInfoControl__changeTitleInfo_37569240((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
  titleInfo = _4__this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)titleInfo->fields.titleImg;
  if ( !this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MyRoomControl__LoadMultipleServant_d__378_o *)_4__this->fields.multipleViewCloseButton;
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
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v44->obj.klass + v45);
    if ( !this )
      goto LABEL_83;
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)StandFigureBack__GetSvtStandFigure(
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
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(v49, 0LL);
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
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(v50, 0LL);
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
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v60->obj.klass + v45);
      if ( !this )
        goto LABEL_83;
      v61 = *(_DWORD *)(v58 + 28);
      v62 = *(_DWORD *)(v58 + 32);
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
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
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v65->obj.klass + v45);
      if ( !this )
        goto LABEL_83;
      v66 = v63;
      v67 = v64;
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_transform(
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
    this = (MyRoomControl__LoadMultipleServant_d__378_o *)*((_QWORD *)&v68->obj.klass + v45);
    if ( this )
    {
      this = (MyRoomControl__LoadMultipleServant_d__378_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v69 = _4__this->fields.multipleStandFigureBacks;
      if ( v69 )
      {
        v70 = v47 == v69->max_length - 1 ? (System_String_o *)StringLiteral_6707/*"FinishedFadeMultipleServant"*/ : 0LL;
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__LoadMultipleServant_d__378_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v31; // x22
  struct MyRoomControl___c__DisplayClass400_0_o **p__8__1; // x21
  const MethodInfo *v33; // x2
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v36; // w21
  int32_t photoCampaignType; // w26
  StandFigureBack_o *photoCampaignStandFigureBack; // x23
  int32_t formId_5__3; // w24
  Il2CppObject *_8__1; // x20
  System_Action_o *v41; // x25
  bool v42; // w20
  Il2CppObject *v43; // x21
  System_Func_bool__o *v44; // x22
  UnityEngine_WaitWhile_o *v45; // x21
  Il2CppObject **p__2__current; // x19
  struct MyRoomControl___c__DisplayClass400_0_o *v47; // x21
  System_Action_o *v48; // x22
  Il2CppObject *v49; // x20
  System_Func_bool__o *v50; // x21
  UnityEngine_WaitWhile_o *v51; // x20
  Il2CppObject **v52; // x19
  int v53; // w8
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v54; // x1
  struct ServantPhotoEntity_FaceData_array **p_photoCampaignFaceList; // x0
  struct ServantPhotoEntity_FaceData_array *v56; // x8
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *faceData_5__4; // x21
  Il2CppObject *v59; // x22
  System_Action_o *v60; // x23
  Il2CppObject *v61; // x20
  System_Func_bool__o *v62; // x21
  UnityEngine_WaitWhile_o *v63; // x20
  struct ServantPhotoEntity_FaceData_o *v64; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl___c__DisplayClass400_0_o *v67; // x21
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v69; // x22
  Il2CppObject *v70; // x20
  System_Func_bool__o *v71; // x21
  UnityEngine_WaitWhile_o *v72; // x20
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v74; // x8
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x19
  struct StandFigureBack_o *v77; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  ServantPhotoEntity_FaceData_o *v80; // x21
  ServantPhotoEntity_FaceData_Fields *p_fields; // x24
  struct System_Int32_array **p_multiForm; // x23
  struct System_Int32_array *multiFace; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v85; // x8
  int32_t *v86; // x10
  struct System_Int32_array *v87; // x11
  __int64 v88; // x11
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v89; // x22
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v91; // x0
  System_Func_object__object__o *_9__400_4; // x22
  Il2CppObject *v93; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  struct MyRoomControl___c__DisplayClass400_0_o *v97; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__400_o *v98; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v100; // x23
  UIStandFigureR_o *v101; // x20
  System_Action_o *v102; // x22
  Il2CppObject *v103; // x20
  System_Func_bool__o *v104; // x21
  UnityEngine_WaitWhile_o *v105; // x20
  __int64 v107; // x0
  float scale; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4AB157A & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantPhotoMaster___, v3);
    sub_1BAB41C(&DataManager_TypeInfo, v4);
    sub_1BAB41C(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1BAB41C(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_1BAB41C(&ServantPhotoEntity_FaceData___TypeInfo, v9);
    sub_1BAB41C(&ServantPhotoEntity_FaceData_TypeInfo, v10);
    sub_1BAB41C(&System_Func_bool__TypeInfo, v11);
    sub_1BAB41C(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v12);
    sub_1BAB41C(&int___TypeInfo, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v14);
    sub_1BAB41C(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__400_4__, v15);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__0__, v16);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__10__, v17);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__1__, v18);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__2__, v19);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__3__, v20);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__5__, v21);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__6__, v22);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__7__, v23);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__8__, v24);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__9__, v25);
    sub_1BAB41C(&MyRoomControl___c__DisplayClass400_0_TypeInfo, v26);
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v27);
    sub_1BAB41C(&UnityEngine_WaitWhile_TypeInfo, v28);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB41C(&StringLiteral_6708/*"FinishedFadePhotoServant"*/, v29);
    byte_4AB157A = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v31 = (Il2CppObject *)sub_1BAB668(MyRoomControl___c__DisplayClass400_0_TypeInfo);
      System_Object___ctor(v31, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass400_0_o *)v31;
      p__8__1 = &v2->fields.__8__1;
      sub_1BAB3C0(&v2->fields.__8__1);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_77;
      *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB3C0(&this->fields);
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_77;
      (*p__8__1)->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      v110.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      v110.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v110.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x
                    + flt_BC2078[!_4__this->fields._IsMasterRight_k__BackingField];
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v110, 0LL);
      if ( !_4__this->fields.myRoomData )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)MyRoomData__getUsrSvtData(
                                                                   (MyRoomData_o *)this,
                                                                   _4__this->fields.photoCampaignServantUsrId,
                                                                   v33);
      if ( !this )
        goto LABEL_77;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
      photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
      v36 = SvtId;
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
      v41 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        _8__1,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_77;
      v42 = 1;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v36,
        photoCampaignLimitCount,
        1,
        0,
        formId_5__3,
        10,
        v41,
        photoCampaignType == 1,
        0LL);
      v43 = (Il2CppObject *)v2->fields.__8__1;
      v44 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v44,
        v43,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__1__,
        0LL);
      v45 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v45, v44, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v45;
      p__2__current = &v2->fields.__2__current;
      sub_1BAB3C0(p__2__current);
      *((_DWORD *)p__2__current - 2) = 1;
      return v42;
    case 1:
      v47 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v47 )
        goto LABEL_77;
      v47->fields.flag = 1;
      v48 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v47,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__2__,
        0LL);
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v48, 0LL);
      v49 = (Il2CppObject *)v2->fields.__8__1;
      v50 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v50,
        v49,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__3__,
        0LL);
      v51 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v51, v50, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v51;
      v52 = &v2->fields.__2__current;
      sub_1BAB3C0(v52);
      v53 = 2;
      goto LABEL_75;
    case 2:
      v2->fields.__1__state = -1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   &entity,
                                                                   v2->fields._imageId_5__2,
                                                                   (const MethodInfo_3163F90 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !_4__this )
          goto LABEL_77;
        v77 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v77 )
          goto LABEL_77;
        standFigureCollectList = v77->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_77;
        size = (unsigned int)standFigureCollectList->fields._size;
        v80 = (ServantPhotoEntity_FaceData_o *)sub_1BAB668(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor(v80, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB4C4(int___TypeInfo, (unsigned int)size);
        if ( !v80 )
          goto LABEL_77;
        v80->fields.multiFace = (struct System_Int32_array *)this;
        p_fields = &v80->fields;
        sub_1BAB3C0(&v80->fields);
        v80->fields.multiForm = (struct System_Int32_array *)sub_1BAB4C4(int___TypeInfo, (unsigned int)size);
        p_multiForm = &v80->fields.multiForm;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB3C0(&v80->fields.multiForm);
        if ( (int)size < 1 )
        {
LABEL_61:
          this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB4C4(
                                                                       ServantPhotoEntity_FaceData___TypeInfo,
                                                                       1LL);
          if ( !this )
            goto LABEL_77;
          v89 = this;
          this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)sub_1BAB558(v80, this->klass->_1.element_class);
          if ( !this )
          {
            v107 = sub_1BAB69C();
            sub_1BAB544(v107, 0LL);
          }
          if ( LODWORD(v89->fields.__2__current) )
          {
            v89->fields.__4__this = (struct MyRoomControl_o *)v80;
            sub_1BAB3C0(&v89->fields.__4__this);
            p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
            _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v89;
            goto LABEL_65;
          }
        }
        else
        {
          multiFace = p_fields->multiFace;
          if ( !p_fields->multiFace )
            goto LABEL_77;
          max_length = multiFace->max_length;
          v85 = 0LL;
          v86 = &multiFace->m_Items[1];
          while ( v85 < max_length )
          {
            v86[v85] = 0;
            v87 = *p_multiForm;
            if ( !*p_multiForm )
              goto LABEL_77;
            if ( v85 >= v87->max_length )
              break;
            v88 = (__int64)v87 + 4 * v85++;
            *(_DWORD *)(v88 + 32) = v2->fields._formId_5__3;
            if ( size == v85 )
              goto LABEL_61;
          }
        }
LABEL_78:
        sub_1BAB680(this, method);
      }
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)entity;
      if ( !entity )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)ServantPhotoEntity__GetFaceList(
                                                                   (ServantPhotoEntity_o *)entity,
                                                                   v2->fields._formId_5__3,
                                                                   0LL);
      if ( !_4__this )
        goto LABEL_77;
      v54 = this;
      p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
      _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v54;
LABEL_65:
      sub_1BAB3C0(p_photoCampaignFaceList);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v91 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v91 = MyRoomControl___c_TypeInfo;
      }
      _9__400_4 = (System_Func_object__object__o *)v91->static_fields->__9__400_4;
      if ( !_9__400_4 )
      {
        if ( !v91->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v91);
          v91 = MyRoomControl___c_TypeInfo;
        }
        v93 = (Il2CppObject *)v91->static_fields->__9;
        _9__400_4 = (System_Func_object__object__o *)sub_1BAB668(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__400_4,
          v93,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__400_4__,
          0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__400_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__400_4;
        sub_1BAB3C0(&static_fields->__9__400_4);
      }
      v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   photoCampaignFaceList,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__400_4,
                                                                   (const MethodInfo_2EF7668 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v96 = System_Linq_Enumerable__Distinct_int_(
              v95,
              (const MethodInfo_2EE29AC *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v96,
                                                                   (const MethodInfo_2F00798 *)Method_System_Linq_Enumerable_ToList_int___);
      v97 = v2->fields.__8__1;
      if ( !v97 )
        goto LABEL_77;
      v97->fields.flag = 1;
      v98 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this
        || (SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL),
            v100 = (Il2CppObject *)v2->fields.__8__1,
            v101 = SvtStandFigure,
            v102 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
            System_Action___ctor(
              v102,
              v100,
              Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__5__,
              0LL),
            !v101) )
      {
LABEL_77:
        sub_1BAB678(this, method);
      }
      UIStandFigureR__PreloadFormAssets(v101, (System_Collections_Generic_List_int__o *)v98, v102, 0LL);
      v103 = (Il2CppObject *)v2->fields.__8__1;
      v104 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v104,
        v103,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__6__,
        0LL);
      v105 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v105, v104, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v105;
      v52 = &v2->fields.__2__current;
      sub_1BAB3C0(v52);
      v53 = 3;
LABEL_75:
      *((_DWORD *)v52 - 2) = v53;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v56 = _4__this->fields.photoCampaignFaceList;
      if ( !v56 )
        goto LABEL_77;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v56->max_length )
        goto LABEL_78;
      v2->fields._faceData_5__4 = v56->m_Items[photoCampaignFaceListIndex];
      sub_1BAB3C0(&v2->fields._faceData_5__4);
      faceData_5__4 = v2->fields._faceData_5__4;
      v59 = (Il2CppObject *)v2->fields.__8__1;
      v60 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v60, v59, Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__7__, 0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, faceData_5__4, v60, 0LL);
      v61 = (Il2CppObject *)v2->fields.__8__1;
      v62 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v62,
        v61,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__8__,
        0LL);
      v63 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v63, v62, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v63;
      v52 = &v2->fields.__2__current;
      sub_1BAB3C0(v52);
      v53 = 4;
      goto LABEL_75;
    case 4:
      v64 = v2->fields._faceData_5__4;
      v2->fields.__1__state = -1;
      if ( !v64 )
        goto LABEL_77;
      multiForm = v64->fields.multiForm;
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
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_77;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScale_34021820(gameObject, scale, 0LL);
      v67 = v2->fields.__8__1;
      if ( !v67 )
        goto LABEL_77;
      v67->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v69 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v69,
        (Il2CppObject *)v67,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__9__,
        0LL);
      if ( !photoCampaignComponent )
        goto LABEL_77;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v69, 0LL);
      v70 = (Il2CppObject *)v2->fields.__8__1;
      v71 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v71,
        v70,
        Method_MyRoomControl___c__DisplayClass400_0__LoadPhotoCampaignServant_b__10__,
        0LL);
      v72 = (UnityEngine_WaitWhile_o *)sub_1BAB668(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v72, v71, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v72;
      v52 = &v2->fields.__2__current;
      sub_1BAB3C0(v52);
      v53 = 5;
      goto LABEL_75;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__changeTitleInfo_37569240((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 0LL);
      titleInfo = _4__this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)titleInfo->fields.titleImg;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v74 = _4__this->fields.titleInfo;
      if ( !v74 )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)v74->fields.headerBgImg;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignState = 2;
      if ( !this )
        goto LABEL_77;
      v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(_4__this, v75, v2->fields._svtMovePos_5__5, (System_String_o *)StringLiteral_6708/*"FinishedFadePhotoServant"*/, 0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__400_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_77;
      v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v76, PhotoCampaignMasterPosition, 0LL, 0LL);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__LoadPhotoCampaignServant_d__400_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  if ( (byte_4AB157B & 1) == 0 )
  {
    sub_1BAB41C(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    this = (MyRoomControl__StartCameraEffect_d__411_o *)sub_1BAB41C(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4AB157B = 1;
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
    if ( !byte_4AB0691 )
    {
      sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4AB0691 = 1;
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
      sub_1BAB678(this, method);
    }
    photoCampaignCameraEffect = (Il2CppObject *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49579268(
                                                                                                 photoCampaignCameraEffect,
                                                                                                 transform,
                                                                                                 (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
    sub_1BAB3C0(&_4__this->fields.photoCampaignInstantiateCameraEffect);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1BAB3C0(p__2__current);
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
  UnityEngine_Object__Instantiate_object__49579268(
    photoCampaignShutterEffect,
    v9,
    (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
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
    (const MethodInfo_2F15458 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v12 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v12, 0.066, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v12;
  v13 = &v2->fields.__2__current;
  sub_1BAB3C0(v13);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__StartCameraEffect_d__411_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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

  if ( (byte_4AB1564 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomControl___c_TypeInfo, v1);
    byte_4AB1564 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v2;
  sub_1BAB3C0(MyRoomControl___c_TypeInfo->static_fields);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__318_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB1567 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB1567 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__238_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB1566 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB1566 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__329_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB1568 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4AB1568 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__400_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1BAB678(this, 0LL);
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

  if ( (byte_4AB1565 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB1565 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
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
    sub_1BAB678(this, method);
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
  if ( (byte_4AB1569 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass240_0_o *)sub_1BAB41C(
                                                       &Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__1__,
                                                       v3);
    byte_4AB1569 = 1;
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
  sub_1BAB3C0(&this[1].fields.__9__1);
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
    MyRoomControl__setNormalFace_31618572((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_20;
  favoriteChangeComp = v8->fields.favoriteChangeComp;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    this = (MyRoomControl___c__DisplayClass240_0_o *)sub_1BAB3C0(&v2->fields.__9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1BAB678(this, method);
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

  if ( (byte_4AB156A & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__2__, v3);
    sub_1BAB41C(&StringLiteral_11275/*"ReleaseTouch"*/, v4);
    byte_4AB156A = 1;
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
      (System_String_o *)StringLiteral_11275/*"ReleaseTouch"*/,
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
            _9__2 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass240_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _4__this = (MyRoomControl_o *)sub_1BAB3C0(&this->fields.__9__2);
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
    sub_1BAB678(_4__this, method);
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
    sub_1BAB678(_4__this, v3);
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
    sub_1BAB678(this, method);
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
  if ( (byte_4AB156B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__1__, v3);
    this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1BAB41C(&StringLiteral_11275/*"ReleaseTouch"*/, v4);
    byte_4AB156B = 1;
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
  sub_1BAB3C0(&this[2].monitor);
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
    MyRoomControl__setNormalFace_31618572((MyRoomControl_o *)this, 0, 0LL);
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
      (System_String_o *)StringLiteral_11275/*"ReleaseTouch"*/,
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
        _9__1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v2,
          Method_MyRoomControl___c__DisplayClass242_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v2->fields.__9__1 = _9__1;
        this = (MyRoomControl___c__DisplayClass242_0_o *)sub_1BAB3C0(&v2->fields.__9__1);
      }
      if ( v15 )
      {
        StandFigureBack__Fadein(v15, _9__1, 0LL);
        return;
      }
    }
LABEL_46:
    sub_1BAB678(this, method);
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
    sub_1BAB678(_4__this, v3);
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
  if ( (byte_4AB156C & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass249_0_o *)sub_1BAB41C(&StringLiteral_8271/*"LOAD_END"*/, method);
    byte_4AB156C = 1;
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
    sub_1BAB678(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8271/*"LOAD_END"*/, 0LL);
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
    sub_1BAB678(this, method);
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

  if ( (byte_4AB156D & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB156D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
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
  sub_1BAB3C0(&this[2].monitor);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
  Il2CppObject *Object_object__48916712; // x21
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
  if ( (byte_4AB156E & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, assetData);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v5);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v6);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v7);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BAB41C(&StringLiteral_20296/*"img_bg_shutter"*/, v12);
    sub_1BAB41C(&StringLiteral_10695/*"Polaroid_img_frame_wide"*/, v13);
    sub_1BAB41C(&StringLiteral_8358/*"LayerChangeButton"*/, v14);
    sub_1BAB41C(&StringLiteral_10626/*"PhotoSettingButton"*/, v15);
    sub_1BAB41C(&StringLiteral_8903/*"MasterEquipSettingDialog"*/, v16);
    sub_1BAB41C(&StringLiteral_5391/*"DownloadPhotoCampaignAtlas"*/, v17);
    sub_1BAB41C(&StringLiteral_17243/*"bit_camera_shutter"*/, v18);
    sub_1BAB41C(&StringLiteral_17242/*"bit_camera_iconblink"*/, v19);
    sub_1BAB41C(&StringLiteral_10693/*"Polaroid_btn_shutter"*/, v20);
    sub_1BAB41C(&StringLiteral_10694/*"Polaroid_img_frame"*/, v21);
    this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1BAB41C(&StringLiteral_10627/*"PhotoTargetSelectDialog"*/, v22);
    byte_4AB156E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_42;
  _4__this->fields.photoCampaignAssetData = v3;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1BAB3C0(&_4__this->fields.photoCampaignAssetData);
  if ( !v3 )
    goto LABEL_42;
  Object_object__48916712 = AssetData__GetObject_object__48916712(
                              v3,
                              (System_String_o *)StringLiteral_5391/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__48916712,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__48916712 )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__48916712,
                         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      sub_1BAB3C0(&v26->fields.photoCampaignAtlas);
    }
  }
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].monitor,
    (System_String_o *)StringLiteral_10694/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.__4__this,
    (System_String_o *)StringLiteral_10695/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.__4__this,
    (System_String_o *)StringLiteral_10693/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_20296/*"img_bg_shutter"*/,
    0LL);
  v27 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48916712(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17242/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v27 )
    goto LABEL_42;
  v27->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(&v27->fields.photoCampaignCameraEffect);
  v28 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48916712(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17243/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v28 )
    goto LABEL_42;
  v28->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(&v28->fields.photoCampaignShutterEffect);
  v29 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48916712(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10627/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
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
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__49579268(
                                                     v31,
                                                     transform,
                                                     (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v29 )
    goto LABEL_42;
  v29->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1BAB3C0(&v29->fields.photoTargetSelectDialog);
  v33 = v4->fields.__4__this;
  if ( !v33 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v33->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_42;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v34 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48916712(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10626/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  v35 = v4->fields.__4__this;
  if ( !v35 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__49579268(
                                                     (Il2CppObject *)this,
                                                     v35->fields.panelRoot,
                                                     (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v34 )
    goto LABEL_42;
  v34->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1BAB3C0(&v34->fields.photoSettingButtonComponent);
  assetData = (AssetData_o *)v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)assetData[14].fields.name;
  if ( !this )
    goto LABEL_42;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v36 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48916712(
                                                     v3,
                                                     (System_String_o *)StringLiteral_8903/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  v37 = v4->fields.__4__this;
  if ( !v37 )
    goto LABEL_42;
  v38 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)v37->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_Object__Instantiate_object__49579268(
                                                     v38,
                                                     v39,
                                                     (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass393_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v36 )
    goto LABEL_42;
  v36->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass393_0_o *)sub_1BAB3C0(&v36->fields.masterEquipSettingDialog);
  v40 = v4->fields.__4__this;
  if ( !v40
    || (this = (MyRoomControl___c__DisplayClass393_0_o *)v40->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v41 = v4->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass393_0_o *)AssetData__GetObject_object__48916712(
                                                           v3,
                                                           (System_String_o *)StringLiteral_8358/*"LayerChangeButton"*/,
                                                           (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888),
        !v41)
    || (v41->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_1BAB3C0(&v41->fields.photoLayerChangeObj),
        (this = (MyRoomControl___c__DisplayClass393_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_42:
    sub_1BAB678(this, assetData);
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
  if ( (byte_4AB156F & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1BAB41C(&AssetManager_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData__Add__, v7);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BAB41C(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v8);
    byte_4AB156F = 1;
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
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v13[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BAB3C0(v13 + 4);
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
            this = (MyRoomControl___c__DisplayClass394_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                               v20,
                                                               0LL);
            if ( assetData )
            {
              v19 = (int)this;
              this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2EA67E0 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v19,
                  (Il2CppObject *)this,
                  (const MethodInfo_31B6E20 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BAB678(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38176016(assetData, 0LL);
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
  if ( (byte_4AB1570 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1BAB41C(&AssetManager_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AssetData__Add__, v7);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BAB41C(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v8);
    byte_4AB1570 = 1;
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
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v13[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BAB3C0(v13 + 4);
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
            this = (MyRoomControl___c__DisplayClass394_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                               v20,
                                                               0LL);
            if ( assetData )
            {
              v19 = (int)this;
              this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2EA67E0 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v19,
                  (Il2CppObject *)this,
                  (const MethodInfo_31B6E20 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BAB678(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38176016(assetData, 0LL);
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
  if ( (byte_4AB1571 & 1) == 0 )
  {
    sub_1BAB41C(&EventDelegate_Callback_TypeInfo, method);
    sub_1BAB41C(&EventDelegate_TypeInfo, v3);
    sub_1BAB41C(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1BAB41C(&Method_MyRoomControl_OnClickPhotoServant__, v6);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v7);
    this = (MyRoomControl___c__DisplayClass400_0_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v8);
    byte_4AB1571 = 1;
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
  v12 = UnityEngine_Object__Instantiate_object__49579268(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)v12,
                                                                   (const MethodInfo_2F15458 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  this = (MyRoomControl___c__DisplayClass400_0_o *)sub_1BAB3C0(&_4__this->fields.photoSvtTouchPress);
  v13 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_17;
  klass = v13[84].klass;
  if ( !klass )
    goto LABEL_17;
  data = (System_Collections_Generic_List_object__o *)klass->_1.byval_arg.data;
  v16 = (EventDelegate_Callback_o *)sub_1BAB668(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v16, v13, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL);
  v17 = (EventDelegate_o *)sub_1BAB668(EventDelegate_TypeInfo);
  EventDelegate___ctor_47033092(v17, v16, 0LL);
  if ( !data
    || (items = data->fields._items,
        v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++data->fields._version,
        !items) )
  {
LABEL_17:
    sub_1BAB678(this, method);
  }
  size = data->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      data,
      (Il2CppObject *)v17,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    data->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v17;
    sub_1BAB3C0(v21 + 4);
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
  if ( (byte_4AB1572 & 1) == 0 )
  {
    sub_1BAB41C(&EventDelegate_Callback_TypeInfo, method);
    sub_1BAB41C(&EventDelegate_TypeInfo, v3);
    sub_1BAB41C(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___, v4);
    sub_1BAB41C(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1BAB41C(&Method_MyRoomControl_OnclickPhotoMaster__, v7);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v8);
    this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    byte_4AB1572 = 1;
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
  v30.fields.x = v11->fields.defaultPhotoServantPos.fields.x + flt_BC1F80[!v11->fields._IsMasterRight_k__BackingField];
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v12->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34021820(gameObject, 0.9, 0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass401_0_o *)v14->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14->fields.photoMasterPanel = (struct UIPanel_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                       v15,
                                                       (const MethodInfo_2F15458 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1BAB3C0(&v14->fields.photoMasterPanel);
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
  v20 = UnityEngine_Object__Instantiate_object__49579268(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
  v17->fields.photoMasterTouchPress = (struct UITouchPress_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)v20,
                                                                 (const MethodInfo_2F15458 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1BAB3C0(&v17->fields.photoMasterTouchPress);
  v21 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v21 )
    goto LABEL_26;
  monitor = v21[84].monitor;
  if ( !monitor )
    goto LABEL_26;
  v23 = (System_Collections_Generic_List_object__o *)*((_QWORD *)monitor + 4);
  v24 = (EventDelegate_Callback_o *)sub_1BAB668(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v24, v21, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL);
  v25 = (EventDelegate_o *)sub_1BAB668(EventDelegate_TypeInfo);
  EventDelegate___ctor_47033092(v25, v24, 0LL);
  if ( !v23
    || (items = v23->fields._items,
        v27 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v23->fields._version,
        !items) )
  {
LABEL_26:
    sub_1BAB678(this, method);
  }
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v25,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v25;
    sub_1BAB3C0(v29 + 4);
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
    sub_1BAB680(_4__this, method);
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
        GameObjectExtensions__SetLocalScale_34021820(v9, scale, 0LL),
        v10 = this->fields.__4__this,
        v12 = *(_QWORD *)&position.fields.x,
        !v10) )
  {
LABEL_11:
    sub_1BAB678(_4__this, method);
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
  if ( (byte_4AB1573 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass424_0_o *)sub_1BAB41C(
                                                       &Method_MyRoomControl__ChangeMasterSetting_b__424_2__,
                                                       v3);
    byte_4AB1573 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (UIMasterFigureTextureOld_o *)_4__this[81].monitor,
        genderType = v2->fields.genderType,
        equipId = v2->fields.equipId,
        v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
        System_Action___ctor(v8, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__424_2__, 0LL),
        !monitor) )
  {
    sub_1BAB678(this, method);
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
  if ( (byte_4AB1574 & 1) == 0 )
  {
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass425_0_o *)sub_1BAB41C(
                                                       &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                       v3);
    byte_4AB1574 = 1;
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
  GameObjectExtensions__SetLocalScale_34021820(v7, v2->fields.svtMoveScale, 0LL);
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
  this = (MyRoomControl___c__DisplayClass425_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_15:
    sub_1BAB678(this, method);
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

  if ( (byte_4AB157C & 1) == 0 )
  {
    sub_1BAB41C(&System_Func_bool__TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomControl__initMaterial_b__285_0__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&UnityEngine_WaitUntil_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_6941/*"GO_NEXT"*/, v6);
    byte_4AB157C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1BAB678(Instance, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6941/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v12, _4__this, Method_MyRoomControl__initMaterial_b__285_0__, 0LL);
  v13 = (UnityEngine_WaitUntil_o *)sub_1BAB668(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1BAB3C0(p__2__current);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__initMaterial_d__285_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  MyRoomControl__svtVoicePlayAct_d__341_o *v2; // x19
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
  struct MyRoomControl___c__DisplayClass341_0_o *_8__1; // x22
  struct MyRoomControl___c__DisplayClass341_0_o *v37; // x8
  struct MyRoomControl___c__DisplayClass341_0_o *v38; // x8
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
  struct MyRoomControl___c__DisplayClass341_0_o *v49; // x8
  Il2CppObject **v50; // x19
  int v51; // w8
  int32_t v52; // w21
  MyRoomControl__svtVoicePlayAct_d__341_o *v53; // x22
  struct MyRoomControl_o *v54; // x8
  CommonUI_o *v55; // x21
  CommonUI_o *v56; // x21
  struct MyRoomControl___c__DisplayClass341_0_o *v57; // x8
  CommonUI_o *v58; // x20
  __int16 v59; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t formId[2]; // [xsp+28h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4AB157D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v3);
    sub_1BAB41C(&char_TypeInfo, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v10);
    sub_1BAB41C(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14);
    sub_1BAB41C(&Method_MyRoomControl___c__DisplayClass341_0__svtVoicePlayAct_b__0__, v15);
    this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1BAB41C(&MyRoomControl___c__DisplayClass341_0_TypeInfo, v16);
    byte_4AB157D = 1;
  }
  *(_QWORD *)formId = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v18 = (Il2CppObject *)sub_1BAB668(MyRoomControl___c__DisplayClass341_0_TypeInfo);
      System_Object___ctor(v18, 0LL);
      v2->fields.__8__1 = (struct MyRoomControl___c__DisplayClass341_0_o *)v18;
      sub_1BAB3C0(&v2->fields.__8__1);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_126;
      *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
      sub_1BAB3C0(&this->fields);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v19 )
        goto LABEL_126;
      CommonUI__maskFadeout(v19, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_1BAB3C0(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v22 = (System_Collections_Generic_List_T__o *)sub_1BAB668(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v22,
        (const MethodInfo_3532870 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
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
          *(const MethodInfo_35330C4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v2->fields.item;
      if ( !item )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      v27 = (ServantVoiceEntity_o *)this;
      v2->fields._voiceAssetName_5__2 = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      sub_1BAB3C0(&v2->fields._voiceAssetName_5__2);
      v28 = (Il2CppObject *)System_Int32__ToString((int)v27 + 20, 0LL);
      v59 = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)j_il2cpp_value_box_0(char_TypeInfo, &v59, v29, v30, v31);
      v32 = v2->fields.item;
      if ( !v32 )
        goto LABEL_126;
      v2->fields._playSvtVoiceId_5__3 = System_String__Concat_62059140(
                                          v28,
                                          (Il2CppObject *)this,
                                          (Il2CppObject *)v32->fields.voiceId,
                                          0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1BAB3C0(&v2->fields._playSvtVoiceId_5__3);
      v33 = v2->fields.item;
      if ( !v33 )
        goto LABEL_126;
      v2->fields._svtVoiceDataList_5__4 = ServantVoiceEntity__getVoiceList_40248720(
                                            v27,
                                            v33->fields.svtVoiceType,
                                            v2->fields._playSvtVoiceId_5__3,
                                            (System_Collections_Generic_List_CondType_Kind__o *)v22,
                                            0,
                                            0LL);
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v2->fields._svtVoiceDataList_5__4;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1BAB3C0(&v2->fields._svtVoiceDataList_5__4);
      if ( v2->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v35 = v2->fields.item;
      if ( !v35 )
        goto LABEL_126;
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_40247992(
                                                                                v27,
                                                                                v35->fields.svtVoiceType,
                                                                                3,
                                                                                v35->fields.voiceCondValue,
                                                                                0LL,
                                                                                -1,
                                                                                0LL);
      sub_1BAB3C0(&v2->fields._svtVoiceDataList_5__4);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      _8__1 = v2->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_126;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)sub_1BAB3C0(&_8__1->fields.bondsSvtObj);
      v37 = v2->fields.__8__1;
      if ( !v37 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v37->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v38 = v2->fields.__8__1;
      if ( !v38 )
        goto LABEL_126;
      v38->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      v39 = v2->fields.item;
      if ( !v39 )
        goto LABEL_126;
      v40 = (int)this;
      MyRoomControl__SetImageIdAndFormId(_4__this, formId, &formId[1], v39->fields.svt_id, (int32_t)this, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_127;
      v41 = this->fields.__4__this;
      if ( !v41 )
        goto LABEL_126;
      if ( !HIDWORD(v41->fields.myRoomListCtr) )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_127:
        sub_1BAB680(this, method);
      v42 = this->fields.__4__this;
      if ( !v42 )
        goto LABEL_126;
      formId[1] = (int32_t)v42->fields.myRoomListCtr;
LABEL_59:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
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
      v48 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v48, v47, Method_MyRoomControl___c__DisplayClass341_0__svtVoicePlayAct_b__0__, 0LL);
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
        sub_1BAB3C0(v50);
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
        sub_1BAB3C0(v50);
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
          this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v52,
                                                              (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_126;
          v53 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_127;
          v54 = this->fields.__4__this;
          if ( !v54 )
            goto LABEL_126;
          this = (MyRoomControl__svtVoicePlayAct_d__341_o *)System_String__op_Equality(
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
        this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice_31927616(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v53,
          v2->fields._voiceAssetName_5__2,
          0LL);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)method,
          v2->fields._voiceAssetName_5__2,
          0LL);
      }
LABEL_84:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v55 )
        goto LABEL_126;
      CommonUI__maskFadein(v55, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_90:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1BAB3C0(v50);
        v51 = 4;
        goto LABEL_125;
      }
LABEL_93:
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1BAB3C0(v50);
        v51 = 5;
        goto LABEL_125;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v56 )
        goto LABEL_126;
      CommonUI__maskFadeout(v56, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_101:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v50 = &v2->fields.__2__current;
        sub_1BAB3C0(v50);
        v51 = 6;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v2->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v57 = v2->fields.__8__1;
      if ( !v57 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)v57->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v58 )
        goto LABEL_126;
      CommonUI__maskFadein(v58, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_120:
      this = (MyRoomControl__svtVoicePlayAct_d__341_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_126:
        sub_1BAB678(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v2->fields.__2__current = 0LL;
      v50 = &v2->fields.__2__current;
      sub_1BAB3C0(v50);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MyRoomControl__svtVoicePlayAct_d__341_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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