void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct MyRoomControl_StaticFields *static_fields; // x8

  if ( (byte_4B1193F & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3043/*"BGM_MYROOM_1"*/, v3, v4);
    byte_4B1193F = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_3043/*"BGM_MYROOM_1"*/;
  sub_1BCA784(MyRoomControl_TypeInfo->static_fields, StringLiteral_3043/*"BGM_MYROOM_1"*/);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_BD2CB0;
  *(_QWORD *)&static_fields->BUTTON_MULTIPLE_VIEW = 0x2000000010LL;
  *(_QWORD *)&static_fields->BUTTON_OUT_X = 0x2C4480000LL;
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MyRoomStateMaterial_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // w8
  __int64 v27; // x1
  __int64 v28; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct System_Int64_array *v31; // x0
  struct System_Int32_array *v32; // x0

  if ( (byte_4B1193E & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&MyRoomStateMaterial_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v13, v14);
    byte_4B1193E = 1;
  }
  v15 = (MyRoomStateMaterial_o *)sub_1BCAA2C(MyRoomStateMaterial_TypeInfo, method, v2, v3);
  MyRoomStateMaterial___ctor(v15, 0LL);
  this->fields.mStateMaterial = v15;
  sub_1BCA784(&this->fields.mStateMaterial, v15);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v19;
  sub_1BCA784(&this->fields.imageIdList, v19);
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v23;
  sub_1BCA784(&this->fields.materialImageIdList, v23);
  v24 = sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v24 )
    sub_1BCAA3C(0LL, v25);
  v26 = *(_DWORD *)(v24 + 24);
  if ( !v26 || (*(_DWORD *)(v24 + 40) = 0, *(_QWORD *)(v24 + 32) = 0x43900000C4000000LL, v26 == 1) )
    sub_1BCAA44(v24, v24);
  *(_DWORD *)(v24 + 52) = 0;
  *(_QWORD *)(v24 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v24;
  sub_1BCA784(&this->fields.defaultMultipleServantPoses, v24);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v28);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  v31 = (struct System_Int64_array *)sub_1BCA888(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v31;
  sub_1BCA784(&this->fields.multipleServantUsrIds, v31);
  v32 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v32;
  sub_1BCA784(&this->fields.multipleLimitCounts, v32);
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
    sub_1BCAA3C(0LL, method);
  AccountLinkageComponent__LinkageStatusCheck(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__AccountLinkageStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B118EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_LinkageStatusCheckCallback__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B118EC = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__AddSpecialImageLimitCount(
        MyRoomControl_o *this,
        System_Collections_Generic_List_int__o **imageLimitCountList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_int__o *v24; // x20
  __int64 v25; // x1
  Il2CppObject *Master_object; // x0
  __int64 v27; // x1
  MyroomServantSpecialImageMaster_o *v28; // x22
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t current; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  MyroomServantSpecialImageEntity_array *EntitiesByBaseLimitCount; // x0
  __int64 v36; // x1
  MyroomServantSpecialImageEntity_array *v37; // x23
  int max_length; // w8
  int i; // w29
  MyroomServantSpecialImageEntity_o *v40; // x8
  int32_t num; // w24
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  System_Collections_Generic_List_Enumerator_int__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1193C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___,
      imageLimitCountList,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    byte_4B1193C = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    imageLimitCountList,
                                                    *(_QWORD *)&svtId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  if ( !*imageLimitCountList )
    sub_1BCAA3C(Master_object, v27);
  v28 = (MyroomServantSpecialImageMaster_o *)Master_object;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    *imageLimitCountList,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v46,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v24 )
      sub_1BCAA3C(v29, v30);
    current = v46.fields._current;
    items = v24->fields._items;
    v33 = Method_System_Collections_Generic_List_int__Add__;
    ++v24->fields._version;
    if ( !items )
      sub_1BCAA3C(v29, v30);
    size = v24->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v24,
        current,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v24->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
    if ( !v28 )
      sub_1BCAA3C(v29, v30);
    EntitiesByBaseLimitCount = MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(v28, svtId, current, 0LL);
    v37 = EntitiesByBaseLimitCount;
    if ( !EntitiesByBaseLimitCount )
      sub_1BCAA3C(0LL, v36);
    max_length = EntitiesByBaseLimitCount->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1BCAA44(EntitiesByBaseLimitCount, v36);
        v40 = v37->m_Items[i];
        if ( !v40 )
          sub_1BCAA3C(EntitiesByBaseLimitCount, v36);
        num = v40->fields.num;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v36);
        EntitiesByBaseLimitCount = (MyroomServantSpecialImageEntity_array *)ImageLimitCount__SpecialNumToSpecialImageLimitCount(
                                                                              num,
                                                                              0LL);
        v36 = (unsigned int)EntitiesByBaseLimitCount;
        v42 = v24->fields._items;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !v42 )
          sub_1BCAA3C(EntitiesByBaseLimitCount, (unsigned int)EntitiesByBaseLimitCount);
        v44 = v24->fields._size;
        if ( (unsigned int)v44 >= v42->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v24,
            (int32_t)EntitiesByBaseLimitCount,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v24->fields._size = v44 + 1;
          v42->m_Items[v44 + 1] = (int)EntitiesByBaseLimitCount;
        }
        max_length = v37->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v46,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *imageLimitCountList = v24;
  sub_1BCA784(imageLimitCountList, v24);
}


void __fastcall MyRoomControl__AutoDelinkAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  AccountLinkageComponent_c *v18; // x0
  System_String_o *v19; // x20
  Il2CppObject *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v30; // 0:x3.8
  System_Nullable_int__o v31; // 0:x4.8

  if ( (byte_4B118EF & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__318_0__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3429/*"CAN_CONTINUE_DEVICE"*/, v16, v17);
    byte_4B118EF = 1;
  }
  v18 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, method);
    v18 = AccountLinkageComponent_TypeInfo;
  }
  v18->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__318_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v31 = msgFontSize,
        v30 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v19, v24, v30, v31, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(myRoomFsm, v26);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3429/*"CAN_CONTINUE_DEVICE"*/, 0LL);
  MyRoomControl__HideContinueDeviceMenu(this, v27);
}


void __fastcall MyRoomControl__BlockTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MyRoomControl_c *v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UIWidget_o *changeBGBtnImg; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B118FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B118FE = 1;
  }
  v8 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v8 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v8->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v9);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v17.fields.r = 0.5;
  v17.fields.g = 0.5;
  v17.fields.b = 0.5;
  v17.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v17, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  if ( !changeBGBtnImg )
    goto LABEL_25;
  v18.fields.r = 0.5;
  v18.fields.g = 0.5;
  v18.fields.b = 0.5;
  v18.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v18, 0LL);
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
  v13 = *(_QWORD *)&changeBGBtnImg->fields.mChanged;
  v12 = *(_QWORD *)&changeBGBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
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
    v19.fields.r = 0.5;
    v19.fields.g = 0.5;
    v19.fields.b = 0.5;
    v19.fields.a = 1.0;
    UIWidget__set_color(changeBGBtnImg, v19, 0LL);
    v15 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v10);
      v15 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v15->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.mBlocker;
  if ( !changeBGBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeBGBtnImg, 1, 0LL),
        (changeBGBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_25:
    sub_1BCAA3C(changeBGBtnImg, v10);
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
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  int *static_fields; // x8
  float v5; // s0
  float v6; // s8
  float v7; // s9
  int32_t height; // w19
  float v9; // s0
  float v10; // s1

  if ( (byte_4B1192C & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    byte_4B1192C = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v3->static_fields;
  v5 = (float)static_fields[22];
  v6 = v5 / (float)static_fields[20];
  v7 = v5 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  v9 = (float)height / (float)UnityEngine_Screen__get_width(0LL);
  if ( v9 <= v6 )
    v10 = v9;
  else
    v10 = v6;
  if ( v9 < v7 )
    return v7;
  else
    return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MyRoomControl__CaptureServant(
        MyRoomControl_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  MyRoomControl__CaptureServant_d__410_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B11927 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__CaptureServant_d__410_TypeInfo, *(_QWORD *)&width, *(_QWORD *)&height);
    byte_4B11927 = 1;
  }
  v7 = (MyRoomControl__CaptureServant_d__410_o *)sub_1BCAA2C(
                                                   MyRoomControl__CaptureServant_d__410_TypeInfo,
                                                   *(_QWORD *)&width,
                                                   *(_QWORD *)&height,
                                                   method);
  MyRoomControl__CaptureServant_d__410___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  v7->fields.__4__this = this;
  sub_1BCA784(&v7->fields.__4__this, this);
  v7->fields.width = width;
  v7->fields.height = height;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeDisp(MyRoomControl_o *this, bool isSePlay, const MethodInfo *method)
{
  char v3; // vf
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  MyRoomControl_c *v16; // x0
  const MethodInfo *v17; // x1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v25; // s0
  float v26; // s9
  float v27; // s1
  float v28; // s8
  const MethodInfo *v29; // x2
  float v30; // s2
  float v31; // s10
  MyRoomControl_o *v32; // x0
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  float v35; // s9
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  int32_t v38; // w8
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  MyRoomControl_c *v43; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  StandFigureBack_o *standFigureBack; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x21
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  StandFigureBack_o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x1
  UnityEngine_Vector3_o v69; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B118FB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isSePlay, method);
    sub_1BCA7E0(&Method_MyRoomControl_ChangeDisp__, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl__ChangeDisp_b__340_0__, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl__ChangeDisp_b__340_1__, v10, v11);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_11403/*"ReleaseTouch"*/, v14, v15);
    byte_4B118FB = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_29;
  v16 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, isSePlay);
    v16 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v16->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3 | ((this->fields.buttonFlag & v16->static_fields->BUTTON_DISP_CHANGE) == 0) )
  {
LABEL_29:
    v39 = Method_MyRoomControl_ChangeDisp__;
    if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_ChangeDisp__);
    v40 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 2, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v17);
    if ( isSePlay )
    {
      v18 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_ChangeDisp__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    }
    mShowPos = this->fields.mShowPos;
    moveTarget = this->fields.mMainObj;
    moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
    moveHidePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    v69 = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    switch ( this->fields.type )
    {
      case 1:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v23);
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
          &v69,
          v23);
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
        v25 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0LL);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v26 = *(float *)&v25,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL)
          || (*(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)soundPlayerComp,
                                                       0LL),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0LL)
          || (v28 = v27,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0LL)) == 0LL) )
        {
LABEL_53:
          sub_1BCAA3C(soundPlayerComp, v22);
        }
        *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)soundPlayerComp,
                                                 0LL);
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
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, v69, v34);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_53;
            v35 = -v26;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0LL) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v36);
            v74.fields.x = v35;
            v74.fields.y = v28;
            v74.fields.z = v31;
            MyRoomControl__moveControl(this, this->fields.svtObj, v74, (System_String_o *)StringLiteral_11403/*"ReleaseTouch"*/, v37);
            v38 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_53;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0LL);
            if ( MainMenuBar__get_IsMenuBarActive(0LL) )
              MainMenuBar__FrameOut(0, 0LL);
            v43 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v41);
              v43 = MyRoomControl_TypeInfo;
            }
            v75.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v75.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v75.fields.x = v43->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v75, 0LL, v42);
            v76.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v76.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v76.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v76, 0LL, v45);
            v77.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v77.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v77.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v77, 0LL, v46);
            v78.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v78.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v78.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v78, 0LL, v47);
            v79.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v79.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v79.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v79, (System_String_o *)StringLiteral_11403/*"ReleaseTouch"*/, v48);
            v80.fields.y = this->fields.helpBtnInitPos.fields.y;
            v80.fields.z = this->fields.helpBtnInitPos.fields.z;
            v80.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v80, 0LL, v49);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v38 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v22);
            standFigureBack = this->fields.standFigureBack;
            v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
            System_Action___ctor(v54, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__340_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_53;
            StandFigureBack__Fadeout(standFigureBack, v54, 0LL);
            v38 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v29);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v55);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v56);
            v57 = this->fields.standFigureBack;
            v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
            System_Action___ctor(v61, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__340_1__, 0LL);
            if ( !v57 )
              goto LABEL_53;
            StandFigureBack__Fadein(v57, v61, 0LL);
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
              v62);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v63);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v64);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v65);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v66);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v67);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0LL);
            v38 = 0;
            break;
          default:
            goto LABEL_48;
        }
        this->fields.mState = v38;
LABEL_48:
        MyRoomControl__SetMultipleViewButtonColor(this, v22);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v68);
        break;
      default:
        goto LABEL_14;
    }
  }
}


void __fastcall MyRoomControl__ChangeMasterSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_int__int__o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_4B11934 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__ChangeMasterSetting_b__425_0__, v5, v6);
    byte_4B11934 = 1;
  }
  v7 = (System_Action_int__int__o *)sub_1BCAA2C(System_Action_int__int__TypeInfo, method, v2, v3);
  System_Action_int__int____ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__ChangeMasterSetting_b__425_0__, 0LL);
  MyRoomControl__OpenMasterEquipSettingDialog(this, v7, 0LL, v8);
}


void __fastcall MyRoomControl__ChangePhotoCampaignServantFace(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  MyRoomControl___c__DisplayClass406_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  int32_t v13; // w9
  il2cpp_array_size_t max_length; // w10
  struct ServantPhotoEntity_FaceData_o *v15; // x1
  ServantPhotoEntity_FaceData_o *faceData; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3

  if ( (byte_4B11926 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass406_0__ChangePhotoCampaignServantFace_b__0__, v5, v6);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass406_0_TypeInfo, v7, v8);
    byte_4B11926 = 1;
  }
  v9 = (MyRoomControl___c__DisplayClass406_0_o *)sub_1BCAA2C(
                                                   MyRoomControl___c__DisplayClass406_0_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  MyRoomControl___c__DisplayClass406_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.__4__this = this,
        v10 = sub_1BCA784(&v9->fields, this),
        photoCampaignFaceList = this->fields.photoCampaignFaceList,
        v13 = this->fields.photoCampaignFaceListIndex + 1,
        this->fields.photoCampaignFaceListIndex = v13,
        !photoCampaignFaceList) )
  {
    sub_1BCAA3C(v10, v11);
  }
  max_length = photoCampaignFaceList->max_length;
  if ( v13 >= (int)max_length )
  {
    v13 = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  if ( v13 >= max_length )
    sub_1BCAA44(v10, v11);
  v15 = photoCampaignFaceList->m_Items[v13];
  v9->fields.faceData = v15;
  sub_1BCA784(&v9->fields.faceData, v15);
  faceData = v9->fields.faceData;
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass406_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  MyRoomControl__SetFacePhotoServant(this, faceData, v20, v21);
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
  __int64 v17; // x1
  MyRoomControl_c *v18; // x0
  int32_t v19; // w9
  int32_t BUTTON_DISP_CHANGE; // w8
  int v21; // w10
  int v22; // w8
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11902 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, isSet, method);
    byte_4B11902 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( isSet )
    v6 = 1.0;
  else
    v6 = 0.5;
  if ( !playBtnImg )
    goto LABEL_22;
  v23.fields.a = 1.0;
  v23.fields.r = v6;
  v23.fields.g = v6;
  v23.fields.b = v6;
  UIWidget__set_color(playBtnImg, v23, 0LL);
  v7 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, isSet);
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
  v24.fields.a = 1.0;
  v24.fields.r = v6;
  v24.fields.g = v6;
  v24.fields.b = v6;
  UIWidget__set_color(playBtnImg, v24, 0LL);
  v12 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, isSet);
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
    sub_1BCAA3C(playBtnImg, isSet);
  v25.fields.a = 1.0;
  v25.fields.r = v6;
  v25.fields.g = v6;
  v25.fields.b = v6;
  UIWidget__set_color(playBtnImg, v25, 0LL);
  v18 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v17);
    v18 = MyRoomControl_TypeInfo;
  }
  v19 = this->fields.buttonFlag;
  BUTTON_DISP_CHANGE = v18->static_fields->BUTTON_DISP_CHANGE;
  v21 = v19 & ~BUTTON_DISP_CHANGE;
  v22 = v19 | BUTTON_DISP_CHANGE;
  if ( !isSet )
    v22 = v21;
  this->fields.buttonFlag = v22;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__ChangeSetStandFigureObj(
        MyRoomControl_o *this,
        bool isSet,
        bool isTouch,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *SvtStandFigure; // x22

  if ( (byte_4B11901 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isSet, isTouch);
    byte_4B11901 = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_12;
  SvtStandFigure = (UnityEngine_Object_o *)StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(standFigureBack, isSet);
  }
LABEL_10:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0LL);
}


void __fastcall MyRoomControl__CheckCsUnlink(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  PlayMakerFSM_o *SelfUserAccountLinkage; // x0
  __int64 v23; // x1
  int32_t type; // w8
  AccountLinkageComponent_c *v25; // x0
  struct AccountLinkageComponent_StaticFields *v26; // x8
  AccountLinkageComponent_c *v27; // x0
  __int64 *v28; // x8
  AccountLinkageComponent_c *v29; // x0
  System_String_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  Il2CppObject *Instance; // x21
  MyRoomControl___c_c *v35; // x8
  System_Action_o *_9__319_0; // x22
  Il2CppObject *v37; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v42; // 0:x3.8
  System_Nullable_int__o v43; // 0:x4.8

  if ( (byte_4B118F0 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_MyRoomControl___c__CheckCsUnlink_b__319_0__, v12, v13);
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_3428/*"CANNOT_CONTINUE_DEVICE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2005/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_3429/*"CAN_CONTINUE_DEVICE"*/, v20, v21);
    byte_4B118F0 = 1;
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
      v29 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v23);
        v29 = AccountLinkageComponent_TypeInfo;
      }
      v29->static_fields->isLinked = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo, v31);
        v35 = MyRoomControl___c_TypeInfo;
      }
      _9__319_0 = v35->static_fields->__9__319_0;
      if ( !_9__319_0 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35, v31);
          v35 = MyRoomControl___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v35->static_fields->__9;
        _9__319_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
        System_Action___ctor(_9__319_0, v37, Method_MyRoomControl___c__CheckCsUnlink_b__319_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__319_0 = _9__319_0;
        sub_1BCA784(&static_fields->__9__319_0, _9__319_0);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v43 = msgFontSize;
        v42 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v30, _9__319_0, v42, v43, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v28 = &StringLiteral_3428/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1BCAA3C(SelfUserAccountLinkage, v23);
    }
    if ( !type )
    {
      v25 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v23);
        v25 = AccountLinkageComponent_TypeInfo;
      }
      v26 = v25->static_fields;
LABEL_15:
      v26->isLinked = 0;
      goto LABEL_16;
    }
  }
  v27 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v23);
    v27 = AccountLinkageComponent_TypeInfo;
  }
  v26 = v27->static_fields;
  if ( v26->isLinked )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v23);
      v26 = AccountLinkageComponent_TypeInfo->static_fields;
    }
    goto LABEL_15;
  }
LABEL_16:
  SelfUserAccountLinkage = this->fields.myRoomFsm;
  if ( !SelfUserAccountLinkage )
    goto LABEL_32;
  v28 = &StringLiteral_3429/*"CAN_CONTINUE_DEVICE"*/;
LABEL_18:
  PlayMakerFSM__SendEvent(SelfUserAccountLinkage, (System_String_o *)*v28, 0LL);
}


void __fastcall MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v10; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v12; // x9

  v3 = this;
  if ( (byte_4B11907 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3579/*"CLICK_MATERIAL"*/, v4, v5);
    this = (MyRoomControl_o *)sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v6, v7);
    byte_4B11907 = 1;
  }
  sceneJumpInfo = v3->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v3->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v12 = &StringLiteral_7061/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  name = sceneJumpInfo->fields.name;
  v10 = MyRoomRootComponent_TypeInfo;
  if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo, method);
    v10 = MyRoomRootComponent_TypeInfo;
  }
  this = (MyRoomControl_o *)System_String__op_Equality(name, v10->static_fields->MYROOM_STATE_NEW_MATERIAL, 0LL);
  myRoomFsm = v3->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  v12 = &StringLiteral_7061/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v12 = &StringLiteral_3579/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v12, 0LL);
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1BCAA3C(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  Shop17Component_o *shop17Comp; // x0

  shop17Comp = this->fields.shop17Comp;
  if ( !shop17Comp )
    sub_1BCAA3C(0LL, method);
  Shop17Component__CloseMenu(shop17Comp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *mBlocker; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x3

  if ( (byte_4B11914 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__CloseMultipleView_b__385_0__, v4, v5);
    byte_4B11914 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__385_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v10, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v5; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v7; // x20
  __int64 v8; // x22
  int max_length; // w9
  il2cpp_array_size_t v10; // w24
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x10
  float y; // s10
  float x; // s11
  float v14; // s1
  struct StandFigureBack_array *v15; // x8
  float v16; // s8
  const MethodInfo *v17; // x3
  struct StandFigureBack_array *v18; // x8
  System_String_o *v19; // x2
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11912 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6824/*"FinishedCloseMultiServant"*/, method, v2);
    byte_4B11912 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v5),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(mBlocker, method);
  }
  v7 = 0LL;
  v8 = 4LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    defaultMultipleServantPoses = this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_20;
    if ( v10 >= defaultMultipleServantPoses->max_length || v10 >= max_length )
LABEL_22:
      sub_1BCAA44(mBlocker, method);
    mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v8);
    if ( mBlocker )
    {
      y = defaultMultipleServantPoses->m_Items[v7].fields.y;
      x = defaultMultipleServantPoses->m_Items[v7 + 1].fields.x;
      mBlocker = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)mBlocker,
                                               0LL);
      if ( mBlocker )
      {
        *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)mBlocker,
                                                 0LL);
        v15 = this->fields.multipleStandFigureBacks;
        if ( v15 )
        {
          if ( v10 >= v15->max_length )
            goto LABEL_22;
          mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&v15->obj.klass + v8);
          if ( mBlocker )
          {
            v16 = v14;
            mBlocker = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mBlocker, 0LL);
            v18 = this->fields.multipleStandFigureBacks;
            if ( v18 )
            {
              v19 = v10 == v18->max_length - 1 ? (System_String_o *)StringLiteral_6824/*"FinishedCloseMultiServant"*/ : 0LL;
              v20.fields.y = v16;
              v20.fields.x = flt_BD1CA8[(_DWORD)v8 == 4] + y;
              v20.fields.z = x + 0.0;
              MyRoomControl__moveControl(this, mBlocker, v20, v19, v17);
              multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
              ++v8;
              ++v7;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_4B11930 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__419_0__, v4, v5);
    byte_4B11930 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__419_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v9, 0, v10);
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

  if ( (byte_4B1192E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6825/*"FinishedClosePhotoCampaignServant"*/, method, v2);
    byte_4B1192E = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_8;
  v6 = this->fields.currentPhotoServantPos.fields.z + 0.0;
  v7 = this->fields.currentPhotoServantPos.fields.y + 0.0;
  v8 = this->fields.currentPhotoServantPos.fields.x + flt_BD1730[!this->fields._IsMasterRight_k__BackingField];
  gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  v20.fields.x = v8;
  v20.fields.y = v7;
  v20.fields.z = v6;
  MyRoomControl__moveControl(this, gameObject, v20, (System_String_o *)StringLiteral_6825/*"FinishedClosePhotoCampaignServant"*/, v10);
  if ( this->fields._IsOnlyServant_k__BackingField )
    return;
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoCampaignStandFigureBack
    || (v11 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(v11, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoMasterTexture) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(photoCampaignStandFigureBack, v4);
  }
  v15 = v14 + 0.0;
  v16 = v13 + 0.0;
  v17 = v12 + flt_BD1628[!this->fields._IsMasterRight_k__BackingField];
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
  __int64 v3; // x3
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B118EB & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_TypeInfo, setEndAction, method);
    byte_4B118EB = 1;
  }
  v6 = (MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *)sub_1BCAA2C(
                                                                           MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_TypeInfo,
                                                                           setEndAction,
                                                                           method,
                                                                           v3);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__291___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  v6->fields.__4__this = this;
  sub_1BCA784(&v6->fields.__4__this, this);
  v6->fields.setEndAction = setEndAction;
  sub_1BCA784(&v6->fields.setEndAction, setEndAction);
  return (System_Collections_IEnumerator_o *)v6;
}


CRIMoviePlayer_o *__fastcall MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *object; // x19
  Il2CppObject *v13; // x0
  __int64 v14; // x1

  if ( (byte_4B11904 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v3, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v7, v8);
    sub_1BCA7E0(&StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v9, v10);
    byte_4B11904 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__Instantiate_object_(
          object,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v13 )
    sub_1BCAA3C(0LL, v14);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v13,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void __fastcall MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MyRoomControl___c__DisplayClass402_0_o *v10; // x20
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x24
  struct UIMasterFigureTextureOld_o *Prefab_38634032; // x1

  if ( (byte_4B11922 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, func, method);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass402_0__CreatePhotoMasterFigure_b__0__, v6, v7);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass402_0_TypeInfo, v8, v9);
    byte_4B11922 = 1;
  }
  v10 = (MyRoomControl___c__DisplayClass402_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass402_0_TypeInfo,
                                                    func,
                                                    method,
                                                    v3);
  MyRoomControl___c__DisplayClass402_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  v10->fields.__4__this = this;
  sub_1BCA784(&v10->fields, this);
  v10->fields.func = func;
  sub_1BCA784(&v10->fields.func, func);
  if ( this->fields._IsOnlyServant_k__BackingField )
  {
    ActionExtensions__Call(v10->fields.func, 0LL);
    return;
  }
  photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (gameObject = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL),
        (photoCampaignStandFigureBack = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(photoCampaignStandFigureBack, v12);
  }
  v14 = UnityEngine_Component__get_gameObject(photoCampaignStandFigureBack, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v17 = v14;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass402_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  Prefab_38634032 = MasterFigureManagerOld__CreatePrefab_38634032(
                      v17,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v21,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0LL);
  this->fields.photoMasterTexture = Prefab_38634032;
  sub_1BCA784(&this->fields.photoMasterTexture, Prefab_38634032);
}


void __fastcall MyRoomControl__DestroyExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomListControl_o *myRoomListCtr; // x0

  myRoomListCtr = this->fields.myRoomListCtr;
  if ( !myRoomListCtr
    || (MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(myRoomListCtr, 0LL),
        (myRoomListCtr = (MyRoomListControl_o *)this->fields.shop17Comp) == 0LL) )
  {
    sub_1BCAA3C(myRoomListCtr, method);
  }
  Shop17Component__ExitMenu((Shop17Component_o *)myRoomListCtr, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MyRoomControl___c__DisplayClass383_0_o *v15; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  _BOOL8 v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v23; // x23
  StandFigureBack_o *v24; // x21
  System_Action_o *v25; // x23
  _BOOL4 v26; // w8
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  UnityEngine_Vector3_o *p_moveShowPos; // x10
  float *p_z; // x8
  float x; // s0
  float *p_y; // x10
  int v35; // s1
  int v36; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B11913 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDispDefault, callback);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass383_0__DispDefaultMyRoom_b__0__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass383_0__DispDefaultMyRoom_b__1__, v11, v12);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass383_0_TypeInfo, v13, v14);
    byte_4B11913 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v15 = (MyRoomControl___c__DisplayClass383_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass383_0_TypeInfo,
                                                    isDispDefault,
                                                    callback,
                                                    isFadein);
  MyRoomControl___c__DisplayClass383_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_39;
  v15->fields.callback = callback;
  sub_1BCA784(&v15->fields, callback);
  v15->fields.__4__this = this;
  sub_1BCA784(&v15->fields.__4__this, this);
  MyRoomControl__stopSvtVoice(this, v18);
  MyRoomControl__BlockTouch(this, v19);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v20, v21);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v15,
        Method_MyRoomControl___c__DisplayClass383_0__DispDefaultMyRoom_b__0__,
        0LL);
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, v23, 0LL);
    }
    frontObjectManager = this->fields.frontObjectManager;
    if ( frontObjectManager )
    {
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
      goto LABEL_13;
    }
LABEL_39:
    sub_1BCAA3C(frontObjectManager, v17);
  }
  v24 = this->fields.standFigureBack;
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass383_0__DispDefaultMyRoom_b__1__,
    0LL);
  if ( !v24 )
    goto LABEL_39;
  StandFigureBack__Fadeout(v24, v25, 0LL);
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
  v26 = isDispDefault && this->fields.isEnableMultipleView;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v26, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  v17 = isDispDefault && (unsigned __int64)this->fields.isEnablePhotoCampaign;
  if ( !frontObjectManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v17, 0LL);
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v30);
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
      v35 = *(_DWORD *)p_y;
      v36 = *(_DWORD *)p_z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v29);
      return;
    default:
      goto LABEL_27;
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
  __int64 v11; // x1
  __int64 v12; // x2
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *PhotoCampaignServant; // x1

  if ( (byte_4B11920 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, usrSvtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11, v12);
    byte_4B11920 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( Instance )
      {
        UIPanel__set_depth((UIPanel_o *)Instance, 14, 0LL);
        this->fields.photoMasterPosition = 2;
        this->fields._IsMasterRight_k__BackingField = 1;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_1BCAA3C(Instance, v14);
  }
LABEL_8:
  this->fields.photoCampaignServantUsrId = usrSvtId;
  this->fields.photoCampaignLimitCount = imageLimitCount;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  PhotoCampaignServant = MyRoomControl__LoadPhotoCampaignServant(this, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, PhotoCampaignServant, 0LL);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *svtCtr; // x0
  const MethodInfo *v15; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21
  Il2CppObject *v23; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4B118CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl___c__EndLoad_b__239_0__, v8, v9);
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8392/*"LOAD_END"*/, v12, v13);
    byte_4B118CF = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_20;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v15);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v20 = AvalonSceneManager_TypeInfo;
    }
    svtCtr = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo, method);
      svtCtr = MyRoomControl___c_TypeInfo;
    }
    v22 = *(System_Action_o **)(*((_QWORD *)svtCtr + 23) + 24LL);
    if ( !v22 )
    {
      if ( !*((_DWORD *)svtCtr + 56) )
      {
        j_il2cpp_runtime_class_init_0(svtCtr, method);
        svtCtr = MyRoomControl___c_TypeInfo;
      }
      v23 = (Il2CppObject *)**((_QWORD **)svtCtr + 23);
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v17, v18);
      System_Action___ctor(v22, v23, Method_MyRoomControl___c__EndLoad_b__239_0__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__239_0 = v22;
      svtCtr = (void *)sub_1BCA784(&static_fields->__9__239_0, v22);
    }
    if ( Instance )
    {
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v22, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_1BCAA3C(svtCtr, method);
  }
LABEL_18:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_20;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8392/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_T__o *v11; // x21

  if ( (byte_4B1191E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__EndLoadPhotoAsset_b__398_0__, v4, v5);
    byte_4B1191E = 1;
  }
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack
    || (StandFigureBack__Init(photoCampaignStandFigureBack, 0LL),
        this->fields.photoCampaignServantUsrId = 0LL,
        this->fields.photoCampaignLimitCount = 0,
        photoTargetSelectDialog = this->fields.photoTargetSelectDialog,
        v11 = (System_Action_T__o *)sub_1BCAA2C(System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__TypeInfo, v8, v9, v10),
        System_Action_Int32Enum____ctor(
          v11,
          (Il2CppObject *)this,
          Method_MyRoomControl__EndLoadPhotoAsset_b__398_0__,
          0LL),
        !photoTargetSelectDialog) )
  {
    sub_1BCAA3C(photoCampaignStandFigureBack, method);
  }
  PhotoTargetSelectDialog__Open(photoTargetSelectDialog, (System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *)v11, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x19

  if ( (byte_4B11908 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B11908 = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1BCA784(&this->fields.sceneJumpInfo, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
    if ( !v8 )
      sub_1BCAA3C(Instance, v7);
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
    sub_1BCAA3C(0LL, result);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  MyRoomControl___c__DisplayClass426_0_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  _BOOL4 IsMasterRight_k__BackingField; // w9
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8
  bool v19; // zf
  bool v20; // w9
  int32_t v21; // w10
  __int64 photoCampaignFaceListIndex; // x9
  ServantPhotoEntity_FaceData_o *v23; // x8
  struct System_Int32_array *multiForm; // x8
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_4B11935 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass426_0__ExchangePosition_b__0__, v9, v10);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass426_0_TypeInfo, v11, v12);
    byte_4B11935 = 1;
  }
  v13 = (MyRoomControl___c__DisplayClass426_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass426_0_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  MyRoomControl___c__DisplayClass426_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v13->fields.__4__this = this;
  v14 = sub_1BCA784(&v13->fields, this);
  IsMasterRight_k__BackingField = this->fields._IsMasterRight_k__BackingField;
  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  v19 = !IsMasterRight_k__BackingField;
  v20 = !IsMasterRight_k__BackingField;
  v21 = v19 ? 2 : 1;
  this->fields.photoMasterPosition = v21;
  this->fields._IsMasterRight_k__BackingField = v20;
  if ( !photoCampaignFaceList )
    goto LABEL_16;
  photoCampaignFaceListIndex = this->fields.photoCampaignFaceListIndex;
  if ( (unsigned int)photoCampaignFaceListIndex >= photoCampaignFaceList->max_length )
    goto LABEL_17;
  v23 = photoCampaignFaceList->m_Items[photoCampaignFaceListIndex];
  if ( !v23 )
    goto LABEL_16;
  multiForm = v23->fields.multiForm;
  if ( !multiForm )
    goto LABEL_16;
  if ( !multiForm->max_length )
LABEL_17:
    sub_1BCAA44(v14, v15);
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    this,
    this->fields.photoCampaignServantImageId,
    multiForm->m_Items[1],
    &v13->fields.svtMovePos,
    &v13->fields.svtMoveScale,
    v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v26);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass426_0__ExchangePosition_b__0__,
    0LL);
  if ( !v30 )
LABEL_16:
    sub_1BCAA3C(v14, v15);
  CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


void __fastcall MyRoomControl__FingerGestures_OnGestureEvent(
        MyRoomControl_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *startSelection; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4B11906 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, gesture, method);
    this = (MyRoomControl_o *)sub_1BCA7E0(&SwipeGesture_TypeInfo, v5, v6);
    byte_4B11906 = 1;
  }
  if ( !gesture )
    sub_1BCAA3C(this, gesture);
  startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gesture);
  if ( !UnityEngine_Object__op_Equality(startSelection, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
    {
      methodPtr_low = LOBYTE(SwipeGesture_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(gesture->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[methodPtr_low - 1] == SwipeGesture_TypeInfo )
      {
        if ( (v4->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(v4, 0, v9);
        if ( v4->fields.multipleViewState == 3 )
        {
          v4->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(v4, 1, v9);
        }
        if ( v4->fields.photoCampaignState == 3 )
        {
          v4->fields.photoCampaignState = 2;
          MyRoomControl__SetPhotoCampaignUi(v4, 1, v9);
        }
      }
    }
  }
}


void __fastcall MyRoomControl__FinishedCloseFullScreenPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4B1192D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1192D = 1;
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
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))photoCampaignProduction->klass[1].vtable._3_ToString.method)(
                                 photoCampaignProduction,
                                 photoCampaignProduction->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__Destroy_70154244(v6, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_11:
    sub_1BCAA3C(photoCampaignProduction, method);
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
      sub_1BCAA44(multipleViewCloseButton, method);
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
    sub_1BCAA3C(multipleViewCloseButton, method);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0LL);
}


void __fastcall MyRoomControl__FinishedClosePhotoCampaignServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  StandFigureBack_o *photoCampaignStandFigureBack; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4B1192F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4, v5);
    byte_4B1192F = 1;
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
  MyRoomControl__SetPhotoCampaignUi(this, 0, v8);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.defaultPhotoServantPos, 0LL);
  photoCampaignStandFigureBack = this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_25;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(v10, 1.0, 0LL);
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)photoCampaignStandFigureBack,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    UnityEngine_Object__Destroy_70154244(v15, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1BCA784(&this->fields.photoMasterTexture, 0LL);
  }
  if ( (photoCampaignStandFigureBack = (StandFigureBack_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL
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
    sub_1BCAA3C(photoCampaignStandFigureBack, method);
  }
  PhotoCampaignComponent__Open(
    (PhotoCampaignComponent_o *)photoCampaignStandFigureBack,
    (int32_t)method,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
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
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(photoCampaignStandFigureBack, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MyRoomSvtControl_o *svtCtr; // x0
  MyRoomSvtControl_o *v7; // x20
  PlayMakerFSM_o *myRoomFsm; // x8
  System_String_o **v9; // x9

  if ( (byte_4B118DB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9397/*"NORMAL_FORM"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3459/*"CHANGE_FORM"*/, v4, v5);
    byte_4B118DB = 1;
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
  if ( !svtCtr || (v7 = svtCtr, !HIDWORD(svtCtr->fields.asstName)) )
  {
LABEL_13:
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = (System_String_o **)&StringLiteral_9397/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCAA3C(svtCtr, method);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  if ( LODWORD(v7->fields.asstName) == (_DWORD)svtCtr )
    v9 = (System_String_o **)&StringLiteral_9397/*"NORMAL_FORM"*/;
  else
    v9 = (System_String_o **)&StringLiteral_3459/*"CHANGE_FORM"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myRoomFsm, *v9, 0LL);
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
  int v4; // w19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = imageLimitCount;
  if ( (byte_4B1193D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v8, v9);
    byte_4B1193D = 1;
  }
  entity = 0LL;
  if ( v4 >= 201 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
    v12 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v4, 0LL);
    if ( !Master_object )
      goto LABEL_13;
    v12 = MyroomServantSpecialImageMaster__TryGetEntity(
            (MyroomServantSpecialImageMaster_o *)Master_object,
            &entity,
            svtId,
            v12,
            0LL);
    if ( (v12 & 1) != 0 )
    {
      if ( entity )
        return entity->fields.baseLimitCount;
LABEL_13:
      sub_1BCAA3C(v12, v13);
    }
  }
  return v4;
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
  if ( (byte_4B1192B & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BCA7E0(&ManagerConfig_TypeInfo, localScale, localEulerAngle);
    byte_4B1192B = 1;
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
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v8);
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
    sub_1BCAA3C(v7, v8);
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
    sub_1BCAA3C(v4, method);
  if ( (int)v4 >= (signed int)photoCampaignFaceList->max_length )
  {
    LODWORD(v4) = 0;
    this->fields.photoCampaignFaceListIndex = 0;
  }
  return v4;
}


int32_t __fastcall MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_int__o *materialImageIdList; // x0

  if ( (byte_4B11905 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, method, v2);
    byte_4B11905 = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
}


UnityEngine_Vector3_o __fastcall MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MasterPhotoMaster_o *Master_object; // x0
  __int64 v7; // x1
  float y; // s8
  float offsetX; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v12; // s0
  float v13; // s1
  MasterPhotoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11924 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MasterPhotoMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B11924 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MasterPhotoMaster___);
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
    sub_1BCAA3C(Master_object, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0LL);
  v12 = offsetX;
  v13 = y;
  result.fields.z = LocalPositionZ;
  result.fields.y = v13;
  result.fields.x = v12;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 photoCampaignStandFigureBack; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v18; // s8
  float v19; // s1
  float y; // s9
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

  if ( (byte_4B11923 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantScriptMaster___, *(_QWORD *)&imageId, *(_QWORD *)&formId);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&int___TypeInfo, v13, v14);
    byte_4B11923 = 1;
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
    v18 = -LocalPositionX;
  }
  else
  {
    v19 = -256.0;
    if ( !this->fields._IsMasterRight_k__BackingField )
      v19 = 256.0;
    v18 = v19 - LocalPositionX;
  }
  y = this->fields.defaultPhotoServantPos.fields.y;
  photoCampaignStandFigureBack = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v21 = *(_DWORD *)(photoCampaignStandFigureBack + 24);
  v22 = (System_Int32_array *)photoCampaignStandFigureBack;
  if ( !v21 )
    goto LABEL_42;
  v23 = (int)v18;
  if ( v18 == INFINITY )
    v23 = 0x80000000;
  *(_DWORD *)(photoCampaignStandFigureBack + 32) = v23;
  if ( v21 == 1 )
LABEL_42:
    sub_1BCAA44(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
  if ( y == INFINITY )
    v24 = 0x80000000;
  else
    v24 = (int)y;
  *(_DWORD *)(photoCampaignStandFigureBack + 36) = v24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&imageId);
  photoCampaignStandFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantScriptMaster___);
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
    sub_1BCAA3C(photoCampaignStandFigureBack, *(_QWORD *)&imageId);
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
  v18 = (float)v22->m_Items[1];
  y = (float)v22->m_Items[2];
LABEL_39:
  photoCampaignStandFigureBack = (__int64)this->fields.photoCampaignStandFigureBack;
  if ( !photoCampaignStandFigureBack )
    goto LABEL_41;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignStandFigureBack, 0LL);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v28, 0LL);
  position->fields.x = v18;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x19
  ServantCostumeEntity_array *Instance; // x0
  __int64 id; // x1
  int max_length; // w8
  ServantCostumeEntity_array *v19; // x20
  unsigned int v20; // w21
  ServantCostumeEntity_o *v21; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_4B11909 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B11909 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&servantId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v19 = Instance;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1BCAA44(Instance, id);
      v21 = v19->m_Items[v20];
      if ( !v21 )
        break;
      if ( !v15 )
        break;
      id = (unsigned int)v21->fields.id;
      items = v15->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = v19->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCAA3C(Instance, id);
  }
LABEL_16:
  if ( !v15 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_o *v3; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B118C8 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BCA7E0(&Method_CStateManager_MyRoomControl__getState__, method, v2);
    byte_4B118C8 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(v6, v7);
  return ServantVoiceEntity__getMyRoomVoiceList(svtVoiceEnt, v6, 0LL);
}


void __fastcall MyRoomControl__GoToTitle(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  Il2CppObject *Instance; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  CommonConfirmDialog_ClickDelegate_o *v27; // x23
  __int64 v28; // x1
  BalanceConfig_c *v29; // x0

  if ( (byte_4B118F5 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl_GoToTitle__, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl__GoToTitle_b__330_0__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_8945/*"MYROOM_TITLE_CONFIRM"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B118F5 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v18 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_GoToTitle__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8945/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v24, v25, v26);
  CommonConfirmDialog_ClickDelegate___ctor(v27, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__330_0__, 0LL);
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28);
  if ( !Instance )
    sub_1BCAA3C(v29, v28);
  CommonUI__OpenConfirmDialog(
    (CommonUI_o *)Instance,
    v21,
    v22,
    v27,
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
    sub_1BCAA3C(continueDeviceComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceComp, 0, 0LL);
}


void __fastcall MyRoomControl__HideExchangeSvtCoinMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  Shop17Component_o *shop17Comp; // x0

  shop17Comp = this->fields.shop17Comp;
  if ( !shop17Comp )
    sub_1BCAA3C(0LL, method);
  Shop17Component__HideMenu(shop17Comp, 0LL);
}


void __fastcall MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B11936 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11936 = 1;
  }
  this->fields.photoCampaignState = 3;
  photoMasterTouchPress = (UnityEngine_Object_o *)this->fields.photoMasterTouchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(gameObject, v5);
  }
LABEL_15:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v8);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__InitMaterialOnBackground_d__285_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B118E8 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__InitMaterialOnBackground_d__285_TypeInfo, method, v2);
    byte_4B118E8 = 1;
  }
  v5 = (MyRoomControl__InitMaterialOnBackground_d__285_o *)sub_1BCAA2C(
                                                             MyRoomControl__InitMaterialOnBackground_d__285_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  MyRoomControl__InitMaterialOnBackground_d__285___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  v5->fields.__4__this = this;
  sub_1BCA784(&v5->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitServantMenu(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__InitServantMenu_d__288_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B118EA & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__InitServantMenu_d__288_TypeInfo, method, v2);
    byte_4B118EA = 1;
  }
  v5 = (MyRoomControl__InitServantMenu_d__288_o *)sub_1BCAA2C(
                                                    MyRoomControl__InitServantMenu_d__288_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  MyRoomControl__InitServantMenu_d__288___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  v5->fields.__4__this = this;
  sub_1BCA784(&v5->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall MyRoomControl__IsEnableButton(MyRoomControl_o *this, int32_t button, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.buttonFlag & button) < 0) ^ v3 | ((this->fields.buttonFlag & button) == 0));
}


bool __fastcall MyRoomControl__IsEnableMultipleViewButton(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_c *v4; // x0

  if ( (byte_4B11916 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, method, v2);
    byte_4B11916 = 1;
  }
  if ( !this->fields.isEnoughServantMultipleView )
    return 0;
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v4 = MyRoomControl_TypeInfo;
  }
  return (this->fields.buttonFlag & v4->static_fields->BUTTON_MULTIPLE_VIEW) >= 1
      && !this->fields.type
      && !this->fields.mState
      && (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0;
}


bool __fastcall MyRoomControl__IsEnablePhotoCampaignButton(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_c *v4; // x0

  if ( (byte_4B11931 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, method, v2);
    byte_4B11931 = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v4 = MyRoomControl_TypeInfo;
  }
  return (this->fields.buttonFlag & v4->static_fields->BUTTON_PHOTO_CAMPAIGN) >= 1
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
  if ( (byte_4B1190F & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BCA7E0(
                                &Method_UnityEngine_Component_GetComponent_UIPanel___,
                                *(_QWORD *)&index,
                                method);
    byte_4B1190F = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1BCAA44(this, *(_QWORD *)&index);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v8; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B118D7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_7336/*"Help"*/, v4, v5);
    byte_4B118D7 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15733/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v8 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v8, (System_String_o *)StringLiteral_7336/*"Help"*/, 0LL) )
      return 0;
  }
  myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomListCtr;
  if ( !myRoomFsm )
    goto LABEL_16;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  myRoomFsm = (PlayMakerFSM_o *)this->fields.mShowPos;
  if ( !myRoomFsm )
    goto LABEL_16;
  v13 = v10;
  v14 = v11;
  v15 = v12;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myRoomFsm, 0LL);
  if ( !myRoomFsm )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0LL);
  if ( (float)((float)((float)(v15 - position.fields.z) * (float)(v15 - position.fields.z))
             + (float)((float)((float)(v13 - position.fields.x) * (float)(v13 - position.fields.x))
                     + (float)((float)(v14 - position.fields.y) * (float)(v14 - position.fields.y)))) < 1.0e-10 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_1BCAA3C(myRoomFsm, method);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  int32_t notificationType; // w8

  if ( (byte_4B118ED & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, result, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    byte_4B118ED = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
    if ( notificationType == 2 )
    {
      MyRoomControl__OverrideAccountLinkage(this, v7);
    }
    else if ( notificationType == 1 )
    {
      MyRoomControl__AutoDelinkAccountLinkage(this, v7);
    }
    else
    {
      MyRoomControl__CheckCsUnlink(this, v7);
    }
  }
}


void __fastcall MyRoomControl__LoadMasterEquip(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  Il2CppObject *Master_object; // x20
  __int64 UserId; // x0
  __int64 v32; // x1
  UserEquipEntity_array *List; // x20
  long double v34; // q0
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v40; // x29
  __int64 *v41; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x19
  unsigned int v43; // w27
  UserEquipEntity_o *v44; // x28
  __int64 v45; // x22
  __int64 v46; // x24
  __int64 v47; // x25
  __int64 v48; // x23
  __int64 v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v50; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v51; // x0
  UserEquipEntity_array *v52; // x29
  const MethodInfo_3205EE4 **v53; // x20
  __int64 v54; // x25
  __int64 v55; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v58; // x0
  Il2CppObject *v59; // x0
  System_String_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  AssetLoader_LoadEndDataHandler_o *v64; // x25
  __int64 v65; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v66; // x0
  Il2CppObject *v67; // x0
  System_String_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  AssetLoader_LoadEndDataHandler_o *v72; // x24
  __int128 v74; // [xsp+10h] [xbp-80h] BYREF
  __int128 v75; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4B1191C & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEquipMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v11, v12);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass395_0__LoadMasterEquip_b__0__, v21, v22);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass395_0__LoadMasterEquip_b__1__, v23, v24);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass395_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_9029/*"MasterFace/equip{0:D5}"*/, v27, v28);
    byte_4B1191C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1C6BC(v34);
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1C1C6BC(v34);
  UserId = **(_QWORD **)(v36 + 184);
  if ( !UserId )
    goto LABEL_33;
  UserId = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_33;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v40 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v41 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserId;
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
        sub_1BCAA44(UserId, v32);
      v44 = List->m_Items[v43];
      v45 = sub_1BCAA2C(MyRoomControl___c__DisplayClass395_0_TypeInfo, v32, v37, v38);
      MyRoomControl___c__DisplayClass395_0___ctor((MyRoomControl___c__DisplayClass395_0_o *)v45, 0LL);
      if ( !v45 )
        break;
      *(_QWORD *)(v45 + 24) = this;
      UserId = sub_1BCA784(v45 + 24, this);
      if ( !v44 )
        break;
      v47 = *(_QWORD *)&v44->fields.equipId.fields.currentCryptoKey;
      v46 = *(_QWORD *)&v44->fields.equipId.fields.fakeValue;
      if ( !(*v40)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v40, v32);
      *(_QWORD *)&v76.fields.currentCryptoKey = v47;
      *(_QWORD *)&v76.fields.fakeValue = v46;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
      if ( !v42 )
        break;
      v48 = v45 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v42,
              (Il2CppObject **)(v45 + 16),
              UserId,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v50 = v40;
      v51 = *v40;
      v52 = List;
      v53 = (const MethodInfo_3205EE4 **)v41;
      v55 = *(_QWORD *)&v44->fields.equipId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v44->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v51->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v51, v49);
      *(_QWORD *)&v77.fields.currentCryptoKey = v55;
      *(_QWORD *)&v77.fields.fakeValue = v54;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v77, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v41 = (__int64 *)v53;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        UserId,
        0LL,
        *v53);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44->fields.equipId, 0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        UserId,
        0LL,
        *v53);
      if ( !*(_QWORD *)v48 )
        break;
      v58 = *v50;
      List = v52;
      v40 = v50;
      v75 = *(_OWORD *)(*(_QWORD *)v48 + 64LL);
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(v58, &v75);
      v60 = System_String__Format((System_String_o *)StringLiteral_9029/*"MasterFace/equip{0:D5}"*/, v59, 0LL);
      v64 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v61, v62, v63);
      AssetLoader_LoadEndDataHandler___ctor(
        v64,
        (Il2CppObject *)v45,
        Method_MyRoomControl___c__DisplayClass395_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v65);
      UserId = AssetManager__loadAssetStorage(v60, v64, 10, 0LL);
      if ( !*(_QWORD *)v48 )
        break;
      v66 = *v50;
      v74 = *(_OWORD *)(*(_QWORD *)v48 + 80LL);
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(v66, &v74);
      v68 = System_String__Format((System_String_o *)StringLiteral_9029/*"MasterFace/equip{0:D5}"*/, v67, 0LL);
      v72 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v69, v70, v71);
      AssetLoader_LoadEndDataHandler___ctor(
        v72,
        (Il2CppObject *)v45,
        Method_MyRoomControl___c__DisplayClass395_0__LoadMasterEquip_b__1__,
        0LL);
      UserId = AssetManager__loadAssetStorage(v68, v72, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v43 >= max_length )
        return;
    }
LABEL_33:
    sub_1BCAA3C(UserId, v32);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadMultipleServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__LoadMultipleServant_d__379_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B11911 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__LoadMultipleServant_d__379_TypeInfo, method, v2);
    byte_4B11911 = 1;
  }
  v5 = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCAA2C(
                                                        MyRoomControl__LoadMultipleServant_d__379_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  MyRoomControl__LoadMultipleServant_d__379___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  v5->fields.__4__this = this;
  sub_1BCA784(&v5->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__LoadPhotoCampaignAssets(
        MyRoomControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  MyRoomControl___c__DisplayClass394_0_o *v16; // x21
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  AssetLoader_LoadEndDataHandler_o *v22; // x19
  __int64 v23; // x1

  if ( (byte_4B1191B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callBack, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoCampaignAssets_b__0__, v10, v11);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass394_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_9328/*"MyRoom/PhotoCampaign"*/, v14, v15);
    byte_4B1191B = 1;
  }
  v16 = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass394_0_TypeInfo,
                                                    callBack,
                                                    method,
                                                    v3);
  MyRoomControl___c__DisplayClass394_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  v16->fields.__4__this = this;
  sub_1BCA784(&v16->fields, this);
  v16->fields.callBack = callBack;
  sub_1BCA784(&v16->fields.callBack, callBack);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20, v21);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v16,
    Method_MyRoomControl___c__DisplayClass394_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9328/*"MyRoom/PhotoCampaign"*/, v22, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v18);
  }
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoCampaignServant(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__LoadPhotoCampaignServant_d__401_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B11921 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__LoadPhotoCampaignServant_d__401_TypeInfo, method, v2);
    byte_4B11921 = 1;
  }
  v5 = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCAA2C(
                                                             MyRoomControl__LoadPhotoCampaignServant_d__401_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  MyRoomControl__LoadPhotoCampaignServant_d__401___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  v5->fields.__4__this = this;
  sub_1BCA784(&v5->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B118C3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B118C3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B118DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__LoadServantForm_b__266_0__, v5, v6);
    byte_4B118DF = 1;
  }
  svtCtr = this->fields.svtCtr;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__266_0__, 0LL);
  if ( !svtCtr )
    sub_1BCAA3C(v9, v10);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v8, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v7; // x1
  MyRoomControl_c *v8; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B118E0 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8392/*"LOAD_END"*/, v4, v5);
    byte_4B118E0 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v9, 0LL);
  v8 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v7);
    v8 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v8->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__ReleaseTouch(this, v7);
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
LABEL_8:
    sub_1BCAA3C(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8392/*"LOAD_END"*/, 0LL);
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
  if ( (byte_4B118FD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9335/*"MyRoomUIAnimationEnd"*/, target, method);
    byte_4B118FD = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9335/*"MyRoomUIAnimationEnd"*/, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  __int64 v48; // x1
  const MethodInfo *v49; // x1
  int32_t multipleViewState; // w8
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  const MethodInfo *v53; // x1
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x5
  int32_t photoCampaignState; // w8
  _QWORD *v59; // x0
  System_Reflection_MethodBase_o *v60; // x0
  const MethodInfo *v61; // x1
  int32_t type; // w8
  int32_t mState; // w8
  const MethodInfo *v64; // x1
  __int64 v65; // x1
  int v66; // w9
  char v67; // w8
  __int64 *v68; // x8
  __int64 *v69; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  __int64 v72; // x1
  __int64 v73; // x1
  bool IsOpenFolder; // w0
  __int64 v75; // x1
  const MethodInfo *v76; // x1
  System_String_o *v77; // x1
  System_String_o *ActiveStateName; // x0
  struct MaterialCollectionComponent_o *materialCollectionComp; // x1
  struct NoticeInfoComponent_o *noticeComp; // x8
  struct MaterialCollectionComponent_o *v81; // x20
  __int64 v82; // x1
  struct MaterialCollectionComponent_o *v83; // x1
  __int64 v84; // x1
  MyRoomControl_c *v85; // x0
  __int64 v86; // x1
  struct NoticeInfoComponent_o *v87; // [xsp+8h] [xbp-18h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B118FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickBack__, v4, v2);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3609/*"CLOSE_ACCOUNT_LINKAGE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3621/*"CLOSE_MATERIAL_COLLECTION"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3620/*"CLOSE_MATERIAL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3634/*"CLOSE_USER_SERVANT_COIN"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3624/*"CLOSE_NOTICE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3618/*"CLOSE_GAMEOPTION"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3619/*"CLOSE_ITEMLIST"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3622/*"CLOSE_MATERIAL_COSTUME"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3615/*"CLOSE_CONTINUE_DEVICE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3610/*"CLOSE_BLACKLIST"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13135/*"State 5"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3629/*"CLOSE_SHOP17_LIST"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3627/*"CLOSE_SERIAL_CODE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3628/*"CLOSE_SHOP17"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3612/*"CLOSE_CHANGE_PROFILE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3630/*"CLOSE_SOUND_PLAYER"*/, v43, v44);
    this = (MyRoomControl_o *)sub_1BCA7E0(&StringLiteral_3617/*"CLOSE_FAVORITE_CHANGE"*/, v45, v46);
    byte_4B118FA = 1;
  }
  mMaterialEventLogListViewManager = v3->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_79;
  if ( !mMaterialEventLogListViewManager->fields.mIsDoing_Slide )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
    if ( !NetworkManager__CommunicationIsBusy(0LL)
      && !v3->fields.isMyRoomUIAnimation
      && !v3->fields.isBackBtnIgnore
      && !v3->fields.isSvtLoading )
    {
      multipleViewState = v3->fields.multipleViewState;
      if ( multipleViewState )
      {
        if ( multipleViewState == 2 )
        {
          v59 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v59 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickBack__);
          v60 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v59, v59[4]);
          OverwriteAssetSoundName__PlaySystemSe(v60, 1, 0LL);
          v3->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v3, v61);
        }
        else if ( multipleViewState == 1 )
        {
          v51 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v51 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickBack__);
          v52 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v51, v51[4]);
          OverwriteAssetSoundName__PlaySystemSe(v52, 1, 0LL);
          v3->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v3, v53);
        }
        return;
      }
      if ( v3->fields.photoCampaignState )
      {
        v54 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
          v54 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickBack__);
        v55 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v54, v54[4]);
        OverwriteAssetSoundName__PlaySystemSe(v55, 1, 0LL);
        photoCampaignState = v3->fields.photoCampaignState;
        switch ( photoCampaignState )
        {
          case 7:
            MyRoomControl__DispPhotoCampaign(
              v3,
              v3->fields.photoCampaignServantUsrId,
              v3->fields.photoCampaignLimitCount,
              v3->fields.photoMasterEquipId,
              v3->fields.photoMasterGenderType,
              v57);
            break;
          case 2:
            v3->fields.photoCampaignServantUsrId = 0LL;
            v3->fields.photoCampaignState = 1;
            v3->fields.photoCampaignLimitCount = 0;
            MyRoomControl__ClosePhotoCampaignServant(v3, v56);
            break;
          case 1:
            v3->fields.photoCampaignState = 0;
            MyRoomControl__ClosePhotoCampaignPanel(v3, v56);
            break;
        }
        return;
      }
      this = (MyRoomControl_o *)MyRoomControl__GetState(v3, v49);
      if ( !(_DWORD)this || (type = v3->fields.type, type == 10) )
      {
        mState = v3->fields.mState;
        v3->fields.IsMaterialEventBack = 1;
        if ( mState )
        {
          MyRoomControl__setDefSvtPos(v3, v64);
          return;
        }
        this = (MyRoomControl_o *)v3->fields.mStateMaterial;
        if ( !this )
          goto LABEL_79;
        this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        type = v3->fields.type;
      }
      v65 = StringLiteral_3554/*"CLICK_BACK"*/;
      v66 = type - 1;
      v67 = 0;
      switch ( v66 )
      {
        case 0:
          v68 = &StringLiteral_3620/*"CLOSE_MATERIAL"*/;
          goto LABEL_48;
        case 1:
          v69 = &StringLiteral_3621/*"CLOSE_MATERIAL_COLLECTION"*/;
          goto LABEL_61;
        case 2:
          v69 = &StringLiteral_3619/*"CLOSE_ITEMLIST"*/;
          goto LABEL_61;
        case 3:
          v69 = &StringLiteral_3612/*"CLOSE_CHANGE_PROFILE"*/;
          goto LABEL_61;
        case 4:
          optionComp = v3->fields.optionComp;
          if ( !optionComp )
            break;
          optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
          if ( optionSceneType_k__BackingField )
          {
            v67 = 0;
            if ( optionSceneType_k__BackingField == 1 )
              v72 = StringLiteral_3610/*"CLOSE_BLACKLIST"*/;
          }
          else
          {
            v69 = &StringLiteral_3618/*"CLOSE_GAMEOPTION"*/;
LABEL_61:
            v75 = *v69;
            v67 = 0;
          }
LABEL_62:
          if ( ((unsigned __int8)v67 & (v3->fields.mState != 0)) != 0 )
          {
            MyRoomControl__setDefSvtPos(v3, v76);
          }
          else
          {
            this = (MyRoomControl_o *)v3->fields.titleInfo;
            if ( !this )
              break;
            TitleInfoControl__sendEvent((TitleInfoControl_o *)this, v77, 0LL);
          }
          this = (MyRoomControl_o *)v3->fields.myRoomFsm;
          if ( this )
          {
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
            if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13135/*"State 5"*/, 0LL) )
              return;
            this = (MyRoomControl_o *)v3->fields.myRoomData;
            if ( this )
            {
              this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v3->fields.fvrUsrSvtId, 0LL);
              if ( this )
              {
                noticeComp = this->fields.noticeComp;
                materialCollectionComp = this->fields.materialCollectionComp;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  v87 = this->fields.noticeComp;
                  v81 = this->fields.materialCollectionComp;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v82);
                  noticeComp = v87;
                  v83 = v81;
                }
                *(_QWORD *)&v88.fields.currentCryptoKey = noticeComp;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v88, 0LL) < 1
                  || v3->fields.isHeroine && v3->fields.isHeroineReave )
                {
                  return;
                }
                this = (MyRoomControl_o *)v3->fields.changeBtnImg;
                if ( this )
                {
                  v89.fields.r = 1.0;
                  v89.fields.g = 1.0;
                  v89.fields.b = 1.0;
                  v89.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)this, v89, 0LL);
                  v85 = MyRoomControl_TypeInfo;
                  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v84);
                    v85 = MyRoomControl_TypeInfo;
                  }
                  v3->fields.buttonFlag |= v85->static_fields->BUTTON_LIMIT_CHANGE;
                  return;
                }
              }
            }
          }
          break;
        case 5:
          v68 = &StringLiteral_3624/*"CLOSE_NOTICE"*/;
LABEL_48:
          v73 = *v68;
          v67 = 1;
          goto LABEL_62;
        case 6:
          v69 = &StringLiteral_3627/*"CLOSE_SERIAL_CODE"*/;
          goto LABEL_61;
        case 7:
          v69 = &StringLiteral_3615/*"CLOSE_CONTINUE_DEVICE"*/;
          goto LABEL_61;
        case 8:
          v69 = &StringLiteral_3617/*"CLOSE_FAVORITE_CHANGE"*/;
          goto LABEL_61;
        case 9:
          v69 = &StringLiteral_3630/*"CLOSE_SOUND_PLAYER"*/;
          goto LABEL_61;
        case 10:
          v69 = &StringLiteral_3622/*"CLOSE_MATERIAL_COSTUME"*/;
          goto LABEL_61;
        case 16:
          v69 = &StringLiteral_3634/*"CLOSE_USER_SERVANT_COIN"*/;
          goto LABEL_61;
        case 17:
          v69 = &StringLiteral_3609/*"CLOSE_ACCOUNT_LINKAGE"*/;
          goto LABEL_61;
        case 18:
          this = (MyRoomControl_o *)v3->fields.shop17Comp;
          if ( !this )
            break;
          IsOpenFolder = Shop17Component__IsOpenFolder((Shop17Component_o *)this, 0LL);
          v69 = (__int64 *)&StringLiteral_3629/*"CLOSE_SHOP17_LIST"*/;
          if ( !IsOpenFolder )
            v69 = (__int64 *)&StringLiteral_3628/*"CLOSE_SHOP17"*/;
          goto LABEL_61;
        default:
          goto LABEL_62;
      }
LABEL_79:
      sub_1BCAA3C(this, v86);
    }
  }
}


void __fastcall MyRoomControl__OnClickChangeLimit(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  MyRoomControl_c *v25; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v28; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  Il2CppObject *Entity; // x21
  const MethodInfo *v35; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t materialFigureSvtDispIdx; // w9
  int32_t v38; // w8
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  struct FsmTemplate_o *fsmTemplate; // x20
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x21
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B118D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v3);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomControl_OnClickChangeLimit__, v11, v12);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3463/*"CHANGE_LIMIT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_7336/*"Help"*/, v23, v24);
    byte_4B118D6 = 1;
  }
  v25 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v25 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v25->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2 | ((this->fields.buttonFlag & v25->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
    goto LABEL_30;
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15733/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v28 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v28, (System_String_o *)StringLiteral_7336/*"Help"*/, 0LL) )
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v46.fields.currentCryptoKey = fsm;
      *(_QWORD *)&v46.fields.fakeValue = fsmTemplate;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v39 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickChangeLimit__);
    v40 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 2, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v33 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v45.fields.currentCryptoKey = v33;
  *(_QWORD *)&v45.fields.fakeValue = v32;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
  if ( !v31 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)myRoomFsm,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v35);
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
        v38 = materialFigureSvtDispIdx + 1;
      else
        v38 = 0;
      this->fields.materialFigureSvtDispIdx = v38;
LABEL_40:
      MyRoomControl__BlockTouch(this, method);
      this->fields.isSvtLoading = 1;
      v43 = Method_MyRoomControl_OnClickChangeLimit__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
        v43 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickChangeLimit__);
      v44 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v43, v43[4]);
      OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3463/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1BCAA3C(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1190C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickCloseMultipleView__, method, v2);
    byte_4B1190C = 1;
  }
  v4 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickCloseMultipleView__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v6);
}


void __fastcall MyRoomControl__OnClickDispPhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *photoMasterTouchPress; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *photoSvtTouchPress; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4B11937 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickDispPhotoUi__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11937 = 1;
  }
  v6 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickDispPhotoUi__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  this->fields.photoCampaignState = 2;
  photoMasterTouchPress = (UnityEngine_Object_o *)this->fields.photoMasterTouchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    sub_1BCAA3C(gameObject, v10);
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.photoCampaignDispUiMask;
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v13);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4B1191A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickEventLogSortKind__, method, v2);
    byte_4B1191A = 1;
  }
  v4 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickEventLogSortKind__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
    sub_1BCAA3C(materialCollectionServantListViewManager, v6);
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

  if ( (byte_4B1190D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickLeftServant__, method, v2);
    byte_4B1190D = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t photoCampaignState; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *v11; // x20
  float v12; // s11
  float v13; // s10
  float v14; // s9
  float v15; // s5
  float v16; // s6
  float v17; // s7
  float v18; // s4
  UnityEngine_GameObject_o *v19; // x0
  float x; // s12
  float v21; // s13
  float v22; // s14
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x20
  float v27; // s5
  float v28; // s6
  float v29; // s7
  float v30; // s4
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_GameObject_o *v34; // x20
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float y; // s5
  float z; // s6
  float w; // s7
  float v43; // s4
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x20
  float v47; // s5
  float v48; // s6
  float v49; // s7
  float v50; // s4
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  TweenAlpha_o *v54; // x20
  __int64 v55; // x1
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

  if ( (byte_4B1192A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method, v2);
    sub_1BCA7E0(&StringLiteral_6823/*"FinishedCloseFullScreenPhotoCampaign"*/, v4, v5);
    byte_4B1192A = 1;
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
      v35 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v36 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v37 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v37 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v38 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v37, v37[4]);
      OverwriteAssetSoundName__PlaySystemSe(v38, 1, 0LL);
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
      v43 = w;
      TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v69.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v63.fields.x = 1.0;
      v63.fields.y = 1.0;
      v63.fields.z = 1.0;
      TweenScale__Begin(v44, 0.2, v63, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v64.fields.x = 0.0;
      v64.fields.y = 11.0;
      v64.fields.z = 0.0;
      TweenPosition__Begin(v45, 0.2, v64, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v61.fields.x = 0.0;
      v61.fields.y = 0.0;
      v61.fields.z = 0.0;
      v70 = UnityEngine_Quaternion__Internal_FromEulerRad(v61, 0LL);
      v47 = v70.fields.y;
      v48 = v70.fields.z;
      v49 = v70.fields.w;
      v70.fields.y = v70.fields.x;
      v70.fields.z = v47;
      v70.fields.w = v48;
      v50 = v49;
      TweenRotation__Begin(v46, 0.2, *(UnityEngine_Quaternion_o *)&v70.fields.y, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v65.fields.x = 1.0;
      v65.fields.y = 1.0;
      v65.fields.z = 1.0;
      TweenScale__Begin(v51, 0.2, v65, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v66.fields.x = 0.0;
      v66.fields.y = 11.0;
      v66.fields.z = 0.0;
      TweenPosition__Begin(v52, 0.2, v66, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
LABEL_34:
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v54 = TweenAlpha__Begin(v53, 0.2, 0.0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !v54 )
        goto LABEL_37;
      v54->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
      sub_1BCA784(&v54->fields.eventReceiver, maskBoxCollider);
      v55 = StringLiteral_6823/*"FinishedCloseFullScreenPhotoCampaign"*/;
      v54->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6823/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1BCA784(&v54->fields.callWhenFinished, v55);
      return;
    case 4:
      v8 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      this->fields.photoCampaignState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v56, v10);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
      if ( maskBoxCollider )
      {
        v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
        v12 = v56.fields.x * 0.017453;
        v13 = v56.fields.y * 0.017453;
        v14 = v56.fields.z * 0.017453;
        v58.fields.x = v56.fields.x * 0.017453;
        v58.fields.y = v56.fields.y * 0.017453;
        v58.fields.z = v56.fields.z * 0.017453;
        v67 = UnityEngine_Quaternion__Internal_FromEulerRad(v58, 0LL);
        v15 = v67.fields.y;
        v16 = v67.fields.z;
        v17 = v67.fields.w;
        v67.fields.y = v67.fields.x;
        v67.fields.z = v15;
        v67.fields.w = v16;
        v18 = v17;
        TweenRotation__Begin(v11, 0.2, *(UnityEngine_Quaternion_o *)&v67.fields.y, 0LL);
        maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
        if ( maskBoxCollider )
        {
          v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
          x = localScale.fields.x;
          v21 = localScale.fields.y;
          v22 = localScale.fields.z;
          TweenScale__Begin(v19, 0.2, localScale, 0LL);
          maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignFrameSprite;
          if ( maskBoxCollider )
          {
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
            if ( !byte_4B109C1 )
            {
              sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v24);
              byte_4B109C1 = 1;
            }
            TweenPosition__Begin(v25, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
              v59.fields.x = v12;
              v59.fields.y = v13;
              v59.fields.z = v14;
              v68 = UnityEngine_Quaternion__Internal_FromEulerRad(v59, 0LL);
              v27 = v68.fields.y;
              v28 = v68.fields.z;
              v29 = v68.fields.w;
              v68.fields.y = v68.fields.x;
              v68.fields.z = v27;
              v68.fields.w = v28;
              v30 = v29;
              TweenRotation__Begin(v26, 0.2, *(UnityEngine_Quaternion_o *)&v68.fields.y, 0LL);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                v62.fields.x = x;
                v62.fields.y = v21;
                v62.fields.z = v22;
                TweenScale__Begin(v31, 0.2, v62, 0LL);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
                  if ( !byte_4B109C1 )
                  {
                    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v33);
                    byte_4B109C1 = 1;
                  }
                  TweenPosition__Begin(v34, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
      sub_1BCAA3C(maskBoxCollider, method);
  }
}


void __fastcall MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *backBtn; // x0
  __int64 v5; // x1
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  MyRoomControl_c *klass; // x11
  bool v10; // zf
  int32_t v11; // w8
  __int64 v12; // x1
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4B11928 & 1) == 0 )
  {
    sub_1BCA7E0(&TouchEffectManager_TypeInfo, method, v2);
    byte_4B11928 = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1BCAA3C(backBtn, v5);
  UnityEngine_GameObject__SetActive(backBtn, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v7);
  MyRoomControl__SetBackButtonIgnore(this, 1, v8);
  klass = this->klass;
  v10 = !this->fields._IsOnlyServant_k__BackingField;
  if ( this->fields._IsOnlyServant_k__BackingField )
    v11 = 4;
  else
    v11 = 6;
  this->fields.photoCampaignState = v11;
  if ( v10 )
    v12 = 870LL;
  else
    v12 = 362LL;
  v13 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, __int64, __int64, void *))klass->vtable._4_CaptureServant.method)(
                                              this,
                                              v12,
                                              552LL,
                                              klass[1]._1.image);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
}


void __fastcall MyRoomControl__OnClickPhotoServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct UIPanel_o *v11; // x8

  if ( (byte_4B11938 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl_OnClickPhotoServant__, v4, v5);
    byte_4B11938 = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( photoCampaignStandFigureBack )
      {
        photoMasterPanel = this->fields.photoMasterPanel;
        if ( photoMasterPanel )
        {
          v8 = (UIPanel_o *)photoCampaignStandFigureBack;
          if ( SLODWORD(photoCampaignStandFigureBack[13].monitor) > photoMasterPanel->fields.mDepth )
            return;
          v9 = Method_MyRoomControl_OnClickPhotoServant__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoServant__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickPhotoServant__);
          v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
          v11 = this->fields.photoMasterPanel;
          if ( v11 )
          {
            UIPanel__set_depth(v8, v11->fields.mDepth + 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1190E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickRightServant__, method, v2);
    byte_4B1190E = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MyRoomControl__SetLayerMultipleServant(this, 1, v6);
  }
}


void __fastcall MyRoomControl__OnClickSelectMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v18; // x0
  bool IsEnableMultipleViewButton; // w0
  _QWORD *v20; // x8
  bool v21; // w20
  System_Reflection_MethodBase_o *v22; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v24; // x20
  int max_length; // w9
  struct System_Int64_array *v26; // x0
  struct System_Int32_array *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x20
  const MethodInfo *v32; // x4

  if ( (byte_4B1190A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&long___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl_OnClickSelectMultipleServant__, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl__OnClickSelectMultipleServant_b__371_0__, v10, v11);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_7336/*"Help"*/, v14, v15);
    byte_4B1190A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15733/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v18 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v18, (System_String_o *)StringLiteral_7336/*"Help"*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v20 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v21 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  if ( !v21 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1BCAA3C(myRoomFsm, method);
  v24 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v24 >= max_length )
      break;
    if ( (unsigned int)v24 >= max_length )
      sub_1BCAA44(myRoomFsm, method);
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v24];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v24;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_16;
  }
  v26 = (struct System_Int64_array *)sub_1BCA888(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v26;
  sub_1BCA784(&this->fields.multipleServantUsrIds, v26);
  v27 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v27;
  sub_1BCA784(&this->fields.multipleLimitCounts, v27);
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__371_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v31, 1, v32);
}


void __fastcall MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v14; // x0
  bool IsEnablePhotoCampaignButton; // w0
  _QWORD *v16; // x8
  bool v17; // w20
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1

  if ( (byte_4B1191D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl_EndLoadPhotoAsset__, v4, v5);
    sub_1BCA7E0(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v6, v7);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_7336/*"Help"*/, v10, v11);
    byte_4B1191D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15733/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v14 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v14, (System_String_o *)StringLiteral_7336/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1BCAA3C(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v16 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v17 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  if ( v17 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_MyRoomControl_EndLoadPhotoAsset__, 0LL);
    MyRoomControl__LoadPhotoCampaignAssets(this, v22, v23);
    if ( !this->fields.isLoadMasterEquip )
    {
      this->fields.isLoadMasterEquip = 1;
      MyRoomControl__LoadMasterEquip(this, v24);
    }
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
  }
}


void __fastcall MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MaterialCollectionServantListViewManager_o *Instance; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B11919 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    byte_4B11919 = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v7);
  }
  Instance = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !Instance )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder((MaterialEventLogListViewManager_o *)Instance, 0LL);
}


void __fastcall MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  MyRoomControl_c *v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4B118DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickSvt__, method, v3);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10530/*"PLAY_VOICE"*/, v7, v8);
    byte_4B118DA = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_12;
  v9 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v9 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v9->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2 | ((this->fields.buttonFlag & v9->static_fields->BUTTON_VOICE_PLAY) == 0) )
  {
LABEL_12:
    v11 = Method_MyRoomControl_OnClickSvt__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickSvt__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickSvt__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
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
        MyRoomControl__setNormalFace_31880432(this, 1, v14);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10530/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_1BCAA3C(svtCtr, v10);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1190B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickUiDisableMultipleView__, method, v2);
    byte_4B1190B = 1;
  }
  v4 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v6);
}


void __fastcall MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v11; // x1
  _QWORD *monitor; // x8
  __int64 methodPtr_low; // x11
  __int64 v14; // x8
  MyRoomStateMaterial_o *v15; // x20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  _BOOL4 v21; // w19

  if ( (byte_4B11918 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_OnClickValentineListChange__, method, v2);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    byte_4B11918 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v14 = monitor[8];
  if ( !v14 )
    goto LABEL_16;
  v15 = *(MyRoomStateMaterial_o **)(v14 + 888);
  v16 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnClickValentineListChange__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v15
    || (MyRoomStateMaterial__ValentineListMomentChange(v15, !IsListActive, 0LL),
        (Instance = this->fields.listLabelObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0LL),
        (Instance = this->fields.servantListLabelObject) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v11);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0LL);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v19);
  v21 = this->fields.IsListActive;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v20);
  MyRoomParamsManager__SaveIsListActive(v21, 0LL);
}


void __fastcall MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Gesture_EventHandler_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B118C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Gesture_EventHandler_TypeInfo, method, v2);
    sub_1BCA7E0(&FingerGestures_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v7, v8);
    byte_4B118C6 = 1;
  }
  v9 = (Gesture_EventHandler_o *)sub_1BCAA2C(Gesture_EventHandler_TypeInfo, method, v2, v3);
  Gesture_EventHandler___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo, v10);
  FingerGestures__remove_OnGestureEvent(v9, 0LL);
}


void __fastcall MyRoomControl__OnclickPhotoMaster(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *photoCampaignStandFigureBack; // x0
  struct UIPanel_o *photoMasterPanel; // x8
  UIPanel_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct UIPanel_o *v11; // x8

  if ( (byte_4B11939 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl_OnclickPhotoMaster__, v4, v5);
    byte_4B11939 = 1;
  }
  if ( !this->fields._IsOnlyServant_k__BackingField )
  {
    photoCampaignStandFigureBack = (UnityEngine_Component_o *)this->fields.photoCampaignStandFigureBack;
    if ( photoCampaignStandFigureBack )
    {
      photoCampaignStandFigureBack = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                  photoCampaignStandFigureBack,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      photoMasterPanel = this->fields.photoMasterPanel;
      if ( photoMasterPanel )
      {
        v8 = (UIPanel_o *)photoCampaignStandFigureBack;
        if ( photoCampaignStandFigureBack )
        {
          if ( photoMasterPanel->fields.mDepth > SLODWORD(photoCampaignStandFigureBack[13].monitor) )
            return;
          v9 = Method_MyRoomControl_OnclickPhotoMaster__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnclickPhotoMaster__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_OnclickPhotoMaster__);
          v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
          v11 = this->fields.photoMasterPanel;
          if ( v11 )
          {
            UIPanel__set_depth(v8, v11->fields.mDepth - 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(photoCampaignStandFigureBack, method);
  }
}


void __fastcall MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1BCAA3C(0LL, method);
  AccountLinkageComponent__OpenMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__OpenExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  Shop17Component_o *shop17Comp; // x0

  shop17Comp = this->fields.shop17Comp;
  if ( !shop17Comp )
    sub_1BCAA3C(0LL, method);
  Shop17Component__OpenMenu(shop17Comp, 0LL);
}


void __fastcall MyRoomControl__OpenMasterEquipSettingDialog(
        MyRoomControl_o *this,
        System_Action_int__int__o *callBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  MasterEquipSettingDialog_o *masterEquipSettingDialog; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x23
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  System_Action_bool__o *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1191F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, callBack, closeCallBack);
    sub_1BCA7E0(&Method_MyRoomControl_SetMaskCollider__, v7, v8);
    byte_4B1191F = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v12 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, callBack, closeCallBack, method);
  System_Action_bool____ctor(v12, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1BCAA3C(v13, v14);
  MasterEquipSettingDialog__Open(
    masterEquipSettingDialog,
    masterMaleEquipTexture,
    masterFemaleEquipTexture,
    callBack,
    closeCallBack,
    v12,
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
  sub_1BCA784(&this->fields.multipleServantUsrIds, usrSvtIds);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1BCA784(&this->fields.multipleLimitCounts, imageLimitCounts);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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
  __int64 v12; // x2
  SelectImageLimitDialog_o *selectImageLimitDialog; // x24
  System_Action_bool__o *v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x6

  if ( (byte_4B11915 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, *(_QWORD *)&type, usrSvtId);
    sub_1BCA7E0(&Method_MyRoomControl_SetMaskCollider__, v11, v12);
    byte_4B11915 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v14 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, *(_QWORD *)&type, usrSvtId, callback);
  System_Action_bool____ctor(v14, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1BCAA3C(v15, v16);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v14, callback, index, v17);
}


void __fastcall MyRoomControl__OverrideAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  AccountLinkageComponent_c *v18; // x0
  System_String_o *v19; // x20
  Il2CppObject *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v30; // 0:x3.8
  System_Nullable_int__o v31; // 0:x4.8

  if ( (byte_4B118EE & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl__OverrideAccountLinkage_b__317_0__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_2007/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3429/*"CAN_CONTINUE_DEVICE"*/, v16, v17);
    byte_4B118EE = 1;
  }
  v18 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, method);
    v18 = AccountLinkageComponent_TypeInfo;
  }
  v18->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__317_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v31 = msgFontSize,
        v30 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v19, v24, v30, v31, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(myRoomFsm, v26);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3429/*"CAN_CONTINUE_DEVICE"*/, 0LL);
  MyRoomControl__HideContinueDeviceMenu(this, v27);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  MyRoomControl___c__DisplayClass358_0_o *v14; // x24
  MyRoomControl_o *v15; // x0
  const MethodInfo *v16; // x1
  CRIMoviePlayer_o *CriMoviePlayerObject; // x0
  __int64 v18; // x1
  CRIMoviePlayer_o **p_player; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  CRIMoviePlayer_o *player; // x23
  BgmManager_c *v24; // x0
  float masterVolume; // s8
  System_Action_o *v26; // x25

  if ( (byte_4B11903 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, fileName, assetPath);
    sub_1BCA7E0(&BgmManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass358_0__PlayOpening_b__0__, v10, v11);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass358_0_TypeInfo, v12, v13);
    byte_4B11903 = 1;
  }
  v14 = (MyRoomControl___c__DisplayClass358_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass358_0_TypeInfo,
                                                    fileName,
                                                    assetPath,
                                                    isCanSkip);
  MyRoomControl___c__DisplayClass358_0___ctor(v14, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v15, v16);
  if ( !v14 )
    goto LABEL_13;
  v14->fields.player = CriMoviePlayerObject;
  p_player = &v14->fields.player;
  sub_1BCA784(&v14->fields, CriMoviePlayerObject);
  player = v14->fields.player;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20);
  if ( !byte_4B11950 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, v20, v21);
    byte_4B11950 = 1;
  }
  v24 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20);
    v24 = BgmManager_TypeInfo;
  }
  masterVolume = v24->static_fields->masterVolume;
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v26, (Il2CppObject *)v14, Method_MyRoomControl___c__DisplayClass358_0__PlayOpening_b__0__, 0LL);
  if ( !player
    || (CRIMoviePlayer__Initialize(player, fileName, assetPath, masterVolume, isCanSkip, 0LL, v26, 1, 0LL, 0, 0, 1, 0LL),
        (CriMoviePlayerObject = *p_player) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(CriMoviePlayerObject, v18);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  AssetData_o *photoCampaignAssetData; // x20
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x21
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  __int64 v22; // x1
  System_Object_array *v23; // x21
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x19

  if ( (byte_4B1193A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__ToArray__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1193A = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1BCA784(&this->fields.photoCampaignShutterEffect, 0LL);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1BCA784(&this->fields.photoCampaignCameraEffect, 0LL);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1BCA784(&this->fields.photoLayerChangeObj, 0LL);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
    AssetManager__releaseAsset_38505704(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1BCA784(&this->fields.photoCampaignAssetData, 0LL);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !v12 )
      goto LABEL_38;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1BCA784(&this->fields.photoTargetSelectDialog, 0LL);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !v12 )
      goto LABEL_38;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(v17, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1BCA784(&this->fields.photoSettingButtonComponent, 0LL);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !v12 )
      goto LABEL_38;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    UnityEngine_Object__Destroy_70154244(v20, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1BCA784(&this->fields.masterEquipSettingDialog, 0LL);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v23 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
    AssetManager__releaseAsset_38505912((AssetData_array *)v23, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1BCA784(&this->fields.masterEquipAssetData, 0LL);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    p_photoMasterTexture = &this->fields.photoMasterTexture;
    v12 = (UnityEngine_Component_o *)*p_photoMasterTexture;
    if ( *p_photoMasterTexture )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)v12, 0LL);
      *p_photoMasterTexture = 0LL;
      sub_1BCA784(p_photoMasterTexture, 0LL);
      return;
    }
LABEL_38:
    sub_1BCAA3C(v12, v11);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *asstName; // x19
  struct System_String_o **p_asstName; // x20

  if ( (byte_4B118C4 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B118C4 = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = &this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    *p_asstName = 0LL;
    sub_1BCA784(p_asstName, 0LL);
  }
}


void __fastcall MyRoomControl__ReleaseTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MyRoomControl_c *v10; // x0
  int32_t buttonFlag; // w9
  int32_t BUTTON_MULTIPLE_VIEW; // w8
  int v13; // w11
  int v14; // w8
  const MethodInfo *v15; // x1
  int32_t v16; // w9
  int32_t BUTTON_PHOTO_CAMPAIGN; // w8
  int v18; // w11
  int v19; // w8
  __int64 v20; // x1
  UIWidget_o *playBtnImg; // x0
  __int64 v22; // x20
  __int64 v23; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v25; // w20
  System_String_o *ActiveStateName; // x0
  bool v27; // w0
  MyRoomControl_c *v28; // x0
  MyRoomControl_c *v29; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B118FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_13135/*"State 5"*/, v8, v9);
    byte_4B118FF = 1;
  }
  v10 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v10 = MyRoomControl_TypeInfo;
  }
  buttonFlag = this->fields.buttonFlag;
  BUTTON_MULTIPLE_VIEW = v10->static_fields->BUTTON_MULTIPLE_VIEW;
  v13 = buttonFlag & ~BUTTON_MULTIPLE_VIEW;
  v14 = buttonFlag | BUTTON_MULTIPLE_VIEW;
  if ( this->fields.type )
    v14 = v13;
  this->fields.buttonFlag = v14;
  MyRoomControl__SetMultipleViewButtonColor(this, method);
  v16 = this->fields.buttonFlag;
  BUTTON_PHOTO_CAMPAIGN = MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN;
  v18 = v16 & ~BUTTON_PHOTO_CAMPAIGN;
  v19 = v16 | BUTTON_PHOTO_CAMPAIGN;
  if ( this->fields.type )
    v19 = v18;
  this->fields.buttonFlag = v19;
  MyRoomControl__SetPhotoCampaignButtonColor(this, v15);
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_35;
  v32.fields.r = 1.0;
  v32.fields.g = 1.0;
  v32.fields.b = 1.0;
  v32.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v32, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  if ( !playBtnImg )
    goto LABEL_35;
  v33.fields.r = 1.0;
  v33.fields.g = 1.0;
  v33.fields.b = 1.0;
  v33.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v33, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !playBtnImg )
    goto LABEL_35;
  playBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)playBtnImg, this->fields.fvrUsrSvtId, 0LL);
  if ( !playBtnImg )
    goto LABEL_35;
  v23 = *(_QWORD *)&playBtnImg->fields.mChanged;
  v22 = *(_QWORD *)&playBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v31.fields.currentCryptoKey = v23;
  *(_QWORD *)&v31.fields.fakeValue = v22;
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_35;
    v25 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v25 = (int)playBtnImg;
  }
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
    goto LABEL_35;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)playBtnImg, 0LL);
  v27 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13135/*"State 5"*/, 0LL);
  if ( v25 >= 1 && v27 )
  {
    playBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !playBtnImg )
      goto LABEL_35;
    v34.fields.r = 1.0;
    v34.fields.g = 1.0;
    v34.fields.b = 1.0;
    v34.fields.a = 1.0;
    UIWidget__set_color(playBtnImg, v34, 0LL);
    v28 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v20);
      v28 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v28->static_fields->BUTTON_LIMIT_CHANGE;
  }
  playBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !playBtnImg )
    goto LABEL_35;
  v35.fields.r = 1.0;
  v35.fields.g = 1.0;
  v35.fields.b = 1.0;
  v35.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v35, 0LL);
  v29 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v20);
    v29 = MyRoomControl_TypeInfo;
  }
  static_fields = v29->static_fields;
  playBtnImg = (UIWidget_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !playBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playBtnImg, 0, 0LL),
        (playBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_35:
    sub_1BCAA3C(playBtnImg, v20);
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
    sub_1BCAA3C(0LL, v3);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 90, 0, 0LL);
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
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  MyRoomControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  __int64 v7; // x1
  MyRoomControl_c *v8; // x0
  int v9; // w8
  __int64 v10; // x1
  MyRoomControl_c *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B118D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    this = (MyRoomControl_o *)sub_1BCA7E0(&MyRoomControl_TypeInfo, v4, v5);
    byte_4B118D4 = 1;
  }
  if ( v3->fields.isServantMaterial )
  {
    materialImageIdList = v3->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1BCAA3C(this, method);
  }
  else
  {
    materialImageIdList = v3->fields.imageIdList;
    if ( !materialImageIdList )
      goto LABEL_17;
  }
  this = (MyRoomControl_o *)v3->fields.changeBtnImg;
  if ( materialImageIdList->fields._size <= 1 )
  {
    if ( !this )
      goto LABEL_17;
    v13.fields.r = 0.5;
    v13.fields.g = 0.5;
    v13.fields.b = 0.5;
    v13.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v13, 0LL);
    v11 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v10);
      v11 = MyRoomControl_TypeInfo;
    }
    v9 = v3->fields.buttonFlag & ~v11->static_fields->BUTTON_LIMIT_CHANGE;
  }
  else
  {
    if ( !this )
      goto LABEL_17;
    v12.fields.r = 1.0;
    v12.fields.g = 1.0;
    v12.fields.b = 1.0;
    v12.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v12, 0LL);
    v8 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v7);
      v8 = MyRoomControl_TypeInfo;
    }
    v9 = v3->fields.buttonFlag | v8->static_fields->BUTTON_LIMIT_CHANGE;
  }
  v3->fields.buttonFlag = v9;
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
      sub_1BCAA44(this, isEnable);
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
    sub_1BCAA3C(this, isEnable);
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
    sub_1BCAA3C(0LL, v3);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 93, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5);
}


void __fastcall MyRoomControl__SetFacePhotoServant(
        MyRoomControl_o *this,
        ServantPhotoEntity_FaceData_o *faceData,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MyRoomControl_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  struct StandFigureBack_o *photoCampaignStandFigureBack; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  __int64 size; // x25
  unsigned __int64 v12; // x22
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v15; // w23
  int32_t v16; // w24
  System_Action_o *v17; // x3

  v6 = this;
  if ( (byte_4B11925 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, faceData, callbackFunc);
    this = (MyRoomControl_o *)sub_1BCA7E0(
                                &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                v7,
                                v8);
    byte_4B11925 = 1;
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
      v12 = 0LL;
      while ( 1 )
      {
        multiFace = faceData->fields.multiFace;
        if ( !multiFace )
          break;
        if ( v12 >= multiFace->max_length )
          goto LABEL_20;
        multiForm = faceData->fields.multiForm;
        if ( !multiForm )
          break;
        if ( v12 >= multiForm->max_length )
LABEL_20:
          sub_1BCAA44(this, faceData);
        v15 = multiFace->m_Items[v12 + 1];
        v16 = multiForm->m_Items[v12 + 1];
        this = (MyRoomControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    v12,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (MyRoomControl_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v12 )
          v17 = 0LL;
        else
          v17 = callbackFunc;
        UIStandFigureR__SetFace_41776260((UIStandFigureR_o *)this, v15, v16, v17, 0.0, 0LL);
        if ( size == ++v12 )
          return;
      }
    }
LABEL_19:
    sub_1BCAA3C(this, faceData);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  MyRoomControl___c__DisplayClass323_0_o *v19; // x21
  CommonUI_o *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **p_svtVoiceEnt; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  const MethodInfo *v29; // x1
  int32_t figureSvtId; // w23
  ServantVoiceEntity_o *v31; // x24
  int32_t Item; // w0
  const MethodInfo *v33; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x23
  const MethodInfo *v41; // x3
  System_Action_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x20
  const MethodInfo *v47; // x2

  if ( (byte_4B118F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, IsActSetMyRoomStandFigre);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass323_0__SetFavoriteSvt_b__0__, v11, v12);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass323_0__SetFavoriteSvt_b__1__, v13, v14);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass323_0__SetFavoriteSvt_b__2__, v15, v16);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass323_0_TypeInfo, v17, v18);
    byte_4B118F2 = 1;
  }
  v19 = (MyRoomControl___c__DisplayClass323_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass323_0_TypeInfo,
                                                    callback,
                                                    IsActSetMyRoomStandFigre,
                                                    method);
  MyRoomControl___c__DisplayClass323_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_13;
  v19->fields.__4__this = this;
  sub_1BCA784(&v19->fields, this);
  v19->fields.callback = callback;
  sub_1BCA784(&v19->fields.callback, callback);
  MyRoomControl__setupSvtImageIdList(this, v22);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v23);
  v19->fields.svtVoiceEnt = SvtVoiceEnt;
  p_svtVoiceEnt = &v19->fields.svtVoiceEnt;
  sub_1BCA784(&v19->fields.svtVoiceEnt, SvtVoiceEnt);
  if ( v19->fields.svtVoiceEnt )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v29);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        figureSvtId = this->fields.figureSvtId;
        v31 = *p_svtVoiceEnt;
        Item = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)Instance,
                 this->fields.figureSvtDispIdx,
                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        VoiceList = MyRoomControl__GetVoiceList(this, v31, figureSvtId, Item, v33);
        this->fields.voiceList = VoiceList;
        sub_1BCA784(&this->fields.voiceList, VoiceList);
        Instance = (CommonUI_o *)*p_svtVoiceEnt;
        if ( *p_svtVoiceEnt )
        {
          VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
          this->fields.asstName = VoiceAssetName;
          sub_1BCA784(&this->fields.asstName, VoiceAssetName);
          asstName = this->fields.asstName;
          v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
          System_Action___ctor(
            v40,
            (Il2CppObject *)v19,
            Method_MyRoomControl___c__DisplayClass323_0__SetFavoriteSvt_b__0__,
            0LL);
          MyRoomControl__voiceLoad(this, asstName, v40, v41);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(Instance, v21);
  }
  this->fields.isExistVoiceData = 0;
LABEL_10:
  v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v19,
    Method_MyRoomControl___c__DisplayClass323_0__SetFavoriteSvt_b__1__,
    0LL);
  v19->fields.action = v42;
  sub_1BCA784(&v19->fields.action, v42);
  if ( IsActSetMyRoomStandFigre )
  {
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v19,
      Method_MyRoomControl___c__DisplayClass323_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v46, v47);
  }
  else
  {
    ActionExtensions__Call(v19->fields.action, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  int32_t Id; // w23
  __int64 v18; // x1
  int32_t v19; // w22
  Il2CppObject *Master_object; // x0
  int32_t form; // w0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1193B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageId, formId);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v12, v13);
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, v14, v15);
    byte_4B1193B = 1;
  }
  entity = 0LL;
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  *imageId = Id;
  if ( imageLimitCount >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
    v19 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v19,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        form = entity->fields.form;
        goto LABEL_16;
      }
LABEL_17:
      sub_1BCAA3C(Master_object, v16);
    }
    Id = *imageId;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v16);
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
  if ( (byte_4B11910 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1BCA7E0(
                                &Method_UnityEngine_Component_GetComponent_UIPanel___,
                                *(_QWORD *)&frontIndex,
                                method);
    byte_4B11910 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&frontIndex);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetMaskCollider(MyRoomControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_1BCAA3C(0LL, flag);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MyRoomControl___c__DisplayClass243_0_o *v15; // x21
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v20; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  __int64 v22; // x1
  int32_t Item; // w23
  MyRoomControl_o *v24; // x0
  int32_t v25; // w22
  const MethodInfo *v26; // x5
  StandFigureBack_o *standFigureBack; // x23
  int32_t v28; // w20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B118D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&servantId, end_act);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__0__, v11, v12);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass243_0_TypeInfo, v13, v14);
    byte_4B118D3 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v15 = (MyRoomControl___c__DisplayClass243_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass243_0_TypeInfo,
                                                    *(_QWORD *)&servantId,
                                                    end_act,
                                                    method);
  MyRoomControl___c__DisplayClass243_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  v15->fields.__4__this = this;
  sub_1BCA784(&v15->fields, this);
  v15->fields.end_act = end_act;
  sub_1BCA784(&v15->fields.end_act, end_act);
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v18);
    MyRoomControl__SetChangeBtn(this, v20);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_13;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v22);
  materialImageIdList = (System_Collections_Generic_List_int__o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                    Item,
                                                                    0LL);
  if ( !mStateMaterial )
    goto LABEL_13;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, (int32_t)materialImageIdList, 0LL);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !materialImageIdList
    || (v24 = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                   materialImageIdList,
                                   this->fields.materialFigureSvtDispIdx,
                                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        v25 = (int)v24,
        MyRoomControl__SetImageIdAndFormId(v24, formId, &formId[1], servantId, (int32_t)v24, v26),
        standFigureBack = this->fields.standFigureBack,
        v28 = formId[1],
        v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v15,
          Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__0__,
          0LL),
        !standFigureBack) )
  {
LABEL_13:
    sub_1BCAA3C(materialImageIdList, v17);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, v25, 1, 0, v28, 10, v32, 0, 0LL);
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
    sub_1BCAA3C(multipleViewButtonSprite, v3);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  MyRoomControl___c__DisplayClass241_0_o *v14; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  bool _38402052; // w8
  MyRoomControl_o *Item; // x0
  int32_t v21; // w21
  const MethodInfo *v22; // x5
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w23
  int32_t v25; // w19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B118D1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__0__, v10, v11);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass241_0_TypeInfo, v12, v13);
    byte_4B118D1 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v14 = (MyRoomControl___c__DisplayClass241_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass241_0_TypeInfo,
                                                    end_act,
                                                    method,
                                                    v3);
  MyRoomControl___c__DisplayClass241_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  v14->fields.__4__this = this;
  sub_1BCA784(&v14->fields, this);
  v14->fields.end_act = end_act;
  sub_1BCA784(&v14->fields.end_act, end_act);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, v14->fields.end_act, v18);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v17);
  _38402052 = TutorialFlag__Get_38402052(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _38402052;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_11;
  Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                              imageIdList,
                              this->fields.figureSvtDispIdx,
                              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  v21 = (int)Item;
  MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], this->fields.figureSvtId, (int32_t)Item, v22);
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v25 = formId[1];
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v14,
    Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_11:
    sub_1BCAA3C(imageIdList, v16);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v21, 1, 0, v25, 10, v29, 0, 0LL);
}


void __fastcall MyRoomControl__SetMySvtFigure(
        MyRoomControl_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  MyRoomControl___c__DisplayClass242_0_o *v14; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v16; // x1
  int32_t materialServantId; // w21
  __int64 v18; // x1
  int32_t Item; // w22
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x2

  if ( (byte_4B118D2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass242_0__SetMySvtFigure_b__0__, v10, v11);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass242_0_TypeInfo, v12, v13);
    byte_4B118D2 = 1;
  }
  v14 = (MyRoomControl___c__DisplayClass242_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass242_0_TypeInfo,
                                                    end_act,
                                                    method,
                                                    v3);
  MyRoomControl___c__DisplayClass242_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.__4__this = this,
        sub_1BCA784(&v14->fields, this),
        v14->fields.end_act = end_act,
        sub_1BCA784(&v14->fields.end_act, end_act),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1BCAA3C(materialImageIdList, v16);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v18);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v20);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v14,
    Method_MyRoomControl___c__DisplayClass242_0__SetMySvtFigure_b__0__,
    0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v24, v25);
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
    sub_1BCAA3C(photoCampaignButtonSprite, v3);
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
    sub_1BCAA3C(photoCampaignAtlas, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  Il2CppObject *photoCampaignCameraEffect; // x20
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21

  if ( (byte_4B11933 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, isActive, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B11933 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      v11 = UnityEngine_Object__Instantiate_object__49903816(
              photoCampaignCameraEffect,
              transform,
              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v11;
      sub_1BCA784(&this->fields.photoCampaignInstantiateCameraEffect, v11);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1BCAA3C(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  UnityEngine_Object__Destroy_70154244(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1BCA784(&this->fields.photoCampaignInstantiateCameraEffect, 0LL);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
}


void __fastcall MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v11; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x20
  UITweener_o *v15; // x20
  UITweener_o *v16; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4B118DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B118DC = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v14 = (UnityEngine_Transform_o *)voicePlayEffect;
    if ( !byte_4B109C6 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v13);
      byte_4B109C6 = 1;
    }
    if ( !v14
      || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v15 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v15)
      || (v16 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v15, 0.0, 0LL), !v16) )
    {
LABEL_21:
      sub_1BCAA3C(voicePlayEffect, v11);
    }
    UITweener__set_tweenFactor(v16, 0.0, 0LL);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      v15->fields.style = 1;
      v16->fields.style = 1;
    }
    else
    {
      v15->fields.style = 0;
      v16->fields.style = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_47527264(v15, 1, 0LL);
    UITweener__Play_47527264(v16, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetRandomFaceListIndex(MyRoomControl_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *photoCampaignFaceList; // x8

  photoCampaignFaceList = this->fields.photoCampaignFaceList;
  if ( !photoCampaignFaceList )
    sub_1BCAA3C(this, method);
  this->fields.photoCampaignFaceListIndex = UnityEngine_Random__Range_70113984(
                                              0,
                                              photoCampaignFaceList->max_length,
                                              0LL);
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  this->fields.sceneJumpInfo = info;
  sub_1BCA784(&this->fields.sceneJumpInfo, info);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, v3);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BCAA3C(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B118C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state, method);
    byte_4B118C9 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4B118BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B118BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId((MyRoomAddMaster_o *)Instance, -1, 0LL),
        !this->fields.frontObjectManager) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  v8 = (int)Instance;
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
  int32_t v3; // w20
  MyRoomControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v28; // w9
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v30; // x2
  MyRoomControl_o *v31; // x21
  int32_t v32; // w22
  int32_t ImageLimitCount; // w23
  int32_t v34; // w23
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MyRoomControl_o *v39; // x21
  unsigned __int64 v40; // x22
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x1
  int32_t LimitCount; // w21
  System_Collections_Generic_List_int__o *v46; // x8
  int v47; // w20
  int32_t v48; // w21

  v3 = servantId;
  v4 = this;
  if ( (byte_4B118BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v21, v22);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v23, v24);
    this = (MyRoomControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B118BF = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  v4->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_43;
  v28 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v28;
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v31 = this;
  if ( ((__int64)this->fields.myRoomListCtr & 0x80000000) == 0 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&servantId);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v3, v32, 0LL);
      this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this )
        break;
      this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                  (ServantLimitImageMaster_o *)this,
                                  v3,
                                  ImageLimitCount,
                                  0LL);
      if ( !v4->fields.materialImageIdList )
        break;
      v34 = (int)this;
      this = (MyRoomControl_o *)System_Collections_Generic_List_int___Contains(
                                  v4->fields.materialImageIdList,
                                  (int32_t)this,
                                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          break;
        v35 = *(_QWORD *)&this->fields.m_CachedPtr;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v35 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v34,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v35 + 4 * m_CancellationTokenSource_low + 32) = v34;
        }
      }
      if ( ++v32 > SLODWORD(v31->fields.myRoomListCtr) )
        goto LABEL_22;
    }
LABEL_43:
    sub_1BCAA3C(this, *(_QWORD *)&servantId);
  }
LABEL_22:
  this = (MyRoomControl_o *)MyRoomControl__GetSortedCostumeIds(this, v3, v30);
  if ( !this )
    goto LABEL_43;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v39 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v40 = 0LL;
    do
    {
      if ( v40 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(this, *(_QWORD *)&servantId);
      *(_QWORD *)&servantId = *((unsigned int *)&v39->fields.myRoomData + v40);
      if ( servantId >= 1 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          goto LABEL_43;
        v41 = *(_QWORD *)&this->fields.m_CachedPtr;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v41 )
          goto LABEL_43;
        v43 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            servantId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v43 + 1;
          *(_DWORD *)(v41 + 4 * v43 + 32) = servantId;
        }
      }
      LODWORD(m_CancellationTokenSource) = v39->fields.m_CancellationTokenSource;
    }
    while ( (__int64)++v40 < (int)m_CancellationTokenSource );
  }
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, *(_QWORD *)&servantId);
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(v3, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)this,
                              v3,
                              LimitCount,
                              0LL);
  v46 = v4->fields.materialImageIdList;
  if ( !v46 )
    goto LABEL_43;
  v47 = (int)this;
  v48 = 0;
  while ( v48 < v46->fields._size )
  {
    this = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                v46,
                                v48,
                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)this == v47 )
    {
      v4->fields.materialFigureSvtDispIdx = v48;
      return;
    }
    v46 = v4->fields.materialImageIdList;
    ++v48;
    if ( !v46 )
      goto LABEL_43;
  }
}


void __fastcall MyRoomControl__ShowContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1BCAA3C(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Gesture_EventHandler_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B118C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Gesture_EventHandler_TypeInfo, method, v2);
    sub_1BCA7E0(&FingerGestures_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v7, v8);
    byte_4B118C5 = 1;
  }
  v9 = (Gesture_EventHandler_o *)sub_1BCAA2C(Gesture_EventHandler_TypeInfo, method, v2, v3);
  Gesture_EventHandler___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo, v10);
  FingerGestures__add_OnGestureEvent(v9, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__StartCameraEffect(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__StartCameraEffect_d__412_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B11929 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__StartCameraEffect_d__412_TypeInfo, method, v2);
    byte_4B11929 = 1;
  }
  v5 = (MyRoomControl__StartCameraEffect_d__412_o *)sub_1BCAA2C(
                                                      MyRoomControl__StartCameraEffect_d__412_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  MyRoomControl__StartCameraEffect_d__412___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  v5->fields.__4__this = this;
  sub_1BCA784(&v5->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B118C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MyRoomControl__update__, method, v2);
    byte_4B118C7 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_MyRoomControl__update__);
  if ( this->fields.isEnableMultipleView )
    MyRoomControl__UpdateMutipleViewRemainTime(this, method);
  if ( this->fields.isEnablePhotoCampaign )
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, method);
}


void __fastcall MyRoomControl__UpdateMutipleViewRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x0
  __int64 v7; // x1
  UILabel_o *multipleViewButtonRemainTimeLabel; // x21
  int64_t multipleViewFinishedTime; // x22
  int64_t v10; // x20
  System_String_o *RestTime6; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B11917 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B11917 = 1;
  }
  if ( (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    Time = NetworkManager__getTime(0LL);
    multipleViewButtonRemainTimeLabel = this->fields.multipleViewButtonRemainTimeLabel;
    multipleViewFinishedTime = this->fields.multipleViewFinishedTime;
    v10 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v10, 0LL);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_1BCAA3C(RestTime6, v12);
    UILabel__set_text(multipleViewButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v10 > this->fields.multipleViewFinishedTime )
    {
      this->fields.multipleViewFinishedTime = -1LL;
      MyRoomControl__SetMultipleViewButtonColor(this, v13);
    }
  }
}


void __fastcall MyRoomControl__UpdatePhotoCampaignRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x0
  __int64 v7; // x1
  UILabel_o *photoCampaignButtonRemainTimeLabel; // x21
  int64_t photoCampaignFinishedTime; // x22
  int64_t v10; // x20
  System_String_o *RestTime6; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B11932 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B11932 = 1;
  }
  if ( (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    Time = NetworkManager__getTime(0LL);
    photoCampaignButtonRemainTimeLabel = this->fields.photoCampaignButtonRemainTimeLabel;
    photoCampaignFinishedTime = this->fields.photoCampaignFinishedTime;
    v10 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v10, 0LL);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_1BCAA3C(RestTime6, v12);
    UILabel__set_text(photoCampaignButtonRemainTimeLabel, RestTime6, 0LL);
    if ( v10 > this->fields.photoCampaignFinishedTime )
    {
      this->fields.photoCampaignFinishedTime = -1LL;
      MyRoomControl__SetPhotoCampaignButtonColor(this, v13);
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
    sub_1BCAA3C(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__318_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B11945 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11945 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___ChangeMasterSetting_b__425_0(
        MyRoomControl_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MyRoomControl___c__DisplayClass425_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x20

  if ( (byte_4B1194B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&equipId, *(_QWORD *)&genderType);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass425_0__ChangeMasterSetting_b__1__, v11, v12);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass425_0_TypeInfo, v13, v14);
    byte_4B1194B = 1;
  }
  v15 = (MyRoomControl___c__DisplayClass425_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass425_0_TypeInfo,
                                                    *(_QWORD *)&equipId,
                                                    *(_QWORD *)&genderType,
                                                    method);
  MyRoomControl___c__DisplayClass425_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.__4__this = this;
  sub_1BCA784(&v15->fields.__4__this, this);
  v15->fields.genderType = genderType;
  v15->fields.equipId = equipId;
  this->fields.photoMasterEquipId = equipId;
  this->fields.photoMasterGenderType = genderType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass425_0__ChangeMasterSetting_b__1__,
    0LL);
  if ( !v23 )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  CommonUI__maskFadeout(v23, 1, DEFAULT_FADE_TIME, v25, 0LL);
}


void __fastcall MyRoomControl___ChangeMasterSetting_b__425_2(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *photoMasterTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v8; // x1
  CommonUI_o *v9; // x19
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1194C & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B1194C = 1;
  }
  photoMasterTexture = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
  if ( !photoMasterTexture )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(photoMasterTexture, 0LL);
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(this, v8);
  GameObjectExtensions__SetLocalPosition(gameObject, PhotoCampaignMasterPosition, 0LL);
  photoMasterTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)photoMasterTexture;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v9 )
LABEL_8:
    sub_1BCAA3C(photoMasterTexture, method);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__385_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11948 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__CloseMultipleView_b__385_1__, v5, v6);
    byte_4B11948 = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__385_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1BCAA3C(v9, v10);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v8, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__385_1(MyRoomControl_o *this, const MethodInfo *method)
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
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 41, 0, 0LL);
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
      sub_1BCAA44(titleInfo, method);
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
    sub_1BCAA3C(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__419_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1194A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__ClosePhotoCampaignPanel_b__419_1__, v5, v6);
    byte_4B1194A = 1;
  }
  photoCampaignComponent = this->fields.photoCampaignComponent;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__ClosePhotoCampaignPanel_b__419_1__, 0LL);
  if ( !photoCampaignComponent )
    sub_1BCAA3C(v9, v10);
  PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v8, 0LL);
}


void __fastcall MyRoomControl___ClosePhotoCampaignPanel_b__419_1(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 41, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__FrameIn(titleInfo, 1, 0LL),
        MyRoomControl__DispDefaultMyRoom(this, 1, 0LL, 0, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.photoCampaignStandFigureBack) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, method);
  }
  StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0LL);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v6);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__291_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BCAA3C(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___EndLoadPhotoAsset_b__398_0(
        MyRoomControl_o *this,
        int32_t photoType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x4

  if ( (byte_4B11949 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&photoType, method);
    sub_1BCA7E0(&Method_MyRoomControl__EndLoadPhotoAsset_b__398_1__, v6, v7);
    byte_4B11949 = 1;
  }
  this->fields.photoCampaignType = photoType;
  this->fields._IsOnlyServant_k__BackingField = photoType == 0;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&photoType, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__398_1__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v8, 1, v9);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__398_1(MyRoomControl_o *this, const MethodInfo *method)
{
  PhotoCampaignComponent_o *photoCampaignComponent; // x8

  photoCampaignComponent = this->fields.photoCampaignComponent;
  this->fields.photoCampaignState = 1;
  if ( !photoCampaignComponent )
    sub_1BCAA3C(this, method);
  PhotoCampaignComponent__Open(
    photoCampaignComponent,
    this->fields.photoCampaignType,
    this->fields.photoMasterEquipId,
    this->fields.photoMasterGenderType,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___GoToTitle_b__330_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *Instance; // x0
  __int64 v13; // x1
  MyRoomControl_o *v14; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  Il2CppObject *v18; // x19
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x20
  Il2CppObject *v22; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4B11947 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl___c__GoToTitle_b__330_1__, v8, v9);
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v10, v11);
    byte_4B11947 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v14, v15);
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
      v19 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo, v13);
      Instance = MyRoomControl___c_TypeInfo;
    }
    v21 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 40LL);
    if ( !v21 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v13);
        Instance = MyRoomControl___c_TypeInfo;
      }
      v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v16, v17);
      System_Action___ctor(v21, v22, Method_MyRoomControl___c__GoToTitle_b__330_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__330_1 = v21;
      Instance = (void *)sub_1BCA784(&static_fields->__9__330_1, v21);
    }
    if ( v18 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v18, 1, DEFAULT_FADE_TIME, v21, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(Instance, v13);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__288_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BCAA3C(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__266_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t mState; // w8
  StandFigureBack_o *standFigureBack; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  StandFigureBack_o *SvtStandFigure; // x0
  unsigned int localPosition; // s0
  float v17; // s8
  float v18; // s1
  float v19; // s9
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11943 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__LoadServantForm_b__266_1__, v5, v6);
    sub_1BCA7E0(&StringLiteral_8578/*"LoadServantFormEnd"*/, v7, v8);
    byte_4B11943 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v3);
    standFigureBack = this->fields.standFigureBack;
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__266_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v14, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(SvtStandFigure, method);
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
  v17 = *(float *)&localPosition;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)SvtStandFigure,
                                           0LL);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v19 = v18;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0LL);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0LL);
  v21.fields.x = -v17;
  v21.fields.y = v19;
  MyRoomControl__moveControl(this, this->fields.svtObj, v21, (System_String_o *)StringLiteral_8578/*"LoadServantFormEnd"*/, v20);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__371_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1BCAA3C(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, 0LL);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__317_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B11944 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11944 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__322_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11946 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3623/*"CLOSE_MENU"*/, method, v2);
    byte_4B11946 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3623/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__249_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11942 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7276/*"HIDE_END"*/, method, v2);
    byte_4B11942 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7276/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__286_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BCAA3C(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__240_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v7; // x8

  if ( (byte_4B11941 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8392/*"LOAD_END"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_8393/*"LOAD_END_TO_HELP"*/, v4, v5);
    byte_4B11941 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.type == 6 )
    v7 = (System_String_o **)&StringLiteral_8393/*"LOAD_END_TO_HELP"*/;
  else
    v7 = (System_String_o **)&StringLiteral_8392/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v7, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__222_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11940 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, result, method);
    byte_4B11940 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__callbackChangeName(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MyRoomControl_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 *v9; // x8

  v4 = (MyRoomControl_o **)this;
  if ( (byte_4B118E5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, result, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    this = (MyRoomControl_o *)sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v7, v8);
    byte_4B118E5 = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v9 = &StringLiteral_11195/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCAA3C(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v9 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4B118F6 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B118F6 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1BCAA3C(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *svtCtr; // x0

  svtCtr = (StandFigureBack_o *)this->fields.svtCtr;
  if ( !svtCtr
    || (svtCtr->fields.baseCallbackFunc = 0LL,
        sub_1BCA784(&svtCtr->fields.baseCallbackFunc, 0LL),
        (svtCtr = this->fields.standFigureBack) == 0LL) )
  {
    sub_1BCAA3C(svtCtr, method);
  }
  StandFigureBack__DestroyFigure(svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B118E3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11585/*"SAVE_END"*/, method, v2);
    byte_4B118E3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11585/*"SAVE_END"*/, 0LL);
}


System_String_o *__fastcall MyRoomControl__getChangeMyRoomBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  MyRoomControl_c *v11; // x0
  System_String_o *DEFAULT_BGM_NAME; // x19
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w0
  int32_t v16; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B118C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B118C1 = 1;
  }
  v11 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v1);
    v11 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v11->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !Instance )
    goto LABEL_14;
  v15 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v15 )
  {
    v16 = v15;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v16,
                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1BCAA3C(Instance, v14);
    }
  }
  return DEFAULT_BGM_NAME;
}


System_String_o *__fastcall MyRoomControl__getMyRoomBgm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_c *v4; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  SoundPlayerComponent_o *soundPlayerComp; // x8
  System_String_o *v8; // x19
  System_String_o *PlaySoundName; // x20

  if ( (byte_4B118C2 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, method, v2);
    byte_4B118C2 = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
  v5 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v4);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1BCAA3C(v5, v6);
  v8 = v5;
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
    return v8;
  else
    return PlaySoundName;
}


UIStandFigureR_o *__fastcall MyRoomControl__getSvtStandFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1BCAA3C(0LL, method);
  return StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall MyRoomControl__getSvtVoiceEnt(
        MyRoomControl_o *this,
        bool limitCntReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v27; // w8
  struct System_Collections_Generic_List_int__o *v29; // x8
  __int64 v30; // x1
  MyRoomControl_c *v31; // x0
  int v32; // w8
  __int64 v33; // x1
  MyRoomControl_c *v34; // x0
  int32_t v35; // w20
  int32_t Item; // w0
  __int64 v37; // x1
  StandFigureBack_c *v38; // x8
  int32_t v39; // w22
  int32_t LimitCountByImageLimit; // w21
  Il2CppObject *Master_object; // x0
  __int64 v42; // x1
  int32_t figureSvtId; // w19
  MyroomServantSpecialImageMaster_o *v44; // x23
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B118D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v13, v14);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StandFigureBack_TypeInfo, v19, v20);
    byte_4B118D5 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  myRoomData = (MyRoomData_o *)sub_1BCA784(&this->fields.usrData, SelfUserGame);
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
        v27 = figureSvtDispIdx + 1;
      else
        v27 = 0;
      this->fields.figureSvtDispIdx = v27;
    }
    else
    {
      v29 = this->fields.imageIdList;
      if ( !v29 )
        goto LABEL_45;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v29->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_45;
        v47.fields.r = 0.5;
        v47.fields.g = 0.5;
        v47.fields.b = 0.5;
        v47.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v47, 0LL);
        v34 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v33);
          v34 = MyRoomControl_TypeInfo;
        }
        v32 = this->fields.buttonFlag & ~v34->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_45;
        v46.fields.r = 1.0;
        v46.fields.g = 1.0;
        v46.fields.b = 1.0;
        v46.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v46, 0LL);
        v31 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v30);
          v31 = MyRoomControl_TypeInfo;
        }
        v32 = this->fields.buttonFlag | v31->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v32;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_45;
  v35 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  v38 = StandFigureBack_TypeInfo;
  v39 = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo, v37);
    v38 = StandFigureBack_TypeInfo;
  }
  LimitCountByImageLimit = v39;
  if ( v39 < v38->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v37);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v39, 0LL);
  }
  if ( v39 < 201 )
    goto LABEL_41;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  figureSvtId = this->fields.figureSvtId;
  v44 = (MyroomServantSpecialImageMaster_o *)Master_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v42);
  myRoomData = (MyRoomData_o *)ImageLimitCount__SpecialImageLimitCountToSpecialNum(v39, 0LL);
  if ( !v44 )
LABEL_45:
    sub_1BCAA3C(myRoomData, favoriteUserSvtId);
  myRoomData = (MyRoomData_o *)MyroomServantSpecialImageMaster__TryGetEntity(
                                 v44,
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
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !myRoomData )
    goto LABEL_45;
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v35, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B118DE & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B118DE = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1BCAA3C(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v9 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  __int64 v19; // x1

  if ( (byte_4B118F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_EndTurorialRequest__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v12, v13);
    byte_4B118F9 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(helpListViewManager, v14);
  }
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(v18, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v18,
                                                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_1BCAA3C(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_4B118F1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__hideFavoriteSvt_b__322_0__, v5, v6);
    byte_4B118F1 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__322_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v7, 1, v8);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1BCAA3C(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1BCAA3C(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1BCAA3C(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B118F3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3623/*"CLOSE_MENU"*/, method, v2);
    byte_4B118F3 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3623/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4B118F4 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B118F4 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1BCAA3C(soundPlayerComp, method);
  }
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0LL);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0LL) )
  {
    MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v6);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
    SoundManager__playBgm(MyRoomBgm, 0LL);
  }
}


void __fastcall MyRoomControl__hideSvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v9; // x1
  MyRoomControl_c *v10; // x0
  StandFigureBack_o *standFigureBack; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B118D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__hideSvtFigure_b__249_0__, v4, v5);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v6, v7);
    byte_4B118D8 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v16.fields.r = 0.5;
  v16.fields.g = 0.5;
  v16.fields.b = 0.5;
  v16.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v16, 0LL);
  v10 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v9);
    v10 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v10->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v9);
  standFigureBack = this->fields.standFigureBack;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__249_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1BCAA3C(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v15, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(usrItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__initMaterial(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__initMaterial_d__286_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B118E9 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__initMaterial_d__286_TypeInfo, method, v2);
    byte_4B118E9 = 1;
  }
  v5 = (MyRoomControl__initMaterial_d__286_o *)sub_1BCAA2C(MyRoomControl__initMaterial_d__286_TypeInfo, method, v2, v3);
  MyRoomControl__initMaterial_d__286___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  v5->fields.__4__this = this;
  sub_1BCA784(&v5->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__initMyRoom(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 standFigureBack; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x3
  CStateManager_T__o *v55; // x21
  CStateManager_T__o *mFSM; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  MyRoomControl_StateEtc_o *v60; // x21
  Il2CppObject *MasterData_object; // x0
  struct EventMaster_o **p_eventMaster; // x20
  const MethodInfo *v63; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v68; // x22
  Il2CppObject *v69; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  _BOOL8 v71; // x0
  const MethodInfo *v72; // x4
  MyRoomControl_o *v73; // x0
  const MethodInfo *v74; // x4
  __int64 v75; // x1
  __int64 v76; // x2
  MyRoomParamsManager_c *v77; // x0
  struct MyRoomParamsManager_StaticFields *v78; // x8
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  __int64 v81; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Action_o *v87; // x22
  const MethodInfo *v88; // x1
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v92; // x1
  System_Collections_IEnumerator_o *inited; // x0
  __int64 v94; // x1
  UISprite_o *changeServantListBtnSprite; // x21
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v97; // x21
  int max_length; // w9
  __int64 v99; // x1
  int v100; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x1
  __int64 v106; // x1
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v110; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  System_Collections_Generic_List_object__o *v115; // x22
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Collections_Generic_Dictionary_int__object__o *v119; // x22
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  System_Collections_Generic_Dictionary_int__object__o *v123; // x22
  __int64 v124; // x1
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v126; // x1
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x1
  UnityEngine_Vector3_o v129; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B118BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CStateManager_MyRoomControl___ctor__, v6, v7);
    sub_1BCA7E0(&Method_CStateManager_MyRoomControl__add__, v8, v9);
    sub_1BCA7E0(&CStateManager_MyRoomControl__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetData__TypeInfo, v26, v27);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_MyRoomControl_LoadScriptFileListAssetData__, v30, v31);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&SoundManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&MyRoomControl_StateEtc_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_MyRoomControl___c__initMyRoom_b__217_0__, v40, v41);
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v42, v43);
    sub_1BCA7E0(&StringLiteral_10502/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_8909/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v50, v51);
    byte_4B118BC = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v129.fields.z = 0.0;
  *(_QWORD *)&v129.fields.x = 0LL;
  standFigureBack = (__int64)this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (__int64)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_52;
  }
  if ( !this->fields.mFSM )
  {
    v55 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_MyRoomControl__TypeInfo, method, v53, v54);
    CStateManager_object____ctor(
      v55,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_313FBC4 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v55;
    sub_1BCA784(&this->fields.mFSM, v55);
    standFigureBack = (__int64)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_52;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_313FC6C *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v60 = (MyRoomControl_StateEtc_o *)sub_1BCAA2C(MyRoomControl_StateEtc_TypeInfo, v57, v58, v59);
    MyRoomControl_StateEtc___ctor(v60, 0LL);
    if ( !mFSM )
      goto LABEL_52;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v60,
      (const MethodInfo_313FC6C *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v53);
  standFigureBack = (__int64)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (__int64)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_52;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)standFigureBack,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)MasterData_object;
  sub_1BCA784(&this->fields.eventMaster, MasterData_object);
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
  MyRoomControl__setUserStInfoView(this, v63);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(mMainObj, LocalPosition, 0LL);
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo, method);
    standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
  }
  v68 = *(System_Action_o **)(*(_QWORD *)(standFigureBack + 184) + 8LL);
  if ( !v68 )
  {
    if ( !*(_DWORD *)(standFigureBack + 224) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack, method);
      standFigureBack = (__int64)MyRoomControl___c_TypeInfo;
    }
    v69 = **(Il2CppObject ***)(standFigureBack + 184);
    v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v65, v66);
    System_Action___ctor(v68, v69, Method_MyRoomControl___c__initMyRoom_b__217_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__217_0 = v68;
    standFigureBack = sub_1BCA784(&static_fields->__9__217_0, v68);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_52;
  v71 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v68, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v71,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v72);
  MyRoomControl__setupSortWindowUIMoveData(v73, this->fields.sortWindowObj, &v, &v129, v74);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v75);
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_4B1194E )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v76);
    byte_4B1194E = 1;
  }
  v77 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v77 = MyRoomParamsManager_TypeInfo;
  }
  v78 = v77->static_fields;
  standFigureBack = (__int64)this->fields.soundPlayerComp;
  this->fields.IsListActive = v78->_IsListActive_k__BackingField;
  if ( !standFigureBack )
    goto LABEL_52;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v79);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v80);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v81);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v84, v85, v86);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_52;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v87, 0LL);
  MyRoomControl__setupSvtImageIdList(this, v88);
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
  v134 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v134;
  v135 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v135;
  v136 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (__int64)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v136;
  if ( !standFigureBack )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v92);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v94);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17649/*"btn_bg_12"*/, 0LL);
  standFigureBack = (__int64)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_52;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)standFigureBack + 840LL))(
    standFigureBack,
    *(_QWORD *)(*(_QWORD *)standFigureBack + 848LL));
  v137 = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  this->fields.eventButtonInitPos = v137;
  if ( !multipleStandFigureBacks )
    goto LABEL_52;
  v97 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v97 >= max_length )
      break;
    if ( (unsigned int)v97 >= max_length )
      goto LABEL_84;
    standFigureBack = (__int64)multipleStandFigureBacks->m_Items[v97];
    if ( standFigureBack )
    {
      StandFigureBack__Init((StandFigureBack_o *)standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v97;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99);
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)standFigureBack, 0LL)) == 0
    || (v100 = *(_DWORD *)(standFigureBack + 24),
        standFigureBack = (__int64)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = v100 > 1,
        !standFigureBack) )
  {
LABEL_52:
    sub_1BCAA3C(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8909/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_52;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (__int64)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_52;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v103);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v104);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v105);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v106);
  standFigureBack = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
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
      sub_1BCAA44(standFigureBack, method);
    v110 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v110;
    sub_1BCA784(&this->fields.photoCampaignEntity, v110);
    v115 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_AssetData__TypeInfo,
                                                          v112,
                                                          v113,
                                                          v114);
    System_Collections_Generic_List_object____ctor(
      v115,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v115;
    sub_1BCA784(&this->fields.masterEquipAssetData, v115);
    v119 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo,
                                                                     v116,
                                                                     v117,
                                                                     v118);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v119,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v119;
    sub_1BCA784(&this->fields.masterMaleEquipTexture, v119);
    v123 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo,
                                                                     v120,
                                                                     v121,
                                                                     v122);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v123,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v123;
    sub_1BCA784(&this->fields.masterFemaleEquipTexture, v123);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124);
    standFigureBack = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10502/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
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
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v126);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v127);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v128);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_1BCAA3C(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1BCA784(&v8->fields.eventReceiver, gameObject);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1BCA784(&v8->fields.callWhenFinished, callwhenFinished);
  }
  v8->fields.method = 3;
}


void __fastcall MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MyRoomControl_c *v6; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  _QWORD *v8; // x0
  int v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4B118F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_onClickHelp__, method, v2);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v4, v5);
    byte_4B118F7 = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v6 = MyRoomControl_TypeInfo;
  }
  static_fields = v6->static_fields;
  v8 = Method_MyRoomControl_onClickHelp__;
  v9 = this->fields.buttonFlag & static_fields->BUTTON_HELP;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_onClickHelp__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( v9 <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( this->fields.isServantMaterial )
    {
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 61, 0LL, 0LL);
    }
    else
    {
      helpListViewManager = this->fields.helpListViewManager;
      if ( !helpListViewManager )
        sub_1BCAA3C(0LL, v11);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
    }
  }
}


void __fastcall MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  MyRoomHelpListViewManager_CallbackFunc2_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B118F8 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl_helpClose__, v4, v5);
    sub_1BCA7E0(&Method_MyRoomControl_onClickHelpClose__, v6, v7);
    byte_4B118F8 = 1;
  }
  v8 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_onClickHelpClose__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v14 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1BCAA2C(
                                                       MyRoomHelpListViewManager_CallbackFunc2_TypeInfo,
                                                       v11,
                                                       v12,
                                                       v13);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v14, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1BCAA3C(v15, v16);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v14, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1BCAA3C(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1BCAA3C(0LL, method);
  SoundPlayerComponent__openMenu(soundPlayerComp, 0LL);
}


void __fastcall MyRoomControl__playSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t VoiceSvtId; // w0
  MyRoomSvtControl_o *v17; // x1
  int32_t v18; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v20; // x20
  int32_t FlagRequestNumber; // w0
  __int64 v22; // x1
  int32_t v23; // w20
  Il2CppObject *Request_object; // x21
  System_Int32_array_array *v25; // x22
  int m_CancellationTokenSource; // w8

  if ( (byte_4B118E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaster___, method, v2);
    sub_1BCA7E0(&int_____TypeInfo, v4, v5);
    sub_1BCA7E0(&int___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B118E1 = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v18 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_21;
    v20 = MyRoomSvtControl__playVoice(svtCtr, 0LL);
    if ( !System_String__IsNullOrEmpty(v20, 0LL) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v18, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_21;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v18, v20, 1, 0LL);
      if ( FlagRequestNumber >= 1 )
      {
        v23 = FlagRequestNumber;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
        Request_object = NetworkManager__getRequest_object_(
                           0LL,
                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v25 = (System_Int32_array_array *)sub_1BCA888(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1BCA888(int___TypeInfo, 2LL);
        if ( svtCtr )
        {
          m_CancellationTokenSource = (int)svtCtr->fields.m_CancellationTokenSource;
          v17 = svtCtr;
          if ( !m_CancellationTokenSource )
            goto LABEL_22;
          LODWORD(svtCtr->fields.fsm) = v18;
          if ( m_CancellationTokenSource == 1 )
            goto LABEL_22;
          HIDWORD(svtCtr->fields.fsm) = v23;
          if ( !v25 )
            goto LABEL_21;
          if ( !v25->max_length )
LABEL_22:
            sub_1BCAA44(svtCtr, svtCtr);
          v25->m_Items[0] = (System_Int32_array *)svtCtr;
          svtCtr = (MyRoomSvtControl_o *)sub_1BCA784(v25->m_Items, svtCtr);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, v25, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1BCAA3C(svtCtr, v17);
      }
    }
  }
}


void __fastcall MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialServantId; // w20
  __int64 v9; // x1
  int32_t Item; // w21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  v3 = this;
  if ( (byte_4B118CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, method, v2);
    this = (MyRoomControl_o *)sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v4, v5);
    byte_4B118CC = 1;
  }
  MyRoomControl__shutdown(this, method);
  if ( v3->fields.isServantMaterial )
  {
    materialImageIdList = v3->fields.materialImageIdList;
    v3->fields.isServantMaterial = 0;
    if ( !materialImageIdList )
      goto LABEL_17;
    materialServantId = v3->fields.materialServantId;
    Item = System_Collections_Generic_List_int___get_Item(
             materialImageIdList,
             v3->fields.materialFigureSvtDispIdx,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v9);
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
    MaterialServantLimitCountManager__WriteData(0LL);
  }
  materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.soundPlayerComp;
  if ( !materialImageIdList )
    goto LABEL_17;
  SoundPlayerComponent__DestroyMenu((SoundPlayerComponent_o *)materialImageIdList, 0LL);
  MyRoomControl__ReleaseSvtVoiceData(v3, v11);
  MyRoomControl__destroySvtFigure(v3, v12);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.backGroundManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)materialImageIdList, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.mMaterialEventLogListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MaterialEventLogListViewManager__DestroyList((MaterialEventLogListViewManager_o *)materialImageIdList, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.helpListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)materialImageIdList, 0LL);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.helpListViewManager;
  if ( !materialImageIdList
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)materialImageIdList, 0LL),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.frontObjectManager) == 0LL)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)materialImageIdList, 0LL),
        MyRoomControl__ReleasePhotoAsset(v3, v13),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.MaterialEventLogItemListPanel) == 0LL)
    || (((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
          materialImageIdList,
          materialImageIdList->klass->vtable._9_unknown.methodPtr,
          1.0),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v3->fields.valentineListObj) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(materialImageIdList, v6);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer, float))materialImageIdList->klass->vtable._8_unknown.method)(
    materialImageIdList,
    materialImageIdList->klass->vtable._9_unknown.methodPtr,
    0.0);
}


void __fastcall MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B118E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl_endReflectionGameOption__, v5, v6);
    byte_4B118E2 = 1;
  }
  optionComp = this->fields.optionComp;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1BCAA3C(v9, v10);
  SetGameOptionComponent__reflectionGameOption(optionComp, v8, 0LL);
}


void __fastcall MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *SelfUserGame; // x0
  __int64 v13; // x1
  int32_t v14; // w20
  System_String_o *Value; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x22
  __int64 v20; // x1
  Il2CppObject *Request_object; // x19

  if ( (byte_4B118E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_callbackChangeName__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4479/*"ChangeUserName"*/, v10, v11);
    byte_4B118E4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( !this->fields.myRoomFsm )
    goto LABEL_13;
  v14 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_4479/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
  NetworkManager_ResultCallbackFunc___ctor(v19, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1BCAA3C(SelfUserGame, v13);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    Value,
    v14,
    *((System_String_o **)SelfUserGame + 30),
    0LL);
}


void __fastcall MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_1BCAA3C(0LL, method);
  MstProfileComponent__showMstProfile(mstPfComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  MyRoomControl___c__DisplayClass250_0_o *v14; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  PlayMakerFSM_o **p_svtVoiceEnt; // x21
  ServantVoiceEntity_o *v20; // x22
  int32_t figureSvtId; // w23
  int32_t Item; // w0
  const MethodInfo *v23; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x3

  if ( (byte_4B118D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isReset, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass250_0__resetSvtVoiceData_b__0__, v8, v9);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass250_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8392/*"LOAD_END"*/, v12, v13);
    byte_4B118D9 = 1;
  }
  v14 = (MyRoomControl___c__DisplayClass250_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass250_0_TypeInfo,
                                                    isReset,
                                                    method,
                                                    v3);
  MyRoomControl___c__DisplayClass250_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  v14->fields.__4__this = this;
  sub_1BCA784(&v14->fields, this);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8392/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(myRoomFsm, v16);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v17);
  v14->fields.svtVoiceEnt = SvtVoiceEnt;
  p_svtVoiceEnt = (PlayMakerFSM_o **)&v14->fields.svtVoiceEnt;
  sub_1BCA784(&v14->fields.svtVoiceEnt, SvtVoiceEnt);
  v20 = v14->fields.svtVoiceEnt;
  if ( !v20 )
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
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  VoiceList = MyRoomControl__GetVoiceList(this, v20, figureSvtId, Item, v23);
  this->fields.voiceList = VoiceList;
  sub_1BCA784(&this->fields.voiceList, VoiceList);
  myRoomFsm = *p_svtVoiceEnt;
  if ( !*p_svtVoiceEnt )
    goto LABEL_13;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_1BCA784(&this->fields.asstName, VoiceAssetName);
  asstName = this->fields.asstName;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v14,
    Method_MyRoomControl___c__DisplayClass250_0__resetSvtVoiceData_b__0__,
    0LL);
  MyRoomControl__voiceLoad(this, asstName, v30, v31);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 50, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
  }
  ContinueDeviceComponent__showMenu((ContinueDeviceComponent_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setDefSvtPos(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *voicePlayBtn; // x0
  _BOOL4 isServantMaterial; // w23
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UnityEngine_GameObject_o *mMainObj; // x20
  const MethodInfo *v9; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  float v13; // s2
  UnityEngine_GameObject_o *servantListObj; // x22
  UnityEngine_GameObject_o *sortWindowObj; // x21
  float v16; // s10
  float v17; // s2
  float v18; // s11
  float v19; // s12
  float v20; // s13
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  int32_t mState; // w8
  float v24; // s1
  float v25; // s11
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11900 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_setDefSvtPos__, method, v2);
    byte_4B11900 = 1;
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
  v6 = Method_MyRoomControl_setDefSvtPos__;
  if ( (*((_BYTE *)Method_MyRoomControl_setDefSvtPos__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_setDefSvtPos__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
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
      v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      y = v28.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mMainObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      *(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      servantListObj = this->fields.servantListObj;
      if ( !servantListObj )
        goto LABEL_34;
      sortWindowObj = this->fields.sortWindowObj;
      z = v13;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v16 = v29.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(servantListObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      *(UnityEngine_Vector3_o *)(&v17 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)voicePlayBtn,
                                               0LL);
      if ( !sortWindowObj )
        goto LABEL_34;
      v18 = v17;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v19 = v30.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0LL);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
      v20 = v31.fields.z;
      v31.fields.x = -7.0;
      v31.fields.y = v16;
      v31.fields.z = v18;
      MyRoomControl__MyRoomlUIAnimationStart(this, servantListObj, v31, v21);
      v32.fields.x = 0.0;
      v32.fields.y = v19;
      v32.fields.z = v20;
      MyRoomControl__MyRoomlUIAnimationStart(this, sortWindowObj, v32, v22);
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
            *(UnityEngine_Vector3_o *)(&v24 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)voicePlayBtn,
                                                     0LL);
            voicePlayBtn = this->fields.svtObj;
            if ( voicePlayBtn )
            {
              v25 = v24;
              voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayBtn, 0LL);
              if ( voicePlayBtn )
              {
                v33 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0LL);
                v33.fields.x = -512.0;
                v33.fields.y = v25;
                MyRoomControl__moveControl(this, this->fields.svtObj, v33, 0LL, v26);
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
        sub_1BCAA3C(voicePlayBtn, method);
      }
LABEL_30:
      v34.fields.x = x;
      v34.fields.y = y;
      v34.fields.z = z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, v34, v9);
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
    sub_1BCAA3C(moveBtnObj, isDisp);
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
    sub_1BCAA3C(titleBtnCollider, isEnabled);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
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

  if ( (byte_4B118E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MyRoomControl_setMaterial__, isPlayDecideSe, method);
    byte_4B118E7 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, v5);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 55, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 60, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 56, 0, 0LL);
  this->fields.type = 12;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setMaterialMainQuestPart(
        MyRoomControl_o *this,
        int32_t titleNameParam,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, *(_QWORD *)&titleNameParam);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 57, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(v6, v7);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &v10;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v8);
}


void __fastcall MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B118D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__setMySvtFigure_b__240_0__, v5, v6);
    byte_4B118D0 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__240_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v7, v8);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_31880432(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_31880432(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialFigureSvtDispIdx; // w1
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  MyRoomControl_o *Item; // x0
  const MethodInfo *v12; // x5
  __int64 v13; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  int32_t formId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B118DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B118DD = 1;
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
                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], materialServantId, (int32_t)Item, v12);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCurrent);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.voicePlayEffect;
    if ( materialImageIdList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialImageIdList, 0, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 48, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)mstpfObj, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1BCAA3C(mstpfObj, method);
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
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(standFigureBack, isEnableMultipleView);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
  MyRoomControl__SetPhotoCampaignButtonColor(this, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomControl__setSvtFriendShipLv(MyRoomControl_o *this, int32_t hSvtId, const MethodInfo *method)
{
  MyRoomData_o *myRoomData; // x0

  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1BCAA3C(0LL, *(_QWORD *)&hSvtId);
  return MyRoomData__getSvtFriendshipLv(myRoomData, hSvtId, 0LL);
}


void __fastcall MyRoomControl__setSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *myRoomFsm; // x0
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v20; // x20
  int32_t figureSvtId; // w21
  int32_t Item; // w0
  const MethodInfo *v23; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_o *asstName; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21
  Il2CppObject *v39; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0

  if ( (byte_4B118CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_MyRoomControl_EndLoad__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_MyRoomControl___c__setSvtVoiceData_b__238_0__, v12, v13);
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_8392/*"LOAD_END"*/, v16, v17);
    byte_4B118CE = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8392/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1BCAA3C(myRoomFsm, method);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v2);
  if ( SvtVoiceEnt )
  {
    v20 = SvtVoiceEnt;
    myRoomFsm = this->fields.imageIdList;
    if ( !myRoomFsm )
      goto LABEL_22;
    figureSvtId = this->fields.figureSvtId;
    Item = System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)myRoomFsm,
             this->fields.figureSvtDispIdx,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    VoiceList = MyRoomControl__GetVoiceList(this, v20, figureSvtId, Item, v23);
    this->fields.voiceList = VoiceList;
    sub_1BCA784(&this->fields.voiceList, VoiceList);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v20, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1BCA784(&this->fields.asstName, VoiceAssetName);
    asstName = this->fields.asstName;
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v30, v31);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
        v36 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo, method);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v38 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 16LL);
      if ( !v38 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm, method);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v39 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v33, v34);
        System_Action___ctor(v38, v39, Method_MyRoomControl___c__setSvtVoiceData_b__238_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__238_0 = v38;
        myRoomFsm = (void *)sub_1BCA784(&static_fields->__9__238_0, v38);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v38, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8392/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 45, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
  }
  UserServantCoinComponent__showMenu((UserServantCoinComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setUserStInfoView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *multipleViewButton; // x0
  const MethodInfo *v5; // x1
  MyRoomControl_c *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B118E6 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl_TypeInfo, method, v2);
    byte_4B118E6 = 1;
  }
  multipleViewButton = this->fields.multipleViewButton;
  this->fields.type = 0;
  if ( !multipleViewButton )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnableMultipleView, 0LL);
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v5);
    v6 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag |= v6->static_fields->BUTTON_MULTIPLE_VIEW;
  MyRoomControl__SetMultipleViewButtonColor(this, v5);
  multipleViewButton = this->fields.photoCampaignButton;
  if ( !multipleViewButton
    || (UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnablePhotoCampaign, 0LL),
        this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN,
        MyRoomControl__SetPhotoCampaignButtonColor(this, v7),
        (multipleViewButton = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)multipleViewButton, 1, 41, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 44, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_31677560((UserItemListViewManager_o *)titleInfo, 1, 0LL);
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
  sub_1BCA784(moveTarget, materialObj);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1BCAA3C(transform, v9);
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
    sub_1BCAA3C(this, moveTarget);
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
    sub_1BCAA3C(this, moveTarget);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  *moveShowPos = localPosition;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void __fastcall MyRoomControl__setupSvtImageIdList(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  __int64 myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  __int64 favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v25; // w9
  __int64 v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  struct System_Collections_Generic_List_int__o **p_imageIdList; // x20
  int32_t v30; // w22
  __int64 v31; // x23
  __int64 v32; // x24
  __int64 v33; // x1
  int32_t figureSvtId; // w23
  int32_t ImageLimitCount; // w23
  int32_t v36; // w23
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  __int64 v42; // x22
  __int64 v43; // x23
  MyRoomControl_o *v44; // x0
  const MethodInfo *v45; // x2
  __int64 v46; // x8
  __int64 v47; // x22
  unsigned __int64 v48; // x23
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  int32_t FigureImageLimitCount; // w21
  struct System_Collections_Generic_List_int__o *v53; // x8
  int v54; // w21
  int32_t v55; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4B118BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B118BE = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  myRoomData = sub_1BCA784(&this->fields.usrData, SelfUserGame);
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
  v25 = imageIdList->fields._version + 1;
  imageIdList->fields._size = 0;
  imageIdList->fields._version = v25;
  myRoomData = (__int64)this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomData, favoriteUserSvtId, 0LL);
  if ( !myRoomData )
    goto LABEL_48;
  v26 = myRoomData;
  v28 = *(_QWORD *)(myRoomData + 80);
  v27 = *(_QWORD *)(myRoomData + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, favoriteUserSvtId);
  *(_QWORD *)&v56.fields.currentCryptoKey = v28;
  *(_QWORD *)&v56.fields.fakeValue = v27;
  p_imageIdList = &this->fields.imageIdList;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
  v30 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v26, 0LL);
  while ( 1 )
  {
    v32 = *(_QWORD *)(v26 + 96);
    v31 = *(_QWORD *)(v26 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, favoriteUserSvtId);
    *(_QWORD *)&v57.fields.currentCryptoKey = v32;
    *(_QWORD *)&v57.fields.fakeValue = v31;
    if ( v30 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v57, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v33);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v30, 0LL);
    myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)myRoomData,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)myRoomData,
                   this->fields.figureSvtId,
                   ImageLimitCount,
                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v36 = myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            myRoomData,
            (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
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
          v36,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(myRoomData + 24) = v39 + 1;
        *(_DWORD *)(v37 + 4 * v39 + 32) = v36;
      }
    }
    ++v30;
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v26, 0LL)
    || (myRoomData = UserServantEntity__isLimitCountMax((UserServantEntity_o *)v26, 0LL), (myRoomData & 1) != 0) )
  {
    v43 = *(_QWORD *)(v26 + 80);
    v42 = *(_QWORD *)(v26 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    *(_QWORD *)&v58.fields.currentCryptoKey = v43;
    *(_QWORD *)&v58.fields.fakeValue = v42;
    v44 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
    myRoomData = (__int64)MyRoomControl__GetSortedCostumeIds(v44, (int32_t)v44, v45);
    if ( myRoomData )
    {
      v46 = *(_QWORD *)(myRoomData + 24);
      v47 = myRoomData;
      if ( (int)v46 >= 1 )
      {
        v48 = 0LL;
        while ( 1 )
        {
          if ( v48 >= (unsigned int)v46 )
            sub_1BCAA44(myRoomData, favoriteUserSvtId);
          favoriteUserSvtId = *(unsigned int *)(v47 + 32 + 4 * v48);
          if ( (int)favoriteUserSvtId >= 1 )
          {
            myRoomData = (__int64)*p_imageIdList;
            if ( !*p_imageIdList )
              goto LABEL_48;
            v49 = *(_QWORD *)(myRoomData + 16);
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++*(_DWORD *)(myRoomData + 28);
            if ( !v49 )
              goto LABEL_48;
            v51 = *(int *)(myRoomData + 24);
            if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)myRoomData,
                favoriteUserSvtId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(myRoomData + 24) = v51 + 1;
              *(_DWORD *)(v49 + 4 * v51 + 32) = favoriteUserSvtId;
            }
          }
          LODWORD(v46) = *(_DWORD *)(v47 + 24);
          if ( (__int64)++v48 >= (int)v46 )
            goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
LABEL_48:
    sub_1BCAA3C(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  MyRoomControl__AddSpecialImageLimitCount(
    (MyRoomControl_o *)myRoomData,
    &this->fields.imageIdList,
    this->fields.figureSvtId,
    v41);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v26, 0, 0LL);
  myRoomData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)myRoomData,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)myRoomData,
                 this->fields.figureSvtId,
                 FigureImageLimitCount,
                 0LL);
  v53 = this->fields.imageIdList;
  if ( !v53 )
    goto LABEL_48;
  v54 = myRoomData;
  v55 = 0;
  while ( v55 < v53->fields._size )
  {
    myRoomData = System_Collections_Generic_List_int___get_Item(
                   v53,
                   v55,
                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v54 )
    {
      this->fields.figureSvtDispIdx = v55;
      return;
    }
    v53 = *p_imageIdList;
    ++v55;
    if ( !*p_imageIdList )
      goto LABEL_48;
  }
}


void __fastcall MyRoomControl__setupSvtRand(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  void *limitCountSupport; // x0
  int32_t v26; // w22
  _DWORD *v27; // x20
  __int64 IsLeave; // x0
  char *v29; // x25
  unsigned int v30; // w23
  void **v31; // x25
  void *v32; // t1
  __int64 v33; // x2
  __int64 v34; // x3
  UserServantEntity_o *v35; // x19
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  __int64 v37; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  UserServantCollectionMaster_o *v40; // x20
  int64_t userId; // x21
  __int64 v42; // x23
  __int64 v43; // x24
  __int128 v44; // q1
  _DWORD *v45; // x26
  int64_t pushUserSvtId; // x8
  int64_t v47; // x0
  __int128 v48; // q1
  int64_t v49; // x23
  int32_t v50; // w24
  int32_t v51; // w25
  int32_t v52; // w27
  int32_t v53; // w28
  bool IsLock; // w29
  char v55; // w20
  int32_t commonFlag; // w22
  int32_t battleVoice; // w26
  int32_t randomSettingOwn; // w21
  int32_t v59; // w0
  __int64 v60; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v63; // [xsp+58h] [xbp-D8h]
  int64_t v64; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_object; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4B118C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_MyRoomControl__setupSvtRand_b__222_0__, v6, v7);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&OptionManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v22, v23);
    byte_4B118C0 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1BCAA3C(limitCountSupport, v24);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v26 = *((_DWORD *)limitCountSupport + 6);
  v27 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_70113984(0, v26, 0LL);
    if ( (unsigned int)IsLeave >= v27[6] )
LABEL_35:
      sub_1BCAA44(IsLeave, v24);
    v29 = (char *)&v27[2 * (int)IsLeave];
    v30 = IsLeave;
    v32 = (void *)*((_QWORD *)v29 + 4);
    v31 = (void **)(v29 + 32);
    limitCountSupport = v32;
    if ( !v32 )
      goto LABEL_36;
    IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0LL);
    v35 = 0LL;
    if ( (IsLeave & 1) == 0 )
    {
      if ( v30 >= v27[6] )
        goto LABEL_35;
      limitCountSupport = *v31;
      if ( !*v31 )
        goto LABEL_36;
      IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0LL);
      v35 = 0LL;
      if ( (IsLeave & 1) == 0 )
      {
        if ( v30 >= v27[6] )
          goto LABEL_35;
        v35 = (UserServantEntity_o *)*v31;
      }
    }
  }
  while ( !v35 );
  v36 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v33, v34);
  NetworkManager_ResultCallbackFunc___ctor(
    v36,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__222_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v36,
                                              (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_1BCA784(&this->fields.usrData, SelfUserGame);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData )
    goto LABEL_36;
  v40 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v43 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v69.fields.currentCryptoKey = v43;
  *(_QWORD *)&v69.fields.fakeValue = v42;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
  if ( !v40 )
    goto LABEL_36;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v40, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_36;
  v44 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
  v45 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v68.fields.fakeValue = v44;
  v64 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
  v67 = v68;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v67, 0LL);
  v48 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
  v49 = v47;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v48;
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v66, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      v35->fields.imageLimitCount,
                      0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35->fields.dispLimitCount, 0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35->fields.commandCardLimitCount, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35->fields.iconLimitCount, 0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v35, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v35, 0LL);
  if ( !v45 )
    goto LABEL_36;
  v55 = (char)limitCountSupport;
  commonFlag = v45[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       v35->fields.randomLimitCount,
                       0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35->fields.randomLimitCountSupport, 0LL);
  v60 = *(_QWORD *)&v35->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v70.fields.fakeValue = *(_QWORD *)&v35->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v59;
  *(_QWORD *)&v70.fields.currentCryptoKey = v60;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
  if ( !Request_object )
    goto LABEL_36;
  CardFavoriteRequest__beginRequest(
    Request_object,
    v63,
    imageLimitCount,
    v50,
    v51,
    v52,
    v53,
    1,
    IsLock,
    v55 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v64 == v49,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B118CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B118CB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B118CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B118CA = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1BCAA3C(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_31880432(this, 1, v4);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MyRoomControl__svtVoicePlayAct_d__342_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B118FC & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl__svtVoicePlayAct_d__342_TypeInfo, item, method);
    byte_4B118FC = 1;
  }
  v6 = (MyRoomControl__svtVoicePlayAct_d__342_o *)sub_1BCAA2C(
                                                    MyRoomControl__svtVoicePlayAct_d__342_TypeInfo,
                                                    item,
                                                    method,
                                                    v3);
  MyRoomControl__svtVoicePlayAct_d__342___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  v6->fields.__4__this = this;
  sub_1BCA784(&v6->fields.__4__this, this);
  v6->fields.item = item;
  sub_1BCA784(&v6->fields.item, item);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MyRoomControl___c__DisplayClass237_0_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_c *v20; // x0
  Il2CppObject *Instance; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x22

  if ( (byte_4B118CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetName, endCallback);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass237_0__voiceLoad_b__0__, v11, v12);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass237_0_TypeInfo, v13, v14);
    byte_4B118CD = 1;
  }
  v15 = (MyRoomControl___c__DisplayClass237_0_o *)sub_1BCAA2C(
                                                    MyRoomControl___c__DisplayClass237_0_TypeInfo,
                                                    assetName,
                                                    endCallback,
                                                    method);
  MyRoomControl___c__DisplayClass237_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  v15->fields.__4__this = this;
  sub_1BCA784(&v15->fields, this);
  v15->fields.endCallback = endCallback;
  sub_1BCA784(&v15->fields.endCallback, endCallback);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  if ( !byte_4B1194F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    byte_4B1194F = 1;
  }
  v20 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    v20 = NetworkManager_TypeInfo;
  }
  if ( !v20->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
    System_Action___ctor(v25, (Il2CppObject *)v15, Method_MyRoomControl___c__DisplayClass237_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v25, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(v16, v17);
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


void __fastcall MyRoomControl__CaptureServant_d__410___ctor(
        MyRoomControl__CaptureServant_d__410_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__410__MoveNext(
        MyRoomControl__CaptureServant_d__410_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v12; // x20
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v15; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v17; // x21
  UIRect_o *height; // x0
  __int64 v19; // x1
  int v20; // w22
  int32_t activeHeight; // w0
  int32_t v22; // w26
  int32_t v23; // w23
  int v24; // w24
  int v25; // w22
  int v26; // w23
  int v27; // w8
  int v28; // w25
  int v29; // w0
  _BOOL4 IsOnlyServant_k__BackingField; // w26
  int v31; // w27
  int v32; // w24
  int v33; // w25
  int v34; // w27
  int32_t v35; // w0
  int v36; // w8
  UnityEngine_Color_array *Pixels_70041296; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  UnityEngine_Texture2D_o *v41; // x24
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  float v44; // s0
  __int64 v45; // x1
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4B11A34 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v5, v6);
    sub_1BCA7E0(&TouchEffectManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9, v10);
    byte_4B11A34 = 1;
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
      goto LABEL_35;
    v20 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRect__get_root(height, 0LL);
    if ( !height )
      goto LABEL_35;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v22 = this->fields.height;
    v23 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v24 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    if ( !v17 )
      goto LABEL_35;
    v25 = v20 * width / v23;
    v26 = v24 * v22 / (int)height;
    v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v17->klass->vtable._4_get_width.method)(
            v17,
            v17->klass->vtable._5_set_width.methodPtr)
        - v25;
    v28 = v27 >= 0 ? v27 : v27 + 1;
    v29 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v17->klass->vtable._6_get_height.method)(
            v17,
            v17->klass->vtable._7_set_height.methodPtr);
    IsOnlyServant_k__BackingField = _4__this->fields._IsOnlyServant_k__BackingField;
    v31 = v29 - v26 >= 0 ? v29 - v26 : v29 - v26 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0LL);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v32 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0LL);
    if ( !height )
      goto LABEL_35;
    v33 = v28 >> 1;
    v34 = v31 >> 1;
    v35 = UIRoot__get_activeHeight((UIRoot_o *)height, 0LL);
    v36 = IsOnlyServant_k__BackingField ? 11 : 1;
    Pixels_70041296 = UnityEngine_Texture2D__GetPixels_70041296(v17, v33, v36 * v32 / v35 + v34, v25, v26, 0LL);
    v41 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v38, v39, v40);
    UnityEngine_Texture2D___ctor_70042420(v41, v25, v26, 3, 0, 0LL);
    if ( !v41 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_70043500(v41, Pixels_70041296, 0LL);
    UnityEngine_Texture2D__Apply_70044272(v41, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v41,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v17, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v44 = 11.0;
    if ( !_4__this->fields._IsOnlyServant_k__BackingField )
      v44 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v44, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1BCAA3C(height, v19);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v45);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v12;
    sub_1BCA784(&this->fields.__2__current, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__410__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__410_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__410__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__410_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__CaptureServant_d__410_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__410__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__410_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__410__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__410_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__291___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__291__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  bool v14; // w20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Func_bool__o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  UnityEngine_WaitUntil_o *v22; // x21
  Il2CppObject **p__2__current; // x19

  if ( (byte_4B11A35 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__291_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v8, v9);
    byte_4B11A35 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1BCAA3C(Instance, v13);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v14 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v18 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v15, v16, v17);
  System_Func_bool____ctor(v18, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__291_0__, 0LL);
  v22 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v19, v20, v21);
  UnityEngine_WaitUntil___ctor(v22, v18, 0LL);
  this->fields.__2__current = (Il2CppObject *)v22;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, v22);
  *((_DWORD *)p__2__current - 2) = 1;
  return v14;
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__291__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__291__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__291__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CoWaitForConstructingRecordWithServant_d__291__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__291_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__285___ctor(
        MyRoomControl__InitMaterialOnBackground_d__285_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitMaterialOnBackground_d__285__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__285_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MyRoomControl__InitMaterialOnBackground_d__285_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  TerminalSceneComponent_c *v14; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_IEnumerator_o *v22; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct TerminalSceneComponent_o *terminal_5__2; // x8
  BackTaskAmountAdjuster_o *v26; // x20
  System_Collections_IEnumerator_o *v27; // x0

  v3 = this;
  if ( (byte_4B11A36 & 1) == 0 )
  {
    sub_1BCA7E0(&BackTaskAmountAdjuster_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v6, v7);
    this = (MyRoomControl__InitMaterialOnBackground_d__285_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B11A36 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    terminal_5__2 = v3->fields._terminal_5__2;
    v3->fields.__1__state = -1;
    if ( !terminal_5__2 )
      goto LABEL_26;
    this = (MyRoomControl__InitMaterialOnBackground_d__285_o *)terminal_5__2->fields.mTerminalMap;
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
    this = (MyRoomControl__InitMaterialOnBackground_d__285_o *)_4__this->fields.mStateMaterial;
    if ( !this )
      goto LABEL_26;
    MyRoomStateMaterial__Init((MyRoomStateMaterial_o *)this, _4__this, v2);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v12);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
      byte_4B10F83 = 1;
    }
    v14 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v12);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v14->static_fields;
    mInstance = static_fields->mInstance;
    v3->fields._terminal_5__2 = static_fields->mInstance;
    sub_1BCA784(&v3->fields._terminal_5__2, mInstance);
    v18 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__285_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v22 = QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v22;
        p__2__current = &v3->fields.__2__current;
        sub_1BCA784(p__2__current, v22);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_26:
      sub_1BCAA3C(this, method);
    }
  }
  v26 = (BackTaskAmountAdjuster_o *)sub_1BCAA2C(BackTaskAmountAdjuster_TypeInfo, v19, v20, v21);
  BackTaskAmountAdjuster___ctor(v26, 0LL);
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__285_o *)_4__this->fields.mStateMaterial;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__285_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                               (MyRoomStateMaterial_o *)this,
                                                               method);
  if ( !v26 )
    goto LABEL_26;
  v27 = BackTaskAmountAdjuster__Execute(v26, (System_Collections_IEnumerator_o *)this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v27, 0LL);
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__285__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__285_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitMaterialOnBackground_d__285__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__285_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__InitMaterialOnBackground_d__285_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__InitMaterialOnBackground_d__285__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__285_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitMaterialOnBackground_d__285__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__285_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__InitServantMenu_d__288___ctor(
        MyRoomControl__InitServantMenu_d__288_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__InitServantMenu_d__288__MoveNext(
        MyRoomControl__InitServantMenu_d__288_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  const MethodInfo *v17; // x1
  bool v18; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_bool__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  UnityEngine_WaitUntil_o *v26; // x19
  Il2CppObject **p__2__current; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  BackTaskAmountAdjuster_o *v30; // x20
  System_Collections_IEnumerator_o *v31; // x0

  if ( (byte_4B11A37 & 1) == 0 )
  {
    sub_1BCA7E0(&BackTaskAmountAdjuster_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MyRoomControl__InitServantMenu_b__288_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v12, v13);
    byte_4B11A37 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v30 = (BackTaskAmountAdjuster_o *)sub_1BCAA2C(BackTaskAmountAdjuster_TypeInfo, v17, v28, v29);
          BackTaskAmountAdjuster___ctor(v30, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v17);
          if ( !v30 )
            goto LABEL_17;
          v31 = BackTaskAmountAdjuster__Execute(v30, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v31, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(Instance, v17);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v18 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v22 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v19, v20, v21);
  System_Func_bool____ctor(v22, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__288_0__, 0LL);
  v26 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v23, v24, v25);
  UnityEngine_WaitUntil___ctor(v26, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v26;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, v26);
  *((_DWORD *)p__2__current - 2) = 1;
  return v18;
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__288__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__288_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__InitServantMenu_d__288__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__288_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__InitServantMenu_d__288_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__InitServantMenu_d__288__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__288_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__InitServantMenu_d__288__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__288_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__379___ctor(
        MyRoomControl__LoadMultipleServant_d__379_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__LoadMultipleServant_d__379__MoveNext(
        MyRoomControl__LoadMultipleServant_d__379_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  bool result; // w0
  Il2CppObject *v31; // x22
  Il2CppObject **p__8__1; // x27
  Il2CppObject *v33; // x1
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v35; // x0
  struct StandFigureBack_array *v36; // x8
  __int64 v37; // x19
  __int64 v38; // x22
  __int64 v39; // x24
  int max_length; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v42; // x8
  const MethodInfo *v43; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v46; // w20
  int32_t v47; // w23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  struct ServantScriptMultipleEntity_array *v51; // x26
  ServantScriptMultipleEntity_o *v52; // x25
  struct StandFigureBack_array *v53; // x8
  __int64 v54; // x25
  __int64 v55; // x19
  struct MyRoomControl_o *v56; // x24
  Il2CppObject *v57; // x28
  Il2CppObject **v58; // x21
  int32_t v59; // w5
  StandFigureBack_o *v60; // x26
  System_Action_o *monitor; // x27
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *v63; // x8
  __int64 v64; // x19
  int v65; // w9
  unsigned int v66; // w25
  struct StandFigureBack_array *v67; // x8
  UnityEngine_Component_o *v68; // x8
  UnityEngine_Component_o *v69; // x21
  float v70; // s2
  float v71; // s1
  float v72; // s8
  float v73; // s10
  float v74; // s9
  float v75; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v77; // x8
  float v78; // s10
  struct StandFigureBack_array *v79; // x9
  int v80; // s14
  int v81; // s15
  float v82; // s0
  float v83; // s2
  struct StandFigureBack_array *v84; // x8
  float v85; // s11
  float v86; // s12
  struct StandFigureBack_array *v87; // x8
  struct StandFigureBack_array *v88; // x8
  System_String_o *v89; // x2
  struct MyRoomControl___c__DisplayClass379_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v92; // x22
  Il2CppObject *v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Func_bool__o *v97; // x21
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  UnityEngine_WaitWhile_o *v101; // x20
  struct ServantScriptMultipleEntity_array *v102; // x8
  unsigned int v103; // w9
  ServantScriptMultipleEntity_o *v104; // x10
  ServantScriptMultipleEntity_o *v105; // x8
  Il2CppObject *v106; // x20
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  System_Func_bool__o *v110; // x21
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  UnityEngine_WaitWhile_o *v114; // x20
  __int64 v115; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-C8h]
  int32_t v117; // [xsp+24h] [xbp-BCh]
  MyRoomControl__LoadMultipleServant_d__379_o *v118; // [xsp+28h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+30h] [xbp-B0h] BYREF
  __int64 formId; // [xsp+38h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  v118 = this;
  if ( (byte_4B11A38 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantScriptMultipleEntity___TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__0__, v14, v15);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__1__, v16, v17);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__2__, v18, v19);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__3__, v20, v21);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass379_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v24, v25);
    this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA7E0(&StringLiteral_6826/*"FinishedFadeMultipleServant"*/, v26, v27);
    byte_4B11A38 = 1;
  }
  entity = 0LL;
  formId = 0LL;
  _1__state = v118->fields.__1__state;
  _4__this = v118->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      _8__1 = v118->fields.__8__1;
      v118->fields.__1__state = -1;
      if ( _8__1 )
      {
        _8__1->fields.wait = 1;
        if ( _4__this )
        {
          multipleViewComponent = _4__this->fields.multipleViewComponent;
          v92 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
          System_Action___ctor(
            v92,
            (Il2CppObject *)_8__1,
            Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__1__,
            0LL);
          if ( multipleViewComponent )
          {
            MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v92, 0LL);
            v93 = (Il2CppObject *)v118->fields.__8__1;
            v97 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v94, v95, v96);
            System_Func_bool____ctor(
              v97,
              v93,
              Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__2__,
              0LL);
            v101 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v98, v99, v100);
            UnityEngine_WaitWhile___ctor(v101, v97, 0LL);
            v118->fields.__2__current = (Il2CppObject *)v101;
            sub_1BCA784(&v118->fields.__2__current, v101);
            v118->fields.__1__state = 2;
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
      v118->fields.__1__state = -1;
      v31 = (Il2CppObject *)sub_1BCAA2C(MyRoomControl___c__DisplayClass379_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v31, 0LL);
      v118->fields.__8__1 = (struct MyRoomControl___c__DisplayClass379_0_o *)v31;
      p__8__1 = (Il2CppObject **)&v118->fields.__8__1;
      sub_1BCA784(&v118->fields.__8__1, v31);
      this = (MyRoomControl__LoadMultipleServant_d__379_o *)v118->fields.__8__1;
      if ( this )
      {
        v33 = (Il2CppObject *)v118->fields.__4__this;
        this->fields.__2__current = v33;
        this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA784(&this->fields.__2__current, v33);
        if ( _4__this )
        {
          this = (MyRoomControl__LoadMultipleServant_d__379_o *)_4__this->fields.mBlocker;
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
                v35 = sub_1BCA888(ServantScriptMultipleEntity___TypeInfo, multipleStandFigureBacks->max_length);
                v118->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v35;
                p_multipleEntities_5__2 = &v118->fields._multipleEntities_5__2;
                this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA784(
                                                                        &v118->fields._multipleEntities_5__2,
                                                                        v35);
                v36 = _4__this->fields.multipleStandFigureBacks;
                if ( v36 )
                {
                  v37 = 0LL;
                  v38 = 0LL;
                  v39 = 32LL;
                  while ( 1 )
                  {
                    max_length = v36->max_length;
                    if ( (int)v38 >= max_length )
                      break;
                    if ( (unsigned int)v38 >= max_length )
                      goto LABEL_104;
                    this = (MyRoomControl__LoadMultipleServant_d__379_o *)v36->m_Items[v38];
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
                    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
                    if ( !defaultMultipleServantPoses )
                      goto LABEL_83;
                    if ( (unsigned int)v38 >= defaultMultipleServantPoses->max_length )
                      goto LABEL_104;
                    if ( !this )
                      goto LABEL_83;
                    v42 = (float *)((char *)defaultMultipleServantPoses + v37);
                    v121.fields.z = v42[10] + 0.0;
                    v121.fields.y = v42[9] + 0.0;
                    v121.fields.x = flt_BD1CA8[(_DWORD)v38 == 0] + v42[8];
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v121, 0LL);
                    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
                    if ( !multipleServantUsrIds )
                      goto LABEL_83;
                    if ( (unsigned int)v38 >= multipleServantUsrIds->max_length )
                      goto LABEL_104;
                    if ( !_4__this->fields.myRoomData )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__379_o *)MyRoomData__getUsrSvtData(
                                                                            (MyRoomData_o *)this,
                                                                            multipleServantUsrIds->m_Items[v38],
                                                                            v43);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__379_o *)UserServantEntity__getSvtId(
                                                                            (UserServantEntity_o *)this,
                                                                            0LL);
                    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
                    if ( !multipleLimitCounts )
                      goto LABEL_83;
                    if ( (unsigned int)v38 >= multipleLimitCounts->max_length )
                      goto LABEL_104;
                    v46 = multipleLimitCounts->m_Items[v38 + 1];
                    v47 = (int)this;
                    MyRoomControl__SetImageIdAndFormId(
                      _4__this,
                      (int32_t *)&formId + 1,
                      (int32_t *)&formId,
                      (int32_t)this,
                      v46,
                      0LL);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
                    this = (MyRoomControl__LoadMultipleServant_d__379_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__379_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                                            (ServantScriptMultipleMaster_o *)this,
                                                                            &entity,
                                                                            SHIDWORD(formId),
                                                                            formId,
                                                                            v38 + 1,
                                                                            0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v51 = *p_multipleEntities_5__2;
                      if ( !*p_multipleEntities_5__2 )
                        goto LABEL_83;
                      v52 = entity;
                      if ( entity )
                      {
                        this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA91C(
                                                                                entity,
                                                                                v51->obj.klass->_1.element_class);
                        if ( !this )
                        {
                          v115 = sub_1BCAA60();
                          sub_1BCA908(v115, 0LL);
                        }
                      }
                      if ( (unsigned int)v38 >= v51->max_length )
                        goto LABEL_104;
                      v51->m_Items[v38] = v52;
                      this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA784((char *)v51 + v39, v52);
                    }
                    v53 = _4__this->fields.multipleStandFigureBacks;
                    if ( !v53 )
                      goto LABEL_83;
                    if ( (unsigned int)v38 >= v53->max_length )
                      goto LABEL_104;
                    v54 = v37;
                    v55 = v39;
                    v56 = _4__this;
                    v57 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v58 = p__8__1;
                      v59 = formId;
                      v60 = v53->m_Items[v38];
                      monitor = (System_Action_o *)v57[2].monitor;
                      if ( !monitor )
                      {
                        v117 = formId;
                        monitor = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v49, v50);
                        System_Action___ctor(
                          monitor,
                          v57,
                          Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__3__,
                          0LL);
                        v57[2].monitor = monitor;
                        this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA784(&v57[2].monitor, monitor);
                        v59 = v117;
                      }
                      if ( v60 )
                      {
                        StandFigureBack__SetMyRoomStandFigure(v60, v47, v46, 1, 0, v59, 10, monitor, 0, 0LL);
                        v36 = v56->fields.multipleStandFigureBacks;
                        _4__this = v56;
                        v39 = v55 + 8;
                        ++v38;
                        v37 = v54 + 12;
                        p__8__1 = v58;
                        if ( v36 )
                          continue;
                      }
                    }
                    goto LABEL_83;
                  }
                  this = (MyRoomControl__LoadMultipleServant_d__379_o *)sub_1BCA888(int___TypeInfo, 2LL);
                  v102 = *p_multipleEntities_5__2;
                  if ( *p_multipleEntities_5__2 )
                  {
                    v103 = v102->max_length;
                    if ( !v103 )
                      goto LABEL_104;
                    v104 = v102->m_Items[0];
                    if ( v104 )
                    {
                      if ( !this )
                        goto LABEL_83;
                      if ( !LODWORD(this->fields.__2__current) )
                        goto LABEL_104;
                      LODWORD(this->fields.__4__this) = v104->fields.depth;
                    }
                    if ( v103 <= 1 )
                      goto LABEL_104;
                    v105 = v102->m_Items[1];
                    if ( v105 )
                    {
                      if ( this )
                      {
                        if ( LODWORD(this->fields.__2__current) <= 1 )
                          goto LABEL_104;
                        HIDWORD(this->fields.__4__this) = v105->fields.depth;
LABEL_101:
                        if ( LODWORD(this->fields.__2__current) >= 2 )
                        {
                          MyRoomControl__SetLayerMultipleServant(
                            _4__this,
                            SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
                            0LL);
                          v106 = (Il2CppObject *)v118->fields.__8__1;
                          v110 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v107, v108, v109);
                          System_Func_bool____ctor(
                            v110,
                            v106,
                            Method_MyRoomControl___c__DisplayClass379_0__LoadMultipleServant_b__0__,
                            0LL);
                          v114 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(
                                                              UnityEngine_WaitWhile_TypeInfo,
                                                              v111,
                                                              v112,
                                                              v113);
                          UnityEngine_WaitWhile___ctor(v114, v110, 0LL);
                          v118->fields.__2__current = (Il2CppObject *)v114;
                          sub_1BCA784(&v118->fields.__2__current, v114);
                          result = 1;
                          v118->fields.__1__state = 1;
                          return result;
                        }
LABEL_104:
                        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
  v118->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__379_o *)_4__this->fields.titleInfo;
  if ( !this )
    goto LABEL_83;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
  titleInfo = _4__this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__379_o *)titleInfo->fields.titleImg;
  if ( !this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MyRoomControl__LoadMultipleServant_d__379_o *)_4__this->fields.multipleViewCloseButton;
  _4__this->fields.multipleViewState = 2;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v63 = _4__this->fields.multipleStandFigureBacks;
  if ( !v63 )
    goto LABEL_83;
  v64 = 4LL;
  while ( 1 )
  {
    v65 = v63->max_length;
    v66 = v64 - 4;
    if ( (int)v64 - 4 >= v65 )
      return 0;
    if ( v66 >= v65 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__379_o *)*((_QWORD *)&v63->obj.klass + v64);
    if ( !this )
      goto LABEL_83;
    this = (MyRoomControl__LoadMultipleServant_d__379_o *)StandFigureBack__GetSvtStandFigure(
                                                            (StandFigureBack_o *)this,
                                                            0,
                                                            0LL);
    if ( !this )
      goto LABEL_83;
    v67 = _4__this->fields.multipleStandFigureBacks;
    if ( !v67 )
      goto LABEL_83;
    if ( v66 >= v67->max_length )
      goto LABEL_104;
    v68 = (UnityEngine_Component_o *)*((_QWORD *)&v67->obj.klass + v64);
    if ( !v68 )
      goto LABEL_83;
    v69 = (UnityEngine_Component_o *)this->fields.__4__this;
    this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_transform(v68, 0LL);
    if ( !this )
      goto LABEL_83;
    *(UnityEngine_Vector3_o *)(&v70 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v72 = v71;
    v73 = (_DWORD)v64 == 4 ? -256.0 : 256.0;
    if ( !v69 )
      goto LABEL_83;
    v74 = v70;
    this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_transform(v69, 0LL);
    if ( !this )
      goto LABEL_83;
    LODWORD(v75) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    multipleEntities_5__2 = v118->fields._multipleEntities_5__2;
    if ( !multipleEntities_5__2 )
      goto LABEL_83;
    if ( v66 >= multipleEntities_5__2->max_length )
      goto LABEL_104;
    v77 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v64);
    v78 = v73 - v75;
    if ( v77 )
    {
      v79 = _4__this->fields.multipleStandFigureBacks;
      if ( !v79 )
        goto LABEL_83;
      if ( v66 >= v79->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__379_o *)*((_QWORD *)&v79->obj.klass + v64);
      if ( !this )
        goto LABEL_83;
      v80 = *(_DWORD *)(v77 + 28);
      v81 = *(_DWORD *)(v77 + 32);
      this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v84 = _4__this->fields.multipleStandFigureBacks;
      if ( !v84 )
        goto LABEL_83;
      if ( v66 >= v84->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__379_o *)*((_QWORD *)&v84->obj.klass + v64);
      if ( !this )
        goto LABEL_83;
      v85 = v82;
      v86 = v83;
      this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      v72 = v72 + (float)v81;
      v78 = v78 + (float)v80;
      v122.fields.x = v85;
      v122.fields.y = v72;
      v122.fields.z = v86;
      v74 = v74 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v122, 0LL);
    }
    v87 = _4__this->fields.multipleStandFigureBacks;
    if ( !v87 )
      goto LABEL_83;
    if ( v66 >= v87->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__379_o *)*((_QWORD *)&v87->obj.klass + v64);
    if ( this )
    {
      this = (MyRoomControl__LoadMultipleServant_d__379_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v88 = _4__this->fields.multipleStandFigureBacks;
      if ( v88 )
      {
        v89 = v66 == v88->max_length - 1 ? (System_String_o *)StringLiteral_6826/*"FinishedFadeMultipleServant"*/ : 0LL;
        v123.fields.x = v78;
        v123.fields.y = v72;
        v123.fields.z = v74;
        MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v123, v89, 0LL);
        v63 = _4__this->fields.multipleStandFigureBacks;
        ++v64;
        if ( v63 )
          continue;
      }
    }
    goto LABEL_83;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__379__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__379_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadMultipleServant_d__379__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__379_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__LoadMultipleServant_d__379_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__379__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__379_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__379__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__379_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__401___ctor(
        MyRoomControl__LoadPhotoCampaignServant_d__401_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoCampaignServant_d__401__MoveNext(
        MyRoomControl__LoadPhotoCampaignServant_d__401_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__LoadPhotoCampaignServant_d__401_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v60; // x22
  struct MyRoomControl___c__DisplayClass401_0_o **p__8__1; // x21
  struct MyRoomControl_o *v62; // x1
  const MethodInfo *v63; // x2
  int32_t SvtId; // w0
  int32_t photoCampaignLimitCount; // w22
  int32_t v66; // w21
  int32_t photoCampaignType; // w26
  StandFigureBack_o *photoCampaignStandFigureBack; // x23
  int32_t formId_5__3; // w24
  Il2CppObject *_8__1; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_o *v74; // x25
  bool v75; // w20
  Il2CppObject *v76; // x21
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Func_bool__o *v80; // x22
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  UnityEngine_WaitWhile_o *v84; // x21
  Il2CppObject **p__2__current; // x19
  struct MyRoomControl___c__DisplayClass401_0_o *v86; // x21
  System_Action_o *v87; // x22
  Il2CppObject *v88; // x20
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Func_bool__o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  UnityEngine_WaitWhile_o *v96; // x20
  Il2CppObject **v97; // x19
  int v98; // w8
  __int64 v99; // x2
  __int64 v100; // x3
  MyRoomControl__LoadPhotoCampaignServant_d__401_o *v101; // x1
  struct ServantPhotoEntity_FaceData_array **p_photoCampaignFaceList; // x0
  struct ServantPhotoEntity_FaceData_array *v103; // x8
  __int64 photoCampaignFaceListIndex; // x9
  struct ServantPhotoEntity_FaceData_o *v105; // x1
  ServantPhotoEntity_FaceData_o *faceData_5__4; // x21
  Il2CppObject *v107; // x22
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  System_Action_o *v111; // x23
  Il2CppObject *v112; // x20
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  System_Func_bool__o *v116; // x21
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  UnityEngine_WaitWhile_o *v120; // x20
  struct ServantPhotoEntity_FaceData_o *v121; // x8
  struct System_Int32_array *multiForm; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v124; // x2
  __int64 v125; // x3
  struct MyRoomControl___c__DisplayClass401_0_o *v126; // x21
  PhotoCampaignComponent_o *photoCampaignComponent; // x20
  System_Action_o *v128; // x22
  Il2CppObject *v129; // x20
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  System_Func_bool__o *v133; // x21
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  UnityEngine_WaitWhile_o *v137; // x20
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v139; // x8
  UnityEngine_GameObject_o *v140; // x0
  UnityEngine_GameObject_o *v141; // x19
  struct StandFigureBack_o *v142; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  ServantPhotoEntity_FaceData_o *v145; // x21
  ServantPhotoEntity_FaceData_Fields *p_fields; // x24
  __int64 v147; // x0
  struct System_Int32_array **p_multiForm; // x23
  struct System_Int32_array *multiFace; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v151; // x8
  int32_t *v152; // x10
  struct System_Int32_array *v153; // x11
  __int64 v154; // x11
  MyRoomControl__LoadPhotoCampaignServant_d__401_o *v155; // x22
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  System_Collections_Generic_IEnumerable_TSource__o *photoCampaignFaceList; // x21
  MyRoomControl___c_c *v160; // x0
  System_Func_object__object__o *_9__401_4; // x22
  Il2CppObject *v162; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v164; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v165; // x0
  struct MyRoomControl___c__DisplayClass401_0_o *v166; // x8
  MyRoomControl__LoadPhotoCampaignServant_d__401_o *v167; // x21
  UIStandFigureR_o *SvtStandFigure; // x0
  Il2CppObject *v169; // x23
  UIStandFigureR_o *v170; // x20
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  System_Action_o *v174; // x22
  Il2CppObject *v175; // x20
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  System_Func_bool__o *v179; // x21
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  UnityEngine_WaitWhile_o *v183; // x20
  __int64 v185; // x0
  float scale; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B11A39 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantPhotoMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v15, v16);
    sub_1BCA7E0(&ServantPhotoEntity_FaceData___TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantPhotoEntity_FaceData_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v23, v24);
    sub_1BCA7E0(&int___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_MyRoomControl___c__LoadPhotoCampaignServant_b__401_4__, v29, v30);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__0__, v31, v32);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__10__, v33, v34);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__1__, v35, v36);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__2__, v37, v38);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__3__, v39, v40);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__5__, v41, v42);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__6__, v43, v44);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__7__, v45, v46);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__8__, v47, v48);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__9__, v49, v50);
    sub_1BCA7E0(&MyRoomControl___c__DisplayClass401_0_TypeInfo, v51, v52);
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v53, v54);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v55, v56);
    this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCA7E0(&StringLiteral_6827/*"FinishedFadePhotoServant"*/, v57, v58);
    byte_4B11A39 = 1;
  }
  entity = 0LL;
  scale = 0.0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v60 = (Il2CppObject *)sub_1BCAA2C(MyRoomControl___c__DisplayClass401_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v60, 0LL);
      v4->fields.__8__1 = (struct MyRoomControl___c__DisplayClass401_0_o *)v60;
      p__8__1 = &v4->fields.__8__1;
      sub_1BCA784(&v4->fields.__8__1, v60);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_77;
      v62 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v62;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCA784(&this->fields, v62);
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_77;
      (*p__8__1)->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      v188.fields.z = _4__this->fields.defaultPhotoServantPos.fields.z + 0.0;
      v188.fields.y = _4__this->fields.defaultPhotoServantPos.fields.y + 0.0;
      v188.fields.x = _4__this->fields.defaultPhotoServantPos.fields.x
                    + flt_BD1730[!_4__this->fields._IsMasterRight_k__BackingField];
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v188, 0LL);
      if ( !_4__this->fields.myRoomData )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)MyRoomData__getUsrSvtData(
                                                                   (MyRoomData_o *)this,
                                                                   _4__this->fields.photoCampaignServantUsrId,
                                                                   v63);
      if ( !this )
        goto LABEL_77;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
      photoCampaignLimitCount = _4__this->fields.photoCampaignLimitCount;
      v66 = SvtId;
      MyRoomControl__SetImageIdAndFormId(
        _4__this,
        &v4->fields._imageId_5__2,
        &v4->fields._formId_5__3,
        SvtId,
        photoCampaignLimitCount,
        0LL);
      photoCampaignType = _4__this->fields.photoCampaignType;
      photoCampaignStandFigureBack = _4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignServantImageId = v4->fields._imageId_5__2;
      formId_5__3 = v4->fields._formId_5__3;
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v71, v72, v73);
      System_Action___ctor(
        v74,
        _8__1,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__0__,
        0LL);
      if ( !photoCampaignStandFigureBack )
        goto LABEL_77;
      v75 = 1;
      StandFigureBack__SetMyRoomStandFigure(
        photoCampaignStandFigureBack,
        v66,
        photoCampaignLimitCount,
        1,
        0,
        formId_5__3,
        10,
        v74,
        photoCampaignType == 1,
        0LL);
      v76 = (Il2CppObject *)v4->fields.__8__1;
      v80 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v77, v78, v79);
      System_Func_bool____ctor(
        v80,
        v76,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__1__,
        0LL);
      v84 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v81, v82, v83);
      UnityEngine_WaitWhile___ctor(v84, v80, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v84;
      p__2__current = &v4->fields.__2__current;
      sub_1BCA784(p__2__current, v84);
      *((_DWORD *)p__2__current - 2) = 1;
      return v75;
    case 1:
      v86 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v86 )
        goto LABEL_77;
      v86->fields.flag = 1;
      v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        v87,
        (Il2CppObject *)v86,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__2__,
        0LL);
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v87, 0LL);
      v88 = (Il2CppObject *)v4->fields.__8__1;
      v92 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v89, v90, v91);
      System_Func_bool____ctor(
        v92,
        v88,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__3__,
        0LL);
      v96 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v93, v94, v95);
      UnityEngine_WaitWhile___ctor(v96, v92, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v96;
      v97 = &v4->fields.__2__current;
      sub_1BCA784(v97, v96);
      v98 = 2;
      goto LABEL_75;
    case 2:
      v4->fields.__1__state = -1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantPhotoMaster___);
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   &entity,
                                                                   v4->fields._imageId_5__2,
                                                                   (const MethodInfo_31B3040 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !_4__this )
          goto LABEL_77;
        v142 = _4__this->fields.photoCampaignStandFigureBack;
        if ( !v142 )
          goto LABEL_77;
        standFigureCollectList = v142->fields.standFigureCollectList;
        if ( !standFigureCollectList )
          goto LABEL_77;
        size = (unsigned int)standFigureCollectList->fields._size;
        v145 = (ServantPhotoEntity_FaceData_o *)sub_1BCAA2C(ServantPhotoEntity_FaceData_TypeInfo, method, v99, v100);
        ServantPhotoEntity_FaceData___ctor(v145, 0LL);
        this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCA888(int___TypeInfo, (unsigned int)size);
        if ( !v145 )
          goto LABEL_77;
        v145->fields.multiFace = (struct System_Int32_array *)this;
        p_fields = &v145->fields;
        sub_1BCA784(&v145->fields, this);
        v147 = sub_1BCA888(int___TypeInfo, (unsigned int)size);
        v145->fields.multiForm = (struct System_Int32_array *)v147;
        p_multiForm = &v145->fields.multiForm;
        this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCA784(&v145->fields.multiForm, v147);
        if ( (int)size < 1 )
        {
LABEL_61:
          this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCA888(
                                                                       ServantPhotoEntity_FaceData___TypeInfo,
                                                                       1LL);
          if ( !this )
            goto LABEL_77;
          v155 = this;
          this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)sub_1BCA91C(v145, this->klass->_1.element_class);
          if ( !this )
          {
            v185 = sub_1BCAA60();
            sub_1BCA908(v185, 0LL);
          }
          if ( LODWORD(v155->fields.__2__current) )
          {
            v155->fields.__4__this = (struct MyRoomControl_o *)v145;
            sub_1BCA784(&v155->fields.__4__this, v145);
            p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
            v101 = v155;
            _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v155;
            goto LABEL_65;
          }
        }
        else
        {
          multiFace = p_fields->multiFace;
          if ( !p_fields->multiFace )
            goto LABEL_77;
          max_length = multiFace->max_length;
          v151 = 0LL;
          v152 = &multiFace->m_Items[1];
          while ( v151 < max_length )
          {
            v152[v151] = 0;
            v153 = *p_multiForm;
            if ( !*p_multiForm )
              goto LABEL_77;
            if ( v151 >= v153->max_length )
              break;
            v154 = (__int64)v153 + 4 * v151++;
            *(_DWORD *)(v154 + 32) = v4->fields._formId_5__3;
            if ( size == v151 )
              goto LABEL_61;
          }
        }
LABEL_78:
        sub_1BCAA44(this, method);
      }
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)entity;
      if ( !entity )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)ServantPhotoEntity__GetFaceList(
                                                                   (ServantPhotoEntity_o *)entity,
                                                                   v4->fields._formId_5__3,
                                                                   0LL);
      if ( !_4__this )
        goto LABEL_77;
      v101 = this;
      p_photoCampaignFaceList = &_4__this->fields.photoCampaignFaceList;
      _4__this->fields.photoCampaignFaceList = (struct ServantPhotoEntity_FaceData_array *)v101;
LABEL_65:
      sub_1BCA784(p_photoCampaignFaceList, v101);
      photoCampaignFaceList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.photoCampaignFaceList;
      v160 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo, v156);
        v160 = MyRoomControl___c_TypeInfo;
      }
      _9__401_4 = (System_Func_object__object__o *)v160->static_fields->__9__401_4;
      if ( !_9__401_4 )
      {
        if ( !v160->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v160, v156);
          v160 = MyRoomControl___c_TypeInfo;
        }
        v162 = (Il2CppObject *)v160->static_fields->__9;
        _9__401_4 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                       System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo,
                                                       v156,
                                                       v157,
                                                       v158);
        System_Func_object__object____ctor(
          _9__401_4,
          v162,
          Method_MyRoomControl___c__LoadPhotoCampaignServant_b__401_4__,
          0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__401_4 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__401_4;
        sub_1BCA784(&static_fields->__9__401_4, _9__401_4);
      }
      v164 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                    photoCampaignFaceList,
                                                                    (System_Func_TSource__IEnumerable_TResult___o *)_9__401_4,
                                                                    (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
      v165 = System_Linq_Enumerable__Distinct_int_(
               v164,
               (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)System_Linq_Enumerable__ToList_int_(
                                                                   v165,
                                                                   (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
      v166 = v4->fields.__8__1;
      if ( !v166 )
        goto LABEL_77;
      v166->fields.flag = 1;
      v167 = this;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this
        || (SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL),
            v169 = (Il2CppObject *)v4->fields.__8__1,
            v170 = SvtStandFigure,
            v174 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v171, v172, v173),
            System_Action___ctor(
              v174,
              v169,
              Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__5__,
              0LL),
            !v170) )
      {
LABEL_77:
        sub_1BCAA3C(this, method);
      }
      UIStandFigureR__PreloadFormAssets(v170, (System_Collections_Generic_List_int__o *)v167, v174, 0LL);
      v175 = (Il2CppObject *)v4->fields.__8__1;
      v179 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v176, v177, v178);
      System_Func_bool____ctor(
        v179,
        v175,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__6__,
        0LL);
      v183 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v180, v181, v182);
      UnityEngine_WaitWhile___ctor(v183, v179, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v183;
      v97 = &v4->fields.__2__current;
      sub_1BCA784(v97, v183);
      v98 = 3;
LABEL_75:
      *((_DWORD *)v97 - 2) = v98;
      return 1;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__SetRandomFaceListIndex(_4__this, 0LL);
      v103 = _4__this->fields.photoCampaignFaceList;
      if ( !v103 )
        goto LABEL_77;
      photoCampaignFaceListIndex = _4__this->fields.photoCampaignFaceListIndex;
      if ( (unsigned int)photoCampaignFaceListIndex >= v103->max_length )
        goto LABEL_78;
      v105 = v103->m_Items[photoCampaignFaceListIndex];
      v4->fields._faceData_5__4 = v105;
      sub_1BCA784(&v4->fields._faceData_5__4, v105);
      faceData_5__4 = v4->fields._faceData_5__4;
      v107 = (Il2CppObject *)v4->fields.__8__1;
      v111 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v108, v109, v110);
      System_Action___ctor(
        v111,
        v107,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__7__,
        0LL);
      MyRoomControl__SetFacePhotoServant(_4__this, faceData_5__4, v111, 0LL);
      v112 = (Il2CppObject *)v4->fields.__8__1;
      v116 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v113, v114, v115);
      System_Func_bool____ctor(
        v116,
        v112,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__8__,
        0LL);
      v120 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v117, v118, v119);
      UnityEngine_WaitWhile___ctor(v120, v116, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v120;
      v97 = &v4->fields.__2__current;
      sub_1BCA784(v97, v120);
      v98 = 4;
      goto LABEL_75;
    case 4:
      v121 = v4->fields._faceData_5__4;
      v4->fields.__1__state = -1;
      if ( !v121 )
        goto LABEL_77;
      multiForm = v121->fields.multiForm;
      if ( !multiForm )
        goto LABEL_77;
      if ( !multiForm->max_length )
        goto LABEL_78;
      if ( !_4__this )
        goto LABEL_77;
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        _4__this,
        v4->fields._imageId_5__2,
        multiForm->m_Items[1],
        &v4->fields._svtMovePos_5__5,
        &scale,
        0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.photoCampaignStandFigureBack;
      if ( !this )
        goto LABEL_77;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScale_34333164(gameObject, scale, 0LL);
      v126 = v4->fields.__8__1;
      if ( !v126 )
        goto LABEL_77;
      v126->fields.wait = 1;
      photoCampaignComponent = _4__this->fields.photoCampaignComponent;
      v128 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v124, v125);
      System_Action___ctor(
        v128,
        (Il2CppObject *)v126,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__9__,
        0LL);
      if ( !photoCampaignComponent )
        goto LABEL_77;
      PhotoCampaignComponent__CancelPhotoCampaignWindow(photoCampaignComponent, v128, 0LL);
      v129 = (Il2CppObject *)v4->fields.__8__1;
      v133 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v130, v131, v132);
      System_Func_bool____ctor(
        v133,
        v129,
        Method_MyRoomControl___c__DisplayClass401_0__LoadPhotoCampaignServant_b__10__,
        0LL);
      v137 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v134, v135, v136);
      UnityEngine_WaitWhile___ctor(v137, v133, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v137;
      v97 = &v4->fields.__2__current;
      sub_1BCA784(v97, v137);
      v98 = 5;
      goto LABEL_75;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 0LL);
      titleInfo = _4__this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)titleInfo->fields.titleImg;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v139 = _4__this->fields.titleInfo;
      if ( !v139 )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)v139->fields.headerBgImg;
      if ( !this )
        goto LABEL_77;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_77;
      TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)this, 0, 0LL);
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.photoCampaignStandFigureBack;
      _4__this->fields.photoCampaignState = 2;
      if ( !this )
        goto LABEL_77;
      v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MyRoomControl__moveControl(
        _4__this,
        v140,
        v4->fields._svtMovePos_5__5,
        (System_String_o *)StringLiteral_6827/*"FinishedFadePhotoServant"*/,
        0LL);
      if ( _4__this->fields._IsOnlyServant_k__BackingField )
        return 0;
      this = (MyRoomControl__LoadPhotoCampaignServant_d__401_o *)_4__this->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_77;
      v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(_4__this, 0LL);
      MyRoomControl__moveControl(_4__this, v141, PhotoCampaignMasterPosition, 0LL, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__401__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__401_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoCampaignServant_d__401__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoCampaignServant_d__401_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__LoadPhotoCampaignServant_d__401_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoCampaignServant_d__401__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoCampaignServant_d__401_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoCampaignServant_d__401__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoCampaignServant_d__401_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__412___ctor(
        MyRoomControl__StartCameraEffect_d__412_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__412__MoveNext(
        MyRoomControl__StartCameraEffect_d__412_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl__StartCameraEffect_d__412_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x22
  bool v15; // w21
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_WaitForSeconds_o *v20; // x19
  Il2CppObject **v21; // x20
  int32_t v22; // w1
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  Il2CppObject *photoCampaignCameraEffect; // x20
  __int64 v29; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v31; // x0
  Il2CppObject **p__2__current; // x20

  v3 = this;
  if ( (byte_4B11A3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    this = (MyRoomControl__StartCameraEffect_d__412_o *)sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v8, v9);
    byte_4B11A3A = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignFrameSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__412_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      _4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignFrameWideSprite;
    if ( !this )
      goto LABEL_34;
    this = (MyRoomControl__StartCameraEffect_d__412_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      !_4__this->fields._IsOnlyServant_k__BackingField,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_34;
    if ( _4__this->fields._IsOnlyServant_k__BackingField )
      v22 = 362;
    else
      v22 = 870;
    UIWidget__set_width((UIWidget_o *)this, v22, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v24);
      byte_4B109C1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(
      photoCampaignProduction,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          this = (MyRoomControl__StartCameraEffect_d__412_o *)TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL),
          (titleInfo = _4__this->fields.titleInfo) == 0LL)
      || (this = (MyRoomControl__StartCameraEffect_d__412_o *)titleInfo->fields.backBtn) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          MyRoomControl__SetPhotoCampaignUi(_4__this, 1, 0LL),
          (this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignCameraButton) == 0LL) )
    {
LABEL_34:
      sub_1BCAA3C(this, method);
    }
    photoCampaignCameraEffect = (Il2CppObject *)_4__this->fields.photoCampaignCameraEffect;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    v31 = UnityEngine_Object__Instantiate_object__49903816(
            photoCampaignCameraEffect,
            transform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    _4__this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v31;
    sub_1BCA784(&_4__this->fields.photoCampaignInstantiateCameraEffect, v31);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = &v3->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1BCA784(p__2__current, 0LL);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_34;
  this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.shutterEffect;
  if ( !this )
    goto LABEL_34;
  photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  UnityEngine_Object__Instantiate_object__49903816(
    photoCampaignShutterEffect,
    v14,
    (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignProduction;
  if ( !this )
    goto LABEL_34;
  v15 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (MyRoomControl__StartCameraEffect_d__412_o *)_4__this->fields.photoCampaignFadeSprite;
  if ( !this )
    goto LABEL_34;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeGetComponent_object_(
    v16,
    (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  v20 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v17, v18, v19);
  UnityEngine_WaitForSeconds___ctor(v20, 0.066, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v20;
  v21 = &v3->fields.__2__current;
  sub_1BCA784(v21, v20);
  *((_DWORD *)v21 - 2) = 1;
  return v15;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__412__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__412_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__412__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__412_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__StartCameraEffect_d__412_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__412__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__412_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__412__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__412_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11A23 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomControl___c_TypeInfo, v1, v2);
    byte_4B11A23 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MyRoomControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v4;
  sub_1BCA784(MyRoomControl___c_TypeInfo->static_fields, v4);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__319_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11A26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11A26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__239_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11A25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11A25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__330_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11A27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method, v2);
    byte_4B11A27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall MyRoomControl___c___LoadPhotoCampaignServant_b__401_4(
        MyRoomControl___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void __fastcall MyRoomControl___c___initMyRoom_b__217_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__238_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11A24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11A24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass237_0___ctor(
        MyRoomControl___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass237_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass241_0___ctor(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl___c__DisplayClass241_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  __int64 v11; // x2
  __int64 v12; // x3
  struct MyRoomControl_o *v13; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22

  v3 = this;
  if ( (byte_4B11A28 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MyRoomControl___c__DisplayClass241_0_o *)sub_1BCA7E0(
                                                       &Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__1__,
                                                       v4,
                                                       v5);
    byte_4B11A28 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_20;
  standFigureCollectList = (struct System_Action_o *)standFigureBack->fields.standFigureCollectList;
  this[1].fields.__9__1 = standFigureCollectList;
  sub_1BCA784(&this[1].fields.__9__1, standFigureCollectList);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[19].fields.__4__this, 0, 0LL);
  v9 = v3->fields.__4__this;
  if ( !v9 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v9->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9->fields.isExistVoiceData, 0LL);
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v10->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v10->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[18].fields.__9__2) )
    MyRoomControl__setNormalFace_31880432((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_20;
  favoriteChangeComp = v13->fields.favoriteChangeComp;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v11, v12);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    this = (MyRoomControl___c__DisplayClass241_0_o *)sub_1BCA784(&v3->fields.__9__1, _9__1);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1BCAA3C(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  __int64 v10; // x2
  __int64 v11; // x3
  struct MyRoomControl_o *v12; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  struct MyRoomControl_o *v15; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v17; // x8
  float v18; // s8
  int v19; // s1
  struct MyRoomControl_o *v20; // x8
  int v21; // s9
  int v22; // s2
  float v23; // s0
  int v24; // s1
  struct MyRoomControl_o *v25; // x8

  if ( (byte_4B11A29 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__2__, v4, v5);
    sub_1BCA7E0(&StringLiteral_11403/*"ReleaseTouch"*/, v6, v7);
    byte_4B11A29 = 1;
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
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v15->fields.standFigureBack;
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
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v17->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v18 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v20->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v21 = v19;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v22 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)_4__this,
                                             0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v23 = -v18;
    v24 = v21;
    MyRoomControl__moveControl(
      _4__this,
      _4__this->fields.svtObj,
      *(UnityEngine_Vector3_o *)(&v22 - 2),
      (System_String_o *)StringLiteral_11403/*"ReleaseTouch"*/,
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
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          standFigureBack = v12->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v10, v11);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _4__this = (MyRoomControl_o *)sub_1BCA784(&this->fields.__9__2, _9__2);
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
    sub_1BCAA3C(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_30;
  v25->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x0
  _BOOL4 isHeroine; // w8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_1BCAA3C(_4__this, v3);
  isHeroine = _4__this->fields.isHeroine;
  _4__this->fields.isSvtLoading = 0;
  if ( isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass242_0___ctor(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass242_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass242_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass242_0_o *)_4__this->fields.svtClickCollider) == 0LL)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0LL),
        !voicePlayBtn) )
  {
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass243_0___ctor(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_b__0(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl___c__DisplayClass243_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  struct MyRoomControl_o *v14; // x8
  struct MyRoomControl_o *v15; // x8
  struct MyRoomControl_o *v16; // x8
  int _9__1; // w8
  __int64 v18; // x2
  __int64 v19; // x3
  struct MyRoomControl_o *v20; // x8
  StandFigureBack_o *v21; // x20
  System_Action_o *v22; // x22
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

  v3 = this;
  if ( (byte_4B11A2A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__1__, v4, v5);
    this = (MyRoomControl___c__DisplayClass243_0_o *)sub_1BCA7E0(&StringLiteral_11403/*"ReleaseTouch"*/, v6, v7);
    byte_4B11A2A = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_46;
  standFigureCollectList = standFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1BCA784(&this[2].monitor, standFigureCollectList);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v11 = v3->fields.__4__this;
  if ( !v11 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v11->fields.moveBtnObj;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v12 = v3->fields.__4__this;
  if ( !v12 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v12->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v13->fields.helpBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v14 = v3->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v14->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v15 = v3->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v15->fields.svtClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v16 = v3->fields.__4__this;
  if ( !v16 )
    goto LABEL_46;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v16->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_46;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass243_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  if ( LOBYTE(this[22].fields.__4__this) )
    MyRoomControl__setNormalFace_31880432((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass243_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  _9__1 = (int)this[21].fields.__9__1;
  if ( _9__1 == 1 )
  {
    this = (MyRoomControl___c__DisplayClass243_0_o *)this[4].monitor;
    if ( !this )
      goto LABEL_46;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v23 = v3->fields.__4__this;
    if ( !v23 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v23->fields.standFigureBack;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass243_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass243_0_o *)this->fields.__9__1;
    if ( !this )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v25 = v3->fields.__4__this;
    if ( !v25 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v25->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v26 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v28 = v3->fields.__4__this;
    if ( !v28 )
      goto LABEL_46;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v28->fields.svtObj;
    if ( !this )
      goto LABEL_46;
    v29 = v27;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass243_0_o *)v3->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    v31 = -v26;
    v32 = v29;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[5].klass,
      *(UnityEngine_Vector3_o *)(&v30 - 2),
      (System_String_o *)StringLiteral_11403/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !_9__1 )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v20 = v3->fields.__4__this;
    if ( v20 )
    {
      v21 = v20->fields.standFigureBack;
      v22 = v3->fields.__9__1;
      if ( !v22 )
      {
        v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v18, v19);
        System_Action___ctor(
          v22,
          (Il2CppObject *)v3,
          Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__1__,
          0LL);
        v3->fields.__9__1 = v22;
        this = (MyRoomControl___c__DisplayClass243_0_o *)sub_1BCA784(&v3->fields.__9__1, v22);
      }
      if ( v21 )
      {
        StandFigureBack__Fadein(v21, v22, 0LL);
        return;
      }
    }
LABEL_46:
    sub_1BCAA3C(this, method);
  }
  ActionExtensions__Call(v3->fields.end_act, 0LL);
  v33 = v3->fields.__4__this;
  if ( !v33 )
    goto LABEL_46;
  v33->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_1BCAA3C(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


void __fastcall MyRoomControl___c__DisplayClass250_0___ctor(
        MyRoomControl___c__DisplayClass250_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass250_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass250_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl___c__DisplayClass250_0_o *v3; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v5; // x8
  struct MyRoomControl_o *v6; // x8

  v3 = this;
  if ( (byte_4B11A2B & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass250_0_o *)sub_1BCA7E0(&StringLiteral_8392/*"LOAD_END"*/, method, v2);
    byte_4B11A2B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)_4__this->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v5 = v3->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)v5->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v3->fields.svtVoiceEnt, 0LL),
        (v6 = v3->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)v6->fields.myRoomFsm) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8392/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass323_0___ctor(
        MyRoomControl___c__DisplayClass323_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass323_0___SetFavoriteSvt_b__0(
        MyRoomControl___c__DisplayClass323_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass323_0_o *v3; // x19
  struct MyRoomControl_o *v4; // x8
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass323_0_o *)_4__this->fields.svtCtr) == 0LL)
    || (MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          _4__this->fields.voiceList,
          _4__this->fields.asstName,
          0LL),
        (v4 = v3->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass323_0_o *)v4->fields.svtCtr) == 0LL
    || (MyRoomSvtControl__initFirstPlayVoiceList((MyRoomSvtControl_o *)this, v3->fields.svtVoiceEnt, 0LL),
        (v5 = v3->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  v5->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass323_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass323_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4B11A2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11A2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall MyRoomControl___c__DisplayClass323_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass323_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass342_0___ctor(
        MyRoomControl___c__DisplayClass342_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass342_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass342_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass342_0_o *v4; // x19
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
  this = (MyRoomControl___c__DisplayClass342_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = bondsStandFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1BCA784(&this[2].monitor, standFigureCollectList);
  this = (MyRoomControl___c__DisplayClass342_0_o *)v4->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass342_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass342_0_o *)v8->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v9 = v6;
  v10 = v7;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11
    || (this = (MyRoomControl___c__DisplayClass342_0_o *)v11->fields.bondsStandFigureBack) == 0LL
    || (this = (MyRoomControl___c__DisplayClass342_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0LL)) == 0LL
    || (this = *(MyRoomControl___c__DisplayClass342_0_o **)&this->fields.createStandEnd) == 0LL
    || (this = (MyRoomControl___c__DisplayClass342_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  v12.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v12.fields.y = v9;
  v12.fields.z = v10;
  GameObjectExtensions__SetLocalPosition(v4->fields.bondsSvtObj, v12, 0LL);
  v4->fields.createStandEnd = 1;
}


void __fastcall MyRoomControl___c__DisplayClass358_0___ctor(
        MyRoomControl___c__DisplayClass358_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass358_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass358_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1BCAA3C(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass379_0___ctor(
        MyRoomControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass379_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0LL )
    sub_1BCAA3C(this, method);
  return this->fields.loadedCount < (signed int)multipleStandFigureBacks->max_length;
}


void __fastcall MyRoomControl___c__DisplayClass379_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass379_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass379_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void __fastcall MyRoomControl___c__DisplayClass383_0___ctor(
        MyRoomControl___c__DisplayClass383_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass383_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass383_0_o *this,
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
    sub_1BCAA3C(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass383_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass383_0_o *this,
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
    sub_1BCAA3C(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___ctor(
        MyRoomControl___c__DisplayClass394_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass394_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass394_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  AssetData_o *v3; // x20
  MyRoomControl___c__DisplayClass394_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  struct MyRoomControl_o *_4__this; // x8
  __int64 v42; // x1
  Il2CppObject *Object_object__49237568; // x21
  __int64 v44; // x1
  Il2CppObject *Component_object; // x21
  struct MyRoomControl_o *v46; // x8
  struct MyRoomControl_o *v47; // x21
  struct MyRoomControl_o *v48; // x21
  struct MyRoomControl_o *v49; // x25
  struct MyRoomControl_o *v50; // x8
  Il2CppObject *v51; // x21
  __int64 v52; // x1
  UnityEngine_Transform_o *transform; // x22
  struct MyRoomControl_o *v54; // x8
  struct MyRoomControl_o *v55; // x21
  struct MyRoomControl_o *v56; // x8
  struct MyRoomControl_o *v57; // x22
  struct MyRoomControl_o *v58; // x8
  Il2CppObject *v59; // x21
  UnityEngine_Transform_o *v60; // x0
  struct MyRoomControl_o *v61; // x8
  struct MyRoomControl_o *v62; // x21

  v3 = assetData;
  v4 = this;
  if ( (byte_4B11A2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_20480/*"img_bg_shutter"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10823/*"Polaroid_img_frame_wide"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8479/*"LayerChangeButton"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10754/*"PhotoSettingButton"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_9028/*"MasterEquipSettingDialog"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5465/*"DownloadPhotoCampaignAtlas"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17383/*"bit_camera_shutter"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17382/*"bit_camera_iconblink"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_10821/*"Polaroid_btn_shutter"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_10822/*"Polaroid_img_frame"*/, v37, v38);
    this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BCA7E0(&StringLiteral_10755/*"PhotoTargetSelectDialog"*/, v39, v40);
    byte_4B11A2D = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_42;
  _4__this->fields.photoCampaignAssetData = v3;
  this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BCA784(&_4__this->fields.photoCampaignAssetData, v3);
  if ( !v3 )
    goto LABEL_42;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              v3,
                              (System_String_o *)StringLiteral_5465/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__49237568,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__49237568 )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__49237568,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v46 = v4->fields.__4__this;
      if ( !v46 )
        goto LABEL_42;
      v46->fields.photoCampaignAtlas = (struct UIAtlas_o *)Component_object;
      sub_1BCA784(&v46->fields.photoCampaignAtlas, Component_object);
    }
  }
  this = (MyRoomControl___c__DisplayClass394_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.__4__this,
    (System_String_o *)StringLiteral_10822/*"Polaroid_img_frame"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass394_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[26].fields.callBack,
    (System_String_o *)StringLiteral_10823/*"Polaroid_img_frame_wide"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass394_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_10821/*"Polaroid_btn_shutter"*/,
    0LL);
  this = (MyRoomControl___c__DisplayClass394_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_42;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].klass,
    (System_String_o *)StringLiteral_20480/*"img_bg_shutter"*/,
    0LL);
  v47 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object__49237568(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17382/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v47 )
    goto LABEL_42;
  v47->fields.photoCampaignCameraEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v47->fields.photoCampaignCameraEffect, this);
  v48 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object__49237568(
                                                     v3,
                                                     (System_String_o *)StringLiteral_17383/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v48 )
    goto LABEL_42;
  v48->fields.photoCampaignShutterEffect = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v48->fields.photoCampaignShutterEffect, this);
  v49 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object__49237568(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10755/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v50 = v4->fields.__4__this;
  if ( !v50 )
    goto LABEL_42;
  v51 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)v50->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                     v51,
                                                     transform,
                                                     (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v49 )
    goto LABEL_42;
  v49->fields.photoTargetSelectDialog = (struct PhotoTargetSelectDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BCA784(&v49->fields.photoTargetSelectDialog, this);
  v54 = v4->fields.__4__this;
  if ( !v54 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass394_0_o *)v54->fields.photoTargetSelectDialog;
  if ( !this )
    goto LABEL_42;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v55 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object__49237568(
                                                     v3,
                                                     (System_String_o *)StringLiteral_10754/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v56 = v4->fields.__4__this;
  if ( !v56 )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                     (Il2CppObject *)this,
                                                     v56->fields.panelRoot,
                                                     (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v55 )
    goto LABEL_42;
  v55->fields.photoSettingButtonComponent = (struct PhotoSettingButtonComponent_o *)this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BCA784(&v55->fields.photoSettingButtonComponent, this);
  assetData = (AssetData_o *)v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass394_0_o *)assetData[14].fields.attrib;
  if ( !this )
    goto LABEL_42;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v57 = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object__49237568(
                                                     v3,
                                                     (System_String_o *)StringLiteral_9028/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v58 = v4->fields.__4__this;
  if ( !v58 )
    goto LABEL_42;
  v59 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)v58->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_42;
  v60 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                     v59,
                                                     v60,
                                                     (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_42;
  this = (MyRoomControl___c__DisplayClass394_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v57 )
    goto LABEL_42;
  v57->fields.masterEquipSettingDialog = (struct MasterEquipSettingDialog_o *)this;
  this = (MyRoomControl___c__DisplayClass394_0_o *)sub_1BCA784(&v57->fields.masterEquipSettingDialog, this);
  v61 = v4->fields.__4__this;
  if ( !v61
    || (this = (MyRoomControl___c__DisplayClass394_0_o *)v61->fields.masterEquipSettingDialog) == 0LL
    || (MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL),
        v62 = v4->fields.__4__this,
        this = (MyRoomControl___c__DisplayClass394_0_o *)AssetData__GetObject_object__49237568(
                                                           v3,
                                                           (System_String_o *)StringLiteral_8479/*"LayerChangeButton"*/,
                                                           (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        !v62)
    || (v62->fields.photoLayerChangeObj = (struct UnityEngine_GameObject_o *)this,
        sub_1BCA784(&v62->fields.photoLayerChangeObj, this),
        (this = (MyRoomControl___c__DisplayClass394_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_42:
    sub_1BCAA3C(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callBack, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass395_0___ctor(
        MyRoomControl___c__DisplayClass395_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass395_0___LoadMasterEquip_b__0(
        MyRoomControl___c__DisplayClass395_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass395_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v15; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v17; // x8
  struct MyRoomControl_o *v18; // x8
  struct EquipEntity_o *v19; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterMaleEquipTexture; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4B11A2E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, assetData, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Add__, v9, v10);
    this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1BCA7E0(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v11,
                                                       v12);
    byte_4B11A2E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass395_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v15 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v17[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1BCA784(v17 + 4, assetData);
        }
        v18 = v4->fields.__4__this;
        if ( v18 )
        {
          v19 = v4->fields.equipEnt;
          if ( v19 )
          {
            masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v18->fields.masterMaleEquipTexture;
            v22 = *(_QWORD *)&v19->fields.id.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v19->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, assetData);
            *(_QWORD *)&v24.fields.currentCryptoKey = v22;
            *(_QWORD *)&v24.fields.fakeValue = v21;
            this = (MyRoomControl___c__DisplayClass395_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v24,
                                                               0LL);
            if ( assetData )
            {
              v23 = (int)this;
              this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v23,
                  (Il2CppObject *)this,
                  (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetData);
  AssetManager__releaseAsset_38505704(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass395_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass395_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass395_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v15; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v17; // x8
  struct MyRoomControl_o *v18; // x8
  struct EquipEntity_o *v19; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterFemaleEquipTexture; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4B11A2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, assetData, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Add__, v9, v10);
    this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1BCA7E0(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v11,
                                                       v12);
    byte_4B11A2F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass395_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v15 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v17[4] = (EquipEntity_c *)assetData;
          this = (MyRoomControl___c__DisplayClass395_0_o *)sub_1BCA784(v17 + 4, assetData);
        }
        v18 = v4->fields.__4__this;
        if ( v18 )
        {
          v19 = v4->fields.equipEnt;
          if ( v19 )
          {
            masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v18->fields.masterFemaleEquipTexture;
            v22 = *(_QWORD *)&v19->fields.id.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v19->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, assetData);
            *(_QWORD *)&v24.fields.currentCryptoKey = v22;
            *(_QWORD *)&v24.fields.fakeValue = v21;
            this = (MyRoomControl___c__DisplayClass395_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v24,
                                                               0LL);
            if ( assetData )
            {
              v23 = (int)this;
              this = (MyRoomControl___c__DisplayClass395_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v23,
                  (Il2CppObject *)this,
                  (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetData);
  AssetManager__releaseAsset_38505704(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass401_0___ctor(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__0(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl___c__DisplayClass401_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct MyRoomControl_o *_4__this; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  __int64 v18; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v20; // x0
  Il2CppObject *Component_object; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *v24; // x21
  void *monitor; // x8
  System_Collections_Generic_List_object__o *v26; // x20
  EventDelegate_Callback_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  EventDelegate_o *v31; // x21
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  v3 = this;
  if ( (byte_4B11A30 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8, v9);
    sub_1BCA7E0(&Method_MyRoomControl_OnClickPhotoServant__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v12, v13);
    this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B11A30 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass401_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_17;
  photoLayerChangeObj = (Il2CppObject *)_4__this->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass401_0_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  if ( !this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass401_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v20 = UnityEngine_Object__Instantiate_object__49903816(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       (UnityEngine_GameObject_o *)v20,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  _4__this->fields.photoSvtTouchPress = (struct UITouchPress_o *)Component_object;
  this = (MyRoomControl___c__DisplayClass401_0_o *)sub_1BCA784(&_4__this->fields.photoSvtTouchPress, Component_object);
  v24 = (Il2CppObject *)v3->fields.__4__this;
  if ( !v24 )
    goto LABEL_17;
  monitor = v24[84].monitor;
  if ( !monitor )
    goto LABEL_17;
  v26 = (System_Collections_Generic_List_object__o *)*((_QWORD *)monitor + 4);
  v27 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v22, v23);
  EventDelegate_Callback___ctor(v27, v24, (intptr_t)Method_MyRoomControl_OnClickPhotoServant__, 0LL);
  v31 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v28, v29, v30);
  EventDelegate___ctor_47348668(v31, v27, 0LL);
  if ( !v26
    || (items = v26->fields._items,
        v33 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v26->fields._version,
        !items) )
  {
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v31,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v31;
    sub_1BCA784(v35 + 4, v31);
  }
  v3->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__1(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


bool __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__10(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__2(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__3(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__5(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__6(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__7(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__8(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass401_0___LoadPhotoCampaignServant_b__9(
        MyRoomControl___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void __fastcall MyRoomControl___c__DisplayClass402_0___ctor(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass402_0___CreatePhotoMasterFigure_b__0(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl___c__DisplayClass402_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v19; // x8
  struct MyRoomControl_o *v20; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *Component_object; // x0
  struct MyRoomControl_o *v25; // x8
  struct MyRoomControl_o *v26; // x22
  Il2CppObject *photoLayerChangeObj; // x20
  __int64 v28; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  Il2CppObject *v34; // x21
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *data; // x20
  EventDelegate_Callback_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  EventDelegate_o *v41; // x21
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B11A31 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UITouchPress___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10, v11);
    sub_1BCA7E0(&Method_MyRoomControl_OnclickPhotoMaster__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v14, v15);
    this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    byte_4B11A31 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass402_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass402_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v19 = v3->fields.__4__this;
  if ( !v19 )
    goto LABEL_26;
  if ( !this )
    goto LABEL_26;
  v46.fields.z = v19->fields.defaultPhotoServantPos.fields.z + 0.0;
  v46.fields.y = v19->fields.defaultPhotoServantPos.fields.y + 0.0;
  v46.fields.x = v19->fields.defaultPhotoServantPos.fields.x + flt_BD1628[!v19->fields._IsMasterRight_k__BackingField];
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v46, 0LL);
  v20 = v3->fields.__4__this;
  if ( !v20 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass402_0_o *)v20->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(gameObject, 0.9, 0LL);
  v22 = v3->fields.__4__this;
  if ( !v22 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass402_0_o *)v22->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v23,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  v22->fields.photoMasterPanel = (struct UIPanel_o *)Component_object;
  this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1BCA784(&v22->fields.photoMasterPanel, Component_object);
  v25 = v3->fields.__4__this;
  if ( !v25 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass402_0_o *)v25->fields.photoMasterPanel;
  if ( !this )
    goto LABEL_26;
  UIPanel__set_depth((UIPanel_o *)this, 15, 0LL);
  v26 = v3->fields.__4__this;
  if ( !v26 )
    goto LABEL_26;
  this = (MyRoomControl___c__DisplayClass402_0_o *)v26->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_26;
  photoLayerChangeObj = (Il2CppObject *)v26->fields.photoLayerChangeObj;
  this = (MyRoomControl___c__DisplayClass402_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  v30 = UnityEngine_Object__Instantiate_object__49903816(
          photoLayerChangeObj,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  v31 = GameObjectExtensions__SafeGetComponent_object_(
          (UnityEngine_GameObject_o *)v30,
          (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UITouchPress___);
  v26->fields.photoMasterTouchPress = (struct UITouchPress_o *)v31;
  this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1BCA784(&v26->fields.photoMasterTouchPress, v31);
  v34 = (Il2CppObject *)v3->fields.__4__this;
  if ( !v34 )
    goto LABEL_26;
  klass = v34[85].klass;
  if ( !klass )
    goto LABEL_26;
  data = (System_Collections_Generic_List_object__o *)klass->_1.byval_arg.data;
  v37 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v32, v33);
  EventDelegate_Callback___ctor(v37, v34, (intptr_t)Method_MyRoomControl_OnclickPhotoMaster__, 0LL);
  v41 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v38, v39, v40);
  EventDelegate___ctor_47348668(v41, v37, 0LL);
  if ( !data
    || (items = data->fields._items,
        v43 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++data->fields._version,
        !items) )
  {
LABEL_26:
    sub_1BCAA3C(this, method);
  }
  size = data->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      data,
      (Il2CppObject *)v41,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &items->obj.klass + size;
    data->fields._size = size + 1;
    v45[4] = (Il2CppClass *)v41;
    sub_1BCA784(v45 + 4, v41);
  }
  ActionExtensions__Call(v3->fields.func, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass406_0___ctor(
        MyRoomControl___c__DisplayClass406_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass406_0___ChangePhotoCampaignServantFace_b__0(
        MyRoomControl___c__DisplayClass406_0_o *this,
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
    sub_1BCAA44(_4__this, method);
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
        GameObjectExtensions__SetLocalScale_34333164(v9, scale, 0LL),
        v10 = this->fields.__4__this,
        v12 = *(_QWORD *)&position.fields.x,
        !v10) )
  {
LABEL_11:
    sub_1BCAA3C(_4__this, method);
  }
  p_currentPhotoServantPos = &v10->fields.currentPhotoServantPos;
  p_currentPhotoServantPos->fields.z = position.fields.z;
  *(_QWORD *)&p_currentPhotoServantPos->fields.x = v12;
}


void __fastcall MyRoomControl___c__DisplayClass425_0___ctor(
        MyRoomControl___c__DisplayClass425_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass425_0___ChangeMasterSetting_b__1(
        MyRoomControl___c__DisplayClass425_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl___c__DisplayClass425_0_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x23
  UIMasterFigureTextureOld_o *klass; // x19
  int32_t genderType; // w20
  int32_t equipId; // w21
  System_Action_o *v11; // x22

  v4 = this;
  if ( (byte_4B11A32 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MyRoomControl___c__DisplayClass425_0_o *)sub_1BCA7E0(
                                                       &Method_MyRoomControl__ChangeMasterSetting_b__425_2__,
                                                       v5,
                                                       v6);
    byte_4B11A32 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (klass = (UIMasterFigureTextureOld_o *)_4__this[82].klass,
        genderType = v4->fields.genderType,
        equipId = v4->fields.equipId,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v11, _4__this, Method_MyRoomControl__ChangeMasterSetting_b__425_2__, 0LL),
        !klass) )
  {
    sub_1BCAA3C(this, method);
  }
  UIMasterFigureTextureOld__SetCharacter(klass, 2, genderType, equipId, v11, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass426_0___ctor(
        MyRoomControl___c__DisplayClass426_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass426_0___ExchangePosition_b__0(
        MyRoomControl___c__DisplayClass426_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl___c__DisplayClass426_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MyRoomControl_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomControl_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x0
  struct MyRoomControl_o *v10; // x8
  struct UnityEngine_Vector3_o *p_currentPhotoServantPos; // x8
  struct MyRoomControl_o *v12; // x8
  MyRoomControl_o *v13; // x8
  MyRoomControl___c__DisplayClass426_0_o *v14; // x19
  CommonUI_o *v15; // x19
  __int64 v16; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B11A33 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    this = (MyRoomControl___c__DisplayClass426_0_o *)sub_1BCA7E0(
                                                       &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                       v4,
                                                       v5);
    byte_4B11A33 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass426_0_o *)_4__this->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, v3->fields.svtMovePos, 0LL);
  v8 = v3->fields.__4__this;
  if ( !v8 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass426_0_o *)v8->fields.photoCampaignStandFigureBack;
  if ( !this )
    goto LABEL_15;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(v9, v3->fields.svtMoveScale, 0LL);
  v10 = v3->fields.__4__this;
  v16 = *(_QWORD *)&v3->fields.svtMovePos.fields.x;
  if ( !v10 )
    goto LABEL_15;
  p_currentPhotoServantPos = &v10->fields.currentPhotoServantPos;
  p_currentPhotoServantPos->fields.z = v3->fields.svtMovePos.fields.z;
  *(_QWORD *)&p_currentPhotoServantPos->fields.x = v16;
  v12 = v3->fields.__4__this;
  if ( !v12 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass426_0_o *)v12->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass426_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_15;
  v14 = this;
  PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v13, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v14, PhotoCampaignMasterPosition, 0LL);
  this = (MyRoomControl___c__DisplayClass426_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v15 )
LABEL_15:
    sub_1BCAA3C(this, method);
  CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall MyRoomControl__initMaterial_d__286___ctor(
        MyRoomControl__initMaterial_d__286_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__initMaterial_d__286__MoveNext(
        MyRoomControl__initMaterial_d__286_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  bool v16; // w21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Func_bool__o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  UnityEngine_WaitUntil_o *v24; // x20
  Il2CppObject **p__2__current; // x19

  if ( (byte_4B11A3B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomControl__initMaterial_b__286_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v10, v11);
    byte_4B11A3B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1BCAA3C(Instance, v15);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v16 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v20 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v17, v18, v19);
  System_Func_bool____ctor(v20, _4__this, Method_MyRoomControl__initMaterial_b__286_0__, 0LL);
  v24 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v21, v22, v23);
  UnityEngine_WaitUntil___ctor(v24, v20, 0LL);
  this->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, v24);
  *((_DWORD *)p__2__current - 2) = 1;
  return v16;
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__286__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__initMaterial_d__286__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__286_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__initMaterial_d__286_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__initMaterial_d__286__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__initMaterial_d__286__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__286_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__342___ctor(
        MyRoomControl__svtVoicePlayAct_d__342_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__svtVoicePlayAct_d__342__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__342_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MyRoomControl__svtVoicePlayAct_d__342_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v34; // x22
  struct MyRoomControl_o *v35; // x1
  CommonUI_o *v36; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_T__o *v42; // x21
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v47; // x22
  System_String_o *VoiceAssetName; // x0
  Il2CppObject *v49; // x23
  struct MaterialEventLogListViewItem_Info_o *v50; // x8
  System_String_o *v51; // x0
  struct MaterialEventLogListViewItem_Info_o *v52; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40584836; // x0
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40584108; // x0
  struct MyRoomControl___c__DisplayClass342_0_o *_8__1; // x22
  struct MyRoomControl___c__DisplayClass342_0_o *v58; // x8
  struct MyRoomControl___c__DisplayClass342_0_o *v59; // x8
  struct MaterialEventLogListViewItem_Info_o *v60; // x8
  int32_t v61; // w22
  struct MyRoomControl_o *v62; // x8
  struct MyRoomControl_o *v63; // x8
  __int64 v64; // x2
  __int64 v65; // x3
  struct MaterialEventLogListViewItem_Info_o *v66; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  int32_t v69; // w23
  Il2CppObject *v70; // x26
  System_Action_o *v71; // x25
  struct MyRoomControl___c__DisplayClass342_0_o *v72; // x8
  Il2CppObject **v73; // x19
  int v74; // w8
  int32_t v75; // w21
  MyRoomControl__svtVoicePlayAct_d__342_o *v76; // x22
  struct MyRoomControl_o *v77; // x8
  CommonUI_o *v78; // x21
  CommonUI_o *v79; // x21
  struct MyRoomControl___c__DisplayClass342_0_o *v80; // x8
  CommonUI_o *v81; // x20
  __int16 v82; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t formId[2]; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B11A3C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&char_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_MyRoomControl___c__DisplayClass342_0__svtVoicePlayAct_b__0__, v29, v30);
    this = (MyRoomControl__svtVoicePlayAct_d__342_o *)sub_1BCA7E0(
                                                        &MyRoomControl___c__DisplayClass342_0_TypeInfo,
                                                        v31,
                                                        v32);
    byte_4B11A3C = 1;
  }
  *(_QWORD *)formId = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v34 = (Il2CppObject *)sub_1BCAA2C(MyRoomControl___c__DisplayClass342_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v34, 0LL);
      v4->fields.__8__1 = (struct MyRoomControl___c__DisplayClass342_0_o *)v34;
      sub_1BCA784(&v4->fields.__8__1, v34);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_126;
      v35 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v35;
      sub_1BCA784(&this->fields, v35);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      if ( !v36 )
        goto LABEL_126;
      CommonUI__maskFadeout(v36, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v42 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                      v39,
                                                      v40,
                                                      v41);
      System_Collections_Generic_List_Int32Enum____ctor(
        v42,
        (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v42 )
        goto LABEL_126;
      items = v42->fields._items;
      v44 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v42->fields._version;
      if ( !items )
        goto LABEL_126;
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v42,
          81,
          *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v42->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v4->fields.item;
      if ( !item )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      v47 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v4->fields._voiceAssetName_5__2 = VoiceAssetName;
      sub_1BCA784(&v4->fields._voiceAssetName_5__2, VoiceAssetName);
      v49 = (Il2CppObject *)System_Int32__ToString((int)v47 + 20, 0LL);
      v82 = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)j_il2cpp_value_box_0(char_TypeInfo, &v82);
      v50 = v4->fields.item;
      if ( !v50 )
        goto LABEL_126;
      v51 = System_String__Concat_62412232(v49, (Il2CppObject *)this, (Il2CppObject *)v50->fields.voiceId, 0LL);
      v4->fields._playSvtVoiceId_5__3 = v51;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)sub_1BCA784(&v4->fields._playSvtVoiceId_5__3, v51);
      v52 = v4->fields.item;
      if ( !v52 )
        goto LABEL_126;
      VoiceList_40584836 = ServantVoiceEntity__getVoiceList_40584836(
                             v47,
                             v52->fields.svtVoiceType,
                             v4->fields._playSvtVoiceId_5__3,
                             (System_Collections_Generic_List_CondType_Kind__o *)v42,
                             0,
                             0LL);
      v4->fields._svtVoiceDataList_5__4 = VoiceList_40584836;
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v4->fields._svtVoiceDataList_5__4;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)sub_1BCA784(
                                                          &v4->fields._svtVoiceDataList_5__4,
                                                          VoiceList_40584836);
      if ( v4->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v55 = v4->fields.item;
      if ( !v55 )
        goto LABEL_126;
      VoiceList_40584108 = ServantVoiceEntity__getVoiceList_40584108(
                             v47,
                             v55->fields.svtVoiceType,
                             3,
                             v55->fields.voiceCondValue,
                             0LL,
                             -1,
                             0LL);
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)VoiceList_40584108;
      sub_1BCA784(&v4->fields._svtVoiceDataList_5__4, VoiceList_40584108);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      _8__1 = v4->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_126;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)sub_1BCA784(&_8__1->fields.bondsSvtObj, this);
      v58 = v4->fields.__8__1;
      if ( !v58 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)v58->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v59 = v4->fields.__8__1;
      if ( !v59 )
        goto LABEL_126;
      v59->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      v60 = v4->fields.item;
      if ( !v60 )
        goto LABEL_126;
      v61 = (int)this;
      MyRoomControl__SetImageIdAndFormId(_4__this, formId, &formId[1], v60->fields.svt_id, (int32_t)this, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_127;
      v62 = this->fields.__4__this;
      if ( !v62 )
        goto LABEL_126;
      if ( !HIDWORD(v62->fields.myRoomListCtr) )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_127:
        sub_1BCAA44(this, method);
      v63 = this->fields.__4__this;
      if ( !v63 )
        goto LABEL_126;
      formId[1] = (int32_t)v63->fields.myRoomListCtr;
LABEL_59:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v66 = v4->fields.item;
      if ( !v66 )
        goto LABEL_126;
      svt_id = v66->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v69 = formId[1];
      v70 = (Il2CppObject *)v4->fields.__8__1;
      v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v64, v65);
      System_Action___ctor(v71, v70, Method_MyRoomControl___c__DisplayClass342_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_126;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v61, 1, 0, v69, 10, v71, 0, 0LL);
LABEL_63:
      v72 = v4->fields.__8__1;
      if ( !v72 )
        goto LABEL_126;
      if ( !v72->fields.createStandEnd )
      {
        v4->fields.__2__current = 0LL;
        v73 = &v4->fields.__2__current;
        sub_1BCA784(v73, 0LL);
        v74 = 2;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__voiceLoad(_4__this, v4->fields._voiceAssetName_5__2, 0LL, 0LL);
LABEL_67:
      if ( _4__this->fields.isVoiceLoading )
      {
        v4->fields.__2__current = 0LL;
        v73 = &v4->fields.__2__current;
        sub_1BCA784(v73, 0LL);
        v74 = 3;
        goto LABEL_125;
      }
      method = (const MethodInfo *)v4->fields._svtVoiceDataList_5__4;
      if ( !method )
        goto LABEL_126;
      if ( SLODWORD(method->name) >= 2 )
      {
        v75 = 0;
        while ( 1 )
        {
          this = (MyRoomControl__svtVoicePlayAct_d__342_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v75,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_126;
          v76 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_127;
          v77 = this->fields.__4__this;
          if ( !v77 )
            goto LABEL_126;
          this = (MyRoomControl__svtVoicePlayAct_d__342_o *)System_String__op_Equality(
                                                              *(System_String_o **)&v77->fields.m_CachedPtr,
                                                              v4->fields._playSvtVoiceId_5__3,
                                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          method = (const MethodInfo *)v4->fields._svtVoiceDataList_5__4;
          if ( !method )
            goto LABEL_126;
          if ( ++v75 >= SLODWORD(method->name) )
            goto LABEL_84;
        }
        this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice_32192120(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v76,
          v4->fields._voiceAssetName_5__2,
          0LL);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)method,
          v4->fields._voiceAssetName_5__2,
          0LL);
      }
LABEL_84:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v78 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      if ( !v78 )
        goto LABEL_126;
      CommonUI__maskFadein(v78, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_90:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        v73 = &v4->fields.__2__current;
        sub_1BCA784(v73, 0LL);
        v74 = 4;
        goto LABEL_125;
      }
LABEL_93:
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v4->fields.__2__current = 0LL;
        v73 = &v4->fields.__2__current;
        sub_1BCA784(v73, 0LL);
        v74 = 5;
        goto LABEL_125;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v79 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      if ( !v79 )
        goto LABEL_126;
      CommonUI__maskFadeout(v79, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_101:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        v73 = &v4->fields.__2__current;
        sub_1BCA784(v73, 0LL);
        v74 = 6;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v4->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v80 = v4->fields.__8__1;
      if ( !v80 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)v80->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v81 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      if ( !v81 )
        goto LABEL_126;
      CommonUI__maskFadein(v81, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_120:
      this = (MyRoomControl__svtVoicePlayAct_d__342_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_126:
        sub_1BCAA3C(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v4->fields.__2__current = 0LL;
      v73 = &v4->fields.__2__current;
      sub_1BCA784(v73, 0LL);
      v74 = 7;
LABEL_125:
      *((_DWORD *)v73 - 2) = v74;
      return 1;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_10;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_63;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_126;
      goto LABEL_67;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_90;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_93;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_101;
    case 7:
      v4->fields.__1__state = -1;
      goto LABEL_120;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__342__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__342_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__svtVoicePlayAct_d__342__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__342_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomControl__svtVoicePlayAct_d__342_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__342__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__342_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__342__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__342_o *this,
        const MethodInfo *method)
{
  ;
}